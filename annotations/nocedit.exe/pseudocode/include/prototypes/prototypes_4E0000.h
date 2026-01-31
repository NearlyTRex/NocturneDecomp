#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBloodParticle.h"
#include "types/classes/CBloodPool.h"
#include "types/classes/CBloodSplat.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFlies.h"
#include "types/classes/CFootstep.h"
#include "types/classes/CGame.h"
#include "types/classes/CGargoyle.h"
#include "types/classes/CGasMask.h"
#include "types/classes/CGhoul.h"
#include "types/classes/CGlass.h"
#include "types/classes/CGore.h"
#include "types/classes/CGrave.h"
#include "types/classes/CGround.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CVector4i.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SQuadVertices.h"
#include "types/structs/SSurfaceInfo.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4E0000
// =============================================================================

void __cdecl core_game_cpp_CGame_FUN_004e07a0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004e0920(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004e0960(CGame *this_ptr);
void __cdecl core_game_cpp_FUN_004e09a0(void);
void __cdecl core_game_cpp_FUN_004e09c0(void);
void __cdecl core_game_cpp_FUN_004e0aa0(void);
uint __cdecl core_game_cpp_CGame_fadeIn_FUN_004e0b90(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_004e0bb0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_004e0bd0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_004e0bf0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *this_ptr,char *save_filename);
void __cdecl core_game_cpp_CGame_loadSaveGame_FUN_004e12b0 (CGame *this_ptr,char *save_filename,int load_mode,char *chapter_name);
void __cdecl core_game_cpp_FUN_004e1c30(void);
void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame *this_ptr,int unknown);
void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(void);
void __cdecl core_game_cpp_CGame_openSomething_FUN_004e2910(CGame *this_ptr);
void __cdecl core_game_cpp_FUN_004e2f10(void);
void __cdecl core_game_cpp_FUN_004e2fc0(void);
void __cdecl core_game_cpp_CGame_slamDT_FUN_004e3080(CGame *this_ptr,float delta_time);
void __cdecl core_game_cpp_FUN_004e30f0(void);
void __cdecl core_game_cpp_FUN_004e3110(void);
void __cdecl core_game_cpp_CGame_process_FUN_004e3190(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_FUN_004e36f0(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr);
void __cdecl core_game_cpp_CGame_finishAct_FUN_004e3b90(void);
void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr);
CGame * __cdecl core_game_cpp_CGame_copyPixx_FUN_004e4440(CGame *this_ptr,CGame *other);
CGame * __cdecl core_game_cpp_CGame_copyPixx_FUN_004e4450(CGame *this_ptr,CGame *other);
CGame * __cdecl core_game_cpp_CGame_copyPixx_FUN_004e4460(CGame *this_ptr,CGame *other);
void __cdecl core_gargoyle_cpp_staticInit_FUN_004e4470(void);
CGargoyle * __cdecl core_gargoyle_cpp_factoryFunc_FUN_004e44a0(void);
CDemonActorType * __cdecl core_gargoyle_cpp_FUN_004e44d0(void);
CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004e44e0(CGargoyle *this_ptr);
void __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e45e0(void);
int __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e48a0(void);
void __cdecl core_gargoyle_cpp_CGargoyle_unk6_FUN_004e4a00(void);
void __cdecl core_gargoyle_cpp_CGargoyle_unk5_FUN_004e53f0(void);
void __cdecl core_gargoyle_cpp_CGargoyle_load_FUN_004e5470(void);
void __cdecl core_gargoyle_cpp_CGargoyle_unk4_FUN_004e5530(void);
void __cdecl core_gargoyle_cpp_CGargoyle_unk3_FUN_004e57d0(void);
int __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e5930(void);
void __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e5ad0(void);
void __cdecl core_gargoyle_cpp_CGargoyle_getPropertyList_FUN_004e5af0(void);
void __cdecl core_gargoyle_cpp_FUN_004e5ba0(void);
CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_dtor_FUN_004e5bd0 (CGargoyle *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);
void __cdecl core_gasmask_cpp_staticInit_FUN_004e5c90(void);
CGasMask * __cdecl core_gasmask_cpp_factoryFunc_FUN_004e5cc0(void);
CDemonActorType * __cdecl core_gasmask_cpp_CGasMask_getActorType_FUN_004e5cf0(CGasMask *this_ptr);
CGasMask * __cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(CGasMask *this_ptr);
void __cdecl core_gasmask_cpp_CGasMask_FUN_004e5d50(void);
int __cdecl core_gasmask_cpp_CGasMask_FUN_004e5d70(void);
void __cdecl core_gasmask_cpp_FUN_004e5d90(void);
int __cdecl core_gasmask_cpp_CGasMask_FUN_004e5da0(void);
void __cdecl core_gasmask_cpp_CGasMask_load_FUN_004e5e20(void);
int __cdecl core_gasmask_cpp_FUN_004e5e50(void);
float * __cdecl core_gasmask_cpp_CGasMask_FUN_004e5e60(void);
void __cdecl core_gasmask_cpp_CGasMask_FUN_004e5eb0(void);
void __cdecl core_gasmask_cpp_FUN_004e5ef0(void);
CGasMask * __cdecl core_gasmask_cpp_CGasMask_dtor_FUN_004e5f40(CGasMask *this_ptr,uint d1,uint d2);
void __cdecl core_ghoul_cpp_staticInit_FUN_004e5f90(void);
CGhoul * __cdecl core_ghoul_cpp_factoryFunc_FUN_004e5ff0(void);
CDemonActorType * __cdecl core_ghoul_cpp_FUN_004e6020(void);
CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(CGhoul *this_ptr);
void __cdecl core_ghoul_cpp_FUN_004e6160(void);
void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(void);
void __cdecl core_ghoul_cpp_CGhoul_FUN_004e6600(void);
void __cdecl core_ghoul_cpp_FUN_004e8190(void);
void __cdecl core_ghoul_cpp_CGhoul_load_FUN_004e81c0(void);
int __cdecl core_ghoul_cpp_FUN_004e82d0(void);
CVector3f * __cdecl core_ghoul_cpp_FUN_004e84a0(void);
void __cdecl core_ghoul_cpp_FUN_004e8520(void);
void __cdecl core_ghoul_cpp_FUN_004e87e0(void);
int __cdecl core_ghoul_cpp_FUN_004e8bc0(void);
void __cdecl core_ghoul_cpp_CGhoul_getPropertyList_FUN_004e8dc0 (CGhoul *this_ptr,CActorPropertyList *property_list);
void __cdecl core_ghoul_cpp_FUN_004e8e40(void);
void __cdecl core_ghoul_cpp_FUN_004e8ee0(void);
CGhoul * __cdecl core_ghoul_cpp_CGhoul_dtor_FUN_004e8f10 (CGhoul *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);
void __cdecl core_glass_cpp_staticInit_FUN_004e8fd0(void);
CGlass * __cdecl core_glass_cpp_factoryFunc_FUN_004e9000(void);
CDemonActorType * __cdecl core_glass_cpp_CGlass_getActorType_FUN_004e9030(CGlass *this_ptr);
CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004e9040(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_process_FUN_004e98e0(CGlass *this_ptr,float delta_time);
int __cdecl core_glass_cpp_CGlass_renderOpaque_FUN_004e9930(CGlass *this_ptr);
int __cdecl core_glass_cpp_CGlass_renderTransparent_FUN_004e9af0(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004e9e90(CGlass *this_ptr,int layer_flag);
CBoundingBox3D * __cdecl core_glass_cpp_CGlass_getBoundingBox_FUN_004ea030(CGlass *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_glass_cpp_CGlass_serialize_FUN_004ea090(CGlass *this_ptr);
int __cdecl core_glass_cpp_CGlass_hasCollision_FUN_004ea190(CGlass *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0 (CGlass *this_ptr,SQuadVertices *quad_vertices,CVector4i *quad_uv_u,CVector4i *quad_uv_v, int subdivision_level);
void __cdecl core_glass_cpp_CGlass_shatter_FUN_004eaef0(CGlass *this_ptr,CVector3f *location);
void __cdecl core_glass_cpp_CGlass_getSurfaceProperties_FUN_004eb250(CGlass *this_ptr,SSurfaceInfo *surface_info);
int __cdecl core_glass_cpp_CGlass_getGroundType_FUN_004eb390(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_getPropertyList_FUN_004eb3c0 (CGlass *this_ptr,CActorPropertyList *property_list);
void __cdecl core_glass_cpp_CGlass_processInEditor_FUN_004eb490(CGlass *this_ptr);
void __cdecl core_glass_cpp_CGlass_showEditorHelp_FUN_004eb600(CGlass *this_ptr,int *y_pos);
void __cdecl core_glass_cpp_CGlass_writeDependencies_FUN_004eb690(CGlass *this_ptr,_FILE *file_handle);
CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004eb820(CGlass *this_ptr,uint d1,uint d2,uint d3,uint d4);
void __cdecl core_glass_cpp_freeVectors_FUN_004eb8a0(CVector3f **array);
void __cdecl core_gore_cpp_staticInit_FUN_004eb8c0(void);
void __cdecl core_gore_cpp_FUN_004eb950(void);
void __cdecl core_gore_cpp_FUN_004eb9a0(void);
void __cdecl core_gore_cpp_FUN_004eb9d0(void);
void __cdecl core_gore_cpp_FUN_004ebac0(void);
int __cdecl core_gore_cpp_FUN_004ec290(void);
void __cdecl core_gore_cpp_FUN_004ec2f0(void);
void __cdecl core_gore_cpp_FUN_004ec390(void);
void __cdecl core_gore_cpp_FUN_004ec470(void);
void __cdecl core_gore_cpp_FUN_004ec500(void);
void __cdecl core_gore_cpp_FUN_004ecad0(void);
void __cdecl core_gore_cpp_FUN_004ecb00(void);
void __cdecl core_gore_cpp_FUN_004ecb90(void);
void __cdecl core_gore_cpp_FUN_004ecc40(void);
void __cdecl core_gore_cpp_FUN_004ecce0(void);
void __cdecl core_gore_cpp_FUN_004ed0a0(void);
void __cdecl core_gore_cpp_FUN_004ed0d0(void);
void __cdecl core_gore_cpp_FUN_004ed160(void);
void __cdecl core_gore_cpp_FUN_004ed1c0(void);
void __cdecl core_gore_cpp_FUN_004ed240(void);
void __cdecl core_gore_cpp_FUN_004ed3c0(void);
CGore * __cdecl core_gore_cpp_FUN_004ed730(CGore *this_ptr);
CGore * __cdecl core_gore_cpp_FUN_004ed750(CGore *this_ptr);
void __cdecl core_gore_cpp_FUN_004ed760(void);
void __cdecl core_gore_cpp_CGore_FUN_004ed7b0(CGore *this_ptr);
void __cdecl core_gore_cpp_FUN_004ed830(CGore *this_ptr);
int __cdecl core_gore_cpp_CGore_process_FUN_004ed9e0(CGore *this_ptr);
void __cdecl core_gore_cpp_FUN_004edaa0(void);
CBloodSplat * __cdecl core_gore_cpp_FUN_004edaf0(void);
void __cdecl core_gore_cpp_FUN_004edb40(void);
void __cdecl core_gore_cpp_FUN_004edb70(void);
void __cdecl core_gore_cpp_FUN_004edbb0(void);
CBloodPool * __cdecl core_gore_cpp_FUN_004edde0(void);
void __cdecl core_gore_cpp_FUN_004ede30(void);
void __cdecl core_gore_cpp_CGore_FUN_004ede60(CGore *this_ptr);
CFlies * __cdecl core_gore_cpp_CreateFlies_FUN_004edf30(void);
void __cdecl core_gore_cpp_CGore_FUN_004ee030(CGore *this_ptr,CDemonActor *actor);
void __cdecl core_gore_cpp_CGore_FUN_004ee070(CGore *this_ptr);
int __cdecl core_gore_cpp_CGore_FUN_004ee0f0(CGore *this_ptr);
int __cdecl core_gore_cpp_FUN_004ee1e0(void);
int __cdecl core_gore_cpp_FUN_004ee290(CGore *this_ptr);
void __cdecl core_gore_cpp_FUN_004ee340(void);
CFootstep * __cdecl core_gore_cpp_FUN_004ee370(CFootstep *this_ptr);
CFootstep * __cdecl core_gore_cpp_FUN_004ee390(CFootstep *this_ptr);
CBloodPool * __cdecl core_gore_cpp_FUN_004ee3b0(CBloodPool *this_ptr);
CBloodPool * __cdecl core_gore_cpp_FUN_004ee3c0(CBloodPool *this_ptr);
CBloodSplat * __cdecl core_gore_cpp_FUN_004ee3d0(CBloodSplat *this_ptr);
CBloodSplat * __cdecl core_gore_cpp_FUN_004ee3e0(CBloodSplat *this_ptr);
CBloodParticle * __cdecl core_gore_cpp_FUN_004ee3f0(CBloodParticle *this_ptr);
CBloodParticle * __cdecl core_gore_cpp_FUN_004ee410(CBloodParticle *this_ptr);
void __cdecl core_gore_cpp_FUN_004ee420(void);
void __cdecl core_gore_cpp_FUN_004ee440(void);
void __cdecl core_gore_cpp_FUN_004ee460(void);
int __cdecl core_gore_cpp_cleanupBloodParticles_FUN_004ee480(CBloodParticle *ptr);
void __cdecl core_grave_cpp_staticInit_FUN_004ee4a0(void);
CGrave * __cdecl core_grave_cpp_factoryFunc_FUN_004ee4d0(void);
CDemonActorType * __cdecl core_grave_cpp_CGrave_getActorType_FUN_004ee500(CGrave *this_ptr);
CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004ee510(CGrave *this_ptr);
void __cdecl core_grave_cpp_FUN_004ee5a0(void);
void __cdecl core_grave_cpp_FUN_004ee5c0(void);
int __cdecl core_grave_cpp_FUN_004ee680(void);
void __cdecl core_grave_cpp_FUN_004ee710(void);
void __cdecl core_grave_cpp_FUN_004ee790(void);
void __cdecl core_grave_cpp_CGrave_load_FUN_004ee7f0(void);
CVector3f * __cdecl core_grave_cpp_FUN_004ee8f0(void);
int __cdecl core_grave_cpp_FUN_004ee9d0(void);
void __cdecl core_grave_cpp_FUN_004ee9e0(void);
void __cdecl core_grave_cpp_FUN_004eea70(void);
void __cdecl core_grave_cpp_FUN_004eead0(void);
void __cdecl core_grave_cpp_FUN_004eeb10(void);
CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004eeb40(CGrave *this_ptr,uint d1,uint d2);
void __cdecl core_ground_cpp_staticInit_FUN_004eeb90(void);
_FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004eebc0 (char *base_filename,char *file_extension,char *open_mode);
char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004eece0(int type);
char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004eed80(int type);
uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004eee20(int type);
void __cdecl core_ground_cpp_CGround_ctor_FUN_004eee80(CGround *this_ptr,int width,int height);
CGround * __cdecl core_ground_cpp_CGround_dtor_FUN_004eeee0(CGround *this_ptr);
void __cdecl core_ground_cpp_CGround_init_FUN_004eef00(CGround *this_ptr);
void __cdecl core_ground_cpp_CGround_free_FUN_004eefb0(CGround *this_ptr);
int __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename);
int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(CGround *this_ptr,int column,int row);
void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0(CGround *this_ptr,int column,int row);
void __cdecl core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround *this_ptr);
void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(CGround *this_ptr,int column,int row);
void __cdecl core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970 (CGround *this_ptr,SMRGLHeaderPrimitive *primitive);
void __cdecl core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990 (CGround *this_ptr,int world_column,int world_row);
void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(CGround *this_ptr);
void __cdecl core_ground_cpp_CGround_render_FUN_004efc90(CGround *this_ptr);
int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z);
void __cdecl core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0 (CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal);

