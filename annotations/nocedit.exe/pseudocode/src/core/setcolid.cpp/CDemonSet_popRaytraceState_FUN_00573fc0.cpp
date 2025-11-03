// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
// Address: 00573fc0
// Address Range: [[00573fc0, 0057416e]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 (00408db0) at 00408e6c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c8856 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505b70 (00505b70) at 00505c56 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 005061ca [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setcolid_cpp_0064633d
//   TerminatedCString s_CDemonSet_popRaytraceSta_00646352
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

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet *this_ptr)

{
  int iVar1;
  SRaytraceState *pSVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  
  if (g_RaytraceStateStackDepth < 1) {
    g_CurrentFilename = "..\\core\\setcolid.cpp";
    g_CurrentLineNumber = 0x42a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::popRaytraceState - stack empty");
  }
  iVar5 = g_RaytraceStateStackDepth + -1;
  pSVar2 = g_RaytraceStateStack + iVar5;
  g_RaytraceStateStackDepth = iVar5;
  this_ptr->ray_type = pSVar2->ray_type;
  this_ptr->field60_0x15f684 = g_RaytraceStateStack[iVar5].color_r;
  this_ptr->field61_0x15f688 = g_RaytraceStateStack[iVar5].color_g;
  this_ptr->field62_0x15f68c = g_RaytraceStateStack[iVar5].color_b;
  this_ptr->field63_0x15f690 = g_RaytraceStateStack[iVar5].color_a;
  iVar1 = g_RaytraceStateStack[iVar5].ignore_list_count;
  iVar3 = 0;
  this_ptr->ignore_list_count = iVar1;
  pCVar4 = this_ptr;
  if (0 < iVar1) {
    do {
      pCVar4->ignore_list[0] = pSVar2->ignore_list[0];
      iVar3 = iVar3 + 1;
      pSVar2 = (SRaytraceState *)&pSVar2->color_r;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < this_ptr->ignore_list_count);
  }
  this_ptr->collision_flag = g_RaytraceStateStack[iVar5].collision_flag;
  if (&this_ptr->collision_result_vec1 != &g_RaytraceStateStack[iVar5].saved_ray_origin) {
    (this_ptr->collision_result_vec1).x = g_RaytraceStateStack[iVar5].saved_ray_origin.x;
    (this_ptr->collision_result_vec1).y = g_RaytraceStateStack[iVar5].saved_ray_origin.y;
    (this_ptr->collision_result_vec1).z = g_RaytraceStateStack[iVar5].saved_ray_origin.z;
  }
  if (&this_ptr->collision_result_vec2 != &g_RaytraceStateStack[iVar5].saved_ray_target) {
    (this_ptr->collision_result_vec2).x = g_RaytraceStateStack[iVar5].saved_ray_target.x;
    (this_ptr->collision_result_vec2).y = g_RaytraceStateStack[iVar5].saved_ray_target.y;
    (this_ptr->collision_result_vec2).z = g_RaytraceStateStack[iVar5].saved_ray_target.z;
  }
  this_ptr->raycast_distance = g_RaytraceStateStack[iVar5].raycast_distance;
  this_ptr->voxel_distance = g_RaytraceStateStack[iVar5].voxel_distance;
  if (&this_ptr->voxel_hit_point != &g_RaytraceStateStack[iVar5].voxel_hit_point) {
    (this_ptr->voxel_hit_point).x = g_RaytraceStateStack[iVar5].voxel_hit_point.x;
    (this_ptr->voxel_hit_point).y = g_RaytraceStateStack[iVar5].voxel_hit_point.y;
    (this_ptr->voxel_hit_point).z = g_RaytraceStateStack[iVar5].voxel_hit_point.z;
  }
  this_ptr->voxel_surface_type = g_RaytraceStateStack[iVar5].voxel_surface_type;
  if (&this_ptr->collision_normal != &g_RaytraceStateStack[iVar5].saved_collision_normal) {
    (this_ptr->collision_normal).x = g_RaytraceStateStack[iVar5].saved_collision_normal.x;
    (this_ptr->collision_normal).y = g_RaytraceStateStack[iVar5].saved_collision_normal.y;
    (this_ptr->collision_normal).z = g_RaytraceStateStack[iVar5].saved_collision_normal.z;
  }
  this_ptr->ground_type = g_RaytraceStateStack[iVar5].saved_ground_type;
  if (&this_ptr->collision_impact_position != &g_RaytraceStateStack[iVar5].saved_collision_point) {
    (this_ptr->collision_impact_position).x = g_RaytraceStateStack[iVar5].saved_collision_point.x;
    (this_ptr->collision_impact_position).y = g_RaytraceStateStack[iVar5].saved_collision_point.y;
    (this_ptr->collision_impact_position).z = g_RaytraceStateStack[iVar5].saved_collision_point.z;
  }
  this_ptr->collision_actor = g_RaytraceStateStack[iVar5].saved_collision_actor;
  this_ptr->field11_0x14d148 = g_RaytraceStateStack[iVar5].field19_0x98;
  this_ptr->field12_0x14d14c = g_RaytraceStateStack[iVar5].field20_0x9c;
  this_ptr->field71_0x15f6dc = g_RaytraceStateStack[iVar5].field14_0x74;
  return;
}


// Assembly code:
// 00573fc0: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
// 00573fc1: PUSH ESI
// 00573fc2: PUSH EDI
// 00573fc3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00573fc7: CMP dword ptr [0x033469ec],0x1
//   XREF to: 033469ec (READ)
// 00573fce: JL 0x00574135
//   XREF to: 00574135 (CONDITIONAL_JUMP)
// 00573fd4: MOV EDI,dword ptr [0x033469ec]
//   Label: LAB_00573fd4
//   XREF to: 033469ec (READ)
// 00573fda: DEC EDI
// 00573fdb: MOV dword ptr [0x033469ec],EDI
//   XREF to: 033469ec (WRITE)
// 00573fe1: LEA EAX,[EDI*0x4 + 0x0]
// 00573fe8: ADD EAX,EDI
// 00573fea: MOV EDI,0x33469f0
//   XREF to: 033469f0 (DATA)
// 00573fef: SHL EAX,0x5
// 00573ff2: ADD EDI,EAX
// 00573ff4: MOV EAX,dword ptr [EDI]
//   XREF to: 033469f0 (DATA)
// 00573ff6: MOV dword ptr [EBX + 0x15f680],EAX
// 00573ffc: MOV EAX,dword ptr [EDI + 0x4]
//   XREF to: 033469f4 (DATA)
// 00573fff: MOV dword ptr [EBX + 0x15f684],EAX
// 00574005: MOV EAX,dword ptr [EDI + 0x8]
//   XREF to: 033469f8 (DATA)
// 00574008: MOV dword ptr [EBX + 0x15f688],EAX
// 0057400e: MOV EAX,dword ptr [EDI + 0xc]
//   XREF to: 033469fc (DATA)
// 00574011: MOV dword ptr [EBX + 0x15f68c],EAX
// 00574017: MOV EAX,dword ptr [EDI + 0x10]
//   XREF to: 03346a00 (DATA)
// 0057401a: MOV dword ptr [EBX + 0x15f690],EAX
// 00574020: MOV EAX,dword ptr [EDI + 0x14]
//   XREF to: 03346a04 (DATA)
// 00574023: XOR ECX,ECX
// 00574025: MOV dword ptr [EBX + 0x15f694],EAX
// 0057402b: TEST EAX,EAX
// 0057402d: JLE 0x00574050
//   XREF to: 00574050 (CONDITIONAL_JUMP)
// 0057402f: MOV EAX,EDI
// 00574031: MOV EDX,EBX
// 00574033: ADD EDX,0x4
//   Label: LAB_00574033
// 00574036: MOV ESI,dword ptr [EAX + 0x1c]
//   XREF to: 03346a0c (DATA)
//   XREF to: 03346a10 (DATA)
// 00574039: MOV dword ptr [EDX + 0x15f698],ESI
// 0057403f: INC ECX
// 00574040: MOV ESI,dword ptr [EBX + 0x15f694]
// 00574046: ADD EAX,0x4
// 00574049: CMP ECX,ESI
// 0057404b: JL 0x00574033
//   XREF to: 00574033 (CONDITIONAL_JUMP)
// 0057404d: LEA EAX,[EAX]
// 00574050: MOV EAX,dword ptr [EDI + 0x18]
//   Label: LAB_00574050
//   XREF to: 03346a08 (DATA)
// 00574053: LEA EDX,[EDI + 0x44]
// 00574056: MOV dword ptr [EBX + 0x15f698],EAX
// 0057405c: LEA EAX,[EBX + 0x14d110]
// 00574062: CMP EAX,EDX
// 00574064: JZ 0x00574076
//   XREF to: 00574076 (CONDITIONAL_JUMP)
// 00574066: MOV ECX,dword ptr [EDX]
//   XREF to: 03346a34 (DATA)
// 00574068: MOV dword ptr [EAX],ECX
// 0057406a: MOV ECX,dword ptr [EDX + 0x4]
//   XREF to: 03346a38 (DATA)
// 0057406d: MOV dword ptr [EAX + 0x4],ECX
// 00574070: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 03346a3c (DATA)
// 00574073: MOV dword ptr [EAX + 0x8],ECX
// 00574076: LEA EDX,[EDI + 0x50]
//   Label: LAB_00574076
// 00574079: LEA EAX,[EBX + 0x14d11c]
// 0057407f: CMP EAX,EDX
// 00574081: JZ 0x00574093
//   XREF to: 00574093 (CONDITIONAL_JUMP)
// 00574083: MOV ECX,dword ptr [EDX]
//   XREF to: 03346a40 (DATA)
// 00574085: MOV dword ptr [EAX],ECX
// 00574087: MOV ECX,dword ptr [EDX + 0x4]
//   XREF to: 03346a44 (DATA)
// 0057408a: MOV dword ptr [EAX + 0x4],ECX
// 0057408d: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 03346a48 (DATA)
// 00574090: MOV dword ptr [EAX + 0x8],ECX
// 00574093: FLD float ptr [EDI + 0x5c]
//   Label: LAB_00574093
//   XREF to: 03346a4c (DATA)
// 00574096: LEA EAX,[EBX + 0x15f6cc]
// 0057409c: LEA EDX,[EDI + 0x64]
// 0057409f: FSTP float ptr [EBX + 0x15f6c4]
// 005740a5: MOV ECX,dword ptr [EDI + 0x60]
//   XREF to: 03346a50 (DATA)
// 005740a8: MOV dword ptr [EBX + 0x15f6c8],ECX
// 005740ae: CMP EAX,EDX
// 005740b0: JZ 0x005740c2
//   XREF to: 005740c2 (CONDITIONAL_JUMP)
// 005740b2: MOV ECX,dword ptr [EDX]
//   XREF to: 03346a54 (DATA)
// 005740b4: MOV dword ptr [EAX],ECX
// 005740b6: MOV ECX,dword ptr [EDX + 0x4]
//   XREF to: 03346a58 (DATA)
// 005740b9: MOV dword ptr [EAX + 0x4],ECX
// 005740bc: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 03346a5c (DATA)
// 005740bf: MOV dword ptr [EAX + 0x8],ECX
// 005740c2: MOV EAX,dword ptr [EDI + 0x70]
//   Label: LAB_005740c2
//   XREF to: 03346a60 (DATA)
// 005740c5: LEA EDX,[EDI + 0x78]
// 005740c8: MOV dword ptr [EBX + 0x15f6d8],EAX
// 005740ce: LEA EAX,[EBX + 0x14d128]
// 005740d4: CMP EAX,EDX
// 005740d6: JZ 0x005740e8
//   XREF to: 005740e8 (CONDITIONAL_JUMP)
// 005740d8: MOV ECX,dword ptr [EDX]
//   XREF to: 03346a68 (DATA)
// 005740da: MOV dword ptr [EAX],ECX
// 005740dc: MOV ECX,dword ptr [EDX + 0x4]
//   XREF to: 03346a6c (DATA)
// 005740df: MOV dword ptr [EAX + 0x4],ECX
// 005740e2: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 03346a70 (DATA)
// 005740e5: MOV dword ptr [EAX + 0x8],ECX
// 005740e8: MOV EAX,dword ptr [EDI + 0x84]
//   Label: LAB_005740e8
//   XREF to: 03346a74 (DATA)
// 005740ee: LEA EDX,[EBX + 0x14d138]
// 005740f4: MOV dword ptr [EBX + 0x14d134],EAX
// 005740fa: LEA EAX,[EDI + 0x88]
// 00574100: CMP EDX,EAX
// 00574102: JNZ 0x0057415d
//   XREF to: 0057415d (CONDITIONAL_JUMP)
// 00574104: MOV EAX,dword ptr [EDI + 0x94]
//   Label: LAB_00574104
//   XREF to: 03346a84 (DATA)
// 0057410a: MOV dword ptr [EBX + 0x14d144],EAX
// 00574110: MOV EAX,dword ptr [EDI + 0x98]
//   XREF to: 03346a88 (DATA)
// 00574116: MOV dword ptr [EBX + 0x14d148],EAX
// 0057411c: MOV EAX,dword ptr [EDI + 0x9c]
//   XREF to: 03346a8c (DATA)
// 00574122: MOV dword ptr [EBX + 0x14d14c],EAX
// 00574128: MOV EAX,dword ptr [EDI + 0x74]
//   XREF to: 03346a64 (DATA)
// 0057412b: MOV dword ptr [EBX + 0x15f6dc],EAX
// 00574131: POP EDI
// 00574132: POP ESI
// 00574133: POP EBX
// 00574134: RET
// 00574135: MOV ECX,0x64633d
//   Label: LAB_00574135
//   XREF to: 0064633d (PARAM)
// 0057413a: MOV ESI,0x42a
// 0057413f: PUSH 0x646352
//   XREF to: 00646352 (DATA)
// 00574144: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0057414a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00574150: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00574155: ADD ESP,0x4
// 00574158: JMP 0x00573fd4
//   XREF to: 00573fd4 (UNCONDITIONAL_JUMP)
// 0057415d: MOV ECX,dword ptr [EAX]
//   Label: LAB_0057415d
//   XREF to: 03346a78 (DATA)
// 0057415f: MOV dword ptr [EDX],ECX
// 00574161: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 03346a7c (DATA)
// 00574164: MOV dword ptr [EDX + 0x4],ECX
// 00574167: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 03346a80 (DATA)
// 0057416a: MOV dword ptr [EDX + 0x8],ECX
// 0057416d: JMP 0x00574104
//   XREF to: 00574104 (UNCONDITIONAL_JUMP)
