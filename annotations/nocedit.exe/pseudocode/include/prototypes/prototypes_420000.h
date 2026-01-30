#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBox.h"
#include "types/classes/CBoxActor.h"
#include "types/classes/CBride.h"
#include "types/classes/CBugs.h"
#include "types/classes/CCameraView.h"
#include "types/classes/CChain.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CGame.h"
#include "types/classes/CLightActor.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SBug.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SFire.h"
#include "types/structs/SPose.h"
#include "types/structs/SScrape.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x420000
// =============================================================================

void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,_FILE *file_handle);
void __cdecl core_box_cpp_CBox_setupVelocities_FUN_00420180 (CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity);
SScrape * __cdecl core_box_cpp_SScrape_ctor_FUN_00420200(SScrape *this_ptr);
SScrape * __cdecl core_box_cpp_SScrape_dtor_FUN_00420210(SScrape *this_ptr);
int __cdecl core_box_cpp_freeScrapes_FUN_00420220(SScrape **array);
void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D *this_ptr,CVector3f *point);
CVector3f * __cdecl core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0 (CBoundingBox3D *this_ptr,CVector3f *out_point,uint corner_index);
int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D *this_ptr);
float __cdecl core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(CBoundingBox3D *this_ptr);
float __cdecl core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 (CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_normal);
void __cdecl core_box_cpp_CBoundingBox3D_normalize_FUN_00420d70(CBoundingBox3D *this_ptr);
void __cdecl core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_00420dc0 (CBoundingBox3D *this_ptr,int point_count,CVector3f *points);
void __cdecl core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90 (CBoundingBox3D *this_ptr,int vertex_count,CVector3i *vertices);
void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_isInverted_FUN_00420fe0(CBoundingBox3D *this_ptr);
int __cdecl core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010 (CBoundingBox3D *this_ptr,CBoundingBox3D *other);
float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060(CBoundingBox3D *this_ptr);
void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_004210b0 (CBoundingBox3D *this_ptr,int param1,int param2,int param3);
CVector3f * __cdecl core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550 (CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point);
int __cdecl core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0 (CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius);
void __cdecl core_boxactor_cpp_staticInit_FUN_00421650(void);
CBoxActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_004216c0(void);
CDemonActorType * __cdecl core_boxactor_cpp_CBoxActor_getActorType_FUN_004216f0(void);
CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421830(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_FUN_004218d0(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_004219e0(CBoxActor *this_ptr,float delta_time);
int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_00421e00(CBoxActor *this_ptr);
int __cdecl core_boxactor_cpp_CBoxActor_renderTransparent_FUN_00421ef0(CBoxActor *this_ptr);
CBoundingBox3D * __cdecl core_boxactor_cpp_CBoxActor_FUN_00421fe0(CBoxActor *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_boxactor_cpp_CBoxActor_serialize_FUN_00422060(CBoxActor *this_ptr);
int __cdecl core_boxactor_cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422330(CBoxActor *this_ptr);
int __cdecl core_boxactor_cpp_CBoxActor_hasCollision_FUN_00422340 (CBoxActor *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_boxactor_cpp_CBoxActor_FUN_00422390(CBoxActor *this_ptr);
int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_004224b0(CBoxActor *this_ptr,CDemonActor *picker);
void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_004224e0(CBoxActor *this_ptr,CDemonActor *carrier);
void __cdecl core_boxactor_cpp_CBoxActor_onDropped_FUN_004224f0(CBoxActor *this_ptr,CVector3f *drop_position);
CDemonActor * __cdecl core_boxactor_cpp_CBoxActor_getCarrier_FUN_00422550(CBoxActor *this_ptr);
int __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_00422560(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_onPickup_FUN_00422570(CBoxActor *this_ptr,CDemonActor *owner);
void __cdecl core_boxactor_cpp_CBoxActor_FUN_00422590(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00422640 (CBoxActor *this_ptr,CVector3f *new_position,CVector3f *new_orientation);
int __cdecl core_boxactor_cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_004226d0(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0 (CBoxActor *this_ptr,CActorPropertyList *property_list);
void __cdecl core_boxactor_cpp_CBoxActor_processInEditor_FUN_004228e0(CBoxActor *this_ptr);
void __cdecl core_boxactor_cpp_CBoxActor_writeDependencies_FUN_00422900(CBoxActor *this_ptr,_FILE *file_handle);
CLightActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_00422950(void);
CDemonActorType * __cdecl core_boxactor_cpp_CLightActor_getActorType_FUN_00422980(CLightActor *this_ptr);
CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00422990(CLightActor *this_ptr);
void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_00422a20(CLightActor *this_ptr);
void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422a50(CLightActor *this_ptr,float delta_time);
void __cdecl core_boxactor_cpp_CLightActor_serialize_FUN_00422c80(CLightActor *this_ptr);
void __cdecl core_boxactor_cpp_CLightActor_FUN_00422d60(CLightActor *this_ptr);
char * __cdecl core_boxactor_cpp_FUN_0042307e(int param_1);
int __cdecl core_boxactor_cpp_CLightActor_FUN_00423110(CLightActor *this_ptr);
void __cdecl core_boxactor_cpp_CLightActor_FUN_00423310(CLightActor *this_ptr);
int __cdecl core_boxactor_cpp_CLightActor_FUN_00423380(void);
void __cdecl core_boxactor_cpp_CLightActor_FUN_00423400(void);
int __cdecl core_boxactor_cpp_CLightActor_FUN_00423440(void);
void __cdecl core_boxactor_cpp_CLightActor_FUN_004234e0(void);
int __cdecl core_boxactor_cpp_CLightActor_FUN_00423590(void);
void __cdecl core_boxactor_cpp_CLightActor_FUN_004235c0(CLightActor *this_ptr);
int __cdecl core_boxactor_cpp_CLightActor_FUN_004235d0(CLightActor *this_ptr);
CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_004235f0(CLightActor *this_ptr,uint d1);
CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_00423670(CBoxActor *this_ptr,uint d1,uint d2,uint d3);
int __cdecl core_boxactor_cpp_freeFilters_FUN_004236e0(CDemonFilter **objs);
void __cdecl core_bride_cpp_staticInit_FUN_00423700(void);
CBride * __cdecl core_bride_cpp_factoryFunc_FUN_00423760(void);
CDemonActorType * __cdecl core_bride_cpp_FUN_00423790(void);
CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_004237a0(CBride *this_ptr);
void __cdecl core_bride_cpp_FUN_00423810(void);
void __cdecl core_bride_cpp_FUN_00423a30(void);
void __cdecl core_bride_cpp_CBride_load_FUN_00424560(void);
void __cdecl core_bride_cpp_FUN_00424600(void);
void __cdecl core_bride_cpp_FUN_00424800(void);
void __cdecl core_bride_cpp_FUN_00424830(void);
int __cdecl core_bride_cpp_FUN_00424a10(void);
CVector3f * __cdecl core_bride_cpp_FUN_00424aa0(void);
void __cdecl core_bride_cpp_FUN_00424b10(void);
void __cdecl core_bride_cpp_FUN_00424b50(void);
CBride * __cdecl core_bride_cpp_CBride_dtor_FUN_00424b80 (CBride *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);
void __cdecl core_bugs_cpp_staticInit_FUN_00424c40(void);
CBugs * __cdecl core_bugs_cpp_factoryFunc_FUN_00424c70(void);
CDemonActorType * __cdecl core_bugs_cpp_FUN_00424ca0(void);
CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424cb0(CBugs *this_ptr);
void __cdecl core_bugs_cpp_FUN_00424e50(void);
void __cdecl core_bugs_cpp_FUN_004250f0(void);
int __cdecl core_bugs_cpp_FUN_004251b0(void);
void __cdecl core_bugs_cpp_FUN_00425340(void);
int __cdecl core_bugs_cpp_FUN_004254b0(void);
void __cdecl core_bugs_cpp_CBugs_load_FUN_004254f0(void);
int __cdecl core_bugs_cpp_FUN_00425610(void);
int __cdecl core_bugs_cpp_FUN_00425620(void);
void __cdecl core_bugs_cpp_FUN_00425640(void);
void __cdecl core_bugs_cpp_FUN_00425660(void);
void __cdecl core_bugs_cpp_CBugs_addSwarmGraphEdge_FUN_00425740(void);
void __cdecl core_bugs_cpp_FUN_004257f0(void);
int __cdecl core_bugs_cpp_FUN_00425b70(void);
void __cdecl core_bugs_cpp_FUN_00425cc0(void);
void __cdecl core_bugs_cpp_FUN_00425fe0(void);
void __cdecl core_bugs_cpp_FUN_00426410(void);
int __cdecl core_bugs_cpp_FUN_00426420(void);
void __cdecl core_bugs_cpp_FUN_004268e0(void);
void __cdecl core_bugs_cpp_FUN_004270f0(void);
void __cdecl core_bugs_cpp_FUN_004272f0(void);
void __cdecl core_bugs_cpp_FUN_00427400(void);
void __cdecl core_bugs_cpp_FUN_004276c0(void);
void __cdecl core_bugs_cpp_CBugs_FUN_004277e0(void);
void __cdecl core_bugs_cpp_FUN_004278d0(void);
void __cdecl core_bugs_cpp_FUN_004279b0(void);
void __cdecl core_bugs_cpp_FUN_004279d0(void);
void __cdecl core_bugs_cpp_FUN_004279f0(void);
float * __cdecl core_bugs_cpp_FUN_00427a20(void);
void __cdecl core_bugs_cpp_FUN_00427a60(void);
void __cdecl core_bugs_cpp_FUN_00427ad0(void);
void __cdecl core_bugs_cpp_FUN_00427b00(void);
int __cdecl core_bugs_cpp_FUN_00427b40(void);
int __cdecl core_bugs_cpp_FUN_00427b60(void);
int __cdecl core_bugs_cpp_FUN_00427b70(void);
void __cdecl core_bugs_cpp_FUN_00427b80(void);
float __cdecl core_bugs_cpp_FUN_00427ba0(void);
CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00427bd0 (CBugs *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,uint d9);
SBug * __cdecl core_bugs_cpp_SBug_ctor_FUN_00427ca0(SBug *this_ptr);
SBug * __cdecl core_bugs_cpp_SBug_dtor_FUN_00427cb0(SBug *this_ptr);
int __cdecl core_bugs_cpp_FUN_00427cc0(SBug **objs);
CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00427ce0(CCameraView *this_ptr);
CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00427d00(CCameraView *this_ptr,uint d1);
void __cdecl core_camview_cpp_CCameraView_FUN_00427d20(CCameraView *this_ptr);
int __cdecl core_camview_cpp_CCameraView_FUN_00427d50(CCameraView *this_ptr);
int __cdecl core_camview_cpp_CCameraView_FUN_00427d60(CCameraView *this_ptr);
void __cdecl core_camview_cpp_CCameraView_FUN_00427d70(CCameraView *this_ptr);
void __cdecl core_charactr_cpp_staticInit_FUN_00427d80(void);
SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo *this_ptr);
CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00427e20(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_00428140(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_serialize_FUN_004283a0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0 (CCharacter *this_ptr,CVector3f *new_position,CVector3f *new_orientation);
float __cdecl core_charactr_cpp_FUN_00428620(void);
float __cdecl core_charactr_cpp_FUN_00428670(void);
int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_00428d80(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_00428e30(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0 (CCharacter *this_ptr,int damage_type,float damage_amount);
void __cdecl core_charactr_cpp_CCharacter_FUN_00428f40(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_004297e0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_00429820(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_00429870(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_00429aa0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_00429b40(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390(CCharacter *this_ptr,int layer_flag);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042a3f0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042a420(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042a520(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042a830(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042ad00(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042af60(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042b0e0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b110(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b190(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b5b0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b670(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b760(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b810(CCharacter *this_ptr);
CBoundingBox3D * __cdecl core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0 (CCharacter *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b8e0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b930(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042b9e0(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20 (CCharacter *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042bcc0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042bd30(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042bf30(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042bf40(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042bf70(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042bf80(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_drop_FUN_0042bf90 (CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042c010(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110 (CCharacter *this_ptr,CVector3f *world_point,float tolerance,SDamageInfo *damage_info);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042c180(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042c3c0(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042c580(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042c5f0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042c920(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042c9d0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042ca20(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca30(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca60(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca70(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd50(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd60(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042cd90(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042cfe0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042d060(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042d090(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042d300(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042d360(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042d390(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042d4d0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042d530(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042ddd0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042dde0(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042de50(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042ded0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90 (CCharacter *this_ptr,int fly_count,float spawn_radius);
void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042e050(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_FUN_0042e570(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042e670(CCharacter *this_ptr);
float __cdecl core_charactr_cpp_CCharacter_FUN_0042e840(void);
void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042ea40(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042ec40(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042ede0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042f300(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042f340(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042f3e0(void);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042f730(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_computePickupInLoop_FUN_0042f800(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_CCharacter_FUN_0042f8a0(CCharacter *this_ptr);
void __cdecl core_charactr_cpp_FUN_0042f8f0(void);
void __cdecl core_charactr_cpp_FUN_0042f920(void);
void __cdecl core_charactr_cpp_FUN_0042f930(void);
void __cdecl core_charactr_cpp_FUN_0042f990(void);
int __cdecl core_charactr_cpp_CCharacter_FUN_0042f9c0(CCharacter *this_ptr);
int __cdecl core_charactr_cpp_FUN_0042f9d0(void);
int __cdecl core_charactr_cpp_FUN_0042f9e0(CGame *game_ptr);
CDemonActor * __cdecl core_charactr_cpp_CCharacter_dtor_FUN_0042f9f0 (CCharacter *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);
SFire * __cdecl core_charactr_cpp_SFire_ctor_FUN_0042fab0(SFire *this_ptr);
SPose * __cdecl core_charactr_cpp_SPose_ctor_FUN_0042fac0(SPose *this_ptr);
SPose * __cdecl core_charactr_cpp_SPose_dtor_FUN_0042fad0(SPose *this_ptr);
CCharacter * __cdecl core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter *this_ptr,char **actor_name);
CCharacter * __cdecl core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0(CCharacter *this_ptr,char **actor_name);
CCharacter * __cdecl core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter *this_ptr,char **actor_name);
void __cdecl core_chain_cpp_staticInit_FUN_0042fb10(void);
CChain * __cdecl core_chain_cpp_factoryFunc_FUN_0042fb40(void);
CDemonActorType * __cdecl core_chain_cpp_StartOfClass_FUN_0042fb70(void);
CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_0042fb80(CChain *this_ptr);
CVector3f * __cdecl core_chain_cpp_FUN_0042fcc0(void);
void __cdecl core_chain_cpp_FUN_0042fd20(void);
void __cdecl core_chain_cpp_FUN_0042fed0(void);

