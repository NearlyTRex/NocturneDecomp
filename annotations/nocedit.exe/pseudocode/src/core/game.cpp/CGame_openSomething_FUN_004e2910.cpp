// Name: core_game.cpp_CGame_openSomething_FUN_004e2910
// Address: 004e2910
// Address Range: [[004e2910, 004e2f04]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_openSomething_FUN_004e2910(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004dbb5c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_art_0062d29d
//   TerminatedCString s_Can_t_open_s_0062d2a1
//   TerminatedCString s_s_is_d_bytes_but_expecte_0062d2af
//   undefined1 DAT_0062d2df
//   undefined1 DAT_0062d2e0
//   undefined1 DAT_0062d2e1
//   undefined1 DAT_0062d2e2
//   TerminatedCString s_rb_0062d2e4
//   TerminatedCString s_art_0062d2e7
//   TerminatedCString s_Can_t_open_s_0062d2eb
//   TerminatedCString s_core_game_cpp_0062d2f9
//   TerminatedCString s_core_game_cpp_0062d30a
//   TerminatedCString s_rb_0062d31b
//   TerminatedCString s_art_0062d31e
//   TerminatedCString s_core_game_cpp_0062d322
//   TerminatedCString s_Can_t_open_s_0062d333
//   TerminatedCString s_core_game_cpp_0062d341
//   TerminatedCString s_core_game_cpp_0062d352
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseButtonFlags
//   void*[1024] g_ScreenBufferArray
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_string.c_splitpath_FUN_005ff178
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_lockFrame_FUN_005b7210
//   wincore_windll.cpp_unlockFrame_FUN_005b7250
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_openSomething_FUN_004e2910(CGame *this_ptr)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  FILE *pFVar4;
  void *pvVar5;
  int iVar6;
  undefined3 extraout_var;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  byte bVar15;
  void *unaff_retaddr;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_0000001c;
  CGame *in_stack_00000024;
  int in_stack_00000030;
  int in_stack_00000038;
  void *in_stack_0000003c;
  CGame *in_stack_0000004c;
  CGame *in_stack_fffff620;
  byte abStack_63c [24];
  undefined1 auStack_624 [744];
  ushort auStack_33c [264];
  char acStack_12c [4];
  char acStack_128 [236];
  uint uStack_3c;
  uint uStack_38;
  int local_2c;
  char *pcVar14;
  
  bVar15 = 0;
  if (this_ptr->field101_0x38c[0x528] == '\0') {
    return;
  }
  this_ptr->cutscene_skippable = 0;
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("art",this_ptr->field101_0x38c + 0x528);
  if (iVar3 < 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    *(undefined1 *)(in_stack_0000000c + 0x8b4) = 0;
    return;
  }
  if (iVar3 != *(int *)(in_stack_00000008 + 0x9b4) * *(int *)(in_stack_00000008 + 0x9b8)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s is %d bytes, but expected %dx%d=%d byte file");
    *(undefined1 *)(in_stack_0000000c + 0x8b4) = 0;
    return;
  }
  crt_string_c_splitpath_FUN_005ff178
            (this_ptr->field101_0x38c + 0x528,(char *)0x0,(char *)0x0,acStack_12c,(char *)0x0);
  pcVar10 = &DAT_0062d2df;
  iVar3 = -1;
  pcVar14 = acStack_128;
  do {
    pcVar13 = pcVar14;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar13 = pcVar14 + (uint)bVar15 * -2 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar13;
  } while (cVar1 != '\0');
  pcVar13 = pcVar13 + -1;
  do {
    cVar1 = *pcVar10;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",acStack_128,"rb");
  if (pFVar4 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
  }
  else {
    crt_stdio_c_fread_FUN_005fd990(auStack_624,1,0x300,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\game.cpp",0xfff);
    iVar3 = 0;
    iVar11 = 0;
    local_2c = 0;
    do {
      if (g_BitsPerPixel == 0x10) {
        uStack_3c = (uint)abStack_63c[iVar3 + 1];
        uStack_3c = (uint)abStack_63c[iVar3 + 1] / (uint)g_GreenScaleFactor;
        uStack_38 = (uint)abStack_63c[iVar3 + 2] / (uint)g_BlueScaleFactor;
        *(ushort *)((int)auStack_33c + iVar11) =
             (ushort)((uint)abStack_63c[iVar3 + 2] / (uint)g_BlueScaleFactor <<
                     ((byte)g_BlueBitPosition & 0x1f)) |
             (ushort)((uint)abStack_63c[iVar3] / (uint)g_RedScaleFactor <<
                     ((byte)g_RedBitPosition & 0x1f)) |
             (ushort)(uStack_3c << ((byte)g_GreenBitPosition & 0x1f));
      }
      else if (g_BitsPerPixel == 0x20) {
        *(uint *)(&stack0xfffff5c4 + local_2c) =
             (uint)abStack_63c[iVar3] << ((byte)g_RedBitPosition & 0x1f) |
             (uint)abStack_63c[iVar3 + 1] << ((byte)g_GreenBitPosition & 0x1f) |
             (uint)abStack_63c[iVar3 + 2] << ((byte)g_BlueBitPosition & 0x1f);
      }
      else {
        *(uint *)(&stack0xfffff5c4 + local_2c) =
             (uint)abStack_63c[iVar3 + 1] << 8 | (uint)abStack_63c[iVar3] << 0x10 |
             (uint)abStack_63c[iVar3 + 2];
      }
      iVar11 = iVar11 + 2;
      iVar3 = iVar3 + 3;
      local_2c = local_2c + 4;
    } while (iVar11 != 0x200);
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (*(int *)(in_stack_00000010 + 0x9b4) * *(int *)(in_stack_00000010 + 0x9b8),
                        "..\\core\\game.cpp",0x1016);
    if (pvVar5 != (void *)0x0) {
      pFVar4 = engine_dosio_c_getFile_FUN_00481a50
                         ("art",(char *)(in_stack_00000014 + 0x8b4),"rb");
      if (pFVar4 == (FILE *)0x0) {
        g_CurrentFilename = "..\\core\\game.cpp";
        g_CurrentLineNumber = 0x101f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s");
      }
      crt_stdio_c_fread_FUN_005fd990
                (unaff_retaddr,*(SIZE_T *)(in_stack_0000001c + 0x9b4),
                 *(SIZE_T *)(in_stack_0000001c + 0x9b8),pFVar4);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\game.cpp",0x1021);
      this_ptr = (CGame *)0x0;
      if (0 < g_WindowHeight) {
        iVar3 = 0;
        do {
          iVar6 = ((int)this_ptr * *(int *)(in_stack_00000024->field101_0x38c + 0x62c)) /
                  g_WindowHeight;
          iVar11 = *(int *)(in_stack_00000024->field101_0x38c + 0x628);
          iVar7 = 0;
          if (0 < g_WindowWidth) {
            iVar9 = 0;
            iVar12 = 0;
            do {
              pbVar8 = (byte *)(in_stack_00000008 +
                               (*(int *)(in_stack_00000024->field101_0x38c + 0x628) * iVar7) /
                               g_WindowWidth + iVar11 * iVar6);
              if (g_BitsPerPixel == 0x10) {
                *(ushort *)(*(int *)((int)g_ScreenBufferArray + iVar3) + iVar12) =
                     auStack_33c[*pbVar8 + 0x16];
              }
              else {
                *(undefined4 *)(iVar9 + *(int *)((int)g_ScreenBufferArray + iVar3)) =
                     *(undefined4 *)(&stack0xfffff5f0 + (uint)*pbVar8 * 4);
              }
              iVar9 = iVar9 + 4;
              iVar7 = iVar7 + 1;
              iVar12 = iVar12 + 2;
            } while (iVar7 < g_WindowWidth);
          }
          iVar3 = iVar3 + 4;
          this_ptr = (CGame *)((int)&this_ptr->game_pixx + 1);
        } while ((int)this_ptr < g_WindowHeight);
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(in_stack_00000024);
      do {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        if (*(int *)(in_stack_00000030 + 0xbc) == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
        }
        bVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      } while (((CONCAT31(extraout_var,bVar2) == 0) &&
               (iVar3 = (*g_CKeysPtr->vtable->isKeyDown)
                                  (g_CKeysPtr,*(int *)(in_stack_00000038 + 0x48)), iVar3 == 0)) &&
              (g_MouseButtonFlags == 0));
      while ((g_MouseButtonFlags != 0 ||
             (iVar3 = (*g_CKeysPtr->vtable->isKeyDown)
                                (g_CKeysPtr,*(int *)(in_stack_00000038 + 0x48)), iVar3 != 0))) {
        if (*(int *)(in_stack_00000038 + 0xbc) == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(in_stack_0000004c);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(in_stack_0000004c,in_stack_fffff620);
      in_stack_0000004c->field101_0x38c[0x528] = '\0';
      shape_memdbg_cpp_debugFree_FUN_0050f460(in_stack_0000003c,"..\\core\\game.cpp",0x1057);
      return;
    }
  }
  *(undefined1 *)(in_stack_00000014 + 0x8b4) = 0;
  return;
}


// Assembly code:
// 004e2910: PUSH EBX
//   Label: core_game.cpp_CGame_openSomething_FUN_004e2910
// 004e2911: PUSH ESI
// 004e2912: PUSH EDI
// 004e2913: PUSH EBP
// 004e2914: SUB ESP,0xa20
// 004e291a: MOV EAX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2921: CMP byte ptr [EAX + 0x8b4],0x0
// 004e2928: JNZ 0x004e2935
//   XREF to: 004e2935 (CONDITIONAL_JUMP)
// 004e292a: ADD ESP,0xa20
// 004e2930: POP EBP
// 004e2931: POP EDI
// 004e2932: POP ESI
// 004e2933: POP EBX
// 004e2934: RET
// 004e2935: LEA ESI,[EAX + 0x8b4]
//   Label: LAB_004e2935
// 004e293b: PUSH ESI
// 004e293c: PUSH 0x62d29d
//   XREF to: 0062d29d (DATA)
// 004e2941: MOV dword ptr [EAX + 0xcc],0x0
// 004e294b: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 004e2950: MOV EDX,EAX
// 004e2952: ADD ESP,0x8
// 004e2955: TEST EAX,EAX
// 004e2957: JL 0x004e2d37
//   XREF to: 004e2d37 (CONDITIONAL_JUMP)
// 004e295d: MOV ECX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2964: MOV EAX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e296b: MOV EBX,dword ptr [ECX + 0x9b8]
// 004e2971: MOV EAX,dword ptr [EAX + 0x9b4]
// 004e2977: IMUL EAX,EBX
// 004e297a: CMP EDX,EAX
// 004e297c: JNZ 0x004e2d65
//   XREF to: 004e2d65 (CONDITIONAL_JUMP)
// 004e2982: PUSH 0x0
// 004e2984: LEA EAX,[ESP + 0x904]
//   XREF to: Stack[-0x130] (DATA)
// 004e298b: PUSH EAX
// 004e298c: PUSH 0x0
// 004e298e: PUSH 0x0
// 004e2990: PUSH ESI
// 004e2991: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 004e2996: ADD ESP,0x14
// 004e2999: LEA EDI,[ESP + 0x900]
//   XREF to: Stack[-0x130] (DATA)
// 004e29a0: MOV ESI,0x62d2df
//   XREF to: 0062d2df (DATA)
// 004e29a5: PUSH EDI
// 004e29a6: SUB ECX,ECX
// 004e29a8: DEC ECX
// 004e29a9: MOV AL,0x0
// 004e29ab: SCASB.REPNE ES:EDI
// 004e29ad: DEC EDI
// 004e29ae: MOV AL,byte ptr [ESI]
//   Label: LAB_004e29ae
//   XREF to: 0062d2df (READ)
//   XREF to: 0062d2e1 (READ)
// 004e29b0: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x130] (DATA)
// 004e29b2: CMP AL,0x0
// 004e29b4: JZ 0x004e29c6
//   XREF to: 004e29c6 (CONDITIONAL_JUMP)
// 004e29b6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062d2e0 (READ)
//   XREF to: 0062d2e2 (READ)
// 004e29b9: ADD ESI,0x2
// 004e29bc: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x12f] (WRITE)
// 004e29bf: ADD EDI,0x2
// 004e29c2: CMP AL,0x0
// 004e29c4: JNZ 0x004e29ae
//   XREF to: 004e29ae (CONDITIONAL_JUMP)
// 004e29c6: POP EDI
//   Label: LAB_004e29c6
// 004e29c7: PUSH 0x62d2e4
//   XREF to: 0062d2e4 (DATA)
// 004e29cc: LEA EAX,[ESP + 0x904]
//   XREF to: Stack[-0x130] (DATA)
// 004e29d3: PUSH EAX
// 004e29d4: PUSH 0x62d2e7
//   XREF to: 0062d2e7 (DATA)
// 004e29d9: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e29de: MOV EBX,EAX
// 004e29e0: ADD ESP,0xc
// 004e29e3: TEST EAX,EAX
// 004e29e5: JZ 0x004e2d9c
//   XREF to: 004e2d9c (CONDITIONAL_JUMP)
// 004e29eb: PUSH EAX
// 004e29ec: PUSH 0x300
// 004e29f1: PUSH 0x1
// 004e29f3: LEA EAX,[ESP + 0x40c]
//   XREF to: Stack[-0x630] (DATA)
// 004e29fa: PUSH EAX
// 004e29fb: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004e2a00: ADD ESP,0x10
// 004e2a03: PUSH 0xfff
// 004e2a08: PUSH 0x62d2f9
//   XREF to: 0062d2f9 (DATA)
// 004e2a0d: PUSH EBX
// 004e2a0e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e2a13: ADD ESP,0xc
// 004e2a16: XOR EBX,EBX
// 004e2a18: XOR ESI,ESI
// 004e2a1a: MOV dword ptr [ESP + 0xa10],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004e2a21: CMP dword ptr [0x0067939c],0x10
//   Label: LAB_004e2a21
//   XREF to: 0067939c (READ)
// 004e2a28: JNZ 0x004e2dd1
//   XREF to: 004e2dd1 (CONDITIONAL_JUMP)
// 004e2a2e: MOV EDI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004e2a34: XOR EAX,EAX
// 004e2a36: XOR EDX,EDX
// 004e2a38: MOV AL,byte ptr [ESP + EBX*0x1 + 0x400]
// 004e2a3f: DIV EDI
// 004e2a41: MOVZX EBP,byte ptr [ESP + EBX*0x1 + 0x401]
// 004e2a49: MOV dword ptr [ESP + 0xa00],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 004e2a50: MOV EDI,EAX
// 004e2a52: XOR EDX,EDX
// 004e2a54: MOV EAX,EBP
// 004e2a56: DIV dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004e2a5c: XOR ECX,ECX
// 004e2a5e: MOV CL,byte ptr [ESP + EBX*0x1 + 0x402]
// 004e2a65: MOV dword ptr [ESP + 0xa04],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004e2a6c: MOV dword ptr [ESP + 0xa00],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004e2a73: XOR EDX,EDX
// 004e2a75: MOV EAX,ECX
// 004e2a77: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004e2a7d: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004e2a83: MOV dword ptr [ESP + 0xa04],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004e2a8a: MOV EAX,dword ptr [ESP + 0xa00]
//   XREF to: Stack[-0x30] (READ)
// 004e2a91: SHL EDI,CL
// 004e2a93: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004e2a99: SHL EAX,CL
// 004e2a9b: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004e2aa1: OR EDI,EAX
// 004e2aa3: MOV EAX,dword ptr [ESP + 0xa04]
//   XREF to: Stack[-0x2c] (READ)
// 004e2aaa: SHL EAX,CL
// 004e2aac: OR EAX,EDI
// 004e2aae: MOV word ptr [ESP + ESI*0x1 + 0x700],AX
// 004e2ab6: MOV EDI,dword ptr [ESP + 0xa10]
//   Label: LAB_004e2ab6
//   XREF to: Stack[-0x20] (READ)
// 004e2abd: ADD ESI,0x2
// 004e2ac0: ADD EDI,0x4
// 004e2ac3: ADD EBX,0x3
// 004e2ac6: MOV dword ptr [ESP + 0xa10],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004e2acd: CMP ESI,0x200
// 004e2ad3: JNZ 0x004e2a21
//   XREF to: 004e2a21 (CONDITIONAL_JUMP)
// 004e2ad9: CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   XREF to: 005ed580 (UNCONDITIONAL_CALL)
// 004e2ade: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 004e2ae3: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004e2ae8: PUSH 0x0
// 004e2aea: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 004e2aef: ADD ESP,0x4
// 004e2af2: CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   XREF to: 005ed630 (UNCONDITIONAL_CALL)
// 004e2af7: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004e2afc: MOV EAX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2b03: MOV EDX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2b0a: MOV EAX,dword ptr [EAX + 0x9b4]
// 004e2b10: IMUL EAX,dword ptr [EDX + 0x9b8]
// 004e2b17: PUSH 0x1016
// 004e2b1c: PUSH 0x62d30a
//   XREF to: 0062d30a (DATA)
// 004e2b21: PUSH EAX
// 004e2b22: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004e2b27: ADD ESP,0xc
// 004e2b2a: MOV dword ptr [ESP + 0xa18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004e2b31: TEST EAX,EAX
// 004e2b33: JZ 0x004e2db8
//   XREF to: 004e2db8 (CONDITIONAL_JUMP)
// 004e2b39: MOV ESI,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2b40: PUSH 0x62d31b
//   XREF to: 0062d31b (DATA)
// 004e2b45: ADD ESI,0x8b4
// 004e2b4b: PUSH ESI
// 004e2b4c: PUSH 0x62d31e
//   XREF to: 0062d31e (DATA)
// 004e2b51: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e2b56: ADD ESP,0xc
// 004e2b59: MOV EBX,EAX
// 004e2b5b: TEST EAX,EAX
// 004e2b5d: JNZ 0x004e2b82
//   XREF to: 004e2b82 (CONDITIONAL_JUMP)
// 004e2b5f: PUSH ESI
// 004e2b60: MOV EAX,0x62d322
//   XREF to: 0062d322 (PARAM)
// 004e2b65: MOV EDX,0x101f
// 004e2b6a: PUSH 0x62d333
//   XREF to: 0062d333 (DATA)
// 004e2b6f: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004e2b74: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004e2b7a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004e2b7f: ADD ESP,0x8
// 004e2b82: MOV EAX,dword ptr [ESP + 0xa34]
//   Label: LAB_004e2b82
//   XREF to: Stack[0x4] (READ)
// 004e2b89: PUSH EBX
// 004e2b8a: MOV ECX,dword ptr [EAX + 0x9b8]
// 004e2b90: PUSH ECX
// 004e2b91: MOV ESI,dword ptr [EAX + 0x9b4]
// 004e2b97: PUSH ESI
// 004e2b98: MOV EDI,dword ptr [ESP + 0xa24]
//   XREF to: Stack[-0x18] (READ)
// 004e2b9f: PUSH EDI
// 004e2ba0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004e2ba5: ADD ESP,0x10
// 004e2ba8: PUSH 0x1021
// 004e2bad: PUSH 0x62d341
//   XREF to: 0062d341 (DATA)
// 004e2bb2: PUSH EBX
// 004e2bb3: XOR EBP,EBP
// 004e2bb5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e2bba: ADD ESP,0xc
// 004e2bbd: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004e2bc2: MOV dword ptr [ESP + 0xa14],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004e2bc9: TEST EAX,EAX
// 004e2bcb: JLE 0x004e2ccc
//   XREF to: 004e2ccc (CONDITIONAL_JUMP)
// 004e2bd1: MOV dword ptr [ESP + 0xa0c],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 004e2bd8: MOV EAX,dword ptr [ESP + 0xa34]
//   Label: LAB_004e2bd8
//   XREF to: Stack[0x4] (READ)
// 004e2bdf: MOV EDX,dword ptr [ESP + 0xa14]
//   XREF to: Stack[-0x1c] (READ)
// 004e2be6: IMUL EDX,dword ptr [EAX + 0x9b8]
// 004e2bed: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004e2bf3: MOV EAX,EDX
// 004e2bf5: SAR EDX,0x1f
// 004e2bf8: IDIV ECX
// 004e2bfa: MOV EDX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2c01: MOV EDX,dword ptr [EDX + 0x9b4]
// 004e2c07: IMUL EDX,EAX
// 004e2c0a: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e2c10: XOR ECX,ECX
// 004e2c12: MOV dword ptr [ESP + 0xa1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004e2c19: TEST EBX,EBX
// 004e2c1b: JLE 0x004e2c9e
//   XREF to: 004e2c9e (CONDITIONAL_JUMP)
// 004e2c21: MOV EDI,dword ptr [ESP + 0xa0c]
//   XREF to: Stack[-0x24] (READ)
// 004e2c28: XOR EBX,EBX
// 004e2c2a: XOR ESI,ESI
// 004e2c2c: MOV EDX,dword ptr [ESP + 0xa34]
//   Label: LAB_004e2c2c
//   XREF to: Stack[0x4] (READ)
// 004e2c33: MOV EDX,dword ptr [EDX + 0x9b4]
// 004e2c39: IMUL EDX,ECX
// 004e2c3c: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e2c42: MOV EAX,EDX
// 004e2c44: SAR EDX,0x1f
// 004e2c47: IDIV EBP
// 004e2c49: ADD EAX,dword ptr [ESP + 0xa1c]
//   XREF to: Stack[-0x14] (READ)
// 004e2c50: MOV EDX,dword ptr [ESP + 0xa18]
//   XREF to: Stack[-0x18] (READ)
// 004e2c57: MOV EBP,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004e2c5d: ADD EDX,EAX
// 004e2c5f: CMP EBP,0x10
// 004e2c62: JNZ 0x004e2e3e
//   XREF to: 004e2e3e (CONDITIONAL_JUMP)
// 004e2c68: MOV EAX,dword ptr [EDI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004e2c6e: ADD EAX,ESI
// 004e2c70: MOV dword ptr [ESP + 0xa08],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004e2c77: XOR EAX,EAX
// 004e2c79: MOV AL,byte ptr [EDX]
// 004e2c7b: MOV EDX,dword ptr [ESP + 0xa08]
//   XREF to: Stack[-0x28] (READ)
// 004e2c82: MOV AX,word ptr [ESP + EAX*0x2 + 0x700]
// 004e2c8a: MOV word ptr [EDX],AX
// 004e2c8d: MOV EBP,dword ptr [0x00679394]
//   Label: LAB_004e2c8d
//   XREF to: 00679394 (READ)
// 004e2c93: ADD EBX,0x4
// 004e2c96: INC ECX
// 004e2c97: ADD ESI,0x2
// 004e2c9a: CMP ECX,EBP
// 004e2c9c: JL 0x004e2c2c
//   XREF to: 004e2c2c (CONDITIONAL_JUMP)
// 004e2c9e: MOV EDX,dword ptr [ESP + 0xa0c]
//   Label: LAB_004e2c9e
//   XREF to: Stack[-0x24] (READ)
// 004e2ca5: MOV ECX,dword ptr [ESP + 0xa14]
//   XREF to: Stack[-0x1c] (READ)
// 004e2cac: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004e2cb2: ADD EDX,0x4
// 004e2cb5: INC ECX
// 004e2cb6: MOV dword ptr [ESP + 0xa0c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004e2cbd: MOV dword ptr [ESP + 0xa14],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e2cc4: CMP ECX,EBX
// 004e2cc6: JL 0x004e2bd8
//   XREF to: 004e2bd8 (CONDITIONAL_JUMP)
// 004e2ccc: MOV ESI,dword ptr [ESP + 0xa34]
//   Label: LAB_004e2ccc
//   XREF to: Stack[0x4] (READ)
// 004e2cd3: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e2cd8: PUSH ESI
// 004e2cd9: CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   XREF to: 004dce70 (UNCONDITIONAL_CALL)
// 004e2cde: ADD ESP,0x4
// 004e2ce1: XOR EBX,EBX
// 004e2ce3: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_004e2ce3
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004e2ce8: MOV EAX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2cef: CMP dword ptr [EAX + 0xbc],0x2
// 004e2cf6: JNZ 0x004e2d01
//   XREF to: 004e2d01 (CONDITIONAL_JUMP)
// 004e2cf8: PUSH EAX
// 004e2cf9: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 004e2cfe: ADD ESP,0x4
// 004e2d01: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_004e2d01
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 004e2d06: TEST EAX,EAX
// 004e2d08: JZ 0x004e2e57
//   XREF to: 004e2e57 (CONDITIONAL_JUMP)
// 004e2d0e: XOR EBX,EBX
//   Label: LAB_004e2d0e
// 004e2d10: CMP EBX,dword ptr [0x02cf6a94]
//   Label: LAB_004e2d10
//   XREF to: 02cf6a94 (READ)
// 004e2d16: JZ 0x004e2e88
//   XREF to: 004e2e88 (CONDITIONAL_JUMP)
// 004e2d1c: MOV EAX,dword ptr [ESP + 0xa34]
//   Label: LAB_004e2d1c
//   XREF to: Stack[0x4] (READ)
// 004e2d23: CMP dword ptr [EAX + 0xbc],0x2
// 004e2d2a: JZ 0x004e2ef2
//   XREF to: 004e2ef2 (CONDITIONAL_JUMP)
// 004e2d30: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004e2d35: JMP 0x004e2d10
//   XREF to: 004e2d10 (UNCONDITIONAL_JUMP)
// 004e2d37: PUSH ESI
//   Label: LAB_004e2d37
// 004e2d38: PUSH 0x62d2a1
//   XREF to: 0062d2a1 (DATA)
// 004e2d3d: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e2d43: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004e2d44: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e2d49: ADD ESP,0xc
// 004e2d4c: MOV EAX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2d53: MOV byte ptr [EAX + 0x8b4],0x0
// 004e2d5a: ADD ESP,0xa20
// 004e2d60: POP EBP
// 004e2d61: POP EDI
// 004e2d62: POP ESI
// 004e2d63: POP EBX
// 004e2d64: RET
// 004e2d65: PUSH EAX
//   Label: LAB_004e2d65
// 004e2d66: PUSH EBX
// 004e2d67: MOV EDX,dword ptr [ECX + 0x9b4]
// 004e2d6d: PUSH EDX
// 004e2d6e: PUSH ESI
// 004e2d6f: PUSH 0x62d2af
//   XREF to: 0062d2af (DATA)
// 004e2d74: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e2d7a: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004e2d7b: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e2d80: ADD ESP,0x18
// 004e2d83: MOV EAX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[0x4] (READ)
// 004e2d8a: MOV byte ptr [EAX + 0x8b4],0x0
// 004e2d91: ADD ESP,0xa20
// 004e2d97: POP EBP
// 004e2d98: POP EDI
// 004e2d99: POP ESI
// 004e2d9a: POP EBX
// 004e2d9b: RET
// 004e2d9c: LEA EAX,[ESP + 0x900]
//   Label: LAB_004e2d9c
//   XREF to: Stack[-0x130] (DATA)
// 004e2da3: PUSH EAX
// 004e2da4: PUSH 0x62d2eb
//   XREF to: 0062d2eb (DATA)
// 004e2da9: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e2daf: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004e2db0: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e2db5: ADD ESP,0xc
// 004e2db8: MOV EAX,dword ptr [ESP + 0xa34]
//   Label: LAB_004e2db8
//   XREF to: Stack[0x4] (READ)
// 004e2dbf: MOV byte ptr [EAX + 0x8b4],0x0
// 004e2dc6: ADD ESP,0xa20
// 004e2dcc: POP EBP
// 004e2dcd: POP EDI
// 004e2dce: POP ESI
// 004e2dcf: POP EBX
// 004e2dd0: RET
// 004e2dd1: MOV EBP,dword ptr [0x0067939c]
//   Label: LAB_004e2dd1
//   XREF to: 0067939c (READ)
// 004e2dd7: MOVZX EDI,byte ptr [ESP + EBX*0x1 + 0x400]
// 004e2ddf: XOR EDX,EDX
// 004e2de1: XOR EAX,EAX
// 004e2de3: MOV DL,byte ptr [ESP + EBX*0x1 + 0x401]
// 004e2dea: MOV AL,byte ptr [ESP + EBX*0x1 + 0x402]
// 004e2df1: CMP EBP,0x20
// 004e2df4: JNZ 0x004e2e23
//   XREF to: 004e2e23 (CONDITIONAL_JUMP)
// 004e2df6: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004e2dfc: SHL EDI,CL
// 004e2dfe: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004e2e04: SHL EDX,CL
// 004e2e06: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004e2e0c: OR EDI,EDX
// 004e2e0e: SHL EAX,CL
// 004e2e10: MOV ECX,EDI
// 004e2e12: OR ECX,EAX
// 004e2e14: MOV EAX,dword ptr [ESP + 0xa10]
//   XREF to: Stack[-0x20] (READ)
// 004e2e1b: MOV dword ptr [ESP + EAX*0x1],ECX
// 004e2e1e: JMP 0x004e2ab6
//   XREF to: 004e2ab6 (UNCONDITIONAL_JUMP)
// 004e2e23: MOV ECX,EDX
//   Label: LAB_004e2e23
// 004e2e25: SHL EDI,0x10
// 004e2e28: SHL ECX,0x8
// 004e2e2b: OR ECX,EDI
// 004e2e2d: OR ECX,EAX
// 004e2e2f: MOV EAX,dword ptr [ESP + 0xa10]
//   XREF to: Stack[-0x20] (READ)
// 004e2e36: MOV dword ptr [ESP + EAX*0x1],ECX
// 004e2e39: JMP 0x004e2ab6
//   XREF to: 004e2ab6 (UNCONDITIONAL_JUMP)
// 004e2e3e: MOV DL,byte ptr [EDX]
//   Label: LAB_004e2e3e
// 004e2e40: MOV EBP,dword ptr [EDI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004e2e46: AND EDX,0xff
// 004e2e4c: MOV EAX,dword ptr [ESP + EDX*0x4]
// 004e2e4f: MOV dword ptr [EBX + EBP*0x1],EAX
// 004e2e52: JMP 0x004e2c8d
//   XREF to: 004e2c8d (UNCONDITIONAL_JUMP)
// 004e2e57: MOV ECX,dword ptr [ESP + 0xa34]
//   Label: LAB_004e2e57
//   XREF to: Stack[0x4] (READ)
// 004e2e5e: MOV EBP,dword ptr [ECX + 0x48]
// 004e2e61: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004e2e66: PUSH EBP
// 004e2e67: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004e2e69: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004e2e6a: CALL dword ptr [EDX]
// 004e2e6c: ADD ESP,0x8
// 004e2e6f: TEST EAX,EAX
// 004e2e71: JNZ 0x004e2d0e
//   XREF to: 004e2d0e (CONDITIONAL_JUMP)
// 004e2e77: CMP EBX,dword ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 004e2e7d: JNZ 0x004e2d0e
//   XREF to: 004e2d0e (CONDITIONAL_JUMP)
// 004e2e83: JMP 0x004e2ce3
//   XREF to: 004e2ce3 (UNCONDITIONAL_JUMP)
// 004e2e88: MOV ECX,dword ptr [ESP + 0xa34]
//   Label: LAB_004e2e88
//   XREF to: Stack[0x4] (READ)
// 004e2e8f: MOV ESI,dword ptr [ECX + 0x48]
// 004e2e92: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004e2e97: PUSH ESI
// 004e2e98: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004e2e9a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004e2e9b: CALL dword ptr [EDX]
// 004e2e9d: ADD ESP,0x8
// 004e2ea0: TEST EAX,EAX
// 004e2ea2: JNZ 0x004e2d1c
//   XREF to: 004e2d1c (CONDITIONAL_JUMP)
// 004e2ea8: MOV EDI,dword ptr [ESP + 0xa34]
// 004e2eaf: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e2eb4: PUSH EDI
// 004e2eb5: CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   XREF to: 004dce70 (UNCONDITIONAL_CALL)
// 004e2eba: ADD ESP,0x4
// 004e2ebd: PUSH EDI
// 004e2ebe: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 004e2ec3: ADD ESP,0x4
// 004e2ec6: PUSH 0x1057
// 004e2ecb: PUSH 0x62d352
//   XREF to: 0062d352 (DATA)
// 004e2ed0: MOV EAX,dword ptr [ESP + 0xa20]
// 004e2ed7: PUSH EAX
// 004e2ed8: MOV byte ptr [EDI + 0x8b4],0x0
// 004e2edf: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004e2ee4: ADD ESP,0xc
// 004e2ee7: ADD ESP,0xa20
// 004e2eed: POP EBP
// 004e2eee: POP EDI
// 004e2eef: POP ESI
// 004e2ef0: POP EBX
// 004e2ef1: RET
// 004e2ef2: PUSH EAX
//   Label: LAB_004e2ef2
// 004e2ef3: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 004e2ef8: ADD ESP,0x4
// 004e2efb: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004e2f00: JMP 0x004e2d10
//   XREF to: 004e2d10 (UNCONDITIONAL_JUMP)
