// Name: core_boneguy.cpp_FUN_0041b860
// Address: 0041b860
// Address Range: [[0041b860, 0041b8bd] [0041b9a3, 0041b9ab]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041b860()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_boneguy_cpp_FUN_0041b860(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_20;
  
  fVar1 = *in_stack_00000008;
  fVar2 = in_stack_00000008[1];
  fVar3 = in_stack_00000008[2];
  local_20 = fVar1;
  if (fVar2 < fVar1) {
    local_20 = fVar2;
  }
  if (fVar3 < local_20) {
    local_20 = fVar3;
  }
  local_30 = fVar1;
  if (fVar1 < fVar2) {
    local_30 = fVar2;
  }
  if (local_30 < fVar3) {
    local_30 = fVar3;
  }
  local_20 = local_30 - local_20;
  if (local_30 <= 0.0) {
    fStack_38 = 0.0;
  }
  else {
    fStack_38 = local_20 / local_30;
  }
  if (fStack_38 <= 0.0) {
    fStack_34 = 0.0;
  }
  else {
    fStack_38 = fStack_38 * (float)_DAT_00615f45;
    if (fVar1 == local_30) {
      local_20 = (fVar2 - fVar3) / local_20;
    }
    else if (fVar2 == local_30) {
      local_20 = (float)_DAT_00615f55 - (fVar3 - fVar1) / local_20;
    }
    else {
      local_20 = (fVar1 - fVar2) / local_20 + (float)_DAT_00615f4d;
    }
    fStack_34 = local_20 * (float)_DAT_00615f5d;
    if (fStack_34 < 0.0) {
      fStack_34 = fStack_34 + _DAT_00615f65;
    }
  }
  *in_stack_00000004 = fStack_34;
  in_stack_00000004[1] = fStack_38;
  in_stack_00000004[2] = local_30;
  return in_stack_00000004;
}


// Assembly code:
// 0041b860: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041b860
// 0041b861: PUSH EBP
// 0041b862: MOV EBP,ESP
// 0041b864: SUB ESP,0x34
// 0041b867: AND ESP,0xfffffff8
// 0041b86a: MOV EDX,dword ptr [EBP + 0xc]
// 0041b86d: MOV EAX,dword ptr [EBP + 0x10]
// 0041b870: MOV ECX,dword ptr [EAX]
// 0041b872: MOV dword ptr [ESP + 0x28],ECX
// 0041b876: MOV ECX,dword ptr [EAX + 0x4]
// 0041b879: MOV EAX,dword ptr [EAX + 0x8]
// 0041b87c: MOV dword ptr [ESP + 0x2c],ECX
// 0041b880: MOV dword ptr [ESP + 0x24],EAX
// 0041b884: MOV EAX,dword ptr [ESP + 0x28]
// 0041b888: FLD float ptr [ESP + 0x2c]
// 0041b88c: MOV dword ptr [ESP + 0x20],EAX
// 0041b890: FCOMP float ptr [ESP + 0x28]
// 0041b894: FNSTSW AX
// 0041b896: SAHF
// 0041b897: JC 0x0041b9a3
//   XREF to: 0041b9a3 (CONDITIONAL_JUMP)
// 0041b89d: FLD float ptr [ESP + 0x24]
//   Label: LAB_0041b89d
// 0041b8a1: FCOMP float ptr [ESP + 0x20]
// 0041b8a5: FNSTSW AX
// 0041b8a7: SAHF
// 0041b8a8: JNC 0x0041b8b2
//   XREF to: 0041b8b2 (CONDITIONAL_JUMP)
// 0041b8aa: MOV EAX,dword ptr [ESP + 0x24]
// 0041b8ae: MOV dword ptr [ESP + 0x20],EAX
// 0041b8b2: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0041b8b2
// 0041b8b6: FLD float ptr [ESP + 0x2c]
// 0041b8ba: MOV dword ptr [ESP + 0x10],EAX
// 0041b9a3: MOV dword ptr [ESP + 0x20],ECX
//   Label: LAB_0041b9a3
// 0041b9a7: JMP 0x0041b89d
//   XREF to: 0041b89d (UNCONDITIONAL_JUMP)
