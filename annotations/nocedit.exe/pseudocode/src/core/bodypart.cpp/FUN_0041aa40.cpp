// Name: core_bodypart.cpp_FUN_0041aa40
// Address: 0041aa40
// Address Range: [[0041aa40, 0041adcb]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041aa40()
// Cross-references:
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a0df [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00615e4c
//   undefined4 DAT_00615e54
//   undefined4 DAT_00615e5c
// Function calls:
//   core_bodypart.cpp_FUN_0041a630
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0041ad84) */
/* WARNING: Removing unreachable block (ram,0x0041ad97) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_bodypart.cpp_FUN_0041aa40(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_bodypart_cpp_FUN_0041aa40(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 extraout_EAX;
  float fVar3;
  int *piVar4;
  undefined4 extraout_EDX;
  float fVar5;
  BADSPACEBASE *in_ESP;
  float fVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  int unaff_retaddr;
  int in_stack_00000004;
  int iStack0000000c;
  float afStackY_1044 [991];
  int local_c0;
  int local_bc;
  CMatrix3x3f local_b8;
  float fStack_94;
  float local_8c;
  undefined4 local_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  local_48[1] = NAN;
  local_48[0] = 0.0;
  bVar8 = 0;
  local_bc = 0;
  local_c0 = 0;
  do {
    local_18 = local_bc;
    local_54.x = (float)local_c0 * (float)_DAT_00615e4c * (float)_DAT_00615e54;
    local_54.y = (float)local_bc * (float)_DAT_00615e4c * (float)_DAT_00615e54;
    local_54.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_b8,&local_54);
    fVar9 = (float10)local_b8.m[0].y * (float10)_DAT_00615e5c;
    fVar10 = (float10)local_b8.m[0].z * (float10)_DAT_00615e5c;
    fVar11 = (float10)local_b8.m[1].x * (float10)_DAT_00615e5c;
    fVar12 = (float10)local_b8.m[1].y * (float10)_DAT_00615e5c;
    fVar13 = (float10)local_b8.m[1].z * (float10)_DAT_00615e5c;
    fVar14 = (float10)local_b8.m[2].x * (float10)_DAT_00615e5c;
    fVar15 = (float10)local_b8.m[2].y * (float10)_DAT_00615e5c;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
    local_20 = (int)ROUND(fVar9);
    fVar9 = (float10)fStack_94 * (float10)_DAT_00615e5c;
    local_bc = 0x41ab2f;
    crt_math_c_round_FUN_005fe6b0(dVar16);
    local_18 = (int)ROUND(fVar10);
    fVar10 = (float10)local_8c * (float10)_DAT_00615e5c;
    local_54.z = NAN;
    local_54.y = NAN;
    local_54.x = NAN;
    uStack_64 = 0x80000001;
    fStack_68 = -1.4013e-45;
    local_6c = 0x80000001;
    iVar7 = 0;
    local_b8.m[0].x = 6.030813e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44(*(undefined4 *)(in_stack_00000004 + 0x174),
                                         in_stack_00000004));
    local_b8.m[0].y = 6.030823e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[0].z = 6.030833e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[1].x = 6.030842e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[1].y = 6.030852e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[1].z = 6.030862e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[2].x = 6.030872e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    iStack_14 = (int)ROUND(fVar11);
    local_18 = (int)ROUND(fVar10);
    if ((int)((ulonglong)dVar16 >> 0x20) != 0 && -1 < (longlong)dVar16) {
      iStack0000000c = 0;
      do {
        piVar4 = (int *)(*(int *)(in_stack_00000004 + 0x178) + iStack0000000c);
        fVar5 = (float)(((uint)((longlong)unaff_retaddr * (longlong)*piVar4) >> 0x10 |
                        (int)((ulonglong)((longlong)unaff_retaddr * (longlong)*piVar4) >> 0x20) <<
                        0x10) + ((uint)((longlong)(int)ROUND(fVar12) * (longlong)piVar4[1]) >> 0x10
                                | (int)((ulonglong)
                                        ((longlong)(int)ROUND(fVar12) * (longlong)piVar4[1]) >> 0x20
                                       ) << 0x10) +
                       ((uint)((longlong)(int)ROUND(fVar15) * (longlong)piVar4[2]) >> 0x10 |
                       (int)((ulonglong)((longlong)(int)ROUND(fVar15) * (longlong)piVar4[2]) >> 0x20
                            ) << 0x10));
        fVar6 = (float)(((uint)((longlong)in_stack_00000004 * (longlong)*piVar4) >> 0x10 |
                        (int)((ulonglong)((longlong)in_stack_00000004 * (longlong)*piVar4) >> 0x20)
                        << 0x10) +
                        ((uint)((longlong)(int)ROUND(fVar13) * (longlong)piVar4[1]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)ROUND(fVar13) * (longlong)piVar4[1]) >>
                             0x20) << 0x10) +
                       ((uint)((longlong)(int)ROUND(fVar9) * (longlong)piVar4[2]) >> 0x10 |
                       (int)((ulonglong)((longlong)(int)ROUND(fVar9) * (longlong)piVar4[2]) >> 0x20)
                       << 0x10));
        lVar1 = (longlong)(int)ROUND(fVar11) * (longlong)*piVar4;
        lVar2 = (longlong)(int)ROUND(fVar10) * (longlong)piVar4[2];
        fVar3 = (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                       ((uint)((longlong)(int)ROUND(fVar14) * (longlong)piVar4[1]) >> 0x10 |
                       (int)((ulonglong)((longlong)(int)ROUND(fVar14) * (longlong)piVar4[1]) >> 0x20
                            ) << 0x10));
        if ((int)fVar5 < (int)local_38) {
          local_38 = fVar5;
        }
        if ((int)local_54.y < (int)fVar5) {
          local_54.y = fVar5;
        }
        if ((int)fVar6 < (int)local_34) {
          local_34 = fVar6;
        }
        if ((int)local_54.z < (int)fVar6) {
          local_54.z = fVar6;
        }
        if ((int)fVar3 < (int)local_30[0]) {
          local_30[0] = fVar3;
        }
        if ((int)local_48[0] < (int)fVar3) {
          local_48[0] = fVar3;
        }
        iVar7 = iVar7 + 1;
        iStack0000000c = iStack0000000c + 0xc;
      } while (iVar7 < *(int *)(in_stack_00000004 + 0x174));
    }
    iVar7 = (int)local_54.y - (int)local_38;
    if ((int)local_54.y - (int)local_38 < (int)local_54.z - (int)local_34) {
      iVar7 = (int)local_54.z - (int)local_34;
    }
    if (iVar7 < local_1c) {
      local_5c = local_38;
      (&local_58)[(uint)bVar8 * -2] = local_30[(uint)bVar8 * -2 + -1];
      *(float *)((int)&local_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           local_30[(uint)bVar8 * -2 + (uint)bVar8 * -2];
      local_1c = iVar7;
      local_48[1] = local_54.y;
      local_48[(uint)bVar8 * -2 + 2] = *(float *)((int)&local_54 + (uint)bVar8 * -8 + 8);
      local_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
           local_48[(uint)bVar8 * -2 + (uint)bVar8 * -2];
      if (&fStack_68 != local_30 + 1) {
        fStack_68 = local_30[1];
        uStack_64 = local_30[2];
        local_60 = local_30[3];
      }
    }
    local_c0 = 0x41ab19;
  } while( true );
}


// Assembly code:
// 0041aa40: PUSH EBX
//   Label: core_bodypart.cpp_FUN_0041aa40
// 0041aa41: PUSH ESI
// 0041aa42: PUSH EDI
// 0041aa43: PUSH EBP
// 0041aa44: MOV EBP,ESP
// 0041aa46: SUB ESP,0xac
// 0041aa4c: AND ESP,0xfffffff8
// 0041aa4f: MOV EDX,0x7fffffff
// 0041aa54: XOR ECX,ECX
// 0041aa56: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0041aa5a: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 0041aa5e: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_0041aa5e
//   XREF to: Stack[-0x48] (READ)
// 0041aa62: XOR EBX,EBX
// 0041aa64: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 0041aa68: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0xc0] (DATA)
// 0041aa6b: MOV EAX,dword ptr [ESP]
//   Label: LAB_0041aa6b
//   XREF to: Stack[-0xc0] (DATA)
// 0041aa6e: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041aa75: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xbc] (READ)
// 0041aa79: FILD dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 0041aa80: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041aa87: FLD double ptr [0x00615e4c]
//   XREF to: 00615e4c (READ)
// 0041aa8d: FXCH
// 0041aa8f: FMUL ST1
// 0041aa91: FILD dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 0041aa98: FMULP ST2
// 0041aa9a: FLD double ptr [0x00615e54]
//   XREF to: 00615e54 (READ)
// 0041aaa0: FXCH
// 0041aaa2: FMUL ST1
// 0041aaa4: FXCH ST2
// 0041aaa6: FMULP
// 0041aaa8: XOR ESI,ESI
// 0041aaaa: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x54] (DATA)
// 0041aaae: MOV dword ptr [ESP + 0x74],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 0041aab2: PUSH EAX
// 0041aab3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xb8] (DATA)
// 0041aab7: FXCH
// 0041aab9: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x54] (WRITE)
// 0041aabd: PUSH EAX
// 0041aabe: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x50] (WRITE)
// 0041aac2: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0041aac7: ADD ESP,0x8
// 0041aaca: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 0041aace: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041aad4: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0xb4] (READ)
// 0041aad8: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041aade: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (READ)
// 0041aae2: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041aae8: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0xac] (READ)
// 0041aaec: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041aaf2: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xa8] (READ)
// 0041aaf6: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041aafc: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xa4] (READ)
// 0041ab00: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041ab06: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0xa0] (READ)
// 0041ab0a: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041ab10: FXCH ST6
// 0041ab12: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab17: FISTP dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (WRITE)
// 0041ab1e: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x9c] (READ)
// 0041ab22: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041ab28: FXCH ST5
// 0041ab2a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab2f: FISTP dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (WRITE)
// 0041ab36: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x98] (READ)
// 0041ab3a: FMUL float ptr [0x00615e5c]
//   XREF to: 00615e5c (READ)
// 0041ab40: MOV EDI,0x7fffffff
// 0041ab45: MOV ECX,0x80000001
// 0041ab4a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0041ab4d: MOV dword ptr [ESP + 0x68],EDI
//   XREF to: Stack[-0x58] (WRITE)
// 0041ab51: MOV dword ptr [ESP + 0x64],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 0041ab55: MOV dword ptr [ESP + 0x60],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 0041ab59: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0x70] (WRITE)
// 0041ab5d: MOV dword ptr [ESP + 0x4c],ECX
//   XREF to: Stack[-0x74] (WRITE)
// 0041ab61: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 0041ab65: MOV EDX,dword ptr [EAX + 0x174]
// 0041ab6b: XOR EDI,EDI
// 0041ab6d: FXCH ST4
// 0041ab6f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab74: FXCH ST3
// 0041ab76: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab7b: FXCH ST2
// 0041ab7d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab82: FXCH
// 0041ab84: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab89: FXCH ST6
// 0041ab8b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab90: FXCH ST5
// 0041ab92: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab97: FXCH ST4
// 0041ab99: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041ab9e: FXCH ST3
// 0041aba0: FISTP dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x3c] (WRITE)
// 0041aba7: FXCH
// 0041aba9: FISTP dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (WRITE)
// 0041abb0: FISTP dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x34] (WRITE)
// 0041abb7: FXCH ST3
// 0041abb9: FISTP dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x2c] (WRITE)
// 0041abc0: FXCH
// 0041abc2: FISTP dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x30] (WRITE)
// 0041abc9: FISTP dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x38] (WRITE)
// 0041abd0: FISTP dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x40] (WRITE)
// 0041abd7: TEST EDX,EDX
// 0041abd9: JLE 0x0041ad12
//   XREF to: 0041ad12 (CONDITIONAL_JUMP)
// 0041abdf: MOV dword ptr [ESP + 0xa4],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0041abe6: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_0041abe6
//   XREF to: Stack[0x4] (READ)
// 0041abe9: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (READ)
// 0041abf0: MOV ECX,dword ptr [ECX + 0x178]
// 0041abf6: ADD ECX,EDX
// 0041abf8: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 0041abff: MOV EDX,dword ptr [ECX]
// 0041ac01: IMUL EDX
// 0041ac03: SHRD EAX,EDX,0x10
// 0041ac07: MOV EBX,EAX
// 0041ac09: MOV EDX,dword ptr [ECX + 0x4]
// 0041ac0c: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (READ)
// 0041ac13: IMUL EDX
// 0041ac15: SHRD EAX,EDX,0x10
// 0041ac19: MOV EDX,dword ptr [ECX + 0x8]
// 0041ac1c: ADD EBX,EAX
// 0041ac1e: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x30] (READ)
// 0041ac25: IMUL EDX
// 0041ac27: SHRD EAX,EDX,0x10
// 0041ac2b: MOV EDX,dword ptr [ECX]
// 0041ac2d: ADD EBX,EAX
// 0041ac2f: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (READ)
// 0041ac36: IMUL EDX
// 0041ac38: SHRD EAX,EDX,0x10
// 0041ac3c: MOV ESI,EAX
// 0041ac3e: MOV EDX,dword ptr [ECX + 0x4]
// 0041ac41: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x34] (READ)
// 0041ac48: IMUL EDX
// 0041ac4a: SHRD EAX,EDX,0x10
// 0041ac4e: MOV EDX,dword ptr [ECX + 0x8]
// 0041ac51: ADD ESI,EAX
// 0041ac53: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x38] (READ)
// 0041ac5a: IMUL EDX
// 0041ac5c: SHRD EAX,EDX,0x10
// 0041ac60: MOV EDX,dword ptr [ECX]
// 0041ac62: ADD ESI,EAX
// 0041ac64: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x3c] (READ)
// 0041ac6b: IMUL EDX
// 0041ac6d: SHRD EAX,EDX,0x10
// 0041ac71: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041ac78: MOV EDX,dword ptr [ECX + 0x4]
// 0041ac7b: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x2c] (READ)
// 0041ac82: IMUL EDX
// 0041ac84: SHRD EAX,EDX,0x10
// 0041ac88: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 0041ac8f: ADD EDX,EAX
// 0041ac91: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x40] (READ)
// 0041ac98: MOV dword ptr [ESP + 0xa8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0041ac9f: MOV EDX,dword ptr [ECX + 0x8]
// 0041aca2: IMUL EDX
// 0041aca4: SHRD EAX,EDX,0x10
// 0041aca8: MOV ECX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 0041acaf: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x60] (READ)
// 0041acb3: ADD EAX,ECX
// 0041acb5: CMP EBX,EDX
// 0041acb7: JL 0x0041adc3
//   XREF to: 0041adc3 (CONDITIONAL_JUMP)
// 0041acbd: CMP EBX,dword ptr [ESP + 0x48]
//   Label: LAB_0041acbd
//   XREF to: Stack[-0x78] (READ)
// 0041acc1: JLE 0x0041acc7
//   XREF to: 0041acc7 (CONDITIONAL_JUMP)
// 0041acc3: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x78] (WRITE)
// 0041acc7: CMP ESI,dword ptr [ESP + 0x64]
//   Label: LAB_0041acc7
//   XREF to: Stack[-0x5c] (READ)
// 0041accb: JGE 0x0041acd1
//   XREF to: 0041acd1 (CONDITIONAL_JUMP)
// 0041accd: MOV dword ptr [ESP + 0x64],ESI
//   XREF to: Stack[-0x5c] (WRITE)
// 0041acd1: CMP ESI,dword ptr [ESP + 0x4c]
//   Label: LAB_0041acd1
//   XREF to: Stack[-0x74] (READ)
// 0041acd5: JLE 0x0041acdb
//   XREF to: 0041acdb (CONDITIONAL_JUMP)
// 0041acd7: MOV dword ptr [ESP + 0x4c],ESI
//   XREF to: Stack[-0x74] (WRITE)
// 0041acdb: CMP EAX,dword ptr [ESP + 0x68]
//   Label: LAB_0041acdb
//   XREF to: Stack[-0x58] (READ)
// 0041acdf: JGE 0x0041ace5
//   XREF to: 0041ace5 (CONDITIONAL_JUMP)
// 0041ace1: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0041ace5: CMP EAX,dword ptr [ESP + 0x50]
//   Label: LAB_0041ace5
//   XREF to: Stack[-0x70] (READ)
// 0041ace9: JLE 0x0041acef
//   XREF to: 0041acef (CONDITIONAL_JUMP)
// 0041aceb: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0041acef: MOV ECX,dword ptr [ESP + 0xa4]
//   Label: LAB_0041acef
//   XREF to: Stack[-0x1c] (READ)
// 0041acf6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0041acf9: INC EDI
// 0041acfa: ADD ECX,0xc
// 0041acfd: MOV EBX,dword ptr [EAX + 0x174]
// 0041ad03: MOV dword ptr [ESP + 0xa4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041ad0a: CMP EDI,EBX
// 0041ad0c: JL 0x0041abe6
//   XREF to: 0041abe6 (CONDITIONAL_JUMP)
// 0041ad12: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_0041ad12
//   XREF to: Stack[-0x78] (READ)
// 0041ad16: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x60] (READ)
// 0041ad1a: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x74] (READ)
// 0041ad1e: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x5c] (READ)
// 0041ad22: SUB EDX,ESI
// 0041ad24: SUB ECX,EDI
// 0041ad26: MOV EAX,EDX
// 0041ad28: CMP ECX,EDX
// 0041ad2a: JLE 0x0041ad2e
//   XREF to: 0041ad2e (CONDITIONAL_JUMP)
// 0041ad2c: MOV EAX,ECX
// 0041ad2e: CMP EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_0041ad2e
//   XREF to: Stack[-0x44] (READ)
// 0041ad32: JGE 0x0041ad72
//   XREF to: 0041ad72 (CONDITIONAL_JUMP)
// 0041ad34: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0x84] (DATA)
// 0041ad38: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x60] (DATA)
// 0041ad3c: MOVSD ES:EDI,ESI
// 0041ad3d: MOVSD ES:EDI,ESI
// 0041ad3e: MOVSD ES:EDI,ESI
// 0041ad3f: LEA EDX,[ESP + 0x30]
//   XREF to: Stack[-0x90] (DATA)
// 0041ad43: LEA EDI,[ESP + 0x54]
//   XREF to: Stack[-0x6c] (DATA)
// 0041ad47: LEA ESI,[ESP + 0x48]
//   XREF to: Stack[-0x78] (DATA)
// 0041ad4b: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0041ad4f: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x54] (DATA)
// 0041ad53: MOVSD ES:EDI,ESI
// 0041ad54: MOVSD ES:EDI,ESI
// 0041ad55: MOVSD ES:EDI,ESI
// 0041ad56: CMP EDX,EAX
// 0041ad58: JZ 0x0041ad72
//   XREF to: 0041ad72 (CONDITIONAL_JUMP)
// 0041ad5a: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x54] (DATA)
// 0041ad5e: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0041ad62: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x50] (READ)
// 0041ad66: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0041ad6a: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x4c] (READ)
// 0041ad6e: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0041ad72: MOV ECX,dword ptr [ESP]
//   Label: LAB_0041ad72
//   XREF to: Stack[-0xc0] (DATA)
// 0041ad75: ADD ECX,0x2
// 0041ad78: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0xc0] (DATA)
// 0041ad7b: CMP ECX,0x18
// 0041ad7e: JNZ 0x0041aa6b
//   XREF to: 0041aa6b (CONDITIONAL_JUMP)
// 0041ad84: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x48] (READ)
// 0041ad88: ADD ESI,0x2
// 0041ad8b: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0041ad8f: CMP ESI,ECX
// 0041ad91: JNZ 0x0041aa5e
//   XREF to: 0041aa5e (CONDITIONAL_JUMP)
// 0041ad97: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0041ad9a: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x84] (DATA)
// 0041ad9e: MOVSD ES:EDI,ESI
// 0041ad9f: MOVSD ES:EDI,ESI
// 0041ada0: MOVSD ES:EDI,ESI
// 0041ada1: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0041ada4: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x6c] (DATA)
// 0041ada8: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x90] (DATA)
// 0041adac: MOVSD ES:EDI,ESI
// 0041adad: MOVSD ES:EDI,ESI
// 0041adae: MOVSD ES:EDI,ESI
// 0041adaf: PUSH EAX
// 0041adb0: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0041adb3: PUSH ESI
// 0041adb4: CALL core_bodypart.cpp_FUN_0041a630
//   XREF to: 0041a630 (UNCONDITIONAL_CALL)
// 0041adb9: ADD ESP,0x8
// 0041adbc: MOV ESP,EBP
// 0041adbe: POP EBP
// 0041adbf: POP EDI
// 0041adc0: POP ESI
// 0041adc1: POP EBX
// 0041adc2: RET
// 0041adc3: MOV dword ptr [ESP + 0x60],EBX
//   Label: LAB_0041adc3
//   XREF to: Stack[-0x60] (WRITE)
// 0041adc7: JMP 0x0041acbd
//   XREF to: 0041acbd (UNCONDITIONAL_JUMP)
