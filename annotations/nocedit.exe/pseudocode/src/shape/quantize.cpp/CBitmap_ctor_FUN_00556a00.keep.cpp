// Name: shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
// Address: 00556a00
// MANUAL RECONSTRUCTION
// Address Range: [[00556a00, 00556c1d]]
// Convention: __cdecl
// Signature: CBitmap * __cdecl shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(CBitmap *this_ptr,int width,int height,int bit_depth)

#include "nocturne.h"

CBitmap * __cdecl shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(CBitmap *this_ptr,int width,int height,int bit_depth)

{
  void *pvVar1;
  void **ppvVar2;
  int iVar3;
  void *pvVar2;
  ushort uVar5;
  char local_68 [92];
  
  memset(this_ptr,0,0x28);
  if ((byte)bit_depth < 0x10) {
    if (7 < (byte)bit_depth) {
      if ((byte)bit_depth < 9) {
        this_ptr->bytes_per_pixel = '\x01';
        goto LAB_00556a6b;
      }
      if ((byte)bit_depth == 0xf) goto LAB_00556b15;
    }
  }
  else {
    if ((byte)bit_depth < 0x11) {
LAB_00556b15:
      this_ptr->bytes_per_pixel = '\x02';
      goto LAB_00556a6b;
    }
    if (0x17 < (byte)bit_depth) {
      if ((byte)bit_depth < 0x19) {
        this_ptr->bytes_per_pixel = '\x03';
        goto LAB_00556a6b;
      }
      if ((byte)bit_depth == 0x20) {
        this_ptr->bytes_per_pixel = '\x04';
        goto LAB_00556a6b;
      }
    }
  }
  _sprintf(local_68,"Invalid bit depth [%d] for bitmap",bit_depth & 0xff);
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  g_CurrentLineNumber = 103;
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_68);
LAB_00556a6b:
  this_ptr->height = (short)height;
  this_ptr->bit_depth = (byte)bit_depth;
  this_ptr->width = (short)width;
  uVar5 = (short)width * (ushort)(byte)this_ptr->bytes_per_pixel;
  this_ptr->bytes_per_row = uVar5;
  pvVar1 = shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     ((uint)(ushort)this_ptr->height * (uint)uVar5,"..\\shape\\quantize.cpp",
                      1176);
  this_ptr->pixel_data = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 103;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Could not allocate data buffer.");
  }
  ppvVar2 = (void **)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                      ((uint)(ushort)this_ptr->height << 2,"..\\shape\\quantize.cpp",1181);
  this_ptr->row_table = ppvVar2;
  if (ppvVar2 == (void **)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x4a1;
    shape_memdbg_cpp_free_FUN_005fe659(this_ptr->pixel_data);
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 103;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Could not allocate row table.");
  }
  for (iVar3 = 0; iVar3 < (int)(uint)(ushort)this_ptr->height; iVar3 = iVar3 + 1) {
    this_ptr->row_table[iVar3] =
         (char *)this_ptr->pixel_data + (uint)(ushort)this_ptr->bytes_per_row * iVar3;
  }
  if (this_ptr->bit_depth == '\b') {
    pvVar2 = shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                       (0x300,"..\\shape\\quantize.cpp",1196);
    this_ptr->palette = pvVar2;
    if (pvVar2 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 103;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for palette.");
      return this_ptr;
    }
  }
  return this_ptr;
}
