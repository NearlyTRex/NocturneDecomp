// Name: core_skeledit.cpp_FUN_0058e3e0
// Address: 0058e3e0
// Address Range: [[0058e3e0, 0058e4df]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e3e0()
// Cross-references:
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00597f44 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_FUN_0058e3e0(int* param_1, float param_2, undefined4 param_3)
    */

void core_skeledit_cpp_FUN_0058e3e0(void)

{
  float *pfVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *in_stack_0000000c;
  float in_stack_00000010;
  int local_10;
  int iStackY_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  local_10 = 0;
  if (0 < *in_stack_0000000c) {
    iStackY_c = 0;
    do {
      iVar6 = 0;
      for (iVar4 = 0; iVar4 < *(int *)((int)in_stack_0000000c + iStackY_c + 0x2c); iVar4 = iVar4 + 1
          ) {
        pbVar3 = (byte *)(*(int *)((int)in_stack_0000000c + iStackY_c + 0x40) + iVar6);
        pfVar1 = (float *)(pbVar3 + 0x10);
        for (iVar2 = 0; iVar2 < (int)(uint)*pbVar3; iVar2 = iVar2 + 1) {
          pfVar1[1] = pfVar1[1] * in_stack_00000010;
          pfVar1[2] = pfVar1[2] * in_stack_00000010;
          *pfVar1 = *pfVar1 * in_stack_00000010;
          pfVar1 = pfVar1 + 3;
        }
        iVar6 = iVar6 + 0x34;
      }
      iStackY_c = iStackY_c + 4;
      local_10 = local_10 + 1;
    } while (local_10 < *in_stack_0000000c);
  }
  pfVar1 = (float *)(in_stack_0000000c + 0x1f24);
  do {
    pfVar5 = pfVar1 + 3;
    pfVar1[1] = pfVar1[1] * in_stack_00000010;
    pfVar1[2] = pfVar1[2] * in_stack_00000010;
    *pfVar1 = *pfVar1 * in_stack_00000010;
    pfVar1 = pfVar5;
  } while (pfVar5 != (float *)(in_stack_0000000c + 0x2050));
  in_stack_0000000c[0x1f21] = (int)((float)in_stack_0000000c[0x1f21] * in_stack_00000010);
  in_stack_0000000c[0x1f22] = (int)((float)in_stack_0000000c[0x1f22] * in_stack_00000010);
  in_stack_0000000c[0x1f23] = (int)((float)in_stack_0000000c[0x1f23] * in_stack_00000010);
  return;
}


// Assembly code:
// 0058e3e0: PUSH 0x1c
//   Label: core_skeledit.cpp_FUN_0058e3e0
// 0058e3e5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058e3ea: PUSH ESI
// 0058e3eb: PUSH EDI
// 0058e3ec: PUSH EBP
// 0058e3ed: SUB ESP,0xc
// 0058e3f0: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0058e3f4: PUSH EBX
// 0058e3f5: XOR EDX,EDX
// 0058e3f7: MOV ECX,dword ptr [EBP]
// 0058e3fa: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0058e3fe: TEST ECX,ECX
// 0058e400: JLE 0x0058e471
//   XREF to: 0058e471 (CONDITIONAL_JUMP)
// 0058e402: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0058e406: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0058e406
//   XREF to: Stack[-0x14] (READ)
// 0058e40a: XOR EDI,EDI
// 0058e40c: XOR ESI,ESI
// 0058e40e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0058e412: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0058e412
//   XREF to: Stack[-0x10] (READ)
// 0058e416: ADD EAX,EBP
// 0058e418: CMP ESI,dword ptr [EAX + 0x2c]
// 0058e41b: JGE 0x0058e456
//   XREF to: 0058e456 (CONDITIONAL_JUMP)
// 0058e41d: MOV EBX,dword ptr [EAX + 0x40]
// 0058e420: ADD EBX,EDI
// 0058e422: XOR EDX,EDX
// 0058e424: LEA EAX,[EBX + 0x10]
// 0058e427: XOR ECX,ECX
//   Label: LAB_0058e427
// 0058e429: MOV CL,byte ptr [EBX]
// 0058e42b: CMP EDX,ECX
// 0058e42d: JGE 0x0058e4d7
//   XREF to: 0058e4d7 (CONDITIONAL_JUMP)
// 0058e433: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0058e437: FLD float ptr [EAX]
// 0058e439: FMUL ST1
// 0058e43b: FLD float ptr [EAX + 0x4]
// 0058e43e: FMUL ST2
// 0058e440: FLD float ptr [EAX + 0x8]
// 0058e443: FMULP ST3
// 0058e445: ADD EAX,0xc
// 0058e448: INC EDX
// 0058e449: FSTP float ptr [EAX + -0x8]
// 0058e44c: FXCH
// 0058e44e: FSTP float ptr [EAX + -0x4]
// 0058e451: FSTP float ptr [EAX + -0xc]
// 0058e454: JMP 0x0058e427
//   XREF to: 0058e427 (UNCONDITIONAL_JUMP)
// 0058e456: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_0058e456
//   XREF to: Stack[-0x14] (READ)
// 0058e45a: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0058e45e: MOV EDI,dword ptr [EBP]
// 0058e461: ADD EBX,0x4
// 0058e464: INC ESI
// 0058e465: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0058e469: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0058e46d: CMP ESI,EDI
// 0058e46f: JL 0x0058e406
//   XREF to: 0058e406 (CONDITIONAL_JUMP)
// 0058e471: LEA EDI,[EBP + 0x7c90]
//   Label: LAB_0058e471
// 0058e477: MOV ESI,EDI
// 0058e479: ADD EDI,0x4b0
// 0058e47f: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0058e483: POP EBX
// 0058e484: FLD float ptr [ESI]
//   Label: LAB_0058e484
// 0058e486: FMUL ST1
// 0058e488: FLD float ptr [ESI + 0x4]
// 0058e48b: FMUL ST2
// 0058e48d: FLD float ptr [ESI + 0x8]
// 0058e490: ADD ESI,0xc
// 0058e493: FMUL ST3
// 0058e495: FXCH
// 0058e497: FSTP float ptr [ESI + -0x8]
// 0058e49a: FSTP float ptr [ESI + -0x4]
// 0058e49d: FSTP float ptr [ESI + -0xc]
// 0058e4a0: CMP ESI,EDI
// 0058e4a2: JNZ 0x0058e484
//   XREF to: 0058e484 (CONDITIONAL_JUMP)
// 0058e4a4: FLD float ptr [EBP + 0x7c84]
// 0058e4aa: FMUL ST1
// 0058e4ac: FLD float ptr [EBP + 0x7c88]
// 0058e4b2: FMUL ST2
// 0058e4b4: FLD float ptr [EBP + 0x7c8c]
// 0058e4ba: FMULP ST3
// 0058e4bc: FXCH
// 0058e4be: FSTP float ptr [EBP + 0x7c84]
// 0058e4c4: FSTP float ptr [EBP + 0x7c88]
// 0058e4ca: FSTP float ptr [EBP + 0x7c8c]
// 0058e4d0: ADD ESP,0xc
// 0058e4d3: POP EBP
// 0058e4d4: POP EDI
// 0058e4d5: POP ESI
// 0058e4d6: RET
// 0058e4d7: INC ESI
//   Label: LAB_0058e4d7
// 0058e4d8: ADD EDI,0x34
// 0058e4db: JMP 0x0058e412
//   XREF to: 0058e412 (UNCONDITIONAL_JUMP)
