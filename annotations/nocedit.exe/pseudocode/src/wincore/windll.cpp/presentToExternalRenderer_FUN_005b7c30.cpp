// Name: wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
// Address: 005b7c30
// Address Range: [[005b7c30, 005b7cfb]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004dbab6 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 (005eda20) at 005edb08 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_UseExternalRenderer
//   APIDLL_toggle* g_APIDLL_toggle
//   int g_ExternalFrameLocked
// Function calls:
//   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   wincore_windll.cpp_lockFrame_FUN_005b7210
//   wincore_windll.cpp_unlockFrame_FUN_005b7250

#include "nocturne.h"

void __cdecl wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int local_8;
  
  puVar4 = (undefined4 *)g_ScreenBufferArray[0];
  bVar7 = 0;
  if (g_UseExternalRenderer == 0) {
    return;
  }
  if ((skip_buffer_copy == 0) && (g_ExternalFrameLocked == 0)) {
    iVar3 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
    uVar1 = (int)((g_WindowWidth * g_BitsPerPixel + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    local_8 = 0;
    if (0 < g_WindowHeight) {
      iVar3 = 0;
      do {
        puVar5 = puVar4;
        puVar6 = *(undefined4 **)((int)g_ScreenBufferArray + iVar3);
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        iVar3 = iVar3 + 4;
        local_8 = local_8 + 1;
        puVar4 = (undefined4 *)((int)puVar4 + uVar1);
      } while (local_8 < g_WindowHeight);
    }
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
  }
  g_ExternalFrameLocked = 0;
  (*g_APIDLL_toggle)();
  return;
}


// Assembly code:
// 005b7c30: PUSH EBP
//   Label: wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
// 005b7c31: SUB ESP,0x4
// 005b7c34: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7c3b: JZ 0x005b7cf5
//   XREF to: 005b7cf5 (CONDITIONAL_JUMP)
// 005b7c41: PUSH EDI
// 005b7c42: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[0x4] (READ)
// 005b7c47: JNZ 0x005b7ce1
//   XREF to: 005b7ce1 (CONDITIONAL_JUMP)
// 005b7c4d: CMP dword ptr [0x03f6b99c],0x0
//   XREF to: 03f6b99c (READ)
// 005b7c54: JNZ 0x005b7ce1
//   XREF to: 005b7ce1 (CONDITIONAL_JUMP)
// 005b7c5a: PUSH ESI
// 005b7c5b: PUSH EBX
// 005b7c5c: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005b7c62: MOV ESI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005b7c68: IMUL EDX,ESI
// 005b7c6b: MOV EAX,EDX
// 005b7c6d: SAR EDX,0x1f
// 005b7c70: SHL EDX,0x3
// 005b7c73: SBB EAX,EDX
// 005b7c75: SAR EAX,0x3
// 005b7c78: MOV EBX,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 005b7c7e: XOR EDI,EDI
// 005b7c80: MOV EBP,EAX
// 005b7c82: CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   XREF to: 005ed580 (UNCONDITIONAL_CALL)
// 005b7c87: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 005b7c8c: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 005b7c91: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x8] (WRITE)
// 005b7c95: TEST EAX,EAX
// 005b7c97: JLE 0x005b7cd0
//   XREF to: 005b7cd0 (CONDITIONAL_JUMP)
// 005b7c99: XOR EDX,EDX
// 005b7c9b: MOV ECX,EBP
//   Label: LAB_005b7c9b
// 005b7c9d: MOV ESI,EBX
// 005b7c9f: MOV EDI,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 005b7ca5: PUSH EDI
// 005b7ca6: MOV EAX,ECX
// 005b7ca8: SHR ECX,0x2
// 005b7cab: MOVSD.REP ES:EDI,ESI
// 005b7cad: MOV CL,AL
// 005b7caf: AND CL,0x3
// 005b7cb2: MOVSB.REP ES:EDI,ESI
// 005b7cb4: POP EDI
// 005b7cb5: ADD EDX,0x4
// 005b7cb8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 005b7cbc: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005b7cc2: INC ECX
// 005b7cc3: ADD EBX,EBP
// 005b7cc5: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 005b7cc9: CMP ECX,ESI
// 005b7ccb: JL 0x005b7c9b
//   XREF to: 005b7c9b (CONDITIONAL_JUMP)
// 005b7ccd: LEA EAX,[EAX]
// 005b7cd0: PUSH 0x0
//   Label: LAB_005b7cd0
// 005b7cd2: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 005b7cd7: ADD ESP,0x4
// 005b7cda: CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   XREF to: 005ed630 (UNCONDITIONAL_CALL)
// 005b7cdf: POP EBX
// 005b7ce0: POP ESI
// 005b7ce1: XOR EDI,EDI
//   Label: LAB_005b7ce1
// 005b7ce3: MOV dword ptr [0x03f6b99c],EDI
//   XREF to: 03f6b99c (WRITE)
// 005b7ce9: CALL dword ptr [g_APIDLL_toggle]
//   XREF to: 03f6b894 (READ)
// 005b7cef: POP EDI
// 005b7cf0: ADD ESP,0x4
// 005b7cf3: POP EBP
// 005b7cf4: RET
// 005b7cf5: XOR EAX,EAX
//   Label: LAB_005b7cf5
// 005b7cf7: ADD ESP,0x4
// 005b7cfa: POP EBP
// 005b7cfb: RET
