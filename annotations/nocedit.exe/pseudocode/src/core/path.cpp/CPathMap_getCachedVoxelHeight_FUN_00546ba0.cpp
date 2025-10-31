// Name: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
// Address: 00546ba0
// Address Range: [[00546ba0, 00546c34]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
// Cross-references:
//   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90 (00546e90) at 00547060 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 (00547320) at 00547688 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40 (00546c40) at 00546dc2 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_queuePop_FUN_005487a0 (005487a0) at 005488fc [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
          (CPathMap *this_ptr,int grid_z,int grid_x,int current_height)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CVector3i local_18;
  
  if ((((grid_x < 0) || (99 < grid_x)) || (grid_z < 0)) || (99 < grid_z)) {
    iVar1 = -9999;
  }
  else {
    if (current_height != this_ptr->height_cache_tags[grid_z][grid_x]) {
      local_18.x = (this_ptr->grid_origin).x + grid_x;
      local_18.y = current_height + 5;
      local_18.z = (this_ptr->grid_origin).z + grid_z;
      iVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
                        (&g_CDemonRaytraceInstance,&local_18);
      this_ptr->height_cache[grid_z][grid_x] = iVar1;
      this_ptr->height_cache_tags[grid_z][grid_x] = current_height;
      return iVar1;
    }
    iVar1 = this_ptr->height_cache[grid_z][grid_x];
  }
  return iVar1;
}


// Assembly code:
// 00546ba0: PUSH EBX
//   Label: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
// 00546ba1: PUSH ESI
// 00546ba2: PUSH EDI
// 00546ba3: SUB ESP,0xc
// 00546ba6: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00546baa: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00546bae: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00546bb2: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00546bb6: TEST EDX,EDX
// 00546bb8: JL 0x00546bf6
//   XREF to: 00546bf6 (CONDITIONAL_JUMP)
// 00546bba: CMP EDX,0x64
// 00546bbd: JGE 0x00546bf6
//   XREF to: 00546bf6 (CONDITIONAL_JUMP)
// 00546bbf: TEST ECX,ECX
// 00546bc1: JL 0x00546bf6
//   XREF to: 00546bf6 (CONDITIONAL_JUMP)
// 00546bc3: CMP ECX,0x64
// 00546bc6: JGE 0x00546bf6
//   XREF to: 00546bf6 (CONDITIONAL_JUMP)
// 00546bc8: LEA EAX,[ECX*0x4 + 0x0]
// 00546bcf: SUB EAX,ECX
// 00546bd1: SHL EAX,0x3
// 00546bd4: ADD EAX,ECX
// 00546bd6: SHL EAX,0x4
// 00546bd9: LEA EBX,[EDX*0x4 + 0x0]
// 00546be0: ADD EAX,EDI
// 00546be2: ADD EBX,EAX
// 00546be4: CMP ESI,dword ptr [EBX + 0x9c70]
// 00546bea: JNZ 0x00546bfd
//   XREF to: 00546bfd (CONDITIONAL_JUMP)
// 00546bec: MOV EAX,dword ptr [EBX + 0x30]
// 00546bef: ADD ESP,0xc
//   Label: LAB_00546bef
// 00546bf2: POP EDI
// 00546bf3: POP ESI
// 00546bf4: POP EBX
// 00546bf5: RET
// 00546bf6: MOV EAX,0xffffd8f1
//   Label: LAB_00546bf6
// 00546bfb: JMP 0x00546bef
//   XREF to: 00546bef (UNCONDITIONAL_JUMP)
// 00546bfd: MOV EAX,dword ptr [EDI + 0x24]
//   Label: LAB_00546bfd
// 00546c00: ADD EAX,EDX
// 00546c02: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00546c05: LEA EAX,[ESI + 0x5]
// 00546c08: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00546c0c: MOV EAX,dword ptr [EDI + 0x2c]
// 00546c0f: ADD EAX,ECX
// 00546c11: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00546c15: MOV EAX,ESP
// 00546c17: PUSH EAX
// 00546c18: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00546c1d: CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
//   XREF to: 00499a50 (UNCONDITIONAL_CALL)
// 00546c22: MOV dword ptr [EBX + 0x30],EAX
// 00546c25: ADD ESP,0x8
// 00546c28: MOV dword ptr [EBX + 0x9c70],ESI
// 00546c2e: ADD ESP,0xc
// 00546c31: POP EDI
// 00546c32: POP ESI
// 00546c33: POP EBX
// 00546c34: RET
