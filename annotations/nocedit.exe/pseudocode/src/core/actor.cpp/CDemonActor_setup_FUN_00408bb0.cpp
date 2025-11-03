// Name: core_actor.cpp_CDemonActor_setup_FUN_00408bb0
// Address: 00408bb0
// Address Range: [[00408bb0, 00408c01]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_setup_FUN_00410e50 (00410e50) at 00410e67 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00411d70 (00411d70) at 00411d75 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414210 (00414210) at 00414216 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_004148a0 (004148a0) at 004148ce [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00417ef0 (00417ef0) at 00417ef6 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419810 (00419810) at 00419818 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421830 (00421830) at 0042183a [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_0042fd20 (0042fd20) at 0042fd2c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428140 (00428140) at 0042814c [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448530 (00448530) at 00448539 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_00449810 (00449810) at 00449820 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046f970 (0046f970) at 0046f976 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_setup_FUN_0047fc70 (0047fc70) at 0047fc86 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a7e00 (004a7e00) at 004a7e06 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be720 (004be720) at 004be729 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9b90 (004c9b90) at 004c9ba0 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb200 (004cb200) at 004cb20e [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbe20 (004cbe20) at 004cbe27 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d17b0 (004d17b0) at 004d17b8 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5d50 (004e5d50) at 004e5d55 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_setup_FUN_004e9180 (004e9180) at 004e9193 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee5a0 (004ee5a0) at 004ee5b7 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1e30 (004f1e30) at 004f1e47 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005016f0 (005016f0) at 00501707 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_005025f0 (005025f0) at 005025f5 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_005048a0 (005048a0) at 005048b9 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506bb0 (00506bb0) at 00506bb5 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00508a70 (00508a70) at 00508a8c [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b160 (0050b160) at 0050b165 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050bd60 (0050bd60) at 0050bd66 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_005494a0 (005494a0) at 005494b8 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_LoadCourseSomething_FUN_0054ca20 (0054ca20) at 0054ca28 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00588e00 (00588e00) at 00588e19 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8360 (005b8360) at 005b8378 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9be0 (005b9be0) at 005b9be5 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005de6e0 (005de6e0) at 005de6e6 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005debc0 (005debc0) at 005debc9 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005df990 (005df990) at 005df996 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e7b90 (005e7b90) at 005e7b9c [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e8fc0 (005e8fc0) at 005e8fc9 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005ea9f0 (005ea9f0) at 005eaa00 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005edff0 (005edff0) at 005edff6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_0061363c
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor *this_ptr)

{
  CPathMap *this_ptr_00;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x23f);
  this_ptr->field19_0x114 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr);
  this_ptr_00 = (*this_ptr->vtable->getPathMap)(this_ptr);
  if (this_ptr_00 == (CPathMap *)0x0) {
    return;
  }
  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(this_ptr_00,&(this_ptr->location).position,1);
  return;
}


// Assembly code:
// 00408bb0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_setup_FUN_00408bb0
// 00408bb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00408bb5: PUSH 0x23f
// 00408bba: PUSH 0x61363c
//   XREF to: 0061363c (DATA)
// 00408bbf: PUSH EBX
// 00408bc0: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408bc5: ADD ESP,0xc
// 00408bc8: PUSH EBX
// 00408bc9: MOV dword ptr [EBX + 0x114],0x0
// 00408bd3: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00408bd8: ADD ESP,0x4
// 00408bdb: MOV EAX,dword ptr [EBX + 0x154]
// 00408be1: PUSH EBX
// 00408be2: CALL dword ptr [EAX + 0xbc]
// 00408be8: ADD ESP,0x4
// 00408beb: TEST EAX,EAX
// 00408bed: JNZ 0x00408bf1
//   XREF to: 00408bf1 (CONDITIONAL_JUMP)
// 00408bef: POP EBX
// 00408bf0: RET
// 00408bf1: PUSH 0x1
//   Label: LAB_00408bf1
// 00408bf3: ADD EBX,0x20
// 00408bf6: PUSH EBX
// 00408bf7: PUSH EAX
// 00408bf8: CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
//   XREF to: 00546a60 (UNCONDITIONAL_CALL)
// 00408bfd: ADD ESP,0xc
// 00408c00: POP EBX
// 00408c01: RET
