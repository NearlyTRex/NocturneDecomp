#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CMatrix3x3d.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CObj.h"
#include "types/classes/CPoly.h"
#include "types/classes/CPolyIntersectResult.h"
#include "types/classes/CStranger.h"
#include "types/classes/CSuccubus.h"
#include "types/classes/CVector2d.h"
#include "types/classes/CVector3d.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x5C0000
// =============================================================================

void __cdecl core_stranger_cpp_CStranger_FUN_005c02b0(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005c06b0(CStranger *this_ptr);
float * __cdecl core_stranger_cpp_CStranger_FUN_005c07b0(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_FUN_005c1680(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005c1f00(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005c1f80(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_FUN_005c1fe0(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_FUN_005c2400(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_FUN_005c2850(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_archive_FUN_005c2fe0(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_005c3150(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_renderTransparent_FUN_005c3710(CStranger *this_ptr);
void __cdecl core_stranger_cpp_FUN_005c3750(void);
CVector3f * __cdecl core_stranger_cpp_FUN_005c37e0(void);
void __cdecl core_stranger_cpp_CStranger_FUN_005c3960(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_aimLeftPistol_FUN_005c4370(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_005c48b0(CStranger *this_ptr,SDamageInfo *damage_info);
void __cdecl core_stranger_cpp_CStranger_FUN_005c4c20(CStranger *this_ptr);
void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170 (CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
CVector3f * __cdecl core_stranger_cpp_CStranger_FUN_005c51c0(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005c5270(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005c5b90(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_FUN_005c5e80(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005c5f10(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005c6220(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005c6590(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_areGunsDrawn_FUN_005c6650(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_drawGuns_FUN_005c6660(CStranger *this_ptr,int drawn);
int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_005c66a0(CStranger *this_ptr,CDemonActor *grabber,int grab_type);
void __cdecl core_stranger_cpp_CStranger_reset_FUN_005c6750(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_005c67c0(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_005c67f0(CStranger *this_ptr,int hand_index,CVector3f *drop_direction);
void __cdecl core_stranger_cpp_CStranger_drop_FUN_005c6850(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position);
void __cdecl core_stranger_cpp_CStranger_onActorDeleted_FUN_005c68a0(CStranger *this_ptr,CDemonActor *deleted_actor);
void __cdecl core_stranger_cpp_CStranger_getPropertyList_FUN_005c68f0(CStranger *this_ptr,CActorPropertyList *property_list);
void __cdecl core_stranger_cpp_CStranger_addFilesToExtract_FUN_005c6910(CStranger *this_ptr,_FILE *file_handle);
void __cdecl core_stranger_cpp_FUN_005c6930(void);
int __cdecl core_stranger_cpp_FUN_005c6950(void);
int __cdecl core_stranger_cpp_FUN_005c695e(void);
void __cdecl core_stranger_cpp_FUN_005c6970(void);
int __cdecl core_stranger_cpp_FUN_005c69a0(void);
CStranger * __cdecl core_stranger_cpp_CStranger_dtor_FUN_005c69c0(CStranger *this_ptr,uint flags);
void __cdecl core_succubus_cpp_staticInit_FUN_005c6a10(void);
CSuccubus * __cdecl core_succubus_cpp_factoryFunc_FUN_005c6a40(void);
CDemonActorType * __cdecl core_succubus_cpp_CSuccubus_getActorType_FUN_005c6a70(CSuccubus *this_ptr);
CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr);
void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_005c6b60(CSuccubus *this_ptr);
void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time);
int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_005c7590(CSuccubus *this_ptr);
void __cdecl core_succubus_cpp_CSuccubus_archive_FUN_005c7710(CSuccubus *this_ptr);
void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_005c7760(CSuccubus *this_ptr,SDamageInfo *damage_info);
int __cdecl core_succubus_cpp_CSuccubus_getTargetPoints_FUN_005c7780(CSuccubus *this_ptr,CVector3f *out_points_array);
void __cdecl core_succubus_cpp_CSuccubus_hasCollision_FUN_005c7790(CSuccubus *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_succubus_cpp_CSuccubus_getPropertyList_FUN_005c77b0(CSuccubus *this_ptr,CActorPropertyList *property_list);
void __cdecl core_succubus_cpp_CSuccubus_addFilesToExtract_FUN_005c77f0(CSuccubus *this_ptr,_FILE *file_handle);
CSuccubus * __cdecl core_succubus_cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus *this_ptr,uint flags);
void __cdecl shape_superopt_cpp_logToFile_FUN_005c7910(char *format,...);
void __cdecl shape_superopt_cpp_FUN_005c79a0(void);
int __cdecl shape_superopt_cpp_FUN_005c79d0(void);
void __cdecl shape_superopt_cpp_FUN_005c79f0(void);
int __cdecl shape_superopt_cpp_FUN_005c7a90(void);
int __cdecl shape_superopt_cpp_FUN_005c7b20(void);
void __cdecl shape_superopt_cpp_FUN_005c7dc0(void);
int __cdecl shape_superopt_cpp_FUN_005c7fb0(void);
void __cdecl shape_superopt_cpp_FUN_005c8160(void);
int __cdecl shape_superopt_cpp_FUN_005c8280(void);
int __cdecl shape_superopt_cpp_FUN_005c84c0(void);
int __cdecl shape_superopt_cpp_FUN_005c8b50(void);
int __cdecl shape_superopt_cpp_FUN_005c8e70(void);
int __cdecl shape_superopt_cpp_FUN_005c9100(void);
uint __cdecl shape_superopt_cpp_FUN_005c91e0(void);
void __cdecl shape_superopt_cpp_FUN_005c9340(void);
int __cdecl shape_superopt_cpp_FUN_005c9500(void);
void __cdecl shape_superopt_cpp_FUN_005c9aa0(void);
int __cdecl shape_superopt_cpp_FUN_005ca590(void);
int __cdecl shape_superopt_cpp_FUN_005cb3a0(void);
double * __cdecl shape_superopt_cpp_FUN_005cbb40(void);
void __cdecl shape_superopt_cpp_FUN_005cbe20(void);
int __cdecl shape_superopt_cpp_FUN_005cbec0(void);
int __cdecl shape_superopt_cpp_FUN_005cbee0(void);
int __cdecl shape_superopt_cpp_FUN_005cbef0(void);
int __cdecl shape_superopt_cpp_FUN_005cbf00(void);
int __cdecl shape_superopt_cpp_FUN_005cbf10(void);
int __cdecl shape_superopt_cpp_FUN_005cbf20(void);
int __cdecl shape_superopt_cpp_FUN_005cbf90(void);
CPoly * __cdecl shape_superopt_cpp_CPoly_ctor_FUN_005cc620(CPoly *this_ptr);
CPoly * __cdecl shape_superopt_cpp_CPoly_dtor_FUN_005cc660(CPoly *this_ptr,uint flags);
void __cdecl shape_superopt_cpp_CPoly_init_FUN_005cc670(CPoly *this_ptr,CObj *parent_obj);
void __cdecl shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly *this_ptr,CPoly *source,CObj *parent_obj);
void __cdecl shape_superopt_cpp_CPoly_translate_FUN_005cc720(CPoly *this_ptr,CVector3d *offset);
void __cdecl shape_superopt_cpp_CPoly_scale_FUN_005cc7c0(CPoly *this_ptr,CVector3d *scale,CVector3d *pivot);
void __cdecl shape_superopt_cpp_CPoly_transform_FUN_005ccc30(CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot);
int __cdecl shape_superopt_cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0(CPoly *this_ptr,uint flag_mask);
void __cdecl shape_superopt_cpp_CPoly_setVertexAttribFlags_FUN_005cd120(CPoly *this_ptr,uint set_mask,uint clear_mask);
void __cdecl shape_superopt_cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0(CPoly *this_ptr,uint flag_mask);
void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlags_FUN_005cd220(CPoly *this_ptr,uint set_mask,uint clear_mask);
void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0(CPoly *this_ptr,uint flag_to_set,uint condition_mask);
void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350(CPoly *this_ptr,uint flag_to_set,uint attrib_mask);
void __cdecl shape_superopt_cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0(CPoly *this_ptr,uint mask);
void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410(CPoly *this_ptr,uint set_mask,uint attrib_test);
void __cdecl shape_superopt_cpp_CPoly_saveVertexPositions_FUN_005cd4b0(CPoly *this_ptr);
void __cdecl shape_superopt_cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560(CPoly *this_ptr,uint flag_mask);
void __cdecl shape_superopt_cpp_CPoly_restoreVertexPositions_FUN_005cd640(CPoly *this_ptr);
void __cdecl shape_superopt_cpp_CPoly_restoreVertexPositionsWithFlag_FUN_005cd6f0(CPoly *this_ptr,uint flag_mask);
void __cdecl shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly *this_ptr);
void __cdecl shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0(CPoly *this_ptr);
void __cdecl shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale);
void __cdecl shape_superopt_cpp_CPoly_setMaterialId_FUN_005ce3c0(CPoly *this_ptr,int material_id);
int __cdecl shape_superopt_cpp_CPoly_getMaterialId_FUN_005ce3d0(CPoly *this_ptr);
void __cdecl shape_superopt_cpp_CPoly_getBounds_FUN_005ce3e0(CPoly *this_ptr,CVector3d *out_min,CVector3d *out_max);
int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result);

