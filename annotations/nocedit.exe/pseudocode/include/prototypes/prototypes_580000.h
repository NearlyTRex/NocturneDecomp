#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/C3DSCamera.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CActorProperty.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoneStructure.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CLodMesh.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/classes/CShotgun.h"
#include "types/classes/CShovel.h"
#include "types/classes/CSimBox.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CSlew.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/ECollisionType.h"
#include "types/structs/CLodMeshPrecomputeEntry.h"
#include "types/structs/SCollisionInfo.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x580000
// =============================================================================

int __cdecl core_setedit_cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0(CDemonSet *this_ptr,int screen_x,int screen_y,int *result_cameras, int exclude_camera_index);
int __cdecl core_setedit_cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0(CDemonSet *this_ptr,CVector3i *point,int camera_index);
void __cdecl core_setedit_cpp_CDemonSet_buildCameraDepthData_FUN_00580310(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_clearCameraDepthData_FUN_00580560(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_showFogEditor_FUN_00580730(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_computeCameraFog_FUN_00581320(CDemonSet *this_ptr,int camera_index);
int __cdecl core_setedit_cpp_pickRoomSize_FUN_00581450(char *title,int *room_size);
void __cdecl core_setedit_cpp_drawHelpEntry_FUN_00581520(int column,int row,char *key_label,char *description);
void __cdecl core_setedit_cpp_showRoomEditorHelp_FUN_00581590(void);
void __cdecl core_setedit_cpp_renderColoredBox_FUN_005817d0(CVector3f *corner_a,CVector3f *corner_b,float opacity,int r,int g,int b);
void __cdecl core_setedit_cpp_CDemonSet_showRoomEditor_FUN_00581aa0(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_drawCameraFrustum_FUN_00582930(int color,int use_3d_lines);
void __cdecl core_setedit_cpp_showVdirBoxEditorHelp_FUN_00582f30(void);
void __cdecl core_setedit_cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_readIni_FUN_00584900(CDemonSet *set_ptr,CIniFile *ini_file);
void __cdecl core_setedit_cpp_CDemonSet_writeIni_FUN_00584920(CDemonSet *set,CIniFile *ini_file);
void __cdecl core_setedit_cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_writeFileDependencies_FUN_00584e70(CDemonSet *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_CDemonLight_setPosition_FUN_005851a0(CDemonLight *this_ptr,CVector3i *position);
void __cdecl core_setutil_cpp_CDemonLight_buildRotationMatrix_FUN_005851d0(CDemonLight *this_ptr,CVector3f *euler_angles);
float __cdecl core_setutil_cpp_C3DSCamera_getProjectionScale_FUN_005851f0(C3DSCamera *this_ptr);
float __cdecl core_setutil_cpp_C3DSCamera_getAmbientValue_FUN_00585200(C3DSCamera *this_ptr);
float __cdecl core_setutil_cpp_CDemonLight_getFixedPointScale_FUN_00585210(CDemonLight *this_ptr);
void __cdecl core_setutil_cpp_CDemonLight_setTransformScale_FUN_00585220(CDemonLight *this_ptr,float scale);
void __cdecl core_setutil_cpp_CSlew_copy_FUN_00585240(CSlew *this_ptr,CSlew *other);
void __cdecl core_setutil_cpp_readAndParseLine_FUN_00585290(_FILE *file_handle,char *output_buffer,int max_length);
C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_00585310(C3DSCamera *this_ptr);
C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_00585340(C3DSCamera *this_ptr,uint flags);
void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00585360(C3DSCamera *this_ptr);
void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera *this_ptr);
void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_005857b0(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera *this_ptr,CDemonCamera *camera);
int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970(C3DSCamera *this_ptr,CVector3f *world_position,float radius);
void __cdecl core_setutil_cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSCamera_scalePosition_FUN_00586150(C3DSCamera *this_ptr,float scale);
int __cdecl core_setutil_cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera *this_ptr,_FILE *file_handle);
C3DSLight * __cdecl core_setutil_cpp_C3DSLight_ctor_FUN_005862f0(C3DSLight *this_ptr);
void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00586310(C3DSLight *this_ptr,_FILE *file_handle);
CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_00586a90(C3DSLight *this_ptr);
void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight *this_ptr,CDemonLight *light);
void __cdecl core_setutil_cpp_C3DSLight_doNothing_FUN_00586ca0(C3DSLight *this_ptr);
void __cdecl core_setutil_cpp_C3DSLight_process_FUN_00586cb0(C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag);
void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_00586e70(C3DSLight *this_ptr,CDemonLight *light);
void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00586f00(C3DSLight *this_ptr,int frame_index,CDemonLight *light);
void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode);
void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,_FILE *file_ptr);
int __cdecl core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSLight_scalePosition_FUN_00587950(C3DSLight *this_ptr,float scale);
void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_005879b0(C3DSLight *this_ptr);
void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00587a40(int longitude_index,int latitude_index,int vertex_buffer_index,float radius);
int __cdecl core_setutil_cpp_calculateVertexIndex_FUN_00587b30(int row_index,int column_index);
void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr);
int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight *this_ptr);
void __cdecl core_shotgun_cpp_staticInit_FUN_00587e70(void);
CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00587ea0(void);
CDemonActorType * __cdecl core_shotgun_cpp_CShotgun_getActorType_FUN_00587ed0(CShotgun *this_ptr);
CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(CShotgun *this_ptr);
void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00587f70(CShotgun *this_ptr,float delta_time);
int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00588060(CShotgun *this_ptr);
void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_005887a0(CShotgun *this_ptr);
float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_005888b0(CShotgun *this_ptr);
void __cdecl core_shotgun_cpp_CShotgun_fireProjectile_FUN_005888f0(CShotgun *this_ptr);
CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00588ae0(CShotgun *this_ptr,uint flags);
void __cdecl core_shovel_cpp_staticInit_FUN_00588b30(void);
CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_00588b60(void);
CDemonActorType * __cdecl core_shovel_cpp_CShovel_getActorType_FUN_00588b90(CShovel *this_ptr);
CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00588ba0(CShovel *this_ptr);
int __cdecl core_shovel_cpp_CShovel_fire_FUN_00588c20(CShovel *this_ptr);
float __cdecl core_shovel_cpp_CShovel_getDamage_FUN_00588c40(CShovel *this_ptr);
void __cdecl core_shovel_cpp_CShovel_fireProjectile_FUN_00588c70(CShovel *this_ptr);
CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00588c80(CShovel *this_ptr,uint flags);
void __cdecl core_simbox_cpp_staticInit_FUN_00588cd0(void);
CSimBox * __cdecl core_simbox_cpp_factoryFunc_FUN_00588d00(void);
CDemonActorType * __cdecl core_simbox_cpp_CSimBox_getActorType_FUN_00588d30(CSimBox *this_ptr);
CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_00588d40(CSimBox *this_ptr);
void __cdecl core_simbox_cpp_CSimBox_setup_FUN_00588e00(CSimBox *this_ptr);
void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time);
int __cdecl core_simbox_cpp_CSimBox_renderOpaque_FUN_005890f0(CSimBox *this_ptr);
CBoundingBox3D * __cdecl core_simbox_cpp_CSimBox_getBoundingBox_FUN_00589160(CSimBox *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_simbox_cpp_CSimBox_archive_FUN_005891b0(CSimBox *this_ptr);
ECollisionType __cdecl core_simbox_cpp_CSimBox_getCollisionType_FUN_00589260(CSimBox *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_simbox_cpp_CSimBox_propertyDisplayCallback_FUN_00589270(CSimBox *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_simbox_cpp_CSimBox_propertyActionCallback_FUN_005892d0(CSimBox *this_ptr,CActorProperty *property);
void __cdecl core_simbox_cpp_CSimBox_getPropertyList_FUN_00589310(CSimBox *this_ptr,CActorPropertyList *property_list);
void __cdecl core_simbox_cpp_CSimBox_addFilesToExtract_FUN_005893c0(CSimBox *this_ptr,_FILE *file_handle);
CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_005893e0(CSimBox *this_ptr,uint flags);
void __cdecl core_skeledit_cpp_trimWhitespace_FUN_00589450(char *str);
void __cdecl core_skeledit_cpp_skipFileLines_FUN_005894c0(_FILE *file_handle,int line_count);
void __cdecl core_skeledit_cpp_skipLeadingWhitespace_FUN_00589500(char *str);
void __cdecl core_skeledit_cpp_makeAbsolutePathFromReference_FUN_00589530(char *reference_path,char *target_path);
int __cdecl core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(char *buffer,_FILE *file,int require_content);
void __cdecl core_skeledit_cpp_ensureFileExtension_FUN_005896b0(char *filename,char *extension);
void __cdecl core_skeledit_cpp_readQuotedString_FUN_00589740(_FILE *file_handle,char *buffer);
void __cdecl core_skeledit_cpp_loadIni_FUN_005897b0(void);
void __cdecl core_skeledit_cpp_saveIni_FUN_00589a40(void);
void __cdecl core_skeledit_cpp_onLodGenerationComplete_FUN_00589b10(int use_simple_message);
void __cdecl core_skeledit_cpp_createMeshPrecomputeFile_FUN_00589bb0(CLodMesh *mesh_ptr);
int __cdecl core_skeledit_cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20(CLodMesh *this_ptr,CLodMeshPrecomputeEntry *entry,int render_mode);
void __cdecl core_skeledit_cpp_warnIfFileExistsInPod_FUN_00589f40(char *base_path,char *filename);
CLodMeshPrecomputeEntry * __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0(CLodMeshPrecomputeEntry *this_ptr);
void __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_reset_FUN_00589fc0(CLodMeshPrecomputeEntry *this_ptr);
void __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0(CLodMeshPrecomputeEntry *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(CLodMeshPrecomputeEntry *this_ptr,_FILE *file_handle);
int __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_parseLine_FUN_0058a1b0(CLodMeshPrecomputeEntry *this_ptr,char *line);
void __cdecl core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260(CDeformableModelInstance *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0(CDeformableModel *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure *this_ptr,char *filename);
void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out);
void __cdecl core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure *this_ptr,_FILE *file,int mirror_flag);
void __cdecl core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(CBoneStructure *this_ptr,_FILE *file_handle);
int __cdecl core_skeledit_cpp_CBoneStructure_findBoneByName_FUN_0058ac30(CBoneStructure *this_ptr,char *bone_name);
void __cdecl core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(CBoneStructure *this_ptr);
void __cdecl core_skeledit_cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30(CBoneStructure *this_ptr);
void __cdecl core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure *this_ptr);
void __cdecl core_skeledit_cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0(CBoneStructure *this_ptr,CMatrix3x4f *inverse_matrices);
void __cdecl core_skeledit_cpp_CBoneStructure_applyMatrixArray_FUN_0058af40(CBoneStructure *this_ptr,CMatrix3x4f *matrices);
void __cdecl core_skeledit_cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0(CBoneStructure *this_ptr,char *model_name);
void __cdecl core_skeledit_cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160(CBoneStructure *this_ptr,CSkeleton *skeleton);
int __cdecl core_skeledit_cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200(CBoneStructure *this_ptr,CBoneStructure *other);
void __cdecl core_skeledit_cpp_CSkeleton_scaleFramePositions_FUN_0058b260(CSkeleton *this_ptr,float scale);
void __cdecl core_skeledit_cpp_CSkeleton_save_FUN_0058b2c0(CSkeleton *this_ptr,char *filename);
void __cdecl core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_CDeformableModel_importGeometryS3D_FUN_0058b660(CDeformableModel *this_ptr,char *filename);
int __cdecl core_skeledit_cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0(CDeformableModel *this_ptr,_FILE *file_handle);
int __cdecl core_skeledit_cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0(CDeformableModel *this_ptr,_FILE *file_handle);
int __cdecl core_skeledit_cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40(CDeformableModel *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_CDeformableModel_importVertexAssignmentsVPH_FUN_0058bd00(CDeformableModel *this_ptr,char *filename,CBoneStructure *bone_structure);
int __cdecl core_skeledit_cpp_CDeformableModel_buildFromPosFile_FUN_0058c190(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry);
void __cdecl core_skeledit_cpp_CDeformableModel_extractLodLevel_FUN_0058d790(CDeformableModel *this_ptr,int lod_index,CLodMesh *lod_mesh, CMatrix3x4f *inverse_matrices);
void __cdecl core_skeledit_cpp_CDeformableModel_extractBoneScales_FUN_0058dde0(CDeformableModel *this_ptr,CBoneStructure *bone_structure);
void __cdecl core_skeledit_cpp_CDeformableModel_cramModelTexture_FUN_0058de70(CDeformableModel *this_ptr,char *base_name,int num_crams,int atlas_dimension, int texture_set_index,int max_iterations);
void __cdecl core_skeledit_cpp_CDeformableModel_addTextureSet_FUN_0058e0b0(CDeformableModel *this_ptr,char *name_format);
void __cdecl core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(CDeformableModel *this_ptr);
void __cdecl core_skeledit_cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0(CDeformableModel *this_ptr,float scale);
void __cdecl core_skeledit_cpp_CDeformableModel_groundBias_FUN_0058e4e0(CDeformableModel *this_ptr,int motion_index,float frame_number);
void __cdecl core_skeledit_cpp_CDeformableModel_offsetRootVertices_FUN_0058e600(CDeformableModel *this_ptr,CVector3f *offset);
void __cdecl core_skeledit_cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690(CDeformableModel *this_ptr);
void __cdecl core_skeledit_cpp_CDeformableModel_pruneWeakBoneInfluences_FUN_0058eaa0(CDeformableModel *this_ptr);
void __cdecl core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel *this_ptr);
void __cdecl core_skeledit_cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0(CDeformableModel *this_ptr);
void __cdecl core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(CDeformableModel *this_ptr,char *filename);
void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_CDeformableModel_initSinglePart_FUN_0058f790(CDeformableModel *this_ptr);
int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,char *filename);

