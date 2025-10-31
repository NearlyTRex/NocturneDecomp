// Name: core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40
// Address: 00546c40
// Address Range: [[00546c40, 00546e84]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40(CPathMap * this_ptr, int start_x, int start_z, int start_height, int end_x, int end_z, int end_height)
// Cross-references:
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 (00547320) at 005476ae [UNCONDITIONAL_CALL]
// Globals:
//   int g_PathfindingMaxClimbHeight
// Function calls:
//   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40
          (CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z,
          int end_height)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_EDI;
  int iVar3;
  int grid_z;
  int in_stack_00000028;
  int in_stack_ffffffc8;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = start_height;
  iVar4 = 1;
  grid_z = start_z;
  local_1c = end_x;
  if (end_z < start_z) {
    grid_z = end_z;
    local_1c = start_x;
    start_height = end_height;
    start_x = end_x;
    end_z = start_z;
    end_height = iVar3;
  }
  local_1c = local_1c - start_x;
  iVar3 = end_z - grid_z;
  if (local_1c < 0) {
    local_1c = -local_1c;
    iVar4 = -1;
  }
  if (iVar3 < local_1c) {
    local_14 = iVar3 * 2 - local_1c;
    local_2c = 0;
    if (-1 < local_1c) {
      local_28 = grid_z + -1;
      do {
        iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,local_28,start_x,start_height);
        uVar2 = iVar1 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar1 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,grid_z + 1,start_x,start_height);
        uVar2 = iVar1 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar1 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        in_stack_ffffffc8 =
             core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                       (this_ptr,grid_z,start_x,start_height);
        uVar2 = in_stack_ffffffc8 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((in_stack_ffffffc8 - start_height ^ uVar2) - uVar2))
        {
          return 0;
        }
        if (0 < local_14) {
          local_14 = local_14 - local_1c;
          local_28 = local_28 + 1;
          grid_z = local_30;
        }
        start_x = start_x + iVar4;
        local_14 = local_14 + iVar3;
        local_2c = local_2c + 1;
        start_height = in_stack_ffffffc8;
      } while (local_2c <= local_1c);
    }
  }
  else {
    local_18 = local_1c * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,grid_z,start_x + 1,start_height);
        uVar2 = iVar3 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar3 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,grid_z,start_x + -1,start_height);
        uVar2 = iVar3 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar3 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,grid_z,start_x,start_height);
        uVar2 = iVar3 - start_height >> 0x1f;
        if (g_PathfindingMaxClimbHeight < (int)((iVar3 - start_height ^ uVar2) - uVar2)) {
          return 0;
        }
        if (0 < unaff_EDI) {
          unaff_EDI = unaff_EDI - local_14;
          start_x = start_x + local_28;
        }
        unaff_EDI = unaff_EDI + unaff_EBP;
        grid_z = grid_z + 1;
        local_18 = local_18 + 1;
        start_height = iVar3;
      } while (local_18 <= local_14);
      if (iVar3 != in_stack_00000028) {
        return 0;
      }
      return 1;
    }
  }
  if (in_stack_ffffffc8 != end_height) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 00546c40: PUSH EBX
//   Label: core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40
// 00546c41: PUSH ESI
// 00546c42: PUSH EDI
// 00546c43: PUSH EBP
// 00546c44: SUB ESP,0x28
// 00546c47: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 00546c4b: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 00546c4f: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 00546c53: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x10] (READ)
// 00546c57: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x14] (READ)
// 00546c5b: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x18] (READ)
// 00546c5f: MOV dword ptr [ESP + 0x4],0x1
//   XREF to: Stack[-0x34] (WRITE)
// 00546c67: CMP ECX,EDI
// 00546c69: JG 0x00546cd6
//   XREF to: 00546cd6 (CONDITIONAL_JUMP)
// 00546c6b: SUB EDX,ESI
//   Label: LAB_00546c6b
// 00546c6d: SUB EDI,ECX
// 00546c6f: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00546c73: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00546c77: TEST EDX,EDX
// 00546c79: JL 0x00546cf1
//   XREF to: 00546cf1 (CONDITIONAL_JUMP)
// 00546c7b: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00546c7b
//   XREF to: Stack[-0x1c] (READ)
// 00546c7f: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00546c83: MOV EDI,ECX
// 00546c85: CMP EAX,EDX
// 00546c87: JLE 0x00546da9
//   XREF to: 00546da9 (CONDITIONAL_JUMP)
// 00546c8d: LEA EAX,[EDX + EDX*0x1]
// 00546c90: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00546c94: SUB EAX,EDX
// 00546c96: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00546c9a: XOR EAX,EAX
// 00546c9c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00546ca0: TEST EDX,EDX
// 00546ca2: JL 0x00546d97
//   XREF to: 00546d97 (CONDITIONAL_JUMP)
// 00546ca8: DEC ECX
// 00546ca9: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00546cad: PUSH EBX
//   Label: LAB_00546cad
// 00546cae: PUSH ESI
// 00546caf: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00546cb3: PUSH ECX
// 00546cb4: PUSH EBP
// 00546cb5: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546cba: ADD ESP,0x10
// 00546cbd: SUB EAX,EBX
// 00546cbf: CDQ
// 00546cc0: XOR EAX,EDX
// 00546cc2: SUB EAX,EDX
// 00546cc4: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00546cca: JLE 0x00546d07
//   XREF to: 00546d07 (CONDITIONAL_JUMP)
// 00546ccc: XOR EAX,EAX
//   Label: LAB_00546ccc
// 00546cce: ADD ESP,0x28
// 00546cd1: POP EBP
// 00546cd2: POP EDI
// 00546cd3: POP ESI
// 00546cd4: POP EBX
// 00546cd5: RET
// 00546cd6: MOV EAX,ESI
//   Label: LAB_00546cd6
// 00546cd8: MOV ESI,EDX
// 00546cda: MOV EDX,EAX
// 00546cdc: MOV EAX,ECX
// 00546cde: MOV ECX,EDI
// 00546ce0: MOV EDI,EAX
// 00546ce2: MOV EAX,EBX
// 00546ce4: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x1c] (READ)
// 00546ce8: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[0x1c] (WRITE)
// 00546cec: JMP 0x00546c6b
//   XREF to: 00546c6b (UNCONDITIONAL_JUMP)
// 00546cf1: MOV EDI,EDX
//   Label: LAB_00546cf1
// 00546cf3: MOV EAX,0xffffffff
// 00546cf8: NEG EDI
// 00546cfa: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00546cfe: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00546d02: JMP 0x00546c7b
//   XREF to: 00546c7b (UNCONDITIONAL_JUMP)
// 00546d07: PUSH EBX
//   Label: LAB_00546d07
// 00546d08: PUSH ESI
// 00546d09: LEA EAX,[EDI + 0x1]
// 00546d0c: PUSH EAX
// 00546d0d: PUSH EBP
// 00546d0e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00546d12: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546d17: ADD ESP,0x10
// 00546d1a: SUB EAX,EBX
// 00546d1c: CDQ
// 00546d1d: XOR EAX,EDX
// 00546d1f: SUB EAX,EDX
// 00546d21: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00546d27: JG 0x00546ccc
//   XREF to: 00546ccc (CONDITIONAL_JUMP)
// 00546d29: PUSH EBX
// 00546d2a: PUSH ESI
// 00546d2b: PUSH EDI
// 00546d2c: PUSH EBP
// 00546d2d: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546d32: ADD ESP,0x10
// 00546d35: MOV ECX,EAX
// 00546d37: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 00546d3a: SUB EAX,EBX
// 00546d3c: CDQ
// 00546d3d: XOR EAX,EDX
// 00546d3f: SUB EAX,EDX
// 00546d41: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00546d47: JG 0x00546ccc
//   XREF to: 00546ccc (CONDITIONAL_JUMP)
// 00546d49: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00546d4d: MOV EBX,ECX
// 00546d4f: TEST EAX,EAX
// 00546d51: JLE 0x00546d6e
//   XREF to: 00546d6e (CONDITIONAL_JUMP)
// 00546d53: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00546d57: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00546d5b: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00546d5f: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 00546d63: SUB ECX,EAX
// 00546d65: INC EDX
// 00546d66: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00546d6a: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00546d6e: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00546d6e
//   XREF to: Stack[-0x34] (READ)
// 00546d72: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00546d76: ADD ESI,EAX
// 00546d78: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00546d7c: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 00546d80: ADD EDX,EAX
// 00546d82: INC ECX
// 00546d83: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00546d87: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00546d8b: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00546d8f: CMP ECX,EDX
// 00546d91: JLE 0x00546cad
//   XREF to: 00546cad (CONDITIONAL_JUMP)
// 00546d97: MOV EAX,dword ptr [ESP]
//   Label: LAB_00546d97
//   XREF to: Stack[-0x38] (DATA)
// 00546d9a: CMP EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x1c] (READ)
// 00546d9e: JZ 0x00546e78
//   XREF to: 00546e78 (CONDITIONAL_JUMP)
// 00546da4: JMP 0x00546ccc
//   XREF to: 00546ccc (UNCONDITIONAL_JUMP)
// 00546da9: ADD EAX,EAX
//   Label: LAB_00546da9
// 00546dab: SUB EAX,EDX
// 00546dad: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00546db1: XOR EAX,EAX
// 00546db3: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00546db7: TEST EDX,EDX
// 00546db9: JL 0x00546d97
//   XREF to: 00546d97 (CONDITIONAL_JUMP)
// 00546dbb: PUSH EBX
//   Label: LAB_00546dbb
// 00546dbc: LEA EAX,[ESI + 0x1]
// 00546dbf: PUSH EAX
// 00546dc0: PUSH EDI
// 00546dc1: PUSH EBP
// 00546dc2: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546dc7: ADD ESP,0x10
// 00546dca: SUB EAX,EBX
// 00546dcc: CDQ
// 00546dcd: XOR EAX,EDX
// 00546dcf: SUB EAX,EDX
// 00546dd1: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00546dd7: JLE 0x00546de3
//   XREF to: 00546de3 (CONDITIONAL_JUMP)
// 00546dd9: XOR EAX,EAX
// 00546ddb: ADD ESP,0x28
// 00546dde: POP EBP
// 00546ddf: POP EDI
// 00546de0: POP ESI
// 00546de1: POP EBX
// 00546de2: RET
// 00546de3: PUSH EBX
//   Label: LAB_00546de3
// 00546de4: LEA EAX,[ESI + -0x1]
// 00546de7: PUSH EAX
// 00546de8: PUSH EDI
// 00546de9: PUSH EBP
// 00546dea: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546def: ADD ESP,0x10
// 00546df2: SUB EAX,EBX
// 00546df4: CDQ
// 00546df5: XOR EAX,EDX
// 00546df7: SUB EAX,EDX
// 00546df9: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00546dff: JG 0x00546ccc
//   XREF to: 00546ccc (CONDITIONAL_JUMP)
// 00546e05: PUSH EBX
// 00546e06: PUSH ESI
// 00546e07: PUSH EDI
// 00546e08: PUSH EBP
// 00546e09: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546e0e: ADD ESP,0x10
// 00546e11: MOV ECX,EAX
// 00546e13: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x38] (DATA)
// 00546e16: SUB EAX,EBX
// 00546e18: CDQ
// 00546e19: XOR EAX,EDX
// 00546e1b: SUB EAX,EDX
// 00546e1d: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00546e23: JG 0x00546ccc
//   XREF to: 00546ccc (CONDITIONAL_JUMP)
// 00546e29: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00546e2d: MOV EBX,ECX
// 00546e2f: TEST EAX,EAX
// 00546e31: JLE 0x00546e47
//   XREF to: 00546e47 (CONDITIONAL_JUMP)
// 00546e33: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00546e37: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00546e3b: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 00546e3f: SUB ECX,EAX
// 00546e41: ADD ESI,EDX
// 00546e43: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00546e47: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00546e47
//   XREF to: Stack[-0x1c] (READ)
// 00546e4b: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00546e4f: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00546e53: ADD ECX,EAX
// 00546e55: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00546e59: INC EDI
// 00546e5a: INC EAX
// 00546e5b: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00546e5f: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00546e63: CMP EAX,EDX
// 00546e65: JLE 0x00546dbb
//   XREF to: 00546dbb (CONDITIONAL_JUMP)
// 00546e6b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00546e6e: CMP EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x1c] (READ)
// 00546e72: JNZ 0x00546ccc
//   XREF to: 00546ccc (CONDITIONAL_JUMP)
// 00546e78: MOV EAX,0x1
//   Label: LAB_00546e78
// 00546e7d: ADD ESP,0x28
// 00546e80: POP EBP
// 00546e81: POP EDI
// 00546e82: POP ESI
// 00546e83: POP EBX
// 00546e84: RET
