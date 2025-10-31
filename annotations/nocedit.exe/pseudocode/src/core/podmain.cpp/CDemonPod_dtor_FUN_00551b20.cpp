// Name: core_podmain.cpp_CDemonPod_dtor_FUN_00551b20
// Address: 00551b20
// Address Range: [[00551b20, 00551b6d]]
// Convention: __cdecl
// Signature: CDemonPod * core_podmain.cpp_CDemonPod_dtor_FUN_00551b20(CDemonPod * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CDemonPodTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   engine_pod.cpp_CPod_dtor_FUN_005509b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CDemonPod * __cdecl
core_podmain_cpp_CDemonPod_dtor_FUN_00551b20(CDemonPod *this_ptr,uint d1,uint d2)

{
  CPod *ptr;
  void *ptr_00;
  uint unaff_EBX;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDemonPodTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = engine_pod_cpp_CPod_dtor_FUN_005509b0((CPod *)this_ptr,1,unaff_EBX);
  if ((d2 & 2) == 0) {
    return (CDemonPod *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CDemonPod *)ptr;
}


// Assembly code:
// 00551b20: PUSH EBX
//   Label: core_podmain.cpp_CDemonPod_dtor_FUN_00551b20
// 00551b21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00551b25: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00551b2a: JNZ 0x00551b46
//   XREF to: 00551b46 (CONDITIONAL_JUMP)
// 00551b2c: PUSH 0x1
// 00551b2e: PUSH EBX
// 00551b2f: CALL engine_pod.cpp_CPod_dtor_FUN_005509b0
//   XREF to: 005509b0 (UNCONDITIONAL_CALL)
// 00551b34: ADD ESP,0x8
// 00551b37: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00551b3b: MOV EBX,EAX
// 00551b3d: TEST DL,0x2
// 00551b40: JNZ 0x00551b61
//   XREF to: 00551b61 (CONDITIONAL_JUMP)
// 00551b42: MOV EAX,EBX
// 00551b44: POP EBX
// 00551b45: RET
// 00551b46: PUSH 0x662420
//   Label: LAB_00551b46
//   XREF to: 00662420 (DATA)
// 00551b4b: PUSH EBX
// 00551b4c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00551b51: ADD ESP,0x8
// 00551b54: PUSH EAX
// 00551b55: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00551b5a: ADD ESP,0x4
// 00551b5d: MOV EAX,EBX
// 00551b5f: POP EBX
// 00551b60: RET
// 00551b61: PUSH EAX
//   Label: LAB_00551b61
// 00551b62: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00551b67: ADD ESP,0x4
// 00551b6a: MOV EAX,EBX
// 00551b6c: POP EBX
// 00551b6d: RET
