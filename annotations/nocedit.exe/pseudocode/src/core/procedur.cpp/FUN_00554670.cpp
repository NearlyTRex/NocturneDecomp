// Name: core_procedur.cpp_FUN_00554670
// Address: 00554670
// Address Range: [[00554670, 0055487b]]
// Convention: unknown
// Signature: undefined core_procedur.cpp_FUN_00554670()
// Cross-references:
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 00554411 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00640a0c = -32
//   float FLOAT_00640a10 = 0.03125
//   double DOUBLE_00640a18 = 3.14159000000000
//   double DOUBLE_00640a20 = 16
//   double DOUBLE_00640a28 = 0.0078125
//   double DOUBLE_00640a30 = 128
//   undefined4 DAT_030f6158
//   undefined1 DAT_030f6159
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void core_procedur_cpp_FUN_00554670(void)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  ushort uVar5;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  int in_stack_00000004;
  float in_stack_0000000c;
  float in_stack_00000010;
  float local_38;
  float local_28;
  int iStack_24;
  int local_1c;
  int local_14;
  
  iVar7 = 0;
  pvVar3 = crt_memory_c_memset_FUN_005fde40(&DAT_030f6158,0,0x10000);
  do {
    iVar6 = 0;
    do {
      fVar2 = (float)DOUBLE_00640a30 - (float)iVar6;
      fVar1 = (float)DOUBLE_00640a30 - (float)iVar7;
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
      uVar5 = (ushort)((uint)pvVar3 >> 0x10);
      pvVar3 = (void *)((uint)uVar5 << 0x10);
      if ((fVar1 <= local_28) &&
         (pvVar3 = (void *)CONCAT22(uVar5,(ushort)(fVar1 < in_stack_00000010) << 8 |
                                          (ushort)(NAN(fVar1) || NAN(in_stack_00000010)) << 10 |
                                          (ushort)(fVar1 == in_stack_00000010) << 0xe),
         fVar1 >= in_stack_00000010)) {
        fVar8 = (float10)fsin(((float10)local_38 - (float10)SQRT(fVar1)) * (float10)FLOAT_00640a10 *
                              (float10)DOUBLE_00640a18);
        fVar8 = ((float10)DOUBLE_00640a30 - (float10)local_38) * fVar8 * (float10)DOUBLE_00640a20 *
                (float10)DOUBLE_00640a28;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,pvVar3));
        iVar6 = (int)((ulonglong)dVar9 >> 0x20);
        pvVar3 = (void *)CONCAT31((int3)((ulonglong)dVar9 >> 8),(char)(int)ROUND(fVar8));
        (&DAT_030f6158)[extraout_ECX_00] = (char)(int)ROUND(fVar8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x100);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x100);
  iStack_24 = 0;
  do {
    iVar6 = 0;
    iVar7 = in_stack_00000004;
    do {
      fVar8 = (float10)iStack_24;
      dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,iStack_24));
      fVar8 = fVar8 - (float10)in_stack_0000000c;
      dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
      local_14 = (int)ROUND(fVar8);
      iVar6 = iStack_24;
      if (iStack_24 < 0) {
        iVar6 = iStack_24 + 0x100;
      }
      if (0xff < iVar6) {
        iVar6 = iVar6 + -0x100;
      }
      if (local_14 < 0) {
        local_14 = local_14 + 0x100;
      }
      if (0xff < local_14) {
        local_14 = local_14 + -0x100;
      }
      uVar4 = (uint)*(byte *)(iVar7 + 8) + (uint)(byte)(&DAT_030f6158)[local_14 * 0x100 + iVar6];
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      iVar7 = iVar7 + 1;
      iVar6 = (int)((ulonglong)dVar9 >> 0x20) + 1;
      *(char *)(extraout_ECX + 8) = (char)uVar4;
    } while (iVar6 < 0x100);
    local_1c = local_1c + 1;
    iStack_24 = iStack_24 + 0x100;
  } while (local_1c < 0x100);
  return;
}


// Assembly code:
// 00554670: PUSH EBX
//   Label: core_procedur.cpp_FUN_00554670
// 00554671: PUSH ESI
// 00554672: PUSH EDI
// 00554673: PUSH EBP
// 00554674: MOV EBP,ESP
// 00554676: SUB ESP,0x30
// 00554679: AND ESP,0xfffffff8
// 0055467c: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0055467f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00554683: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00554687: FADD float ptr [0x00640a0c]
//   XREF to: 00640a0c (READ)
// 0055468d: FST float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00554690: FLDZ
// 00554692: FCOMPP
// 00554694: FNSTSW AX
// 00554696: SAHF
// 00554697: JBE 0x0055469e
//   XREF to: 0055469e (CONDITIONAL_JUMP)
// 00554699: XOR EDX,EDX
// 0055469b: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0055469e: FLD float ptr [ESP]
//   Label: LAB_0055469e
//   XREF to: Stack[-0x40] (DATA)
// 005546a1: FMUL ST0
// 005546a3: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 005546a7: FMUL ST0
// 005546a9: PUSH 0x10000
// 005546ae: XOR EBX,EBX
// 005546b0: XOR ESI,ESI
// 005546b2: PUSH 0x0
// 005546b4: FXCH
// 005546b6: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 005546ba: PUSH 0x30f6158
//   XREF to: 030f6158 (DATA)
// 005546bf: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (WRITE)
// 005546c3: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005546c8: ADD ESP,0xc
// 005546cb: MOV ECX,ESI
//   Label: LAB_005546cb
// 005546cd: XOR EDX,EDX
// 005546cf: MOV dword ptr [ESP + 0x28],EDX
//   Label: LAB_005546cf
//   XREF to: Stack[-0x18] (WRITE)
// 005546d3: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005546d7: FLD double ptr [0x00640a30]
//   XREF to: 00640a30 (READ)
// 005546dd: FILD dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 005546e1: FSUBR ST0,ST1
// 005546e3: FMUL ST0
// 005546e5: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 005546e9: FSUBP ST2,ST0
// 005546eb: FLD ST1
// 005546ed: FMULP ST2
// 005546ef: FADDP
// 005546f1: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 005546f5: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 005546f9: FNSTSW AX
// 005546fb: SAHF
// 005546fc: JBE 0x005547fc
//   XREF to: 005547fc (CONDITIONAL_JUMP)
// 00554702: INC EDX
//   Label: LAB_00554702
// 00554703: INC ECX
// 00554704: CMP EDX,0x100
// 0055470a: JL 0x005546cf
//   XREF to: 005546cf (CONDITIONAL_JUMP)
// 0055470c: INC EBX
// 0055470d: ADD ESI,0x100
// 00554713: CMP EBX,0x100
// 00554719: JL 0x005546cb
//   XREF to: 005546cb (CONDITIONAL_JUMP)
// 0055471b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055471e: XOR ECX,ECX
// 00554720: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00554724: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00554728: MOV EDI,0x100
// 0055472d: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_0055472d
//   XREF to: Stack[-0x30] (READ)
// 00554731: XOR EDX,EDX
// 00554733: MOV ECX,EBX
// 00554735: MOV dword ptr [ESP + 0x2c],EDX
//   Label: LAB_00554735
//   XREF to: Stack[-0x14] (WRITE)
// 00554739: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0055473d: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00554741: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00554745: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00554748: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0055474c: FXCH
// 0055474e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00554753: FXCH
// 00554755: FSUB float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00554758: FXCH
// 0055475a: FISTP dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (WRITE)
// 0055475e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00554763: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00554767: FISTP dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (WRITE)
// 0055476b: TEST ESI,ESI
// 0055476d: JL 0x00554864
//   XREF to: 00554864 (CONDITIONAL_JUMP)
// 00554773: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_00554773
//   XREF to: Stack[-0x1c] (READ)
// 00554777: CMP EDI,ESI
// 00554779: JG 0x00554785
//   XREF to: 00554785 (CONDITIONAL_JUMP)
// 0055477b: LEA EAX,[ESI + 0xffffff00]
// 00554781: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00554785: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_00554785
//   XREF to: Stack[-0x20] (READ)
// 00554789: TEST ESI,ESI
// 0055478b: JL 0x00554870
//   XREF to: 00554870 (CONDITIONAL_JUMP)
// 00554791: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_00554791
//   XREF to: Stack[-0x20] (READ)
// 00554795: CMP EDI,ESI
// 00554797: JG 0x005547a3
//   XREF to: 005547a3 (CONDITIONAL_JUMP)
// 00554799: LEA EAX,[ESI + 0xffffff00]
// 0055479f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005547a3: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_005547a3
//   XREF to: Stack[-0x20] (READ)
// 005547a7: SHL ESI,0x8
// 005547aa: XOR EAX,EAX
// 005547ac: ADD ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 005547b0: MOV AL,byte ptr [EBX + 0x8]
// 005547b3: MOVZX ESI,byte ptr [ESI + 0x30f6158]
//   XREF to: 030f6158 (DATA)
// 005547ba: ADD EAX,ESI
// 005547bc: CMP EAX,0xff
// 005547c1: JBE 0x005547c8
//   XREF to: 005547c8 (CONDITIONAL_JUMP)
// 005547c3: MOV EAX,0xff
// 005547c8: INC ECX
//   Label: LAB_005547c8
// 005547c9: INC EBX
// 005547ca: INC EDX
// 005547cb: MOV byte ptr [ECX + 0x7],AL
// 005547ce: CMP EDX,0x100
// 005547d4: JL 0x00554735
//   XREF to: 00554735 (CONDITIONAL_JUMP)
// 005547da: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 005547de: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 005547e2: INC EDX
// 005547e3: ADD EAX,EDI
// 005547e5: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005547e9: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005547ed: CMP EDI,EDX
// 005547ef: JG 0x0055472d
//   XREF to: 0055472d (CONDITIONAL_JUMP)
// 005547f5: MOV ESP,EBP
// 005547f7: POP EBP
// 005547f8: POP EDI
// 005547f9: POP ESI
// 005547fa: POP EBX
// 005547fb: RET
// 005547fc: FLD float ptr [ESP + 0x8]
//   Label: LAB_005547fc
//   XREF to: Stack[-0x38] (READ)
// 00554800: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00554803: FNSTSW AX
// 00554805: SAHF
// 00554806: JC 0x00554702
//   XREF to: 00554702 (CONDITIONAL_JUMP)
// 0055480c: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00554810: FSQRT
// 00554812: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00554816: FLD ST0
// 00554818: FXCH ST2
// 0055481a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 0055481e: FXCH
// 00554820: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00554824: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 00554828: FMUL float ptr [0x00640a10]
//   XREF to: 00640a10 (READ)
// 0055482e: FMUL double ptr [0x00640a18]
//   XREF to: 00640a18 (READ)
// 00554834: FSIN
// 00554836: FMUL double ptr [0x00640a20]
//   XREF to: 00640a20 (READ)
// 0055483c: FXCH
// 0055483e: FSUBR double ptr [0x00640a30]
//   XREF to: 00640a30 (READ)
// 00554844: FMULP
// 00554846: FMUL double ptr [0x00640a28]
//   XREF to: 00640a28 (READ)
// 0055484c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00554851: FISTP dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (WRITE)
// 00554855: MOV AL,byte ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00554859: MOV byte ptr [ECX + 0x30f6158],AL
//   XREF to: 030f6159 (WRITE)
// 0055485f: JMP 0x00554702
//   XREF to: 00554702 (UNCONDITIONAL_JUMP)
// 00554864: LEA EAX,[ESI + EDI*0x1]
//   Label: LAB_00554864
// 00554867: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0055486b: JMP 0x00554773
//   XREF to: 00554773 (UNCONDITIONAL_JUMP)
// 00554870: LEA EAX,[ESI + EDI*0x1]
//   Label: LAB_00554870
// 00554873: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00554877: JMP 0x00554791
//   XREF to: 00554791 (UNCONDITIONAL_JUMP)
