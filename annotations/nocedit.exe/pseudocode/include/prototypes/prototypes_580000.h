#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/C3DSCamera.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CBoneStructure.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CIniFile.h"
#include "types/classes/CShotgun.h"
#include "types/classes/CShovel.h"
#include "types/classes/CSimBox.h"
#include "types/classes/CSkeleton.h"
#include "types/classes/CSlew.h"
#include "types/classes/CVector3f.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x580000
// =============================================================================

int __cdecl core_setedit_cpp_CDemonSet_FUN_005800d0(CDemonSet *this_ptr);
bool __cdecl core_setedit_cpp_FUN_005801b0(void);
void __cdecl core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310(void);
void __cdecl core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_BackdropMaybe_FUN_005805a0(void);
void __cdecl core_setedit_cpp_DementedFogEditor_FUN_00580730(void *unk);
void __cdecl core_setedit_cpp_FUN_00581320(void);
int __cdecl core_setedit_cpp_FUN_00581450(void);
void __cdecl core_setedit_cpp_FUN_00581520(void);
void __cdecl core_setedit_cpp_FUN_00581590(void);
void __cdecl core_setedit_cpp_FUN_005817d0(void *unk);
void __cdecl core_setedit_cpp_CDemonSet_FUN_00581aa0(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_FUN_00582930(void);
void __cdecl core_setedit_cpp_FUN_00582f30(void);
void __cdecl core_setedit_cpp_CDemonSet_FUN_00583170(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_readIni_FUN_00584900(CDemonSet *set_ptr,CIniFile *ini_file);
void __cdecl core_setedit_cpp_CDemonSet_writeIni_FUN_00584920(CDemonSet *set,CIniFile *ini_file);
void __cdecl core_setedit_cpp_CDemonSet_showEditorMenu_FUN_00584940(CDemonSet *this_ptr);
void __cdecl core_setedit_cpp_CDemonSet_FUN_00584e70(CDemonSet *this_ptr);
void __cdecl core_setutil_cpp_FUN_005851a0(void);
void __cdecl core_setutil_cpp_FUN_005851d0(void);
float __cdecl core_setutil_cpp_C3DSCamera_getProjectionScale_FUN_005851f0(C3DSCamera *this_ptr);
float __cdecl core_setutil_cpp_C3DSCamera_getAmbientValue_FUN_00585200(C3DSCamera *this_ptr);
int __cdecl core_setutil_cpp_FUN_00585210(void);
void __cdecl core_setutil_cpp_FUN_00585220(void);
void __cdecl core_setutil_cpp_CSlew_copy_FUN_00585240(CSlew *this_ptr,CSlew *other);
void __cdecl core_setutil_cpp_readAndParseLine_FUN_00585290 (_FILE *file_handle,char *output_buffer,int max_length);
C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_00585310(C3DSCamera *this_ptr);
C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_00585340(C3DSCamera *this_ptr);
void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00585360(C3DSCamera *this_ptr);
void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera *this_ptr);
void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_00585420(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_005857b0(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera *this_ptr,CDemonCamera *camera);
int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970 (C3DSCamera *this_ptr,CVector3f *world_position,float radius);
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
void __cdecl core_setutil_cpp_C3DSLight_process_FUN_00586cb0 (C3DSLight *this_ptr,CDemonLight *light,int apply_filter_flag);
void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_00586e70(C3DSLight *this_ptr,CDemonLight *light);
void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00586f00 (C3DSLight *this_ptr,int frame_index,CDemonLight *light);
void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0 (C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode);
void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,_FILE *file_ptr);
int __cdecl core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(C3DSCamera *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSLight_import3DS_FUN_005874d0(C3DSLight *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight *this_ptr,_FILE *file_handle);
void __cdecl core_setutil_cpp_C3DSLight_scalePosition_FUN_00587950(C3DSLight *this_ptr,float scale);
void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_005879b0(C3DSLight *this_ptr);
void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00587a40 (int longitude_index,int latitude_index,int vertex_buffer_index,float radius);
int __cdecl core_setutil_cpp_calculateVertexIndex_FUN_00587b30(int row_index,int column_index);
void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr);
int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight *this_ptr);
void __cdecl core_shotgun_cpp_staticInit_FUN_00587e70(void);
CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00587ea0(void);
CDemonActorType * __cdecl core_shotgun_cpp_CShotgun_getActorType_FUN_00587ed0(CShotgun *this_ptr);
CShotgun * __cdecl core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(CShotgun *this_ptr);
void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00587f70(CShotgun *this_ptr,float delta_time);
int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00588060(CShotgun *this_ptr);
void __cdecl core_shotgun_cpp_CShotgun_FUN_005887a0(CShotgun *this_ptr);
float __cdecl core_shotgun_cpp_CShotgun_FUN_005888b0(CShotgun *this_ptr);
void __cdecl core_shotgun_cpp_CShotgun_FUN_005888f0(CShotgun *this_ptr);
CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00588ae0(CShotgun *this_ptr,uint flags);
void __cdecl core_shovel_cpp_staticInit_FUN_00588b30(void);
CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_00588b60(void);
CDemonActorType * __cdecl core_shovel_cpp_CShovel_getActorType_FUN_00588b90(CShovel *this_ptr);
CShovel * __cdecl core_shovel_cpp_CShovel_ctor_FUN_00588ba0(CShovel *this_ptr);
int __cdecl core_shovel_cpp_CShovel_fire_FUN_00588c20(CShovel *this_ptr);
float __cdecl core_shovel_cpp_CShovel_FUN_00588c40(CShovel *this_ptr);
void __cdecl core_shovel_cpp_CShovel_FUN_00588c70(CShovel *this_ptr);
CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00588c80(CShovel *this_ptr,uint flags);
void __cdecl core_simbox_cpp_staticInit_FUN_00588cd0(void);
CSimBox * __cdecl core_simbox_cpp_factoryFunc_FUN_00588d00(void);
CDemonActorType * __cdecl core_simbox_cpp_CSimBox_getActorType_FUN_00588d30(CSimBox *this_ptr);
CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_00588d40(CSimBox *this_ptr);
void __cdecl core_simbox_cpp_CSimBox_FUN_00588e00(CSimBox *this_ptr);
void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr,float delta_time);
int __cdecl core_simbox_cpp_CSimBox_FUN_005890f0(CSimBox *this_ptr);
float * __cdecl core_simbox_cpp_CSimBox_FUN_00589160(CSimBox *this_ptr);
void __cdecl core_simbox_cpp_CSimBox_FUN_005891b0(CSimBox *this_ptr);
int __cdecl core_simbox_cpp_CSimBox_FUN_00589260(CSimBox *this_ptr);
void __cdecl core_simbox_cpp_FUN_00589270(CSimBox *this_ptr);
int __cdecl core_simbox_cpp_FUN_005892d0(CSimBox *this_ptr);
void __cdecl core_simbox_cpp_CSimBox_FUN_00589310(CSimBox *this_ptr);
void __cdecl core_simbox_cpp_CSimBox_FUN_005893c0(CSimBox *this_ptr);
CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_005893e0(CSimBox *this_ptr,uint flags);
void __cdecl core_skeledit_cpp_FUN_00589450(void);
void __cdecl core_skeledit_cpp_FUN_005894c0(void);
void __cdecl core_skeledit_cpp_FUN_00589500(void);
void __cdecl core_skeledit_cpp_FUN_00589530(void);
int __cdecl core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(char *buffer,_FILE *file,int require_content);
void __cdecl core_skeledit_cpp_FUN_005896b0(void);
void __cdecl core_skeledit_cpp_FUN_00589740(void);
void __cdecl core_skeledit_cpp_FUN_005897b0(void);
void __cdecl core_skeledit_cpp_FUN_00589a40(void);
void __cdecl core_skeledit_cpp_FUN_00589b10(void);
void __cdecl core_skeledit_cpp_FUN_00589bb0(void);
int __cdecl core_skeledit_cpp_FUN_00589c20(void);
void __cdecl core_skeledit_cpp_FUN_00589f40(void);
int __cdecl core_skeledit_cpp_FUN_00589fa0(void);
void __cdecl core_skeledit_cpp_FUN_00589fc0(void);
void __cdecl core_skeledit_cpp_FUN_00589fe0(void);
void __cdecl core_skeledit_cpp_FUN_0058a0f0(void);
int __cdecl core_skeledit_cpp_FUN_0058a1b0(void);
void __cdecl core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260 (CDeformableModelInstance *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_FUN_0058a2b0(void);
void __cdecl core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure *this_ptr,char *filename);
void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0 (CBoneStructure *this_ptr,_FILE *file,int *frame_count_out);
void __cdecl core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10 (CBoneStructure *this_ptr,_FILE *file,int mirror_flag);
void __cdecl core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(CBoneStructure *this_ptr);
int __cdecl core_skeledit_cpp_FUN_0058ac30(void);
void __cdecl core_skeledit_cpp_FUN_0058ac80(void);
void __cdecl core_skeledit_cpp_FUN_0058ad30(void);
void __cdecl core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure *this_ptr);
void __cdecl core_skeledit_cpp_FUN_0058aeb0(void);
void __cdecl core_skeledit_cpp_FUN_0058af40(void);
void __cdecl core_skeledit_cpp_FUN_0058afe0(void);
void __cdecl core_skeledit_cpp_FUN_0058b160(void);
int __cdecl core_skeledit_cpp_FUN_0058b200(void);
void __cdecl core_skeledit_cpp_FUN_0058b260(void);
void __cdecl core_skeledit_cpp_CSkeleton_save_FUN_0058b2c0(CSkeleton *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton *this_ptr,_FILE *file_handle);
void __cdecl core_skeledit_cpp_FUN_0058b660(void);
int __cdecl core_skeledit_cpp_FUN_0058b8e0(void);
int __cdecl core_skeledit_cpp_FUN_0058b9b0(void);
int __cdecl core_skeledit_cpp_FUN_0058bc40(void);
void __cdecl core_skeledit_cpp_FUN_0058bd00(void);
int __cdecl core_skeledit_cpp_FUN_0058c190(void);
void __cdecl core_skeledit_cpp_FUN_0058d790(void);
void __cdecl core_skeledit_cpp_FUN_0058dde0(void);
void __cdecl core_skeledit_cpp_FUN_0058de70(void);
void __cdecl core_skeledit_cpp_FUN_0058e0b0(void);
void __cdecl core_skeledit_cpp_FUN_0058e240(void);
void __cdecl core_skeledit_cpp_FUN_0058e3e0(void);
void __cdecl core_skeledit_cpp_CDeformable_groundBias_FUN_0058e4e0(CDeformableModel *this_ptr);
void __cdecl core_skeledit_cpp_FUN_0058e600(void);
void __cdecl core_skeledit_cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690(CDeformableModel *this_ptr);
void __cdecl core_skeledit_cpp_FUN_0058eaa0(void);
void __cdecl core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(CDeformableModel *this_ptr);
void __cdecl core_skeledit_cpp_FUN_0058ede0(void);
void __cdecl core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(CDeformableModel *this_ptr,char *filename);
void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr);
int * __cdecl core_skeledit_cpp_FUN_0058f790(void);
int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr);

