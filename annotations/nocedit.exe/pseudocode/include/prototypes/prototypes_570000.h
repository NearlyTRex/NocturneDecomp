#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/C3DSCamera.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CZThumb.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/structs/SRaytraceState.h"
#include "types/structs/SRoom.h"
#include "types/structs/SVDBox.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x570000
// =============================================================================

void __cdecl core_set_cpp_CDemonSet_FUN_00570010(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570040(CDemonSet *this_ptr);
void __cdecl core_set_cpp_FUN_005702b0(void);
void __cdecl core_set_cpp_FUN_00570700(void);
void __cdecl core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 (CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count, int render_flags);
void __cdecl core_set_cpp_CDemonSet_FUN_00570870(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_005708e0 (CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count);
void __cdecl core_set_cpp_CDemonSet_FUN_00570960(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count);
void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 (CDemonSet *this_ptr,int mirror_index,int enable_flag);
void __cdecl core_set_cpp_FUN_00570af0(void);
void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570c60(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_00570c70(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570ca0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570cd0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet *this_ptr,int gamma);
void __cdecl core_set_cpp_CDemonSet_FUN_00570df0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive);
void __cdecl core_set_cpp_CDemonSet_FUN_00570e20(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570e60(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570ea0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570ec0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570fa0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00570fc0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_FUN_00571130(CDemonSet *this_ptr);
int __cdecl core_set_cpp_CDemonSet_FUN_00571170(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00571230(CDemonSet *this_ptr);
int __cdecl core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(CDemonSet *this_ptr);
void __cdecl core_set_cpp_FUN_00571380(void);
void __cdecl core_set_cpp_FUN_005713c0(void);
int __cdecl core_set_cpp_FUN_00571410(void);
int __cdecl core_set_cpp_FUN_00571440(void);
SRoom * __cdecl core_set_cpp_SRoom_ctor_FUN_00571470(SRoom *this_ptr);
SRoom * __cdecl core_set_cpp_SRoom_dtor_FUN_00571480(SRoom *this_ptr,uint flags);
SVDBox * __cdecl core_set_cpp_SVDBox_ctor_FUN_00571490(SVDBox *this_ptr);
SVDBox * __cdecl core_set_cpp_SVDBox_dtor_FUN_005714a0(SVDBox *this_ptr,uint flags);
C3DSLight * __cdecl core_set_cpp_C3DSLight_dtor_FUN_005714b0(C3DSLight *this_ptr,uint flags);
void __cdecl core_set_cpp_FUN_005714c0(void);
CVector3f * __cdecl core_set_cpp_CVector3f_arrdtor_FUN_00571510(CVector3f *objs,uint flags);
C3DSCamera * __cdecl core_set_cpp_C3DSCamera_arrdtor_FUN_00571530(C3DSCamera *objs,uint flags);
C3DSLight * __cdecl core_set_cpp_C3DSLight_arrdtor_FUN_00571550(C3DSLight *objs,uint flags);
SRoom * __cdecl core_set_cpp_SRoom_arrdtor_FUN_00571570(SRoom *objs,uint flags);
SVDBox * __cdecl core_set_cpp_SVDBox_arrdtor_FUN_00571590(SVDBox *objs,uint flags);
void __cdecl core_setcolid_cpp_staticInit_FUN_005715b0(void);
int __cdecl core_setcolid_cpp_rayTestQuadFloor_FUN_005715d0 (float x,float z,CVector3f *out_height,CVector3f *vertex1,CVector3f *vertex2, CVector3f *vertex3,CVector3f *vertex4,CVector3f *out_transformed_normal);
float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (CDemonSet *this_ptr,CVector3f *position,float radius);
float __cdecl core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340 (CDemonSet *this_ptr,CVector3f *position);
int __cdecl core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460 (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos);
float __cdecl core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_005724e0 (CDemonSet *this_ptr,CVector3f *world_position);
int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510 (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos);
float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_00572530 (CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target);
float __cdecl core_setcolid_cpp_CDemonSet_refinedRaycast_FUN_005726c0(CDemonSet *this_ptr);
float __cdecl core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800 (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction);
float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 (CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t);
int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet *this_ptr,CDemonActor *actor);
int __cdecl core_setcolid_cpp_intersectXZCylinder_FUN_00572e80 (SIntersectXZCylinder *cylinder,float ray_x,float ray_z,void *bounds_struct);
void __cdecl core_setcolid_cpp_testCylinderQuadCollision_FUN_005730d0 (SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3, CVector3f *vertex4);
int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 (CDemonSet *this_ptr,CBoundingBox3D *bounding_box,CMatrix3x3f *orientation_matrix, SIntersectXZCylinder *cylinder1,SIntersectXZCylinder *cylinder2);
float __cdecl core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (CDemonSet *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius, void *user_data1,void *user_data2);
void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574170(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet *this_ptr,CDemonActor *actor);
void __cdecl core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574220(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet *this_ptr,int ray_type);
void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270 (CDemonSet *this_ptr,float f1,float f2,float f3,float f4);
void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0 (CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position, void *unknown_param);
SCollisionInfo * __cdecl core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_FUN_005743e0(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574440(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_FUN_005744d0(CDemonSet *this_ptr);
void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574560(CDemonSet *this_ptr);
int __cdecl core_setcolid_cpp_CDemonSet_FUN_00574580(CDemonSet *this_ptr);
SRaytraceState * __cdecl core_setcolid_cpp_SRaytraceState_ctor_FUN_00574690(SRaytraceState *this_ptr);
SRaytraceState * __cdecl core_setcolid_cpp_SRaytraceState_dtor_FUN_005746a0(SRaytraceState *this_ptr,uint flags);
SIntersectXZCylinder * __cdecl core_setcolid_cpp_SIntersectXZCylinder_ctor_FUN_005746b0(SIntersectXZCylinder *this_ptr);
SIntersectXZCylinder * __cdecl core_setcolid_cpp_SIntersectXZCylinder_dtor_FUN_005746c0(SIntersectXZCylinder *this_ptr,uint flags);
void __cdecl core_setcolid_cpp_SDamageInfo_copy_FUN_005746d0(SDamageInfo *this_ptr,SDamageInfo *other);
SCollisionReturnInfo * __cdecl core_setcolid_cpp_SCollisionReturnInfo_ctor_FUN_00574750(SCollisionReturnInfo *this_ptr);
SCollisionReturnInfo * __cdecl core_setcolid_cpp_SCollisionReturnInfo_dtor_FUN_00574760(SCollisionReturnInfo *this_ptr,uint flags);
SRaytraceState * __cdecl core_setcolid_cpp_SRaytraceState_arrdtor_FUN_00574770(SRaytraceState *objs,uint flags);
void __cdecl core_setdir_cpp_staticInit_FUN_00574790(void);
void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_005747d0(CZThumb *this_ptr,int count);
void __cdecl core_setdir_cpp_CZThumb_restoreZBufferTable_FUN_00574830(CZThumb *this_ptr,int count);
void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_005748a0(int x,int y,int grayscale_value);
CZThumb * __cdecl core_setdir_cpp_CZThumb_ctor_FUN_005748d0(CZThumb *this_ptr);
CZThumb * __cdecl core_setdir_cpp_CZThumb_dtor_FUN_005748f0(CZThumb *this_ptr,uint flags);
void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910 (CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height, float unknown_scale,_FILE *file_handle);
void __cdecl core_setdir_cpp_CZThumb_write_FUN_00574b20(CZThumb *this_ptr,_FILE *file_handle);
void __cdecl core_setdir_cpp_CZThumb_free_FUN_00574b50(CZThumb *this_ptr);
float __cdecl core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices, SMRGLHeaderPrimitive *primitives,int apply_scaling);
void __cdecl core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(CZThumb *this_ptr);
void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(CZThumb *this_ptr);
void __cdecl core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb *this_ptr);
void __cdecl core_setdir_cpp_CZThumb_render_FUN_00574f20(CZThumb *this_ptr,int screen_x,int screen_y);
float __cdecl core_setdir_cpp_CZThumb_testCameraVisibility_FUN_005750a0(CZThumb *this_ptr);
int __cdecl core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode);
void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00 (CDemonSet *this_ptr,int camera_index,float hold_time);
void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet *this_ptr);
void __cdecl core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00575b40(CDemonSet *this_ptr,char *filename);
void __cdecl core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet *this_ptr,_FILE *file_handle);
void __cdecl core_setdir_cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet *this_ptr);
void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(CDemonSet *this_ptr,char *filename);
void __cdecl core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(CDemonSet *this_ptr);
void __cdecl core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet *this_ptr);
void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200 (CDemonSet *this_ptr,_FILE *file_handle);
int __cdecl core_setdir_cpp_CDemonSet_FUN_005762a0(CDemonSet *this_ptr);
int __cdecl core_setdir_cpp_CDemonSet_FUN_00576340(CDemonSet *this_ptr);
int __cdecl core_setdir_cpp_FUN_005763a0(void);
int __cdecl core_setdir_cpp_CDemonSet_FUN_00576710(CDemonSet *this_ptr);
int __cdecl core_setdir_cpp_CDemonSet_FUN_00576820(CDemonSet *this_ptr);
int __cdecl core_setdir_cpp_CDemonSet_FUN_00576870(CDemonSet *this_ptr);
CDemonSet * __cdecl core_setdir_cpp_copySet_FUN_005768c0(CDemonSet **set1,CDemonSet **set2);
CDemonSet * __cdecl core_setdir_cpp_copySet_FUN_005768d0(CDemonSet **set1,CDemonSet **set2);
CDemonSet * __cdecl core_setdir_cpp_copySet_FUN_005768e0(CDemonSet **set1,CDemonSet **set2);
CBoundingBox3D * __cdecl core_setdir_cpp_CBoundingBox3D_arrdtor_FUN_005768f0(CBoundingBox3D *objs,uint flags);
CZThumb * __cdecl core_setdir_cpp_CZThumb_arrdtor_FUN_00576910(CZThumb *objs,uint flags);
void __cdecl core_setedit_cpp_staticInit_FUN_00576930(void);
void __cdecl core_setedit_cpp_FUN_00576950(void);
void __cdecl core_setedit_cpp_C3DSCamera_FUN_005769a0(C3DSCamera *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_00576da0(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_FUN_00577120(void);
void __cdecl core_setedit_cpp_FUN_00577200(void);
void __cdecl core_setedit_cpp_FUN_00577330(void);
void __cdecl core_setedit_cpp_FUN_00577430(void);
int __cdecl core_setedit_cpp_FUN_00577730(void);
int __cdecl core_setedit_cpp_CDemonSet_FUN_00577af0(CDemonSet *this_ptr);
int __cdecl core_setedit_cpp_FUN_005781a0(void);
int __cdecl core_setedit_cpp_FUN_00578210(void);
void __cdecl core_setedit_cpp_FUN_00578290(void);
void __cdecl core_setedit_cpp_FUN_00578420(void);
void __cdecl core_setedit_cpp_FUN_00578630(void);
void __cdecl core_setedit_cpp_FUN_00578a00(void);
void __cdecl core_setedit_cpp_CDemonSet_FUN_00578a20(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_00578c60(CDemonSet *this_ptr);
int __cdecl core_setedit_cpp_FUN_00578c90(void);
void __cdecl core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057a0c0(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_FUN_0057a270(void);
void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057a940(CDemonSet *this_ptr);
int __cdecl core_setedit_cpp_CDemonSet_FUN_0057ae50(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057b410(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057b500(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057b600(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_FUN_0057b910(void);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057bbe0(CDemonSet *this_ptr);
int __cdecl core_setedit_cpp_CDemonSet_FUN_0057c550(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_showLightEditor_FUN_0057c5d0(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_FUN_0057ce80(void);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057d340(CDemonSet *this_ptr);
int __cdecl core_setedit_cpp_CDemonSet_FUN_0057d660(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057e430(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057e7c0(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057fd00(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_0057ff70(CDemonSet *this_ptr);

