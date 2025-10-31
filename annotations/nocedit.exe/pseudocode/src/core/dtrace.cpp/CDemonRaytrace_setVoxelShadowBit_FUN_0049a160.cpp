// Name: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
// Address: 0049a160
// Address Range: [[0049a160, 0049a27c]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(CDemonRaytrace * this_ptr, CVector3f * world_position)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20 (00499c20) at 00499e26 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622d7a
//   TerminatedCString s_Parity_Check_999_00622d8d
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
core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
          (CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  CDemonCube *this_ptr_00;
  uchar *puVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  CVector3f *in_stack_0000000c;
  int aiStackY_1028 [1016];
  CVector3i *in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  int in_stack_ffffffc8;
  int in_stack_ffffffcc;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int iStack_14;
  
  bVar2 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
            (this_ptr,world_position,in_stack_ffffffc0);
  *(undefined4 *)(&stack0xffffffc4 + (uint)bVar2 * -8) =
       *(undefined4 *)((int)&stack0xffffffe0 + (uint)bVar2 * -8);
  *(undefined4 *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(undefined4 *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((((-1 < (int)in_stack_ffffffc4) && (-1 < in_stack_ffffffc8)) && (-1 < in_stack_ffffffcc)) &&
     ((((int)in_stack_ffffffc4 < (this_ptr->grid_coord).x &&
       (in_stack_ffffffc8 < (this_ptr->grid_coord).y)) &&
      (in_stack_ffffffcc < (this_ptr->grid_coord).z)))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (this_ptr,in_stack_0000000c,in_stack_ffffffc4);
    local_30 = iStack_14;
    *(undefined4 *)((int)&stack0xffffffd4 + (uint)bVar2 * -8) =
         *(undefined4 *)(&stack0xfffffff0 + (uint)bVar2 * -8);
    *(undefined4 *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(undefined4 *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_2c = local_2c % 8;
    local_28 = local_28 % 8;
    iStack_24 = iStack_24 % 8;
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,in_stack_ffffffc8,in_stack_ffffffcc,local_30);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 0xb19;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Parity Check 999");
    }
    if (this_ptr_00->voxel_buffer1 == (SVoxelGrid *)0x0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(this_ptr_00);
    }
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_1c] + iStack_20;
    *puVar1 = *puVar1 | g_VoxelYBitMasks[iStack_24];
    return;
  }
  return;
}


// Assembly code:
// 0049a160: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
// 0049a161: PUSH ESI
// 0049a162: PUSH EDI
// 0049a163: PUSH EBP
// 0049a164: SUB ESP,0x30
// 0049a167: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0049a16b: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 0049a16f: PUSH EDX
// 0049a170: PUSH EBX
// 0049a171: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 0049a175: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 0049a179: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
//   XREF to: 004997d0 (UNCONDITIONAL_CALL)
// 0049a17e: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 0049a182: ADD ESP,0x8
// 0049a185: MOVSD ES:EDI,ESI
// 0049a186: MOVSD ES:EDI,ESI
// 0049a187: MOVSD ES:EDI,ESI
// 0049a188: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0049a18b: TEST ECX,ECX
// 0049a18d: JL 0x0049a1ae
//   XREF to: 0049a1ae (CONDITIONAL_JUMP)
// 0049a18f: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0049a193: TEST ESI,ESI
// 0049a195: JL 0x0049a1ae
//   XREF to: 0049a1ae (CONDITIONAL_JUMP)
// 0049a197: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0049a19b: TEST EDI,EDI
// 0049a19d: JL 0x0049a1ae
//   XREF to: 0049a1ae (CONDITIONAL_JUMP)
// 0049a19f: CMP ECX,dword ptr [EBX + 0x40]
// 0049a1a2: JGE 0x0049a1ae
//   XREF to: 0049a1ae (CONDITIONAL_JUMP)
// 0049a1a4: CMP ESI,dword ptr [EBX + 0x44]
// 0049a1a7: JGE 0x0049a1ae
//   XREF to: 0049a1ae (CONDITIONAL_JUMP)
// 0049a1a9: CMP EDI,dword ptr [EBX + 0x48]
// 0049a1ac: JL 0x0049a1b6
//   XREF to: 0049a1b6 (CONDITIONAL_JUMP)
// 0049a1ae: ADD ESP,0x30
//   Label: LAB_0049a1ae
// 0049a1b1: POP EBP
// 0049a1b2: POP EDI
// 0049a1b3: POP ESI
// 0049a1b4: POP EBX
// 0049a1b5: RET
// 0049a1b6: MOV ESI,dword ptr [ESP + 0x48]
//   Label: LAB_0049a1b6
//   XREF to: Stack[0x8] (READ)
// 0049a1ba: PUSH ESI
// 0049a1bb: PUSH EBX
// 0049a1bc: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x1c] (DATA)
// 0049a1c0: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x34] (DATA)
// 0049a1c4: CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
//   XREF to: 00499880 (UNCONDITIONAL_CALL)
// 0049a1c9: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x1c] (DATA)
// 0049a1cd: ADD ESP,0x8
// 0049a1d0: MOVSD ES:EDI,ESI
// 0049a1d1: MOVSD ES:EDI,ESI
// 0049a1d2: MOVSD ES:EDI,ESI
// 0049a1d3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0049a1d7: MOV EDX,EAX
// 0049a1d9: MOV ESI,0x8
// 0049a1de: SAR EDX,0x1f
// 0049a1e1: IDIV ESI
// 0049a1e3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0049a1e7: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0049a1eb: MOV EDX,EAX
// 0049a1ed: SAR EDX,0x1f
// 0049a1f0: IDIV ESI
// 0049a1f2: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0049a1f6: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0049a1fa: MOV EDX,EAX
// 0049a1fc: SAR EDX,0x1f
// 0049a1ff: IDIV ESI
// 0049a201: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0049a205: PUSH EDI
// 0049a206: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x3c] (READ)
// 0049a20a: PUSH EBP
// 0049a20b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 0049a20f: PUSH EAX
// 0049a210: PUSH EBX
// 0049a211: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0049a215: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 0049a21a: ADD ESP,0x10
// 0049a21d: MOV EBX,EAX
// 0049a21f: TEST EAX,EAX
// 0049a221: JNZ 0x0049a246
//   XREF to: 0049a246 (CONDITIONAL_JUMP)
// 0049a223: MOV EDX,0x622d7a
//   XREF to: 00622d7a (PARAM)
// 0049a228: MOV ECX,0xb19
// 0049a22d: PUSH 0x622d8d
//   XREF to: 00622d8d (DATA)
// 0049a232: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0049a238: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0049a23e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049a243: ADD ESP,0x4
// 0049a246: CMP dword ptr [EBX],0x0
//   Label: LAB_0049a246
// 0049a249: JNZ 0x0049a254
//   XREF to: 0049a254 (CONDITIONAL_JUMP)
// 0049a24b: PUSH EBX
// 0049a24c: CALL core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
//   XREF to: 004567b0 (UNCONDITIONAL_CALL)
// 0049a251: ADD ESP,0x4
// 0049a254: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0049a254
//   XREF to: Stack[-0x2c] (READ)
// 0049a258: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0049a25c: SHL EAX,0x3
// 0049a25f: MOV EBX,dword ptr [EBX]
// 0049a261: ADD EAX,EDI
// 0049a263: ADD EAX,EBX
// 0049a265: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0049a269: MOV DL,byte ptr [EAX]
// 0049a26b: MOV BL,byte ptr [EBX + 0x6789f8]
//   XREF to: 006789f8 (DATA)
// 0049a271: OR DL,BL
// 0049a273: MOV byte ptr [EAX],DL
// 0049a275: ADD ESP,0x30
// 0049a278: POP EBP
// 0049a279: POP EDI
// 0049a27a: POP ESI
// 0049a27b: POP EBX
// 0049a27c: RET
