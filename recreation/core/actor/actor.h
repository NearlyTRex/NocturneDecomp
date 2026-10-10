#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

void staticInit();
void deleteActor(CDemonActor *actor_ptr);
int adjustIndentationLevel(int indent_delta);
void archiveVector(common::CVector3f *vector_ptr, char *property_name);
void archiveOrientation(COrientation *orient_ptr, char *property_name);
void archiveQuaternion(common::CQuaternion4f *quat_ptr, char *property_type);
void archiveString(char *string_buffer, char *property_type);
void archiveLocalizedString(char *string_buffer, char *localization_key);
void archiveFloat(float *float_ptr, char *property_name);
void archiveInteger(int *int_ptr, char *property_name);
void archiveActor(CDemonActor **actor_ptr, char *property_name);
void archiveKeyframedModelInstance(CKeyFramedModelInstance *model_ptr, char *property_name);
void archiveDeformableModelInstance(CDeformableModelInstance *model_ptr, char *property_name);
void archiveMotionState(CMotionController *motion_controller, char *property_name);
void archivePartStatus(CDeformableModelInstance *model_ptr, char *property_name);
void archiveBox(CBox *box_ptr, char *property_name);
void archiveClothList(CClothList *cloth_list, char *property_name);
void archiveRules(CRuleList *rules, char *property_name);
CDemonActorType *registerActorClass(CDemonActorType *this_ptr, char *class_name,
                                    CDemonActor::FactoryFunc *factor_func, int *max_version,
                                    int version, CDemonActorType *parent_class_info);
CDemonActorType *getActorClassByName(char *className);
CDemonActor *createActorByName(char *class_name);
int isOfClass(CDemonActor *actor_ptr, char *class_name);
int isOfClassHash(CDemonActor *actor_ptr, std::uint32_t class_name_hash);
CDemonActor *castToClassHash(CDemonActor *actor_ptr, std::uint32_t class_name_hash);
void syncActorTypeIDs();
void resetActorTypeInfo();
void setRandomSeed(std::uint32_t seed_value);
float getRandomFloatFromRange(float min_value, float max_value);
int getRandomInt(int min_value, int max_value);
int randomChance(float probability_threshold);
float normalizeAngleToPi(float angle_radians);
void crc32ProcessByte(std::uint32_t *crc_state, std::uint8_t input_byte);
void crc32ProcessInt(std::uint32_t *crc_state, int value);
void crc32ProcessString(std::uint32_t *crc_state, char *string);
void copyVector(common::CVector3f *dst_ptr, common::CVector3f *src_ptr);

} // namespace nocturne::core
