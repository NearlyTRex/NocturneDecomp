// Name: shape_meshlod.cpp_FUN_00519870
// Address: 00519870
// Address Range: [[00519870, 00519b49]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00519870()
// Cross-references:
//   shape_meshlod.cpp_FUN_00519830 (00519830) at 00519860 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00637a55 = 0.333333333333333
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00519870(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

undefined4 shape_meshlod_cpp_FUN_00519870(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  undefined1 local_84 [4];
  float local_80 [9];
  float local_5c;
  float local_58;
  float local_54;
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
  int local_1c;
  int local_18;
  float *pfStack_14;
  
  local_48 = *in_stack_0000000c - *in_stack_00000008;
  local_44 = in_stack_0000000c[1] - in_stack_00000008[1];
  local_40 = in_stack_0000000c[2] - in_stack_00000008[2];
  local_30 = *in_stack_00000010 - *in_stack_0000000c;
  local_2c = in_stack_00000010[1] - in_stack_0000000c[1];
  local_28 = in_stack_00000010[2] - in_stack_0000000c[2];
  local_34 = local_48 * local_2c - local_44 * local_30;
  local_38 = local_40 * local_30 - local_48 * local_28;
  local_3c = local_44 * local_28 - local_40 * local_2c;
  if ((float *)(in_stack_00000004 + 0x44) != &local_3c) {
    *(float *)(in_stack_00000004 + 0x44) = local_3c;
    *(float *)(in_stack_00000004 + 0x48) = local_38;
    *(float *)(in_stack_00000004 + 0x4c) = local_34;
  }
  fVar5 = SQRT(*(float *)(in_stack_00000004 + 0x4c) * *(float *)(in_stack_00000004 + 0x4c) +
               *(float *)(in_stack_00000004 + 0x44) * *(float *)(in_stack_00000004 + 0x44) +
               *(float *)(in_stack_00000004 + 0x48) * *(float *)(in_stack_00000004 + 0x48));
  pfVar9 = (float *)(in_stack_00000004 + 0x44);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    *pfVar9 = *pfVar9 * fVar5;
    *(float *)(in_stack_00000004 + 0x48) = *(float *)(in_stack_00000004 + 0x48) * fVar5;
    *(float *)(in_stack_00000004 + 0x4c) = *(float *)(in_stack_00000004 + 0x4c) * fVar5;
    *(float *)(in_stack_00000004 + 0x50) =
         (in_stack_00000010[2] * *(float *)(in_stack_00000004 + 0x4c) +
          *in_stack_00000010 * *pfVar9 + in_stack_00000010[1] * *(float *)(in_stack_00000004 + 0x48)
         + in_stack_0000000c[2] * *(float *)(in_stack_00000004 + 0x4c) +
           *in_stack_0000000c * *pfVar9 +
           in_stack_0000000c[1] * *(float *)(in_stack_00000004 + 0x48) +
           in_stack_00000008[2] * *(float *)(in_stack_00000004 + 0x4c) +
           *in_stack_00000008 * *pfVar9 +
           in_stack_00000008[1] * *(float *)(in_stack_00000004 + 0x48)) * (float)DOUBLE_00637a55;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_84,3,&g_CVectorTypeInfo);
    if (local_80 != in_stack_00000008) {
      local_80[0] = *in_stack_00000008;
      local_80[1] = in_stack_00000008[1];
      local_80[2] = in_stack_00000008[2];
    }
    if (local_80 + 3 != in_stack_0000000c) {
      local_80[3] = *in_stack_0000000c;
      local_80[4] = in_stack_0000000c[1];
      local_80[5] = in_stack_0000000c[2];
    }
    if (local_80 + 6 != in_stack_00000010) {
      local_80[6] = *in_stack_00000010;
      local_80[7] = in_stack_00000010[1];
      local_80[8] = in_stack_00000010[2];
    }
    pfStack_14 = local_80;
    iVar10 = 0;
    pfVar9 = (float *)(in_stack_00000004 + 0x54);
    local_18 = in_stack_00000004;
    do {
      iVar7 = local_18;
      iVar8 = iVar10 + 1;
      if (2 < iVar8) {
        iVar8 = 0;
      }
      local_1c = iVar8 * 0xc;
      local_50 = local_80[iVar8 * 3] - *pfStack_14;
      local_4c = local_80[iVar8 * 3 + 1] - pfStack_14[1];
      local_48 = local_80[iVar8 * 3 + 2] - pfStack_14[2];
      local_5c = local_4c * *(float *)(in_stack_00000004 + 0x4c) -
                 local_48 * *(float *)(in_stack_00000004 + 0x48);
      local_58 = local_48 * *(float *)(in_stack_00000004 + 0x44) -
                 local_50 * *(float *)(in_stack_00000004 + 0x4c);
      local_54 = local_50 * *(float *)(in_stack_00000004 + 0x48) -
                 local_4c * *(float *)(in_stack_00000004 + 0x44);
      if (pfVar9 != &local_5c) {
        *pfVar9 = local_5c;
        pfVar9[1] = local_58;
        pfVar9[2] = local_54;
      }
      pfVar1 = pfVar9 + 1;
      pfVar2 = pfStack_14 + 1;
      fVar5 = *pfVar9;
      fVar6 = *pfStack_14;
      pfVar3 = pfVar9 + 2;
      pfVar4 = pfStack_14 + 2;
      pfVar9 = pfVar9 + 3;
      pfStack_14 = pfStack_14 + 3;
      iVar10 = iVar10 + 1;
      local_18 = local_18 + 4;
      *(float *)(iVar7 + 0x78) = *pfVar3 * *pfVar4 + fVar5 * fVar6 + *pfVar1 * *pfVar2;
    } while (iVar10 < 3);
    return 1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x40) = 1;
  return 0;
}


// Assembly code:
// 00519870: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00519870
// 00519871: PUSH ESI
// 00519872: PUSH EDI
// 00519873: PUSH EBP
// 00519874: MOV EBP,ESP
// 00519876: SUB ESP,0x74
// 00519879: AND ESP,0xfffffff8
// 0051987c: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051987f: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00519882: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00519885: FLD float ptr [EBX]
// 00519887: FSUB float ptr [ESI]
// 00519889: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (WRITE)
// 0051988d: FLD float ptr [EBX + 0x4]
// 00519890: FSUB float ptr [ESI + 0x4]
// 00519893: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (WRITE)
// 00519897: FLD float ptr [EBX + 0x8]
// 0051989a: FSUB float ptr [ESI + 0x8]
// 0051989d: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (WRITE)
// 005198a1: FLD float ptr [EDI]
// 005198a3: FSUB float ptr [EBX]
// 005198a5: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (WRITE)
// 005198a9: FLD float ptr [EDI + 0x4]
// 005198ac: FSUB float ptr [EBX + 0x4]
// 005198af: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 005198b3: FXCH
// 005198b5: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (WRITE)
// 005198b9: FMUL float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005198bd: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 005198c1: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 005198c5: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 005198c9: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 005198cd: FLD float ptr [EDI + 0x8]
// 005198d0: FSUB float ptr [EBX + 0x8]
// 005198d3: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 005198d7: FXCH
// 005198d9: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (WRITE)
// 005198dd: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 005198e1: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 005198e5: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 005198e9: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 005198ed: FMUL float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005198f1: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005198f4: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x3c] (DATA)
// 005198f8: FXCH ST3
// 005198fa: FSUBP ST5,ST0
// 005198fc: ADD EDX,0x44
// 005198ff: FXCH ST4
// 00519901: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (WRITE)
// 00519905: FXCH ST3
// 00519907: FSUBP ST2,ST0
// 00519909: FSUBP ST2,ST0
// 0051990b: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 0051990f: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (WRITE)
// 00519913: CMP EDX,EAX
// 00519915: JNZ 0x00519b05
//   XREF to: 00519b05 (CONDITIONAL_JUMP)
// 0051991b: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0051991b
//   XREF to: Stack[0x4] (READ)
// 0051991e: FLD float ptr [EDX + 0x48]
// 00519921: FMUL ST0
// 00519923: FLD float ptr [EDX + 0x44]
// 00519926: FMUL ST0
// 00519928: FADDP
// 0051992a: FLD float ptr [EDX + 0x4c]
// 0051992d: FMUL ST0
// 0051992f: FADDP
// 00519931: FSQRT
// 00519933: ADD EDX,0x44
// 00519936: FST float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00519939: FLDZ
// 0051993b: FCOMPP
// 0051993d: FNSTSW AX
// 0051993f: SAHF
// 00519940: JNC 0x00519b1e
//   XREF to: 00519b1e (CONDITIONAL_JUMP)
// 00519946: FLD1
// 00519948: FLD float ptr [EDX]
// 0051994a: FXCH
// 0051994c: FDIV float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0051994f: FXCH
// 00519951: FMUL ST1
// 00519953: FLD float ptr [EDX + 0x4]
// 00519956: FMUL ST2
// 00519958: FLD float ptr [EDX + 0x8]
// 0051995b: FMULP ST3
// 0051995d: FXCH
// 0051995f: FSTP float ptr [EDX]
// 00519961: FSTP float ptr [EDX + 0x4]
// 00519964: FSTP float ptr [EDX + 0x8]
// 00519967: FLD float ptr [ESI + 0x4]
// 0051996a: FMUL float ptr [EDX + 0x4]
// 0051996d: FLD float ptr [EBX + 0x4]
// 00519970: FMUL float ptr [EDX + 0x4]
// 00519973: FLD float ptr [EDI + 0x4]
// 00519976: FMUL float ptr [EDX + 0x4]
// 00519979: FLD float ptr [ESI]
// 0051997b: FMUL float ptr [EDX]
// 0051997d: FLD float ptr [EBX]
// 0051997f: FMUL float ptr [EDX]
// 00519981: FLD float ptr [EDI]
// 00519983: FXCH ST2
// 00519985: FADDP ST5,ST0
// 00519987: FXCH
// 00519989: FMUL float ptr [EDX]
// 0051998b: FLD float ptr [ESI + 0x8]
// 0051998e: FMUL float ptr [EDX + 0x8]
// 00519991: FXCH ST2
// 00519993: FADDP ST4,ST0
// 00519995: FADDP ST2,ST0
// 00519997: FLD float ptr [EBX + 0x8]
// 0051999a: FMUL float ptr [EDX + 0x8]
// 0051999d: FLD float ptr [EDI + 0x8]
// 005199a0: FMUL float ptr [EDX + 0x8]
// 005199a3: FXCH ST2
// 005199a5: FADDP ST5,ST0
// 005199a7: FADDP ST3,ST0
// 005199a9: FADDP
// 005199ab: FXCH
// 005199ad: FADDP ST2,ST0
// 005199af: FADDP
// 005199b1: FMUL double ptr [0x00637a55]
//   XREF to: 00637a55 (READ)
// 005199b7: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 005199bc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005199bf: PUSH 0x3
// 005199c1: FSTP float ptr [EAX + 0x50]
// 005199c4: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x84] (DATA)
// 005199c8: PUSH EAX
// 005199c9: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005199ce: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x84] (DATA)
// 005199d2: ADD ESP,0xc
// 005199d5: CMP EAX,ESI
// 005199d7: JZ 0x005199ed
//   XREF to: 005199ed (CONDITIONAL_JUMP)
// 005199d9: MOV EAX,dword ptr [ESI]
// 005199db: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005199df: MOV EAX,dword ptr [ESI + 0x4]
// 005199e2: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005199e6: MOV EAX,dword ptr [ESI + 0x8]
// 005199e9: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005199ed: LEA EAX,[ESP + 0x10]
//   Label: LAB_005199ed
//   XREF to: Stack[-0x78] (DATA)
// 005199f1: CMP EAX,EBX
// 005199f3: JZ 0x00519a09
//   XREF to: 00519a09 (CONDITIONAL_JUMP)
// 005199f5: MOV EAX,dword ptr [EBX]
// 005199f7: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005199fb: MOV EAX,dword ptr [EBX + 0x4]
// 005199fe: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00519a02: MOV EAX,dword ptr [EBX + 0x8]
// 00519a05: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00519a09: LEA EAX,[ESP + 0x1c]
//   Label: LAB_00519a09
//   XREF to: Stack[-0x6c] (DATA)
// 00519a0d: CMP EAX,EDI
// 00519a0f: JNZ 0x00519b31
//   XREF to: 00519b31 (CONDITIONAL_JUMP)
// 00519a15: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00519a15
//   XREF to: Stack[0x4] (READ)
// 00519a18: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00519a1b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00519a1e: LEA EBX,[ESP + 0x4]
//   XREF to: Stack[-0x84] (DATA)
// 00519a22: XOR ESI,ESI
// 00519a24: ADD EDX,0x54
// 00519a27: ADD ECX,0x44
// 00519a2a: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00519a2e: LEA EAX,[ESI + 0x1]
//   Label: LAB_00519a2e
// 00519a31: MOV dword ptr [ESP + 0x70],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00519a35: CMP EAX,0x3
// 00519a38: JL 0x00519a3c
//   XREF to: 00519a3c (CONDITIONAL_JUMP)
// 00519a3a: XOR EAX,EAX
// 00519a3c: IMUL EAX,EAX,0xc
//   Label: LAB_00519a3c
// 00519a3f: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00519a43: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x84] (DATA)
// 00519a47: ADD EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 00519a4b: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 00519a4f: FLD float ptr [EAX]
//   XREF to: Stack[-0x78] (DATA)
// 00519a51: FSUB float ptr [EDI]
//   XREF to: Stack[-0x84] (DATA)
// 00519a53: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (WRITE)
// 00519a57: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x74] (READ)
// 00519a5a: FSUB float ptr [EDI + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 00519a5d: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (WRITE)
// 00519a61: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x70] (READ)
// 00519a64: FSUB float ptr [EDI + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 00519a67: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 00519a6b: FXCH
// 00519a6d: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00519a71: FMUL float ptr [ECX + 0x8]
// 00519a74: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00519a78: FMUL float ptr [ECX + 0x4]
// 00519a7b: FSUBP
// 00519a7d: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00519a81: FXCH
// 00519a83: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (WRITE)
// 00519a87: FMUL float ptr [ECX]
// 00519a89: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 00519a8d: FMUL float ptr [ECX + 0x8]
// 00519a90: FSUBP
// 00519a92: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 00519a96: FXCH
// 00519a98: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (WRITE)
// 00519a9c: FMUL float ptr [ECX + 0x4]
// 00519a9f: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 00519aa3: FMUL float ptr [ECX]
// 00519aa5: FSUBP
// 00519aa7: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x60] (DATA)
// 00519aab: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (WRITE)
// 00519aaf: CMP EDX,EAX
// 00519ab1: JZ 0x00519ac7
//   XREF to: 00519ac7 (CONDITIONAL_JUMP)
// 00519ab3: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (DATA)
// 00519ab7: MOV dword ptr [EDX],EAX
// 00519ab9: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (READ)
// 00519abd: MOV dword ptr [EDX + 0x4],EAX
// 00519ac0: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 00519ac4: MOV dword ptr [EDX + 0x8],EAX
// 00519ac7: FLD float ptr [EDX + 0x4]
//   Label: LAB_00519ac7
// 00519aca: FMUL float ptr [EBX + 0x4]
//   XREF to: Stack[-0x80] (READ)
// 00519acd: FLD float ptr [EDX]
// 00519acf: FMUL float ptr [EBX]
//   XREF to: Stack[-0x84] (DATA)
// 00519ad1: FADDP
// 00519ad3: FLD float ptr [EDX + 0x8]
// 00519ad6: FMUL float ptr [EBX + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 00519ad9: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 00519add: ADD EDX,0xc
// 00519ae0: ADD EBX,0xc
// 00519ae3: INC ESI
// 00519ae4: ADD EAX,0x4
// 00519ae7: FADDP
// 00519ae9: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00519aed: FSTP float ptr [EAX + 0x74]
// 00519af0: CMP ESI,0x3
// 00519af3: JL 0x00519a2e
//   XREF to: 00519a2e (CONDITIONAL_JUMP)
// 00519af9: MOV EAX,0x1
// 00519afe: MOV ESP,EBP
//   Label: LAB_00519afe
// 00519b00: POP EBP
// 00519b01: POP EDI
// 00519b02: POP ESI
// 00519b03: POP EBX
// 00519b04: RET
// 00519b05: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00519b05
//   XREF to: Stack[-0x3c] (DATA)
// 00519b09: MOV dword ptr [EDX],EAX
// 00519b0b: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 00519b0f: MOV dword ptr [EDX + 0x4],EAX
// 00519b12: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 00519b16: MOV dword ptr [EDX + 0x8],EAX
// 00519b19: JMP 0x0051991b
//   XREF to: 0051991b (UNCONDITIONAL_JUMP)
// 00519b1e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00519b1e
//   XREF to: Stack[0x4] (READ)
// 00519b21: MOV dword ptr [EAX + 0x40],0x1
// 00519b28: XOR EAX,EAX
// 00519b2a: MOV ESP,EBP
// 00519b2c: POP EBP
// 00519b2d: POP EDI
// 00519b2e: POP ESI
// 00519b2f: POP EBX
// 00519b30: RET
// 00519b31: MOV EAX,dword ptr [EDI]
//   Label: LAB_00519b31
// 00519b33: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00519b37: MOV EAX,dword ptr [EDI + 0x4]
// 00519b3a: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00519b3e: MOV EAX,dword ptr [EDI + 0x8]
// 00519b41: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00519b45: JMP 0x00519a15
//   XREF to: 00519a15 (UNCONDITIONAL_JUMP)
