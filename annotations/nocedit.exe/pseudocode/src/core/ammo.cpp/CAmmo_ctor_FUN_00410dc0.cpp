// Name: core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
// Address: 00410dc0
// Address Range: [[00410dc0, 00410e40]]
// Convention: __cdecl
// Signature: CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_00410dc0(CAmmo * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_factoryFunc_FUN_00410d80 (00410d80) at 00410d9a [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 (00411700) at 0041175f [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd930 (004dd930) at 004dd955 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 (004fe900) at 004fe92e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_bullet_kfm_00614934
//   undefined1 DAT_0061493f
//   undefined1 DAT_00614940
//   undefined1 DAT_00614941
//   undefined1 DAT_00614942
//   CDemonActor_vtable g_CAmmoVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CAmmoVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"bullet.kfm");
  pcVar3 = &DAT_0061493f;
  pCVar4 = this_ptr_00 + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4->part_visibility_flags = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pCVar4->part_visibility_flags + 1) = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)((int)pCVar4->part_visibility_flags + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].part_visibility_flags[0x10] = 0x14;
  this_ptr_00[1].part_visibility_flags[0x11] = 0;
  return (CAmmo *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 00410dc0: PUSH EBX
//   Label: core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
// 00410dc1: PUSH ESI
// 00410dc2: PUSH EDI
// 00410dc3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00410dc7: PUSH EBX
// 00410dc8: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 00410dcd: ADD ESP,0x4
// 00410dd0: ADD EAX,0x158
// 00410dd5: PUSH EAX
// 00410dd6: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00410ddb: ADD ESP,0x4
// 00410dde: LEA EBX,[EAX + 0xfffffea8]
// 00410de4: PUSH 0x614934
//   XREF to: 00614934 (DATA)
// 00410de9: LEA EAX,[EBX + 0x158]
// 00410def: PUSH EAX
// 00410df0: MOV dword ptr [EBX + 0x154],0x6599a4
//   XREF to: 006599a4 (DATA)
// 00410dfa: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00410dff: ADD ESP,0x8
// 00410e02: MOV ESI,0x61493f
//   XREF to: 0061493f (DATA)
// 00410e07: LEA EDI,[EBX + 0x2d4]
// 00410e0d: PUSH EDI
// 00410e0e: MOV AL,byte ptr [ESI]
//   Label: LAB_00410e0e
//   XREF to: 0061493f (READ)
//   XREF to: 00614941 (READ)
// 00410e10: MOV byte ptr [EDI],AL
// 00410e12: CMP AL,0x0
// 00410e14: JZ 0x00410e26
//   XREF to: 00410e26 (CONDITIONAL_JUMP)
// 00410e16: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614940 (READ)
//   XREF to: 00614942 (READ)
// 00410e19: ADD ESI,0x2
// 00410e1c: MOV byte ptr [EDI + 0x1],AL
// 00410e1f: ADD EDI,0x2
// 00410e22: CMP AL,0x0
// 00410e24: JNZ 0x00410e0e
//   XREF to: 00410e0e (CONDITIONAL_JUMP)
// 00410e26: POP EDI
//   Label: LAB_00410e26
// 00410e27: MOV dword ptr [EBX + 0x314],0x14
// 00410e31: MOV EAX,EBX
// 00410e33: MOV dword ptr [EBX + 0x318],0x0
// 00410e3d: POP EDI
// 00410e3e: POP ESI
// 00410e3f: POP EBX
// 00410e40: RET
