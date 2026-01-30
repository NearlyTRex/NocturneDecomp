#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCourse.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonMission.h"
#include "types/classes/CFileBitStream.h"
#include "types/classes/CMP3Decoder.h"
#include "types/classes/CMimic.h"
#include "types/classes/CMineCar.h"
#include "types/classes/CMirror.h"
#include "types/classes/CMobster.h"
#include "types/classes/CMoloch.h"
#include "types/classes/CMoon.h"
#include "types/classes/CMorph.h"
#include "types/classes/CMorphModel.h"
#include "types/classes/CMotionController.h"
#include "types/classes/CMotionList.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SBat.h"
#include "types/structs/SBitAllocationTable.h"
#include "types/structs/SCPUInfo.h"
#include "types/structs/SClipPlane.h"
#include "types/structs/SHuffmanTable.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLModelBounds.h"
#include "types/structs/SMirrorReflection.h"
#include "types/structs/SMorphControlPoint.h"
#include "types/structs/SMotion.h"
#include "types/structs/SMotionTransition.h"
#include "types/structs/SMpegFrame.h"
#include "types/structs/SMpegFrameHeader.h"
#include "types/structs/SMpegSubbandAllocation.h"
#include "types/structs/SMpegSubbandSCFSI.h"
#include "types/structs/SMpegSubbandScalefactors.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x520000
// =============================================================================

void __cdecl core_mimic_cpp_FUN_00520500(void);
int __cdecl core_mimic_cpp_CMimic_FUN_005205f0(CMimic *this_ptr);
int __cdecl core_mimic_cpp_CMimic_renderOpaque_FUN_00520870(CMimic *this_ptr);
int __cdecl core_mimic_cpp_FUN_00520890(void);
int __cdecl core_mimic_cpp_FUN_005208a0(void);
void __cdecl core_mimic_cpp_FUN_005208b0(void);
void __cdecl core_mimic_cpp_CMimic_load_FUN_00520930(void);
int __cdecl core_mimic_cpp_FUN_00520a00(void);
void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(void);
void __cdecl core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(void);
void __cdecl core_mimic_cpp_FUN_00520d10(void);
void __cdecl core_mimic_cpp_FUN_00520da0(void);
void __cdecl core_mimic_cpp_FUN_00520dd0(void);
void __cdecl core_mimic_cpp_FUN_00520e00(void);
void __cdecl core_minecar_cpp_staticInit_FUN_00520e20(void);
CMineCar * __cdecl core_minecar_cpp_factoryFunc_FUN_00520e50(void);
CDemonActorType * __cdecl core_minecar_cpp_CMinecar_getActorType_FUN_00520e80(CMineCar *this_ptr);
void __cdecl core_minecar_cpp_CMinecar_setup_FUN_00520e90(CMineCar *this_ptr);
void __cdecl core_minecar_cpp_CMinecar_process_FUN_00520eb0(CMineCar *this_ptr,float delta_time);
CMineCar * __cdecl core_minecar_cpp_FUN_00520f20(CMineCar *this_ptr);
CMineCar * __cdecl core_minecar_cpp_FUN_00520f40(CMineCar *this_ptr,uint d1,uint d2,uint d3);
void __cdecl core_mirror_cpp_staticInit_FUN_00520fb0(void);
void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0 (SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c);
void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_00521160 (SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b, CVector3f *out_intersection);
void __cdecl core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290 (SClipPlane *clip_plane,CVector3f *input_vertices,int input_count, CVector3f *output_vertices,int *output_count);
CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_005213c0(CMirror *this_ptr);
CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_005213e0(CMirror *this_ptr);
void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_00521400 (CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3, CVector3f *corner4);
void __cdecl core_mirror_cpp_setupMirrorCamera_FUN_00521480(SMirrorReflection *reflection);
void __cdecl core_mirror_cpp_setupMirrorReflection_FUN_005214c0(SMirrorReflection *reflection);
CVector3f * __cdecl core_mirror_cpp_applyMirrorTransform_FUN_005222f0 (SMirrorReflection *reflection,CVector3f *output_buffer,CVector3f *input_vector);
uint __cdecl core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310 (CMirror *this_ptr,SMRGLHeaderPrimitive *primitive);
void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560 (CMirror *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_005225a0 (CMirror *this_ptr,SMRGLHeaderPrimitive *prim);
void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_005225e0 (CMirror *this_ptr,SMRGLHeaderPrimitive *prim);
int __cdecl core_mirror_cpp_CMirror_renderMirrorQuad_FUN_00522670(CMirror *this_ptr);
void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00522800(CMirror *this_ptr);
CVector3f * __stack2_esi core_mirror_cpp_transformMirrorVertex_FUN_005229b0 (SMirrorReflection *reflection,CVector3f *input_vertex,CVector3f *output_vertex);
CVector3i * __stack3_esi core_mirror_cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50 (SMirrorReflection *reflection,CVector3i *point_a,CVector3i *point_b,CVector3i *output);
SClipPlane * __cdecl core_mirror_cpp_SClipPlane_ctor_FUN_00522bf0(SClipPlane *this_ptr);
SClipPlane * __cdecl core_mirror_cpp_SClipPlane_dtor_FUN_00522c00(SClipPlane *this_ptr);
void __cdecl core_mirror_cpp_freeClipPlaneArray_FUN_00522c10(SClipPlane **array_ptr);
void __cdecl core_mirror_cpp_freeVectorArray32_FUN_00522c30(CVector3f **array_ptr);
void __cdecl core_mission_cpp_staticInit_FUN_00522c50(void);
void __cdecl core_mission_cpp_FUN_00522c60(_FILE *file_handle);
void __cdecl core_mission_cpp_CDemonMission_clearMaybe_FUN_00522c80(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_checkMemory_FUN_00522d20(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_load_FUN_00522d90 (CDemonMission *this_ptr,char *mission_filename,int load_flags);
void __cdecl core_mission_cpp_CDemonMission_save_FUN_00522e30(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_005235b0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission *this_ptr);
CDemonActor * __cdecl core_mission_cpp_CDemonMission_loadActor_FUN_00523990 (CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description );
void __cdecl core_mission_cpp_CDemonMission_saveActor_FUN_00523af0 (CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor, char *description);
void __cdecl core_mission_cpp_CDemonMission_FUN_00523b70(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0 (CDemonMission *this_ptr,CDemonActor *actor_ptr);
int __cdecl core_mission_cpp_CDemonMission_FUN_00523cc0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_00523cf0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_00523f20(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_00523f50(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_00523fb0(CDemonMission *this_ptr);
char * __cdecl core_mission_cpp_CDemonMission_FUN_00524030(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_00524070(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_process_FUN_00524250(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_005243a0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_run_FUN_00524420(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_00524630(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_00524660(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission *this_ptr);
int __cdecl core_mission_cpp_CDemonMission_FUN_00524760(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_005248a0(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_FUN_005248e0(void);
int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission *this_ptr);
int __cdecl core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission *this_ptr,int creation_flags);
void __cdecl core_mission_cpp_FUN_00524c20(void);
int __cdecl core_mission_cpp_CDemonMission_FUN_00524e00(CDemonMission *this_ptr);
void __cdecl core_mission_cpp_CDemonMission_FUN_00524e60(CDemonMission *this_ptr);
CDemonMission * __cdecl core_mission_cpp_CDemonMission_ctor_FUN_00524ef0(CDemonMission *this_ptr);
CDemonMission * __cdecl core_mission_cpp_CDemonMission_dtor_FUN_00524f00(CDemonMission *this_ptr);
void __cdecl core_mmx_c_detectCPUFeatures_FUN_00524f10(void);
void __cdecl core_mmx_c_detectIntelProcessor_FUN_00524f4c(void);
void __cdecl core_mmx_c_detectMMXSupport_FUN_00524ff9(void);
int __cdecl core_mmx_c_getCPUInfo_FUN_0052500f(SCPUInfo *cpu_info);
void __cdecl core_mobster_cpp_staticInit_FUN_00525070(void);
float * __cdecl core_mobster_cpp_FUN_005250a0(void);
CVector3f * __cdecl core_mobster_cpp_FUN_00525110(void);
CMobster * __cdecl core_mobster_cpp_factoryFunc_FUN_005251c0(void);
CDemonActorType * __cdecl core_mobster_cpp_CMobster_getActorType_FUN_005251f0(CMobster *this_ptr);
CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_00525200(CMobster *this_ptr);
void __cdecl core_mobster_cpp_FUN_00525340(void);
void __cdecl core_mobster_cpp_FUN_00525650(void);
void __cdecl core_mobster_cpp_FUN_00525720(void);
void __cdecl core_mobster_cpp_FUN_00525840(void);
void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0(void);
void __cdecl core_mobster_cpp_FUN_00526b00(void);
void __cdecl core_mobster_cpp_FUN_00526b20(void);
int __cdecl core_mobster_cpp_FUN_00526d90(void);
void __cdecl core_mobster_cpp_FUN_005271c0(void);
void __cdecl core_mobster_cpp_CMobster_load_FUN_00527230(void);
int __cdecl core_mobster_cpp_FUN_00527360(void);
void __cdecl core_mobster_cpp_FUN_00527380(void);
void __cdecl core_mobster_cpp_FUN_00527740(void);
int __cdecl core_mobster_cpp_FUN_005278d0(void);
void __cdecl core_mobster_cpp_FUN_005279d0(void);
void __cdecl core_mobster_cpp_FUN_005279f0(void);
void __cdecl core_mobster_cpp_FUN_00527b70(void);
void __cdecl core_mobster_cpp_FUN_00527c30(void);
void __cdecl core_mobster_cpp_FUN_00527c40(void);
CMobster * __cdecl core_mobster_cpp_CMobster_dtor_FUN_00527c70 (CMobster *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);
void __cdecl engine_model_c_byteswapMRGLData_FUN_00527e40(SMRGLHeaderExtended *mrgl_data,int data_size);
SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_00527ec0(char *filename);
void __cdecl engine_model_c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended *modelStruct);
void __cdecl engine_model_c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended *header,SMRGLModelBounds *output);
int __cdecl engine_model_c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended *header);
void __cdecl engine_model_c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended *block);
void __cdecl engine_model_c_initializeMRGLModel_FUN_00528940(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_00528970(char *filename,int model_size);
void __cdecl core_moloch_cpp_staticInit_FUN_00528ac0(void);
CMoloch * __cdecl core_moloch_cpp_factoryFunc_FUN_00528af0(void);
CDemonActorType * __cdecl core_moloch_cpp_CMoloch_getActorType_FUN_00528b20(CMoloch *this_ptr);
CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr);
CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_00528bf0(CMoloch *this_ptr,uint d1,uint d2,uint d3,uint d4);
void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00528c70(CMoloch *this_ptr);
void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr,float delta_time);
void __cdecl core_moloch_cpp_FUN_005293b0(void);
int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_00529750(CMoloch *this_ptr);
void __cdecl core_moloch_cpp_CMoloch_load_FUN_00529880(void);
void __cdecl core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900(void);
void __cdecl core_moloch_cpp_FUN_00529950(void);
void __cdecl core_moloch_cpp_FUN_005299b0(void);
void __cdecl core_moloch_cpp_FUN_005299d0(void);
int __cdecl core_moloch_cpp_FUN_005299e0(void);
void __cdecl core_moon_cpp_staticInit_FUN_005299f0(void);
CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_00529a80(CMoon *this_ptr);
CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_00529ab0(CMoon *this_ptr);
void __cdecl core_moon_cpp_CMoon_init_FUN_00529ae0(CMoon *this_ptr);
void __cdecl core_moon_cpp_CMoon_free_FUN_00529ce0(CMoon *this_ptr);
void __cdecl core_moon_cpp_CMoon_update_FUN_00529d60(CMoon *this_ptr,float delta_time);
void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr);
void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon *this_ptr);
int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(CMoon *this_ptr);
SBat * __cdecl core_moon_cpp_SBat_ctor_FUN_0052a410(SBat *this_ptr);
SBat * __cdecl core_moon_cpp_SBat_dtor_FUN_0052a420(SBat *this_ptr);
void __cdecl core_moon_cpp_freeBats_FUN_0052a430(SBat **array);
void __cdecl core_moon_cpp_freeCourses_FUN_0052a450(CCourse **array);
void __cdecl core_moon_cpp_freeAlphaBitmaps_FUN_0052a470(CAlphaBitmap **array);
int __cdecl core_morph_cpp_FUN_0052a490(void);
CMorphModel * __cdecl core_morph_cpp_CMorphModel_ctor_FUN_0052a4c0(CMorphModel *this_ptr);
CMorphModel * __cdecl core_morph_cpp_CMorphModel_dtor_FUN_0052a4f0(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_free_FUN_0052a510(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052a710(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052a870(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052a8d0(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_animate_FUN_0052a920(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052aa00(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_FUN_0052aa30(void);
void __cdecl core_morph_cpp_FUN_0052aa80(void);
void __cdecl core_morph_cpp_CMorphModel_setFaceList_FUN_0052aac0(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052aca0(CMorphModel *this_ptr);
int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel *this_ptr,char *filename);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052af30(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_FUN_0052b160(void);
int __cdecl core_morph_cpp_FUN_0052b280(void);
void __cdecl core_morph_cpp_FUN_0052b310(void);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052b330(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052b350(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_FUN_0052b370(void);
void __cdecl core_morph_cpp_FUN_0052b3d0(void);
void __cdecl core_morph_cpp_FUN_0052b430(void);
void __cdecl core_morph_cpp_FUN_0052b470(void);
void __cdecl core_morph_cpp_FUN_0052b4b0(void);
void __cdecl core_morph_cpp_FUN_0052b500(void);
void __cdecl core_morph_cpp_FUN_0052b550(void);
void __cdecl core_morph_cpp_FUN_0052b580(void);
void __cdecl core_morph_cpp_FUN_0052b5c0(void);
void __cdecl core_morph_cpp_FUN_0052b600(void);
void __cdecl core_morph_cpp_FUN_0052b640(void);
void __cdecl core_morph_cpp_CMorph_getReady_FUN_0052b680(CMorph *this_ptr);
void __cdecl core_morph_cpp_CMorphModel_FUN_0052bae0(CMorphModel *this_ptr);
void __cdecl core_morph_cpp_FUN_0052bb50(void);
void __cdecl core_morph_cpp_FUN_0052bb80(void);
void __cdecl core_morph_cpp_FUN_0052bcb0(void);
void __cdecl core_morph_cpp_FUN_0052ca90(void);
void __cdecl core_morph_cpp_FUN_0052cc10(void);
int __cdecl core_morph_cpp_FUN_0052cc40(void);
SMorphControlPoint * __cdecl core_morph_cpp_SMorphControlPoint_ctor_FUN_0052cc50(SMorphControlPoint *this_ptr);
SMorphControlPoint * __cdecl core_morph_cpp_SMorphControlPoint_dtor_FUN_0052cc70(SMorphControlPoint *this_ptr);
void __cdecl core_morph_cpp_freeVectors_FUN_0052cc90(CVector3f **array);
void __cdecl core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint **array);
void __cdecl core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0(CDeformableModelInstance **array);
void __cdecl core_morph_cpp_freeBoundingBoxes_FUN_0052ccf0(CBoundingBox3D **array);
void __cdecl core_morph_cpp_freeMorphModels_FUN_0052cd10(CMorphModel **array);
void __cdecl core_morph_cpp_FUN_0052cd30(void);
void __cdecl core_motion_cpp_CMotionList_ctor_FUN_0052cd50(CMotionList *this_ptr);
void __cdecl core_motion_cpp_CMotionList_load_FUN_0052cd70(CMotionList *this_ptr,_FILE *file_handle);
void __cdecl core_motion_cpp_CMotionList_save_FUN_0052d170(CMotionList *this_ptr,_FILE *file_handle);
int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList *this_ptr);
int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList *this_ptr);
CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_0052d570(CMotionController *this_ptr);
CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_0052d5a0(CMotionController *this_ptr,uint d1);
int __cdecl core_motion_cpp_CMotionController_advance_FUN_0052d610(CMotionController *this_ptr);
int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_0052d950(CMotionController *this_ptr);
void __cdecl core_motion_cpp_CMotionController_reverseTransition_FUN_0052da50(CMotionController *this_ptr);
SMotion * __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController *this_ptr);
void __cdecl core_motion_cpp_CMotionController_reset_FUN_0052dad0(CMotionController *this_ptr);
void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00 (CMotionController *this_ptr,int desired_state_index,int force_immediate);
void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90 (CMotionController *this_ptr,char *state_name,int force_immediate);
void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_0052dbc0 (CMotionController *this_ptr,SMotionTransition *transition);
int __cdecl core_motion_cpp_CMotionController_findPatchToFrame_FUN_0052dc80(CMotionController *this_ptr);
void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_0052dcb0 (CMotionController *this_ptr,CMotionList *motion_list);
CMotionList * __cdecl core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController *this_ptr);
char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController *this_ptr);
float __cdecl core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 (CMotionController *this_ptr,int desired_state_index);
void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 (CMotionController *this_ptr,char *motion_name,float frame_number);
void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0 (CMotionController *this_ptr,int target_motion_index,float target_frame_number);
void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController *this_ptr);
int __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_0052de70 (CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number, float delta_time,float scale_factor);
int __cdecl core_motion_cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020 (CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time, SMotionTransition *out_transition);
void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_0052e1d0(CMotionController *this_ptr);
float __cdecl core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController *this_ptr);
float __cdecl core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 (CMotionController *this_ptr,int motion_index,float marker_position);
void __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0 (CMotionController *this_ptr,int motion_index,float frame_number,int *out_frame1, int *out_frame2,float *out_blend_weight);
void __cdecl core_motion_cpp_CMotionController_accumulateScaledRootMotion_FUN_0052e570 (CMotionController *this_ptr,float start_frame,float end_frame,float scale_factor);
void __cdecl core_motion_cpp_CMotionController_load_FUN_0052e5d0(CMotionController *this_ptr,_FILE *file_handle);
void __cdecl core_motion_cpp_CMotionController_save_FUN_0052e670(CMotionController *this_ptr,_FILE *file_handle);
void __cdecl core_motion_cpp_CMotionController_render_FUN_0052e700 (CMotionController *this_ptr,CDemonActor *actor);
int __cdecl sound_mp3_cpp_validateLayer2AllocationTable_FUN_0052e8d0(SMpegFrame *frame);
void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_0052ea10(int layer,int mode_extension);
void __cdecl sound_mp3_cpp_calculateMpegFrame_FUN_0052ea80(SMpegFrame *frame);
void __cdecl sound_mp3_cpp_CFileBitStream_fillBuffer_FUN_0052ec40(CFileBitStream *this_ptr);
void __cdecl sound_mp3_cpp_CFileBitStream_reset_FUN_0052eca0(CFileBitStream *this_ptr);
void __cdecl sound_mp3_cpp_CFileBitStream_init_FUN_0052ecf0 (CFileBitStream *this_ptr,_FILE *file_handle,int buffer_size,int stream_length);
void __cdecl sound_mp3_cpp_CFileBitStream_close_FUN_0052edf0(CFileBitStream *this_ptr);
uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream *this_ptr);
uint __cdecl sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream *bitstream,int num_bits);
int __cdecl sound_mp3_cpp_CFileBitStream_getTotalBitsRead_FUN_0052f0c0(CFileBitStream *this_ptr);
int __cdecl sound_mp3_cpp_CFileBitStream_getErrorFlag_FUN_0052f0d0(CFileBitStream *this_ptr);
int __cdecl sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_0052f0e0 (CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits);
uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder *this_ptr);
uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder *this_ptr,uint num_bits);
void __cdecl sound_mp3_cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder *this_ptr);
void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260 (CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte);
void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_0052f2c0(CMP3Decoder *this_ptr,int num_bits);
void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_0052f320(CMP3Decoder *this_ptr,int num_bytes);
int __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350 (CMP3Decoder *this_ptr,SHuffmanTable *huffman_table,int *x_out,int *y_out,int *v_out, int *w_out);
void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0 (CFileBitStream *this_ptr,SMpegFrameHeader *header_out);
void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670 (CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation, SBitAllocationTable *alloc_table_info);
void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0 (CFileBitStream *this_ptr,uint *output_array,SBitAllocationTable *alloc_table);
void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850 (CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices, SMpegSubbandScalefactors *scalefactors,SBitAllocationTable *alloc_info);
void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0 (CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array, SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array, SBitAllocationTable *allocation_table);
void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50 (CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples, SMpegSubbandAllocation *allocation,SBitAllocationTable *alloc_table);
void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50 (CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array, SMpegSubbandAllocation *allocation_array,SBitAllocationTable *allocation_table);
void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_0052fee0 (int *scalefactor_indices,uint *quantized_samples,float *dequantized_output, SMpegFrame *frame_info);

