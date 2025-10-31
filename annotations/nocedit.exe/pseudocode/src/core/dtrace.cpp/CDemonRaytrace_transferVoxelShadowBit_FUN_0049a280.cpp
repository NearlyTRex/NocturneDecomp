// Name: core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
// Address: 0049a280
// Address Range: [[0049a280, 0049a3ad]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280(CDemonRaytrace * this_ptr, CVector3f * world_position)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10 (00499f10) at 0049a116 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622d9e
//   TerminatedCString s_Parity_Check_999_00622db1
//   uchar[8] g_VoxelYBitMasks
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
          (CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  CDemonCube *this_ptr_00;
  BADSPACEBASE *in_ESP;
  uchar *puVar1;
  byte bVar2;
  CVector3f *in_stack_0000000c;
  int aiStackY_1024 [1015];
  CVector3i *in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  
  bVar2 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
            (this_ptr,world_position,in_stack_ffffffc0);
  *(undefined4 *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) =
       *(undefined4 *)(&stack0xffffffe0 + (uint)bVar2 * -8);
  *(undefined4 *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(undefined4 *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((((-1 < local_30) && (-1 < local_2c)) && (-1 < local_28)) &&
     (((local_30 < (this_ptr->grid_coord).x && (local_2c < (this_ptr->grid_coord).y)) &&
      (local_28 < (this_ptr->grid_coord).z)))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (this_ptr,in_stack_0000000c,in_stack_ffffffc4);
    *(undefined4 *)(&stack0xffffffc8 + (uint)bVar2 * -8) =
         *(undefined4 *)(&stack0xfffffff0 + (uint)bVar2 * -8);
    *(undefined4 *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(undefined4 *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_30 = local_30 % 8;
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,local_2c,local_28,iStack_24);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 0xb55;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Parity Check 999");
    }
    if (this_ptr_00->voxel_buffer1 == (SVoxelGrid *)0x0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(this_ptr_00);
    }
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_28] + local_2c;
    *puVar1 = *puVar1 & (g_VoxelYBitMasks[local_30] ^ 0xff);
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_28] + local_2c;
    *puVar1 = *puVar1 | this_ptr_00->voxel_buffer2->voxels[local_28][local_2c] &
                        g_VoxelYBitMasks[local_30];
    return;
  }
  return;
}


// Assembly code:
// 0049a280: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
// 0049a281: PUSH ESI
// 0049a282: PUSH EDI
// 0049a283: PUSH EBP
// 0049a284: SUB ESP,0x30
// 0049a287: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0049a28b: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 0049a28f: PUSH EDX
// 0049a290: PUSH EBX
// 0049a291: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 0049a295: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x34] (DATA)
// 0049a299: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
//   XREF to: 004997d0 (UNCONDITIONAL_CALL)
// 0049a29e: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 0049a2a2: ADD ESP,0x8
// 0049a2a5: MOVSD ES:EDI,ESI
// 0049a2a6: MOVSD ES:EDI,ESI
// 0049a2a7: MOVSD ES:EDI,ESI
// 0049a2a8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0049a2ac: TEST ECX,ECX
// 0049a2ae: JL 0x0049a2cf
//   XREF to: 0049a2cf (CONDITIONAL_JUMP)
// 0049a2b0: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0049a2b4: TEST ESI,ESI
// 0049a2b6: JL 0x0049a2cf
//   XREF to: 0049a2cf (CONDITIONAL_JUMP)
// 0049a2b8: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0049a2bc: TEST EDI,EDI
// 0049a2be: JL 0x0049a2cf
//   XREF to: 0049a2cf (CONDITIONAL_JUMP)
// 0049a2c0: CMP ECX,dword ptr [EBX + 0x40]
// 0049a2c3: JGE 0x0049a2cf
//   XREF to: 0049a2cf (CONDITIONAL_JUMP)
// 0049a2c5: CMP ESI,dword ptr [EBX + 0x44]
// 0049a2c8: JGE 0x0049a2cf
//   XREF to: 0049a2cf (CONDITIONAL_JUMP)
// 0049a2ca: CMP EDI,dword ptr [EBX + 0x48]
// 0049a2cd: JL 0x0049a2d7
//   XREF to: 0049a2d7 (CONDITIONAL_JUMP)
// 0049a2cf: ADD ESP,0x30
//   Label: LAB_0049a2cf
// 0049a2d2: POP EBP
// 0049a2d3: POP EDI
// 0049a2d4: POP ESI
// 0049a2d5: POP EBX
// 0049a2d6: RET
// 0049a2d7: MOV ESI,dword ptr [ESP + 0x48]
//   Label: LAB_0049a2d7
//   XREF to: Stack[0x8] (READ)
// 0049a2db: PUSH ESI
// 0049a2dc: PUSH EBX
// 0049a2dd: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x1c] (DATA)
// 0049a2e1: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 0049a2e5: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   XREF to: 00499880 (UNCONDITIONAL_CALL)
// 0049a2ea: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x1c] (DATA)
// 0049a2ee: ADD ESP,0x8
// 0049a2f1: MOVSD ES:EDI,ESI
// 0049a2f2: MOVSD ES:EDI,ESI
// 0049a2f3: MOVSD ES:EDI,ESI
// 0049a2f4: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0049a2f7: MOV EDX,EAX
// 0049a2f9: MOV ESI,0x8
// 0049a2fe: SAR EDX,0x1f
// 0049a301: IDIV ESI
// 0049a303: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0049a307: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 0049a30a: MOV EDX,EAX
// 0049a30c: SAR EDX,0x1f
// 0049a30f: IDIV ESI
// 0049a311: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0049a315: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0049a319: MOV EDX,EAX
// 0049a31b: SAR EDX,0x1f
// 0049a31e: IDIV ESI
// 0049a320: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0049a324: PUSH EDI
// 0049a325: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x30] (READ)
// 0049a329: PUSH EBP
// 0049a32a: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 0049a32e: PUSH EAX
// 0049a32f: PUSH EBX
// 0049a330: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0049a334: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 0049a339: ADD ESP,0x10
// 0049a33c: MOV EBX,EAX
// 0049a33e: TEST EAX,EAX
// 0049a340: JNZ 0x0049a365
//   XREF to: 0049a365 (CONDITIONAL_JUMP)
// 0049a342: MOV EDX,0x622d9e
//   XREF to: 00622d9e (PARAM)
// 0049a347: MOV ECX,0xb55
// 0049a34c: PUSH 0x622db1
//   XREF to: 00622db1 (DATA)
// 0049a351: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0049a357: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0049a35d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049a362: ADD ESP,0x4
// 0049a365: CMP dword ptr [EBX],0x0
//   Label: LAB_0049a365
// 0049a368: JNZ 0x0049a373
//   XREF to: 0049a373 (CONDITIONAL_JUMP)
// 0049a36a: PUSH EBX
// 0049a36b: CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
//   XREF to: 004567b0 (UNCONDITIONAL_CALL)
// 0049a370: ADD ESP,0x4
// 0049a373: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0049a373
//   XREF to: Stack[-0x38] (READ)
// 0049a377: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0049a37b: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0049a37e: MOV ESI,dword ptr [EBX]
// 0049a380: SHL EAX,0x3
// 0049a383: MOV DL,byte ptr [EDX + 0x6789f8]
//   XREF to: 006789f8 (DATA)
// 0049a389: ADD EAX,EDI
// 0049a38b: XOR DL,0xff
// 0049a38e: AND byte ptr [ESI + EAX*0x1],DL
// 0049a391: MOV ESI,dword ptr [EBX]
// 0049a393: MOV EDX,dword ptr [EBX + 0x4]
// 0049a396: ADD ESI,EAX
// 0049a398: MOV AL,byte ptr [EDX + EAX*0x1]
// 0049a39b: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0049a39e: AND AL,byte ptr [EDX + 0x6789f8]
//   XREF to: 006789f8 (DATA)
// 0049a3a4: OR byte ptr [ESI],AL
// 0049a3a6: ADD ESP,0x30
// 0049a3a9: POP EBP
// 0049a3aa: POP EDI
// 0049a3ab: POP ESI
// 0049a3ac: POP EBX
// 0049a3ad: RET
