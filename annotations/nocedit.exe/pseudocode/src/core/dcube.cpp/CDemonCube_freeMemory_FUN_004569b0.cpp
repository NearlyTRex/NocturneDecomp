// Name: core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0
// Address: 004569b0
// Address Range: [[004569b0, 00456a8a]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0(CDemonCube * this_ptr)
// Cross-references:
//   core_dcube.cpp_CDemonCube_dtor_FUN_00456790 (00456790) at 00456796 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcube_cpp_0061a75d
//   TerminatedCString s_core_dcube_cpp_0061a76f
//   TerminatedCString s_core_dcube_cpp_0061a781
//   TerminatedCString s_core_dcube_cpp_0061a793
//   TerminatedCString s_core_dcube_cpp_0061a7a5
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_freeMemory_FUN_004569b0(CDemonCube *this_ptr)

{
  CVector3f *pCVar1;
  
  pCVar1 = this_ptr->vertex_buffer;
  if (pCVar1 != (CVector3f *)0x0) {
    g_CurrentDebugLine = 0x614;
    g_CurrentDebugFilename = "..\\core\\dcube.cpp";
    if (pCVar1 != (CVector3f *)0x0) {
      crt_memory_c_free_FUN_005fe659(&pCVar1[-1].z);
    }
    this_ptr->vertex_buffer = (CVector3f *)0x0;
  }
  if (this_ptr->triangle_buffer != (CDemonCubeTriangle *)0x0) {
    g_CurrentDebugFilename = "..\\core\\dcube.cpp";
    g_CurrentDebugLine = 0x618;
    crt_memory_c_free_FUN_005fe659(this_ptr->triangle_buffer);
    this_ptr->triangle_buffer = (CDemonCubeTriangle *)0x0;
  }
  if (this_ptr->ground_type_memory != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->ground_type_memory,"..\\core\\dcube.cpp",0x61c);
    this_ptr->ground_type_memory = (void *)0x0;
  }
  if (this_ptr->voxel_buffer1 != (SVoxelGrid *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->voxel_buffer1,"..\\core\\dcube.cpp",0x620)
    ;
    this_ptr->voxel_buffer1 = (SVoxelGrid *)0x0;
  }
  if (this_ptr->voxel_buffer2 == (SVoxelGrid *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->voxel_buffer2,"..\\core\\dcube.cpp",0x624);
  this_ptr->voxel_buffer2 = (SVoxelGrid *)0x0;
  return;
}


// Assembly code:
// 004569b0: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0
// 004569b1: PUSH EDI
// 004569b2: PUSH EBP
// 004569b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004569b7: MOV EDX,dword ptr [EBX + 0x24]
// 004569ba: TEST EDX,EDX
// 004569bc: JNZ 0x00456a39
//   XREF to: 00456a39 (CONDITIONAL_JUMP)
// 004569c2: MOV EDI,dword ptr [EBX + 0x2c]
//   Label: LAB_004569c2
// 004569c5: TEST EDI,EDI
// 004569c7: JZ 0x004569ee
//   XREF to: 004569ee (CONDITIONAL_JUMP)
// 004569c9: MOV EBP,0x61a76f
//   XREF to: 0061a76f (DATA)
// 004569ce: MOV EAX,0x618
// 004569d3: PUSH EDI
// 004569d4: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 004569da: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 004569df: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004569e4: ADD ESP,0x4
// 004569e7: MOV dword ptr [EBX + 0x2c],0x0
// 004569ee: MOV ECX,dword ptr [EBX + 0x30]
//   Label: LAB_004569ee
// 004569f1: TEST ECX,ECX
// 004569f3: JZ 0x00456a0f
//   XREF to: 00456a0f (CONDITIONAL_JUMP)
// 004569f5: PUSH 0x61c
// 004569fa: PUSH 0x61a781
//   XREF to: 0061a781 (DATA)
// 004569ff: PUSH ECX
// 00456a00: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00456a05: ADD ESP,0xc
// 00456a08: MOV dword ptr [EBX + 0x30],0x0
// 00456a0f: MOV EDI,dword ptr [EBX]
//   Label: LAB_00456a0f
// 00456a11: TEST EDI,EDI
// 00456a13: JZ 0x00456a2e
//   XREF to: 00456a2e (CONDITIONAL_JUMP)
// 00456a15: PUSH 0x620
// 00456a1a: PUSH 0x61a793
//   XREF to: 0061a793 (DATA)
// 00456a1f: PUSH EDI
// 00456a20: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00456a25: ADD ESP,0xc
// 00456a28: MOV dword ptr [EBX],0x0
// 00456a2e: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00456a2e
// 00456a31: TEST EAX,EAX
// 00456a33: JNZ 0x00456a6d
//   XREF to: 00456a6d (CONDITIONAL_JUMP)
// 00456a35: POP EBP
// 00456a36: POP EDI
// 00456a37: POP EBX
// 00456a38: RET
// 00456a39: PUSH ESI
//   Label: LAB_00456a39
// 00456a3a: MOV ESI,0x614
// 00456a3f: MOV ECX,0x61a75d
//   XREF to: 0061a75d (DATA)
// 00456a44: MOV EAX,EDX
// 00456a46: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00456a4c: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00456a52: JZ 0x00456a60
//   XREF to: 00456a60 (CONDITIONAL_JUMP)
// 00456a54: LEA EAX,[EDX + -0x4]
// 00456a57: PUSH EAX
// 00456a58: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00456a5d: ADD ESP,0x4
// 00456a60: MOV dword ptr [EBX + 0x24],0x0
//   Label: LAB_00456a60
// 00456a67: POP ESI
// 00456a68: JMP 0x004569c2
//   XREF to: 004569c2 (UNCONDITIONAL_JUMP)
// 00456a6d: PUSH 0x624
//   Label: LAB_00456a6d
// 00456a72: PUSH 0x61a7a5
//   XREF to: 0061a7a5 (DATA)
// 00456a77: PUSH EAX
// 00456a78: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00456a7d: ADD ESP,0xc
// 00456a80: MOV dword ptr [EBX + 0x4],0x0
// 00456a87: POP EBP
// 00456a88: POP EDI
// 00456a89: POP EBX
// 00456a8a: RET
