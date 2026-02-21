// Name: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
// Address: 00556490
// Address Range: [[00556490, 005568e1]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_quantizeRawPixelData_FUN_00556490(uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,short width,short height,uint bit_depth,int line_number,int show_progress)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_quantizeRawPixelData_FUN_00556490(uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,short width,short height,uint bit_depth,int line_number,int show_progress)

{
  CBitmap *pCVar1;
  CColorQuantizer *this_ptr;
  CColorQuantizer *pCVar2;
  int extraout_EAX;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int unaff_ESI;
  uchar *puVar7;
  byte bVar8;
  ushort in_stack_00000012;
  ushort in_stack_00000016;
  char local_dc [200];
  CBitmap *local_14;
  
  bVar8 = 0;
  g_QuantizeCurrentLineNumber = line_number;
  pCVar1 = (CBitmap *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",0x3ec);
  local_14 = (CBitmap *)0x0;
  if (pCVar1 != (CBitmap *)0x0) {
    local_14 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00
                         (pCVar1,(uint)(ushort)width,(uint)(ushort)height,bit_depth & 0xff);
  }
  if (local_14 == (CBitmap *)0x0) {
    _sprintf(local_dc,"Unable to allocate %d-bit bitmap for color quantization",bit_depth);
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x3f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_dc);
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
  _sprintf(local_dc,"Invalid bit depth [%d] for bitmap",bit_depth);
  g_CurrentLineNumber = 0x40a;
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_dc);
LAB_00556524:
  uVar4 = _width * _height * unaff_ESI;
  puVar3 = *local_14->row_table;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)puVar3 = *(uint *)src_pixel_data;
    src_pixel_data = src_pixel_data + (uint)bVar8 * -8 + 4;
    puVar3 = puVar3 + (uint)bVar8 * -8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = *src_pixel_data;
    src_pixel_data = src_pixel_data + (uint)bVar8 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
  }
  if (show_progress != 0) {
    _sprintf(local_dc,"%d-bit color                                                                  ",bit_depth);
    engine_2d_c_drawText_FUN_00401fd0(local_dc,0,line_number * 0xb);
  }
  this_ptr = (CColorQuantizer *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x4b44,"..\\shape\\quantize.cpp",0x417);
  pCVar2 = (CColorQuantizer *)0x0;
  if (this_ptr != (CColorQuantizer *)0x0) {
    pCVar2 = shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(this_ptr);
  }
  if (pCVar2 == (CColorQuantizer *)0x0) {
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
  pCVar2->progress_callback = (CColorQuantizer_ProgressCallback *)0x0;
  shape_quantize_cpp_CColorQuantizer_quantizeBitmap_FUN_00556470(pCVar2,&local_14);
  iVar6 = 0;
  if (extraout_EAX != 0) {
    if (show_progress != 0) {
      _sprintf
                (local_dc,"%d-color palette created                                                       ",pCVar2->num_colors);
      engine_2d_c_drawText_FUN_00401fd0(local_dc,0,(line_number + 2) * 0xb);
      engine_2d_c_drawText_FUN_00401fd0("                                    ",0,(line_number + 4) * 0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    puVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (_width * _height,"..\\shape\\quantize.cpp",0x431);
    *out_pixel_data = puVar3;
    if (puVar3 == (uchar *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x434;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized bitmap!");
    }
    puVar3 = *local_14->row_table;
    puVar7 = *out_pixel_data;
    for (uVar5 = (uint)(_width * _height) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)puVar7 = *(uint *)puVar3;
      puVar3 = puVar3 + (uint)bVar8 * -8 + 4;
      puVar7 = puVar7 + (uint)bVar8 * -8 + 4;
    }
    for (uVar5 = _width * _height & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    puVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x300,"..\\shape\\quantize.cpp",0x43a);
    *out_palette = puVar3;
    if (puVar3 == (uchar *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x43d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized palette!");
    }
    puVar3 = local_14->palette;
    puVar7 = *out_palette;
    for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(uint *)puVar7 = *(uint *)puVar3;
      puVar3 = puVar3 + (uint)bVar8 * -8 + 4;
      puVar7 = puVar7 + (uint)bVar8 * -8 + 4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x443;
    pCVar2 = shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(pCVar2,0);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar2);
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x444;
    if (local_14 != (CBitmap *)0x0) {
      pCVar1 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(local_14,0);
      shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
    }
    iVar6 = 1;
  }
  return iVar6;
}
