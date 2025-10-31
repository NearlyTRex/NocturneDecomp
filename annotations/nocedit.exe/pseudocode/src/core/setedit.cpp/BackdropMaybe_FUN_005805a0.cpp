// Name: core_setedit.cpp_BackdropMaybe_FUN_005805a0
// Address: 005805a0
// Address Range: [[005805a0, 00580722]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_BackdropMaybe_FUN_005805a0()
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579502 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580df7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_backdrop_s_fog_006485b2
//   TerminatedCString s_backdrop_s_pvs_006485c2
//   TerminatedCString s_core_setedit_cpp_006485d2
//   TerminatedCString s_Computing_fog_pvs_d_of_d_006485e6
//   TerminatedCString s_Not_all_fog_files_were_c_00648618
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CDemonLightInstance.light_enabled_flag
//   CGame g_CGameInstance
//   void* g_CKeysPtr
// Function calls:
//   core_game.cpp_CGame_setGameRes_FUN_004dade0
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   core_set.cpp_CDemonSet_FUN_0056c1a0
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_BackdropMaybe(undefined4 param_1) */

void core_setedit_cpp_BackdropMaybe_FUN_005805a0(void)

{
  int *ptr;
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  CDemonSet *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  CDemonSet *in_stack_00000004;
  char acStack_70 [4];
  char acStack_6c [92];
  
  iVar4 = 0;
  g_CDemonLightInstance.light_enabled_flag = 0;
  pCVar3 = in_stack_00000004;
  if (0 < in_stack_00000004->camera_count) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe8c,"backdrop\\%s.fog");
      crt_io_c_deleteFile_FUN_005ff9d0(&stack0xfffffe7c);
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe80,"backdrop\\%s.pvs");
      crt_io_c_deleteFile_FUN_005ff9d0(&stack0xfffffe84);
      ptr = pCVar3->cameras[0].pvs_list;
      pCVar3->cameras[0].pvs_count = 0;
      if (ptr != (int *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\setedit.cpp",0x1059);
        pCVar3->cameras[0].pvs_list = (int *)0x0;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)&pCVar3->cameras[0].field17_0x1a0;
    } while (iVar4 < in_stack_00000004->camera_count);
  }
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar4 = 0;
  if (0 < in_stack_00000004->camera_count) {
    do {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(in_stack_00000004,iVar4);
      core_set_cpp_CDemonSet_FUN_0056c1a0(in_stack_00000004);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_70,"Computing fog/pvs %d of %d.  Press ESC to cancel.");
      engine_2d_c_drawText_FUN_00401fd0(acStack_6c,1,1);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      while (bVar1 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(),
            CONCAT31(extraout_var,bVar1) != 0) {
        iVar2 = engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
        if (iVar2 == 0x1b) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Not all fog files were computed.");
          goto LAB_005806ec;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_stack_00000004->camera_count);
  }
LAB_005806ec:
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
  return;
}


// Assembly code:
// 005805a0: PUSH EBX
//   Label: core_setedit.cpp_BackdropMaybe_FUN_005805a0
// 005805a1: PUSH ESI
// 005805a2: PUSH EDI
// 005805a3: PUSH EBP
// 005805a4: SUB ESP,0x164
// 005805aa: MOV ESI,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 005805b1: MOV ECX,dword ptr [ESI]
// 005805b3: XOR EDX,EDX
// 005805b5: XOR EBP,EBP
// 005805b7: MOV dword ptr [0x02d807a4],EDX
//   XREF to: 02d807a4 (WRITE)
// 005805bd: TEST ECX,ECX
// 005805bf: JLE 0x0058064a
//   XREF to: 0058064a (CONDITIONAL_JUMP)
// 005805c5: LEA EDI,[ESI + 0x4]
// 005805c8: MOV EBX,ESI
// 005805ca: PUSH EDI
//   Label: LAB_005805ca
// 005805cb: PUSH 0x6485b2
//   XREF to: 006485b2 (DATA)
// 005805d0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x174] (DATA)
// 005805d4: PUSH EAX
// 005805d5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005805da: ADD ESP,0xc
// 005805dd: MOV EAX,ESP
// 005805df: PUSH EAX
// 005805e0: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 005805e5: ADD ESP,0x4
// 005805e8: PUSH EDI
// 005805e9: PUSH 0x6485c2
//   XREF to: 006485c2 (DATA)
// 005805ee: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x174] (DATA)
// 005805f2: PUSH EAX
// 005805f3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005805f8: ADD ESP,0xc
// 005805fb: MOV EAX,ESP
// 005805fd: PUSH EAX
// 005805fe: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00580603: ADD ESP,0x4
// 00580606: MOV EAX,dword ptr [EBX + 0x19c]
// 0058060c: MOV dword ptr [EBX + 0x198],0x0
// 00580616: TEST EAX,EAX
// 00580618: JZ 0x00580637
//   XREF to: 00580637 (CONDITIONAL_JUMP)
// 0058061a: PUSH 0x1059
// 0058061f: PUSH 0x6485d2
//   XREF to: 006485d2 (DATA)
// 00580624: PUSH EAX
// 00580625: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0058062a: ADD ESP,0xc
// 0058062d: MOV dword ptr [EBX + 0x19c],0x0
// 00580637: ADD EBX,0x1a4
//   Label: LAB_00580637
// 0058063d: INC EBP
// 0058063e: MOV EAX,dword ptr [ESI]
// 00580640: ADD EDI,0x1a4
// 00580646: CMP EBP,EAX
// 00580648: JL 0x005805ca
//   XREF to: 005805ca (CONDITIONAL_JUMP)
// 0058064a: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_0058064a
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00580650: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 00580651: CALL core_game.cpp_CGame_setGameRes_FUN_004dade0
//   XREF to: 004dade0 (UNCONDITIONAL_CALL)
// 00580656: ADD ESP,0x4
// 00580659: PUSH ESI
// 0058065a: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0058065f: ADD ESP,0x4
// 00580662: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00580667: MOV ECX,dword ptr [ESI]
// 00580669: XOR EBX,EBX
// 0058066b: TEST ECX,ECX
// 0058066d: JLE 0x005806ec
//   XREF to: 005806ec (CONDITIONAL_JUMP)
// 00580673: PUSH EBX
//   Label: LAB_00580673
// 00580674: PUSH ESI
// 00580675: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0058067a: ADD ESP,0x8
// 0058067d: PUSH 0x0
// 0058067f: PUSH ESI
// 00580680: CALL core_set.cpp_CDemonSet_FUN_0056c1a0
//   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)
// 00580685: ADD ESP,0x8
// 00580688: MOV EDI,dword ptr [ESI]
// 0058068a: PUSH EDI
// 0058068b: PUSH EBX
// 0058068c: PUSH 0x6485e6
//   XREF to: 006485e6 (DATA)
// 00580691: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x74] (DATA)
// 00580698: PUSH EAX
// 00580699: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0058069e: ADD ESP,0x10
// 005806a1: PUSH 0x1
// 005806a3: PUSH 0x1
// 005806a5: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x74] (DATA)
// 005806ac: PUSH EAX
// 005806ad: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005806b2: ADD ESP,0xc
// 005806b5: XOR EDI,EDI
// 005806b7: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005806bc: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_005806bc
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 005806c1: TEST EAX,EAX
// 005806c3: JZ 0x00580714
//   XREF to: 00580714 (CONDITIONAL_JUMP)
// 005806c5: MOV EBP,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005806cb: PUSH EBP
//   XREF to: 02dcd7d4 (DATA)
// 005806cc: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 005806d1: ADD ESP,0x4
// 005806d4: CMP EAX,0x1b
// 005806d7: JNZ 0x005806bc
//   XREF to: 005806bc (CONDITIONAL_JUMP)
// 005806d9: PUSH 0x648618
//   XREF to: 00648618 (DATA)
// 005806de: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005806e3: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005806e4: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 005806e9: ADD ESP,0x8
// 005806ec: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_005806ec
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005806f1: PUSH ESI
// 005806f2: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 005806f7: ADD ESP,0x4
// 005806fa: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00580700: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 00580701: CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   XREF to: 004daed0 (UNCONDITIONAL_CALL)
// 00580706: ADD ESP,0x4
// 00580709: ADD ESP,0x164
// 0058070f: POP EBP
// 00580710: POP EDI
// 00580711: POP ESI
// 00580712: POP EBX
// 00580713: RET
// 00580714: TEST EDI,EDI
//   Label: LAB_00580714
// 00580716: JNZ 0x005806ec
//   XREF to: 005806ec (CONDITIONAL_JUMP)
// 00580718: INC EBX
// 00580719: CMP EBX,dword ptr [ESI]
// 0058071b: JL 0x00580673
//   XREF to: 00580673 (CONDITIONAL_JUMP)
// 00580721: JMP 0x005806ec
//   XREF to: 005806ec (UNCONDITIONAL_JUMP)
