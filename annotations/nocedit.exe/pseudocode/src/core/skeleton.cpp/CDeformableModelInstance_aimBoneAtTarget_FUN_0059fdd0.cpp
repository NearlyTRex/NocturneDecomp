// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
// Address: 0059fdd0
// Address Range: [[0059fdd0, 0059ff14]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0(CDeformableModelInstance * this_ptr, CVector3f * target_position, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)
// Globals:
//   double DOUBLE_0064ee28 = 0.00100000000000000
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
          (CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar2;
  byte bVar3;
  CQuaternion4f *in_stack_00000028;
  int in_stack_0000002c;
  CDeformableModel_MotionBlendWeightFunc *in_stack_00000034;
  CQuaternion4f *apCStackY_187c [1521];
  float in_stack_ffffff5c;
  undefined1 *angle_radians;
  CQuaternion4f *quat1_ptr;
  CQuaternion4f *quat2_ptr;
  CQuaternion4f *in_stack_ffffff64;
  CQuaternion4f *in_stack_ffffff68;
  undefined4 uStack_84;
  undefined1 auStack_80 [12];
  undefined4 auStack_74 [4];
  CQuaternion4f CStack_64;
  undefined4 auStack_54 [4];
  undefined4 uStack_44;
  undefined4 auStack_40 [4];
  undefined4 uStack_30;
  CQuaternion4f *local_2c [2];
  CVector3f local_24;
  CVector3f CStack_18;
  CQuaternion4f *pCStack_c;
  
  bVar3 = 0;
  if (blend_weight <= (float)DOUBLE_0064ee28) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr,(CVector3f *)&CStack_18.z,(int)blend_callback);
  local_24.x = target_position->x - pCVar1->x;
  local_24.y = target_position->y - pCVar1->y;
  local_24.z = target_position->z - pCVar1->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_18,&local_24);
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)CStack_18.y,in_stack_ffffff5c);
  angle_radians = &stack0xffffff64;
  puVar2 = (undefined4 *)((int)&local_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(CQuaternion4f **)(&stack0xffffff64 + (uint)bVar3 * -8) = local_2c[(uint)bVar3 * -2 + 1];
  *(undefined4 *)(auStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x18) = *puVar2;
  quat2_ptr = local_2c[0];
  *(undefined4 *)
   ((int)(auStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x18) + ((uint)bVar3 * -2 + 1) * 4) =
       puVar2[(uint)bVar3 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(pCStack_c,(float)angle_radians);
  quat1_ptr = (CQuaternion4f *)(auStack_80 + 8);
  auStack_80._4_4_ = CStack_64.z;
  auStack_74[(uint)bVar3 * -2 + -1] = auStack_54[(uint)bVar3 * -2];
  auStack_74[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
       auStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  (auStack_74 + (uint)bVar3 * -2 + (uint)bVar3 * -2)[(uint)bVar3 * -2 + 1] =
       (auStack_54 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(in_stack_00000028,quat1_ptr,quat2_ptr);
  auStack_74[3] = uStack_44;
  *(undefined4 *)((int)&CStack_64 + (uint)bVar3 * -8) = auStack_40[(uint)bVar3 * -2];
  auStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -3] =
       auStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  (auStack_54 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -3)[(uint)bVar3 * -2 + 1] =
       (auStack_40 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_64,in_stack_ffffff64,in_stack_ffffff68);
  uStack_84 = uStack_30;
  *(CQuaternion4f **)(auStack_80 + (uint)bVar3 * -8) = local_2c[(uint)bVar3 * -2];
  *(CQuaternion4f **)(auStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 4) =
       local_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  *(CQuaternion4f **)
   ((int)(auStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 4) + ((uint)bVar3 * -2 + 1) * 4) =
       (local_2c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (this_ptr,(CQuaternion4f *)auStack_80,(float)in_stack_00000028,in_stack_0000002c,
             in_stack_00000034);
  return;
}


// Assembly code:
// 0059fdd0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
// 0059fdd1: PUSH ESI
// 0059fdd2: SUB ESP,0xa4
// 0059fdd8: MOV EBX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x4] (READ)
// 0059fddf: MOV ESI,dword ptr [ESP + 0xb4]
//   XREF to: Stack[0x8] (READ)
// 0059fde6: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[0xc] (READ)
// 0059fded: FCOMP double ptr [0x0064ee28]
//   XREF to: 0064ee28 (READ)
// 0059fdf3: FNSTSW AX
// 0059fdf5: SAHF
// 0059fdf6: JA 0x0059fe01
//   XREF to: 0059fe01 (CONDITIONAL_JUMP)
// 0059fdf8: ADD ESP,0xa4
// 0059fdfe: POP ESI
// 0059fdff: POP EBX
// 0059fe00: RET
// 0059fe01: PUSH EDI
//   Label: LAB_0059fe01
// 0059fe02: PUSH EBX
// 0059fe03: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059fe08: ADD ESP,0x4
// 0059fe0b: MOV EDX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[0x10] (READ)
// 0059fe12: PUSH EDX
// 0059fe13: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x14] (DATA)
// 0059fe1a: PUSH EAX
// 0059fe1b: PUSH EBX
// 0059fe1c: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0059fe21: FLD float ptr [ESI]
// 0059fe23: FSUB float ptr [EAX]
// 0059fe25: ADD ESP,0xc
// 0059fe28: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x2c] (WRITE)
// 0059fe2f: FLD float ptr [ESI + 0x4]
// 0059fe32: FSUB float ptr [EAX + 0x4]
// 0059fe35: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x28] (WRITE)
// 0059fe3c: FLD float ptr [ESI + 0x8]
// 0059fe3f: FSUB float ptr [EAX + 0x8]
// 0059fe42: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x2c] (DATA)
// 0059fe49: PUSH EAX
// 0059fe4a: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x20] (DATA)
// 0059fe51: PUSH EAX
// 0059fe52: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x24] (WRITE)
// 0059fe59: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0059fe5e: ADD ESP,0x8
// 0059fe61: LEA ESI,[ESP + 0x74]
//   XREF to: Stack[-0x3c] (DATA)
// 0059fe65: PUSH dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x20] (READ)
// 0059fe6c: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0xac] (DATA)
// 0059fe70: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 0059fe75: ADD ESP,0x4
// 0059fe78: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xac] (DATA)
// 0059fe7c: LEA ESI,[ESP + 0x74]
//   XREF to: Stack[-0x3c] (DATA)
// 0059fe80: PUSH EAX
// 0059fe81: MOVSD ES:EDI,ESI
// 0059fe82: MOVSD ES:EDI,ESI
// 0059fe83: MOVSD ES:EDI,ESI
// 0059fe84: MOVSD ES:EDI,ESI
// 0059fe85: PUSH dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x1c] (READ)
// 0059fe8c: LEA ESI,[ESP + 0x4c]
//   XREF to: Stack[-0x6c] (DATA)
// 0059fe90: LEA EDI,[ESP + 0x2c]
//   XREF to: Stack[-0x8c] (DATA)
// 0059fe94: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 0059fe99: LEA ESI,[ESP + 0x4c]
//   XREF to: Stack[-0x6c] (DATA)
// 0059fe9d: ADD ESP,0x4
// 0059fea0: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x8c] (DATA)
// 0059fea4: MOV ECX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[0x14] (READ)
// 0059feab: PUSH EAX
// 0059feac: MOVSD ES:EDI,ESI
// 0059fead: MOVSD ES:EDI,ESI
// 0059feae: MOVSD ES:EDI,ESI
// 0059feaf: MOVSD ES:EDI,ESI
// 0059feb0: PUSH ECX
// 0059feb1: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x5c] (DATA)
// 0059feb5: LEA EDI,[ESP + 0x40]
//   XREF to: Stack[-0x7c] (DATA)
// 0059feb9: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059febe: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x5c] (DATA)
// 0059fec2: ADD ESP,0x8
// 0059fec5: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x7c] (DATA)
// 0059fec9: MOVSD ES:EDI,ESI
// 0059feca: MOVSD ES:EDI,ESI
// 0059fecb: MOVSD ES:EDI,ESI
// 0059fecc: MOVSD ES:EDI,ESI
// 0059fecd: PUSH EAX
// 0059fece: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x4c] (DATA)
// 0059fed2: LEA EDI,[ESP + 0x1c]
//   XREF to: Stack[-0x9c] (DATA)
// 0059fed6: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059fedb: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x4c] (DATA)
// 0059fedf: ADD ESP,0x8
// 0059fee2: MOVSD ES:EDI,ESI
// 0059fee3: MOVSD ES:EDI,ESI
// 0059fee4: MOVSD ES:EDI,ESI
// 0059fee5: MOVSD ES:EDI,ESI
// 0059fee6: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[0x18] (READ)
// 0059feed: PUSH ESI
// 0059feee: MOV EDI,dword ptr [ESP + 0xc4]
//   XREF to: Stack[0x10] (READ)
// 0059fef5: PUSH EDI
// 0059fef6: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x9c] (DATA)
// 0059fefa: PUSH dword ptr [ESP + 0xc4]
//   XREF to: Stack[0xc] (READ)
// 0059ff01: PUSH EAX
// 0059ff02: PUSH EBX
// 0059ff03: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 0059ff08: ADD ESP,0x14
// 0059ff0b: POP EDI
// 0059ff0c: ADD ESP,0xa4
// 0059ff12: POP ESI
// 0059ff13: POP EBX
// 0059ff14: RET
