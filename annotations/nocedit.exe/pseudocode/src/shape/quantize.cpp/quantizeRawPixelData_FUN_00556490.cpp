// Name: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
// Address: 00556490
// Address Range: [[00556490, 005568e1]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_quantizeRawPixelData_FUN_00556490(uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,short width,short height,uint bit_depth,int line_number,int show_progress)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_quantizeRawPixelData_FUN_00556490(uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,short width,short height,uint bit_depth,int line_number,int show_progress)

{
  CBitmap *pCVar1;
  void *pvVar2;
  CColorQuantizer *pCVar3;
  int extraout_EAX;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int unaff_ESI;
  uchar *puVar8;
  byte bVar9;
  ushort in_stack_00000012;
  ushort in_stack_00000016;
  CColorQuantizer *in_stack_ffffff24;
  CBitmap *local_14;
  
  bVar9 = 0;
  g_QuantizeCurrentLineNumber = line_number;
  pCVar1 = (CBitmap *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",0x3ec);
  local_14 = (CBitmap *)0x0;
  if (pCVar1 != (CBitmap *)0x0) {
    local_14 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00
                         (pCVar1,(uint)(ushort)width,(uint)(ushort)height,bit_depth & 0xff);
  }
  if (local_14 == (CBitmap *)0x0) {
    _sprintf
              (&stack0xffffff24,"Unable to allocate %d-bit bitmap for color quantization",bit_depth);
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x3f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff24);
  }
  if (bit_depth < 0x10) {
    if (7 < bit_depth) {
      if (bit_depth < 9) {
        unaff_ESI = 1;
        goto LAB_00556524;
      }
      if (bit_depth == 0xf) goto LAB_00556829;
    }
  }
  else {
    if (bit_depth < 0x11) {
LAB_00556829:
      unaff_ESI = 2;
      goto LAB_00556524;
    }
    if (0x17 < bit_depth) {
      if (bit_depth < 0x19) {
        unaff_ESI = 3;
        goto LAB_00556524;
      }
      if (bit_depth == 0x20) {
        unaff_ESI = 4;
        goto LAB_00556524;
      }
    }
  }
  _sprintf(&stack0xffffff24,"Invalid bit depth [%d] for bitmap",bit_depth);
  g_CurrentLineNumber = 0x40a;
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff24);
LAB_00556524:
  uVar5 = _width * _height * unaff_ESI;
  puVar4 = *local_14->row_table;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(uint *)puVar4 = *(uint *)src_pixel_data;
    src_pixel_data = src_pixel_data + (uint)bVar9 * -8 + 4;
    puVar4 = puVar4 + (uint)bVar9 * -8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = *src_pixel_data;
    src_pixel_data = src_pixel_data + (uint)bVar9 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
  }
  if (show_progress != 0) {
    _sprintf(&stack0xffffff24,"%d-bit color                                                                  ",bit_depth);
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff24,0,line_number * 0xb);
  }
  pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x4b44,"..\\shape\\quantize.cpp",0x417);
  pCVar3 = (CColorQuantizer *)0x0;
  if (pvVar2 != (void *)0x0) {
    pCVar3 = shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(in_stack_ffffff24);
  }
  if (pCVar3 == (CColorQuantizer *)0x0) {
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x41a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate object for color quantization");
  }
  if (show_progress != 0) {
    engine_2d_c_drawText_FUN_00401fd0("Performing color quantization...",0,(line_number + 2) * 0xb)
    ;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pCVar3->progress_callback = (CColorQuantizer_ProgressCallback *)0x0;
  shape_quantize_cpp_CColorQuantizer_quantizeBitmap_FUN_00556470(pCVar3,&local_14);
  iVar7 = 0;
  if (extraout_EAX != 0) {
    if (show_progress != 0) {
      _sprintf
                (&stack0xffffff24,"%d-color palette created                                                       ",pCVar3->num_colors);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff24,0,(line_number + 2) * 0xb);
      engine_2d_c_drawText_FUN_00401fd0("                                    ",0,(line_number + 4) * 0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    puVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (_width * _height,"..\\shape\\quantize.cpp",0x431);
    *out_pixel_data = puVar4;
    if (puVar4 == (uchar *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x434;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized bitmap!");
    }
    puVar4 = *local_14->row_table;
    puVar8 = *out_pixel_data;
    for (uVar6 = (uint)(_width * _height) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(uint *)puVar8 = *(uint *)puVar4;
      puVar4 = puVar4 + (uint)bVar9 * -8 + 4;
      puVar8 = puVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = _width * _height & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    puVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x300,"..\\shape\\quantize.cpp",0x43a);
    *out_palette = puVar4;
    if (puVar4 == (uchar *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x43d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized palette!");
    }
    puVar4 = local_14->palette;
    puVar8 = *out_palette;
    for (iVar7 = 0xc0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(uint *)puVar8 = *(uint *)puVar4;
      puVar4 = puVar4 + (uint)bVar9 * -8 + 4;
      puVar8 = puVar8 + (uint)bVar9 * -8 + 4;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x443;
    pCVar3 = shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(pCVar3,0);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar3);
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x444;
    if (local_14 != (CBitmap *)0x0) {
      pCVar1 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(local_14,0);
      shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
    }
    iVar7 = 1;
  }
  return iVar7;
}
