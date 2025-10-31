// Name: core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
// Address: 00546a60
// Address Range: [[00546a60, 00546b9b]]
// Convention: __cdecl
// Signature: void core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60(CPathMap * this_ptr, CVector3f * source_position, int force_update)
// Cross-references:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0 (00408bb0) at 00408bf8 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00548390 (00548390) at 00548477 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056ba45 [UNCONDITIONAL_CALL]
// Globals:
//   double g_PathUpdateDistanceThreshold = 4
//   int g_GlobalDeltaTimeInt
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   core_path.cpp_CPathMap_reset_FUN_00548510
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

void __cdecl
core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60
          (CPathMap *this_ptr,CVector3f *source_position,int force_update)

{
  uint uVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int aiStackY_ffc [1012];
  CVector3i *in_stack_ffffffdc;
  int iStack_14;
  
  bVar5 = 0;
  if (force_update == 0) {
    iVar2 = this_ptr->update_timer - g_GlobalDeltaTimeInt;
    this_ptr->update_timer = iVar2;
    if (iVar2 < 0) {
      this_ptr->update_timer = iVar2 + 0x4000;
    }
    else {
      in_stack_ffffffdc = (CVector3i *)(source_position->y - (this_ptr->cached_world_position).y);
      if (((ABS(source_position->x - (this_ptr->cached_world_position).x) <
            (float)g_PathUpdateDistanceThreshold) &&
          (ABS((float)in_stack_ffffffdc) < (float)g_PathUpdateDistanceThreshold)) &&
         (ABS(source_position->z - (this_ptr->cached_world_position).z) <
          (float)g_PathUpdateDistanceThreshold)) {
        return;
      }
    }
  }
  else {
    uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    this_ptr->update_timer = uVar1 & 0x3fff;
  }
  if (this_ptr != (CPathMap *)source_position) {
    (this_ptr->current_position).x = source_position->x;
    (this_ptr->current_position).y = source_position->y;
    (this_ptr->current_position).z = source_position->z;
  }
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,&this_ptr->current_position,in_stack_ffffffdc);
  puVar3 = (undefined4 *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  (this_ptr->voxel_coords).x = iStack_14;
  *puVar3 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar5 * -8);
  puVar3[(uint)bVar5 * -2 + 1] =
       *(undefined4 *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((((this_ptr->voxel_coords).x == (this_ptr->cached_voxel_coords).x) &&
      ((this_ptr->cached_voxel_coords).y == (this_ptr->voxel_coords).y)) &&
     ((this_ptr->cached_voxel_coords).z == (this_ptr->voxel_coords).z)) {
    return;
  }
  puVar4 = (undefined4 *)((int)this_ptr + (uint)bVar5 * -8 + 0x138b4);
  puVar3 = (undefined4 *)((int)this_ptr + (uint)bVar5 * -8 + 0x10);
  (this_ptr->cached_voxel_coords).x = (this_ptr->voxel_coords).x;
  *puVar4 = *puVar3;
  puVar4[(uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
  iVar2 = (this_ptr->voxel_coords).z;
  (this_ptr->grid_origin).x = (this_ptr->voxel_coords).x + -0x32;
  (this_ptr->grid_origin).z = iVar2 + -0x32;
  (this_ptr->grid_origin).y = (this_ptr->voxel_coords).y;
  core_path_cpp_CPathMap_reset_FUN_00548510(this_ptr);
  return;
}


// Assembly code:
// 00546a60: PUSH EBX
//   Label: core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
// 00546a61: PUSH ESI
// 00546a62: PUSH EDI
// 00546a63: PUSH EBP
// 00546a64: MOV EBP,ESP
// 00546a66: SUB ESP,0x18
// 00546a69: AND ESP,0xfffffff8
// 00546a6c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00546a6f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00546a72: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 00546a76: JNZ 0x00546b48
//   XREF to: 00546b48 (CONDITIONAL_JUMP)
// 00546a7c: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 00546a81: MOV ECX,dword ptr [EBX + 0x138d8]
// 00546a87: SUB ECX,EAX
// 00546a89: MOV dword ptr [EBX + 0x138d8],ECX
// 00546a8f: TEST ECX,ECX
// 00546a91: JL 0x00546b5a
//   XREF to: 00546b5a (CONDITIONAL_JUMP)
// 00546a97: LEA EAX,[EBX + 0x138c0]
// 00546a9d: FLD float ptr [ESI]
// 00546a9f: FSUB float ptr [EAX]
// 00546aa1: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00546aa4: FLD float ptr [ESI + 0x4]
// 00546aa7: FSUB float ptr [EAX + 0x4]
// 00546aaa: FLD float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00546aad: FXCH
// 00546aaf: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 00546ab3: FLD float ptr [ESI + 0x8]
// 00546ab6: FSUB float ptr [EAX + 0x8]
// 00546ab9: FXCH
// 00546abb: FABS
// 00546abd: FXCH
// 00546abf: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 00546ac3: FCOMP double ptr [0x0063e998]
//   XREF to: 0063e998 (READ)
// 00546ac9: FNSTSW AX
// 00546acb: SAHF
// 00546acc: JNC 0x00546af0
//   XREF to: 00546af0 (CONDITIONAL_JUMP)
// 00546ace: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00546ad2: FABS
// 00546ad4: FCOMP double ptr [0x0063e998]
//   XREF to: 0063e998 (READ)
// 00546ada: FNSTSW AX
// 00546adc: SAHF
// 00546add: JNC 0x00546af0
//   XREF to: 00546af0 (CONDITIONAL_JUMP)
// 00546adf: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00546ae3: FABS
// 00546ae5: FCOMP double ptr [0x0063e998]
//   XREF to: 0063e998 (READ)
// 00546aeb: FNSTSW AX
// 00546aed: SAHF
// 00546aee: JC 0x00546b41
//   XREF to: 00546b41 (CONDITIONAL_JUMP)
// 00546af0: CMP EBX,ESI
//   Label: LAB_00546af0
// 00546af2: JZ 0x00546b04
//   XREF to: 00546b04 (CONDITIONAL_JUMP)
// 00546af4: MOV EAX,dword ptr [ESI]
// 00546af6: MOV dword ptr [EBX],EAX
// 00546af8: MOV EAX,dword ptr [ESI + 0x4]
// 00546afb: MOV dword ptr [EBX + 0x4],EAX
// 00546afe: MOV EAX,dword ptr [ESI + 0x8]
// 00546b01: MOV dword ptr [EBX + 0x8],EAX
// 00546b04: PUSH EBX
//   Label: LAB_00546b04
// 00546b05: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00546b0a: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x1c] (DATA)
// 00546b0e: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   XREF to: 00499880 (UNCONDITIONAL_CALL)
// 00546b13: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x1c] (DATA)
// 00546b17: LEA EDI,[EBX + 0xc]
// 00546b1a: ADD ESP,0x8
// 00546b1d: MOVSD ES:EDI,ESI
// 00546b1e: MOVSD ES:EDI,ESI
// 00546b1f: MOVSD ES:EDI,ESI
// 00546b20: MOV EAX,dword ptr [EBX + 0xc]
// 00546b23: CMP EAX,dword ptr [EBX + 0x138b0]
// 00546b29: JNZ 0x00546b68
//   XREF to: 00546b68 (CONDITIONAL_JUMP)
// 00546b2b: MOV ECX,dword ptr [EBX + 0x138b4]
// 00546b31: CMP ECX,dword ptr [EBX + 0x10]
// 00546b34: JNZ 0x00546b68
//   XREF to: 00546b68 (CONDITIONAL_JUMP)
// 00546b36: MOV ESI,dword ptr [EBX + 0x138b8]
// 00546b3c: CMP ESI,dword ptr [EBX + 0x14]
// 00546b3f: JNZ 0x00546b68
//   XREF to: 00546b68 (CONDITIONAL_JUMP)
// 00546b41: MOV ESP,EBP
//   Label: LAB_00546b41
// 00546b43: POP EBP
// 00546b44: POP EDI
// 00546b45: POP ESI
// 00546b46: POP EBX
// 00546b47: RET
// 00546b48: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_00546b48
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00546b4d: AND EAX,0x3fff
// 00546b52: MOV dword ptr [EBX + 0x138d8],EAX
// 00546b58: JMP 0x00546af0
//   XREF to: 00546af0 (UNCONDITIONAL_JUMP)
// 00546b5a: LEA EAX,[ECX + 0x4000]
//   Label: LAB_00546b5a
// 00546b60: MOV dword ptr [EBX + 0x138d8],EAX
// 00546b66: JMP 0x00546af0
//   XREF to: 00546af0 (UNCONDITIONAL_JUMP)
// 00546b68: LEA EDI,[EBX + 0x138b0]
//   Label: LAB_00546b68
// 00546b6e: LEA ESI,[EBX + 0xc]
// 00546b71: MOVSD ES:EDI,ESI
// 00546b72: MOVSD ES:EDI,ESI
// 00546b73: MOVSD ES:EDI,ESI
// 00546b74: MOV EAX,dword ptr [EBX + 0xc]
// 00546b77: MOV ESI,dword ptr [EBX + 0x14]
// 00546b7a: SUB EAX,0x32
// 00546b7d: SUB ESI,0x32
// 00546b80: MOV dword ptr [EBX + 0x24],EAX
// 00546b83: MOV dword ptr [EBX + 0x2c],ESI
// 00546b86: MOV EAX,dword ptr [EBX + 0x10]
// 00546b89: PUSH EBX
// 00546b8a: MOV dword ptr [EBX + 0x28],EAX
// 00546b8d: CALL core_path.cpp_CPathMap_reset_FUN_00548510
//   XREF to: 00548510 (UNCONDITIONAL_CALL)
// 00546b92: ADD ESP,0x4
// 00546b95: MOV ESP,EBP
// 00546b97: POP EBP
// 00546b98: POP EDI
// 00546b99: POP ESI
// 00546b9a: POP EBX
// 00546b9b: RET
