// Name: core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
// Address: 00499e70
// Address Range: [[00499e70, 00499f06]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_FUN_00574560 (00574560) at 00574565 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(CDemonRaytrace *this_ptr)

{
  uchar *puVar1;
  CDemonCube *pCVar2;
  int iVar3;
  int grid_z;
  SVoxelGrid *pSVar4;
  uchar *puVar5;
  byte bVar6;
  uchar *local_18;
  int local_14;
  
  bVar6 = 0;
  local_18 = (uchar *)0x0;
  if (0 < (this_ptr->grid_coord).x) {
    do {
      local_14 = 0;
      if (0 < (this_ptr->grid_coord).y) {
        do {
          grid_z = 0;
          if (0 < (this_ptr->grid_coord).z) {
            do {
              pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                 (this_ptr,(int)local_18,local_14,grid_z);
              if (((pCVar2 != (CDemonCube *)0x0) &&
                  (puVar1 = (uchar *)pCVar2->voxel_buffer1,
                  (SVoxelGrid *)puVar1 != (SVoxelGrid *)0x0)) &&
                 (pCVar2->voxel_buffer2 != (SVoxelGrid *)0x0)) {
                pSVar4 = pCVar2->voxel_buffer2;
                puVar5 = puVar1;
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(undefined4 *)((SVoxelGrid *)puVar5)->voxels[0] =
                       *(undefined4 *)pSVar4->voxels[0];
                  pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
                  puVar5 = (uchar *)((int)puVar5 + (uint)bVar6 * -8 + 4);
                }
                for (iVar3 = 0; local_18 = puVar1, iVar3 != 0; iVar3 = iVar3 + -1) {
                  ((SVoxelGrid *)puVar5)->voxels[0][0] = pSVar4->voxels[0][0];
                  pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
                  puVar5 = (uchar *)((int)puVar5 + (uint)bVar6 * -2 + 1);
                }
              }
              grid_z = grid_z + 1;
            } while (grid_z < (this_ptr->grid_coord).z);
          }
          local_14 = local_14 + 1;
        } while (local_14 < (this_ptr->grid_coord).y);
      }
      local_18 = local_18 + 1;
    } while ((int)local_18 < (this_ptr->grid_coord).x);
  }
  return;
}


// Assembly code:
// 00499e70: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
// 00499e71: PUSH ESI
// 00499e72: PUSH EDI
// 00499e73: PUSH EBP
// 00499e74: SUB ESP,0x8
// 00499e77: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00499e7b: XOR EDX,EDX
// 00499e7d: MOV ECX,dword ptr [EBP + 0x40]
// 00499e80: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 00499e83: TEST ECX,ECX
// 00499e85: JLE 0x00499ed9
//   XREF to: 00499ed9 (CONDITIONAL_JUMP)
// 00499e87: XOR EDI,EDI
//   Label: LAB_00499e87
// 00499e89: MOV EAX,dword ptr [EBP + 0x44]
// 00499e8c: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00499e90: TEST EAX,EAX
// 00499e92: JLE 0x00499ecb
//   XREF to: 00499ecb (CONDITIONAL_JUMP)
// 00499e94: MOV ESI,dword ptr [EBP + 0x48]
//   Label: LAB_00499e94
// 00499e97: XOR EBX,EBX
// 00499e99: TEST ESI,ESI
// 00499e9b: JLE 0x00499ebb
//   XREF to: 00499ebb (CONDITIONAL_JUMP)
// 00499e9d: PUSH EBX
//   Label: LAB_00499e9d
// 00499e9e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00499ea2: PUSH EAX
// 00499ea3: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00499ea7: PUSH EDX
// 00499ea8: PUSH EBP
// 00499ea9: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 00499eae: ADD ESP,0x10
// 00499eb1: TEST EAX,EAX
// 00499eb3: JNZ 0x00499ee1
//   XREF to: 00499ee1 (CONDITIONAL_JUMP)
// 00499eb5: INC EBX
//   Label: LAB_00499eb5
// 00499eb6: CMP EBX,dword ptr [EBP + 0x48]
// 00499eb9: JL 0x00499e9d
//   XREF to: 00499e9d (CONDITIONAL_JUMP)
// 00499ebb: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_00499ebb
//   XREF to: Stack[-0x14] (READ)
// 00499ebf: INC EDX
// 00499ec0: MOV ECX,dword ptr [EBP + 0x44]
// 00499ec3: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00499ec7: CMP EDX,ECX
// 00499ec9: JL 0x00499e94
//   XREF to: 00499e94 (CONDITIONAL_JUMP)
// 00499ecb: MOV EBX,dword ptr [ESP]
//   Label: LAB_00499ecb
//   XREF to: Stack[-0x18] (DATA)
// 00499ece: INC EBX
// 00499ecf: MOV ESI,dword ptr [EBP + 0x40]
// 00499ed2: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x18] (DATA)
// 00499ed5: CMP EBX,ESI
// 00499ed7: JL 0x00499e87
//   XREF to: 00499e87 (CONDITIONAL_JUMP)
// 00499ed9: ADD ESP,0x8
//   Label: LAB_00499ed9
// 00499edc: POP EBP
// 00499edd: POP EDI
// 00499ede: POP ESI
// 00499edf: POP EBX
// 00499ee0: RET
// 00499ee1: MOV ECX,dword ptr [EAX]
//   Label: LAB_00499ee1
// 00499ee3: TEST ECX,ECX
// 00499ee5: JZ 0x00499eb5
//   XREF to: 00499eb5 (CONDITIONAL_JUMP)
// 00499ee7: MOV ESI,dword ptr [EAX + 0x4]
// 00499eea: TEST ESI,ESI
// 00499eec: JZ 0x00499eb5
//   XREF to: 00499eb5 (CONDITIONAL_JUMP)
// 00499eee: MOV EDI,ECX
// 00499ef0: MOV ECX,0x40
// 00499ef5: PUSH EDI
// 00499ef6: MOV EAX,ECX
// 00499ef8: SHR ECX,0x2
// 00499efb: MOVSD.REP ES:EDI,ESI
// 00499efd: MOV CL,AL
// 00499eff: AND CL,0x3
// 00499f02: MOVSB.REP ES:EDI,ESI
// 00499f04: POP EDI
// 00499f05: JMP 0x00499eb5
//   XREF to: 00499eb5 (UNCONDITIONAL_JUMP)
