// Name: core_set.cpp_CDemonSet_FUN_0056aca0
// Address: 0056aca0
// Address Range: [[0056aca0, 0056add9]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056bfc6 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cb18 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b600 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005713c0 (005713c0) at 005713d8 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056d380
//   core_set.cpp_CDemonSet_FUN_00570ca0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056aca0(CDemonSet *this_ptr)

{
  int iVar1;
  undefined4 *puVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonSet *pCVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < *(int *)this_ptr->field73_0x15f6e4) {
    do {
      iVar1 = *(int *)(pCVar4->field73_0x15f6e4 + 4);
      puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x154) + 0x14))();
      if (&uStack_28 != puVar2) {
        uStack_28 = *puVar2;
        uStack_24 = puVar2[1];
        uStack_20 = puVar2[2];
      }
      if (&uStack_1c != puVar2 + 3) {
        uStack_1c = puVar2[3];
        uStack_18 = puVar2[4];
        uStack_14 = puVar2[5];
      }
      core_set_cpp_CDemonSet_FUN_0056d380(this_ptr);
      core_set_cpp_CDemonSet_FUN_00570ca0(this_ptr);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x10))();
      core_set_cpp_CDemonSet_FUN_00570ca0(this_ptr);
      iVar3 = iVar3 + 1;
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < *(int *)this_ptr->field73_0x15f6e4);
  }
  return;
}


// Assembly code:
// 0056aca0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056aca0
// 0056aca1: PUSH ESI
// 0056aca2: PUSH EDI
// 0056aca3: PUSH EBP
// 0056aca4: SUB ESP,0x30
// 0056aca7: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0056acab: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (DATA)
//   XREF to: 0067d550 (READ)
// 0056acb0: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0056acb4: JNZ 0x0056adb6
//   XREF to: 0056adb6 (CONDITIONAL_JUMP)
// 0056acba: MOV EBX,dword ptr [ESI + 0x15f6e4]
//   Label: LAB_0056acba
// 0056acc0: XOR EBP,EBP
// 0056acc2: TEST EBX,EBX
// 0056acc4: JLE 0x0056adae
//   XREF to: 0056adae (CONDITIONAL_JUMP)
// 0056acca: MOV EDI,ESI
// 0056accc: MOV EAX,ESP
//   Label: LAB_0056accc
// 0056acce: MOV EBX,dword ptr [EDI + 0x15f6e8]
// 0056acd4: PUSH EAX
// 0056acd5: MOV EDX,dword ptr [EBX + 0x154]
// 0056acdb: PUSH EBX
// 0056acdc: CALL dword ptr [EDX + 0x14]
// 0056acdf: MOV EDX,EAX
// 0056ace1: MOV ECX,EAX
// 0056ace3: LEA EAX,[ESP + 0x20]
// 0056ace7: ADD ESP,0x8
// 0056acea: CMP EAX,EDX
// 0056acec: JNZ 0x0056adc1
//   XREF to: 0056adc1 (CONDITIONAL_JUMP)
// 0056acf2: LEA EAX,[ESP + 0x24]
//   Label: LAB_0056acf2
// 0056acf6: LEA EDX,[ECX + 0xc]
// 0056acf9: CMP EAX,EDX
// 0056acfb: JZ 0x0056ad11
//   XREF to: 0056ad11 (CONDITIONAL_JUMP)
// 0056acfd: MOV EAX,dword ptr [EDX]
// 0056acff: MOV dword ptr [ESP + 0x24],EAX
// 0056ad03: MOV EAX,dword ptr [EDX + 0x4]
// 0056ad06: MOV dword ptr [ESP + 0x28],EAX
// 0056ad0a: MOV EAX,dword ptr [EDX + 0x8]
// 0056ad0d: MOV dword ptr [ESP + 0x2c],EAX
// 0056ad11: LEA EAX,[EBX + 0x3c]
//   Label: LAB_0056ad11
// 0056ad14: PUSH EAX
// 0056ad15: LEA EAX,[ESP + 0x28]
// 0056ad19: PUSH EAX
// 0056ad1a: LEA EAX,[ESP + 0x20]
// 0056ad1e: PUSH EAX
// 0056ad1f: LEA EAX,[EBX + 0x30]
// 0056ad22: PUSH EAX
// 0056ad23: LEA EAX,[EBX + 0x20]
// 0056ad26: PUSH EAX
// 0056ad27: PUSH ESI
// 0056ad28: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 0056ad2d: ADD ESP,0x18
// 0056ad30: MOV EAX,dword ptr [EBX + 0x110]
// 0056ad36: PUSH EAX
// 0056ad37: MOV EDX,dword ptr [EBX + 0x10c]
// 0056ad3d: PUSH EDX
// 0056ad3e: MOV ECX,dword ptr [EBX + 0x108]
// 0056ad44: PUSH ECX
// 0056ad45: PUSH ESI
// 0056ad46: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 0056ad4b: ADD ESP,0x10
// 0056ad4e: PUSH 0xffff
// 0056ad53: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056ad58: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0056ad59: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0056ad5e: ADD ESP,0x8
// 0056ad61: MOV EDX,dword ptr [ESP + 0x48]
// 0056ad65: PUSH EDX
// 0056ad66: MOV EAX,dword ptr [EBX + 0x154]
// 0056ad6c: PUSH EBX
// 0056ad6d: CALL dword ptr [EAX + 0x10]
// 0056ad70: ADD ESP,0x8
// 0056ad73: PUSH 0x10000
// 0056ad78: PUSH 0x10000
// 0056ad7d: PUSH 0x10000
// 0056ad82: PUSH ESI
// 0056ad83: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 0056ad88: ADD ESP,0x10
// 0056ad8b: PUSH 0x1
// 0056ad8d: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056ad93: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0056ad94: ADD EDI,0x4
// 0056ad97: INC EBP
// 0056ad98: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056ad9d: MOV EBX,dword ptr [ESI + 0x15f6e4]
// 0056ada3: ADD ESP,0x8
// 0056ada6: CMP EBP,EBX
// 0056ada8: JL 0x0056accc
//   XREF to: 0056accc (CONDITIONAL_JUMP)
// 0056adae: ADD ESP,0x30
//   Label: LAB_0056adae
// 0056adb1: POP EBP
// 0056adb2: POP EDI
// 0056adb3: POP ESI
// 0056adb4: POP EBX
// 0056adb5: RET
// 0056adb6: XOR ECX,ECX
//   Label: LAB_0056adb6
// 0056adb8: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[0x8] (WRITE)
// 0056adbc: JMP 0x0056acba
//   XREF to: 0056acba (UNCONDITIONAL_JUMP)
// 0056adc1: MOV EAX,dword ptr [EDX]
//   Label: LAB_0056adc1
// 0056adc3: MOV dword ptr [ESP + 0x18],EAX
// 0056adc7: MOV EAX,dword ptr [EDX + 0x4]
// 0056adca: MOV dword ptr [ESP + 0x1c],EAX
// 0056adce: MOV EAX,dword ptr [EDX + 0x8]
// 0056add1: MOV dword ptr [ESP + 0x20],EAX
// 0056add5: JMP 0x0056acf2
//   XREF to: 0056acf2 (UNCONDITIONAL_JUMP)
