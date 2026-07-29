// Name: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910
// Address: 00574910
// Address Range: [[00574910, 00574b1c]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910(CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height,float projection_scale,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00574910(CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height,float projection_scale,_FILE *file_handle)

{
  int iVar1;
  void *pvVar2;
  int value;
  int iVar3;
  int iVar4;
  
  core_setdir_cpp_CZThumb_free_FUN_00574b50(this_ptr);
  if (&this_ptr->camera_position != camera_pos) {
    (this_ptr->camera_position).x = camera_pos->x;
    (this_ptr->camera_position).y = camera_pos->y;
    (this_ptr->camera_position).z = camera_pos->z;
  }
  if (&this_ptr->look_at_position != look_at_pos) {
    (this_ptr->look_at_position).x = look_at_pos->x;
    (this_ptr->look_at_position).y = look_at_pos->y;
    (this_ptr->look_at_position).z = look_at_pos->z;
  }
  this_ptr->width = width;
  this_ptr->height = height;
  this_ptr->projection_scale = projection_scale;
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->width * this_ptr->height * 4,"..\\core\\setdir.cpp",158);
  this_ptr->zbuffer_data = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 159;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  if (file_handle != (_FILE *)0x0) {
    _fread(this_ptr->zbuffer_data,this_ptr->width * this_ptr->height,4,file_handle);
    return;
  }
  value = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,0);
  iVar1 = this_ptr->height;
  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 103;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar4) =
           *(uint *)((int)g_ZBufferScanlineArray + iVar4);
      iVar4 = iVar3;
    } while (iVar3 < iVar1 * 4);
  }
  core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00574e30(this_ptr);
  core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(this_ptr);
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr2,&g_VDTempVector);
  engine_special_cpp_clearZBufferNative_FUN_005b3ed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,9999.9,0);
  core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(this_ptr);
  iVar1 = this_ptr->height;
  if (g_ZBufferScanlineArrayBackup[0] == (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 112;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - not saved!");
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(uint *)((int)g_ZBufferScanlineArray + iVar4) =
           *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar4);
      iVar4 = iVar3;
    } while (iVar3 < iVar1 * 4);
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,value);
  return;
}
