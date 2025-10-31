// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
// Address: 00573e10
// Address Range: [[00573e10, 00573fbf]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 (00408db0) at 00408dd9 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c8745 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505b70 (00505b70) at 00505b86 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00505f85 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setcolid_cpp_006462fe
//   TerminatedCString s_CDemonSet_pushRaytraceSt_00646313
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_RaytraceStateStackDepth
//   SRaytraceState[5] g_RaytraceStateStack
//   undefined4 DAT_033469f4
//   undefined4 DAT_033469f8
//   undefined4 DAT_033469fc
//   undefined4 DAT_03346a00
//   undefined4 DAT_03346a04
//   undefined4 DAT_03346a08
//   undefined4 DAT_03346a0c
//   undefined4 DAT_03346a10
//   undefined4 DAT_03346a34
//   undefined4 DAT_03346a38
//   undefined4 DAT_03346a3c
//   undefined4 DAT_03346a40
//   undefined4 DAT_03346a44
//   undefined4 DAT_03346a48
//   undefined4 DAT_03346a4c
//   undefined4 DAT_03346a50
//   undefined4 DAT_03346a54
//   undefined4 DAT_03346a58
//   undefined4 DAT_03346a5c
//   undefined4 DAT_03346a60
//   undefined4 DAT_03346a64
//   undefined4 DAT_03346a68
//   undefined4 DAT_03346a6c
//   undefined4 DAT_03346a70
//   undefined4 DAT_03346a74
//   undefined4 DAT_03346a78
//   undefined4 DAT_03346a7c
//   undefined4 DAT_03346a80
//   undefined4 DAT_03346a84
//   undefined4 DAT_03346a88
//   undefined4 DAT_03346a8c
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet *this_ptr)

{
  int iVar1;
  SRaytraceState *pSVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  SRaytraceState *pSVar6;
  
  if (5 < g_RaytraceStateStackDepth) {
    g_CurrentFilename = "..\\core\\setcolid.cpp";
    g_CurrentLineNumber = 0x406;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::pushRaytraceState - stack full");
  }
  iVar3 = g_RaytraceStateStackDepth;
  pSVar6 = g_RaytraceStateStack + g_RaytraceStateStackDepth;
  pSVar6->ray_type = this_ptr->ray_type;
  g_RaytraceStateStack[g_RaytraceStateStackDepth].color_r = this_ptr->field52_0x15f684;
  g_RaytraceStateStack[g_RaytraceStateStackDepth].color_g = this_ptr->field53_0x15f688;
  g_RaytraceStateStack[g_RaytraceStateStackDepth].color_b = this_ptr->field54_0x15f68c;
  iVar5 = 0;
  g_RaytraceStateStack[g_RaytraceStateStackDepth].color_a = this_ptr->field55_0x15f690;
  iVar1 = this_ptr->ignore_list_count;
  pSVar2 = g_RaytraceStateStack + g_RaytraceStateStackDepth;
  g_RaytraceStateStackDepth = g_RaytraceStateStackDepth + 1;
  pSVar2->ignore_list_count = iVar1;
  pCVar4 = this_ptr;
  if (0 < iVar1) {
    do {
      pSVar6->ignore_list[0] = pCVar4->ignore_list[0];
      iVar5 = iVar5 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
      pSVar6 = (SRaytraceState *)&pSVar6->color_r;
    } while (iVar5 < this_ptr->ignore_list_count);
  }
  g_RaytraceStateStack[iVar3].collision_flag = this_ptr->collision_flag;
  if (&g_RaytraceStateStack[iVar3].saved_ray_origin != &this_ptr->collision_result_vec1) {
    g_RaytraceStateStack[iVar3].saved_ray_origin.x = (this_ptr->collision_result_vec1).x;
    g_RaytraceStateStack[iVar3].saved_ray_origin.y = (this_ptr->collision_result_vec1).y;
    g_RaytraceStateStack[iVar3].saved_ray_origin.z = (this_ptr->collision_result_vec1).z;
  }
  if (&g_RaytraceStateStack[iVar3].saved_ray_target != &this_ptr->collision_result_vec2) {
    g_RaytraceStateStack[iVar3].saved_ray_target.x = (this_ptr->collision_result_vec2).x;
    g_RaytraceStateStack[iVar3].saved_ray_target.y = (this_ptr->collision_result_vec2).y;
    g_RaytraceStateStack[iVar3].saved_ray_target.z = (this_ptr->collision_result_vec2).z;
  }
  g_RaytraceStateStack[iVar3].raycast_distance = this_ptr->raycast_distance;
  g_RaytraceStateStack[iVar3].voxel_distance = this_ptr->voxel_distance;
  if (&g_RaytraceStateStack[iVar3].voxel_hit_point != &this_ptr->voxel_hit_point) {
    g_RaytraceStateStack[iVar3].voxel_hit_point.x = (this_ptr->voxel_hit_point).x;
    g_RaytraceStateStack[iVar3].voxel_hit_point.y = (this_ptr->voxel_hit_point).y;
    g_RaytraceStateStack[iVar3].voxel_hit_point.z = (this_ptr->voxel_hit_point).z;
  }
  g_RaytraceStateStack[iVar3].voxel_surface_type = this_ptr->voxel_surface_type;
  if (&g_RaytraceStateStack[iVar3].saved_collision_normal != &this_ptr->collision_normal) {
    g_RaytraceStateStack[iVar3].saved_collision_normal.x = (this_ptr->collision_normal).x;
    g_RaytraceStateStack[iVar3].saved_collision_normal.y = (this_ptr->collision_normal).y;
    g_RaytraceStateStack[iVar3].saved_collision_normal.z = (this_ptr->collision_normal).z;
  }
  g_RaytraceStateStack[iVar3].saved_ground_type = this_ptr->ground_type;
  if (&g_RaytraceStateStack[iVar3].saved_collision_point != &this_ptr->collision_result_vec3) {
    g_RaytraceStateStack[iVar3].saved_collision_point.x = (this_ptr->collision_result_vec3).x;
    g_RaytraceStateStack[iVar3].saved_collision_point.y = (this_ptr->collision_result_vec3).y;
    g_RaytraceStateStack[iVar3].saved_collision_point.z = (this_ptr->collision_result_vec3).z;
  }
  g_RaytraceStateStack[iVar3].saved_collision_actor = this_ptr->collision_actor;
  g_RaytraceStateStack[iVar3].field19_0x98 = this_ptr->field11_0x14d148;
  g_RaytraceStateStack[iVar3].field20_0x9c = this_ptr->field12_0x14d14c;
  g_RaytraceStateStack[iVar3].field14_0x74 = this_ptr->field63_0x15f6dc;
  return;
}


// Assembly code:
// 00573e10: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
// 00573e11: PUSH ESI
// 00573e12: PUSH EDI
// 00573e13: PUSH EBP
// 00573e14: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00573e18: CMP dword ptr [0x033469ec],0x5
//   XREF to: 033469ec (READ)
// 00573e1f: JG 0x00573f86
//   XREF to: 00573f86 (CONDITIONAL_JUMP)
// 00573e25: MOV EDX,dword ptr [0x033469ec]
//   Label: LAB_00573e25
//   XREF to: 033469ec (READ)
// 00573e2b: LEA EAX,[EDX*0x4 + 0x0]
// 00573e32: ADD EAX,EDX
// 00573e34: MOV EDI,0x33469f0
//   XREF to: 033469f0 (DATA)
// 00573e39: SHL EAX,0x5
// 00573e3c: ADD EDI,EAX
// 00573e3e: MOV EAX,dword ptr [EBX + 0x15f680]
// 00573e44: MOV dword ptr [EDI],EAX
//   XREF to: 033469f0 (DATA)
// 00573e46: MOV EAX,dword ptr [EBX + 0x15f684]
// 00573e4c: MOV dword ptr [EDI + 0x4],EAX
//   XREF to: 033469f4 (DATA)
// 00573e4f: MOV EAX,dword ptr [EBX + 0x15f688]
// 00573e55: MOV dword ptr [EDI + 0x8],EAX
//   XREF to: 033469f8 (DATA)
// 00573e58: MOV EAX,dword ptr [EBX + 0x15f68c]
// 00573e5e: MOV dword ptr [EDI + 0xc],EAX
//   XREF to: 033469fc (DATA)
// 00573e61: MOV EAX,dword ptr [EBX + 0x15f690]
// 00573e67: XOR ECX,ECX
// 00573e69: MOV dword ptr [EDI + 0x10],EAX
//   XREF to: 03346a00 (DATA)
// 00573e6c: LEA EBP,[EDX + 0x1]
// 00573e6f: MOV EAX,dword ptr [EBX + 0x15f694]
// 00573e75: MOV dword ptr [0x033469ec],EBP
//   XREF to: 033469ec (WRITE)
// 00573e7b: MOV dword ptr [EDI + 0x14],EAX
//   XREF to: 03346a04 (DATA)
// 00573e7e: TEST EAX,EAX
// 00573e80: JLE 0x00573ea0
//   XREF to: 00573ea0 (CONDITIONAL_JUMP)
// 00573e82: MOV EAX,EBX
// 00573e84: MOV EDX,EDI
// 00573e86: ADD EDX,0x4
//   Label: LAB_00573e86
// 00573e89: MOV ESI,dword ptr [EAX + 0x15f69c]
// 00573e8f: MOV dword ptr [EDX + 0x18],ESI
//   XREF to: 03346a0c (DATA)
//   XREF to: 03346a10 (DATA)
// 00573e92: INC ECX
// 00573e93: MOV ESI,dword ptr [EBX + 0x15f694]
// 00573e99: ADD EAX,0x4
// 00573e9c: CMP ECX,ESI
// 00573e9e: JL 0x00573e86
//   XREF to: 00573e86 (CONDITIONAL_JUMP)
// 00573ea0: MOV EAX,dword ptr [EBX + 0x15f698]
//   Label: LAB_00573ea0
// 00573ea6: LEA EDX,[EBX + 0x14d110]
// 00573eac: MOV dword ptr [EDI + 0x18],EAX
//   XREF to: 03346a08 (DATA)
// 00573eaf: LEA EAX,[EDI + 0x44]
// 00573eb2: CMP EAX,EDX
// 00573eb4: JZ 0x00573ec6
//   XREF to: 00573ec6 (CONDITIONAL_JUMP)
// 00573eb6: MOV ECX,dword ptr [EDX]
// 00573eb8: MOV dword ptr [EAX],ECX
//   XREF to: 03346a34 (DATA)
// 00573eba: MOV ECX,dword ptr [EDX + 0x4]
// 00573ebd: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 03346a38 (DATA)
// 00573ec0: MOV ECX,dword ptr [EDX + 0x8]
// 00573ec3: MOV dword ptr [EAX + 0x8],ECX
//   XREF to: 03346a3c (DATA)
// 00573ec6: LEA EDX,[EBX + 0x14d11c]
//   Label: LAB_00573ec6
// 00573ecc: LEA EAX,[EDI + 0x50]
// 00573ecf: CMP EAX,EDX
// 00573ed1: JZ 0x00573ee3
//   XREF to: 00573ee3 (CONDITIONAL_JUMP)
// 00573ed3: MOV ECX,dword ptr [EDX]
// 00573ed5: MOV dword ptr [EAX],ECX
//   XREF to: 03346a40 (DATA)
// 00573ed7: MOV ECX,dword ptr [EDX + 0x4]
// 00573eda: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 03346a44 (DATA)
// 00573edd: MOV ECX,dword ptr [EDX + 0x8]
// 00573ee0: MOV dword ptr [EAX + 0x8],ECX
//   XREF to: 03346a48 (DATA)
// 00573ee3: FLD float ptr [EBX + 0x15f6c4]
//   Label: LAB_00573ee3
// 00573ee9: LEA EAX,[EDI + 0x64]
// 00573eec: LEA EDX,[EBX + 0x15f6cc]
// 00573ef2: FSTP float ptr [EDI + 0x5c]
//   XREF to: 03346a4c (DATA)
// 00573ef5: MOV ECX,dword ptr [EBX + 0x15f6c8]
// 00573efb: MOV dword ptr [EDI + 0x60],ECX
//   XREF to: 03346a50 (DATA)
// 00573efe: CMP EAX,EDX
// 00573f00: JZ 0x00573f12
//   XREF to: 00573f12 (CONDITIONAL_JUMP)
// 00573f02: MOV ECX,dword ptr [EDX]
// 00573f04: MOV dword ptr [EAX],ECX
//   XREF to: 03346a54 (DATA)
// 00573f06: MOV ECX,dword ptr [EDX + 0x4]
// 00573f09: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 03346a58 (DATA)
// 00573f0c: MOV ECX,dword ptr [EDX + 0x8]
// 00573f0f: MOV dword ptr [EAX + 0x8],ECX
//   XREF to: 03346a5c (DATA)
// 00573f12: MOV EAX,dword ptr [EBX + 0x15f6d8]
//   Label: LAB_00573f12
// 00573f18: LEA EDX,[EBX + 0x14d128]
// 00573f1e: MOV dword ptr [EDI + 0x70],EAX
//   XREF to: 03346a60 (DATA)
// 00573f21: LEA EAX,[EDI + 0x78]
// 00573f24: CMP EAX,EDX
// 00573f26: JZ 0x00573f38
//   XREF to: 00573f38 (CONDITIONAL_JUMP)
// 00573f28: MOV ECX,dword ptr [EDX]
// 00573f2a: MOV dword ptr [EAX],ECX
//   XREF to: 03346a68 (DATA)
// 00573f2c: MOV ECX,dword ptr [EDX + 0x4]
// 00573f2f: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 03346a6c (DATA)
// 00573f32: MOV ECX,dword ptr [EDX + 0x8]
// 00573f35: MOV dword ptr [EAX + 0x8],ECX
//   XREF to: 03346a70 (DATA)
// 00573f38: MOV EAX,dword ptr [EBX + 0x14d134]
//   Label: LAB_00573f38
// 00573f3e: LEA EDX,[EDI + 0x88]
// 00573f44: MOV dword ptr [EDI + 0x84],EAX
//   XREF to: 03346a74 (DATA)
// 00573f4a: LEA EAX,[EBX + 0x14d138]
// 00573f50: CMP EDX,EAX
// 00573f52: JNZ 0x00573fae
//   XREF to: 00573fae (CONDITIONAL_JUMP)
// 00573f54: MOV EAX,dword ptr [EBX + 0x14d144]
//   Label: LAB_00573f54
// 00573f5a: MOV dword ptr [EDI + 0x94],EAX
//   XREF to: 03346a84 (DATA)
// 00573f60: MOV EAX,dword ptr [EBX + 0x14d148]
// 00573f66: MOV dword ptr [EDI + 0x98],EAX
//   XREF to: 03346a88 (DATA)
// 00573f6c: MOV EAX,dword ptr [EBX + 0x14d14c]
// 00573f72: MOV dword ptr [EDI + 0x9c],EAX
//   XREF to: 03346a8c (DATA)
// 00573f78: MOV EAX,dword ptr [EBX + 0x15f6dc]
// 00573f7e: MOV dword ptr [EDI + 0x74],EAX
//   XREF to: 03346a64 (DATA)
// 00573f81: POP EBP
// 00573f82: POP EDI
// 00573f83: POP ESI
// 00573f84: POP EBX
// 00573f85: RET
// 00573f86: MOV ECX,0x6462fe
//   Label: LAB_00573f86
//   XREF to: 006462fe (PARAM)
// 00573f8b: MOV ESI,0x406
// 00573f90: PUSH 0x646313
//   XREF to: 00646313 (DATA)
// 00573f95: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00573f9b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00573fa1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00573fa6: ADD ESP,0x4
// 00573fa9: JMP 0x00573e25
//   XREF to: 00573e25 (UNCONDITIONAL_JUMP)
// 00573fae: MOV ECX,dword ptr [EAX]
//   Label: LAB_00573fae
// 00573fb0: MOV dword ptr [EDX],ECX
//   XREF to: 03346a78 (DATA)
// 00573fb2: MOV ECX,dword ptr [EAX + 0x4]
// 00573fb5: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 03346a7c (DATA)
// 00573fb8: MOV ECX,dword ptr [EAX + 0x8]
// 00573fbb: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 03346a80 (DATA)
// 00573fbe: JMP 0x00573f54
//   XREF to: 00573f54 (UNCONDITIONAL_JUMP)
