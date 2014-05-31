// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request.taskinfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "request.taskinfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace hpgc {

namespace {

const ::google::protobuf::Descriptor* TaskInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TaskInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* TaskType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_request_2etaskinfo_2eproto() {
  protobuf_AddDesc_request_2etaskinfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "request.taskinfo.proto");
  GOOGLE_CHECK(file != NULL);
  TaskInfo_descriptor_ = file->message_type(0);
  static const int TaskInfo_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskInfo, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskInfo, dataindex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskInfo, starttime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskInfo, endtime_),
  };
  TaskInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TaskInfo_descriptor_,
      TaskInfo::default_instance_,
      TaskInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TaskInfo));
  TaskType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_request_2etaskinfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TaskInfo_descriptor_, &TaskInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_request_2etaskinfo_2eproto() {
  delete TaskInfo::default_instance_;
  delete TaskInfo_reflection_;
}

void protobuf_AddDesc_request_2etaskinfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026request.taskinfo.proto\022\004hpgc\"_\n\010TaskIn"
    "fo\022\034\n\004Type\030\001 \002(\0162\016.hpgc.TaskType\022\021\n\tData"
    "Index\030\002 \002(\005\022\021\n\tStartTime\030\003 \002(\001\022\017\n\007EndTim"
    "e\030\004 \002(\001*\035\n\010TaskType\022\006\n\002OK\020\000\022\t\n\005WRONG\020\001", 158);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "request.taskinfo.proto", &protobuf_RegisterTypes);
  TaskInfo::default_instance_ = new TaskInfo();
  TaskInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_request_2etaskinfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_request_2etaskinfo_2eproto {
  StaticDescriptorInitializer_request_2etaskinfo_2eproto() {
    protobuf_AddDesc_request_2etaskinfo_2eproto();
  }
} static_descriptor_initializer_request_2etaskinfo_2eproto_;
const ::google::protobuf::EnumDescriptor* TaskType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskType_descriptor_;
}
bool TaskType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int TaskInfo::kTypeFieldNumber;
const int TaskInfo::kDataIndexFieldNumber;
const int TaskInfo::kStartTimeFieldNumber;
const int TaskInfo::kEndTimeFieldNumber;
#endif  // !_MSC_VER

TaskInfo::TaskInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TaskInfo::InitAsDefaultInstance() {
}

TaskInfo::TaskInfo(const TaskInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TaskInfo::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  dataindex_ = 0;
  starttime_ = 0;
  endtime_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TaskInfo::~TaskInfo() {
  SharedDtor();
}

void TaskInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TaskInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TaskInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskInfo_descriptor_;
}

const TaskInfo& TaskInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_request_2etaskinfo_2eproto();
  return *default_instance_;
}

TaskInfo* TaskInfo::default_instance_ = NULL;

TaskInfo* TaskInfo::New() const {
  return new TaskInfo;
}

void TaskInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    dataindex_ = 0;
    starttime_ = 0;
    endtime_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TaskInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .hpgc.TaskType Type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::hpgc::TaskType_IsValid(value)) {
            set_type(static_cast< ::hpgc::TaskType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_DataIndex;
        break;
      }

      // required int32 DataIndex = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_DataIndex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &dataindex_)));
          set_has_dataindex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_StartTime;
        break;
      }

      // required double StartTime = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_StartTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &starttime_)));
          set_has_starttime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(33)) goto parse_EndTime;
        break;
      }

      // required double EndTime = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_EndTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &endtime_)));
          set_has_endtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TaskInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .hpgc.TaskType Type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required int32 DataIndex = 2;
  if (has_dataindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->dataindex(), output);
  }

  // required double StartTime = 3;
  if (has_starttime()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->starttime(), output);
  }

  // required double EndTime = 4;
  if (has_endtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->endtime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TaskInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .hpgc.TaskType Type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required int32 DataIndex = 2;
  if (has_dataindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->dataindex(), target);
  }

  // required double StartTime = 3;
  if (has_starttime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->starttime(), target);
  }

  // required double EndTime = 4;
  if (has_endtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->endtime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TaskInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .hpgc.TaskType Type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // required int32 DataIndex = 2;
    if (has_dataindex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->dataindex());
    }

    // required double StartTime = 3;
    if (has_starttime()) {
      total_size += 1 + 8;
    }

    // required double EndTime = 4;
    if (has_endtime()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TaskInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TaskInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TaskInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TaskInfo::MergeFrom(const TaskInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_dataindex()) {
      set_dataindex(from.dataindex());
    }
    if (from.has_starttime()) {
      set_starttime(from.starttime());
    }
    if (from.has_endtime()) {
      set_endtime(from.endtime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TaskInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TaskInfo::CopyFrom(const TaskInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TaskInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void TaskInfo::Swap(TaskInfo* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(dataindex_, other->dataindex_);
    std::swap(starttime_, other->starttime_);
    std::swap(endtime_, other->endtime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TaskInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TaskInfo_descriptor_;
  metadata.reflection = TaskInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace hpgc

// @@protoc_insertion_point(global_scope)
