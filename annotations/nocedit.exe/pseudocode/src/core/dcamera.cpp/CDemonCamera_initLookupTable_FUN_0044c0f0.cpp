// Name: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
// Address: 0044c0f0
// Address Range: [[0044c0f0, 0044c187]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056aa65 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowHeight = 0xc8
//   char[4096] g_CameraLookupTable
//   undefined4 DAT_013d9759
// Function calls:
//   core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0
//   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
//   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(this_ptr,0x10000);
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(this_ptr,g_WindowHeight);
  core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_004529a0(this_ptr);
  iVar6 = 0;
  iVar7 = 0x40;
  iVar8 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar6 << 6;
    do {
      iVar1 = (iVar2 + (iVar2 >> 0x1f) * -0x10) - (uint)((iVar2 >> 0x1f) << 3 < 0);
      iVar3 = iVar1 >> 0x1f;
      iVar5 = iVar4 + 1;
      iVar2 = iVar2 + iVar8;
      g_CameraLookupTable[iVar4] =
           (char)((int)(((iVar1 >> 4) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
      iVar4 = iVar5;
    } while (iVar5 != iVar7);
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 0x40;
  } while (iVar6 < 0x40);
  return;
}


// Assembly code:
// 0044c0f0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
// 0044c0f1: PUSH ESI
// 0044c0f2: PUSH EDI
// 0044c0f3: PUSH EBP
// 0044c0f4: SUB ESP,0x8
// 0044c0f7: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0044c0fb: PUSH 0x10000
// 0044c100: PUSH EBX
// 0044c101: CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
//   XREF to: 00453bd0 (UNCONDITIONAL_CALL)
// 0044c106: ADD ESP,0x8
// 0044c109: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0044c10f: PUSH EDX
// 0044c110: PUSH EBX
// 0044c111: CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
//   XREF to: 0044c190 (UNCONDITIONAL_CALL)
// 0044c116: ADD ESP,0x8
// 0044c119: PUSH EBX
// 0044c11a: CALL core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0
//   XREF to: 004529a0 (UNCONDITIONAL_CALL)
// 0044c11f: MOV ECX,0x40
// 0044c124: ADD ESP,0x4
// 0044c127: XOR EBP,EBP
// 0044c129: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 0044c12c: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0044c130: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_0044c130
//   XREF to: Stack[-0x14] (READ)
// 0044c134: MOV EBX,EBP
// 0044c136: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0044c139: SHL EBX,0x6
// 0044c13c: IMUL ECX,EBP,0x0
// 0044c13f: MOV EDX,ECX
//   Label: LAB_0044c13f
// 0044c141: MOV EAX,ECX
// 0044c143: SAR EDX,0x1f
// 0044c146: SHL EDX,0x4
// 0044c149: SBB EAX,EDX
// 0044c14b: SAR EAX,0x4
// 0044c14e: MOV EDX,EAX
// 0044c150: SAR EDX,0x1f
// 0044c153: SHL EDX,0x2
// 0044c156: SBB EAX,EDX
// 0044c158: SAR EAX,0x2
// 0044c15b: INC EBX
// 0044c15c: ADD ECX,ESI
// 0044c15e: MOV byte ptr [EBX + 0x13d9757],AL
//   XREF to: 013d9758 (WRITE)
//   XREF to: 013d9759 (WRITE)
// 0044c164: CMP EBX,EDI
// 0044c166: JNZ 0x0044c13f
//   XREF to: 0044c13f (CONDITIONAL_JUMP)
// 0044c168: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0044c16c: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0044c16f: INC EBP
// 0044c170: INC EDI
// 0044c171: ADD ESI,0x40
// 0044c174: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0044c178: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 0044c17b: CMP EBP,0x40
// 0044c17e: JL 0x0044c130
//   XREF to: 0044c130 (CONDITIONAL_JUMP)
// 0044c180: ADD ESP,0x8
// 0044c183: POP EBP
// 0044c184: POP EDI
// 0044c185: POP ESI
// 0044c186: POP EBX
// 0044c187: RET
