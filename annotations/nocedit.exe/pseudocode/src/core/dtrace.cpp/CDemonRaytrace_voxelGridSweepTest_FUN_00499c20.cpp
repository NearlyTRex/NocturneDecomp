// Name: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
// Address: 00499c20
// Address Range: [[00499c20, 00499e6f]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20(CDemonRaytrace * this_ptr, CVector3f * offset_vector, CVector3f * start_position, CVector3f * end_position, void * light_data)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_FUN_00574440 (00574440) at 0057449a [UNCONDITIONAL_CALL]
// Globals:
//   double g_VoxelStepMultiplier = 2
//   double g_VoxelSampleOffset = 0.5
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
          (CDemonRaytrace *this_ptr,CVector3f *offset_vector,CVector3f *start_position,
          CVector3f *end_position,void *light_data)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  undefined4 extraout_EDX;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  CMatrix3x3f CStack_7c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  undefined1 local_38 [12];
  float fStack_2c;
  float local_28;
  CVector3f local_24;
  int local_18;
  int local_14;
  int iVar11;
  int iVar12;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff74,start_position);
                    /* WARNING: Load size is inaccurate */
  local_54 = *light_data - end_position->x;
  local_50 = *(float *)((int)light_data + 4) - end_position->y;
  local_4c = *(float *)((int)light_data + 8) - end_position->z;
  fVar6 = (float10)local_50 / (float10)(this_ptr->adjusted_size).y;
  fVar7 = (float10)local_4c / (float10)(this_ptr->adjusted_size).z;
  fVar8 = (float10)g_VoxelStepMultiplier;
  fVar9 = (float10)1 + ((float10)local_54 / (float10)(this_ptr->adjusted_size).x) * fVar8;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,this_ptr));
  local_24.y = (float)(int)ROUND(fVar9);
  fVar9 = (float10)local_50 / (float10)(int)local_24.y;
  fVar6 = (float10)1 + fVar6 * fVar8;
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),local_24.y));
  local_18 = (int)ROUND(fVar6);
  fVar6 = (float10)local_48 / (float10)local_18;
  fVar7 = (float10)1 + fVar7 * fVar8;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),local_18));
  fVar2 = local_40 / (float)(int)ROUND(fVar7);
  iVar11 = 0;
  pCVar4 = (CVector3f *)(float)fVar9;
  if (0 < local_18) {
    do {
      iVar12 = 0;
      if (0 < local_14) {
        do {
          iVar5 = 0;
          if (0 < (int)ROUND(fVar7)) {
            do {
              fVar3 = (float)g_VoxelSampleOffset;
              local_38._8_4_ =
                   (float)pCVar4 * fVar3 + (float)iVar11 * (float)pCVar4 + end_position->x;
              fStack_2c = (float)fVar6 * fVar3 + (float)iVar12 * (float)fVar6 + end_position->y;
              local_28 = (float)iVar5 * fVar2 + end_position->z + fVar2 * fVar3;
              pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (&CStack_7c,&local_24,(CVector3f *)(local_38 + 8));
              local_50 = pCVar4->x + offset_vector->x;
              local_4c = pCVar4->y + offset_vector->y;
              local_48 = pCVar4->z + offset_vector->z;
              if ((float *)local_38 != &local_50) {
                local_38._0_4_ = local_50;
                local_38._4_4_ = local_4c;
                local_38._8_4_ = local_48;
              }
              pCVar4 = (CVector3f *)local_38;
              core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(this_ptr,pCVar4);
              bVar1 = iVar5 + 1 < iVar5;
              iVar5 = iVar5 + 1;
            } while (bVar1);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_14);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_18);
  }
  return;
}


// Assembly code:
// 00499c20: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
// 00499c21: PUSH ESI
// 00499c22: PUSH EDI
// 00499c23: PUSH EBP
// 00499c24: MOV EBP,ESP
// 00499c26: SUB ESP,0x88
// 00499c2c: AND ESP,0xfffffff8
// 00499c2f: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00499c32: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00499c35: MOV EBX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00499c38: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00499c3b: PUSH EDX
// 00499c3c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8c] (DATA)
// 00499c40: PUSH EAX
// 00499c41: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00499c46: FLD float ptr [EBX]
// 00499c48: FSUB float ptr [ESI]
// 00499c4a: ADD ESP,0x8
// 00499c4d: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (WRITE)
// 00499c51: FLD float ptr [EBX + 0x4]
// 00499c54: FSUB float ptr [ESI + 0x4]
// 00499c57: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00499c5a: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (WRITE)
// 00499c5e: FLD float ptr [EBX + 0x8]
// 00499c61: FSUB float ptr [ESI + 0x8]
// 00499c64: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 00499c68: FXCH
// 00499c6a: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (WRITE)
// 00499c6e: FDIV float ptr [EAX + 0x34]
// 00499c71: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 00499c75: FDIV float ptr [EAX + 0x38]
// 00499c78: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 00499c7c: FDIV float ptr [EAX + 0x3c]
// 00499c7f: FXCH ST2
// 00499c81: FLD double ptr [0x00622d5a]
//   XREF to: 00622d5a (READ)
// 00499c87: FXCH
// 00499c89: FMUL ST1
// 00499c8b: FLD1
// 00499c8d: FADDP
// 00499c8f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499c94: FISTP dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (WRITE)
// 00499c98: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (READ)
// 00499c9c: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499ca3: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499caa: FDIVR float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 00499cae: FXCH ST2
// 00499cb0: FMUL ST1
// 00499cb2: FLD1
// 00499cb4: FADDP
// 00499cb6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499cbb: FISTP dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (WRITE)
// 00499cbf: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 00499cc3: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499cca: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499cd1: FDIVR float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 00499cd5: FXCH ST3
// 00499cd7: FMULP
// 00499cd9: FLD1
// 00499cdb: FADDP
// 00499cdd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499ce2: FISTP dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00499ce6: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 00499cea: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499cf1: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499cf8: FDIVR float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 00499cfc: XOR ECX,ECX
// 00499cfe: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00499d02: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (READ)
// 00499d06: FXCH
// 00499d08: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00499d0b: FXCH
// 00499d0d: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x94] (WRITE)
// 00499d11: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (WRITE)
// 00499d15: TEST EBX,EBX
// 00499d17: JLE 0x00499e69
//   XREF to: 00499e69 (CONDITIONAL_JUMP)
// 00499d1d: XOR ECX,ECX
//   Label: LAB_00499d1d
// 00499d1f: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 00499d23: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00499d2a: TEST EBX,EBX
// 00499d2c: JLE 0x00499e54
//   XREF to: 00499e54 (CONDITIONAL_JUMP)
// 00499d32: MOV ECX,dword ptr [ESP + 0x7c]
//   Label: LAB_00499d32
//   XREF to: Stack[-0x1c] (READ)
// 00499d36: XOR EBX,EBX
// 00499d38: TEST ECX,ECX
// 00499d3a: JLE 0x00499e39
//   XREF to: 00499e39 (CONDITIONAL_JUMP)
// 00499d40: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00499d40
//   XREF to: Stack[-0x20] (READ)
// 00499d44: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499d4b: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499d52: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 00499d59: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00499d5c: FXCH
// 00499d5e: FMUL ST1
// 00499d60: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499d67: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499d6e: FXCH
// 00499d70: FADD float ptr [ESI]
// 00499d72: FXCH
// 00499d74: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x94] (READ)
// 00499d78: FXCH
// 00499d7a: FMUL ST1
// 00499d7c: FXCH ST3
// 00499d7e: FLD double ptr [0x00622d62]
//   XREF to: 00622d62 (READ)
// 00499d84: FXCH
// 00499d86: FMUL ST1
// 00499d88: MOV dword ptr [ESP + 0x84],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00499d8f: FADDP ST3,ST0
// 00499d91: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499d98: FXCH ST3
// 00499d9a: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (WRITE)
// 00499d9e: FXCH ST3
// 00499da0: FADD float ptr [ESI + 0x4]
// 00499da3: FXCH ST2
// 00499da5: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (READ)
// 00499da9: FXCH
// 00499dab: FMUL ST1
// 00499dad: FXCH ST2
// 00499daf: FMUL ST4
// 00499db1: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x40] (DATA)
// 00499db5: FADDP ST3,ST0
// 00499db7: PUSH EAX
// 00499db8: FXCH ST2
// 00499dba: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x3c] (WRITE)
// 00499dbe: FADD float ptr [ESI + 0x8]
// 00499dc1: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x34] (DATA)
// 00499dc5: FXCH
// 00499dc7: FMULP ST2
// 00499dc9: PUSH EAX
// 00499dca: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x8c] (DATA)
// 00499dce: FADDP
// 00499dd0: PUSH EAX
// 00499dd1: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x38] (WRITE)
// 00499dd5: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00499dda: FLD float ptr [EAX]
// 00499ddc: FADD float ptr [EDI]
// 00499dde: ADD ESP,0xc
// 00499de1: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x64] (WRITE)
// 00499de5: FLD float ptr [EAX + 0x4]
// 00499de8: FADD float ptr [EDI + 0x4]
// 00499deb: LEA EDX,[ESP + 0x4c]
//   XREF to: Stack[-0x4c] (DATA)
// 00499def: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (WRITE)
// 00499df3: FLD float ptr [EAX + 0x8]
// 00499df6: FADD float ptr [EDI + 0x8]
// 00499df9: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x64] (DATA)
// 00499dfd: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (WRITE)
// 00499e01: CMP EDX,EAX
// 00499e03: JZ 0x00499e1d
//   XREF to: 00499e1d (CONDITIONAL_JUMP)
// 00499e05: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x64] (DATA)
// 00499e09: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00499e0d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (READ)
// 00499e11: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00499e15: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (READ)
// 00499e19: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00499e1d: LEA EAX,[ESP + 0x4c]
//   Label: LAB_00499e1d
//   XREF to: Stack[-0x4c] (DATA)
// 00499e21: PUSH EAX
// 00499e22: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00499e25: PUSH EAX
// 00499e26: CALL core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
//   XREF to: 0049a160 (UNCONDITIONAL_CALL)
// 00499e2b: ADD ESP,0x8
// 00499e2e: INC EBX
// 00499e2f: CMP EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 00499e33: JL 0x00499d40
//   XREF to: 00499d40 (CONDITIONAL_JUMP)
// 00499e39: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_00499e39
//   XREF to: Stack[-0x18] (READ)
// 00499e40: INC EAX
// 00499e41: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 00499e45: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00499e4c: CMP EAX,EDX
// 00499e4e: JL 0x00499d32
//   XREF to: 00499d32 (CONDITIONAL_JUMP)
// 00499e54: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_00499e54
//   XREF to: Stack[-0x20] (READ)
// 00499e58: INC EAX
// 00499e59: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (READ)
// 00499e5d: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00499e61: CMP EAX,EDX
// 00499e63: JL 0x00499d1d
//   XREF to: 00499d1d (CONDITIONAL_JUMP)
// 00499e69: MOV ESP,EBP
//   Label: LAB_00499e69
// 00499e6b: POP EBP
// 00499e6c: POP EDI
// 00499e6d: POP ESI
// 00499e6e: POP EBX
// 00499e6f: RET
