// Name: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
// Address: 00546e90
// Address Range: [[00546e90, 005472f1]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap * this_ptr, int start_x, int start_z, int start_height, int end_x, int end_z)
// Cross-references:
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 (00547320) at 00547858 [UNCONDITIONAL_CALL]
// Globals:
//   int g_PathfindingMaxClimbHeight
// Function calls:
//   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
          (CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z)

{
  uint uVar1;
  int iVar2;
  int current_height;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int unaff_EDI;
  int local_60;
  uint local_5c;
  int local_58;
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = start_x - start_height;
  iVar2 = start_z - end_x;
  uVar4 = (int)uVar1 >> 0x1f;
  local_2c = (uVar1 ^ uVar4) - uVar4;
  if ((int)uVar1 < 0) {
    local_3c = -1;
  }
  else {
    local_3c = 1;
  }
  current_height =
       core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                 (this_ptr,end_x,start_height,this_ptr->field3_0x1c);
  iVar3 = start_height;
  if (0 < local_28) {
    local_58 = unaff_EBP + 1;
    do {
      local_20 = local_38 + iVar3;
      unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                            (this_ptr,unaff_EBP,local_20,current_height);
      uVar5 = unaff_EDI - current_height >> 0x1f;
      if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar5) - uVar5)) ||
          (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                 (this_ptr,local_58,iVar3,current_height),
          uVar5 = unaff_EDI - current_height >> 0x1f,
          g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar5) - uVar5))) ||
         (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                (this_ptr,local_60,iVar3,current_height),
         uVar5 = unaff_EDI - current_height >> 0x1f,
         g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar5) - uVar5))) break;
      current_height =
           core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                     (this_ptr,end_x,local_24,current_height);
      local_28 = local_28 + -1;
      iVar3 = local_24;
    } while (0 < local_28);
  }
  if (local_28 == 0) {
    local_2c = (uVar1 ^ uVar4) - uVar4;
    if (0 < local_2c) {
      local_5c = iVar3 - 1;
      do {
        local_1c = unaff_EBP + local_3c;
        unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                              (this_ptr,local_1c,iVar3,current_height);
        uVar4 = unaff_EDI - current_height >> 0x1f;
        if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar4) - uVar4)) ||
            (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,local_1c,iVar2,current_height),
            uVar4 = unaff_EDI - current_height >> 0x1f,
            g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar4) - uVar4))) ||
           (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                  (this_ptr,local_18,local_58,current_height),
           uVar4 = unaff_EDI - current_height >> 0x1f,
           g_PathfindingMaxClimbHeight < (int)((unaff_EDI - current_height ^ uVar4) - uVar4)))
        break;
        current_height =
             core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                       (this_ptr,local_20,iVar3,current_height);
        local_2c = local_2c + -1;
      } while (0 < local_2c);
    }
    if ((local_2c == 0) &&
       (iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,start_height,start_z,(this_ptr->voxel_coords).y),
       unaff_EDI == iVar2)) {
      return 1;
    }
  }
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,end_z,end_x,this_ptr->field3_0x1c);
  if (0 < (int)uVar1) {
    iVar3 = end_z + 1;
    do {
      unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                            (this_ptr,local_38 + end_z,unaff_EBP,iVar2);
      uVar1 = unaff_EDI - iVar2 >> 0x1f;
      if (((g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1)) ||
          (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                 (this_ptr,end_z,iVar3,iVar2), uVar1 = unaff_EDI - iVar2 >> 0x1f,
          g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1))) ||
         (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                (this_ptr,end_z,local_58,iVar2), uVar1 = unaff_EDI - iVar2 >> 0x1f,
         g_PathfindingMaxClimbHeight < (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1))) break;
      iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                        (this_ptr,local_24,end_x,iVar2);
      local_2c = local_2c + -1;
      end_z = local_24;
    } while (0 < local_2c);
  }
  if (local_2c == 0) {
    iVar3 = (local_5c ^ (int)local_5c >> 0x1f) - ((int)local_5c >> 0x1f);
    while (((0 < iVar3 &&
            (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,end_z,unaff_EBP + local_34,iVar2),
            uVar1 = unaff_EDI - iVar2 >> 0x1f,
            (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1) <= g_PathfindingMaxClimbHeight)) &&
           ((unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,local_48,local_1c,iVar2),
            uVar1 = unaff_EDI - iVar2 >> 0x1f,
            (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1) <= g_PathfindingMaxClimbHeight &&
            (unaff_EDI = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                                   (this_ptr,local_48,local_18,iVar2),
            uVar1 = unaff_EDI - iVar2 >> 0x1f,
            (int)((unaff_EDI - iVar2 ^ uVar1) - uVar1) <= g_PathfindingMaxClimbHeight))))) {
      iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                        (this_ptr,end_z,local_18,iVar2);
      iVar3 = iVar3 + -1;
    }
    if ((iVar3 == 0) &&
       (iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                          (this_ptr,end_x,start_height,(this_ptr->voxel_coords).y),
       unaff_EDI == iVar2)) {
      return 2;
    }
  }
  return 0;
}


// Assembly code:
// 00546e90: PUSH EBX
//   Label: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
// 00546e91: PUSH ESI
// 00546e92: PUSH EDI
// 00546e93: PUSH EBP
// 00546e94: SUB ESP,0x5c
// 00546e97: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 00546e9b: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 00546e9f: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x10] (READ)
// 00546ea3: SUB EAX,EDX
// 00546ea5: MOV ECX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x14] (READ)
// 00546eac: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00546eb0: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 00546eb4: MOV EBP,EDX
// 00546eb6: SUB EAX,ECX
// 00546eb8: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00546ebc: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00546ec0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x64] (READ)
// 00546ec4: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x64] (READ)
// 00546ec8: CDQ
// 00546ec9: XOR EAX,EDX
// 00546ecb: SUB EAX,EDX
// 00546ecd: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00546ed1: TEST ESI,ESI
// 00546ed3: JL 0x00546ff0
//   XREF to: 00546ff0 (CONDITIONAL_JUMP)
// 00546ed9: MOV dword ptr [ESP + 0x30],0x1
//   XREF to: Stack[-0x3c] (WRITE)
// 00546ee1: CMP dword ptr [ESP + 0x4],0x0
//   Label: LAB_00546ee1
//   XREF to: Stack[-0x68] (READ)
// 00546ee6: JL 0x00546ffd
//   XREF to: 00546ffd (CONDITIONAL_JUMP)
// 00546eec: MOV dword ptr [ESP + 0x2c],0x1
//   XREF to: Stack[-0x40] (WRITE)
// 00546ef4: MOV EDX,dword ptr [EBX + 0x1c]
//   Label: LAB_00546ef4
// 00546ef7: PUSH EDX
// 00546ef8: PUSH EBP
// 00546ef9: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 00546efd: PUSH ECX
// 00546efe: PUSH EBX
// 00546eff: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546f04: ADD ESP,0x10
// 00546f07: MOV ESI,EAX
// 00546f09: CMP dword ptr [ESP + 0x40],0x0
//   XREF to: Stack[-0x2c] (READ)
// 00546f0e: JLE 0x00546f51
//   XREF to: 00546f51 (CONDITIONAL_JUMP)
// 00546f10: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 00546f14: INC EAX
// 00546f15: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00546f19: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 00546f1d: DEC EAX
// 00546f1e: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00546f22: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00546f22
//   XREF to: Stack[-0x3c] (READ)
// 00546f26: PUSH ESI
// 00546f27: ADD EAX,EBP
// 00546f29: PUSH EAX
// 00546f2a: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 00546f2e: PUSH EDI
// 00546f2f: PUSH EBX
// 00546f30: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00546f34: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546f39: ADD ESP,0x10
// 00546f3c: MOV EDI,EAX
// 00546f3e: SUB EAX,ESI
// 00546f40: CDQ
// 00546f41: XOR EAX,EDX
// 00546f43: SUB EAX,EDX
// 00546f45: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00546f4b: JLE 0x0054700a
//   XREF to: 0054700a (CONDITIONAL_JUMP)
// 00546f51: CMP dword ptr [ESP + 0x40],0x0
//   Label: LAB_00546f51
//   XREF to: Stack[-0x2c] (READ)
// 00546f56: JZ 0x00547080
//   XREF to: 00547080 (CONDITIONAL_JUMP)
// 00546f5c: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_00546f5c
//   XREF to: Stack[0x10] (READ)
// 00546f60: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00546f64: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x68] (READ)
// 00546f68: CDQ
// 00546f69: XOR EAX,EDX
// 00546f6b: SUB EAX,EDX
// 00546f6d: MOV EDX,dword ptr [EBX + 0x1c]
// 00546f70: PUSH EDX
// 00546f71: MOV ECX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x10] (READ)
// 00546f78: PUSH ECX
// 00546f79: MOV EBP,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x14] (READ)
// 00546f80: PUSH EBP
// 00546f81: PUSH EBX
// 00546f82: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00546f86: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00546f8a: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546f8f: ADD ESP,0x10
// 00546f92: MOV ESI,EAX
// 00546f94: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x6c] (DATA)
// 00546f98: JLE 0x00546fdb
//   XREF to: 00546fdb (CONDITIONAL_JUMP)
// 00546f9a: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x10] (READ)
// 00546f9e: INC EAX
// 00546f9f: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00546fa3: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x10] (READ)
// 00546fa7: DEC EAX
// 00546fa8: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00546fac: PUSH ESI
//   Label: LAB_00546fac
// 00546fad: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 00546fb1: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 00546fb5: PUSH ECX
// 00546fb6: ADD EAX,EBP
// 00546fb8: PUSH EAX
// 00546fb9: PUSH EBX
// 00546fba: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00546fbe: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00546fc3: ADD ESP,0x10
// 00546fc6: MOV EDI,EAX
// 00546fc8: SUB EAX,ESI
// 00546fca: CDQ
// 00546fcb: XOR EAX,EDX
// 00546fcd: SUB EAX,EDX
// 00546fcf: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00546fd5: JLE 0x0054717e
//   XREF to: 0054717e (CONDITIONAL_JUMP)
// 00546fdb: CMP dword ptr [ESP + 0x38],0x0
//   Label: LAB_00546fdb
//   XREF to: Stack[-0x34] (READ)
// 00546fe0: JZ 0x005471f4
//   XREF to: 005471f4 (CONDITIONAL_JUMP)
// 00546fe6: XOR EAX,EAX
//   Label: LAB_00546fe6
// 00546fe8: ADD ESP,0x5c
// 00546feb: POP EBP
// 00546fec: POP EDI
// 00546fed: POP ESI
// 00546fee: POP EBX
// 00546fef: RET
// 00546ff0: MOV dword ptr [ESP + 0x30],0xffffffff
//   Label: LAB_00546ff0
//   XREF to: Stack[-0x3c] (WRITE)
// 00546ff8: JMP 0x00546ee1
//   XREF to: 00546ee1 (UNCONDITIONAL_JUMP)
// 00546ffd: MOV dword ptr [ESP + 0x2c],0xffffffff
//   Label: LAB_00546ffd
//   XREF to: Stack[-0x40] (WRITE)
// 00547005: JMP 0x00546ef4
//   XREF to: 00546ef4 (UNCONDITIONAL_JUMP)
// 0054700a: PUSH ESI
//   Label: LAB_0054700a
// 0054700b: PUSH EBP
// 0054700c: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x50] (READ)
// 00547010: PUSH ECX
// 00547011: PUSH EBX
// 00547012: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00547017: ADD ESP,0x10
// 0054701a: MOV EDI,EAX
// 0054701c: SUB EAX,ESI
// 0054701e: CDQ
// 0054701f: XOR EAX,EDX
// 00547021: SUB EAX,EDX
// 00547023: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00547029: JG 0x00546f51
//   XREF to: 00546f51 (CONDITIONAL_JUMP)
// 0054702f: PUSH ESI
// 00547030: PUSH EBP
// 00547031: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x5c] (READ)
// 00547035: PUSH ECX
// 00547036: PUSH EBX
// 00547037: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 0054703c: ADD ESP,0x10
// 0054703f: MOV EDI,EAX
// 00547041: SUB EAX,ESI
// 00547043: CDQ
// 00547044: XOR EAX,EDX
// 00547046: SUB EAX,EDX
// 00547048: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 0054704e: JG 0x00546f51
//   XREF to: 00546f51 (CONDITIONAL_JUMP)
// 00547054: PUSH ESI
// 00547055: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 00547059: PUSH EBP
// 0054705a: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 0054705e: PUSH ECX
// 0054705f: PUSH EBX
// 00547060: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00547065: ADD ESP,0x10
// 00547068: MOV ESI,EAX
// 0054706a: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 0054706e: DEC EAX
// 0054706f: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00547073: TEST EAX,EAX
// 00547075: JG 0x00546f22
//   XREF to: 00546f22 (CONDITIONAL_JUMP)
// 0054707b: JMP 0x00546f51
//   XREF to: 00546f51 (UNCONDITIONAL_JUMP)
// 00547080: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00547080
//   XREF to: Stack[-0x68] (READ)
// 00547084: CDQ
// 00547085: XOR EAX,EDX
// 00547087: SUB EAX,EDX
// 00547089: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0054708d: TEST EAX,EAX
// 0054708f: JLE 0x005470ca
//   XREF to: 005470ca (CONDITIONAL_JUMP)
// 00547091: LEA EAX,[EBP + 0x1]
// 00547094: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00547098: LEA EAX,[EBP + -0x1]
// 0054709b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0054709f: PUSH ESI
//   Label: LAB_0054709f
// 005470a0: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 005470a4: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005470a8: PUSH EBP
// 005470a9: ADD EAX,ECX
// 005470ab: PUSH EAX
// 005470ac: PUSH EBX
// 005470ad: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005470b1: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005470b6: ADD ESP,0x10
// 005470b9: MOV EDI,EAX
// 005470bb: SUB EAX,ESI
// 005470bd: CDQ
// 005470be: XOR EAX,EDX
// 005470c0: SUB EAX,EDX
// 005470c2: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 005470c8: JLE 0x00547104
//   XREF to: 00547104 (CONDITIONAL_JUMP)
// 005470ca: CMP dword ptr [ESP + 0x3c],0x0
//   Label: LAB_005470ca
//   XREF to: Stack[-0x30] (READ)
// 005470cf: JNZ 0x00546f5c
//   XREF to: 00546f5c (CONDITIONAL_JUMP)
// 005470d5: MOV ESI,dword ptr [EBX + 0x10]
// 005470d8: PUSH ESI
// 005470d9: MOV EBP,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 005470dd: PUSH EBP
// 005470de: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0xc] (READ)
// 005470e5: PUSH EAX
// 005470e6: PUSH EBX
// 005470e7: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005470ec: ADD ESP,0x10
// 005470ef: CMP EDI,EAX
// 005470f1: JNZ 0x00546f5c
//   XREF to: 00546f5c (CONDITIONAL_JUMP)
// 005470f7: MOV EAX,0x1
// 005470fc: ADD ESP,0x5c
// 005470ff: POP EBP
// 00547100: POP EDI
// 00547101: POP ESI
// 00547102: POP EBX
// 00547103: RET
// 00547104: PUSH ESI
//   Label: LAB_00547104
// 00547105: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x60] (READ)
// 00547109: PUSH ECX
// 0054710a: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 0054710e: PUSH EDI
// 0054710f: PUSH EBX
// 00547110: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00547115: ADD ESP,0x10
// 00547118: MOV EDI,EAX
// 0054711a: SUB EAX,ESI
// 0054711c: CDQ
// 0054711d: XOR EAX,EDX
// 0054711f: SUB EAX,EDX
// 00547121: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00547127: JG 0x005470ca
//   XREF to: 005470ca (CONDITIONAL_JUMP)
// 00547129: PUSH ESI
// 0054712a: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x54] (READ)
// 0054712e: PUSH ECX
// 0054712f: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 00547133: PUSH EDI
// 00547134: PUSH EBX
// 00547135: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 0054713a: ADD ESP,0x10
// 0054713d: MOV EDI,EAX
// 0054713f: SUB EAX,ESI
// 00547141: CDQ
// 00547142: XOR EAX,EDX
// 00547144: SUB EAX,EDX
// 00547146: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 0054714c: JG 0x005470ca
//   XREF to: 005470ca (CONDITIONAL_JUMP)
// 00547152: PUSH ESI
// 00547153: PUSH EBP
// 00547154: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x20] (READ)
// 00547158: PUSH EAX
// 00547159: PUSH EBX
// 0054715a: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054715e: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00547163: ADD ESP,0x10
// 00547166: MOV ESI,EAX
// 00547168: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x30] (READ)
// 0054716c: DEC EAX
// 0054716d: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00547171: TEST EAX,EAX
// 00547173: JG 0x0054709f
//   XREF to: 0054709f (CONDITIONAL_JUMP)
// 00547179: JMP 0x005470ca
//   XREF to: 005470ca (UNCONDITIONAL_JUMP)
// 0054717e: PUSH ESI
//   Label: LAB_0054717e
// 0054717f: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x4c] (READ)
// 00547183: PUSH ECX
// 00547184: PUSH EBP
// 00547185: PUSH EBX
// 00547186: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 0054718b: ADD ESP,0x10
// 0054718e: MOV EDI,EAX
// 00547190: SUB EAX,ESI
// 00547192: CDQ
// 00547193: XOR EAX,EDX
// 00547195: SUB EAX,EDX
// 00547197: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 0054719d: JG 0x00546fdb
//   XREF to: 00546fdb (CONDITIONAL_JUMP)
// 005471a3: PUSH ESI
// 005471a4: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x58] (READ)
// 005471a8: PUSH ECX
// 005471a9: PUSH EBP
// 005471aa: PUSH EBX
// 005471ab: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005471b0: ADD ESP,0x10
// 005471b3: MOV EDI,EAX
// 005471b5: SUB EAX,ESI
// 005471b7: CDQ
// 005471b8: XOR EAX,EDX
// 005471ba: SUB EAX,EDX
// 005471bc: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 005471c2: JG 0x00546fdb
//   XREF to: 00546fdb (CONDITIONAL_JUMP)
// 005471c8: PUSH ESI
// 005471c9: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 005471cd: PUSH EDX
// 005471ce: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x28] (READ)
// 005471d2: PUSH EBP
// 005471d3: PUSH EBX
// 005471d4: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005471d9: ADD ESP,0x10
// 005471dc: MOV ESI,EAX
// 005471de: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x34] (READ)
// 005471e2: DEC EAX
// 005471e3: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005471e7: TEST EAX,EAX
// 005471e9: JG 0x00546fac
//   XREF to: 00546fac (CONDITIONAL_JUMP)
// 005471ef: JMP 0x00546fdb
//   XREF to: 00546fdb (UNCONDITIONAL_JUMP)
// 005471f4: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005471f4
//   XREF to: Stack[-0x64] (READ)
// 005471f8: CDQ
// 005471f9: XOR EAX,EDX
// 005471fb: SUB EAX,EDX
// 005471fd: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00547201: TEST EAX,EAX
// 00547203: JLE 0x0054723e
//   XREF to: 0054723e (CONDITIONAL_JUMP)
// 00547205: LEA EAX,[EBP + 0x1]
// 00547208: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0054720c: LEA EAX,[EBP + -0x1]
// 0054720f: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00547213: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00547213
//   XREF to: Stack[-0x18] (READ)
// 00547217: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x3c] (READ)
// 0054721b: PUSH ESI
// 0054721c: ADD EAX,ECX
// 0054721e: PUSH EAX
// 0054721f: PUSH EBP
// 00547220: PUSH EBX
// 00547221: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00547225: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 0054722a: ADD ESP,0x10
// 0054722d: MOV EDI,EAX
// 0054722f: SUB EAX,ESI
// 00547231: CDQ
// 00547232: XOR EAX,EDX
// 00547234: SUB EAX,EDX
// 00547236: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 0054723c: JLE 0x00547278
//   XREF to: 00547278 (CONDITIONAL_JUMP)
// 0054723e: CMP dword ptr [ESP + 0x34],0x0
//   Label: LAB_0054723e
//   XREF to: Stack[-0x38] (READ)
// 00547243: JNZ 0x00546fe6
//   XREF to: 00546fe6 (CONDITIONAL_JUMP)
// 00547249: MOV ESI,dword ptr [EBX + 0x10]
// 0054724c: PUSH ESI
// 0054724d: MOV EBP,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 00547251: PUSH EBP
// 00547252: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0xc] (READ)
// 00547259: PUSH EAX
// 0054725a: PUSH EBX
// 0054725b: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00547260: ADD ESP,0x10
// 00547263: CMP EDI,EAX
// 00547265: JNZ 0x00546fe6
//   XREF to: 00546fe6 (CONDITIONAL_JUMP)
// 0054726b: MOV EAX,0x2
// 00547270: ADD ESP,0x5c
// 00547273: POP EBP
// 00547274: POP EDI
// 00547275: POP ESI
// 00547276: POP EBX
// 00547277: RET
// 00547278: PUSH ESI
//   Label: LAB_00547278
// 00547279: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0054727d: PUSH ECX
// 0054727e: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x44] (READ)
// 00547282: PUSH EDI
// 00547283: PUSH EBX
// 00547284: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00547289: ADD ESP,0x10
// 0054728c: MOV EDI,EAX
// 0054728e: SUB EAX,ESI
// 00547290: CDQ
// 00547291: XOR EAX,EDX
// 00547293: SUB EAX,EDX
// 00547295: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 0054729b: JG 0x0054723e
//   XREF to: 0054723e (CONDITIONAL_JUMP)
// 0054729d: PUSH ESI
// 0054729e: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 005472a2: PUSH ECX
// 005472a3: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x48] (READ)
// 005472a7: PUSH EDI
// 005472a8: PUSH EBX
// 005472a9: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005472ae: ADD ESP,0x10
// 005472b1: MOV EDI,EAX
// 005472b3: SUB EAX,ESI
// 005472b5: CDQ
// 005472b6: XOR EAX,EDX
// 005472b8: SUB EAX,EDX
// 005472ba: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 005472c0: JG 0x0054723e
//   XREF to: 0054723e (CONDITIONAL_JUMP)
// 005472c6: PUSH ESI
// 005472c7: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 005472cb: PUSH EAX
// 005472cc: PUSH EBP
// 005472cd: PUSH EBX
// 005472ce: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005472d2: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005472d7: ADD ESP,0x10
// 005472da: MOV ESI,EAX
// 005472dc: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x38] (READ)
// 005472e0: DEC EAX
// 005472e1: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005472e5: TEST EAX,EAX
// 005472e7: JG 0x00547213
//   XREF to: 00547213 (CONDITIONAL_JUMP)
// 005472ed: JMP 0x0054723e
//   XREF to: 0054723e (UNCONDITIONAL_JUMP)
