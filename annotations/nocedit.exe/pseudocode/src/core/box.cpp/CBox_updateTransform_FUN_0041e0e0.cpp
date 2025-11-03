// Name: core_box.cpp_CBox_updateTransform_FUN_0041e0e0
// Address: 0041e0e0
// Address Range: [[0041e0e0, 0041e2e2]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_updateTransform_FUN_0041e0e0(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
// Cross-references:
//   core_box.cpp_CBox_setupCorners_FUN_0041dd20 (0041dd20) at 0041df45 [UNCONDITIONAL_CALL]
// Globals:
//   double g_BoxDensityScale = 0.03125
//   double g_BoxInertiaCoefficient = 0.0833333333333333
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0

#include "nocturne.h"

void __cdecl
core_box_cpp_CBox_updateTransform_FUN_0041e0e0
          (CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CVector3f *pCVar12;
  CVector3f *pCVar13;
  BADSPACEBASE *in_ESP;
  int iVar14;
  float in_stack_00000014;
  CVector3f CStack_28;
  float local_18;
  float local_14;
  SScrape *pSVar15;
  
  if (this_ptr != (CBox *)new_position) {
    (this_ptr->position).x = new_position->x;
    (this_ptr->position).y = new_position->y;
    (this_ptr->position).z = new_position->z;
  }
  if (&this_ptr->orientation != new_orientation) {
    (this_ptr->orientation).x = new_orientation->x;
    (this_ptr->orientation).y = new_orientation->y;
    (this_ptr->orientation).z = new_orientation->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->rotation_matrix,&this_ptr->orientation);
  fVar1 = (this_ptr->extents).y;
  fVar2 = (this_ptr->extents).x;
  fVar3 = (this_ptr->extents).x;
  fVar4 = (this_ptr->extents).x;
  fVar11 = (float)g_BoxDensityScale;
  fVar5 = (this_ptr->extents).z;
  fVar6 = (this_ptr->extents).z;
  fVar7 = (this_ptr->extents).y;
  this_ptr->mass = (int)(in_stack_00000014 * fVar11);
  fVar10 = (float)g_BoxInertiaCoefficient;
  fVar8 = (float)this_ptr->mass;
  fVar9 = (float)this_ptr->mass;
  (this_ptr->moment_of_inertia).x =
       in_stack_00000014 * fVar11 * fVar10 * (fVar5 * fVar5 + fVar1 * fVar1);
  (this_ptr->moment_of_inertia).y = fVar8 * fVar10 * (fVar6 * fVar6 + fVar2 * fVar2);
  (this_ptr->moment_of_inertia).z = fVar9 * fVar10 * (fVar7 * fVar7 + fVar3 * fVar4);
  (this_ptr->linear_momentum).z = 0.0;
  (this_ptr->linear_momentum).y = (this_ptr->linear_momentum).z;
  (this_ptr->linear_momentum).x = (this_ptr->linear_momentum).y;
  (this_ptr->angular_momentum).z = 0.0;
  (this_ptr->angular_momentum).y = (this_ptr->angular_momentum).z;
  (this_ptr->angular_momentum).x = (this_ptr->angular_momentum).y;
  (this_ptr->linear_velocity_local).z = 0.0;
  (this_ptr->linear_velocity_local).y = (this_ptr->linear_velocity_local).z;
  (this_ptr->linear_velocity_local).x = (this_ptr->linear_velocity_local).y;
  (this_ptr->angular_velocity).z = 0.0;
  (this_ptr->angular_velocity).y = (this_ptr->angular_velocity).z;
  (this_ptr->angular_velocity).x = (this_ptr->angular_velocity).y;
  (this_ptr->linear_velocity_temp).z = 0.0;
  (this_ptr->linear_velocity_temp).y = (this_ptr->linear_velocity_temp).z;
  (this_ptr->linear_velocity_temp).x = (this_ptr->linear_velocity_temp).y;
  (this_ptr->angular_velocity_temp).z = 0.0;
  (this_ptr->angular_velocity_temp).y = (this_ptr->angular_velocity_temp).z;
  (this_ptr->angular_velocity_temp).x = (this_ptr->angular_velocity_temp).y;
  (this_ptr->linear_velocity).z = 0.0;
  (this_ptr->linear_velocity).y = (this_ptr->linear_velocity).z;
  (this_ptr->linear_velocity).x = (this_ptr->linear_velocity).y;
  iVar14 = 0;
  if (0 < this_ptr->scrape_point_count) {
    pSVar15 = this_ptr->scrape_points;
    pCVar13 = &this_ptr->scrape_points[0].transformed_position;
    do {
      pCVar12 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                          (&this_ptr->rotation_matrix,&CStack_28,&pSVar15[iVar14].local_position);
      local_18 = (this_ptr->position).x + pCVar12->x;
      local_14 = (this_ptr->position).y + pCVar12->y;
      pSVar15 = (SScrape *)((this_ptr->position).z + pCVar12->z);
      if (pCVar13 != (CVector3f *)&local_18) {
        pCVar13->x = local_18;
        pCVar13->y = local_14;
        pCVar13->z = (float)pSVar15;
      }
      iVar14 = iVar14 + 1;
      pCVar13 = (CVector3f *)((int)(pCVar13 + 4) + 4);
    } while (iVar14 < this_ptr->scrape_point_count);
  }
  this_ptr->is_valid = 1;
  return;
}


// Assembly code:
// 0041e0e0: PUSH EBX
//   Label: core_box.cpp_CBox_updateTransform_FUN_0041e0e0
// 0041e0e1: PUSH ESI
// 0041e0e2: PUSH EDI
// 0041e0e3: PUSH EBP
// 0041e0e4: SUB ESP,0x1c
// 0041e0e7: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0041e0eb: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0041e0ef: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0041e0f3: CMP ESI,EAX
// 0041e0f5: JNZ 0x0041e2b8
//   XREF to: 0041e2b8 (CONDITIONAL_JUMP)
// 0041e0fb: LEA EAX,[ESI + 0xc]
//   Label: LAB_0041e0fb
// 0041e0fe: CMP EAX,EBX
// 0041e100: JZ 0x0041e112
//   XREF to: 0041e112 (CONDITIONAL_JUMP)
// 0041e102: MOV EDX,dword ptr [EBX]
// 0041e104: MOV dword ptr [EAX],EDX
// 0041e106: MOV EDX,dword ptr [EBX + 0x4]
// 0041e109: MOV dword ptr [EAX + 0x4],EDX
// 0041e10c: MOV EDX,dword ptr [EBX + 0x8]
// 0041e10f: MOV dword ptr [EAX + 0x8],EDX
// 0041e112: LEA EAX,[ESI + 0xc]
//   Label: LAB_0041e112
// 0041e115: PUSH EAX
// 0041e116: LEA EBP,[ESI + 0x18]
// 0041e119: PUSH EBP
// 0041e11a: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0041e11f: FLD float ptr [ESI + 0xa8]
// 0041e125: FMUL ST0
// 0041e127: FLD float ptr [ESI + 0xa4]
// 0041e12d: FMUL ST0
// 0041e12f: FLD float ptr [ESI + 0xa4]
// 0041e135: ADD ESP,0x8
// 0041e138: FMUL float ptr [ESI + 0xa4]
// 0041e13e: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0041e142: FMUL double ptr [0x006164af]
//   XREF to: 006164af (READ)
// 0041e148: FLD float ptr [ESI + 0xac]
// 0041e14e: FMUL ST0
// 0041e150: FLD float ptr [ESI + 0xac]
// 0041e156: FMUL ST0
// 0041e158: FLD float ptr [ESI + 0xa8]
// 0041e15e: FMUL ST0
// 0041e160: FXCH ST2
// 0041e162: FADDP ST6,ST0
// 0041e164: FXCH ST2
// 0041e166: FST float ptr [ESI + 0x94]
// 0041e16c: FLD double ptr [0x006164b7]
//   XREF to: 006164b7 (READ)
// 0041e172: FXCH
// 0041e174: FMUL ST1
// 0041e176: FXCH ST3
// 0041e178: FADDP ST5,ST0
// 0041e17a: FXCH
// 0041e17c: FADDP ST3,ST0
// 0041e17e: FLD float ptr [ESI + 0x94]
// 0041e184: FMUL ST1
// 0041e186: FLD float ptr [ESI + 0x94]
// 0041e18c: FMULP ST2
// 0041e18e: FXCH ST2
// 0041e190: FMULP ST5
// 0041e192: FXCH
// 0041e194: FMULP ST3
// 0041e196: FMULP
// 0041e198: LEA EAX,[ESI + 0x64]
// 0041e19b: FXCH ST2
// 0041e19d: FSTP float ptr [ESI + 0x98]
// 0041e1a3: FSTP float ptr [ESI + 0x9c]
// 0041e1a9: FSTP float ptr [ESI + 0xa0]
// 0041e1af: MOV dword ptr [EAX + 0x8],0x0
// 0041e1b6: MOV EDX,dword ptr [EAX + 0x8]
// 0041e1b9: MOV dword ptr [EAX + 0x4],EDX
// 0041e1bc: MOV EDX,dword ptr [EAX + 0x4]
// 0041e1bf: MOV dword ptr [EAX],EDX
// 0041e1c1: LEA EAX,[ESI + 0x88]
// 0041e1c7: MOV dword ptr [EAX + 0x8],0x0
// 0041e1ce: MOV EDX,dword ptr [EAX + 0x8]
// 0041e1d1: MOV dword ptr [EAX + 0x4],EDX
// 0041e1d4: MOV EDX,dword ptr [EAX + 0x4]
// 0041e1d7: MOV dword ptr [EAX],EDX
// 0041e1d9: LEA EAX,[ESI + 0x4c]
// 0041e1dc: MOV dword ptr [EAX + 0x8],0x0
// 0041e1e3: MOV EDX,dword ptr [EAX + 0x8]
// 0041e1e6: MOV dword ptr [EAX + 0x4],EDX
// 0041e1e9: MOV EDX,dword ptr [EAX + 0x4]
// 0041e1ec: MOV dword ptr [EAX],EDX
// 0041e1ee: LEA EAX,[ESI + 0x70]
// 0041e1f1: MOV dword ptr [EAX + 0x8],0x0
// 0041e1f8: MOV EDX,dword ptr [EAX + 0x8]
// 0041e1fb: MOV dword ptr [EAX + 0x4],EDX
// 0041e1fe: MOV EDX,dword ptr [EAX + 0x4]
// 0041e201: MOV dword ptr [EAX],EDX
// 0041e203: LEA EAX,[ESI + 0x58]
// 0041e206: MOV dword ptr [EAX + 0x8],0x0
// 0041e20d: MOV EDX,dword ptr [EAX + 0x8]
// 0041e210: MOV dword ptr [EAX + 0x4],EDX
// 0041e213: MOV EDX,dword ptr [EAX + 0x4]
// 0041e216: MOV dword ptr [EAX],EDX
// 0041e218: LEA EAX,[ESI + 0x7c]
// 0041e21b: MOV dword ptr [EAX + 0x8],0x0
// 0041e222: MOV EDX,dword ptr [EAX + 0x8]
// 0041e225: MOV dword ptr [EAX + 0x4],EDX
// 0041e228: MOV EDX,dword ptr [EAX + 0x4]
// 0041e22b: MOV dword ptr [EAX],EDX
// 0041e22d: LEA EAX,[ESI + 0x40]
// 0041e230: MOV dword ptr [EAX + 0x8],0x0
// 0041e237: MOV EDX,dword ptr [EAX + 0x8]
// 0041e23a: MOV dword ptr [EAX + 0x4],EDX
// 0041e23d: MOV EDX,dword ptr [EAX + 0x4]
// 0041e240: MOV dword ptr [EAX],EDX
// 0041e242: MOV EDX,dword ptr [ESI + 0xb0]
// 0041e248: XOR EDI,EDI
// 0041e24a: TEST EDX,EDX
// 0041e24c: JLE 0x0041e2a6
//   XREF to: 0041e2a6 (CONDITIONAL_JUMP)
// 0041e24e: LEA EAX,[ESI + 0xb4]
// 0041e254: LEA EBX,[ESI + 0xc0]
// 0041e25a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041e25e: IMUL EAX,EDI,0x34
//   Label: LAB_0041e25e
// 0041e261: ADD EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0041e265: PUSH EAX
// 0041e266: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2c] (DATA)
// 0041e26a: PUSH EAX
// 0041e26b: PUSH EBP
// 0041e26c: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0041e271: FLD float ptr [ESI]
// 0041e273: FADD float ptr [EAX]
// 0041e275: ADD ESP,0xc
// 0041e278: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (WRITE)
// 0041e27c: FLD float ptr [ESI + 0x4]
// 0041e27f: FADD float ptr [EAX + 0x4]
// 0041e282: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (WRITE)
// 0041e286: FLD float ptr [ESI + 0x8]
// 0041e289: FADD float ptr [EAX + 0x8]
// 0041e28c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x20] (DATA)
// 0041e290: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (WRITE)
// 0041e294: CMP EBX,EAX
// 0041e296: JNZ 0x0041e2cd
//   XREF to: 0041e2cd (CONDITIONAL_JUMP)
// 0041e298: INC EDI
//   Label: LAB_0041e298
// 0041e299: MOV ECX,dword ptr [ESI + 0xb0]
// 0041e29f: ADD EBX,0x34
// 0041e2a2: CMP EDI,ECX
// 0041e2a4: JL 0x0041e25e
//   XREF to: 0041e25e (CONDITIONAL_JUMP)
// 0041e2a6: MOV dword ptr [ESI + 0x254],0x1
//   Label: LAB_0041e2a6
// 0041e2b0: ADD ESP,0x1c
// 0041e2b3: POP EBP
// 0041e2b4: POP EDI
// 0041e2b5: POP ESI
// 0041e2b6: POP EBX
// 0041e2b7: RET
// 0041e2b8: MOV EDX,dword ptr [EAX]
//   Label: LAB_0041e2b8
// 0041e2ba: MOV dword ptr [ESI],EDX
// 0041e2bc: MOV EDX,dword ptr [EAX + 0x4]
// 0041e2bf: MOV dword ptr [ESI + 0x4],EDX
// 0041e2c2: MOV EDX,dword ptr [EAX + 0x8]
// 0041e2c5: MOV dword ptr [ESI + 0x8],EDX
// 0041e2c8: JMP 0x0041e0fb
//   XREF to: 0041e0fb (UNCONDITIONAL_JUMP)
// 0041e2cd: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0041e2cd
//   XREF to: Stack[-0x20] (DATA)
// 0041e2d1: MOV dword ptr [EBX],EAX
// 0041e2d3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0041e2d7: MOV dword ptr [EBX + 0x4],EAX
// 0041e2da: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0041e2de: MOV dword ptr [EBX + 0x8],EAX
// 0041e2e1: JMP 0x0041e298
//   XREF to: 0041e298 (UNCONDITIONAL_JUMP)
