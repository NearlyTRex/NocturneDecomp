#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

#include <cstdint>
#include <string_view>

namespace nocturne::core {

void deleteActor(CDemonActor *actor_ptr);
int adjustIndentationLevel(int indent_delta);
void archiveQuaternion(common::CQuaternion4f *quat_ptr, char *property_type);
void archiveDeformableModelInstance(CDeformableModelInstance *model_ptr, char *property_name);
void archiveBox(CBox *box_ptr, char *property_name);
void archiveRules(CRuleList *rules, char *property_name);
// Whether the actor's class matches a class expression: class names, '!' before a name or a
// bracketed expression, and '&' or '|' (or "&&", "||") between them, applied left to right with
// neither taking precedence. A name matches its own class and every class derived from it.
// False for no actor, and for an expression that can't be read.
[[nodiscard]] bool isOfClass(const CDemonActor *actor_ptr, std::string_view class_name);
// Whether the actor's class, or one it derives from, has the name's hash. False for no actor.
[[nodiscard]] bool isOfClassHash(const CDemonActor *actor_ptr, std::uint32_t class_name_hash);
// The actor when isOfClassHash holds; null otherwise.
[[nodiscard]] CDemonActor *castToClassHash(CDemonActor *actor_ptr, std::uint32_t class_name_hash);
void syncActorTypeIDs();
float normalizeAngleToPi(float angle_radians);
void crc32ProcessByte(std::uint32_t *crc_state, std::uint8_t input_byte);
void crc32ProcessInt(std::uint32_t *crc_state, int value);
void crc32ProcessString(std::uint32_t *crc_state, char *string);
void copyVector(common::CVector3f *dst_ptr, common::CVector3f *src_ptr);

} // namespace nocturne::core
