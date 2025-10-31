// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
// Address: 00499a50
// Address Range: [[00499a50, 00499b3c]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
// Cross-references:
//   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 (00546ba0) at 00546c1d [UNCONDITIONAL_CALL]
// Globals:
//   uchar[8] g_VoxelYBitMasks
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
          (CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

{
  uint uVar1;
  CDemonCube *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  iVar3 = voxel_coords->x >> 0x1f;
  iVar3 = (int)((voxel_coords->x + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
  iVar4 = voxel_coords->y >> 0x1f;
  iVar4 = (int)((voxel_coords->y + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar5 = voxel_coords->z >> 0x1f;
  iVar5 = (int)((voxel_coords->z + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
  if (((((-1 < iVar3) && (-1 < iVar4)) && (-1 < iVar5)) &&
      ((iVar3 < (this_ptr->grid_coord).x && (iVar4 < (this_ptr->grid_coord).y)))) &&
     (iVar5 < (this_ptr->grid_coord).z)) {
    uVar1 = voxel_coords->x;
    uVar6 = voxel_coords->y & 7;
    do {
      do {
        pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(this_ptr,iVar3,iVar4,iVar5);
        if (pCVar2 == (CDemonCube *)0x0) {
          return -999;
        }
        if ((pCVar2->voxel_buffer1 != (SVoxelGrid *)0x0) &&
           ((pCVar2->voxel_buffer1->voxels[0][unaff_EBP + uVar6] & g_VoxelYBitMasks[uVar1 & 7]) != 0
           )) {
          return uVar6 + iVar4 * 8;
        }
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
      iVar4 = iVar4 + -1;
      uVar6 = 7;
    } while (-1 < iVar4);
  }
  return -999;
}


// Assembly code:
// 00499a50: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtVoxelCoords_FUN_00499a50
// 00499a51: PUSH ESI
// 00499a52: PUSH EDI
// 00499a53: PUSH EBP
// 00499a54: SUB ESP,0x8
// 00499a57: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00499a5b: MOV EAX,dword ptr [ECX]
// 00499a5d: MOV EDX,EAX
// 00499a5f: SAR EDX,0x1f
// 00499a62: SHL EDX,0x3
// 00499a65: SBB EAX,EDX
// 00499a67: SAR EAX,0x3
// 00499a6a: MOV EDI,EAX
// 00499a6c: MOV EAX,dword ptr [ECX + 0x4]
// 00499a6f: MOV EDX,EAX
// 00499a71: SAR EDX,0x1f
// 00499a74: SHL EDX,0x3
// 00499a77: SBB EAX,EDX
// 00499a79: SAR EAX,0x3
// 00499a7c: MOV ESI,EAX
// 00499a7e: MOV EAX,dword ptr [ECX + 0x8]
// 00499a81: MOV EDX,EAX
// 00499a83: SAR EDX,0x1f
// 00499a86: SHL EDX,0x3
// 00499a89: SBB EAX,EDX
// 00499a8b: SAR EAX,0x3
// 00499a8e: MOV EBP,EAX
// 00499a90: TEST EDI,EDI
// 00499a92: JL 0x00499b1f
//   XREF to: 00499b1f (CONDITIONAL_JUMP)
// 00499a98: TEST ESI,ESI
// 00499a9a: JL 0x00499b1f
//   XREF to: 00499b1f (CONDITIONAL_JUMP)
// 00499aa0: TEST EAX,EAX
// 00499aa2: JL 0x00499b1f
//   XREF to: 00499b1f (CONDITIONAL_JUMP)
// 00499aa8: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00499aac: CMP EDI,dword ptr [EAX + 0x40]
// 00499aaf: JGE 0x00499b1f
//   XREF to: 00499b1f (CONDITIONAL_JUMP)
// 00499ab5: CMP ESI,dword ptr [EAX + 0x44]
// 00499ab8: JGE 0x00499b1f
//   XREF to: 00499b1f (CONDITIONAL_JUMP)
// 00499aba: CMP EBP,dword ptr [EAX + 0x48]
// 00499abd: JGE 0x00499b1f
//   XREF to: 00499b1f (CONDITIONAL_JUMP)
// 00499abf: MOV EAX,dword ptr [ECX]
// 00499ac1: AND EAX,0x7
// 00499ac4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00499ac7: MOV EAX,dword ptr [ECX + 0x8]
// 00499aca: AND EAX,0x7
// 00499acd: MOV EBX,dword ptr [ECX + 0x4]
// 00499ad0: SHL EAX,0x3
// 00499ad3: AND EBX,0x7
// 00499ad6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00499ada: PUSH EBP
//   Label: LAB_00499ada
// 00499adb: PUSH ESI
// 00499adc: PUSH EDI
// 00499add: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00499ae1: PUSH ECX
// 00499ae2: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 00499ae7: ADD ESP,0x10
// 00499aea: TEST EAX,EAX
// 00499aec: JZ 0x00499b1f
//   XREF to: 00499b1f (CONDITIONAL_JUMP)
// 00499aee: CMP dword ptr [EAX],0x0
// 00499af1: JZ 0x00499b10
//   XREF to: 00499b10 (CONDITIONAL_JUMP)
// 00499af3: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00499af7: MOV EAX,dword ptr [EAX]
// 00499af9: ADD EDX,EBX
// 00499afb: ADD EAX,EDX
// 00499afd: XOR EDX,EDX
// 00499aff: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00499b02: MOV DL,byte ptr [EAX]
// 00499b04: XOR EAX,EAX
// 00499b06: MOV AL,byte ptr [ECX + 0x6789f8]
//   XREF to: 006789f8 (DATA)
// 00499b0c: TEST EDX,EAX
// 00499b0e: JNZ 0x00499b2e
//   XREF to: 00499b2e (CONDITIONAL_JUMP)
// 00499b10: DEC EBX
//   Label: LAB_00499b10
// 00499b11: TEST EBX,EBX
// 00499b13: JGE 0x00499ada
//   XREF to: 00499ada (CONDITIONAL_JUMP)
// 00499b15: DEC ESI
// 00499b16: MOV EBX,0x7
// 00499b1b: TEST ESI,ESI
// 00499b1d: JGE 0x00499ada
//   XREF to: 00499ada (CONDITIONAL_JUMP)
// 00499b1f: MOV EBX,0xfffffc19
//   Label: LAB_00499b1f
// 00499b24: MOV EAX,EBX
// 00499b26: ADD ESP,0x8
// 00499b29: POP EBP
// 00499b2a: POP EDI
// 00499b2b: POP ESI
// 00499b2c: POP EBX
// 00499b2d: RET
// 00499b2e: SHL ESI,0x3
//   Label: LAB_00499b2e
// 00499b31: ADD EBX,ESI
// 00499b33: MOV EAX,EBX
// 00499b35: ADD ESP,0x8
// 00499b38: POP EBP
// 00499b39: POP EDI
// 00499b3a: POP ESI
// 00499b3b: POP EBX
// 00499b3c: RET
