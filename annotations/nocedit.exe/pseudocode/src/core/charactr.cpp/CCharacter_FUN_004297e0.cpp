// Name: core_charactr.cpp_CCharacter_FUN_004297e0
// Address: 004297e0
// Address Range: [[004297e0, 0042981b]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 0041558d [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416992 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 004187fa [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c416 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 004243ba [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044442d [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f274 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048edf1 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4b4f [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e677f [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f7039 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa011 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 005031c7 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525bc6 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 0056814a [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a305d [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c6fef [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005faf53 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_004297e0(CCharacter *this_ptr)

{
  int iVar1;
  
  if ((((this_ptr->base_actor).field11_0xdc == 0) &&
      ((this_ptr->base_actor).location.position.y == *(float *)(this_ptr->field2_0x240c + 8))) &&
     (*(int *)(this_ptr->field2_0x240c + 4) != 0)) {
    iVar1 = (*((this_ptr->base_actor).vtable)->isActiveTarget)(&this_ptr->base_actor);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 004297e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: Stack[0x4] (READ)
// 004297e4: CMP dword ptr [EDX + 0xdc],0x0
// 004297eb: JNZ 0x004297fb
//   XREF to: 004297fb (CONDITIONAL_JUMP)
// 004297ed: FLD float ptr [EDX + 0x24]
// 004297f0: FCOMP float ptr [EDX + 0x2414]
// 004297f6: FNSTSW AX
// 004297f8: SAHF
// 004297f9: JZ 0x00429801
//   XREF to: 00429801 (CONDITIONAL_JUMP)
// 004297fb: MOV EAX,0x1
//   Label: LAB_004297fb
// 00429800: RET
// 00429801: CMP dword ptr [EDX + 0x2410],0x0
//   Label: LAB_00429801
// 00429808: JZ 0x004297fb
//   XREF to: 004297fb (CONDITIONAL_JUMP)
// 0042980a: PUSH EDX
// 0042980b: MOV EAX,dword ptr [EDX + 0x154]
// 00429811: CALL dword ptr [EAX + 0x54]
// 00429814: ADD ESP,0x4
// 00429817: TEST EAX,EAX
// 00429819: JNZ 0x004297fb
//   XREF to: 004297fb (CONDITIONAL_JUMP)
// 0042981b: RET
