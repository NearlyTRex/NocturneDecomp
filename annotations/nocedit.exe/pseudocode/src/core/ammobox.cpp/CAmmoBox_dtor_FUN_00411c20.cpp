// Name: core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20
// Address: 00411c20
// Address Range: [[00411c20, 00411c6d]]
// Convention: __cdecl
// Signature: CAmmoBox * core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20(CAmmoBox * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CAmmoBoxTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_00411c20(CAmmoBox *this_ptr,uint d1,uint d2)

{
  CAmmoBox *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CAmmoBoxTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CAmmoBox *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00411c20: PUSH EBX
//   Label: core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20
// 00411c21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00411c25: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00411c2a: JNZ 0x00411c46
//   XREF to: 00411c46 (CONDITIONAL_JUMP)
// 00411c2c: PUSH 0x1
// 00411c2e: PUSH EBX
// 00411c2f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00411c34: ADD ESP,0x8
// 00411c37: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00411c3b: MOV EBX,EAX
// 00411c3d: TEST DL,0x2
// 00411c40: JNZ 0x00411c61
//   XREF to: 00411c61 (CONDITIONAL_JUMP)
// 00411c42: MOV EAX,EBX
// 00411c44: POP EBX
// 00411c45: RET
// 00411c46: PUSH 0x659bc0
//   Label: LAB_00411c46
//   XREF to: 00659bc0 (DATA)
// 00411c4b: PUSH EBX
// 00411c4c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00411c51: ADD ESP,0x8
// 00411c54: PUSH EAX
// 00411c55: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00411c5a: ADD ESP,0x4
// 00411c5d: MOV EAX,EBX
// 00411c5f: POP EBX
// 00411c60: RET
// 00411c61: PUSH EAX
//   Label: LAB_00411c61
// 00411c62: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00411c67: ADD ESP,0x4
// 00411c6a: MOV EAX,EBX
// 00411c6c: POP EBX
// 00411c6d: RET
