#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/fwd.h"

#include <cstdint>
#include <string_view>

namespace nocturne::core {

void deleteActor(CDemonActor *actor_ptr);
int adjustIndentationLevel(int indent_delta);
// Whether the actor's class matches a class expression: class names, '!' before a name or a
// bracketed expression, and '&' or '|' (or "&&", "||") between them, applied left to right with
// neither taking precedence. A name matches its own class and every class derived from it.
// False for no actor, and for an expression that can't be read.
[[nodiscard]] bool isOfClass(const CDemonActor *actor_ptr, std::string_view class_name);
// Whether the actor's class, or one it derives from, has the name's hash. False for no actor.
[[nodiscard]] bool isOfClassHash(const CDemonActor *actor_ptr, std::uint32_t class_name_hash);
// The actor when isOfClassHash holds; null otherwise.
[[nodiscard]] CDemonActor *castToClassHash(CDemonActor *actor_ptr, std::uint32_t class_name_hash);
// castToClassHash by the class's own type, as that class.
template <typename T>
[[nodiscard]] T *castToClass(CDemonActor *actor_ptr) {
    return dynamic_cast<T *>(castToClassHash(actor_ptr, T::kType.name_hash));
}
void syncActorTypeIDs();
// The angle moved by whole turns to within pi of 0; one already there is left as it is.
[[nodiscard]] float normalizeAngleToPi(float angle_radians);
void crc32ProcessByte(std::uint32_t *crc_state, std::uint8_t input_byte);
void crc32ProcessInt(std::uint32_t *crc_state, int value);
void crc32ProcessString(std::uint32_t *crc_state, char *string);
void copyVector(common::CVector3f *dst_ptr, common::CVector3f *src_ptr);

} // namespace nocturne::core
