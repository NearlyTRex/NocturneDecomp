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

void core_game_cpp_CGame_FUN_004e07a0(CGame * this_ptr);
void core_game_cpp_CGame_beginFadeIn_FUN_004e0920(CGame * this_ptr);
void core_game_cpp_CGame_beginFadeOut_FUN_004e0960(CGame * this_ptr);
undefined core_game_cpp_FUN_004e09a0();
undefined core_game_cpp_FUN_004e09c0();
undefined core_game_cpp_FUN_004e0aa0();
undefined4 core_game_cpp_CGame_fadeIn_FUN_004e0b90(CGame * this_ptr);
void core_game_cpp_CGame_FUN_004e0bb0(CGame * this_ptr);
void core_game_cpp_CGame_FUN_004e0bd0(CGame * this_ptr);
void core_game_cpp_CGame_FUN_004e0bf0(CGame * this_ptr);
void core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename);
void core_game_cpp_CGame_loadSaveGame_FUN_004e12b0(CGame * this_ptr, char * save_filename, int load_mode, char * chapter_name);
undefined core_game_cpp_FUN_004e1c30();
void core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame * this_ptr, int unknown);
undefined core_game_cpp_CGame_displayBitmap_FUN_004e2890();
void core_game_cpp_CGame_openSomething_FUN_004e2910(CGame * this_ptr);
undefined core_game_cpp_FUN_004e2f10();
undefined core_game_cpp_FUN_004e2fc0();
void core_game_cpp_CGame_slamDT_FUN_004e3080(CGame * this_ptr, float delta_time);
undefined core_game_cpp_FUN_004e30f0();
undefined core_game_cpp_FUN_004e3110();
void core_game_cpp_CGame_process_FUN_004e3190(CGame * this_ptr);
void core_game_cpp_CGame_FUN_004e36f0(CGame * this_ptr);
void core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame * this_ptr);
undefined core_game_cpp_CGame_finishAct_FUN_004e3b90();
void core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame * this_ptr);
CGame * core_game_cpp_CGame_copyPixx_FUN_004e4440(CGame * this_ptr, CGame * other);
CGame * core_game_cpp_CGame_copyPixx_FUN_004e4450(CGame * this_ptr, CGame * other);
CGame * core_game_cpp_CGame_copyPixx_FUN_004e4460(CGame * this_ptr, CGame * other);
CDemonActorType * core_gargoyle_cpp_staticInit_FUN_004e4470(void);
undefined core_gargoyle_cpp_FUN_004e44a0();
undefined core_gargoyle_cpp_FUN_004e44d0();
CGargoyle * core_gargoyle_cpp_FUN_004e44e0(CGargoyle * this_ptr);
undefined core_gargoyle_cpp_CGargoyle_FUN_004e45e0();
undefined core_gargoyle_cpp_CGargoyle_FUN_004e48a0();
undefined core_gargoyle_cpp_CGargoyle_unk6_FUN_004e4a00();
undefined core_gargoyle_cpp_CGargoyle_unk5_FUN_004e53f0();
undefined core_gargoyle_cpp_CGargoyle_load_FUN_004e5470();
undefined core_gargoyle_cpp_CGargoyle_unk4_FUN_004e5530();
undefined core_gargoyle_cpp_CGargoyle_unk3_FUN_004e57d0();
undefined core_gargoyle_cpp_CGargoyle_FUN_004e5930();
undefined core_gargoyle_cpp_CGargoyle_FUN_004e5ad0();
undefined core_gargoyle_cpp_CGargoyle_getPropertyList_FUN_004e5af0();
undefined core_gargoyle_cpp_FUN_004e5ba0();
CGargoyle * core_gargoyle_cpp_FUN_004e5bd0(CGargoyle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
CDemonActorType * core_gasmask_cpp_staticInit_FUN_004e5c90(void);
undefined core_gasmask_cpp_FUN_004e5cc0();
undefined core_gasmask_cpp_FUN_004e5cf0();
CGasMask * core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(CGasMask * this_ptr);
undefined core_gasmask_cpp_CGasMask_FUN_004e5d50();
undefined core_gasmask_cpp_CGasMask_FUN_004e5d70();
undefined core_gasmask_cpp_FUN_004e5d90();
undefined core_gasmask_cpp_CGasMask_FUN_004e5da0();
undefined core_gasmask_cpp_CGasMask_load_FUN_004e5e20();
undefined core_gasmask_cpp_FUN_004e5e50();
undefined core_gasmask_cpp_CGasMask_FUN_004e5e60();
undefined core_gasmask_cpp_CGasMask_FUN_004e5eb0();
undefined core_gasmask_cpp_FUN_004e5ef0();
CGasMask * core_gasmask_cpp_FUN_004e5f40(CGasMask * this_ptr, uint d1, uint d2);
CDemonActorType * core_ghoul_cpp_staticInit_FUN_004e5f90(void);
undefined core_ghoul_cpp_FUN_004e5ff0();
undefined core_ghoul_cpp_FUN_004e6020();
CGhoul * core_ghoul_cpp_FUN_004e6030(CGhoul * this_ptr);
undefined core_ghoul_cpp_FUN_004e6160();
undefined core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0();
undefined core_ghoul_cpp_CGhoul_FUN_004e6600();
undefined core_ghoul_cpp_FUN_004e8190();
undefined core_ghoul_cpp_CGhoul_load_FUN_004e81c0();
undefined core_ghoul_cpp_FUN_004e82d0();
undefined core_ghoul_cpp_FUN_004e84a0();
undefined core_ghoul_cpp_FUN_004e8520();
undefined core_ghoul_cpp_FUN_004e87e0();
undefined core_ghoul_cpp_FUN_004e8bc0();
undefined core_ghoul_cpp_FUN_004e8dc0();
undefined core_ghoul_cpp_FUN_004e8e40();
undefined core_ghoul_cpp_FUN_004e8ee0();
CGhoul * core_ghoul_cpp_FUN_004e8f10(CGhoul * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8);
void core_glass_cpp_staticInit_FUN_004e8fd0(void);
CGlass * core_glass_cpp_CGlass_factoryFunc_FUN_004e9000(void);
CDemonActorType * core_glass_cpp_CGlass_getActorType_FUN_004e9030(CGlass * this_ptr);
CGlass * core_glass_cpp_CGlass_ctor_FUN_004e9040(CGlass * this_ptr);
void core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass * this_ptr);
void core_glass_cpp_CGlass_process_FUN_004e98e0(CGlass * this_ptr);
int core_glass_cpp_CGlass_renderOpaque_FUN_004e9930(CGlass * this_ptr);
int core_glass_cpp_CGlass_renderTransparent_FUN_004e9af0(CGlass * this_ptr);
void core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass * this_ptr);
void core_glass_cpp_CGlass_renderBackground_FUN_004e9e90(CGlass * this_ptr, int layer_flag);
CBoundingBox3D * core_glass_cpp_CGlass_getBoundingBox_FUN_004ea030(CGlass * this_ptr, CBoundingBox3D * out_box);
void core_glass_cpp_CGlass_serialize_FUN_004ea090(CGlass * this_ptr);
int core_glass_cpp_CGlass_hasCollision_FUN_004ea190(CGlass * this_ptr, SCollisionInfo * collision_info);
void core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass * this_ptr, SQuadVertices * quad_vertices, CVector4i * quad_uv_u, CVector4i * quad_uv_v, int subdivision_level);
void core_glass_cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location);
void core_glass_cpp_CGlass_getSurfaceProperties_FUN_004eb250(CGlass * this_ptr, SSurfaceInfo * surface_info);
int core_glass_cpp_CGlass_getGroundType_FUN_004eb390(CGlass * this_ptr);
void core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass * this_ptr);
void core_glass_cpp_CGlass_getPropertyList_FUN_004eb3c0(CGlass * this_ptr, CActorPropertyList * property_list);
void core_glass_cpp_CGlass_processInEditor_FUN_004eb490(CGlass * this_ptr);
void core_glass_cpp_CGlass_showEditorHelp_FUN_004eb600(CGlass * this_ptr, int * y_pos);
void core_glass_cpp_CGlass_writeDependencies_FUN_004eb690(CGlass * this_ptr, FILE * file_handle);
CGlass * core_glass_cpp_CGlass_dtor_FUN_004eb820(CGlass * this_ptr, uint d1, uint d2, uint d3, uint d4);
void core_glass_cpp_freeVectors_FUN_004eb8a0(CVector3f * * array);
void core_gore_cpp_staticInit_FUN_004eb8c0(void);
undefined core_gore_cpp_FUN_004eb950();
undefined core_gore_cpp_FUN_004eb9a0();
undefined core_gore_cpp_FUN_004eb9d0();
undefined core_gore_cpp_FUN_004ebac0();
undefined core_gore_cpp_FUN_004ec290();
undefined core_gore_cpp_FUN_004ec2f0();
undefined core_gore_cpp_FUN_004ec390();
undefined core_gore_cpp_FUN_004ec470();
undefined core_gore_cpp_FUN_004ec500();
undefined core_gore_cpp_FUN_004ecad0();
undefined core_gore_cpp_FUN_004ecb00();
undefined core_gore_cpp_FUN_004ecb90();
undefined core_gore_cpp_FUN_004ecc40();
undefined core_gore_cpp_FUN_004ecce0();
undefined core_gore_cpp_FUN_004ed0a0();
undefined core_gore_cpp_FUN_004ed0d0();
undefined core_gore_cpp_FUN_004ed160();
undefined core_gore_cpp_FUN_004ed1c0();
undefined core_gore_cpp_FUN_004ed240();
undefined core_gore_cpp_FUN_004ed3c0();
CGore * core_gore_cpp_FUN_004ed730(CGore * this_ptr);
CGore * core_gore_cpp_FUN_004ed750(CGore * this_ptr);
undefined core_gore_cpp_FUN_004ed760();
void core_gore_cpp_CGore_FUN_004ed7b0(CGore * this_ptr);
void core_gore_cpp_FUN_004ed830(CGore * this_ptr);
undefined core_gore_cpp_CGore_process_FUN_004ed9e0();
undefined core_gore_cpp_FUN_004edaa0();
undefined core_gore_cpp_FUN_004edaf0();
undefined core_gore_cpp_FUN_004edb40();
undefined core_gore_cpp_FUN_004edb70();
undefined core_gore_cpp_FUN_004edbb0();
undefined core_gore_cpp_FUN_004edde0();
undefined core_gore_cpp_FUN_004ede30();
void core_gore_cpp_CGore_FUN_004ede60(CGore * this_ptr);
undefined core_gore_cpp_CreateFlies_FUN_004edf30();
void core_gore_cpp_CGore_FUN_004ee030(CGore * this_ptr, CDemonActor * actor);
void core_gore_cpp_CGore_FUN_004ee070(CGore * this_ptr);
int core_gore_cpp_CGore_FUN_004ee0f0(CGore * this_ptr);
undefined core_gore_cpp_FUN_004ee1e0();
int core_gore_cpp_FUN_004ee290(CGore * this_ptr);
undefined core_gore_cpp_FUN_004ee340();
CFootstep * core_gore_cpp_FUN_004ee370(CFootstep * this_ptr);
CFootstep * core_gore_cpp_FUN_004ee390(CFootstep * this_ptr);
CBloodPool * core_gore_cpp_FUN_004ee3b0(CBloodPool * this_ptr);
CBloodPool * core_gore_cpp_FUN_004ee3c0(CBloodPool * this_ptr);
CBloodSplat * core_gore_cpp_FUN_004ee3d0(CBloodSplat * this_ptr);
CBloodSplat * core_gore_cpp_FUN_004ee3e0(CBloodSplat * this_ptr);
CBloodParticle * core_gore_cpp_FUN_004ee3f0(CBloodParticle * this_ptr);
CBloodParticle * core_gore_cpp_FUN_004ee410(CBloodParticle * this_ptr);
undefined core_gore_cpp_FUN_004ee420();
undefined core_gore_cpp_FUN_004ee440();
undefined core_gore_cpp_FUN_004ee460();
int core_gore_cpp_cleanupBloodParticles_FUN_004ee480(CBloodParticle * ptr);
CDemonActorType * core_grave_cpp_staticInit_FUN_004ee4a0(void);
undefined core_grave_cpp_FUN_004ee4d0();
undefined core_grave_cpp_FUN_004ee500();
CGrave * core_grave_cpp_FUN_004ee510(CGrave * this_ptr);
undefined core_grave_cpp_FUN_004ee5a0();
undefined core_grave_cpp_FUN_004ee5c0();
undefined core_grave_cpp_FUN_004ee680();
undefined core_grave_cpp_FUN_004ee710();
undefined core_grave_cpp_FUN_004ee790();
undefined core_grave_cpp_CGrave_load_FUN_004ee7f0();
undefined core_grave_cpp_FUN_004ee8f0();
undefined core_grave_cpp_FUN_004ee9d0();
undefined core_grave_cpp_FUN_004ee9e0();
undefined core_grave_cpp_FUN_004eea70();
undefined core_grave_cpp_FUN_004eead0();
undefined core_grave_cpp_FUN_004eeb10();
CGrave * core_grave_cpp_FUN_004eeb40(CGrave * this_ptr, uint d1, uint d2);
void core_ground_cpp_staticInit_FUN_004eeb90(void);
FILE * core_ground_cpp_openFileWithExtension_FUN_004eebc0(char * base_filename, char * file_extension, char * open_mode);
char * core_ground_cpp_getGroundTypeCode_FUN_004eece0(int type);
char * core_ground_cpp_getGroundTypeName_FUN_004eed80(int type);
uint core_ground_cpp_getGroundTypeColor_FUN_004eee20(int type);
void core_ground_cpp_CGround_ctor_FUN_004eee80(CGround * this_ptr, int width, int height);
CGround * core_ground_cpp_CGround_dtor_FUN_004eeee0(CGround * this_ptr);
void core_ground_cpp_CGround_init_FUN_004eef00(CGround * this_ptr);
void core_ground_cpp_CGround_free_FUN_004eefb0(CGround * this_ptr);
int core_ground_cpp_CGround_load_FUN_004ef030(CGround * this_ptr, char * filename);
int core_ground_cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row);
void core_ground_cpp_CGround_transformAndStoreVertex_FUN_004ef3a0(CGround * this_ptr, int column, int row);
void core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(CGround * this_ptr);
void core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004ef880(CGround * this_ptr, int column, int row);
void core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(CGround * this_ptr, SMRGLHeaderPrimitive * primitive);
void core_ground_cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround * this_ptr, int world_column, int world_row);
void core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(CGround * this_ptr);
void core_ground_cpp_CGround_render_FUN_004efc90(CGround * this_ptr);
int core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround * this_ptr, int world_x, int world_z);
void core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0(CGround * this_ptr, int world_x, int world_z, CVector3i * out_normal);

