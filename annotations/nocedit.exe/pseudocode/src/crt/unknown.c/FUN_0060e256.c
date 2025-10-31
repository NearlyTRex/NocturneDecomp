// Name: crt_unknown.c_FUN_0060e256
// Address: 0060e256
// Address Range: [[0060e256, 0060e28d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060e256()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060be80 (0060be80) at 0060bee7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined8 crt_unknown_c_FUN_0060e256(uint param_1,uint param_2,uint unaff_EBX,uint param_4)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 & 0x7ff00000) == 0) {
    param_2 = 0;
  }
  if ((param_4 & 0x7ff00000) == 0) {
    param_4 = 0;
  }
  iVar1 = 0;
  if (-1 < (int)(param_4 ^ param_2)) {
    bVar2 = param_2 < param_4;
    if (param_2 == param_4) {
      bVar2 = param_1 < unaff_EBX;
    }
    if (param_2 == param_4 && param_1 == unaff_EBX) goto LAB_0060e28a;
    param_2 = param_2 ^ (param_4 >> 1 | (uint)bVar2 << 0x1f);
  }
  bVar2 = CARRY4(param_2,param_2);
  param_2 = param_2 * 2;
  iVar1 = (uint)bVar2 * -2 + 1;
LAB_0060e28a:
  return CONCAT44(param_2,iVar1);
}


// Assembly code:
// 0060e256: PUSH EBP
//   Label: crt_unknown.c_FUN_0060e256
// 0060e257: TEST EDX,0x7ff00000
// 0060e25d: JNZ 0x0060e261
//   XREF to: 0060e261 (CONDITIONAL_JUMP)
// 0060e25f: SUB EDX,EDX
// 0060e261: TEST ECX,0x7ff00000
//   Label: LAB_0060e261
// 0060e267: JNZ 0x0060e26b
//   XREF to: 0060e26b (CONDITIONAL_JUMP)
// 0060e269: SUB ECX,ECX
// 0060e26b: MOV EBP,ECX
//   Label: LAB_0060e26b
// 0060e26d: XOR EBP,EDX
// 0060e26f: MOV EBP,0x0
// 0060e274: JS 0x0060e282
//   XREF to: 0060e282 (CONDITIONAL_JUMP)
// 0060e276: CMP EDX,ECX
// 0060e278: JNZ 0x0060e27c
//   XREF to: 0060e27c (CONDITIONAL_JUMP)
// 0060e27a: CMP EAX,EBX
// 0060e27c: JZ 0x0060e28a
//   Label: LAB_0060e27c
//   XREF to: 0060e28a (CONDITIONAL_JUMP)
// 0060e27e: RCR ECX,0x1
// 0060e280: XOR EDX,ECX
// 0060e282: ADD EDX,EDX
//   Label: LAB_0060e282
// 0060e284: SBB EBP,0x0
// 0060e287: ADD EBP,EBP
// 0060e289: INC EBP
// 0060e28a: MOV EAX,EBP
//   Label: LAB_0060e28a
// 0060e28c: POP EBP
// 0060e28d: RET
