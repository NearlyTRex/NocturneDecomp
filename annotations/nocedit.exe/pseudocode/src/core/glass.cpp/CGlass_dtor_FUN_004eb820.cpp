// Name: core_glass.cpp_CGlass_dtor_FUN_004eb820
// Address: 004eb820
// Address Range: [[004eb820, 004eb894]]
// Convention: __cdecl
// Signature: CGlass * core_glass.cpp_CGlass_dtor_FUN_004eb820(CGlass * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Globals:
//   WatcomTypeInfo g_CGlassTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_glass.cpp_freeVectorArray25_FUN_004eb8a0
//   core_mirror.cpp_freeMirrorClipPlanes_FUN_005213e0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CGlass * __cdecl
core_glass_cpp_CGlass_dtor_FUN_004eb820(CGlass *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int extraout_EAX;
  SMirror *pSVar1;
  CGlass *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGlassTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_glass_cpp_freeVectorArray25_FUN_004eb8a0((CVector3f **)this_ptr->broken_vertices);
  pSVar1 = core_mirror_cpp_freeMirrorClipPlanes_FUN_005213e0((SMirror *)(extraout_EAX + -0x1a0));
  ptr = (CGlass *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pSVar1[-2].reflection.mirror_transform_matrix.m[2].x,1);
  if ((d4 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004eb820: PUSH EBX
//   Label: core_glass.cpp_CGlass_dtor_FUN_004eb820
// 004eb821: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004eb825: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004eb82a: JNZ 0x004eb86d
//   XREF to: 004eb86d (CONDITIONAL_JUMP)
// 004eb82c: PUSH 0x0
// 004eb82e: ADD EBX,0x38c
// 004eb834: PUSH EBX
// 004eb835: CALL core_glass.cpp_freeVectorArray25_FUN_004eb8a0
//   XREF to: 004eb8a0 (UNCONDITIONAL_CALL)
// 004eb83a: ADD ESP,0x8
// 004eb83d: PUSH 0x0
// 004eb83f: SUB EAX,0x1a0
// 004eb844: PUSH EAX
// 004eb845: CALL core_mirror.cpp_freeMirrorClipPlanes_FUN_005213e0
//   XREF to: 005213e0 (UNCONDITIONAL_CALL)
// 004eb84a: ADD ESP,0x8
// 004eb84d: PUSH 0x1
// 004eb84f: LEA EBX,[EAX + 0xfffffe14]
// 004eb855: PUSH EBX
// 004eb856: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004eb85b: ADD ESP,0x8
// 004eb85e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004eb862: MOV EBX,EAX
// 004eb864: TEST DL,0x2
// 004eb867: JNZ 0x004eb888
//   XREF to: 004eb888 (CONDITIONAL_JUMP)
// 004eb869: MOV EAX,EBX
// 004eb86b: POP EBX
// 004eb86c: RET
// 004eb86d: PUSH 0x65efe0
//   Label: LAB_004eb86d
//   XREF to: 0065efe0 (DATA)
// 004eb872: PUSH EBX
// 004eb873: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004eb878: ADD ESP,0x8
// 004eb87b: PUSH EAX
// 004eb87c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004eb881: ADD ESP,0x4
// 004eb884: MOV EAX,EBX
// 004eb886: POP EBX
// 004eb887: RET
// 004eb888: PUSH EAX
//   Label: LAB_004eb888
// 004eb889: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004eb88e: ADD ESP,0x4
// 004eb891: MOV EAX,EBX
// 004eb893: POP EBX
// 004eb894: RET
