#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorProperty.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBodyPart.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBox.h"
#include "types/classes/CBoxActor.h"
#include "types/classes/CBride.h"
#include "types/classes/CBugs.h"
#include "types/classes/CCameraView.h"
#include "types/classes/CChain.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CDoor.h"
#include "types/classes/CGame.h"
#include "types/classes/CLightActor.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EDeathState.h"
#include "types/enums/EGroundType.h"
#include "types/enums/ELightActorType.h"
#include "types/structs/SBug.h"
#include "types/structs/SChainVertex.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFire.h"
#include "types/structs/SInputFace.h"
#include "types/structs/SPose.h"
#include "types/structs/SProjectedVertex.h"
#include "types/structs/SScrape.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x420000
// =============================================================================

void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,_FILE *file_handle,char *indent_prefix);
void __cdecl core_box_cpp_CBox_setupVelocities_FUN_00420180(CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity);
SScrape * __cdecl core_box_cpp_SScrape_ctor_FUN_00420200(SScrape *this_ptr);
SScrape * __cdecl core_box_cpp_SScrape_dtor_FUN_00420210(SScrape *this_ptr,uint flags);
SScrape * __cdecl core_box_cpp_SScrape_arrdtor_FUN_00420220(SScrape *objs,uint flags);
void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D *this_ptr,CVector3f *point);
CVector3f * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index);
int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D *this_ptr);
float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D *this_ptr);
float __cdecl core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_normal);
void __cdecl core_box_cpp_CBoundingBox3D_normalize_FUN_00420d70(CBoundingBox3D *this_ptr);
void __cdecl core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0(CBoundingBox3D *this_ptr,int point_count,CVector3f *points);
void __cdecl core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90(CBoundingBox3D *this_ptr,int vertex_count,CVector3i *vertices);
void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_isInverted_FUN_00420fe0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(CBoundingBox3D *this_ptr,CBoundingBox3D *other);
float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060(CBoundingBox3D *this_ptr);
void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D *this_ptr);
CVector3f * __cdecl core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point);
int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0(CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius);
void __cdecl core_boxactor_cpp_staticInit_FUN_00421650(void);
CBoxActor * __cdecl core_boxactor_cpp_factoryFuncBoxActor_FUN_004216c0(void);
CDemonActorType * __cdecl core_boxactor_cpp_CBoxActor_getActorType_FUN_004216f0(void);
CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421830(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_004218d0(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time);
int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_00421e00(CBoxActor *this_ptr);
int __cdecl core_boxactor_cpp_CBoxActor_renderTransparent_FUN_00421ef0(CBoxActor *this_ptr);
CBoundingBox3D * __cdecl core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_00421fe0(CBoxActor *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_00422060(CBoxActor *this_ptr);
int __cdecl core_boxactor_cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422330(CBoxActor *this_ptr);
ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_00422340(CBoxActor *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422390(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction);
int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_004224b0(CBoxActor *this_ptr,CDemonActor *picker);
void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_004224e0(CBoxActor *this_ptr,CDemonActor *carrier);
void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_004224f0(CBoxActor *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_boxactor_cpp_CBoxActor_getCarrier_FUN_00422550(CBoxActor *this_ptr);
EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_00422560(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_onPickup_FUN_00422570(CBoxActor *this_ptr,CDemonActor *owner);
void __cdecl core_boxactor_cpp_CBoxActor_constrainToExtents_FUN_00422590(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00422640(CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation);
int __cdecl core_boxactor_cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_004226d0(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0(CBoxActor *this_ptr,CActorPropertyList *property_list);
void __cdecl core_boxactor_cpp_CBoxActor_processInEditor_FUN_004228e0(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_addFilesToExtract_FUN_00422900(CBoxActor *this_ptr,_FILE *file_handle);
CLightActor * __cdecl core_boxactor_cpp_factoryFuncLightActor_FUN_00422950(void);
CDemonActorType * __cdecl core_boxactor_cpp_CLightActor_getActorType_FUN_00422980(CLightActor *this_ptr);
CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00422990(CLightActor *this_ptr);
void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_00422a20(CLightActor *this_ptr);
void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422a50(CLightActor *this_ptr,float delta_time);
void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_00422c80(CLightActor *this_ptr);
void __cdecl core_boxactor_cpp_CLightActor_setupLightModel_FUN_00422d60(CLightActor *this_ptr);
char * __cdecl core_boxactor_cpp_getLightActorTypeName_FUN_0042307e(ELightActorType type);
ELightActorType __cdecl core_boxactor_cpp_pickLightActorType_FUN_00423110(char *prompt_text,int allow_custom,uint current_type);
void __cdecl core_boxactor_cpp_CLightActor_propertyDisplayTypeCallback_FUN_00423310(CLightActor *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_boxactor_cpp_CLightActor_propertyActionTypeCallback_FUN_00423380(CLightActor *this_ptr,CActorProperty *property);
void __cdecl core_boxactor_cpp_CLightActor_propertyDisplayFOVCallback_FUN_00423400(CLightActor *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_boxactor_cpp_CLightActor_propertyActionFOVCallback_FUN_00423440(CLightActor *this_ptr,CActorProperty *property,char *output_buffer);
void __cdecl core_boxactor_cpp_CLightActor_getPropertyList_FUN_004234e0(CLightActor *this_ptr,CActorPropertyList *property_list);
int __cdecl core_boxactor_cpp_CLightActor_initializeInEditor_FUN_00423590(CLightActor *this_ptr);
void __cdecl core_boxactor_cpp_CLightActor_setLightOrientZ_FUN_004235c0(CLightActor *this_ptr,float angle);
int __cdecl core_boxactor_cpp_CLightActor_isLightPartVisible_FUN_004235d0(CLightActor *this_ptr);
CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_004235f0(CLightActor *this_ptr,uint flags);
CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_00423670(CBoxActor *this_ptr,uint flags);
CDemonFilter * __cdecl core_boxactor_cpp_CDemonFilter_arrdtor_FUN_004236e0(CDemonFilter *objs,uint flags);
void __cdecl core_bride_cpp_staticInit_FUN_00423700(void);
CBride * __cdecl core_bride_cpp_factoryFunc_FUN_00423760(void);
CDemonActorType * __cdecl core_bride_cpp_CBride_getActorType_FUN_00423790(CBride *this_ptr);
CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_004237a0(CBride *this_ptr);
void __cdecl core_bride_cpp_CBride_setup_FUN_00423810(CBride *this_ptr);
void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time);
void __cdecl core_bride_cpp_CBride_archive_FUN_00424560(CBride *this_ptr);
void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_00424600(CBride *this_ptr,SDamageInfo *damage_info);
void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424830(CBride *this_ptr,SDamageInfo *damage_info);
int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_00424a10(CBride *this_ptr,CVector3f *out_points_array);
CVector3f * __cdecl core_bride_cpp_CBride_getTargetPoint_FUN_00424aa0(CBride *this_ptr,CVector3f *out_point);
void __cdecl core_bride_cpp_CBride_getPropertyList_FUN_00424b10(CBride *this_ptr,CActorPropertyList *property_list);
void __cdecl core_bride_cpp_CBride_addFilesToExtract_FUN_00424b50(CBride *this_ptr,_FILE *file_handle);
CBride * __cdecl core_bride_cpp_CBride_dtor_FUN_00424b80(CBride *this_ptr,uint flags);
void __cdecl core_bugs_cpp_staticInit_FUN_00424c40(void);
CBugs * __cdecl core_bugs_cpp_factoryFunc_FUN_00424c70(void);
CDemonActorType * __cdecl core_bugs_cpp_CBugs_getActorType_FUN_00424ca0(CBugs *this_ptr);
CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424cb0(CBugs *this_ptr);
void __cdecl core_bugs_cpp_CBugs_setup_FUN_00424e50(CBugs *this_ptr);
void __cdecl core_bugs_cpp_CBugs_process_FUN_004250f0(CBugs *this_ptr,float delta_time);
int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_004251b0(CBugs *this_ptr);
void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_00425340(CBugs *this_ptr);
CBoundingBox3D * __cdecl core_bugs_cpp_CBugs_getBoundingBox_FUN_004254b0(CBugs *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_bugs_cpp_CBugs_archive_FUN_004254f0(CBugs *this_ptr);
ECollisionType __cdecl core_bugs_cpp_CBugs_getCollisionType_FUN_00425610(CBugs *this_ptr,SCollisionInfo *collision_info);
EDeathState __cdecl core_bugs_cpp_CBugs_getDeathState_FUN_00425620(CBugs *this_ptr);
void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_00425640(CBugs *this_ptr,SDamageInfo *damage_info);
void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_00425660(CBugs *this_ptr,int tri_count,SInputFace *triangles);
void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data);
void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(CBugs *this_ptr);
float __cdecl core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425b70(CBugs *this_ptr,float x,float z);
void __cdecl core_bugs_cpp_CBugs_updateBugsBehavior_FUN_00425cc0(CBugs *this_ptr,float delta_time);
void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00425fe0(CBugs *this_ptr,float delta_time);
void __cdecl core_bugs_cpp_CBugs_updateBoundingBox_FUN_00426410(CBugs *this_ptr);
int __cdecl core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00426420(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex);
void __cdecl core_bugs_cpp_CBugs_updateBugRenderingData_FUN_004268e0(CBugs *this_ptr,SBug *bug_data,float delta_time);
void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004270f0(CBugs *this_ptr,SBug *bug_data);
void __cdecl core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_004272f0(CBugs *this_ptr);
void __cdecl core_bugs_cpp_CBugs_setSwarmTarget_FUN_00427400(CBugs *this_ptr,CDemonActor *target);
void __cdecl core_bugs_cpp_CBugs_applySwarmTranslation_FUN_004276c0(CBugs *this_ptr,CVector3f *new_position);
void __cdecl core_bugs_cpp_CBugs_getPropertyList_FUN_004277e0(CBugs *this_ptr,CActorPropertyList *property_list);
void __cdecl core_bugs_cpp_CBugs_processInEditor_FUN_004278d0(CBugs *this_ptr);
CVector3f * __cdecl core_bugs_cpp_createVector_FUN_004279b0(CVector3f *dest,float x,float y,float z);
CVector3f * __cdecl core_bugs_cpp_scaleVector_FUN_004279d0(CVector3f *dest,CVector3f *src);
CVector3f * __cdecl core_bugs_cpp_subtractVector_FUN_004279f0(CVector3f *dest,CVector3f *src);
CVector3f * __cdecl core_bugs_cpp_crossVector_FUN_00427a20(CVector3f *a,CVector3f *result,CVector3f *b);
void __cdecl core_bugs_cpp_normalizeVector_FUN_00427a60(CVector3f *dest);
CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00427ad0(CVector3f *dest,CVector3i *src);
CVector3i * __cdecl core_bugs_cpp_copyVectorToPair_FUN_00427b00(CVector3i *dest,CVector3i *src);
int __cdecl core_bugs_cpp_getBugVertex_FUN_00427b40(SBug *bug_data,int bug_index);
int __cdecl core_bugs_cpp_getBugState_FUN_00427b60(SBug *bug_data);
char * __cdecl core_bugs_cpp_getDeformableModelName_FUN_00427b70(CDeformableModelInstance *model_ptr);
int * __cdecl core_bugs_cpp_swapIntegers_FUN_00427b80(int *a,int *b);
float __cdecl core_bugs_cpp_maxFloat_FUN_00427ba0(float a,float b);
CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00427bd0(CBugs *this_ptr,uint flags);
SBug * __cdecl core_bugs_cpp_SBug_ctor_FUN_00427ca0(SBug *this_ptr);
SBug * __cdecl core_bugs_cpp_SBug_dtor_FUN_00427cb0(SBug *this_ptr,uint flags);
SBug * __cdecl core_bugs_cpp_SBug_arrdtor_FUN_00427cc0(SBug *objs,uint flags);
CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00427ce0(CCameraView *this_ptr);
CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00427d00(CCameraView *this_ptr,uint flags);
void __cdecl core_camview_cpp_CCameraView_setupPerspectiveAndFog_FUN_00427d20(CCameraView *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex);
int __cdecl core_camview_cpp_CCameraView_getFogValueAtPosition_FUN_00427d50(CCameraView *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex);
int __cdecl core_camview_cpp_CCameraView_testVisibility_FUN_00427d60(CCameraView *this_ptr,CVector3i *corners);
void __cdecl core_camview_cpp_CCameraView_saveAlphaTransform_FUN_00427d70(CCameraView *this_ptr,int alpha_index);
void __cdecl core_charactr_cpp_staticInit_FUN_00427d80(void);
SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo *this_ptr);
CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00427e20(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00428140(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_archive_FUN_004283a0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0(CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation);
float __cdecl core_charactr_cpp_clampFloat_FUN_00428620(float value,float limit);
float __cdecl core_charactr_cpp_clampNormalizedAngle_FUN_00428670(float angle,float limit);
int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction, float min_distance,float max_distance);
void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00428d80(CCharacter *this_ptr,CVector3f *target);
void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00428e30(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force);
void __cdecl core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0(CCharacter *this_ptr,int damage_type,float damage_amount);
void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter *this_ptr,CVector3f *velocity);
int __cdecl core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_00429820(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_process_FUN_00429870(CCharacter *this_ptr,float delta_time);
void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00429b40(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390(CCharacter *this_ptr,int layer_flag);
int __cdecl core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0(CCharacter *this_ptr,int part_index);
void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042a420(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index);
void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_0042a830(CCharacter *this_ptr,float delta_time);
void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_0042ad00(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_renderEthereal_FUN_0042af60(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_0042b110(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter *this_ptr,CVector3f *position,int fire_type,float spread_rate, int allow_hero,int include_hero);
void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042b670(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter *this_ptr,int part_index,int bone_index,float chance);
void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810(CCharacter *this_ptr,int part_index,int bone_index,float chance);
CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0(CCharacter *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_charactr_cpp_CCharacter_shatter_FUN_0042b8e0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_explode_FUN_0042b930(CCharacter *this_ptr,CVector3f *impact_point,float impact_force);
void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force, int render_in_background);
ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20(CCharacter *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter *this_ptr,int part_index,CVector3f *initial_velocity, int render_in_background);
void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background);
int __cdecl core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30(CCharacter *this_ptr,CDemonActor *grabber);
void __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70(CCharacter *this_ptr);
CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_drop_FUN_0042bf90(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position);
int __cdecl core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010(CCharacter *this_ptr,CDemonActor *actor,CVector3f *target_local_point);
int __cdecl core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110(CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info);
int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info, CVector3f *out_hit);
void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter *this_ptr,SDamageInfo *damage_info);
EDeathState __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state );
void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance);
void __cdecl core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0(CCharacter *this_ptr,CDemonActor *target);
void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20(CCharacter *this_ptr,float timeout);
int __cdecl core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter *this_ptr,float delta_time);
void __cdecl core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50(CCharacter *this_ptr,CDoor *door_target);
void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter *this_ptr,int hand_index,CDemonActor *object,float blend_time);
void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter *this_ptr,int hand_index,float blend_time);
void __cdecl core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction);
void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(CCharacter *this_ptr,float delta_time);
void __stack2_esi core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300 (CCharacter *this_ptr,int hand_index,CMatrix3x4f *out_matrix);
int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_0042d360(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_0042d390(CCharacter *this_ptr,char *motion_name);
void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_advanceGesture_FUN_0042d4d0(CCharacter *this_ptr,float delta_time);
void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter *this_ptr,float delta_time,int disable_search);
void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_0042ddd0(CCharacter *this_ptr,CDemonActor *target);
void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0(CCharacter *this_ptr,uint *out_crc);
int __cdecl core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_setOrientation_FUN_0042ded0(CCharacter *this_ptr,UOrientationVector *orientation);
void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90(CCharacter *this_ptr,int fly_count,float spawn_radius);
void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter *this_ptr,float delta_time);
int __cdecl core_charactr_cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050(CCharacter *this_ptr,float delta_time,char *pattern);
int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter *this_ptr,float *remaining_time,int target_bone_index);
void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042e570(CCharacter *this_ptr,float blend_weight,int blend_mode);
void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name, int direction);
void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670(CCharacter *this_ptr);
float __cdecl core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter *this_ptr,int state_index);
void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter *this_ptr,int layer_action_index);
void __cdecl core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40(CCharacter *this_ptr,float delta_time);
int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter *this_ptr,int bone_index);
int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0(CCharacter *this_ptr,float delta_time);
void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300(CCharacter *this_ptr,char *sound_name);
void __cdecl core_charactr_cpp_CCharacter_propertyDisplayCallback_FUN_0042f340(CCharacter *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_charactr_cpp_CCharacter_propertyActionCallback_FUN_0042f3e0(CCharacter *this_ptr,CActorProperty *property);
void __cdecl core_charactr_cpp_CCharacter_getPropertyList_FUN_0042f730(CCharacter *this_ptr,CActorPropertyList *property_list);
void __cdecl core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0(CCharacter *this_ptr,CDemonActor *deleted_actor);
CVector3f * __cdecl core_charactr_cpp_divideVector_FUN_0042f8f0(CVector3f *src,CVector3f *dst,float *scalar);
void __cdecl core_charactr_cpp_setActorXPos_FUN_0042f920(CDemonActor *actor,float x);
void __cdecl core_charactr_cpp_projectPointToVertex_FUN_0042f930(SProjectedVertex **vertex_array,int vertex_index,CVector3f *world_position);
void __cdecl core_charactr_cpp_getTranslationMatrix_FUN_0042f990(CMatrix3x4f *matrix,CVector3f *out_translation);
int __cdecl core_charactr_cpp_getDeformableModelPartCount_FUN_0042f9c0(CDeformableModel *model_ptr);
char * __cdecl core_charactr_cpp_getActorCreateEvent_FUN_0042f9d0(CDemonActor *actor);
float __cdecl core_charactr_cpp_getGameDeltaTime_FUN_0042f9e0(CGame *game_ptr);
CDemonActor * __cdecl core_charactr_cpp_CCharacter_dtor_FUN_0042f9f0(CCharacter *this_ptr,uint flags);
SFire * __cdecl core_charactr_cpp_SFire_ctor_FUN_0042fab0(SFire *this_ptr);
SPose * __cdecl core_charactr_cpp_SPose_ctor_FUN_0042fac0(SPose *this_ptr);
SPose * __cdecl core_charactr_cpp_SPose_dtor_FUN_0042fad0(SPose *this_ptr,uint flags);
float * __cdecl core_charactr_cpp_copyFloat1_FUN_0042fae0(float *dst,float *src);
float * __cdecl core_charactr_cpp_copyFloat2_FUN_0042faf0(float *dst,float *src);
float * __cdecl core_charactr_cpp_copyFloat3_FUN_0042fb00(float *dst,float *src);
void __cdecl core_chain_cpp_staticInit_FUN_0042fb10(void);
CChain * __cdecl core_chain_cpp_factoryFunc_FUN_0042fb40(void);
CDemonActorType * __cdecl core_chain_cpp_CChain_getActorType_FUN_0042fb70(CChain *this_ptr);
CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_0042fb80(CChain *this_ptr);
CVector3f * __cdecl core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042fcc0(CChain *this_ptr,CVector3f *out_point);
void __cdecl core_chain_cpp_CChain_setup_FUN_0042fd20(CChain *this_ptr);
void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042fed0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b);

