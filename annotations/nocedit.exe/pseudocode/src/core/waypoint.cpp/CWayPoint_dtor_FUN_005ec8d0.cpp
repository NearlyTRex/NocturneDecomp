// Name: core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0
// Address: 005ec8d0
// Address Range: [[005ec8d0, 005ec91d]]
// Convention: __cdecl
// Signature: CWayPoint * core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0(CWayPoint * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CWayPointTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CWayPoint * __cdecl
core_waypoint_cpp_CWayPoint_dtor_FUN_005ec8d0(CWayPoint *this_ptr,uint d1,uint d2)

{
  CWayPoint *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CWayPointTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CWayPoint *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)this_ptr,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005ec8d0: PUSH EBX
//   Label: core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0
// 005ec8d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ec8d5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005ec8da: JNZ 0x005ec8f6
//   XREF to: 005ec8f6 (CONDITIONAL_JUMP)
// 005ec8dc: PUSH 0x1
// 005ec8de: PUSH EBX
// 005ec8df: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005ec8e4: ADD ESP,0x8
// 005ec8e7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ec8eb: MOV EBX,EAX
// 005ec8ed: TEST DL,0x2
// 005ec8f0: JNZ 0x005ec911
//   XREF to: 005ec911 (CONDITIONAL_JUMP)
// 005ec8f2: MOV EAX,EBX
// 005ec8f4: POP EBX
// 005ec8f5: RET
// 005ec8f6: PUSH 0x665570
//   Label: LAB_005ec8f6
//   XREF to: 00665570 (DATA)
// 005ec8fb: PUSH EBX
// 005ec8fc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005ec901: ADD ESP,0x8
// 005ec904: PUSH EAX
// 005ec905: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005ec90a: ADD ESP,0x4
// 005ec90d: MOV EAX,EBX
// 005ec90f: POP EBX
// 005ec910: RET
// 005ec911: PUSH EAX
//   Label: LAB_005ec911
// 005ec912: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005ec917: ADD ESP,0x4
// 005ec91a: MOV EAX,EBX
// 005ec91c: POP EBX
// 005ec91d: RET
