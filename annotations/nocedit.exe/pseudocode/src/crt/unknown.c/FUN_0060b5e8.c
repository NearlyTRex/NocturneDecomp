// Name: crt_unknown.c_FUN_0060b5e8
// Address: 0060b5e8
// Address Range: [[0060b5e8, 0060b628]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b5e8()
// Cross-references:
//   crt_unknown.c_FUN_0060b586 (0060b586) at 0060b5d2 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: void FUN_0060b5e8(undefined4 param_1, uint param_2, uint param_3) */

undefined8 crt_unknown_c_FUN_0060b5e8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBP;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if ((param_1 != 0 || param_2 != 0) || unaff_EBP != 0) {
    uVar1 = param_1;
    uVar4 = unaff_EBP;
    if (param_2 == 0) {
      uVar4 = 0;
      uVar1 = unaff_EBP;
      param_2 = param_1;
    }
    uVar2 = uVar1;
    uVar3 = param_2;
    uVar5 = uVar4;
    if (param_2 == 0) {
      uVar5 = 0;
      uVar2 = uVar4;
      uVar3 = uVar1;
    }
    for (; -1 < (int)uVar3; uVar3 = uVar3 * 2 + (uint)(bVar7 || CARRY4(uVar1,(uint)bVar6))) {
      bVar6 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2;
      bVar7 = CARRY4(uVar2,uVar2);
      uVar1 = uVar2 * 2;
      uVar2 = uVar1 + bVar6;
    }
    param_1 = uVar2 + CARRY4(uVar5,uVar5);
    uVar1 = (uint)CARRY4(uVar2,(uint)CARRY4(uVar5,uVar5));
    param_2 = uVar3 + uVar1;
    if (CARRY4(uVar3,uVar1)) {
      param_2 = param_2 >> 1 | (uint)CARRY4(uVar3,uVar1) << 0x1f;
    }
  }
  return CONCAT44(param_2,param_1);
}


// Assembly code:
// 0060b5e8: SUB ESI,ESI
//   Label: crt_unknown.c_FUN_0060b5e8
// 0060b5ea: OR ESI,EAX
// 0060b5ec: OR ESI,EDX
// 0060b5ee: OR ESI,EBP
// 0060b5f0: JZ 0x0060b628
//   XREF to: 0060b628 (CONDITIONAL_JUMP)
// 0060b5f2: OR EDX,EDX
// 0060b5f4: JNZ 0x0060b5ff
//   XREF to: 0060b5ff (CONDITIONAL_JUMP)
// 0060b5f6: MOV EDX,EAX
// 0060b5f8: MOV EAX,EBP
// 0060b5fa: SUB EBP,EBP
// 0060b5fc: SUB EDI,0x20
// 0060b5ff: OR EDX,EDX
//   Label: LAB_0060b5ff
// 0060b601: JNZ 0x0060b60c
//   XREF to: 0060b60c (CONDITIONAL_JUMP)
// 0060b603: MOV EDX,EAX
// 0060b605: MOV EAX,EBP
// 0060b607: SUB EBP,EBP
// 0060b609: SUB EDI,0x20
// 0060b60c: OR EDX,EDX
//   Label: LAB_0060b60c
// 0060b60e: JS 0x0060b619
//   XREF to: 0060b619 (CONDITIONAL_JUMP)
// 0060b610: DEC EDI
// 0060b611: ADD EBP,EBP
// 0060b613: ADC EAX,EAX
// 0060b615: ADC EDX,EDX
// 0060b617: JMP 0x0060b60c
//   XREF to: 0060b60c (UNCONDITIONAL_JUMP)
// 0060b619: ADD EBP,EBP
//   Label: LAB_0060b619
// 0060b61b: ADC EAX,0x0
// 0060b61e: ADC EDX,0x0
// 0060b621: JNC 0x0060b626
//   XREF to: 0060b626 (CONDITIONAL_JUMP)
// 0060b623: RCR EDX,0x1
// 0060b625: INC EDI
// 0060b626: MOV ESI,EDI
//   Label: LAB_0060b626
// 0060b628: RET
//   Label: LAB_0060b628
