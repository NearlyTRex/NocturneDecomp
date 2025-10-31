// Name: crt_unknown.c_FUN_0060b190
// Address: 0060b190
// Address Range: [[0060b190, 0060b1b6]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b190()
// Cross-references:
//   crt_unknown.c_FUN_006047a4 (006047a4) at 006047cc [UNCONDITIONAL_CALL]

#include "nocturne.h"

ushort crt_unknown_c_FUN_0060b190(void)

{
  byte bVar2;
  ushort uVar1;
  float10 fVar3;
  float10 fVar4;
  
  fVar4 = (float10)1 / (float10)0;
  fVar3 = -fVar4;
  bVar2 = fVar3 < fVar4 | (byte)((ushort)((ushort)(NAN(fVar3) || NAN(fVar4)) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar3 == fVar4) << 0xe) >> 8);
  uVar1 = CONCAT11(bVar2,2);
  if ((uVar1 & 0x4000) == 0) {
    uVar1 = CONCAT11(bVar2,3);
  }
  LOCK();
  UNLOCK();
  return uVar1;
}


// Assembly code:
// 0060b190: PUSH AX
//   Label: crt_unknown.c_FUN_0060b190
// 0060b192: FINIT
// 0060b195: FLD1
// 0060b197: FLDZ
// 0060b199: FDIVP
// 0060b19b: FLD ST0
// 0060b19d: FCHS
// 0060b19f: FCOMPP
// 0060b1a1: FNSTSW AX
// 0060b1a3: MOV AL,0x2
// 0060b1a5: SAHF
// 0060b1a6: JZ 0x0060b1aa
//   XREF to: 0060b1aa (CONDITIONAL_JUMP)
// 0060b1a8: MOV AL,0x3
// 0060b1aa: FINIT
//   Label: LAB_0060b1aa
// 0060b1ad: FLDCW word ptr [ESP]
//   XREF to: Stack[-0x2] (DATA)
// 0060b1b0: XCHG word ptr [ESP],AX
//   XREF to: Stack[-0x2] (DATA)
// 0060b1b4: POP AX
// 0060b1b6: RET
