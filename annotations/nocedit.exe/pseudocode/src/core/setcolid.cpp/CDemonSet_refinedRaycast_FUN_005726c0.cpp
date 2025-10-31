// Name: core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0
// Address: 005726c0
// Address Range: [[005726c0, 005727fc]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0(CDemonSet * this_ptr)
// Function calls:
//   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_refinedRaycast_FUN_005726c0(CDemonSet *this_ptr)

{
  CVector3f *ray_origin;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  BADSPACEBASE *in_ESP;
  float local_2c [10];
  
  if (this_ptr->raycast_distance < (float)this_ptr->voxel_distance) {
    if (&this_ptr->collision_normal != &this_ptr->voxel_hit_point) {
      (this_ptr->collision_normal).x = (this_ptr->voxel_hit_point).x;
      (this_ptr->collision_normal).y = (this_ptr->voxel_hit_point).y;
      (this_ptr->collision_normal).z = (this_ptr->voxel_hit_point).z;
    }
    ray_origin = &this_ptr->collision_result_vec1;
    this_ptr->ground_type = this_ptr->voxel_surface_type;
    fVar9 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                      (this_ptr,this_ptr->raycast_distance,ray_origin,
                       &this_ptr->collision_result_vec2,(float)this_ptr->voxel_distance);
    this_ptr->raycast_distance = fVar9;
    if (this_ptr->raycast_distance <= 1.0) {
      fVar9 = (this_ptr->collision_result_vec2).y;
      fVar2 = (this_ptr->collision_result_vec1).y;
      pfVar1 = &this_ptr->raycast_distance;
      fVar3 = (this_ptr->collision_result_vec2).z;
      fVar4 = (this_ptr->collision_result_vec1).z;
      fVar5 = *pfVar1;
      fVar6 = *pfVar1;
      fVar7 = (this_ptr->collision_result_vec1).y;
      fVar8 = (this_ptr->collision_result_vec1).z;
      if (&this_ptr->collision_result_vec3 != (CVector3f *)local_2c) {
        (this_ptr->collision_result_vec3).x =
             ray_origin->x + ((this_ptr->collision_result_vec2).x - ray_origin->x) * *pfVar1;
        (this_ptr->collision_result_vec3).y = fVar7 + (fVar9 - fVar2) * fVar5;
        (this_ptr->collision_result_vec3).z = fVar8 + (fVar3 - fVar4) * fVar6;
      }
    }
    return this_ptr->raycast_distance;
  }
  return 2.0;
}


// Assembly code:
// 005726c0: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0
// 005726c1: SUB ESP,0x2c
// 005726c4: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005726c8: FLD float ptr [EBX + 0x15f6c4]
// 005726ce: FCOMP float ptr [EBX + 0x15f6c8]
// 005726d4: FNSTSW AX
// 005726d6: SAHF
// 005726d7: JNC 0x005727ec
//   XREF to: 005727ec (CONDITIONAL_JUMP)
// 005726dd: PUSH EDI
// 005726de: PUSH ESI
// 005726df: LEA ESI,[EBX + 0x14d128]
// 005726e5: LEA EAX,[EBX + 0x15f6cc]
// 005726eb: CMP ESI,EAX
// 005726ed: JZ 0x005726ff
//   XREF to: 005726ff (CONDITIONAL_JUMP)
// 005726ef: MOV EDX,dword ptr [EAX]
// 005726f1: MOV dword ptr [ESI],EDX
// 005726f3: MOV EDX,dword ptr [EAX + 0x4]
// 005726f6: MOV dword ptr [ESI + 0x4],EDX
// 005726f9: MOV EDX,dword ptr [EAX + 0x8]
// 005726fc: MOV dword ptr [ESI + 0x8],EDX
// 005726ff: LEA EDI,[EBX + 0x14d11c]
//   Label: LAB_005726ff
// 00572705: PUSH dword ptr [EBX + 0x15f6c8]
// 0057270b: PUSH EDI
// 0057270c: LEA ESI,[EBX + 0x14d110]
// 00572712: PUSH ESI
// 00572713: PUSH dword ptr [EBX + 0x15f6c4]
// 00572719: MOV EAX,dword ptr [EBX + 0x15f6d8]
// 0057271f: PUSH EBX
// 00572720: MOV dword ptr [EBX + 0x14d134],EAX
// 00572726: CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
//   XREF to: 00572a10 (UNCONDITIONAL_CALL)
// 0057272b: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0057272f: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x8] (READ)
// 00572733: MOV dword ptr [EBX + 0x15f6c4],EAX
// 00572739: ADD ESP,0x14
// 0057273c: FLD float ptr [EBX + 0x15f6c4]
// 00572742: FLD1
// 00572744: FCOMPP
// 00572746: FNSTSW AX
// 00572748: SAHF
// 00572749: JC 0x005727d7
//   XREF to: 005727d7 (CONDITIONAL_JUMP)
// 0057274f: FLD float ptr [EDI]
// 00572751: FSUB float ptr [ESI]
// 00572753: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00572757: FLD float ptr [EDI + 0x4]
// 0057275a: FSUB float ptr [ESI + 0x4]
// 0057275d: LEA EAX,[EBX + 0x15f6c4]
// 00572763: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 00572767: FLD float ptr [EDI + 0x8]
// 0057276a: FSUB float ptr [ESI + 0x8]
// 0057276d: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00572771: FXCH
// 00572773: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00572777: FMUL float ptr [EAX]
// 00572779: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 0057277d: FXCH
// 0057277f: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 00572783: FMUL float ptr [EAX]
// 00572785: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00572789: FXCH
// 0057278b: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (WRITE)
// 0057278f: FMUL float ptr [EAX]
// 00572791: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (WRITE)
// 00572795: FLD float ptr [ESI]
// 00572797: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0057279b: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0057279f: FLD float ptr [ESI + 0x4]
// 005727a2: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 005727a6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x30] (DATA)
// 005727aa: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 005727ae: FLD float ptr [ESI + 0x8]
// 005727b1: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (READ)
// 005727b5: LEA ESI,[EBX + 0x14d138]
// 005727bb: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 005727bf: CMP ESI,EAX
// 005727c1: JZ 0x005727d7
//   XREF to: 005727d7 (CONDITIONAL_JUMP)
// 005727c3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (DATA)
// 005727c7: MOV dword ptr [ESI],EAX
// 005727c9: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 005727cd: MOV dword ptr [ESI + 0x4],EAX
// 005727d0: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 005727d4: MOV dword ptr [ESI + 0x8],EAX
// 005727d7: MOV EAX,dword ptr [EBX + 0x15f6c4]
//   Label: LAB_005727d7
// 005727dd: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005727e1: POP ESI
// 005727e2: POP EDI
// 005727e3: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 005727e7: ADD ESP,0x2c
// 005727ea: POP EBX
// 005727eb: RET
// 005727ec: MOV dword ptr [ESP + 0x24],0x40000000
//   Label: LAB_005727ec
//   XREF to: Stack[-0xc] (WRITE)
// 005727f4: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 005727f8: ADD ESP,0x2c
// 005727fb: POP EBX
// 005727fc: RET
