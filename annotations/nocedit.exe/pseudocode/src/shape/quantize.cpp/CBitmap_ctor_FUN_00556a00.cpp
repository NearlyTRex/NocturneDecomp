// Name: shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
// Address: 00556a00
// Address Range: [[00556a00, 00556c1d]]
// Convention: __cdecl
// Signature: CBitmap * shape_quantize.cpp_CBitmap_ctor_FUN_00556a00(CBitmap * this_ptr)

#include "nocturne.h"

CBitmap * __cdecl shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(CBitmap *this_ptr)

{
  void *pvVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  short in_stack_00000008;
  short in_stack_0000000c;
  byte in_stack_00000010;
  char local_68 [92];
  
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x28);
  if (in_stack_00000010 < 0x10) {
    if (7 < in_stack_00000010) {
      if (in_stack_00000010 < 9) {
        this_ptr->bytes_per_pixel = '\x01';
        goto LAB_00556a6b;
      }
      if (in_stack_00000010 == 0xf) goto LAB_00556b15;
    }
  }
  else {
    if (in_stack_00000010 < 0x11) {
LAB_00556b15:
      this_ptr->bytes_per_pixel = '\x02';
      goto LAB_00556a6b;
    }
    if (0x17 < in_stack_00000010) {
      if (in_stack_00000010 < 0x19) {
        this_ptr->bytes_per_pixel = '\x03';
        goto LAB_00556a6b;
      }
      if (in_stack_00000010 == 0x20) {
        this_ptr->bytes_per_pixel = '\x04';
        goto LAB_00556a6b;
      }
    }
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_68,"Invalid bit depth [%d] for bitmap",(uint)in_stack_00000010);
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  g_CurrentLineNumber = 0x67;
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_68);
LAB_00556a6b:
  this_ptr->height = in_stack_0000000c;
  this_ptr->bit_depth = in_stack_00000010;
  this_ptr->width = in_stack_00000008;
  uVar5 = in_stack_00000008 * (ushort)(byte)this_ptr->bytes_per_pixel;
  this_ptr->bytes_per_row = uVar5;
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((uint)(ushort)this_ptr->height * (uint)uVar5,"..\\shape\\quantize.cpp",
                      0x498);
  this_ptr->pixel_data = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Could not allocate data buffer.");
  }
  ppvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                      ((uint)(ushort)this_ptr->height << 2,"..\\shape\\quantize.cpp",0x49d);
  this_ptr->row_table = ppvVar2;
  if (ppvVar2 == (void **)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x4a1;
    crt_memory_c_free_FUN_005fe659(this_ptr->pixel_data);
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Could not allocate row table.");
  }
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < (int)(uint)(ushort)this_ptr->height; iVar3 = iVar3 + 1) {
    *(void **)((int)this_ptr->row_table + iVar4) =
         (void *)((int)this_ptr->pixel_data + (uint)(ushort)this_ptr->bytes_per_row * iVar3);
    iVar4 = iVar4 + 4;
  }
  if (this_ptr->bit_depth == '\b') {
    pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x300,"..\\shape\\quantize.cpp",0x4ac);
    this_ptr->palette = pvVar1;
    if (pvVar1 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x67;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for palette.");
      return this_ptr;
    }
  }
  return this_ptr;
}
