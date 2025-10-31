// Name: core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0
// Address: 005542b0
// Address Range: [[005542b0, 00554610]]
// Convention: unknown
// Signature: undefined core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0()
// Cross-references:
//   core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880 (00554880) at 005548e4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_water_d_raw_00640938
//   TerminatedCString s_wb_00640944
//   TerminatedCString s_art_00640947
//   TerminatedCString s_core_procedur_cpp_0064094b
//   TerminatedCString s_Can_t_write_water_frame_00640960
//   TerminatedCString s_core_procedur_cpp_00640978
//   TerminatedCString s_water_d_act_0064098d
//   TerminatedCString s_wb_00640999
//   TerminatedCString s_art_0064099c
//   TerminatedCString s_core_procedur_cpp_006409a0
//   TerminatedCString s_Can_t_write_water_frame_006409b5
//   TerminatedCString s_core_procedur_cpp_006409cd
//   float FLOAT_006409e4 = 0.00003051851
//   double DOUBLE_006409e8 = 256
//   double DOUBLE_006409f0 = 128
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_procedur.cpp_FUN_00554620
//   core_procedur.cpp_FUN_00554670
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

void core_procedur_cpp_CreateProceduralWaterFrame_FUN_005542b0(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  FILE *pFVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  int iVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  int in_stack_00000020;
  int iStack00000024;
  int in_stack_00000040;
  void *local_28;
  
  iVar7 = in_stack_00000004;
  do {
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    *(float *)(iVar7 + 0x10008) = (float)iVar2 * FLOAT_006409e4 * (float)DOUBLE_006409e8;
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    *(float *)(iVar7 + 0x10208) = (float)iVar2 * FLOAT_006409e4 * (float)DOUBLE_006409e8;
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    iVar6 = iVar7 + 4;
    *(float *)(iVar7 + 0x10408) = (float)iVar2 * FLOAT_006409e4 * (float)DOUBLE_006409f0;
    iVar7 = iVar6;
  } while (iVar6 != in_stack_00000004 + 0x200);
  do {
    crt_memory_c_memset_FUN_005fde40(local_28,0,0x10000);
    iVar7 = in_stack_00000008;
    do {
      core_procedur_cpp_FUN_00554620();
      iVar7 = iVar7 + 4;
      core_procedur_cpp_FUN_00554670();
      iVar2 = in_stack_00000008;
      iVar6 = in_stack_00000008;
      iVar9 = in_stack_00000010 + 0x100;
      iVar8 = in_stack_00000008;
    } while (iVar7 != in_stack_00000010 + 0x100);
    do {
      do {
        uVar3 = *(byte *)(iVar2 + 8) + 0x10;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        iVar7 = iVar6 + 1;
        *(char *)(iVar6 + 8) = (char)uVar3;
        iVar2 = iVar2 + 1;
        iVar6 = iVar7;
      } while (iVar7 != iVar9);
      iVar2 = iVar8 + 0x100;
      iVar6 = iVar2;
      iVar9 = iVar9 + 0x100;
      iVar8 = iVar2;
    } while (iVar2 != in_stack_00000010 + 0x10000);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffedc,"water%d.raw",(void *)(in_stack_00000010 + 0x200));
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffee0,"wb");
    if (pFVar4 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 100;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    crt_stdio_c_fwrite_FUN_005fdc00((void *)(in_stack_00000010 + 0x200),0x100,0x100,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\procedur.cpp",0x66);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef0,"water%d.act");
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffef4,"wb");
    if (pFVar4 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 0x69;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    iVar7 = 0;
    do {
      crt_stdio_c_fputc_FUN_006007a0(iVar7,pFVar4);
      crt_stdio_c_fputc_FUN_006007a0(iVar7,pFVar4);
      crt_stdio_c_fputc_FUN_006007a0(iVar7,pFVar4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\procedur.cpp",0x6f);
    iVar2 = 0;
    iVar7 = 0;
    iStack00000024 = in_stack_00000010;
    do {
      iVar6 = in_stack_00000040 + iVar2 * 0x100;
      piVar5 = *(int **)((int)g_ScreenBufferArray + iVar7);
      do {
        bVar1 = *(byte *)(iVar6 + 8);
        iVar6 = iVar6 + 1;
        *piVar5 = (uint)bVar1 * 0x10000 + (uint)CONCAT11(bVar1,bVar1);
        piVar5 = piVar5 + 1;
      } while (iVar6 != iStack00000024);
      iVar7 = iVar7 + 4;
      iStack00000024 = iStack00000024 + 0x100;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (in_stack_00000020 + 1 < 0x10);
  return;
}


// Assembly code:
// 005542b0: PUSH EBX
//   Label: core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0
// 005542b1: PUSH ESI
// 005542b2: PUSH EDI
// 005542b3: PUSH EBP
// 005542b4: SUB ESP,0x120
// 005542ba: MOV EBX,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x4] (READ)
// 005542c1: LEA ESI,[EBX + 0x200]
// 005542c7: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_005542c7
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005542cc: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005542d3: FILD dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 005542da: FMUL float ptr [0x006409e4]
//   XREF to: 006409e4 (READ)
// 005542e0: FMUL double ptr [0x006409e8]
//   XREF to: 006409e8 (READ)
// 005542e6: FSTP float ptr [EBX + 0x10008]
// 005542ec: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005542f1: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005542f8: FILD dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 005542ff: FMUL float ptr [0x006409e4]
//   XREF to: 006409e4 (READ)
// 00554305: FMUL double ptr [0x006409e8]
//   XREF to: 006409e8 (READ)
// 0055430b: FSTP float ptr [EBX + 0x10208]
// 00554311: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00554316: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055431d: FILD dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 00554324: FMUL float ptr [0x006409e4]
//   XREF to: 006409e4 (READ)
// 0055432a: FMUL double ptr [0x006409f0]
//   XREF to: 006409f0 (READ)
// 00554330: ADD EBX,0x4
// 00554333: FSTP float ptr [EBX + 0x10404]
// 00554339: CMP EBX,ESI
// 0055433b: JNZ 0x005542c7
//   XREF to: 005542c7 (CONDITIONAL_JUMP)
// 0055433d: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x4] (READ)
// 00554344: ADD EAX,0x8
// 00554347: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0055434e: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x4] (READ)
// 00554355: ADD EAX,0x10000
// 0055435a: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00554361: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x4] (READ)
// 00554368: ADD EAX,0x200
// 0055436d: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00554374: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x4] (READ)
// 0055437b: XOR EDX,EDX
// 0055437d: ADD EAX,0x100
// 00554382: MOV dword ptr [ESP + 0x114],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00554389: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00554390: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00554397: PUSH 0x10000
//   Label: LAB_00554397
// 0055439c: PUSH 0x0
// 0055439e: MOV ECX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x28] (READ)
// 005543a5: PUSH ECX
// 005543a6: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005543ab: ADD ESP,0xc
// 005543ae: MOV EBX,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x4] (READ)
// 005543b5: MOV ESI,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x4] (READ)
// 005543bc: MOV EBP,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x24] (READ)
// 005543c3: MOV EAX,dword ptr [ESP + 0x114]
//   Label: LAB_005543c3
//   XREF to: Stack[-0x1c] (READ)
// 005543ca: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005543d1: FILD dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 005543d8: SUB ESP,0x4
// 005543db: FSTP float ptr [ESP]
//   XREF to: Stack[-0x134] (DATA)
// 005543de: PUSH dword ptr [EBX + 0x10408]
// 005543e4: PUSH ESI
// 005543e5: CALL core_procedur.cpp_FUN_00554620
//   XREF to: 00554620 (UNCONDITIONAL_CALL)
// 005543ea: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005543f1: FLD float ptr [ESP + 0x128]
//   XREF to: Stack[-0x14] (READ)
// 005543f8: ADD ESP,0xc
// 005543fb: SUB ESP,0x4
// 005543fe: FSTP float ptr [ESP]
//   XREF to: Stack[-0x134] (DATA)
// 00554401: PUSH dword ptr [EBX + 0x10208]
// 00554407: PUSH dword ptr [EBX + 0x10008]
// 0055440d: PUSH ESI
// 0055440e: ADD EBX,0x4
// 00554411: CALL core_procedur.cpp_FUN_00554670
//   XREF to: 00554670 (UNCONDITIONAL_CALL)
// 00554416: ADD ESP,0x10
// 00554419: CMP EBX,EBP
// 0055441b: JNZ 0x005543c3
//   XREF to: 005543c3 (CONDITIONAL_JUMP)
// 0055441d: MOV EBP,0xff
// 00554422: MOV EDI,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x30] (READ)
// 00554429: MOV EDX,ESI
//   Label: LAB_00554429
// 0055442b: MOV EBX,EDI
// 0055442d: MOV ECX,ESI
// 0055442f: XOR EAX,EAX
//   Label: LAB_0055442f
// 00554431: MOV AL,byte ptr [ECX + 0x8]
// 00554434: ADD EAX,0x10
// 00554437: CMP EAX,0xff
// 0055443c: JBE 0x00554440
//   XREF to: 00554440 (CONDITIONAL_JUMP)
// 0055443e: MOV EAX,EBP
// 00554440: INC EDX
//   Label: LAB_00554440
// 00554441: INC ECX
// 00554442: MOV byte ptr [EDX + 0x7],AL
// 00554445: CMP EDX,EBX
// 00554447: JNZ 0x0055442f
//   XREF to: 0055442f (CONDITIONAL_JUMP)
// 00554449: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x20] (READ)
// 00554450: ADD ESI,0x100
// 00554456: ADD EDI,0x100
// 0055445c: CMP ESI,EAX
// 0055445e: JNZ 0x00554429
//   XREF to: 00554429 (CONDITIONAL_JUMP)
// 00554460: MOV EDX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 00554467: PUSH EDX
// 00554468: PUSH 0x640938
//   XREF to: 00640938 (DATA)
// 0055446d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x130] (DATA)
// 00554471: PUSH EAX
// 00554472: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00554477: ADD ESP,0xc
// 0055447a: PUSH 0x640944
//   XREF to: 00640944 (DATA)
// 0055447f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x130] (DATA)
// 00554483: PUSH EAX
// 00554484: PUSH 0x640947
//   XREF to: 00640947 (DATA)
// 00554489: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0055448e: ADD ESP,0xc
// 00554491: MOV ESI,EAX
// 00554493: TEST EAX,EAX
// 00554495: JNZ 0x005544ba
//   XREF to: 005544ba (CONDITIONAL_JUMP)
// 00554497: MOV ECX,0x64094b
//   XREF to: 0064094b (PARAM)
// 0055449c: MOV EBX,0x64
// 005544a1: PUSH 0x640960
//   XREF to: 00640960 (DATA)
// 005544a6: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005544ac: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005544b2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005544b7: ADD ESP,0x4
// 005544ba: PUSH ESI
//   Label: LAB_005544ba
// 005544bb: PUSH 0x100
// 005544c0: PUSH 0x100
// 005544c5: MOV EDI,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x28] (READ)
// 005544cc: PUSH EDI
// 005544cd: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 005544d2: ADD ESP,0x10
// 005544d5: PUSH 0x66
// 005544d7: PUSH 0x640978
//   XREF to: 00640978 (DATA)
// 005544dc: PUSH ESI
// 005544dd: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005544e2: ADD ESP,0xc
// 005544e5: MOV EBP,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 005544ec: PUSH EBP
// 005544ed: PUSH 0x64098d
//   XREF to: 0064098d (DATA)
// 005544f2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x130] (DATA)
// 005544f6: PUSH EAX
// 005544f7: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005544fc: ADD ESP,0xc
// 005544ff: PUSH 0x640999
//   XREF to: 00640999 (DATA)
// 00554504: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x130] (DATA)
// 00554508: PUSH EAX
// 00554509: PUSH 0x64099c
//   XREF to: 0064099c (DATA)
// 0055450e: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00554513: ADD ESP,0xc
// 00554516: MOV ESI,EAX
// 00554518: TEST EAX,EAX
// 0055451a: JZ 0x005545ea
//   XREF to: 005545ea (CONDITIONAL_JUMP)
// 00554520: XOR EBX,EBX
//   Label: LAB_00554520
// 00554522: PUSH ESI
//   Label: LAB_00554522
// 00554523: PUSH EBX
// 00554524: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00554529: ADD ESP,0x8
// 0055452c: PUSH ESI
// 0055452d: PUSH EBX
// 0055452e: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00554533: ADD ESP,0x8
// 00554536: PUSH ESI
// 00554537: PUSH EBX
// 00554538: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0055453d: INC EBX
// 0055453e: ADD ESP,0x8
// 00554541: CMP EBX,0x100
// 00554547: JL 0x00554522
//   XREF to: 00554522 (CONDITIONAL_JUMP)
// 00554549: PUSH 0x6f
// 0055454b: PUSH 0x6409cd
//   XREF to: 006409cd (DATA)
// 00554550: PUSH ESI
// 00554551: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00554556: ADD ESP,0xc
// 00554559: XOR EDI,EDI
// 0055455b: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 00554562: XOR EBP,EBP
// 00554564: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0055456b: MOV EDX,dword ptr [ESP + 0x134]
//   Label: LAB_0055456b
//   XREF to: Stack[0x4] (READ)
// 00554572: MOV EAX,EDI
// 00554574: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x18] (READ)
// 0055457b: SHL EAX,0x8
// 0055457e: MOV ECX,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 00554584: ADD EDX,EAX
// 00554586: XOR EAX,EAX
//   Label: LAB_00554586
// 00554588: MOV AL,byte ptr [EDX + 0x8]
// 0055458b: MOV EBX,EAX
// 0055458d: SHL EBX,0x8
// 00554590: ADD EBX,EAX
// 00554592: SHL EAX,0x10
// 00554595: ADD ECX,0x4
// 00554598: ADD EAX,EBX
// 0055459a: INC EDX
// 0055459b: MOV dword ptr [ECX + -0x4],EAX
// 0055459e: CMP EDX,ESI
// 005545a0: JNZ 0x00554586
//   XREF to: 00554586 (CONDITIONAL_JUMP)
// 005545a2: MOV ECX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x18] (READ)
// 005545a9: ADD EBP,0x4
// 005545ac: ADD ECX,0x100
// 005545b2: INC EDI
// 005545b3: MOV dword ptr [ESP + 0x118],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005545ba: CMP EDI,0x100
// 005545c0: JL 0x0055456b
//   XREF to: 0055456b (CONDITIONAL_JUMP)
// 005545c2: MOV EBX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 005545c9: INC EBX
// 005545ca: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005545cf: MOV dword ptr [ESP + 0x114],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005545d6: CMP EBX,0x10
// 005545d9: JL 0x00554397
//   XREF to: 00554397 (CONDITIONAL_JUMP)
// 005545df: ADD ESP,0x120
// 005545e5: POP EBP
// 005545e6: POP EDI
// 005545e7: POP ESI
// 005545e8: POP EBX
// 005545e9: RET
// 005545ea: MOV EAX,0x6409a0
//   Label: LAB_005545ea
//   XREF to: 006409a0 (PARAM)
// 005545ef: MOV EDX,0x69
// 005545f4: PUSH 0x6409b5
//   XREF to: 006409b5 (DATA)
// 005545f9: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005545fe: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00554604: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00554609: ADD ESP,0x4
// 0055460c: JMP 0x00554520
//   XREF to: 00554520 (UNCONDITIONAL_JUMP)
