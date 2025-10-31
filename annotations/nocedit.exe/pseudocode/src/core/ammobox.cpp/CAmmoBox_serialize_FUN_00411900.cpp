// Name: core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900
// Address: 00411900
// Address Range: [[00411900, 004119cd]]
// Convention: __cdecl
// Signature: void core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900(CAmmoBox * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00614c20
//   TerminatedCString s_weaponClassName_00614c2a
//   TerminatedCString s_ammoCount_00614c3a
//   TerminatedCString s_ammoType_00614c44
//   TerminatedCString s_item_00614c4d
//   TerminatedCString s_hasCollision_00614c52
//   TerminatedCString s_openSound_00614c5f
//   undefined4 g_CAmmoBoxClassVersion
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_serialize_FUN_00411900(CAmmoBox *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)this_ptr->model_name,"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->weapon_class_name,"weaponClassName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ammo_count,"ammoCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ammo_type,"ammoType");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->field5_0x31c,(char *)0x0);
  if (1 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870((CDemonActor *)&this_ptr->item,"item");
  }
  if (2 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->has_collision,"hasCollision");
  }
  if (g_CAmmoBoxClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->open_sound,"openSound");
  return;
}


// Assembly code:
// 00411900: PUSH EBX
//   Label: core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900
// 00411901: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00411905: PUSH EBX
// 00411906: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0041190b: ADD ESP,0x4
// 0041190e: PUSH 0x614c20
//   XREF to: 00614c20 (DATA)
// 00411913: LEA EAX,[EBX + 0x158]
// 00411919: PUSH EAX
// 0041191a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 0041191f: ADD ESP,0x8
// 00411922: PUSH 0x614c2a
//   XREF to: 00614c2a (DATA)
// 00411927: LEA EAX,[EBX + 0x2d4]
// 0041192d: PUSH EAX
// 0041192e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00411933: ADD ESP,0x8
// 00411936: PUSH 0x614c3a
//   XREF to: 00614c3a (DATA)
// 0041193b: LEA EAX,[EBX + 0x314]
// 00411941: PUSH EAX
// 00411942: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00411947: ADD ESP,0x8
// 0041194a: PUSH 0x614c44
//   XREF to: 00614c44 (DATA)
// 0041194f: LEA EAX,[EBX + 0x318]
// 00411955: PUSH EAX
// 00411956: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0041195b: ADD ESP,0x8
// 0041195e: PUSH 0x0
// 00411960: LEA EAX,[EBX + 0x31c]
// 00411966: PUSH EAX
// 00411967: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0041196c: MOV EDX,dword ptr [0x0066e3d4]
//   XREF to: 0066e3d4 (READ)
// 00411972: ADD ESP,0x8
// 00411975: CMP EDX,0x2
// 00411978: JGE 0x004119a2
//   XREF to: 004119a2 (CONDITIONAL_JUMP)
// 0041197a: CMP dword ptr [0x0066e3d4],0x3
//   Label: LAB_0041197a
//   XREF to: 0066e3d4 (READ)
// 00411981: JL 0x00411997
//   XREF to: 00411997 (CONDITIONAL_JUMP)
// 00411983: PUSH 0x614c52
//   XREF to: 00614c52 (DATA)
// 00411988: LEA EAX,[EBX + 0x324]
// 0041198e: PUSH EAX
// 0041198f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00411994: ADD ESP,0x8
// 00411997: CMP dword ptr [0x0066e3d4],0x4
//   Label: LAB_00411997
//   XREF to: 0066e3d4 (READ)
// 0041199e: JGE 0x004119b8
//   XREF to: 004119b8 (CONDITIONAL_JUMP)
// 004119a0: POP EBX
// 004119a1: RET
// 004119a2: PUSH 0x614c4d
//   Label: LAB_004119a2
//   XREF to: 00614c4d (DATA)
// 004119a7: LEA EAX,[EBX + 0x320]
// 004119ad: PUSH EAX
// 004119ae: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004119b3: ADD ESP,0x8
// 004119b6: JMP 0x0041197a
//   XREF to: 0041197a (UNCONDITIONAL_JUMP)
// 004119b8: PUSH 0x614c5f
//   Label: LAB_004119b8
//   XREF to: 00614c5f (DATA)
// 004119bd: ADD EBX,0x328
// 004119c3: PUSH EBX
// 004119c4: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004119c9: ADD ESP,0x8
// 004119cc: POP EBX
// 004119cd: RET
