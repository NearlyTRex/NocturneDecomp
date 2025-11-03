// Name: core_skeleton.cpp_FUN_005a1ed0
// Address: 005a1ed0
// Address Range: [[005a1ed0, 005a1f66]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a1ed0()
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da862 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_skeletons_d_bytes_d_mo_0064f0e6
//   int g_DeformableModelCount
//   CDeformableModel[64] g_DeformableModelPool
//   undefined4 DAT_036958a0
//   int g_SkeletonPoolCount
//   CSkeleton[40] g_SkeletonPool
//   undefined4 DAT_038f60d0
// Function calls:
//   core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140
//   core_skeleton.cpp_FUN_0059dd60
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void core_skeleton_cpp_FUN_005a1ed0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CSkeleton *this_ptr;
  int iVar4;
  char *in_stack_00000004;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < g_SkeletonPoolCount) {
    this_ptr = g_SkeletonPool;
    do {
      param_1 = core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140(this_ptr);
      iVar2 = iVar2 + 1;
      this_ptr = this_ptr + 1;
      iVar3 = iVar3 + param_1;
    } while (iVar2 < g_SkeletonPoolCount);
  }
  iVar2 = 0;
  iVar4 = 0;
  if (0 < g_DeformableModelCount) {
    do {
      iVar1 = core_skeleton_cpp_FUN_0059dd60(param_1);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + iVar1;
      param_1 = g_DeformableModelCount;
    } while (iVar2 < g_DeformableModelCount);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (in_stack_00000004,"%d skeletons, %d bytes, %d models, %d bytes",g_SkeletonPoolCount,iVar3,
             g_DeformableModelCount,iVar4);
  return;
}


// Assembly code:
// 005a1ed0: PUSH EBX
//   Label: core_skeleton.cpp_FUN_005a1ed0
// 005a1ed1: PUSH ESI
// 005a1ed2: PUSH EDI
// 005a1ed3: PUSH EBP
// 005a1ed4: MOV EDX,dword ptr [0x038cc8a0]
//   XREF to: 038cc8a0 (READ)
// 005a1eda: XOR EBX,EBX
// 005a1edc: XOR EBP,EBP
// 005a1ede: TEST EDX,EDX
// 005a1ee0: JLE 0x005a1f10
//   XREF to: 005a1f10 (CONDITIONAL_JUMP)
// 005a1ee2: MOV ESI,0x38cc8a4
//   XREF to: 038cc8a4 (DATA)
// 005a1ee7: PUSH ESI
//   Label: LAB_005a1ee7
//   XREF to: 038cc8a4 (DATA)
//   XREF to: 038f60d0 (DATA)
// 005a1ee8: CALL core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140
//   XREF to: 0059a140 (UNCONDITIONAL_CALL)
// 005a1eed: INC EBX
// 005a1eee: MOV ECX,dword ptr [0x038cc8a0]
//   XREF to: 038cc8a0 (READ)
// 005a1ef4: ADD ESP,0x4
// 005a1ef7: ADD ESI,0x2982c
// 005a1efd: ADD EBP,EAX
// 005a1eff: CMP EBX,ECX
// 005a1f01: JL 0x005a1ee7
//   XREF to: 005a1ee7 (CONDITIONAL_JUMP)
// 005a1f03: LEA EAX,[EAX]
// 005a1f09: LEA EDX,[EDX]
// 005a1f0f: NOP
// 005a1f10: MOV ESI,dword ptr [0x0368c89c]
//   Label: LAB_005a1f10
//   XREF to: 0368c89c (READ)
// 005a1f16: XOR EBX,EBX
// 005a1f18: XOR EDI,EDI
// 005a1f1a: TEST ESI,ESI
// 005a1f1c: JLE 0x005a1f40
//   XREF to: 005a1f40 (CONDITIONAL_JUMP)
// 005a1f1e: MOV ESI,0x368c8a0
//   XREF to: 0368c8a0 (DATA)
// 005a1f23: PUSH ESI
//   Label: LAB_005a1f23
//   XREF to: 0368c8a0 (DATA)
//   XREF to: 036958a0 (DATA)
// 005a1f24: CALL core_skeleton.cpp_FUN_0059dd60
//   XREF to: 0059dd60 (UNCONDITIONAL_CALL)
// 005a1f29: INC EBX
// 005a1f2a: ADD ESP,0x4
// 005a1f2d: ADD EDI,EAX
// 005a1f2f: MOV EAX,[0x0368c89c]
//   XREF to: 0368c89c (READ)
// 005a1f34: ADD ESI,0x9000
// 005a1f3a: CMP EBX,EAX
// 005a1f3c: JL 0x005a1f23
//   XREF to: 005a1f23 (CONDITIONAL_JUMP)
// 005a1f3e: MOV EAX,EAX
// 005a1f40: PUSH EDI
//   Label: LAB_005a1f40
// 005a1f41: MOV EDX,dword ptr [0x0368c89c]
//   XREF to: 0368c89c (READ)
// 005a1f47: PUSH EDX
// 005a1f48: PUSH EBP
// 005a1f49: MOV ECX,dword ptr [0x038cc8a0]
//   XREF to: 038cc8a0 (READ)
// 005a1f4f: PUSH ECX
// 005a1f50: PUSH 0x64f0e6
//   XREF to: 0064f0e6 (DATA)
// 005a1f55: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a1f59: PUSH EBX
// 005a1f5a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005a1f5f: ADD ESP,0x18
// 005a1f62: POP EBP
// 005a1f63: POP EDI
// 005a1f64: POP ESI
// 005a1f65: POP EBX
// 005a1f66: RET
