#pragma once

// Function prototypes for core/setedit.cpp
// Generated from Ghidra function signatures

// Original: core_setedit.cpp_staticInit_FUN_00576930
// Address: 00576930
void __cdecl staticInit(void);

// Original: core_setedit.cpp_incrementTrailingNumber_FUN_00576950
// Address: 00576950
void __cdecl incrementTrailingNumber(char *name);

// Original: core_setedit.cpp_loadCameraThumbnail_FUN_005769a0
// Address: 005769a0
void __cdecl loadCameraThumbnail(char *prefix,char *name,int thumbnail_index);

// Original: core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0
// Address: 00576da0
void __cdecl CDemonSet::loadOrBuildThumbnails(CDemonSet *this_ptr,int force_rebuild);

// Original: core_setedit.cpp_blitThumbnailToScreen8_FUN_00577120
// Address: 00577120
void __cdecl blitThumbnailToScreen8(int thumbnail_index,int screen_x,int screen_row);

// Original: core_setedit.cpp_blitThumbnailToScreen16_FUN_00577200
// Address: 00577200
void __cdecl blitThumbnailToScreen16(int thumbnail_index,int screen_x,int screen_row);

// Original: core_setedit.cpp_blitThumbnailToScreen32_FUN_00577330
// Address: 00577330
void __cdecl blitThumbnailToScreen32(int thumbnail_index,int screen_x,int screen_row);

// Original: core_setedit.cpp_blitThumbnailToScreen_FUN_00577430
// Address: 00577430
void __cdecl blitThumbnailToScreen(int thumbnail_index,int screen_x,int screen_row);

// Original: core_setedit.cpp_blitThumbnailStripAndHitTest_FUN_00577730
// Address: 00577730
int __cdecl blitThumbnailStripAndHitTest(int start_thumbnail,int thumbnail_count,int screen_x,int screen_y);

// Original: core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0
// Address: 00577af0
int __cdecl CDemonSet::drawCameraThumbnailBar(CDemonSet *this_ptr,int *camera_flags);

// Original: core_setedit.cpp_findGroundTextureIndex_FUN_005781a0
// Address: 005781a0
int __cdecl findGroundTextureIndex(char *filename);

// Original: core_setedit.cpp_getGroundTypeForTexture_FUN_00578210
// Address: 00578210
int __cdecl getGroundTypeForTexture(char *filename);

// Original: core_setedit.cpp_addGroundType_FUN_00578290
// Address: 00578290
void __cdecl addGroundType(char *filename,int ground_type);

// Original: core_setedit.cpp_loadGroundTypes_FUN_00578420
// Address: 00578420
void __cdecl loadGroundTypes(char *filename);

// Original: core_setedit.cpp_editGroundTypes_FUN_00578630
// Address: 00578630
void __cdecl editGroundTypes(char *filename);

// Original: core_setedit.cpp_skipLine_FUN_00578a00
// Address: 00578a00
void __cdecl skipLine(_FILE *file_handle);

// Original: core_setedit.cpp_CDemonSet_importSet_FUN_00578a20
// Address: 00578a20
void __cdecl CDemonSet::importSet(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_importA3D_FUN_00578c60
// Address: 00578c60
void __cdecl CDemonSet::importA3D(CDemonSet *this_ptr,_FILE *file_handle);

// Original: core_setedit.cpp_promptYesNo_FUN_00578c90
// Address: 00578c90
int __cdecl promptYesNo(int screen_y,char *prompt,int default_yes);

// Original: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
// Address: 00578d80
void __cdecl CDemonSet::importS3D(CDemonSet *this_ptr,_FILE *file_handle);

// Original: core_setedit.cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0
// Address: 0057a0c0
void __cdecl CDemonSet::exportLightsAndCameras(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_importDemonPart_FUN_0057a270
// Address: 0057a270
void __cdecl CDemonSet::importDemonPart(CDemonSet *this_ptr,_FILE *file_handle);

// Original: core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
// Address: 0057a2a0
void __cdecl CDemonSet::save(CDemonSet *this_ptr,char *filename);

// Original: core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940
// Address: 0057a940
void __cdecl CDemonSet::showScenePreview(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50
// Address: 0057ae50
int __cdecl CDemonSet::positionLight(CDemonSet *this_ptr,C3DSLight *light);

// Original: core_setedit.cpp_CDemonSet_addSpotLight_FUN_0057b410
// Address: 0057b410
void __cdecl CDemonSet::addSpotLight(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_editSpotLight_FUN_0057b500
// Address: 0057b500
void __cdecl CDemonSet::editSpotLight(CDemonSet *this_ptr,int light_index);

// Original: core_setedit.cpp_CDemonSet_cloneLight_FUN_0057b600
// Address: 0057b600
void __cdecl CDemonSet::cloneLight(CDemonSet *this_ptr,int light_index);

// Original: core_setedit.cpp_CDemonSet_deleteLight_FUN_0057b910
// Address: 0057b910
void __cdecl CDemonSet::deleteLight(CDemonSet *this_ptr,int light_index);

// Original: core_setedit.cpp_CDemonSet_showLightFilterEditor_FUN_0057bbe0
// Address: 0057bbe0
void __cdecl CDemonSet::showLightFilterEditor(CDemonSet *this_ptr,int light_index);

// Original: core_setedit.cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550
// Address: 0057c550
int __cdecl CDemonSet::findLightByMasterIndex(CDemonSet *this_ptr,int master_light_index);

// Original: core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0
// Address: 0057c5d0
void __cdecl CDemonSet::showLightEditor(CDemonSet *this_ptr);

// Original: core_setedit.cpp_renderBackdropImage_FUN_0057ce80
// Address: 0057ce80
void __cdecl renderBackdropImage(CVector3i *position,CVector3f *orientation,char *name,int output_width,int output_height,int render_width,int render_height,float projection_scale);

// Original: core_setedit.cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340
// Address: 0057d340
void __cdecl CDemonSet::renderCameraBackdrop(CDemonSet *this_ptr,C3DSCamera *camera);

// Original: core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660
// Address: 0057d660
int __cdecl CDemonSet::editCameraPosition(CDemonSet *this_ptr,int camera_index);

// Original: core_setedit.cpp_CDemonSet_deleteCamera_FUN_0057e430
// Address: 0057e430
void __cdecl CDemonSet::deleteCamera(CDemonSet *this_ptr,int camera_index);

// Original: core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0
// Address: 0057e7c0
void __cdecl CDemonSet::showCameraEditor(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00
// Address: 0057fd00
void __cdecl CDemonSet::buildCameraCoverageMap(CDemonSet *this_ptr,char *coverage_map,int exclude_camera_index);

// Original: core_setedit.cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70
// Address: 0057ff70
void __cdecl CDemonSet::drawCameraCoverageMap(CDemonSet *this_ptr,char *coverage_map);

// Original: core_setedit.cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0
// Address: 005800d0
int __cdecl CDemonSet::findVisibleCamerasAtScreenPoint(CDemonSet *this_ptr,int screen_x,int screen_y,int *result_cameras,int exclude_camera_index);

// Original: core_setedit.cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0
// Address: 005801b0
int __cdecl CDemonSet::isPointVisibleFromCamera(CDemonSet *this_ptr,CVector3i *point,int camera_index);

// Original: core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310
// Address: 00580310
void __cdecl CDemonSet::buildCameraDepthData(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560
// Address: 00580560
void __cdecl CDemonSet::clearCameraDepthData(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0
// Address: 005805a0
void __cdecl CDemonSet::rebuildAllFogAndPVS(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_showFogEditor_FUN_00580730
// Address: 00580730
void __cdecl CDemonSet::showFogEditor(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_computeCameraFog_FUN_00581320
// Address: 00581320
void __cdecl CDemonSet::computeCameraFog(CDemonSet *this_ptr,int camera_index);

// Original: core_setedit.cpp_pickRoomSize_FUN_00581450
// Address: 00581450
int __cdecl pickRoomSize(char *title,int *room_size);

// Original: core_setedit.cpp_drawHelpEntry_FUN_00581520
// Address: 00581520
void __cdecl drawHelpEntry(int column,int row,char *key_label,char *description);

// Original: core_setedit.cpp_showRoomEditorHelp_FUN_00581590
// Address: 00581590
void __cdecl showRoomEditorHelp(void);

// Original: core_setedit.cpp_renderColoredBox_FUN_005817d0
// Address: 005817d0
void __cdecl renderColoredBox(CVector3f *corner_a,CVector3f *corner_b,float opacity,int r,int g,int b);

// Original: core_setedit.cpp_CDemonSet_showRoomEditor_FUN_00581aa0
// Address: 00581aa0
void __cdecl CDemonSet::showRoomEditor(CDemonSet *this_ptr);

// Original: core_setedit.cpp_drawCameraFrustum_FUN_00582930
// Address: 00582930
void __cdecl drawCameraFrustum(int color,int use_3d_lines);

// Original: core_setedit.cpp_showVdirBoxEditorHelp_FUN_00582f30
// Address: 00582f30
void __cdecl showVdirBoxEditorHelp(void);

// Original: core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170
// Address: 00583170
void __cdecl CDemonSet::showVdirBoxEditor(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_readIni_FUN_00584900
// Address: 00584900
void __cdecl CDemonSet::readIni(CDemonSet *set_ptr,CIniFile *ini_file);

// Original: core_setedit.cpp_CDemonSet_writeIni_FUN_00584920
// Address: 00584920
void __cdecl CDemonSet::writeIni(CDemonSet *set,CIniFile *ini_file);

// Original: core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
// Address: 00584940
void __cdecl CDemonSet::showEditorMenu(CDemonSet *this_ptr);

// Original: core_setedit.cpp_CDemonSet_writeFileDependencies_FUN_00584e70
// Address: 00584e70
void __cdecl CDemonSet::writeFileDependencies(CDemonSet *this_ptr,_FILE *file_handle);
