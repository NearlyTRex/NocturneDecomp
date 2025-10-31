// Name: core_weapon.cpp_CWeapon_dtor_FUN_005edf80
// Address: 005edf80
// Address Range: [[005edf80, 005edfee]]
// Convention: __cdecl
// Signature: CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
// Cross-references:
//   core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0 (004140b0) at 004140bf [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_004495a0 (004495a0) at 004495c6 [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_dtor_FUN_0049d120 (0049d120) at 0049d12f [UNCONDITIONAL_CALL]
//   core_elephant.cpp_dtor_FUN_004a7be0 (004a7be0) at 004a7bef [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbb00 (004cbb00) at 004cbb0f [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbc60 (004cbc60) at 004cbc6f [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0b50 (004f0b50) at 004f0b5f [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00506a50 (00506a50) at 00506a5f [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050edf0 (0050edf0) at 0050edff [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0 (00588ae0) at 00588aef [UNCONDITIONAL_CALL]
//   core_shovel.cpp_CShovel_dtor_FUN_00588c80 (00588c80) at 00588c8f [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0 (005de5d0) at 005de5df [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_dtor_FUN_005e3e00 (005e3e00) at 005e3e0f [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CWeaponVTable
//   WatcomTypeInfo g_CWeaponTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_box.cpp_CBox_dtor_FUN_0041dd00
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CWeapon * __cdecl
core_weapon_cpp_CWeapon_dtor_FUN_005edf80(CWeapon *this_ptr,uint d1,uint d2,uint d3)

{
  CBox *pCVar1;
  CWeapon *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CWeaponTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base_actor).metadata.vtable = &g_CWeaponVTable;
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)(this_ptr->field8_0x305 + 3));
  ptr = (CWeapon *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pCVar1[-2].scrape_points[4].raytrace_intersection,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005edf80: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_dtor_FUN_005edf80
// 005edf81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005edf85: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005edf8a: JNZ 0x005edfc7
//   XREF to: 005edfc7 (CONDITIONAL_JUMP)
// 005edf8c: PUSH 0x0
// 005edf8e: ADD EBX,0x308
// 005edf94: PUSH EBX
// 005edf95: MOV dword ptr [EBX + 0xfffffe4c],0x6655b4
//   XREF to: 006655b4 (DATA)
// 005edf9f: CALL core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: 0041dd00 (UNCONDITIONAL_CALL)
// 005edfa4: ADD ESP,0x8
// 005edfa7: PUSH 0x1
// 005edfa9: LEA EBX,[EAX + 0xfffffcf8]
// 005edfaf: PUSH EBX
// 005edfb0: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005edfb5: ADD ESP,0x8
// 005edfb8: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005edfbc: MOV EBX,EAX
// 005edfbe: TEST DL,0x2
// 005edfc1: JNZ 0x005edfe2
//   XREF to: 005edfe2 (CONDITIONAL_JUMP)
// 005edfc3: MOV EAX,EBX
// 005edfc5: POP EBX
// 005edfc6: RET
// 005edfc7: PUSH 0x6656c0
//   Label: LAB_005edfc7
//   XREF to: 006656c0 (DATA)
// 005edfcc: PUSH EBX
// 005edfcd: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005edfd2: ADD ESP,0x8
// 005edfd5: PUSH EAX
// 005edfd6: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005edfdb: ADD ESP,0x4
// 005edfde: MOV EAX,EBX
// 005edfe0: POP EBX
// 005edfe1: RET
// 005edfe2: PUSH EAX
//   Label: LAB_005edfe2
// 005edfe3: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005edfe8: ADD ESP,0x4
// 005edfeb: MOV EAX,EBX
// 005edfed: POP EBX
// 005edfee: RET
