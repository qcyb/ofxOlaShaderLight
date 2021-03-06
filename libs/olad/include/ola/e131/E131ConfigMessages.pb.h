// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: E131ConfigMessages.proto

#ifndef PROTOBUF_E131ConfigMessages_2eproto__INCLUDED
#define PROTOBUF_E131ConfigMessages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace ola {
namespace plugin {
namespace e131 {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_E131ConfigMessages_2eproto();
void protobuf_AssignDesc_E131ConfigMessages_2eproto();
void protobuf_ShutdownFile_E131ConfigMessages_2eproto();

class PreviewModeRequest;
class InputPortInfo;
class OutputPortInfo;
class PortInfoReply;
class Request;
class Reply;

enum Request_RequestType {
  Request_RequestType_E131_PORT_INFO = 1,
  Request_RequestType_E131_PREVIEW_MODE = 2
};
bool Request_RequestType_IsValid(int value);
const Request_RequestType Request_RequestType_RequestType_MIN = Request_RequestType_E131_PORT_INFO;
const Request_RequestType Request_RequestType_RequestType_MAX = Request_RequestType_E131_PREVIEW_MODE;
const int Request_RequestType_RequestType_ARRAYSIZE = Request_RequestType_RequestType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Request_RequestType_descriptor();
inline const ::std::string& Request_RequestType_Name(Request_RequestType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Request_RequestType_descriptor(), value);
}
inline bool Request_RequestType_Parse(
    const ::std::string& name, Request_RequestType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Request_RequestType>(
    Request_RequestType_descriptor(), name, value);
}
enum Reply_ReplyType {
  Reply_ReplyType_E131_PORT_INFO = 1
};
bool Reply_ReplyType_IsValid(int value);
const Reply_ReplyType Reply_ReplyType_ReplyType_MIN = Reply_ReplyType_E131_PORT_INFO;
const Reply_ReplyType Reply_ReplyType_ReplyType_MAX = Reply_ReplyType_E131_PORT_INFO;
const int Reply_ReplyType_ReplyType_ARRAYSIZE = Reply_ReplyType_ReplyType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Reply_ReplyType_descriptor();
inline const ::std::string& Reply_ReplyType_Name(Reply_ReplyType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Reply_ReplyType_descriptor(), value);
}
inline bool Reply_ReplyType_Parse(
    const ::std::string& name, Reply_ReplyType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Reply_ReplyType>(
    Reply_ReplyType_descriptor(), name, value);
}
// ===================================================================

class PreviewModeRequest : public ::google::protobuf::Message {
 public:
  PreviewModeRequest();
  virtual ~PreviewModeRequest();

  PreviewModeRequest(const PreviewModeRequest& from);

  inline PreviewModeRequest& operator=(const PreviewModeRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PreviewModeRequest& default_instance();

  void Swap(PreviewModeRequest* other);

  // implements Message ----------------------------------------------

  PreviewModeRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PreviewModeRequest& from);
  void MergeFrom(const PreviewModeRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 port_id = 1;
  inline bool has_port_id() const;
  inline void clear_port_id();
  static const int kPortIdFieldNumber = 1;
  inline ::google::protobuf::int32 port_id() const;
  inline void set_port_id(::google::protobuf::int32 value);

  // required bool preview_mode = 2;
  inline bool has_preview_mode() const;
  inline void clear_preview_mode();
  static const int kPreviewModeFieldNumber = 2;
  inline bool preview_mode() const;
  inline void set_preview_mode(bool value);

  // required bool input_port = 3;
  inline bool has_input_port() const;
  inline void clear_input_port();
  static const int kInputPortFieldNumber = 3;
  inline bool input_port() const;
  inline void set_input_port(bool value);

  // @@protoc_insertion_point(class_scope:ola.plugin.e131.PreviewModeRequest)
 private:
  inline void set_has_port_id();
  inline void clear_has_port_id();
  inline void set_has_preview_mode();
  inline void clear_has_preview_mode();
  inline void set_has_input_port();
  inline void clear_has_input_port();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 port_id_;
  bool preview_mode_;
  bool input_port_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_E131ConfigMessages_2eproto();
  friend void protobuf_AssignDesc_E131ConfigMessages_2eproto();
  friend void protobuf_ShutdownFile_E131ConfigMessages_2eproto();

  void InitAsDefaultInstance();
  static PreviewModeRequest* default_instance_;
};
// -------------------------------------------------------------------

class InputPortInfo : public ::google::protobuf::Message {
 public:
  InputPortInfo();
  virtual ~InputPortInfo();

  InputPortInfo(const InputPortInfo& from);

  inline InputPortInfo& operator=(const InputPortInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const InputPortInfo& default_instance();

  void Swap(InputPortInfo* other);

  // implements Message ----------------------------------------------

  InputPortInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const InputPortInfo& from);
  void MergeFrom(const InputPortInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 port_id = 1;
  inline bool has_port_id() const;
  inline void clear_port_id();
  static const int kPortIdFieldNumber = 1;
  inline ::google::protobuf::int32 port_id() const;
  inline void set_port_id(::google::protobuf::int32 value);

  // required bool preview_mode = 2;
  inline bool has_preview_mode() const;
  inline void clear_preview_mode();
  static const int kPreviewModeFieldNumber = 2;
  inline bool preview_mode() const;
  inline void set_preview_mode(bool value);

  // @@protoc_insertion_point(class_scope:ola.plugin.e131.InputPortInfo)
 private:
  inline void set_has_port_id();
  inline void clear_has_port_id();
  inline void set_has_preview_mode();
  inline void clear_has_preview_mode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 port_id_;
  bool preview_mode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_E131ConfigMessages_2eproto();
  friend void protobuf_AssignDesc_E131ConfigMessages_2eproto();
  friend void protobuf_ShutdownFile_E131ConfigMessages_2eproto();

  void InitAsDefaultInstance();
  static InputPortInfo* default_instance_;
};
// -------------------------------------------------------------------

class OutputPortInfo : public ::google::protobuf::Message {
 public:
  OutputPortInfo();
  virtual ~OutputPortInfo();

  OutputPortInfo(const OutputPortInfo& from);

  inline OutputPortInfo& operator=(const OutputPortInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OutputPortInfo& default_instance();

  void Swap(OutputPortInfo* other);

  // implements Message ----------------------------------------------

  OutputPortInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OutputPortInfo& from);
  void MergeFrom(const OutputPortInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 port_id = 1;
  inline bool has_port_id() const;
  inline void clear_port_id();
  static const int kPortIdFieldNumber = 1;
  inline ::google::protobuf::int32 port_id() const;
  inline void set_port_id(::google::protobuf::int32 value);

  // required bool preview_mode = 2;
  inline bool has_preview_mode() const;
  inline void clear_preview_mode();
  static const int kPreviewModeFieldNumber = 2;
  inline bool preview_mode() const;
  inline void set_preview_mode(bool value);

  // @@protoc_insertion_point(class_scope:ola.plugin.e131.OutputPortInfo)
 private:
  inline void set_has_port_id();
  inline void clear_has_port_id();
  inline void set_has_preview_mode();
  inline void clear_has_preview_mode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 port_id_;
  bool preview_mode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_E131ConfigMessages_2eproto();
  friend void protobuf_AssignDesc_E131ConfigMessages_2eproto();
  friend void protobuf_ShutdownFile_E131ConfigMessages_2eproto();

  void InitAsDefaultInstance();
  static OutputPortInfo* default_instance_;
};
// -------------------------------------------------------------------

class PortInfoReply : public ::google::protobuf::Message {
 public:
  PortInfoReply();
  virtual ~PortInfoReply();

  PortInfoReply(const PortInfoReply& from);

  inline PortInfoReply& operator=(const PortInfoReply& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PortInfoReply& default_instance();

  void Swap(PortInfoReply* other);

  // implements Message ----------------------------------------------

  PortInfoReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PortInfoReply& from);
  void MergeFrom(const PortInfoReply& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ola.plugin.e131.InputPortInfo input_port = 1;
  inline int input_port_size() const;
  inline void clear_input_port();
  static const int kInputPortFieldNumber = 1;
  inline const ::ola::plugin::e131::InputPortInfo& input_port(int index) const;
  inline ::ola::plugin::e131::InputPortInfo* mutable_input_port(int index);
  inline ::ola::plugin::e131::InputPortInfo* add_input_port();
  inline const ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::InputPortInfo >&
      input_port() const;
  inline ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::InputPortInfo >*
      mutable_input_port();

  // repeated .ola.plugin.e131.OutputPortInfo output_port = 2;
  inline int output_port_size() const;
  inline void clear_output_port();
  static const int kOutputPortFieldNumber = 2;
  inline const ::ola::plugin::e131::OutputPortInfo& output_port(int index) const;
  inline ::ola::plugin::e131::OutputPortInfo* mutable_output_port(int index);
  inline ::ola::plugin::e131::OutputPortInfo* add_output_port();
  inline const ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::OutputPortInfo >&
      output_port() const;
  inline ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::OutputPortInfo >*
      mutable_output_port();

  // @@protoc_insertion_point(class_scope:ola.plugin.e131.PortInfoReply)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::InputPortInfo > input_port_;
  ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::OutputPortInfo > output_port_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_E131ConfigMessages_2eproto();
  friend void protobuf_AssignDesc_E131ConfigMessages_2eproto();
  friend void protobuf_ShutdownFile_E131ConfigMessages_2eproto();

  void InitAsDefaultInstance();
  static PortInfoReply* default_instance_;
};
// -------------------------------------------------------------------

class Request : public ::google::protobuf::Message {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Request& default_instance();

  void Swap(Request* other);

  // implements Message ----------------------------------------------

  Request* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Request_RequestType RequestType;
  static const RequestType E131_PORT_INFO = Request_RequestType_E131_PORT_INFO;
  static const RequestType E131_PREVIEW_MODE = Request_RequestType_E131_PREVIEW_MODE;
  static inline bool RequestType_IsValid(int value) {
    return Request_RequestType_IsValid(value);
  }
  static const RequestType RequestType_MIN =
    Request_RequestType_RequestType_MIN;
  static const RequestType RequestType_MAX =
    Request_RequestType_RequestType_MAX;
  static const int RequestType_ARRAYSIZE =
    Request_RequestType_RequestType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  RequestType_descriptor() {
    return Request_RequestType_descriptor();
  }
  static inline const ::std::string& RequestType_Name(RequestType value) {
    return Request_RequestType_Name(value);
  }
  static inline bool RequestType_Parse(const ::std::string& name,
      RequestType* value) {
    return Request_RequestType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .ola.plugin.e131.Request.RequestType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::ola::plugin::e131::Request_RequestType type() const;
  inline void set_type(::ola::plugin::e131::Request_RequestType value);

  // optional .ola.plugin.e131.PreviewModeRequest preview_mode = 2;
  inline bool has_preview_mode() const;
  inline void clear_preview_mode();
  static const int kPreviewModeFieldNumber = 2;
  inline const ::ola::plugin::e131::PreviewModeRequest& preview_mode() const;
  inline ::ola::plugin::e131::PreviewModeRequest* mutable_preview_mode();
  inline ::ola::plugin::e131::PreviewModeRequest* release_preview_mode();
  inline void set_allocated_preview_mode(::ola::plugin::e131::PreviewModeRequest* preview_mode);

  // @@protoc_insertion_point(class_scope:ola.plugin.e131.Request)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_preview_mode();
  inline void clear_has_preview_mode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::ola::plugin::e131::PreviewModeRequest* preview_mode_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_E131ConfigMessages_2eproto();
  friend void protobuf_AssignDesc_E131ConfigMessages_2eproto();
  friend void protobuf_ShutdownFile_E131ConfigMessages_2eproto();

  void InitAsDefaultInstance();
  static Request* default_instance_;
};
// -------------------------------------------------------------------

class Reply : public ::google::protobuf::Message {
 public:
  Reply();
  virtual ~Reply();

  Reply(const Reply& from);

  inline Reply& operator=(const Reply& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Reply& default_instance();

  void Swap(Reply* other);

  // implements Message ----------------------------------------------

  Reply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Reply& from);
  void MergeFrom(const Reply& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Reply_ReplyType ReplyType;
  static const ReplyType E131_PORT_INFO = Reply_ReplyType_E131_PORT_INFO;
  static inline bool ReplyType_IsValid(int value) {
    return Reply_ReplyType_IsValid(value);
  }
  static const ReplyType ReplyType_MIN =
    Reply_ReplyType_ReplyType_MIN;
  static const ReplyType ReplyType_MAX =
    Reply_ReplyType_ReplyType_MAX;
  static const int ReplyType_ARRAYSIZE =
    Reply_ReplyType_ReplyType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ReplyType_descriptor() {
    return Reply_ReplyType_descriptor();
  }
  static inline const ::std::string& ReplyType_Name(ReplyType value) {
    return Reply_ReplyType_Name(value);
  }
  static inline bool ReplyType_Parse(const ::std::string& name,
      ReplyType* value) {
    return Reply_ReplyType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .ola.plugin.e131.Reply.ReplyType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::ola::plugin::e131::Reply_ReplyType type() const;
  inline void set_type(::ola::plugin::e131::Reply_ReplyType value);

  // optional .ola.plugin.e131.PortInfoReply port_info = 2;
  inline bool has_port_info() const;
  inline void clear_port_info();
  static const int kPortInfoFieldNumber = 2;
  inline const ::ola::plugin::e131::PortInfoReply& port_info() const;
  inline ::ola::plugin::e131::PortInfoReply* mutable_port_info();
  inline ::ola::plugin::e131::PortInfoReply* release_port_info();
  inline void set_allocated_port_info(::ola::plugin::e131::PortInfoReply* port_info);

  // @@protoc_insertion_point(class_scope:ola.plugin.e131.Reply)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_port_info();
  inline void clear_has_port_info();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::ola::plugin::e131::PortInfoReply* port_info_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_E131ConfigMessages_2eproto();
  friend void protobuf_AssignDesc_E131ConfigMessages_2eproto();
  friend void protobuf_ShutdownFile_E131ConfigMessages_2eproto();

  void InitAsDefaultInstance();
  static Reply* default_instance_;
};
// ===================================================================


// ===================================================================

// PreviewModeRequest

// required int32 port_id = 1;
inline bool PreviewModeRequest::has_port_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PreviewModeRequest::set_has_port_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PreviewModeRequest::clear_has_port_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PreviewModeRequest::clear_port_id() {
  port_id_ = 0;
  clear_has_port_id();
}
inline ::google::protobuf::int32 PreviewModeRequest::port_id() const {
  return port_id_;
}
inline void PreviewModeRequest::set_port_id(::google::protobuf::int32 value) {
  set_has_port_id();
  port_id_ = value;
}

// required bool preview_mode = 2;
inline bool PreviewModeRequest::has_preview_mode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PreviewModeRequest::set_has_preview_mode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PreviewModeRequest::clear_has_preview_mode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PreviewModeRequest::clear_preview_mode() {
  preview_mode_ = false;
  clear_has_preview_mode();
}
inline bool PreviewModeRequest::preview_mode() const {
  return preview_mode_;
}
inline void PreviewModeRequest::set_preview_mode(bool value) {
  set_has_preview_mode();
  preview_mode_ = value;
}

// required bool input_port = 3;
inline bool PreviewModeRequest::has_input_port() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PreviewModeRequest::set_has_input_port() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PreviewModeRequest::clear_has_input_port() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PreviewModeRequest::clear_input_port() {
  input_port_ = false;
  clear_has_input_port();
}
inline bool PreviewModeRequest::input_port() const {
  return input_port_;
}
inline void PreviewModeRequest::set_input_port(bool value) {
  set_has_input_port();
  input_port_ = value;
}

// -------------------------------------------------------------------

// InputPortInfo

// required int32 port_id = 1;
inline bool InputPortInfo::has_port_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InputPortInfo::set_has_port_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InputPortInfo::clear_has_port_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InputPortInfo::clear_port_id() {
  port_id_ = 0;
  clear_has_port_id();
}
inline ::google::protobuf::int32 InputPortInfo::port_id() const {
  return port_id_;
}
inline void InputPortInfo::set_port_id(::google::protobuf::int32 value) {
  set_has_port_id();
  port_id_ = value;
}

// required bool preview_mode = 2;
inline bool InputPortInfo::has_preview_mode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InputPortInfo::set_has_preview_mode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InputPortInfo::clear_has_preview_mode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InputPortInfo::clear_preview_mode() {
  preview_mode_ = false;
  clear_has_preview_mode();
}
inline bool InputPortInfo::preview_mode() const {
  return preview_mode_;
}
inline void InputPortInfo::set_preview_mode(bool value) {
  set_has_preview_mode();
  preview_mode_ = value;
}

// -------------------------------------------------------------------

// OutputPortInfo

// required int32 port_id = 1;
inline bool OutputPortInfo::has_port_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OutputPortInfo::set_has_port_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OutputPortInfo::clear_has_port_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OutputPortInfo::clear_port_id() {
  port_id_ = 0;
  clear_has_port_id();
}
inline ::google::protobuf::int32 OutputPortInfo::port_id() const {
  return port_id_;
}
inline void OutputPortInfo::set_port_id(::google::protobuf::int32 value) {
  set_has_port_id();
  port_id_ = value;
}

// required bool preview_mode = 2;
inline bool OutputPortInfo::has_preview_mode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OutputPortInfo::set_has_preview_mode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OutputPortInfo::clear_has_preview_mode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OutputPortInfo::clear_preview_mode() {
  preview_mode_ = false;
  clear_has_preview_mode();
}
inline bool OutputPortInfo::preview_mode() const {
  return preview_mode_;
}
inline void OutputPortInfo::set_preview_mode(bool value) {
  set_has_preview_mode();
  preview_mode_ = value;
}

// -------------------------------------------------------------------

// PortInfoReply

// repeated .ola.plugin.e131.InputPortInfo input_port = 1;
inline int PortInfoReply::input_port_size() const {
  return input_port_.size();
}
inline void PortInfoReply::clear_input_port() {
  input_port_.Clear();
}
inline const ::ola::plugin::e131::InputPortInfo& PortInfoReply::input_port(int index) const {
  return input_port_.Get(index);
}
inline ::ola::plugin::e131::InputPortInfo* PortInfoReply::mutable_input_port(int index) {
  return input_port_.Mutable(index);
}
inline ::ola::plugin::e131::InputPortInfo* PortInfoReply::add_input_port() {
  return input_port_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::InputPortInfo >&
PortInfoReply::input_port() const {
  return input_port_;
}
inline ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::InputPortInfo >*
PortInfoReply::mutable_input_port() {
  return &input_port_;
}

// repeated .ola.plugin.e131.OutputPortInfo output_port = 2;
inline int PortInfoReply::output_port_size() const {
  return output_port_.size();
}
inline void PortInfoReply::clear_output_port() {
  output_port_.Clear();
}
inline const ::ola::plugin::e131::OutputPortInfo& PortInfoReply::output_port(int index) const {
  return output_port_.Get(index);
}
inline ::ola::plugin::e131::OutputPortInfo* PortInfoReply::mutable_output_port(int index) {
  return output_port_.Mutable(index);
}
inline ::ola::plugin::e131::OutputPortInfo* PortInfoReply::add_output_port() {
  return output_port_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::OutputPortInfo >&
PortInfoReply::output_port() const {
  return output_port_;
}
inline ::google::protobuf::RepeatedPtrField< ::ola::plugin::e131::OutputPortInfo >*
PortInfoReply::mutable_output_port() {
  return &output_port_;
}

// -------------------------------------------------------------------

// Request

// required .ola.plugin.e131.Request.RequestType type = 1;
inline bool Request::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Request::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Request::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Request::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::ola::plugin::e131::Request_RequestType Request::type() const {
  return static_cast< ::ola::plugin::e131::Request_RequestType >(type_);
}
inline void Request::set_type(::ola::plugin::e131::Request_RequestType value) {
  assert(::ola::plugin::e131::Request_RequestType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional .ola.plugin.e131.PreviewModeRequest preview_mode = 2;
inline bool Request::has_preview_mode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Request::set_has_preview_mode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Request::clear_has_preview_mode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Request::clear_preview_mode() {
  if (preview_mode_ != NULL) preview_mode_->::ola::plugin::e131::PreviewModeRequest::Clear();
  clear_has_preview_mode();
}
inline const ::ola::plugin::e131::PreviewModeRequest& Request::preview_mode() const {
  return preview_mode_ != NULL ? *preview_mode_ : *default_instance_->preview_mode_;
}
inline ::ola::plugin::e131::PreviewModeRequest* Request::mutable_preview_mode() {
  set_has_preview_mode();
  if (preview_mode_ == NULL) preview_mode_ = new ::ola::plugin::e131::PreviewModeRequest;
  return preview_mode_;
}
inline ::ola::plugin::e131::PreviewModeRequest* Request::release_preview_mode() {
  clear_has_preview_mode();
  ::ola::plugin::e131::PreviewModeRequest* temp = preview_mode_;
  preview_mode_ = NULL;
  return temp;
}
inline void Request::set_allocated_preview_mode(::ola::plugin::e131::PreviewModeRequest* preview_mode) {
  delete preview_mode_;
  preview_mode_ = preview_mode;
  if (preview_mode) {
    set_has_preview_mode();
  } else {
    clear_has_preview_mode();
  }
}

// -------------------------------------------------------------------

// Reply

// required .ola.plugin.e131.Reply.ReplyType type = 1;
inline bool Reply::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Reply::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Reply::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Reply::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::ola::plugin::e131::Reply_ReplyType Reply::type() const {
  return static_cast< ::ola::plugin::e131::Reply_ReplyType >(type_);
}
inline void Reply::set_type(::ola::plugin::e131::Reply_ReplyType value) {
  assert(::ola::plugin::e131::Reply_ReplyType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional .ola.plugin.e131.PortInfoReply port_info = 2;
inline bool Reply::has_port_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Reply::set_has_port_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Reply::clear_has_port_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Reply::clear_port_info() {
  if (port_info_ != NULL) port_info_->::ola::plugin::e131::PortInfoReply::Clear();
  clear_has_port_info();
}
inline const ::ola::plugin::e131::PortInfoReply& Reply::port_info() const {
  return port_info_ != NULL ? *port_info_ : *default_instance_->port_info_;
}
inline ::ola::plugin::e131::PortInfoReply* Reply::mutable_port_info() {
  set_has_port_info();
  if (port_info_ == NULL) port_info_ = new ::ola::plugin::e131::PortInfoReply;
  return port_info_;
}
inline ::ola::plugin::e131::PortInfoReply* Reply::release_port_info() {
  clear_has_port_info();
  ::ola::plugin::e131::PortInfoReply* temp = port_info_;
  port_info_ = NULL;
  return temp;
}
inline void Reply::set_allocated_port_info(::ola::plugin::e131::PortInfoReply* port_info) {
  delete port_info_;
  port_info_ = port_info;
  if (port_info) {
    set_has_port_info();
  } else {
    clear_has_port_info();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace e131
}  // namespace plugin
}  // namespace ola

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ola::plugin::e131::Request_RequestType>() {
  return ::ola::plugin::e131::Request_RequestType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ola::plugin::e131::Reply_ReplyType>() {
  return ::ola::plugin::e131::Reply_ReplyType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_E131ConfigMessages_2eproto__INCLUDED
