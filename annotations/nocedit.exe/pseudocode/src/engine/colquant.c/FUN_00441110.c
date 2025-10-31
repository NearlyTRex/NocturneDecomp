// Name: engine_colquant.c_FUN_00441110
// Address: 00441110
// Address Range: [[00441110, 00441257]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00441110()
// Cross-references:
//   engine_colquant.c_FUN_00440b40 (00440b40) at 00440c62 [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_00440c80 (00440c80) at 00440da4 [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_00440dc0 (00440dc0) at 00440ee4 [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_00440f00 (00440f00) at 00441024 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_colquant.c_FUN_00441040
//   engine_colquant.c_FUN_00441260

#include "nocturne.h"

void engine_colquant_c_FUN_00441110(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 uStack_1c;
  int local_14;
  
  iVar4 = *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008 * 0x40);
  iVar3 = *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008 * 0x40) + iVar4 + -1;
  if (iVar4 < iVar3) {
    local_14 = iVar4 * 4;
    do {
      engine_colquant_c_FUN_00441040();
      dVar5 = (double)engine_colquant_c_FUN_00441040();
      if (dVar5 < (double)CONCAT44(uStack_1c,extraout_EDX)) {
        for (; iVar4 < iVar3; iVar3 = iVar3 + -1) {
          engine_colquant_c_FUN_00441040();
          dVar6 = (double)engine_colquant_c_FUN_00441040();
          uStack_1c = (undefined4)((ulonglong)dVar6 >> 0x20);
          if ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),extraout_EDX_00) <= dVar6) break;
        }
        puVar2 = (undefined4 *)(local_14 + *(int *)(in_stack_00000004 + 0x2004));
        uVar1 = *puVar2;
        *puVar2 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x2004) + iVar3 * 4);
        *(undefined4 *)(iVar3 * 4 + *(int *)(in_stack_00000004 + 0x2004)) = uVar1;
      }
      local_14 = local_14 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  in_stack_00000008 = in_stack_00000008 * 0x40;
  *(int *)(in_stack_0000000c * 0x40 + 0x4040 + in_stack_00000004) = iVar3;
  *(int *)(in_stack_0000000c * 0x40 + 0x4044 + in_stack_00000004) =
       *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008) -
       (iVar3 - *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008));
  *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008) =
       iVar3 - *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008);
  engine_colquant_c_FUN_00441260();
  engine_colquant_c_FUN_00441260();
  return;
}


// Assembly code:
// 00441110: PUSH EBX
//   Label: engine_colquant.c_FUN_00441110
// 00441111: PUSH ESI
// 00441112: PUSH EDI
// 00441113: PUSH EBP
// 00441114: SUB ESP,0x18
// 00441117: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0044111b: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0044111f: MOV EAX,EBP
// 00441121: SHL EAX,0x6
// 00441124: MOV EDI,dword ptr [ESI + EAX*0x1 + 0x4040]
// 0044112b: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4044]
// 00441132: ADD EBX,EDI
// 00441134: DEC EBX
// 00441135: CMP EDI,EBX
// 00441137: JGE 0x004411fc
//   XREF to: 004411fc (CONDITIONAL_JUMP)
// 0044113d: LEA EAX,[EDI*0x4 + 0x0]
// 00441144: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00441148: PUSH EDI
//   Label: LAB_00441148
// 00441149: PUSH EBP
// 0044114a: PUSH ESI
// 0044114b: CALL engine_colquant.c_FUN_00441040
//   XREF to: 00441040 (UNCONDITIONAL_CALL)
// 00441150: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00441154: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00441158: ADD ESP,0xc
// 0044115b: PUSH EDI
// 0044115c: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00441160: PUSH ECX
// 00441161: PUSH ESI
// 00441162: CALL engine_colquant.c_FUN_00441040
//   XREF to: 00441040 (UNCONDITIONAL_CALL)
// 00441167: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0044116b: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0044116f: FLD double ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 00441173: ADD ESP,0xc
// 00441176: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044117a: FNSTSW AX
// 0044117c: SAHF
// 0044117d: JNC 0x004411e8
//   XREF to: 004411e8 (CONDITIONAL_JUMP)
// 0044117f: CMP EDI,EBX
//   Label: LAB_0044117f
// 00441181: JGE 0x004411bc
//   XREF to: 004411bc (CONDITIONAL_JUMP)
// 00441183: PUSH EBX
// 00441184: PUSH EBP
// 00441185: PUSH ESI
// 00441186: CALL engine_colquant.c_FUN_00441040
//   XREF to: 00441040 (UNCONDITIONAL_CALL)
// 0044118b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0044118f: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00441193: ADD ESP,0xc
// 00441196: PUSH EBX
// 00441197: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0044119b: PUSH EAX
// 0044119c: PUSH ESI
// 0044119d: CALL engine_colquant.c_FUN_00441040
//   XREF to: 00441040 (UNCONDITIONAL_CALL)
// 004411a2: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004411a6: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004411aa: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 004411ae: ADD ESP,0xc
// 004411b1: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004411b4: FNSTSW AX
// 004411b6: SAHF
// 004411b7: JNC 0x004411bc
//   XREF to: 004411bc (CONDITIONAL_JUMP)
// 004411b9: DEC EBX
// 004411ba: JMP 0x0044117f
//   XREF to: 0044117f (UNCONDITIONAL_JUMP)
// 004411bc: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_004411bc
//   XREF to: Stack[-0x14] (READ)
// 004411c0: MOV EDX,dword ptr [ESI + 0x2004]
// 004411c6: ADD ECX,EDX
// 004411c8: MOV EAX,dword ptr [ECX]
// 004411ca: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004411ce: LEA EAX,[EBX*0x4 + 0x0]
// 004411d5: MOV EDX,dword ptr [EDX + EAX*0x1]
// 004411d8: MOV dword ptr [ECX],EDX
// 004411da: MOV EDX,dword ptr [ESI + 0x2004]
// 004411e0: ADD EAX,EDX
// 004411e2: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004411e6: MOV dword ptr [EAX],EDX
// 004411e8: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_004411e8
//   XREF to: Stack[-0x14] (READ)
// 004411ec: ADD EDX,0x4
// 004411ef: INC EDI
// 004411f0: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004411f4: CMP EDI,EBX
// 004411f6: JL 0x00441148
//   XREF to: 00441148 (CONDITIONAL_JUMP)
// 004411fc: MOV EDX,dword ptr [ESP + 0x34]
//   Label: LAB_004411fc
//   XREF to: Stack[0xc] (READ)
// 00441200: MOV EAX,EBP
// 00441202: SHL EDX,0x6
// 00441205: SHL EAX,0x6
// 00441208: MOV dword ptr [EDX + ESI*0x1 + 0x4040],EBX
// 0044120f: MOV EDI,EBX
// 00441211: SUB EDI,dword ptr [ESI + EAX*0x1 + 0x4040]
// 00441218: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4044]
// 0044121f: SUB ECX,EDI
// 00441221: MOV dword ptr [EDX + ESI*0x1 + 0x4044],ECX
// 00441228: MOV EDI,dword ptr [ESI + EAX*0x1 + 0x4040]
// 0044122f: PUSH EBP
// 00441230: SUB EBX,EDI
// 00441232: PUSH ESI
// 00441233: MOV dword ptr [ESI + EAX*0x1 + 0x4044],EBX
// 0044123a: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 0044123f: ADD ESP,0x8
// 00441242: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00441246: PUSH EBP
// 00441247: PUSH ESI
// 00441248: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 0044124d: ADD ESP,0x8
// 00441250: ADD ESP,0x18
// 00441253: POP EBP
// 00441254: POP EDI
// 00441255: POP ESI
// 00441256: POP EBX
// 00441257: RET
