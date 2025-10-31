// Name: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
// Address: 00499f10
// Address Range: [[00499f10, 0049a15f]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10(CDemonRaytrace * this_ptr, CVector3f * offset_vector, void * light_data, CVector3f * start_position, CVector3f * end_position)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_FUN_005744d0 (005744d0) at 0057452a [UNCONDITIONAL_CALL]
// Globals:
//   double g_VoxelStepMultiplier2 = 2
//   double g_VoxelSampleOffset2 = 0.5
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
          (CDemonRaytrace *this_ptr,CVector3f *offset_vector,void *light_data,
          CVector3f *start_position,CVector3f *end_position)

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
            ((CMatrix3x3f *)&stack0xffffff74,(CVector3f *)light_data);
  local_54 = end_position->x - start_position->x;
  local_50 = end_position->y - start_position->y;
  local_4c = end_position->z - start_position->z;
  fVar6 = (float10)local_50 / (float10)(this_ptr->adjusted_size).y;
  fVar7 = (float10)local_4c / (float10)(this_ptr->adjusted_size).z;
  fVar8 = (float10)g_VoxelStepMultiplier2;
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
              fVar3 = (float)g_VoxelSampleOffset2;
              local_38._8_4_ =
                   (float)pCVar4 * fVar3 + (float)iVar11 * (float)pCVar4 + start_position->x;
              fStack_2c = (float)fVar6 * fVar3 + (float)iVar12 * (float)fVar6 + start_position->y;
              local_28 = (float)iVar5 * fVar2 + start_position->z + fVar2 * fVar3;
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
              core_dtrace_cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280(this_ptr,pCVar4);
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
// 00499f10: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
// 00499f11: PUSH ESI
// 00499f12: PUSH EDI
// 00499f13: PUSH EBP
// 00499f14: MOV EBP,ESP
// 00499f16: SUB ESP,0x88
// 00499f1c: AND ESP,0xfffffff8
// 00499f1f: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00499f22: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00499f25: MOV EBX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00499f28: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00499f2b: PUSH EDX
// 00499f2c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8c] (DATA)
// 00499f30: PUSH EAX
// 00499f31: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00499f36: FLD float ptr [EBX]
// 00499f38: FSUB float ptr [ESI]
// 00499f3a: ADD ESP,0x8
// 00499f3d: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (WRITE)
// 00499f41: FLD float ptr [EBX + 0x4]
// 00499f44: FSUB float ptr [ESI + 0x4]
// 00499f47: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00499f4a: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (WRITE)
// 00499f4e: FLD float ptr [EBX + 0x8]
// 00499f51: FSUB float ptr [ESI + 0x8]
// 00499f54: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 00499f58: FXCH
// 00499f5a: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (WRITE)
// 00499f5e: FDIV float ptr [EAX + 0x34]
// 00499f61: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 00499f65: FDIV float ptr [EAX + 0x38]
// 00499f68: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 00499f6c: FDIV float ptr [EAX + 0x3c]
// 00499f6f: FXCH ST2
// 00499f71: FLD double ptr [0x00622d6a]
//   XREF to: 00622d6a (READ)
// 00499f77: FXCH
// 00499f79: FMUL ST1
// 00499f7b: FLD1
// 00499f7d: FADDP
// 00499f7f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499f84: FISTP dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (WRITE)
// 00499f88: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (READ)
// 00499f8c: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499f93: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499f9a: FDIVR float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 00499f9e: FXCH ST2
// 00499fa0: FMUL ST1
// 00499fa2: FLD1
// 00499fa4: FADDP
// 00499fa6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499fab: FISTP dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (WRITE)
// 00499faf: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 00499fb3: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499fba: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499fc1: FDIVR float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 00499fc5: FXCH ST3
// 00499fc7: FMULP
// 00499fc9: FLD1
// 00499fcb: FADDP
// 00499fcd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499fd2: FISTP dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00499fd6: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 00499fda: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499fe1: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 00499fe8: FDIVR float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (READ)
// 00499fec: XOR ECX,ECX
// 00499fee: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00499ff2: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (READ)
// 00499ff6: FXCH
// 00499ff8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 00499ffb: FXCH
// 00499ffd: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x94] (WRITE)
// 0049a001: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (WRITE)
// 0049a005: TEST EBX,EBX
// 0049a007: JLE 0x0049a159
//   XREF to: 0049a159 (CONDITIONAL_JUMP)
// 0049a00d: XOR ECX,ECX
//   Label: LAB_0049a00d
// 0049a00f: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 0049a013: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0049a01a: TEST EBX,EBX
// 0049a01c: JLE 0x0049a144
//   XREF to: 0049a144 (CONDITIONAL_JUMP)
// 0049a022: MOV ECX,dword ptr [ESP + 0x7c]
//   Label: LAB_0049a022
//   XREF to: Stack[-0x1c] (READ)
// 0049a026: XOR EBX,EBX
// 0049a028: TEST ECX,ECX
// 0049a02a: JLE 0x0049a129
//   XREF to: 0049a129 (CONDITIONAL_JUMP)
// 0049a030: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_0049a030
//   XREF to: Stack[-0x20] (READ)
// 0049a034: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049a03b: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 0049a042: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 0049a049: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0049a04c: FXCH
// 0049a04e: FMUL ST1
// 0049a050: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049a057: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 0049a05e: FXCH
// 0049a060: FADD float ptr [ESI]
// 0049a062: FXCH
// 0049a064: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x94] (READ)
// 0049a068: FXCH
// 0049a06a: FMUL ST1
// 0049a06c: FXCH ST3
// 0049a06e: FLD double ptr [0x00622d72]
//   XREF to: 00622d72 (READ)
// 0049a074: FXCH
// 0049a076: FMUL ST1
// 0049a078: MOV dword ptr [ESP + 0x84],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0049a07f: FADDP ST3,ST0
// 0049a081: FILD dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x14] (READ)
// 0049a088: FXCH ST3
// 0049a08a: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (WRITE)
// 0049a08e: FXCH ST3
// 0049a090: FADD float ptr [ESI + 0x4]
// 0049a093: FXCH ST2
// 0049a095: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x90] (READ)
// 0049a099: FXCH
// 0049a09b: FMUL ST1
// 0049a09d: FXCH ST2
// 0049a09f: FMUL ST4
// 0049a0a1: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x40] (DATA)
// 0049a0a5: FADDP ST3,ST0
// 0049a0a7: PUSH EAX
// 0049a0a8: FXCH ST2
// 0049a0aa: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x3c] (WRITE)
// 0049a0ae: FADD float ptr [ESI + 0x8]
// 0049a0b1: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x34] (DATA)
// 0049a0b5: FXCH
// 0049a0b7: FMULP ST2
// 0049a0b9: PUSH EAX
// 0049a0ba: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x8c] (DATA)
// 0049a0be: FADDP
// 0049a0c0: PUSH EAX
// 0049a0c1: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x38] (WRITE)
// 0049a0c5: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0049a0ca: FLD float ptr [EAX]
// 0049a0cc: FADD float ptr [EDI]
// 0049a0ce: ADD ESP,0xc
// 0049a0d1: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x64] (WRITE)
// 0049a0d5: FLD float ptr [EAX + 0x4]
// 0049a0d8: FADD float ptr [EDI + 0x4]
// 0049a0db: LEA EDX,[ESP + 0x4c]
//   XREF to: Stack[-0x4c] (DATA)
// 0049a0df: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (WRITE)
// 0049a0e3: FLD float ptr [EAX + 0x8]
// 0049a0e6: FADD float ptr [EDI + 0x8]
// 0049a0e9: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x64] (DATA)
// 0049a0ed: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (WRITE)
// 0049a0f1: CMP EDX,EAX
// 0049a0f3: JZ 0x0049a10d
//   XREF to: 0049a10d (CONDITIONAL_JUMP)
// 0049a0f5: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x64] (DATA)
// 0049a0f9: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0049a0fd: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (READ)
// 0049a101: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0049a105: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (READ)
// 0049a109: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0049a10d: LEA EAX,[ESP + 0x4c]
//   Label: LAB_0049a10d
//   XREF to: Stack[-0x4c] (DATA)
// 0049a111: PUSH EAX
// 0049a112: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049a115: PUSH EAX
// 0049a116: CALL core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
//   XREF to: 0049a280 (UNCONDITIONAL_CALL)
// 0049a11b: ADD ESP,0x8
// 0049a11e: INC EBX
// 0049a11f: CMP EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 0049a123: JL 0x0049a030
//   XREF to: 0049a030 (CONDITIONAL_JUMP)
// 0049a129: MOV EAX,dword ptr [ESP + 0x80]
//   Label: LAB_0049a129
//   XREF to: Stack[-0x18] (READ)
// 0049a130: INC EAX
// 0049a131: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x24] (READ)
// 0049a135: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0049a13c: CMP EAX,EDX
// 0049a13e: JL 0x0049a022
//   XREF to: 0049a022 (CONDITIONAL_JUMP)
// 0049a144: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_0049a144
//   XREF to: Stack[-0x20] (READ)
// 0049a148: INC EAX
// 0049a149: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x28] (READ)
// 0049a14d: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0049a151: CMP EAX,EDX
// 0049a153: JL 0x0049a00d
//   XREF to: 0049a00d (CONDITIONAL_JUMP)
// 0049a159: MOV ESP,EBP
//   Label: LAB_0049a159
// 0049a15b: POP EBP
// 0049a15c: POP EDI
// 0049a15d: POP ESI
// 0049a15e: POP EBX
// 0049a15f: RET
