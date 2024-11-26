// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: modemCommunication.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_modemCommunication_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_modemCommunication_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_modemCommunication_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_modemCommunication_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_modemCommunication_2eproto;
namespace modemCommunication {
class ModemCommunicationReply;
struct ModemCommunicationReplyDefaultTypeInternal;
extern ModemCommunicationReplyDefaultTypeInternal _ModemCommunicationReply_default_instance_;
class ModemCommunicationRequest;
struct ModemCommunicationRequestDefaultTypeInternal;
extern ModemCommunicationRequestDefaultTypeInternal _ModemCommunicationRequest_default_instance_;
}  // namespace modemCommunication
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace modemCommunication {

// ===================================================================


// -------------------------------------------------------------------

class ModemCommunicationRequest final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:modemCommunication.ModemCommunicationRequest) */ {
 public:
  inline ModemCommunicationRequest() : ModemCommunicationRequest(nullptr) {}
  ~ModemCommunicationRequest() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR ModemCommunicationRequest(
      ::google::protobuf::internal::ConstantInitialized);

  inline ModemCommunicationRequest(const ModemCommunicationRequest& from) : ModemCommunicationRequest(nullptr, from) {}
  inline ModemCommunicationRequest(ModemCommunicationRequest&& from) noexcept
      : ModemCommunicationRequest(nullptr, std::move(from)) {}
  inline ModemCommunicationRequest& operator=(const ModemCommunicationRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ModemCommunicationRequest& operator=(ModemCommunicationRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ModemCommunicationRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ModemCommunicationRequest* internal_default_instance() {
    return reinterpret_cast<const ModemCommunicationRequest*>(
        &_ModemCommunicationRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(ModemCommunicationRequest& a, ModemCommunicationRequest& b) { a.Swap(&b); }
  inline void Swap(ModemCommunicationRequest* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ModemCommunicationRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ModemCommunicationRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<ModemCommunicationRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ModemCommunicationRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const ModemCommunicationRequest& from) { ModemCommunicationRequest::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(ModemCommunicationRequest* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "modemCommunication.ModemCommunicationRequest"; }

 protected:
  explicit ModemCommunicationRequest(::google::protobuf::Arena* arena);
  ModemCommunicationRequest(::google::protobuf::Arena* arena, const ModemCommunicationRequest& from);
  ModemCommunicationRequest(::google::protobuf::Arena* arena, ModemCommunicationRequest&& from) noexcept
      : ModemCommunicationRequest(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kMessageFieldNumber = 1,
    kContactNumberFieldNumber = 2,
  };
  // string message = 1;
  void clear_message() ;
  const std::string& message() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_message(Arg_&& arg, Args_... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* value);

  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(
      const std::string& value);
  std::string* _internal_mutable_message();

  public:
  // int32 contact_number = 2;
  void clear_contact_number() ;
  ::int32_t contact_number() const;
  void set_contact_number(::int32_t value);

  private:
  ::int32_t _internal_contact_number() const;
  void _internal_set_contact_number(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:modemCommunication.ModemCommunicationRequest)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      60, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_ModemCommunicationRequest_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const ModemCommunicationRequest& from_msg);
    ::google::protobuf::internal::ArenaStringPtr message_;
    ::int32_t contact_number_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_modemCommunication_2eproto;
};
// -------------------------------------------------------------------

class ModemCommunicationReply final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:modemCommunication.ModemCommunicationReply) */ {
 public:
  inline ModemCommunicationReply() : ModemCommunicationReply(nullptr) {}
  ~ModemCommunicationReply() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR ModemCommunicationReply(
      ::google::protobuf::internal::ConstantInitialized);

  inline ModemCommunicationReply(const ModemCommunicationReply& from) : ModemCommunicationReply(nullptr, from) {}
  inline ModemCommunicationReply(ModemCommunicationReply&& from) noexcept
      : ModemCommunicationReply(nullptr, std::move(from)) {}
  inline ModemCommunicationReply& operator=(const ModemCommunicationReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline ModemCommunicationReply& operator=(ModemCommunicationReply&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ModemCommunicationReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const ModemCommunicationReply* internal_default_instance() {
    return reinterpret_cast<const ModemCommunicationReply*>(
        &_ModemCommunicationReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(ModemCommunicationReply& a, ModemCommunicationReply& b) { a.Swap(&b); }
  inline void Swap(ModemCommunicationReply* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ModemCommunicationReply* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ModemCommunicationReply* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<ModemCommunicationReply>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ModemCommunicationReply& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const ModemCommunicationReply& from) { ModemCommunicationReply::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(ModemCommunicationReply* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "modemCommunication.ModemCommunicationReply"; }

 protected:
  explicit ModemCommunicationReply(::google::protobuf::Arena* arena);
  ModemCommunicationReply(::google::protobuf::Arena* arena, const ModemCommunicationReply& from);
  ModemCommunicationReply(::google::protobuf::Arena* arena, ModemCommunicationReply&& from) noexcept
      : ModemCommunicationReply(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message() ;
  const std::string& message() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_message(Arg_&& arg, Args_... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* value);

  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(
      const std::string& value);
  std::string* _internal_mutable_message();

  public:
  // @@protoc_insertion_point(class_scope:modemCommunication.ModemCommunicationReply)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      58, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_ModemCommunicationReply_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const ModemCommunicationReply& from_msg);
    ::google::protobuf::internal::ArenaStringPtr message_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_modemCommunication_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ModemCommunicationRequest

// string message = 1;
inline void ModemCommunicationRequest::clear_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.ClearToEmpty();
}
inline const std::string& ModemCommunicationRequest::message() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:modemCommunication.ModemCommunicationRequest.message)
  return _internal_message();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ModemCommunicationRequest::set_message(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:modemCommunication.ModemCommunicationRequest.message)
}
inline std::string* ModemCommunicationRequest::mutable_message() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:modemCommunication.ModemCommunicationRequest.message)
  return _s;
}
inline const std::string& ModemCommunicationRequest::_internal_message() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.message_.Get();
}
inline void ModemCommunicationRequest::_internal_set_message(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.Set(value, GetArena());
}
inline std::string* ModemCommunicationRequest::_internal_mutable_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.message_.Mutable( GetArena());
}
inline std::string* ModemCommunicationRequest::release_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:modemCommunication.ModemCommunicationRequest.message)
  return _impl_.message_.Release();
}
inline void ModemCommunicationRequest::set_allocated_message(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.message_.IsDefault()) {
          _impl_.message_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:modemCommunication.ModemCommunicationRequest.message)
}

// int32 contact_number = 2;
inline void ModemCommunicationRequest::clear_contact_number() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.contact_number_ = 0;
}
inline ::int32_t ModemCommunicationRequest::contact_number() const {
  // @@protoc_insertion_point(field_get:modemCommunication.ModemCommunicationRequest.contact_number)
  return _internal_contact_number();
}
inline void ModemCommunicationRequest::set_contact_number(::int32_t value) {
  _internal_set_contact_number(value);
  // @@protoc_insertion_point(field_set:modemCommunication.ModemCommunicationRequest.contact_number)
}
inline ::int32_t ModemCommunicationRequest::_internal_contact_number() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.contact_number_;
}
inline void ModemCommunicationRequest::_internal_set_contact_number(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.contact_number_ = value;
}

// -------------------------------------------------------------------

// ModemCommunicationReply

// string message = 1;
inline void ModemCommunicationReply::clear_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.ClearToEmpty();
}
inline const std::string& ModemCommunicationReply::message() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:modemCommunication.ModemCommunicationReply.message)
  return _internal_message();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ModemCommunicationReply::set_message(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:modemCommunication.ModemCommunicationReply.message)
}
inline std::string* ModemCommunicationReply::mutable_message() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:modemCommunication.ModemCommunicationReply.message)
  return _s;
}
inline const std::string& ModemCommunicationReply::_internal_message() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.message_.Get();
}
inline void ModemCommunicationReply::_internal_set_message(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.Set(value, GetArena());
}
inline std::string* ModemCommunicationReply::_internal_mutable_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.message_.Mutable( GetArena());
}
inline std::string* ModemCommunicationReply::release_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:modemCommunication.ModemCommunicationReply.message)
  return _impl_.message_.Release();
}
inline void ModemCommunicationReply::set_allocated_message(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.message_.IsDefault()) {
          _impl_.message_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:modemCommunication.ModemCommunicationReply.message)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace modemCommunication


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_modemCommunication_2eproto_2epb_2eh
