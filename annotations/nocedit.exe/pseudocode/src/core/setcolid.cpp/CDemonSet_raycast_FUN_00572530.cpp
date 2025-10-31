// Name: core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
// Address: 00572530
// Address Range: [[00572530, 005726bf]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a742 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 004490c8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c8313 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d4651 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d64c4 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f050e [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505b70 (00505b70) at 00505c07 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 0050606b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e7d1 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558f54 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800 (00572800) at 0057291d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c4c20 (005c4c20) at 005c502b [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c449d [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddd25 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e384f [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
          (CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)

{
  CVector3f *out_intersection_point;
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
  float local_18 [2];
  
  if (&this_ptr->collision_result_vec1 != ray_origin) {
    (this_ptr->collision_result_vec1).x = ray_origin->x;
    (this_ptr->collision_result_vec1).y = ray_origin->y;
    (this_ptr->collision_result_vec1).z = ray_origin->z;
  }
  if (&this_ptr->collision_result_vec2 != ray_target) {
    (this_ptr->collision_result_vec2).x = ray_target->x;
    (this_ptr->collision_result_vec2).y = ray_target->y;
    (this_ptr->collision_result_vec2).z = ray_target->z;
  }
  out_intersection_point = &this_ptr->voxel_hit_point;
  fVar9 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                    (&g_CDemonRaytraceInstance,ray_origin,ray_target,out_intersection_point,
                     &this_ptr->voxel_surface_type);
  this_ptr->voxel_distance = (int)fVar9;
  if (&this_ptr->collision_normal != out_intersection_point) {
    (this_ptr->collision_normal).x = out_intersection_point->x;
    (this_ptr->collision_normal).y = (this_ptr->voxel_hit_point).y;
    (this_ptr->collision_normal).z = (this_ptr->voxel_hit_point).z;
  }
  this_ptr->ground_type = this_ptr->voxel_surface_type;
  if ((float)this_ptr->voxel_distance < 0.0) {
    this_ptr->voxel_distance = 0x3f8147ae;
  }
  fVar9 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                    (this_ptr,-1.0,ray_origin,ray_target,(float)this_ptr->voxel_distance);
  this_ptr->raycast_distance = fVar9;
  if (this_ptr->raycast_distance <= 1.0) {
    fVar9 = ray_target->y;
    fVar2 = ray_origin->y;
    pfVar1 = &this_ptr->raycast_distance;
    fVar3 = ray_target->z;
    fVar4 = ray_origin->z;
    fVar5 = *pfVar1;
    fVar6 = *pfVar1;
    fVar7 = ray_origin->y;
    fVar8 = ray_origin->z;
    if (&this_ptr->collision_result_vec3 != (CVector3f *)local_18) {
      (this_ptr->collision_result_vec3).x =
           ray_origin->x + (ray_target->x - ray_origin->x) * *pfVar1;
      (this_ptr->collision_result_vec3).y = fVar7 + (fVar9 - fVar2) * fVar5;
      (this_ptr->collision_result_vec3).z = fVar8 + (fVar3 - fVar4) * fVar6;
      return this_ptr->raycast_distance;
    }
  }
  return this_ptr->raycast_distance;
}


// Assembly code:
// 00572530: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
// 00572531: PUSH ESI
// 00572532: PUSH EDI
// 00572533: PUSH EBP
// 00572534: SUB ESP,0x28
// 00572537: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0057253b: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0057253f: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 00572543: LEA EAX,[EBX + 0x14d110]
// 00572549: CMP EAX,ESI
// 0057254b: JNZ 0x00572689
//   XREF to: 00572689 (CONDITIONAL_JUMP)
// 00572551: LEA EAX,[EBX + 0x14d11c]
//   Label: LAB_00572551
// 00572557: CMP EAX,EDI
// 00572559: JZ 0x0057256b
//   XREF to: 0057256b (CONDITIONAL_JUMP)
// 0057255b: MOV EDX,dword ptr [EDI]
// 0057255d: MOV dword ptr [EAX],EDX
// 0057255f: MOV EDX,dword ptr [EDI + 0x4]
// 00572562: MOV dword ptr [EAX + 0x4],EDX
// 00572565: MOV EDX,dword ptr [EDI + 0x8]
// 00572568: MOV dword ptr [EAX + 0x8],EDX
// 0057256b: LEA EAX,[EBX + 0x15f6d8]
//   Label: LAB_0057256b
// 00572571: PUSH EAX
// 00572572: LEA EBP,[EBX + 0x15f6cc]
// 00572578: PUSH EBP
// 00572579: PUSH EDI
// 0057257a: PUSH ESI
// 0057257b: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00572580: CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   XREF to: 00495b70 (UNCONDITIONAL_CALL)
// 00572585: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00572589: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 0057258d: LEA EAX,[EBX + 0x14d128]
// 00572593: FSTP float ptr [EBX + 0x15f6c8]
// 00572599: ADD ESP,0x14
// 0057259c: CMP EAX,EBP
// 0057259e: JZ 0x005725b1
//   XREF to: 005725b1 (CONDITIONAL_JUMP)
// 005725a0: MOV EDX,dword ptr [EBP]
// 005725a3: MOV dword ptr [EAX],EDX
// 005725a5: MOV EDX,dword ptr [EBP + 0x4]
// 005725a8: MOV dword ptr [EAX + 0x4],EDX
// 005725ab: MOV EDX,dword ptr [EBP + 0x8]
// 005725ae: MOV dword ptr [EAX + 0x8],EDX
// 005725b1: FLD float ptr [EBX + 0x15f6c8]
//   Label: LAB_005725b1
// 005725b7: MOV EAX,dword ptr [EBX + 0x15f6d8]
// 005725bd: FLDZ
// 005725bf: MOV dword ptr [EBX + 0x14d134],EAX
// 005725c5: FCOMPP
// 005725c7: FNSTSW AX
// 005725c9: SAHF
// 005725ca: JBE 0x005725d6
//   XREF to: 005725d6 (CONDITIONAL_JUMP)
// 005725cc: MOV dword ptr [EBX + 0x15f6c8],0x3f8147ae
// 005725d6: PUSH dword ptr [EBX + 0x15f6c8]
//   Label: LAB_005725d6
// 005725dc: PUSH EDI
// 005725dd: PUSH ESI
// 005725de: PUSH 0xbf800000
// 005725e3: PUSH EBX
// 005725e4: CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
//   XREF to: 00572a10 (UNCONDITIONAL_CALL)
// 005725e9: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005725ed: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 005725f1: MOV dword ptr [EBX + 0x15f6c4],EAX
// 005725f7: ADD ESP,0x14
// 005725fa: FLD float ptr [EBX + 0x15f6c4]
// 00572600: FLD1
// 00572602: FCOMPP
// 00572604: FNSTSW AX
// 00572606: SAHF
// 00572607: JC 0x0057267b
//   XREF to: 0057267b (CONDITIONAL_JUMP)
// 00572609: FLD float ptr [EDI]
// 0057260b: FSUB float ptr [ESI]
// 0057260d: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 00572611: FLD float ptr [EDI + 0x4]
// 00572614: FSUB float ptr [ESI + 0x4]
// 00572617: LEA EAX,[EBX + 0x15f6c4]
// 0057261d: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 00572621: FLD float ptr [EDI + 0x8]
// 00572624: FSUB float ptr [ESI + 0x8]
// 00572627: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 0057262b: FXCH
// 0057262d: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00572631: FMUL float ptr [EAX]
// 00572633: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00572637: FXCH
// 00572639: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0057263c: FMUL float ptr [EAX]
// 0057263e: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00572642: FXCH
// 00572644: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 00572648: FMUL float ptr [EAX]
// 0057264a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0057264e: FLD float ptr [ESI]
// 00572650: FADD float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00572653: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 00572657: FLD float ptr [ESI + 0x4]
// 0057265a: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 0057265e: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x20] (DATA)
// 00572662: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00572666: FLD float ptr [ESI + 0x8]
// 00572669: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 0057266d: LEA ESI,[EBX + 0x14d138]
// 00572673: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 00572677: CMP ESI,EAX
// 00572679: JNZ 0x0057269e
//   XREF to: 0057269e (CONDITIONAL_JUMP)
// 0057267b: MOV EAX,dword ptr [EBX + 0x15f6c4]
//   Label: LAB_0057267b
// 00572681: ADD ESP,0x28
// 00572684: POP EBP
// 00572685: POP EDI
// 00572686: POP ESI
// 00572687: POP EBX
// 00572688: RET
// 00572689: MOV EDX,dword ptr [ESI]
//   Label: LAB_00572689
// 0057268b: MOV dword ptr [EAX],EDX
// 0057268d: MOV EDX,dword ptr [ESI + 0x4]
// 00572690: MOV dword ptr [EAX + 0x4],EDX
// 00572693: MOV EDX,dword ptr [ESI + 0x8]
// 00572696: MOV dword ptr [EAX + 0x8],EDX
// 00572699: JMP 0x00572551
//   XREF to: 00572551 (UNCONDITIONAL_JUMP)
// 0057269e: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0057269e
//   XREF to: Stack[-0x20] (DATA)
// 005726a2: MOV dword ptr [ESI],EAX
// 005726a4: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005726a8: MOV dword ptr [ESI + 0x4],EAX
// 005726ab: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 005726af: MOV dword ptr [ESI + 0x8],EAX
// 005726b2: MOV EAX,dword ptr [EBX + 0x15f6c4]
// 005726b8: ADD ESP,0x28
// 005726bb: POP EBP
// 005726bc: POP EDI
// 005726bd: POP ESI
// 005726be: POP EBX
// 005726bf: RET
