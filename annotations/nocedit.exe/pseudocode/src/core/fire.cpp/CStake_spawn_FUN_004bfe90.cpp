// Name: core_fire.cpp_CStake_spawn_FUN_004bfe90
// Address: 004bfe90
// Address Range: [[004bfe90, 004c00b4] [004c0111, 004c0136]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CStake_spawn_FUN_004bfe90(CStake * this_ptr, float spawn_scale, CVector3f * orientation_angles, CVector3f * launch_direction, CVector3f * spawn_position, CVector3f * spawn_velocity)
// Cross-references:
//   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0 (004c7bb0) at 004c7c56 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00629c5f = 2
//   CKeyFramedModelInstance g_FireEffectFlamingStakeModel
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

void __cdecl
core_fire_cpp_CStake_spawn_FUN_004bfe90
          (CStake *this_ptr,float spawn_scale,CVector3f *orientation_angles,
          CVector3f *launch_direction,CVector3f *spawn_position,CVector3f *spawn_velocity)

{
  CKeyFramedModel *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_48;
  undefined1 local_44 [8];
  float local_3c;
  float local_38;
  undefined1 local_34 [20];
  CVector3f local_20;
  float local_14;
  float local_10;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff4c,orientation_angles);
  local_34._0_4_ = 0.0;
  local_34._4_4_ = 0.0;
  local_34._8_4_ = 10.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            ((CMatrix3x3f *)&stack0xffffff50,(CVector3f *)(local_44 + 4),(CVector3f *)local_34);
  local_58 = (launch_direction->z * (float)local_34._0_4_ +
             launch_direction->x * local_3c + launch_direction->y * local_38) * FLOAT_00629c5f;
  local_68.z = launch_direction->x * local_58;
  local_5c = launch_direction->y * local_58;
  local_58 = launch_direction->z * local_58;
  local_20.z = local_68.z - local_3c;
  local_14 = local_5c - local_38;
  local_10 = local_58 - (float)local_34._0_4_;
  if (&local_3c != &local_20.z) {
    local_3c = local_20.z;
    local_38 = local_14;
    local_34._0_4_ = local_10;
  }
  local_48 = -local_3c;
  local_44._0_4_ = -local_38;
  local_44._4_4_ = -(float)local_34._0_4_;
  if (&local_3c != &local_48) {
    local_3c = local_48;
    local_38 = (float)local_44._0_4_;
    local_34._0_4_ = local_44._4_4_;
  }
  orientation_angles->x = 0.0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     (&g_FireEffectFlamingStakeModel);
  local_20.x = (pCVar1->bounds_max).x - (pCVar1->bounds_min).x;
  local_20.y = (pCVar1->bounds_max).y - (pCVar1->bounds_min).y;
  local_20.z = (pCVar1->bounds_max).z - (pCVar1->bounds_min).z;
  if (&local_68 != &local_20) {
    local_68.x = local_20.x;
    local_68.y = local_20.y;
    local_68.z = local_20.z;
  }
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            ((CBox *)&launch_direction->y,spawn_position,spawn_velocity,&local_68,2.0);
  local_48 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
  local_44._4_4_ = 0.0;
  local_44._4_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
  core_box_cpp_CBox_setupVelocities_FUN_00420180
            ((CBox *)&launch_direction->y,(CVector3f *)(local_34 + 8),(CVector3f *)local_44);
  return;
}


// Assembly code:
// 004bfe90: PUSH EBX
//   Label: core_fire.cpp_CStake_spawn_FUN_004bfe90
// 004bfe91: PUSH EDI
// 004bfe92: PUSH EBP
// 004bfe93: SUB ESP,0xa8
// 004bfe99: MOV EBX,dword ptr [ESP + 0xc4]
// 004bfea0: MOV EDX,dword ptr [ESP + 0xc0]
// 004bfea7: PUSH EDX
// 004bfea8: LEA EAX,[ESP + 0x4]
// 004bfeac: PUSH EAX
// 004bfead: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 004bfeb2: ADD ESP,0x8
// 004bfeb5: LEA EAX,[ESP + 0x7c]
// 004bfeb9: MOV EDI,0x41200000
// 004bfebe: PUSH EAX
// 004bfebf: LEA EAX,[ESP + 0x74]
// 004bfec3: XOR ECX,ECX
// 004bfec5: PUSH EAX
// 004bfec6: LEA EAX,[ESP + 0x8]
// 004bfeca: MOV dword ptr [ESP + 0x84],ECX
// 004bfed1: PUSH EAX
// 004bfed2: MOV dword ptr [ESP + 0x8c],ECX
// 004bfed9: MOV dword ptr [ESP + 0x90],EDI
// 004bfee0: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 004bfee5: ADD ESP,0xc
// 004bfee8: FLD float ptr [EBX + 0x4]
// 004bfeeb: FMUL float ptr [ESP + 0x74]
// 004bfeef: FLD float ptr [EBX]
// 004bfef1: FMUL float ptr [ESP + 0x70]
// 004bfef5: FADDP
// 004bfef7: FLD float ptr [EBX + 0x8]
// 004bfefa: FMUL float ptr [ESP + 0x78]
// 004bfefe: FADDP
// 004bff00: FMUL float ptr [0x00629c5f]
//   XREF to: 00629c5f (READ)
// 004bff06: FLD float ptr [EBX]
// 004bff08: FXCH
// 004bff0a: FSTP float ptr [ESP + 0xa0]
// 004bff11: FMUL float ptr [ESP + 0xa0]
// 004bff18: FSTP float ptr [ESP + 0x4c]
// 004bff1c: FLD float ptr [EBX + 0x4]
// 004bff1f: FMUL float ptr [ESP + 0xa0]
// 004bff26: FSTP float ptr [ESP + 0x50]
// 004bff2a: FLD float ptr [EBX + 0x8]
// 004bff2d: FMUL float ptr [ESP + 0xa0]
// 004bff34: LEA EAX,[ESP + 0x94]
// 004bff3b: LEA EDX,[ESP + 0x70]
// 004bff3f: FLD float ptr [ESP + 0x4c]
// 004bff43: FSUB float ptr [ESP + 0x70]
// 004bff47: FLD float ptr [ESP + 0x50]
// 004bff4b: FXCH
// 004bff4d: FSTP float ptr [ESP + 0x94]
// 004bff54: FSUB float ptr [ESP + 0x74]
// 004bff58: FXCH
// 004bff5a: FST float ptr [ESP + 0x54]
// 004bff5e: FSUB float ptr [ESP + 0x78]
// 004bff62: FXCH
// 004bff64: FSTP float ptr [ESP + 0x98]
// 004bff6b: FSTP float ptr [ESP + 0x9c]
// 004bff72: CMP EDX,EAX
// 004bff74: JNZ 0x004c0111
//   XREF to: 004c0111 (CONDITIONAL_JUMP)
// 004bff7a: FLD float ptr [ESP + 0x70]
//   Label: LAB_004bff7a
// 004bff7e: FLD float ptr [ESP + 0x74]
// 004bff82: FLD float ptr [ESP + 0x78]
// 004bff86: LEA EAX,[ESP + 0x64]
// 004bff8a: LEA EDX,[ESP + 0x70]
// 004bff8e: FXCH ST2
// 004bff90: FCHS
// 004bff92: FXCH
// 004bff94: FCHS
// 004bff96: FXCH ST2
// 004bff98: FCHS
// 004bff9a: FXCH ST2
// 004bff9c: FSTP float ptr [ESP + 0x68]
// 004bffa0: FXCH
// 004bffa2: FSTP float ptr [ESP + 0x6c]
// 004bffa6: FSTP float ptr [ESP + 0x64]
// 004bffaa: CMP EDX,EAX
// 004bffac: JZ 0x004bffc6
//   XREF to: 004bffc6 (CONDITIONAL_JUMP)
// 004bffae: MOV EAX,dword ptr [ESP + 0x64]
// 004bffb2: MOV dword ptr [ESP + 0x70],EAX
// 004bffb6: MOV EAX,dword ptr [ESP + 0x68]
// 004bffba: MOV dword ptr [ESP + 0x74],EAX
// 004bffbe: MOV EAX,dword ptr [ESP + 0x6c]
// 004bffc2: MOV dword ptr [ESP + 0x78],EAX
// 004bffc6: MOV EAX,dword ptr [ESP + 0xb8]
//   Label: LAB_004bffc6
// 004bffcd: PUSH 0x2d12df4
//   XREF to: 02d12df4 (DATA)
// 004bffd2: MOV dword ptr [EAX],0x0
// 004bffd8: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004bffdd: LEA EDX,[EAX + 0x5678]
// 004bffe3: ADD ESP,0x4
// 004bffe6: MOV EAX,dword ptr [EDX]
// 004bffe8: MOV dword ptr [ESP + 0x28],EAX
// 004bffec: LEA EAX,[EDX + 0x4]
// 004bffef: MOV EAX,dword ptr [EAX]
// 004bfff1: MOV dword ptr [ESP + 0x2c],EAX
// 004bfff5: LEA EAX,[EDX + 0x8]
// 004bfff8: MOV EAX,dword ptr [EAX]
// 004bfffa: MOV dword ptr [ESP + 0x30],EAX
// 004bfffe: MOV EAX,dword ptr [EDX + 0xc]
// 004c0001: ADD EDX,0xc
// 004c0004: MOV dword ptr [ESP + 0x34],EAX
// 004c0008: LEA EAX,[EDX + 0x4]
// 004c000b: FLD float ptr [ESP + 0x34]
// 004c000f: MOV EAX,dword ptr [EAX]
// 004c0011: FSUB float ptr [ESP + 0x28]
// 004c0015: MOV dword ptr [ESP + 0x38],EAX
// 004c0019: LEA EAX,[EDX + 0x8]
// 004c001c: FLD float ptr [ESP + 0x38]
// 004c0020: LEA EDX,[ESP + 0x40]
// 004c0024: FSUB float ptr [ESP + 0x2c]
// 004c0028: MOV EAX,dword ptr [EAX]
// 004c002a: FXCH
// 004c002c: FSTP float ptr [ESP + 0x88]
// 004c0033: MOV dword ptr [ESP + 0x3c],EAX
// 004c0037: FSTP float ptr [ESP + 0x8c]
// 004c003e: FLD float ptr [ESP + 0x3c]
// 004c0042: FSUB float ptr [ESP + 0x30]
// 004c0046: LEA EAX,[ESP + 0x88]
// 004c004d: FSTP float ptr [ESP + 0x90]
// 004c0054: CMP EDX,EAX
// 004c0056: JZ 0x004c0079
//   XREF to: 004c0079 (CONDITIONAL_JUMP)
// 004c0058: MOV EAX,dword ptr [ESP + 0x88]
// 004c005f: MOV dword ptr [ESP + 0x40],EAX
// 004c0063: MOV EAX,dword ptr [ESP + 0x8c]
// 004c006a: MOV dword ptr [ESP + 0x44],EAX
// 004c006e: MOV EAX,dword ptr [ESP + 0x90]
// 004c0075: MOV dword ptr [ESP + 0x48],EAX
// 004c0079: LEA EAX,[ESP + 0x40]
//   Label: LAB_004c0079
// 004c007d: PUSH 0x40000000
// 004c0082: PUSH EAX
// 004c0083: MOV EBP,dword ptr [ESP + 0xc8]
// 004c008a: PUSH EBP
// 004c008b: MOV EAX,dword ptr [ESP + 0xc8]
// 004c0092: MOV EBX,dword ptr [ESP + 0xc4]
// 004c0099: PUSH EAX
// 004c009a: ADD EBX,0x4
// 004c009d: PUSH EBX
// 004c009e: CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   XREF to: 0041dd20 (UNCONDITIONAL_CALL)
// 004c00a3: ADD ESP,0x14
// 004c00a6: PUSH 0x4116cbe4
// 004c00ab: PUSH 0xc116cbe4
// 004c00b0: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004c0111: MOV EAX,dword ptr [ESP + 0x94]
//   Label: LAB_004c0111
// 004c0118: MOV dword ptr [ESP + 0x70],EAX
// 004c011c: MOV EAX,dword ptr [ESP + 0x98]
// 004c0123: MOV dword ptr [ESP + 0x74],EAX
// 004c0127: MOV EAX,dword ptr [ESP + 0x9c]
// 004c012e: MOV dword ptr [ESP + 0x78],EAX
// 004c0132: JMP 0x004bff7a
//   XREF to: 004bff7a (UNCONDITIONAL_JUMP)
