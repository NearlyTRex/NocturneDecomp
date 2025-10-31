// Name: wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
// Address: 005f35e0
// Address Range: [[005f35e0, 005f3670]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0(void)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d810 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db679 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 004473f8 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 (005eda20) at 005edc43 [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4d0f [UNCONDITIONAL_CALL]
// Globals:
//   DispatchMessageA* PTR_DispatchMessageA_0061149c = 00211a9e
//   PeekMessageA* PTR_PeekMessageA_006114d0 = 00211b70
//   TranslateMessage* PTR_TranslateMessage_006114f8 = 00211c14
//   Sleep* Sleep = 00212228
//   int g_WindowActive = -0x1
//   int g_ForceMessagePump = 0x1
//   char[256] g_KeyboardState
//   undefined4 CHAR_ARRAY_02d03e99
//   int g_InputDisabled
//   undefined4 g_MessageFlags[1]
//   undefined4 g_MessageFlags[2]
// Function calls:
//   DispatchMessageA
//   PeekMessageA
//   Sleep
//   TranslateMessage

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  DWORD DStack_18;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)((int)g_MessageFlags + iVar3 + 4) == 1) {
      g_KeyboardState[iVar1] = '\0';
    }
    iVar1 = iVar1 + 1;
    *(undefined4 *)((int)g_MessageFlags + iVar3 + 4) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while( true ) {
      BVar2 = (*PTR_PeekMessageA_006114d0)((LPMSG)&stack0xffffffd8,(HWND)0x0,0,0,1);
      if (BVar2 == 0) break;
      DStack_18 = 0x5f3627;
      (*PTR_TranslateMessage_006114f8)((MSG *)&stack0xffffffd8);
      (*PTR_DispatchMessageA_0061149c)((MSG *)&stack0xfffffff8);
    }
    if (((g_WindowActive != 0) || (g_InputDisabled != 0)) || (g_ForceMessagePump == 0)) break;
    DStack_18 = 0x5f3668;
    (*Sleep)(0x14);
  }
  return;
}


// Assembly code:
// 005f35e0: PUSH EBX
//   Label: wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
// 005f35e1: PUSH ESI
// 005f35e2: PUSH EDI
// 005f35e3: SUB ESP,0x1c
// 005f35e6: XOR EDX,EDX
// 005f35e8: XOR EAX,EAX
// 005f35ea: XOR EBX,EBX
// 005f35ec: CMP dword ptr [EDX + 0x3f9847c],0x1
//   Label: LAB_005f35ec
//   XREF to: 03f9847c (READ)
//   XREF to: 03f98480 (READ)
// 005f35f3: JZ 0x005f3633
//   XREF to: 005f3633 (CONDITIONAL_JUMP)
// 005f35f5: ADD EDX,0x4
//   Label: LAB_005f35f5
// 005f35f8: INC EAX
// 005f35f9: MOV dword ptr [EDX + 0x3f98478],EBX
//   XREF to: 03f9847c (WRITE)
//   XREF to: 03f98480 (WRITE)
// 005f35ff: CMP EAX,0x258
// 005f3604: JL 0x005f35ec
//   XREF to: 005f35ec (CONDITIONAL_JUMP)
// 005f3606: XOR EBX,EBX
// 005f3608: PUSH 0x1
//   Label: LAB_005f3608
// 005f360a: PUSH EBX
// 005f360b: PUSH EBX
// 005f360c: PUSH EBX
// 005f360d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 005f3611: PUSH EAX
// 005f3612: CALL dword ptr CS:[0x6114d0]
//   XREF to: EXTERNAL:00000040 (COMPUTED_CALL)
//   XREF to: 006114d0 (READ)
// 005f3619: TEST EAX,EAX
// 005f361b: JZ 0x005f363b
//   XREF to: 005f363b (CONDITIONAL_JUMP)
// 005f361d: MOV EAX,ESP
// 005f361f: PUSH EAX
// 005f3620: CALL dword ptr CS:[0x6114f8]
//   XREF to: EXTERNAL:0000004a (COMPUTED_CALL)
//   XREF to: 006114f8 (READ)
// 005f3627: MOV EAX,ESP
// 005f3629: PUSH EAX
// 005f362a: CALL dword ptr CS:[0x61149c]
//   XREF to: EXTERNAL:00000033 (COMPUTED_CALL)
//   XREF to: 0061149c (READ)
// 005f3631: JMP 0x005f3608
//   XREF to: 005f3608 (UNCONDITIONAL_JUMP)
// 005f3633: MOV byte ptr [EAX + 0x2d03e98],BL
//   Label: LAB_005f3633
//   XREF to: 02d03e98 (WRITE)
//   XREF to: 02d03e99 (WRITE)
// 005f3639: JMP 0x005f35f5
//   XREF to: 005f35f5 (UNCONDITIONAL_JUMP)
// 005f363b: MOV ESI,dword ptr [0x006849a4]
//   Label: LAB_005f363b
//   XREF to: 006849a4 (READ)
// 005f3641: CMP EBX,ESI
// 005f3643: JNZ 0x005f366a
//   XREF to: 005f366a (CONDITIONAL_JUMP)
// 005f3645: MOV EDI,dword ptr [0x03f9846c]
//   XREF to: 03f9846c (READ)
// 005f364b: CMP ESI,EDI
// 005f364d: JNZ 0x005f366a
//   XREF to: 005f366a (CONDITIONAL_JUMP)
// 005f364f: CMP EDI,dword ptr [0x006849a8]
//   XREF to: 006849a8 (READ)
// 005f3655: JZ 0x005f366a
//   XREF to: 005f366a (CONDITIONAL_JUMP)
// 005f3657: CMP EDI,dword ptr [0x006849a4]
//   XREF to: 006849a4 (READ)
// 005f365d: JNZ 0x005f3608
//   XREF to: 005f3608 (CONDITIONAL_JUMP)
// 005f365f: PUSH 0x14
// 005f3661: CALL dword ptr CS:[0x611644]
//   XREF to: EXTERNAL:0000009c (COMPUTED_CALL)
//   XREF to: 00611644 (READ)
// 005f3668: JMP 0x005f3608
//   XREF to: 005f3608 (UNCONDITIONAL_JUMP)
// 005f366a: ADD ESP,0x1c
//   Label: LAB_005f366a
// 005f366d: POP EDI
// 005f366e: POP ESI
// 005f366f: POP EBX
// 005f3670: RET
