// Name: core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
// Address: 0040b8f0
// Address Range: [[0040b8f0, 0040b967]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
// Cross-references:
//   core_ammo.cpp_CAmmo_serialize_FUN_00410f40 (00410f40) at 00410f5a [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 (00411900) at 0041191a [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_serialize_FUN_00411f50 (00411f50) at 00411f6a [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990 (00412990) at 004129aa [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_serialize_FUN_00414910 (00414910) at 0041498e [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_load_FUN_00418000 (00418000) at 0041801a [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060 (00422060) at 00422084 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_load_FUN_004254f0 (004254f0) at 00425579 [UNCONDITIONAL_CALL]
//   core_crate.cpp_CCrate_load_FUN_00448910 (00448910) at 0044892a [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_serialize_FUN_00480aa0 (00480aa0) at 00480abb [UNCONDITIONAL_CALL]
//   core_drip.cpp_CDrip_load_FUN_0048e170 (0048e170) at 0048e18e [UNCONDITIONAL_CALL]
//   core_emitter.cpp_CEmitter_load_FUN_004a8b30 (004a8b30) at 004a8c48 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be8a0 (004be8a0) at 004be8ba [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_CFlameCan_load_FUN_004cb620 (004cb620) at 004cb63a [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_load_FUN_004e5e20 (004e5e20) at 004e5e3c [UNCONDITIONAL_CALL]
//   core_grave.cpp_CGrave_load_FUN_004ee7f0 (004ee7f0) at 004ee80e [UNCONDITIONAL_CALL]
//   core_health.cpp_CHealthItem_serialize_FUN_004f1f20 (004f1f20) at 004f1f43 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_CKeyActor_serialize_FUN_00501880 (00501880) at 005018a3 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_CLadder_load_FUN_005029c0 (005029c0) at 005029da [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_load_FUN_0054a3b0 (0054a3b0) at 0054a3ca [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054dbe0 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005891b0 (005891b0) at 005891ca [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_load_FUN_005b87f0 (005b87f0) at 005b880a [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_serialize_FUN_005de9c0 (005de9c0) at 005de9da [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_serialize_FUN_005dec80 (005dec80) at 005dec9a [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0 (005e40c0) at 005e40fb [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_serialize_FUN_005e8720 (005e8720) at 005e8741 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80 (005e9a80) at 005e9a9a [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_serialize_FUN_005ee250 (005ee250) at 005ee273 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
          (CKeyFramedModelInstance *model_ptr,char *property_name)

{
  char cVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  char acStack_cc [196];
  
  pcVar3 = &stack0xffffff30;
  if (g_ActorReadingMode == 1) {
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&stack0xffffff30,property_name);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(model_ptr,acStack_cc);
    return;
  }
  pcVar2 = model_ptr->model_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)&stack0xffffff30,property_name);
  return;
}


// Assembly code:
// 0040b8f0: PUSH ESI
//   Label: core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
// 0040b8f1: PUSH EDI
// 0040b8f2: SUB ESP,0xc8
// 0040b8f8: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x4] (READ)
// 0040b8ff: MOV EDX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[0x8] (READ)
// 0040b906: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b90d: JNZ 0x0040b932
//   XREF to: 0040b932 (CONDITIONAL_JUMP)
// 0040b90f: PUSH EDX
// 0040b910: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0xd0] (DATA)
// 0040b914: PUSH ESI
// 0040b915: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0040b91a: ADD ESP,0x8
// 0040b91d: MOV ESI,ESP
// 0040b91f: PUSH ESI
// 0040b920: PUSH EDI
// 0040b921: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0040b926: ADD ESP,0x8
// 0040b929: ADD ESP,0xc8
// 0040b92f: POP EDI
// 0040b930: POP ESI
// 0040b931: RET
// 0040b932: LEA ESI,[EDI + 0x78]
//   Label: LAB_0040b932
// 0040b935: MOV EDI,ESP
// 0040b937: PUSH EDI
// 0040b938: MOV AL,byte ptr [ESI]
//   Label: LAB_0040b938
// 0040b93a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xd0] (DATA)
// 0040b93c: CMP AL,0x0
// 0040b93e: JZ 0x0040b950
//   XREF to: 0040b950 (CONDITIONAL_JUMP)
// 0040b940: MOV AL,byte ptr [ESI + 0x1]
// 0040b943: ADD ESI,0x2
// 0040b946: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xcf] (WRITE)
// 0040b949: ADD EDI,0x2
// 0040b94c: CMP AL,0x0
// 0040b94e: JNZ 0x0040b938
//   XREF to: 0040b938 (CONDITIONAL_JUMP)
// 0040b950: POP EDI
//   Label: LAB_0040b950
// 0040b951: PUSH EDX
// 0040b952: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0xd0] (DATA)
// 0040b956: PUSH ESI
// 0040b957: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0040b95c: ADD ESP,0x8
// 0040b95f: ADD ESP,0xc8
// 0040b965: POP EDI
// 0040b966: POP ESI
// 0040b967: RET
