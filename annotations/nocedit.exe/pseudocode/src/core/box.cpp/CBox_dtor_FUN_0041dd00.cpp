// Name: core_box.cpp_CBox_dtor_FUN_0041dd00
// Address: 0041dd00
// Address Range: [[0041dd00, 0041dd19]]
// Convention: __cdecl
// Signature: CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 (00419130) at 0041915c [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_dtor_FUN_00423670 (00423670) at 00423685 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_dtor_FUN_004235f0 (004235f0) at 00423615 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_dtor_FUN_004c9760 (004c9760) at 004c976a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_dtor_FUN_004c95c0 (004c95c0) at 004c95cc [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_dtor_FUN_005893e0 (005893e0) at 005893f5 [UNCONDITIONAL_CALL]
//   core_stone.cpp_CTempleStone_dtor_FUN_005bae10 (005bae10) at 005bae25 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80 (005edf80) at 005edf9f [UNCONDITIONAL_CALL]
// Function calls:
//   core_box.cpp_freeScrapes_FUN_00420220

#include "nocturne.h"

CBox * __cdecl core_box_cpp_CBox_dtor_FUN_0041dd00(CBox *this_ptr)

{
  int iVar1;
  
  iVar1 = core_box_cpp_freeScrapes_FUN_00420220((SScrape **)this_ptr->scrape_points);
  return (CBox *)(iVar1 + -0xb4);
}


// Assembly code:
// 0041dd00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: Stack[0x4] (READ)
// 0041dd04: PUSH 0x0
// 0041dd06: ADD EAX,0xb4
// 0041dd0b: PUSH EAX
// 0041dd0c: CALL core_box.cpp_freeScrapes_FUN_00420220
//   XREF to: 00420220 (UNCONDITIONAL_CALL)
// 0041dd11: ADD ESP,0x8
// 0041dd14: SUB EAX,0xb4
// 0041dd19: RET
