// Name: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
// Address: 00556490
// Address Range: [[00556490, 005568e1]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_quantizeRawPixelData_FUN_00556490(uchar * src_pixel_data, uchar * * out_pixel_data, uchar * * out_palette, short width, short height, uint bit_depth, int line_number, int show_progress)

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_quantizeRawPixelData_FUN_00556490
          (uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,short width,short height
          ,uint bit_depth,int line_number,int show_progress)

{
  CBitmap *pCVar1;
  CColorQuantizer *pCVar2;
  int extraout_EAX;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  uint *puVar7;
  uchar *puVar8;
  uint *puVar9;
  byte bVar10;
  int in_stack_00000024;
  int in_stack_00000028;
  CBitmap *in_stack_0000002c;
  int in_stack_00000030;
  uint *in_stack_00000034;
  uint *in_stack_00000038;
  int in_stack_0000003c;
  uint *in_stack_00000040;
  uint *in_stack_00000044;
  CColorQuantizer *in_stack_ffffff30;
  
  bVar10 = 0;
  g_QuantizeCurrentLineNumber = line_number;
  pCVar1 = (CBitmap *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x28,"..\\shape\\quantize.cpp",0x3ec);
  if (pCVar1 != (CBitmap *)0x0) {
    pCVar1 = shape_quantize_cpp_CBitmap_ctor_FUN_00556a00(pCVar1);
  }
  if (pCVar1 == (CBitmap *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff2c,"Unable to allocate %d-bit bitmap for color quantization");
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x3f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff30);
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
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff2c,"Invalid bit depth [%d] for bitmap");
  g_CurrentLineNumber = 0x40a;
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff28);
LAB_00556524:
  uVar4 = bit_depth * line_number * unaff_ESI;
  puVar8 = (uchar *)*pCVar1->row_table;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)puVar8 = *(uint *)src_pixel_data;
    src_pixel_data = src_pixel_data + (uint)bVar10 * -8 + 4;
    puVar8 = puVar8 + (uint)bVar10 * -8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *src_pixel_data;
    src_pixel_data = src_pixel_data + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  if (in_stack_00000028 != 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff2c,"%d-bit color                                                                  ");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff28,0,show_progress * 0xb);
  }
  pCVar2 = (CColorQuantizer *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x4b44,"..\\shape\\quantize.cpp",0x417);
  if (pCVar2 != (CColorQuantizer *)0x0) {
    pCVar2 = shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(in_stack_ffffff30);
  }
  if (pCVar2 == (CColorQuantizer *)0x0) {
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x41a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate object for color quantization");
  }
  if (in_stack_00000030 != 0) {
    engine_2d_c_drawText_FUN_00401fd0
              ("Performing color quantization...",0,(int)(in_stack_0000002c->field0_0x0 + 2) * 0xb)
    ;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pCVar2->progress_callback = (CColorQuantizer_ProgressCallback *)0x0;
  shape_quantize_cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
            (pCVar2,(CBitmap **)&stack0x00000000);
  iVar6 = extraout_EAX;
  if (extraout_EAX != 0) {
    if (in_stack_00000038 != (uint *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff3c,"%d-color palette created                                                       ");
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff40,0,((int)in_stack_00000038 + 2) * 0xb);
      engine_2d_c_drawText_FUN_00401fd0("                                    ",0,(in_stack_0000003c + 4) * 0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       ((int)in_stack_00000038 * in_stack_0000003c,"..\\shape\\quantize.cpp",
                        0x431);
    *in_stack_00000034 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x434;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized bitmap!");
    }
    puVar7 = (uint *)**(uint **)(line_number + 0x20);
    puVar9 = (uint *)*in_stack_00000038;
    for (uVar5 = (uint)((int)in_stack_00000040 * (int)in_stack_00000044) >> 2; uVar5 != 0;
        uVar5 = uVar5 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    for (uVar5 = (int)in_stack_00000040 * (int)in_stack_00000044 & 3; uVar5 != 0; uVar5 = uVar5 - 1)
    {
      *(byte *)puVar9 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
      puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
    }
    pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x300,"..\\shape\\quantize.cpp",0x43a);
    *in_stack_00000040 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x43d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized palette!");
    }
    puVar7 = *(uint **)(in_stack_00000024 + 0x24);
    puVar9 = (uint *)*in_stack_00000044;
    for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(byte *)puVar9 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
      puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
    }
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x443;
    pCVar2 = shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(pCVar2);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar2);
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x444;
    if (in_stack_0000002c != (CBitmap *)0x0) {
      pCVar1 = shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(in_stack_0000002c);
      shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
    }
    iVar6 = 1;
  }
  return iVar6;
}
