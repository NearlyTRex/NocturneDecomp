// Name: sound_mp3.cpp_FUN_005334b0
// Address: 005334b0
// Address Range: [[005334b0, 00533684]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_005334b0()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00535974 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0067e1cc
//   undefined8 DAT_0067e1d0
//   undefined8 DAT_0067e1d8
//   undefined8 DAT_02f46608
//   undefined8 DAT_02f46610
//   undefined8 DAT_02f46648
//   undefined4 DAT_02f46648+4
//   undefined8 DAT_02f46650
//   undefined4 DAT_02f46650+4

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_005334b0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void sound_mp3_cpp_FUN_005334b0(void)

{
  double *pdVar1;
  double *pdVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float *pfVar16;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *local_30;
  float *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  float *local_20;
  int local_1c;
  int local_14;
  
  if (DAT_0067e1cc != 0) {
    iVar13 = 0;
    do {
      dVar6 = 1.0 / SQRT(*(double *)((int)&DAT_0067e1d0 + iVar13) *
                         *(double *)((int)&DAT_0067e1d0 + iVar13) + 1.0);
      iVar9 = iVar13 + 8;
      local_48 = SUB84(dVar6,0);
      *(undefined4 *)((int)&DAT_02f46648 + iVar13) = local_48;
      uStack_44 = (undefined4)((ulonglong)dVar6 >> 0x20);
      *(double *)((int)&DAT_02f46608 + iVar13) = *(double *)((int)&DAT_0067e1d0 + iVar13) * dVar6;
      *(undefined4 *)((int)&DAT_02f46648 + iVar13 + 4) = uStack_44;
      iVar13 = iVar9;
    } while (iVar9 != 0x40);
    DAT_0067e1cc = 0;
  }
  iVar13 = 0;
  local_24 = in_stack_00000008;
  puVar15 = in_stack_00000004;
  do {
    puVar15 = puVar15 + 0x12;
    puVar7 = in_stack_00000004 + iVar13 * 0x12;
    puVar10 = local_24;
    do {
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar10 = uVar3;
      puVar10 = puVar10 + 1;
    } while (puVar7 != puVar15);
    iVar13 = iVar13 + 1;
    local_24 = local_24 + 0x12;
  } while (iVar13 < 0x20);
  if (((*(int *)(in_stack_0000000c + 0x10) == 0) || (*(int *)(in_stack_0000000c + 0x14) != 2)) ||
     (*(int *)(in_stack_0000000c + 0x18) != 0)) {
    if (((*(int *)(in_stack_0000000c + 0x10) == 0) || (*(int *)(in_stack_0000000c + 0x18) == 0)) ||
       (*(int *)(in_stack_0000000c + 0x14) != 2)) {
      local_14 = 0x1f;
    }
    else {
      local_14 = 1;
    }
    local_1c = 0;
    if (local_14 != 0) {
      local_2c = (float *)(in_stack_00000008 + 0x1a);
      local_28 = in_stack_00000008;
      local_20 = (float *)(in_stack_00000004 + 0x12);
      local_30 = in_stack_00000004;
      do {
        pfVar14 = (float *)(local_28 + 0x11);
        pfVar8 = (float *)(local_30 + 0x11);
        iVar13 = 0;
        pfVar11 = (float *)(in_stack_00000008 + (local_1c + 1) * 0x12);
        pfVar16 = local_20;
        do {
          fVar4 = *pfVar8;
          fVar5 = *pfVar16;
          *pfVar14 = fVar4 * (float)*(double *)((int)&DAT_02f46648 + iVar13) -
                     fVar5 * (float)*(double *)((int)&DAT_02f46608 + iVar13);
          pdVar1 = (double *)((int)&DAT_02f46648 + iVar13);
          pdVar2 = (double *)((int)&DAT_02f46608 + iVar13);
          pfVar12 = pfVar11 + 1;
          pfVar14 = pfVar14 + -1;
          iVar13 = iVar13 + 8;
          pfVar16 = pfVar16 + 1;
          pfVar8 = pfVar8 + -1;
          *pfVar11 = fVar4 * (float)*pdVar2 + fVar5 * (float)*pdVar1;
          pfVar11 = pfVar12;
        } while (pfVar12 != local_2c);
        local_2c = local_2c + 0x12;
        local_28 = local_28 + 0x12;
        local_20 = local_20 + 0x12;
        local_30 = local_30 + 0x12;
        local_1c = local_1c + 1;
      } while (local_1c < local_14);
    }
  }
  return;
}


// Assembly code:
// 005334b0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_005334b0
// 005334b1: PUSH ESI
// 005334b2: PUSH EDI
// 005334b3: PUSH EBP
// 005334b4: MOV EBP,ESP
// 005334b6: SUB ESP,0x38
// 005334b9: AND ESP,0xfffffff8
// 005334bc: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005334bf: CMP dword ptr [0x0067e1cc],0x0
//   XREF to: 0067e1cc (READ)
// 005334c6: JZ 0x00533513
//   XREF to: 00533513 (CONDITIONAL_JUMP)
// 005334c8: XOR EDX,EDX
// 005334ca: FLD double ptr [EDX + 0x67e1d0]
//   Label: LAB_005334ca
//   XREF to: 0067e1d0 (READ)
//   XREF to: 0067e1d8 (READ)
// 005334d0: FMUL ST0
// 005334d2: FLD1
// 005334d4: FADDP
// 005334d6: FSQRT
// 005334d8: FLD1
// 005334da: FDIVRP
// 005334dc: FLD double ptr [EDX + 0x67e1d0]
//   XREF to: 0067e1d0 (READ)
//   XREF to: 0067e1d8 (READ)
// 005334e2: ADD EDX,0x8
// 005334e5: FXCH
// 005334e7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005334ea: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005334ed: FMUL double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005334f0: MOV dword ptr [EDX + 0x2f46640],EAX
//   XREF to: 02f46648 (WRITE)
//   XREF to: 02f46650 (WRITE)
// 005334f6: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 005334fa: FSTP double ptr [EDX + 0x2f46600]
//   XREF to: 02f46608 (WRITE)
//   XREF to: 02f46610 (WRITE)
// 00533500: MOV dword ptr [EDX + 0x2f46644],EAX
//   XREF to: 02f4664c (WRITE)
//   XREF to: 02f46654 (WRITE)
// 00533506: CMP EDX,0x40
// 00533509: JNZ 0x005334ca
//   XREF to: 005334ca (CONDITIONAL_JUMP)
// 0053350b: XOR ECX,ECX
// 0053350d: MOV dword ptr [0x0067e1cc],ECX
//   XREF to: 0067e1cc (WRITE)
// 00533513: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00533513
//   XREF to: Stack[0x4] (READ)
// 00533516: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00533519: XOR EBX,EBX
// 0053351b: ADD ESI,0x48
// 0053351e: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00533522: IMUL EAX,EBX,0x48
//   Label: LAB_00533522
// 00533525: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533528: MOV ECX,ESI
// 0053352a: ADD EAX,EDX
// 0053352c: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (READ)
// 00533530: ADD EDX,0x4
//   Label: LAB_00533530
// 00533533: FLD float ptr [EAX]
// 00533535: ADD EAX,0x4
// 00533538: FSTP float ptr [EDX + -0x4]
// 0053353b: CMP EAX,ECX
// 0053353d: JNZ 0x00533530
//   XREF to: 00533530 (CONDITIONAL_JUMP)
// 0053353f: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (READ)
// 00533543: INC EBX
// 00533544: ADD ECX,0x48
// 00533547: ADD ESI,0x48
// 0053354a: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0053354e: CMP EBX,0x20
// 00533551: JL 0x00533522
//   XREF to: 00533522 (CONDITIONAL_JUMP)
// 00533553: CMP dword ptr [EDI + 0x10],0x0
// 00533557: JZ 0x00533569
//   XREF to: 00533569 (CONDITIONAL_JUMP)
// 00533559: CMP dword ptr [EDI + 0x14],0x2
// 0053355d: JNZ 0x00533569
//   XREF to: 00533569 (CONDITIONAL_JUMP)
// 0053355f: CMP dword ptr [EDI + 0x18],0x0
// 00533563: JZ 0x00533671
//   XREF to: 00533671 (CONDITIONAL_JUMP)
// 00533569: CMP dword ptr [EDI + 0x10],0x0
//   Label: LAB_00533569
// 0053356d: JZ 0x00533678
//   XREF to: 00533678 (CONDITIONAL_JUMP)
// 00533573: CMP dword ptr [EDI + 0x18],0x0
// 00533577: JZ 0x00533678
//   XREF to: 00533678 (CONDITIONAL_JUMP)
// 0053357d: CMP dword ptr [EDI + 0x14],0x2
// 00533581: JNZ 0x00533678
//   XREF to: 00533678 (CONDITIONAL_JUMP)
// 00533587: MOV dword ptr [ESP + 0x34],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 0053358f: XOR EDX,EDX
//   Label: LAB_0053358f
// 00533591: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00533595: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00533599: TEST ECX,ECX
// 0053359b: JLE 0x00533671
//   XREF to: 00533671 (CONDITIONAL_JUMP)
// 005335a1: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005335a4: ADD EAX,0x68
// 005335a7: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005335ab: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005335ae: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005335b2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005335b5: ADD EAX,0x48
// 005335b8: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005335bc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005335bf: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005335c3: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_005335c3
//   XREF to: Stack[-0x1c] (READ)
// 005335c7: INC EAX
// 005335c8: IMUL EAX,EAX,0x48
// 005335cb: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005335ce: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 005335d2: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 005335d6: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005335da: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 005335de: ADD EBX,0x44
// 005335e1: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005335e5: ADD ECX,0x44
// 005335e8: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 005335ec: ADD EDX,EAX
// 005335ee: XOR EAX,EAX
// 005335f0: FLD float ptr [ECX]
//   Label: LAB_005335f0
// 005335f2: FLD ST0
// 005335f4: FMUL double ptr [EAX + 0x2f46648]
//   XREF to: 02f46648 (READ)
//   XREF to: 02f46650 (READ)
// 005335fa: FLD float ptr [ESI]
// 005335fc: FLD ST0
// 005335fe: FMUL double ptr [EAX + 0x2f46608]
//   XREF to: 02f46608 (READ)
//   XREF to: 02f46610 (READ)
// 00533604: FSUBP ST2,ST0
// 00533606: FXCH
// 00533608: FSTP float ptr [EBX]
// 0053360a: FMUL double ptr [EAX + 0x2f46648]
//   XREF to: 02f46648 (READ)
//   XREF to: 02f46650 (READ)
// 00533610: FXCH
// 00533612: FMUL double ptr [EAX + 0x2f46608]
//   XREF to: 02f46608 (READ)
//   XREF to: 02f46610 (READ)
// 00533618: ADD EDX,0x4
// 0053361b: SUB EBX,0x4
// 0053361e: ADD EAX,0x8
// 00533621: ADD ESI,0x4
// 00533624: FADDP
// 00533626: SUB ECX,0x4
// 00533629: FSTP float ptr [EDX + -0x4]
// 0053362c: CMP EDX,EDI
// 0053362e: JNZ 0x005335f0
//   XREF to: 005335f0 (CONDITIONAL_JUMP)
// 00533630: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00533634: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 00533638: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 0053363c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 00533640: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 00533644: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00533648: ADD EBX,0x48
// 0053364b: ADD ESI,0x48
// 0053364e: ADD EDI,0x48
// 00533651: ADD EAX,0x48
// 00533654: INC EDX
// 00533655: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00533659: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0053365d: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00533661: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00533665: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00533669: CMP EDX,ECX
// 0053366b: JL 0x005335c3
//   XREF to: 005335c3 (CONDITIONAL_JUMP)
// 00533671: MOV ESP,EBP
//   Label: LAB_00533671
// 00533673: POP EBP
// 00533674: POP EDI
// 00533675: POP ESI
// 00533676: POP EBX
// 00533677: RET
// 00533678: MOV dword ptr [ESP + 0x34],0x1f
//   Label: LAB_00533678
//   XREF to: Stack[-0x14] (WRITE)
// 00533680: JMP 0x0053358f
//   XREF to: 0053358f (UNCONDITIONAL_JUMP)
