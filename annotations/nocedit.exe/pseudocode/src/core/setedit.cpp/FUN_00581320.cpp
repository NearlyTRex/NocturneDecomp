// Name: core_setedit.cpp_FUN_00581320
// Address: 00581320
// Address Range: [[00581320, 00581447]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00581320()
// Cross-references:
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580de6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Getting_ready_006489b9
//   TerminatedCString s_Computing_fog_for_camera_006489c7
//   TerminatedCString s_backdrop_s_fog_006489e3
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
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
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

void core_setedit_cpp_FUN_00581320(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  
  g_CDemonLightInstance.light_enabled_flag = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Getting ready");
  core_game_cpp_CGame_setGameRes_FUN_004dade0(g_CGamePtr);
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
  do {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Computing fog for camera %s");
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff00,"backdrop\\%s.fog",
               in_stack_00000004->cameras + in_stack_00000008);
    crt_io_c_deleteFile_FUN_005ff9d0(&stack0xffffff04);
    do {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(in_stack_00000004,in_stack_00000008);
      core_set_cpp_CDemonSet_FUN_0056c1a0(in_stack_00000004);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
      if (iVar1 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
        core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
        return;
      }
      iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    } while (iVar1 == 0);
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (iVar1 == 0) {
      in_stack_00000008 = in_stack_00000008 + 1;
      if (in_stack_00000004->camera_count <= in_stack_00000008) {
        in_stack_00000008 = 0;
      }
    }
    else {
      in_stack_00000008 = in_stack_00000008 + -1;
      if (in_stack_00000008 < 0) {
        in_stack_00000008 = in_stack_00000004->camera_count + -1;
      }
    }
  } while( true );
}


// Assembly code:
// 00581320: PUSH EBX
//   Label: core_setedit.cpp_FUN_00581320
// 00581321: PUSH ESI
// 00581322: PUSH EDI
// 00581323: PUSH EBP
// 00581324: SUB ESP,0x100
// 0058132a: MOV EBX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 00581331: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 00581338: PUSH 0x6489b9
//   XREF to: 006489b9 (DATA)
// 0058133d: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00581343: XOR EDX,EDX
// 00581345: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00581346: MOV dword ptr [0x02d807a4],EDX
//   XREF to: 02d807a4 (WRITE)
// 0058134c: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00581351: ADD ESP,0x8
// 00581354: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0058135a: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 0058135b: CALL core_game.cpp_CGame_setGameRes_FUN_004dade0
//   XREF to: 004dade0 (UNCONDITIONAL_CALL)
// 00581360: ADD ESP,0x4
// 00581363: PUSH EBX
// 00581364: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 00581369: ADD ESP,0x4
// 0058136c: LEA EBP,[EBX + 0x4]
// 0058136f: IMUL EDI,ESI,0x1a4
//   Label: LAB_0058136f
// 00581375: ADD EDI,EBP
// 00581377: PUSH EDI
// 00581378: PUSH 0x6489c7
//   XREF to: 006489c7 (DATA)
// 0058137d: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00581382: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00581383: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00581388: ADD ESP,0xc
// 0058138b: PUSH EDI
// 0058138c: PUSH 0x6489e3
//   XREF to: 006489e3 (DATA)
// 00581391: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 00581395: PUSH EAX
// 00581396: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0058139b: ADD ESP,0xc
// 0058139e: MOV EAX,ESP
// 005813a0: PUSH EAX
// 005813a1: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 005813a6: ADD ESP,0x4
// 005813a9: XOR EDI,EDI
// 005813ab: PUSH ESI
//   Label: LAB_005813ab
// 005813ac: PUSH EBX
// 005813ad: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 005813b2: ADD ESP,0x8
// 005813b5: PUSH EDI
// 005813b6: PUSH EBX
// 005813b7: CALL core_set.cpp_CDemonSet_FUN_0056c1a0
//   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)
// 005813bc: ADD ESP,0x8
// 005813bf: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005813c4: PUSH 0x1
// 005813c6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005813cb: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005813cc: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005813ce: CALL dword ptr [EDX + 0x4]
// 005813d1: ADD ESP,0x8
// 005813d4: TEST EAX,EAX
// 005813d6: JNZ 0x00581420
//   XREF to: 00581420 (CONDITIONAL_JUMP)
// 005813d8: PUSH 0x2e
// 005813da: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005813df: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005813e0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005813e2: CALL dword ptr [EDX + 0x4]
// 005813e5: ADD ESP,0x8
// 005813e8: TEST EAX,EAX
// 005813ea: JZ 0x005813ab
//   XREF to: 005813ab (CONDITIONAL_JUMP)
// 005813ec: PUSH 0x2a
// 005813ee: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005813f3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005813f4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005813f6: CALL dword ptr [EDX]
// 005813f8: ADD ESP,0x8
// 005813fb: TEST EAX,EAX
// 005813fd: JZ 0x00581410
//   XREF to: 00581410 (CONDITIONAL_JUMP)
// 005813ff: DEC ESI
// 00581400: TEST ESI,ESI
// 00581402: JGE 0x0058136f
//   XREF to: 0058136f (CONDITIONAL_JUMP)
// 00581408: MOV ESI,dword ptr [EBX]
// 0058140a: DEC ESI
// 0058140b: JMP 0x0058136f
//   XREF to: 0058136f (UNCONDITIONAL_JUMP)
// 00581410: INC ESI
//   Label: LAB_00581410
// 00581411: CMP ESI,dword ptr [EBX]
// 00581413: JL 0x0058136f
//   XREF to: 0058136f (CONDITIONAL_JUMP)
// 00581419: XOR ESI,ESI
// 0058141b: JMP 0x0058136f
//   XREF to: 0058136f (UNCONDITIONAL_JUMP)
// 00581420: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_00581420
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00581425: PUSH EBX
// 00581426: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0058142b: ADD ESP,0x4
// 0058142e: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00581434: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 00581435: CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   XREF to: 004daed0 (UNCONDITIONAL_CALL)
// 0058143a: ADD ESP,0x4
// 0058143d: ADD ESP,0x100
// 00581443: POP EBP
// 00581444: POP EDI
// 00581445: POP ESI
// 00581446: POP EBX
// 00581447: RET
