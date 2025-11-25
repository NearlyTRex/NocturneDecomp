// Name: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
// Address: 00556490
// Address Range: [[00556490, 005568e1]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_quantizeRawPixelData_FUN_00556490(uchar * src_pixel_data, uchar * * out_pixel_data, uchar * * out_palette, short width, short height, uint bit_depth, int line_number, int show_progress)
// Cross-references:
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046d2e0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640de5
//   TerminatedCString s_Unable_to_allocate_d_bit_00640dfb
//   TerminatedCString s_shape_quantize_cpp_00640e33
//   TerminatedCString s_Invalid_bit_depth_d_for__00640e49
//   TerminatedCString s_shape_quantize_cpp_00640e6b
//   TerminatedCString s_d_bit_color_00640e81
//   TerminatedCString s_shape_quantize_cpp_00640ed0
//   TerminatedCString s_shape_quantize_cpp_00640ee6
//   TerminatedCString s_Unable_to_allocate_objec_00640efc
//   TerminatedCString s_Performing_color_quantiz_00640f2d
//   TerminatedCString s_d_color_palette_created_00640f4e
//   TerminatedCString s_anon_00640f9e
//   TerminatedCString s_shape_quantize_cpp_00640fc3
//   TerminatedCString s_shape_quantize_cpp_00640fd9
//   TerminatedCString s_Unable_to_allocate_quant_00640fef
//   TerminatedCString s_shape_quantize_cpp_00641014
//   TerminatedCString s_shape_quantize_cpp_0064102a
//   TerminatedCString s_Unable_to_allocate_quant_00641040
//   TerminatedCString s_shape_quantize_cpp_00641066
//   TerminatedCString s_shape_quantize_cpp_0064107c
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   int g_QuantizeCurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
//   shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
//   shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
//   shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
//   shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

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
  undefined4 *puVar7;
  uchar *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  int in_stack_00000024;
  int in_stack_00000028;
  CBitmap *in_stack_0000002c;
  int in_stack_00000030;
  undefined4 *in_stack_00000034;
  undefined4 *in_stack_00000038;
  int in_stack_0000003c;
  undefined4 *in_stack_00000040;
  undefined4 *in_stack_00000044;
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
    *(undefined4 *)puVar8 = *(undefined4 *)src_pixel_data;
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
    if (in_stack_00000038 != (undefined4 *)0x0) {
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
    puVar7 = (undefined4 *)**(undefined4 **)(line_number + 0x20);
    puVar9 = (undefined4 *)*in_stack_00000038;
    for (uVar5 = (uint)((int)in_stack_00000040 * (int)in_stack_00000044) >> 2; uVar5 != 0;
        uVar5 = uVar5 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    for (uVar5 = (int)in_stack_00000040 * (int)in_stack_00000044 & 3; uVar5 != 0; uVar5 = uVar5 - 1)
    {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar10 * -2 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar10 * -2 + 1);
    }
    pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x300,"..\\shape\\quantize.cpp",0x43a);
    *in_stack_00000040 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x43d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate quantized palette!");
    }
    puVar7 = *(undefined4 **)(in_stack_00000024 + 0x24);
    puVar9 = (undefined4 *)*in_stack_00000044;
    for (iVar6 = 0xc0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar10 * -2 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar10 * -2 + 1);
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


// Assembly code:
// 00556490: PUSH EBX
//   Label: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
// 00556491: PUSH ESI
// 00556492: PUSH EDI
// 00556493: PUSH EBP
// 00556494: SUB ESP,0xcc
// 0055649a: MOV EBP,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 005564a1: MOV EBX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[0x18] (READ)
// 005564a8: PUSH 0x3ec
// 005564ad: PUSH 0x640de5
//   XREF to: 00640de5 (DATA)
// 005564b2: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x1c] (READ)
// 005564b9: PUSH 0x28
// 005564bb: MOV [0x03106158],EAX
//   XREF to: 03106158 (WRITE)
// 005564c0: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005564c5: ADD ESP,0xc
// 005564c8: TEST EAX,EAX
// 005564ca: JNZ 0x005567bd
//   XREF to: 005567bd (CONDITIONAL_JUMP)
// 005564d0: MOV dword ptr [ESP + 0xc8],EAX
//   Label: LAB_005564d0
//   XREF to: Stack[-0x14] (WRITE)
// 005564d7: TEST EAX,EAX
// 005564d9: JZ 0x005567e6
//   XREF to: 005567e6 (CONDITIONAL_JUMP)
// 005564df: CMP EBX,0x10
//   Label: LAB_005564df
// 005564e2: JNC 0x00556847
//   XREF to: 00556847 (CONDITIONAL_JUMP)
// 005564e8: CMP EBX,0x8
// 005564eb: JNC 0x0055685e
//   XREF to: 0055685e (CONDITIONAL_JUMP)
// 005564f1: PUSH EBX
//   Label: LAB_005564f1
// 005564f2: PUSH 0x640e49
//   XREF to: 00640e49 (DATA)
// 005564f7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 005564fb: PUSH EAX
// 005564fc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00556501: MOV EAX,0x40a
// 00556506: ADD ESP,0xc
// 00556509: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0055650e: MOV EAX,ESP
// 00556510: MOV EDI,0x640e6b
//   XREF to: 00640e6b (DATA)
// 00556515: PUSH EAX
// 00556516: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0055651c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00556521: ADD ESP,0x4
// 00556524: MOV ECX,dword ptr [ESP + 0xec]
//   Label: LAB_00556524
//   XREF to: Stack[0x10] (READ)
// 0055652b: IMUL ECX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x14] (READ)
// 00556533: IMUL ECX,ESI
// 00556536: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (READ)
// 0055653d: MOV EDI,dword ptr [EAX + 0x20]
// 00556540: MOV EDI,dword ptr [EDI]
// 00556542: MOV ESI,EBP
// 00556544: PUSH EDI
// 00556545: MOV EAX,ECX
// 00556547: SHR ECX,0x2
// 0055654a: MOVSD.REP ES:EDI,ESI
// 0055654c: MOV CL,AL
// 0055654e: AND CL,0x3
// 00556551: MOVSB.REP ES:EDI,ESI
// 00556553: POP EDI
// 00556554: CMP dword ptr [ESP + 0xfc],0x0
//   XREF to: Stack[0x20] (READ)
// 0055655c: JZ 0x00556596
//   XREF to: 00556596 (CONDITIONAL_JUMP)
// 0055655e: PUSH EBX
// 0055655f: PUSH 0x640e81
//   XREF to: 00640e81 (DATA)
// 00556564: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 00556568: PUSH EAX
// 00556569: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0055656e: ADD ESP,0xc
// 00556571: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x1c] (READ)
// 00556578: LEA EBX,[EAX*0x4 + 0x0]
// 0055657f: SUB EBX,EAX
// 00556581: SHL EBX,0x2
// 00556584: SUB EBX,EAX
// 00556586: PUSH EBX
// 00556587: PUSH 0x0
// 00556589: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 0055658d: PUSH EAX
// 0055658e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00556593: ADD ESP,0xc
// 00556596: PUSH 0x417
//   Label: LAB_00556596
// 0055659b: PUSH 0x640ed0
//   XREF to: 00640ed0 (DATA)
// 005565a0: PUSH 0x4b44
// 005565a5: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005565aa: ADD ESP,0xc
// 005565ad: TEST EAX,EAX
// 005565af: JZ 0x005565ba
//   XREF to: 005565ba (CONDITIONAL_JUMP)
// 005565b1: PUSH EAX
// 005565b2: CALL shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
//   XREF to: 00554900 (UNCONDITIONAL_CALL)
// 005565b7: ADD ESP,0x4
// 005565ba: MOV EBP,EAX
//   Label: LAB_005565ba
// 005565bc: TEST EAX,EAX
// 005565be: JZ 0x0055686a
//   XREF to: 0055686a (CONDITIONAL_JUMP)
// 005565c4: CMP dword ptr [ESP + 0xfc],0x0
//   Label: LAB_005565c4
//   XREF to: Stack[0x20] (READ)
// 005565cc: JZ 0x005565fb
//   XREF to: 005565fb (CONDITIONAL_JUMP)
// 005565ce: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x1c] (READ)
// 005565d5: ADD EAX,0x2
// 005565d8: LEA EBX,[EAX*0x4 + 0x0]
// 005565df: SUB EBX,EAX
// 005565e1: SHL EBX,0x2
// 005565e4: SUB EBX,EAX
// 005565e6: PUSH EBX
// 005565e7: PUSH 0x0
// 005565e9: PUSH 0x640f2d
//   XREF to: 00640f2d (DATA)
// 005565ee: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005565f3: ADD ESP,0xc
// 005565f6: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005565fb: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_005565fb
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00556600: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0x14] (DATA)
// 00556607: PUSH EAX
// 00556608: PUSH EBP
// 00556609: MOV dword ptr [EBP],0x0
// 00556610: CALL shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
//   XREF to: 00556470 (UNCONDITIONAL_CALL)
// 00556615: ADD ESP,0x8
// 00556618: TEST EAX,EAX
// 0055661a: JZ 0x005567b2
//   XREF to: 005567b2 (CONDITIONAL_JUMP)
// 00556620: CMP dword ptr [ESP + 0xfc],0x0
//   XREF to: Stack[0x20] (READ)
// 00556628: JZ 0x00556698
//   XREF to: 00556698 (CONDITIONAL_JUMP)
// 0055662a: MOV EAX,dword ptr [EBP + 0x4b40]
// 00556630: PUSH EAX
// 00556631: PUSH 0x640f4e
//   XREF to: 00640f4e (DATA)
// 00556636: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 0055663a: PUSH EAX
// 0055663b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00556640: ADD ESP,0xc
// 00556643: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x1c] (READ)
// 0055664a: ADD EAX,0x2
// 0055664d: LEA EBX,[EAX*0x4 + 0x0]
// 00556654: SUB EBX,EAX
// 00556656: SHL EBX,0x2
// 00556659: SUB EBX,EAX
// 0055665b: PUSH EBX
// 0055665c: PUSH 0x0
// 0055665e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 00556662: PUSH EAX
// 00556663: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00556668: ADD ESP,0xc
// 0055666b: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x1c] (READ)
// 00556672: ADD EAX,0x4
// 00556675: LEA EBX,[EAX*0x4 + 0x0]
// 0055667c: SUB EBX,EAX
// 0055667e: SHL EBX,0x2
// 00556681: SUB EBX,EAX
// 00556683: PUSH EBX
// 00556684: PUSH 0x0
// 00556686: PUSH 0x640f9e
//   XREF to: 00640f9e (DATA)
// 0055668b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00556690: ADD ESP,0xc
// 00556693: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00556698: MOV EAX,dword ptr [ESP + 0xec]
//   Label: LAB_00556698
//   XREF to: Stack[0x10] (READ)
// 0055669f: IMUL EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x14] (READ)
// 005566a7: PUSH 0x431
// 005566ac: PUSH 0x640fc3
//   XREF to: 00640fc3 (DATA)
// 005566b1: PUSH EAX
// 005566b2: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005566b7: ADD ESP,0xc
// 005566ba: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x8] (READ)
// 005566c1: MOV dword ptr [ECX],EAX
// 005566c3: TEST EAX,EAX
// 005566c5: JZ 0x00556892
//   XREF to: 00556892 (CONDITIONAL_JUMP)
// 005566cb: MOV ECX,dword ptr [ESP + 0xec]
//   Label: LAB_005566cb
//   XREF to: Stack[0x10] (READ)
// 005566d2: IMUL ECX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x14] (READ)
// 005566da: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (READ)
// 005566e1: MOV ESI,dword ptr [EAX + 0x20]
// 005566e4: MOV EDI,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x8] (READ)
// 005566eb: MOV ESI,dword ptr [ESI]
// 005566ed: MOV EDI,dword ptr [EDI]
// 005566ef: PUSH EDI
// 005566f0: MOV EAX,ECX
// 005566f2: SHR ECX,0x2
// 005566f5: MOVSD.REP ES:EDI,ESI
// 005566f7: MOV CL,AL
// 005566f9: AND CL,0x3
// 005566fc: MOVSB.REP ES:EDI,ESI
// 005566fe: POP EDI
// 005566ff: PUSH 0x43a
// 00556704: PUSH 0x641014
//   XREF to: 00641014 (DATA)
// 00556709: PUSH 0x300
// 0055670e: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00556713: ADD ESP,0xc
// 00556716: MOV ECX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0xc] (READ)
// 0055671d: MOV dword ptr [ECX],EAX
// 0055671f: TEST EAX,EAX
// 00556721: JZ 0x005568ba
//   XREF to: 005568ba (CONDITIONAL_JUMP)
// 00556727: MOV ESI,dword ptr [ESP + 0xc8]
//   Label: LAB_00556727
//   XREF to: Stack[-0x14] (READ)
// 0055672e: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0xc] (READ)
// 00556735: MOV ECX,0x300
// 0055673a: MOV ESI,dword ptr [ESI + 0x24]
// 0055673d: MOV EDI,dword ptr [EDI]
// 0055673f: PUSH EDI
// 00556740: MOV EAX,ECX
// 00556742: SHR ECX,0x2
// 00556745: MOVSD.REP ES:EDI,ESI
// 00556747: MOV CL,AL
// 00556749: AND CL,0x3
// 0055674c: MOVSB.REP ES:EDI,ESI
// 0055674e: POP EDI
// 0055674f: PUSH 0x0
// 00556751: MOV ESI,0x641066
//   XREF to: 00641066 (DATA)
// 00556756: MOV EDI,0x443
// 0055675b: PUSH EBP
// 0055675c: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 00556762: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 00556768: CALL shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
//   XREF to: 00554940 (UNCONDITIONAL_CALL)
// 0055676d: ADD ESP,0x8
// 00556770: PUSH EAX
// 00556771: MOV EBP,0x64107c
//   XREF to: 0064107c (DATA)
// 00556776: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0055677b: MOV EAX,0x444
// 00556780: ADD ESP,0x4
// 00556783: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 00556789: MOV EDX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (READ)
// 00556790: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 00556795: TEST EDX,EDX
// 00556797: JZ 0x005567ad
//   XREF to: 005567ad (CONDITIONAL_JUMP)
// 00556799: PUSH 0x0
// 0055679b: PUSH EDX
// 0055679c: CALL shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
//   XREF to: 00556c20 (UNCONDITIONAL_CALL)
// 005567a1: ADD ESP,0x8
// 005567a4: PUSH EAX
// 005567a5: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005567aa: ADD ESP,0x4
// 005567ad: MOV EAX,0x1
//   Label: LAB_005567ad
// 005567b2: ADD ESP,0xcc
//   Label: LAB_005567b2
// 005567b8: POP EBP
// 005567b9: POP EDI
// 005567ba: POP ESI
// 005567bb: POP EBX
// 005567bc: RET
// 005567bd: XOR ECX,ECX
//   Label: LAB_005567bd
// 005567bf: MOV CL,BL
// 005567c1: PUSH ECX
// 005567c2: XOR ECX,ECX
// 005567c4: MOV CX,word ptr [ESP + 0xf4]
//   XREF to: Stack[0x14] (READ)
// 005567cc: PUSH ECX
// 005567cd: XOR ECX,ECX
// 005567cf: MOV CX,word ptr [ESP + 0xf4]
//   XREF to: Stack[0x10] (READ)
// 005567d7: PUSH ECX
// 005567d8: PUSH EAX
// 005567d9: CALL shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
//   XREF to: 00556a00 (UNCONDITIONAL_CALL)
// 005567de: ADD ESP,0x10
// 005567e1: JMP 0x005564d0
//   XREF to: 005564d0 (UNCONDITIONAL_JUMP)
// 005567e6: PUSH EBX
//   Label: LAB_005567e6
// 005567e7: PUSH 0x640dfb
//   XREF to: 00640dfb (DATA)
// 005567ec: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 005567f0: PUSH EAX
// 005567f1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005567f6: MOV EDX,0x640e33
//   XREF to: 00640e33 (PARAM)
// 005567fb: ADD ESP,0xc
// 005567fe: MOV EAX,ESP
// 00556800: MOV ECX,0x3f0
// 00556805: PUSH EAX
// 00556806: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0055680c: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00556812: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00556817: ADD ESP,0x4
// 0055681a: JMP 0x005564df
//   XREF to: 005564df (UNCONDITIONAL_JUMP)
// 0055681f: MOV ESI,0x1
//   Label: LAB_0055681f
// 00556824: JMP 0x00556524
//   XREF to: 00556524 (UNCONDITIONAL_JUMP)
// 00556829: MOV ESI,0x2
//   Label: LAB_00556829
// 0055682e: JMP 0x00556524
//   XREF to: 00556524 (UNCONDITIONAL_JUMP)
// 00556833: MOV ESI,0x3
//   Label: LAB_00556833
// 00556838: JMP 0x00556524
//   XREF to: 00556524 (UNCONDITIONAL_JUMP)
// 0055683d: MOV ESI,0x4
//   Label: LAB_0055683d
// 00556842: JMP 0x00556524
//   XREF to: 00556524 (UNCONDITIONAL_JUMP)
// 00556847: JBE 0x00556829
//   Label: LAB_00556847
//   XREF to: 00556829 (CONDITIONAL_JUMP)
// 00556849: CMP EBX,0x18
// 0055684c: JC 0x005564f1
//   XREF to: 005564f1 (CONDITIONAL_JUMP)
// 00556852: JBE 0x00556833
//   XREF to: 00556833 (CONDITIONAL_JUMP)
// 00556854: CMP EBX,0x20
// 00556857: JZ 0x0055683d
//   XREF to: 0055683d (CONDITIONAL_JUMP)
// 00556859: JMP 0x005564f1
//   XREF to: 005564f1 (UNCONDITIONAL_JUMP)
// 0055685e: JBE 0x0055681f
//   Label: LAB_0055685e
//   XREF to: 0055681f (CONDITIONAL_JUMP)
// 00556860: CMP EBX,0xf
// 00556863: JZ 0x00556829
//   XREF to: 00556829 (CONDITIONAL_JUMP)
// 00556865: JMP 0x005564f1
//   XREF to: 005564f1 (UNCONDITIONAL_JUMP)
// 0055686a: MOV EBX,0x640ee6
//   Label: LAB_0055686a
//   XREF to: 00640ee6 (PARAM)
// 0055686f: MOV ESI,0x41a
// 00556874: PUSH 0x640efc
//   XREF to: 00640efc (DATA)
// 00556879: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0055687f: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00556885: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0055688a: ADD ESP,0x4
// 0055688d: JMP 0x005565c4
//   XREF to: 005565c4 (UNCONDITIONAL_JUMP)
// 00556892: MOV EBX,0x640fd9
//   Label: LAB_00556892
//   XREF to: 00640fd9 (PARAM)
// 00556897: MOV ESI,0x434
// 0055689c: PUSH 0x640fef
//   XREF to: 00640fef (DATA)
// 005568a1: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005568a7: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005568ad: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005568b2: ADD ESP,0x4
// 005568b5: JMP 0x005566cb
//   XREF to: 005566cb (UNCONDITIONAL_JUMP)
// 005568ba: MOV ECX,0x64102a
//   Label: LAB_005568ba
//   XREF to: 0064102a (PARAM)
// 005568bf: MOV EBX,0x43d
// 005568c4: PUSH 0x641040
//   XREF to: 00641040 (DATA)
// 005568c9: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005568cf: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005568d5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005568da: ADD ESP,0x4
// 005568dd: JMP 0x00556727
//   XREF to: 00556727 (UNCONDITIONAL_JUMP)
