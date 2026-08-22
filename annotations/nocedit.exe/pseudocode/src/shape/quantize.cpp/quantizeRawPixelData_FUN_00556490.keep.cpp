// Name: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
// Address: 00556490
// MANUAL RECONSTRUCTION
// Address Range: [[00556490, 005568e1]]
// Convention: __cdecl
// Signature: int __cdecl shape_quantize_cpp_quantizeRawPixelData_FUN_00556490(uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,int width,int height ,uint bit_depth,int line_number,int show_progress)

#include "nocturne.h"

int __cdecl shape_quantize_cpp_quantizeRawPixelData_FUN_00556490(uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,int width,int height ,uint bit_depth,int line_number,int show_progress)

{
  CBitmap *pCVar1;
  CColorQuantizer *this_ptr;
  CColorQuantizer *pCVar2;
  int iVar3;
  uchar *puVar4;
  uchar *puVar1;
  CColorQuantizer *ptr;
  CBitmap *ptr_00;
  uint uVar5;
  int iVar4;
  int bytes_per_pixel;
  char local_dc [200];
  CBitmap *local_14;
  byte bVar9;
  
  bVar9 = 0;
  g_QuantizeCurrentLineNumber = line_number;
  pCVar1 = (CBitmap *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CBitmap),"..\\shape\\quantize.cpp",1004);
  local_14 = (CBitmap *)0x0;
  if (pCVar1 != (CBitmap *)0x0) {
    local_14 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00
                         (pCVar1,width & 0xffff,height & 0xffff,bit_depth & 0xff);
  }
  if (local_14 == (CBitmap *)0x0) {
    _sprintf(local_dc,"Unable to allocate %d-bit bitmap for color quantization",bit_depth);
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 1008;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_dc);
    return 0;
  }
  if (bit_depth < 0x10) {
    if (7 < bit_depth) {
      if (bit_depth < 9) {
        bytes_per_pixel = 1;
        goto LAB_00556524;
      }
      if (bit_depth == 0xf) goto LAB_00556829;
    }
  }
  else {
    if (bit_depth < 0x11) {
LAB_00556829:
      bytes_per_pixel = 2;
      goto LAB_00556524;
    }
    if (0x17 < bit_depth) {
      if (bit_depth < 0x19) {
        bytes_per_pixel = 3;
        goto LAB_00556524;
      }
      if (bit_depth == 0x20) {
        bytes_per_pixel = 4;
        goto LAB_00556524;
      }
    }
  }
  _sprintf(local_dc,"Invalid bit depth [%d] for bitmap",bit_depth);
  g_CurrentLineNumber = 1034;
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10(local_dc);
  return 0;
LAB_00556524:
  uVar5 = width * height * bytes_per_pixel;
  memcpy(*local_14->row_table,src_pixel_data,uVar5);
  if (show_progress != 0) {
    _sprintf(local_dc,"%d-bit color                                                                  ",bit_depth);
    engine_2d_c_drawText_FUN_00401fd0(local_dc,0,line_number * 0xb);
  }
  this_ptr = (CColorQuantizer *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                       (sizeof(CColorQuantizer),"..\\shape\\quantize.cpp",1047);
  pCVar2 = (CColorQuantizer *)0x0;
  if (this_ptr != (CColorQuantizer *)0x0) {
    pCVar2 = shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(this_ptr);
  }
  if (pCVar2 == (CColorQuantizer *)0x0) {
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 1050;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate object for color quantization");
  }
  if (show_progress != 0) {
    engine_2d_c_drawText_FUN_00401fd0("Performing color quantization...",0,(line_number + 2) * 0xb)
    ;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pCVar2->progress_callback = (CColorQuantizer_ProgressCallback *)0x0;
  iVar3 = shape_quantize_cpp_CColorQuantizer_quantizeBitmap_FUN_00556470(pCVar2,&local_14);
  iVar4 = 0;
  if (iVar3 != 0) {
    if (show_progress != 0) {
      _sprintf
                (local_dc,"%d-color palette created                                                       ",pCVar2->num_colors);
      engine_2d_c_drawText_FUN_00401fd0(local_dc,0,(line_number + 2) * 0xb);
      engine_2d_c_drawText_FUN_00401fd0("                                    ",0,(line_number + 4) * 0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    puVar4 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (width * height,"..\\shape\\quantize.cpp",1073);
    *out_pixel_data = puVar4;
    if (puVar4 == (uchar *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 1076;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized bitmap!");
    }
    memcpy(*out_pixel_data,*local_14->row_table,width * height);
    puVar1 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x300,"..\\shape\\quantize.cpp",1082);
    *out_palette = puVar1;
    if (puVar1 == (uchar *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 1085;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized palette!");
    }
    memcpy(*out_palette,local_14->palette,0x300);
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x443;
    ptr = shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(pCVar2,0);
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x444;
    ptr_00 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(local_14,0);
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr_00);
    iVar4 = 1;
  }
  return iVar4;
}
