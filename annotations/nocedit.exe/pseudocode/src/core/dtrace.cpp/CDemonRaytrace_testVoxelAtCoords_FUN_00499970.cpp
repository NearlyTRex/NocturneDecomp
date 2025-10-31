// Name: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
// Address: 00499970
// Address Range: [[00499970, 00499a46]]
// Convention: __cdecl
// Signature: int core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970(CDemonRaytrace * this_ptr, CVector3i * voxel_coords)
// Cross-references:
//   core_particle.cpp_CParticle_process_FUN_00545760 (00545760) at 0054583b [UNCONDITIONAL_CALL]
// Globals:
//   uchar[8] g_VoxelYBitMasks

#include "nocturne.h"

int __cdecl
core_dtrace_cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
          (CDemonRaytrace *this_ptr,CVector3i *voxel_coords)

{
  SVoxelGrid *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = voxel_coords->x;
  if ((((-1 < iVar2) && (-1 < voxel_coords->y)) && (-1 < voxel_coords->z)) &&
     ((iVar2 = (int)((iVar2 + (iVar2 >> 0x1f) * -8) - (uint)((iVar2 >> 0x1f) << 2 < 0)) >> 3,
      iVar2 < (this_ptr->grid_coord).x &&
      (iVar4 = voxel_coords->y >> 0x1f,
      iVar4 = (int)((voxel_coords->y + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3,
      iVar4 < (this_ptr->grid_coord).y)))) {
    iVar5 = voxel_coords->z >> 0x1f;
    iVar3 = (int)((voxel_coords->z + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar5 = (this_ptr->grid_coord).z;
    if (iVar3 < iVar5) {
      pSVar1 = this_ptr->cube_data[iVar2 * (this_ptr->grid_coord).y * iVar5 + iVar3 + iVar4 * iVar5]
               .voxel_buffer1;
      if (pSVar1 != (SVoxelGrid *)0x0) {
        return (uint)((pSVar1->voxels[voxel_coords->z & 7][voxel_coords->y & 7] &
                      g_VoxelYBitMasks[voxel_coords->x & 7]) != 0);
      }
    }
  }
  return 0;
}


// Assembly code:
// 00499970: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_testVoxelAtCoords_FUN_00499970
// 00499971: PUSH ESI
// 00499972: PUSH EDI
// 00499973: PUSH EBP
// 00499974: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00499978: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049997c: MOV EDX,dword ptr [ECX]
// 0049997e: TEST EDX,EDX
// 00499980: JL 0x00499a19
//   XREF to: 00499a19 (CONDITIONAL_JUMP)
// 00499986: CMP dword ptr [ECX + 0x4],0x0
// 0049998a: JL 0x00499a19
//   XREF to: 00499a19 (CONDITIONAL_JUMP)
// 00499990: CMP dword ptr [ECX + 0x8],0x0
// 00499994: JL 0x00499a19
//   XREF to: 00499a19 (CONDITIONAL_JUMP)
// 0049999a: MOV EAX,EDX
// 0049999c: SAR EDX,0x1f
// 0049999f: SHL EDX,0x3
// 004999a2: SBB EAX,EDX
// 004999a4: SAR EAX,0x3
// 004999a7: MOV EBP,dword ptr [EBX + 0x40]
// 004999aa: MOV ESI,EAX
// 004999ac: CMP EAX,EBP
// 004999ae: JGE 0x00499a19
//   XREF to: 00499a19 (CONDITIONAL_JUMP)
// 004999b0: MOV EAX,dword ptr [ECX + 0x4]
// 004999b3: MOV EDX,EAX
// 004999b5: SAR EDX,0x1f
// 004999b8: SHL EDX,0x3
// 004999bb: SBB EAX,EDX
// 004999bd: SAR EAX,0x3
// 004999c0: MOV EDI,EAX
// 004999c2: CMP EDI,dword ptr [EBX + 0x44]
// 004999c5: JGE 0x00499a19
//   XREF to: 00499a19 (CONDITIONAL_JUMP)
// 004999c7: MOV EAX,dword ptr [ECX + 0x8]
// 004999ca: MOV EDX,EAX
// 004999cc: SAR EDX,0x1f
// 004999cf: SHL EDX,0x3
// 004999d2: SBB EAX,EDX
// 004999d4: SAR EAX,0x3
// 004999d7: MOV EDX,dword ptr [EBX + 0x48]
// 004999da: CMP EAX,EDX
// 004999dc: JGE 0x00499a19
//   XREF to: 00499a19 (CONDITIONAL_JUMP)
// 004999de: IMUL EDI,EDX
// 004999e1: IMUL ESI,dword ptr [EBX + 0x44]
// 004999e5: IMUL ESI,EDX
// 004999e8: ADD EAX,EDI
// 004999ea: ADD ESI,EAX
// 004999ec: LEA EAX,[ESI*0x4 + 0x0]
// 004999f3: SUB EAX,ESI
// 004999f5: SHL EAX,0x2
// 004999f8: ADD EAX,ESI
// 004999fa: MOV EBX,dword ptr [EBX + 0x50]
// 004999fd: SHL EAX,0x2
// 00499a00: MOV ESI,dword ptr [ECX]
// 00499a02: ADD EAX,EBX
// 00499a04: AND ESI,0x7
// 00499a07: MOV EBX,dword ptr [ECX + 0x4]
// 00499a0a: MOV EDX,dword ptr [EAX]
// 00499a0c: MOV ECX,dword ptr [ECX + 0x8]
// 00499a0f: AND EBX,0x7
// 00499a12: AND ECX,0x7
// 00499a15: TEST EDX,EDX
// 00499a17: JNZ 0x00499a20
//   XREF to: 00499a20 (CONDITIONAL_JUMP)
// 00499a19: XOR EAX,EAX
//   Label: LAB_00499a19
// 00499a1b: POP EBP
// 00499a1c: POP EDI
// 00499a1d: POP ESI
// 00499a1e: POP EBX
// 00499a1f: RET
// 00499a20: SHL ECX,0x3
//   Label: LAB_00499a20
// 00499a23: MOV EAX,EDX
// 00499a25: ADD ECX,EBX
// 00499a27: MOV CL,byte ptr [ECX + EAX*0x1]
// 00499a2a: XOR EAX,EDX
// 00499a2c: AND ECX,0xff
// 00499a32: MOV AL,byte ptr [ESI + 0x6789f8]
//   XREF to: 006789f8 (DATA)
// 00499a38: TEST ECX,EAX
// 00499a3a: SETNZ AL
// 00499a3d: AND EAX,0xff
// 00499a42: POP EBP
// 00499a43: POP EDI
// 00499a44: POP ESI
// 00499a45: POP EBX
// 00499a46: RET
