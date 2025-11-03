// Name: core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0
// Address: 004495a0
// Address Range: [[004495a0, 00449604]]
// Convention: __cdecl
// Signature: CCrossbow * core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CCrossbowTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CCrossbow * __cdecl
core_crossbow_cpp_CCrossbow_dtor_FUN_004495a0(CCrossbow *this_ptr,uint d1,uint d2,uint d3)

{
  CDemonActor *pCVar1;
  CCrossbow *ptr;
  void *ptr_00;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCrossbowTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                     ((CDemonActor *)(this_ptr->field1_0x578 + 4),1);
  ptr = (CCrossbow *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80
                  ((CWeapon *)&pCVar1[-5].previous_transform_state.orientation.z,1,unaff_retaddr,
                   (uint)this_ptr);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004495a0: PUSH EBX
//   Label: core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0
// 004495a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004495a5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004495aa: JNZ 0x004495dd
//   XREF to: 004495dd (CONDITIONAL_JUMP)
// 004495ac: PUSH 0x1
// 004495ae: ADD EBX,0x57c
// 004495b4: PUSH EBX
// 004495b5: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004495ba: ADD ESP,0x8
// 004495bd: PUSH 0x1
// 004495bf: LEA EBX,[EAX + 0xfffffa84]
// 004495c5: PUSH EBX
// 004495c6: CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80
//   XREF to: 005edf80 (UNCONDITIONAL_CALL)
// 004495cb: ADD ESP,0x8
// 004495ce: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004495d2: MOV EBX,EAX
// 004495d4: TEST DL,0x2
// 004495d7: JNZ 0x004495f8
//   XREF to: 004495f8 (CONDITIONAL_JUMP)
// 004495d9: MOV EAX,EBX
// 004495db: POP EBX
// 004495dc: RET
// 004495dd: PUSH 0x65c4a0
//   Label: LAB_004495dd
//   XREF to: 0065c4a0 (DATA)
// 004495e2: PUSH EBX
// 004495e3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004495e8: ADD ESP,0x8
// 004495eb: PUSH EAX
// 004495ec: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004495f1: ADD ESP,0x4
// 004495f4: MOV EAX,EBX
// 004495f6: POP EBX
// 004495f7: RET
// 004495f8: PUSH EAX
//   Label: LAB_004495f8
// 004495f9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004495fe: ADD ESP,0x4
// 00449601: MOV EAX,EBX
// 00449603: POP EBX
// 00449604: RET
