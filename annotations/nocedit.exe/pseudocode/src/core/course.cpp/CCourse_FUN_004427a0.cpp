// Name: core_course.cpp_CCourse_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 00442a83]]
// Convention: unknown
// Signature: undefined core_course.cpp_CCourse_FUN_004427a0()
// Cross-references:
//   core_course.cpp_CCourse_FUN_00442710 (00442710) at 00442739 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e530 (0054e530) at 0054e616 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00618fab = 0.00100000000000000
// Function calls:
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void core_course_cpp_CCourse_FUN_004427a0(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 extraout_EAX;
  undefined4 uVar5;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar6;
  int iVar8;
  byte bVar9;
  float10 in_ST0;
  float10 fVar10;
  float10 fVar11;
  int *in_stack_00000004;
  float in_stack_00000008;
  float *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  float afStackY_184c [1517];
  float local_7c;
  CQuaternion4f *local_74;
  undefined4 auStack_6c [7];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 uStack_20;
  float local_18;
  int local_14;
  undefined4 *puVar7;
  
  bVar9 = 0;
  if (in_stack_00000004[2] == 0) {
    if (0.0 < in_stack_00000008) {
      iVar8 = *in_stack_00000004 + -1;
      local_14 = iVar8;
      fVar2 = (float)iVar8;
      if (fVar2 < in_stack_00000008 || (fVar2 == in_stack_00000008) != 0) {
        local_18 = (float)iVar8;
      }
      else {
        fVar10 = (float10)in_stack_00000008;
        fVar11 = fVar10;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44(iVar8,CONCAT22((short)((uint)param_1 >> 0x10),
                                                   (ushort)(fVar2 < in_stack_00000008) << 8 |
                                                   (ushort)(NAN(fVar2) || NAN(in_stack_00000008)) <<
                                                   10 | (ushort)(fVar2 == in_stack_00000008) << 0xe)
                                   ));
        local_14 = (int)ROUND(fVar10);
        iVar8 = local_14 + 1;
        local_74 = (CQuaternion4f *)(float)(fVar11 - (float10)local_14);
      }
      goto LAB_004427da;
    }
    local_18 = (float)in_stack_00000004[2];
  }
  else {
    fVar2 = (float)*in_stack_00000004;
    if (0.0 <= in_stack_00000008) {
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      local_7c = in_stack_00000008 -
                 (float)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00) * fVar2;
      uVar5 = extraout_EAX_00;
      uStack_20 = extraout_EDX_00;
    }
    else {
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      local_7c = (float)(double)CONCAT44(extraout_EDX,extraout_EAX) * fVar2 + in_stack_00000008;
      uVar5 = CONCAT22((short)((uint)extraout_EAX >> 0x10),
                       (ushort)(0.0 < local_7c) << 8 | (ushort)NAN(local_7c) << 10 |
                       (ushort)(local_7c == 0.0) << 0xe);
      uStack_20 = extraout_EDX;
      if (0.0 >= local_7c && (local_7c == 0.0) == 0) {
        local_7c = local_7c + fVar2;
      }
    }
    fVar10 = (float10)local_7c;
    fVar11 = fVar10;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uStack_20,uVar5));
    local_14 = (int)ROUND(fVar10);
    iVar8 = local_14 + 1;
    local_74 = (CQuaternion4f *)(float)(fVar11 - (float10)local_14);
    if (iVar8 < *in_stack_00000004) goto LAB_004427da;
  }
  iVar8 = 0;
LAB_004427da:
  iVar3 = local_14 * 0x1c;
  if ((double)(float)local_74 <= DOUBLE_00618fab) {
    pfVar4 = (float *)(in_stack_00000004[1] + iVar3);
    if (&local_38 != pfVar4) {
      local_38 = *pfVar4;
      local_34 = pfVar4[1];
      local_30 = pfVar4[2];
    }
    puVar6 = (undefined4 *)(in_stack_00000004[1] + 0xc + local_14 * 0x1c);
  }
  else {
    pfVar4 = (float *)(iVar8 * 0x1c + in_stack_00000004[1]);
    local_44 = *pfVar4 * (float)local_74;
    local_40 = pfVar4[1] * (float)local_74;
    local_3c = (float)local_74 * pfVar4[2];
    local_18 = 1.0 - (float)local_74;
    iVar1 = in_stack_00000004[1];
    local_50 = *(float *)(iVar3 + iVar1) * local_18;
    local_4c = *(float *)(iVar3 + 4 + iVar1) * local_18;
    local_48 = *(float *)(iVar3 + 8 + iVar1) * local_18;
    local_2c = local_50 + local_44;
    local_28 = local_4c + local_40;
    local_24 = local_48 + local_3c;
    if (&local_38 != &local_2c) {
      local_38 = local_2c;
      local_34 = local_28;
      local_30 = local_24;
    }
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)(local_14 * 0x1c + in_stack_00000004[1] + 0xc),
               (CQuaternion4f *)(iVar8 * 0x1c + in_stack_00000004[1] + 0xc),local_74,
               SUB84((double)(float)local_74,0));
    puVar6 = auStack_6c + 3;
  }
  puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
  uVar5 = *puVar6;
  auStack_6c[(uint)bVar9 * -2] = *puVar7;
  auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = puVar7[(uint)bVar9 * -2 + 1];
  (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  if (in_stack_0000000c != &local_38) {
    *in_stack_0000000c = local_38;
    in_stack_0000000c[1] = local_34;
    in_stack_0000000c[2] = local_30;
    puVar6 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
    *in_stack_00000010 = uVar5;
    *puVar6 = auStack_6c[(uint)bVar9 * -2];
    puVar6[(uint)bVar9 * -2 + 1] = auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    return;
  }
  puVar6 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
  *in_stack_00000010 = uVar5;
  *puVar6 = auStack_6c[(uint)bVar9 * -2];
  puVar6[(uint)bVar9 * -2 + 1] = auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  return;
}


// Assembly code:
// 004427a0: PUSH EBX
//   Label: core_course.cpp_CCourse_FUN_004427a0
// 004427a1: PUSH ESI
// 004427a2: PUSH EDI
// 004427a3: PUSH EBP
// 004427a4: MOV EBP,ESP
// 004427a6: SUB ESP,0x80
// 004427ac: AND ESP,0xfffffff8
// 004427af: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004427b2: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004427b5: MOV EDX,dword ptr [ESI + 0x8]
// 004427b8: TEST EDX,EDX
// 004427ba: JNZ 0x00442913
//   XREF to: 00442913 (CONDITIONAL_JUMP)
// 004427c0: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004427c3: FLDZ
// 004427c5: FCOMPP
// 004427c7: FNSTSW AX
// 004427c9: SAHF
// 004427ca: JC 0x004429d1
//   XREF to: 004429d1 (CONDITIONAL_JUMP)
// 004427d0: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004427d4: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 004427d8: XOR EDI,EDI
//   Label: LAB_004427d8
// 004427da: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_004427da
//   XREF to: Stack[-0x18] (READ)
// 004427de: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 004427e2: SHL EAX,0x2
// 004427e5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004427e8: LEA ECX,[EAX*0x8 + 0x0]
// 004427ef: FLD double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004427f2: SUB ECX,EAX
// 004427f4: FCOMP double ptr [0x00618fab]
//   XREF to: 00618fab (READ)
// 004427fa: FNSTSW AX
// 004427fc: SAHF
// 004427fd: JBE 0x00442a1f
//   XREF to: 00442a1f (CONDITIONAL_JUMP)
// 00442803: LEA EAX,[EDI*0x4 + 0x0]
// 0044280a: MOV EDX,EAX
// 0044280c: SHL EAX,0x3
// 0044280f: SUB EAX,EDX
// 00442811: MOV EDX,dword ptr [ESI + 0x4]
// 00442814: ADD EAX,EDX
// 00442816: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 0044281a: FLD float ptr [EAX]
// 0044281c: FMUL ST1
// 0044281e: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (WRITE)
// 00442822: FLD float ptr [EAX + 0x4]
// 00442825: FMUL ST1
// 00442827: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x44] (WRITE)
// 0044282b: FMUL float ptr [EAX + 0x8]
// 0044282e: FLD1
// 00442830: FSUB double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 00442833: FXCH
// 00442835: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (WRITE)
// 00442839: MOV EAX,dword ptr [ESI + 0x4]
// 0044283c: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (WRITE)
// 00442840: FLD float ptr [ECX + EAX*0x1]
// 00442843: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 00442847: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x54] (WRITE)
// 0044284b: FLD float ptr [ECX + EAX*0x1 + 0x4]
// 0044284f: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 00442853: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 00442857: FLD float ptr [ECX + EAX*0x1 + 0x8]
// 0044285b: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 0044285f: LEA EDX,[ESP + 0x60]
//   XREF to: Stack[-0x30] (DATA)
// 00442863: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x54] (READ)
// 00442867: FADD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (READ)
// 0044286b: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (READ)
// 0044286f: FXCH
// 00442871: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (WRITE)
// 00442875: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x3c] (DATA)
// 00442879: FADD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x44] (READ)
// 0044287d: FXCH
// 0044287f: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x4c] (WRITE)
// 00442883: FADD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (READ)
// 00442887: FXCH
// 00442889: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (WRITE)
// 0044288d: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (WRITE)
// 00442891: CMP EAX,EDX
// 00442893: JZ 0x004428ad
//   XREF to: 004428ad (CONDITIONAL_JUMP)
// 00442895: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 00442899: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0044289d: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (READ)
// 004428a1: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004428a5: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (READ)
// 004428a9: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004428ad: SHL EDI,0x2
//   Label: LAB_004428ad
// 004428b0: LEA EAX,[EDI*0x8 + 0x0]
// 004428b7: MOV ESI,dword ptr [ESI + 0x4]
// 004428ba: SUB EAX,EDI
// 004428bc: ADD EAX,ESI
// 004428be: ADD EAX,0xc
// 004428c1: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 004428c5: PUSH EAX
// 004428c6: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 004428cd: SHL EAX,0x2
// 004428d0: MOV EDX,EAX
// 004428d2: SHL EAX,0x3
// 004428d5: SUB EAX,EDX
// 004428d7: ADD EAX,ESI
// 004428d9: ADD EAX,0xc
// 004428dc: PUSH EAX
// 004428dd: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x64] (DATA)
// 004428e1: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x74] (DATA)
// 004428e5: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 004428ea: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x64] (DATA)
// 004428ee: ADD ESP,0xc
// 004428f1: MOVSD ES:EDI,ESI
//   Label: LAB_004428f1
// 004428f2: MOVSD ES:EDI,ESI
// 004428f3: MOVSD ES:EDI,ESI
// 004428f4: MOVSD ES:EDI,ESI
// 004428f5: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x3c] (DATA)
// 004428f9: CMP EBX,EAX
// 004428fb: JNZ 0x00442a5e
//   XREF to: 00442a5e (CONDITIONAL_JUMP)
// 00442901: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00442904: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x74] (DATA)
// 00442908: MOVSD ES:EDI,ESI
// 00442909: MOVSD ES:EDI,ESI
// 0044290a: MOVSD ES:EDI,ESI
// 0044290b: MOVSD ES:EDI,ESI
// 0044290c: MOV ESP,EBP
// 0044290e: POP EBP
// 0044290f: POP EDI
// 00442910: POP ESI
// 00442911: POP EBX
// 00442912: RET
// 00442913: FLD float ptr [EBP + 0x18]
//   Label: LAB_00442913
//   XREF to: Stack[0x8] (READ)
// 00442916: FLDZ
// 00442918: FILD dword ptr [ESI]
// 0044291a: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (WRITE)
// 0044291e: FXCH
// 00442920: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (WRITE)
// 00442924: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 00442928: FNSTSW AX
// 0044292a: SAHF
// 0044292b: JBE 0x004429a6
//   XREF to: 004429a6 (CONDITIONAL_JUMP)
// 0044292d: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00442930: FCHS
// 00442932: FDIV float ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 00442936: SUB ESP,0x8
// 00442939: FSTP double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0044293c: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 00442941: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00442945: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00442949: FLD double ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 0044294d: ADD ESP,0x8
// 00442950: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 00442954: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 00442958: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (WRITE)
// 0044295c: FLDZ
// 0044295e: FCOMPP
// 00442960: FNSTSW AX
// 00442962: SAHF
// 00442963: JBE 0x00442971
//   XREF to: 00442971 (CONDITIONAL_JUMP)
// 00442965: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 00442969: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 0044296d: FSTP float ptr [ESP + 0x14]
//   Label: LAB_0044296d
//   XREF to: Stack[-0x7c] (WRITE)
// 00442971: FLD float ptr [ESP + 0x14]
//   Label: LAB_00442971
//   XREF to: Stack[-0x7c] (READ)
// 00442975: FLD ST0
// 00442977: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0044297c: FISTP dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (WRITE)
// 00442980: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 00442984: MOV ECX,dword ptr [ESI]
// 00442986: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044298a: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 0044298e: FILD dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x14] (READ)
// 00442992: FSUBP
// 00442994: INC EDI
// 00442995: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (WRITE)
// 00442999: CMP EDI,ECX
// 0044299b: JL 0x004427da
//   XREF to: 004427da (CONDITIONAL_JUMP)
// 004429a1: JMP 0x004427d8
//   XREF to: 004427d8 (UNCONDITIONAL_JUMP)
// 004429a6: FLD float ptr [EBP + 0x18]
//   Label: LAB_004429a6
//   XREF to: Stack[0x8] (READ)
// 004429a9: FDIV float ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 004429ad: SUB ESP,0x8
// 004429b0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 004429b3: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004429b8: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004429bc: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004429c0: FLD double ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 004429c4: ADD ESP,0x8
// 004429c7: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 004429cb: FSUBR double ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 004429cf: JMP 0x0044296d
//   XREF to: 0044296d (UNCONDITIONAL_JUMP)
// 004429d1: MOV EDX,dword ptr [ESI]
//   Label: LAB_004429d1
// 004429d3: DEC EDX
// 004429d4: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004429d8: FILD dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x14] (READ)
// 004429dc: FCOMP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004429df: FNSTSW AX
// 004429e1: SAHF
// 004429e2: JA 0x004429f5
//   XREF to: 004429f5 (CONDITIONAL_JUMP)
// 004429e4: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004429e8: XOR ECX,ECX
// 004429ea: MOV EDI,EDX
// 004429ec: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 004429f0: JMP 0x004427da
//   XREF to: 004427da (UNCONDITIONAL_JUMP)
// 004429f5: FLD float ptr [EBP + 0x18]
//   Label: LAB_004429f5
//   XREF to: Stack[0x8] (READ)
// 004429f8: FLD ST0
// 004429fa: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004429ff: FISTP dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (WRITE)
// 00442a03: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 00442a07: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00442a0b: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 00442a0f: FILD dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x14] (READ)
// 00442a13: FSUBP
// 00442a15: INC EDI
// 00442a16: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (WRITE)
// 00442a1a: JMP 0x004427da
//   XREF to: 004427da (UNCONDITIONAL_JUMP)
// 00442a1f: MOV EDI,dword ptr [ESI + 0x4]
//   Label: LAB_00442a1f
// 00442a22: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x3c] (DATA)
// 00442a26: ADD EDI,ECX
// 00442a28: CMP EAX,EDI
// 00442a2a: JZ 0x00442a40
//   XREF to: 00442a40 (CONDITIONAL_JUMP)
// 00442a2c: MOV EAX,dword ptr [EDI]
// 00442a2e: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00442a32: MOV EAX,dword ptr [EDI + 0x4]
// 00442a35: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00442a39: MOV EAX,dword ptr [EDI + 0x8]
// 00442a3c: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00442a40: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00442a40
//   XREF to: Stack[-0x18] (READ)
// 00442a44: SHL EAX,0x2
// 00442a47: MOV EDX,EAX
// 00442a49: SHL EAX,0x3
// 00442a4c: MOV ESI,dword ptr [ESI + 0x4]
// 00442a4f: SUB EAX,EDX
// 00442a51: LEA EDI,[ESP + 0x1c]
//   XREF to: Stack[-0x74] (DATA)
// 00442a55: LEA ESI,[ESI + EAX*0x1 + 0xc]
// 00442a59: JMP 0x004428f1
//   XREF to: 004428f1 (UNCONDITIONAL_JUMP)
// 00442a5e: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00442a5e
//   XREF to: Stack[-0x3c] (DATA)
// 00442a62: MOV dword ptr [EBX],EAX
// 00442a64: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 00442a68: MOV dword ptr [EBX + 0x4],EAX
// 00442a6b: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (READ)
// 00442a6f: MOV dword ptr [EBX + 0x8],EAX
// 00442a72: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00442a75: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x74] (DATA)
// 00442a79: MOVSD ES:EDI,ESI
// 00442a7a: MOVSD ES:EDI,ESI
// 00442a7b: MOVSD ES:EDI,ESI
// 00442a7c: MOVSD ES:EDI,ESI
// 00442a7d: MOV ESP,EBP
// 00442a7f: POP EBP
// 00442a80: POP EDI
// 00442a81: POP ESI
// 00442a82: POP EBX
// 00442a83: RET
