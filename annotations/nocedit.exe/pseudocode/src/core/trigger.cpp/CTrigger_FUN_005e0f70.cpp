// Name: core_trigger.cpp_CTrigger_FUN_005e0f70
// Address: 005e0f70
// Address Range: [[005e0f70, 005e1172]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e0f70(CTrigger * this_ptr)
// Cross-references:
//   core_waypoint.cpp_CWayPoint_FUN_005ec4d0 (005ec4d0) at 005ec4da [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_On_event_00655854
//   TerminatedCString s_Off_event_0065585d
//   TerminatedCString s_Event_type_00655893
//   TerminatedCString s_What_triggers_me_0065596f
//   TerminatedCString s_Shape_0065598d
//   TerminatedCString s_Actor_name_00655993
//   TerminatedCString s_Actor_type_s_0065599e
//   TerminatedCString s_Actor_name_wildcard_006559ac
//   TerminatedCString s_Light_min_006559c0
//   TerminatedCString s_Light_max_006559ca
//   TerminatedCString s_Laser_type_006559d4
//   TerminatedCString s_Hitpoints_006559df
//   TerminatedCString s_Damage_actor_name_wildca_006559e9
//   TerminatedCString s_pressurePlate_00655a04
//   TerminatedCString s_Test_radius_00655a12
//   TerminatedCString s_Auto_aim_at_me_00655a1e
//   void* PTR_s_Momentary_00684364 = 00655867
//   void* PTR_s_Hero_triggers_me_00684384 = 0065589e
//   void* PTR_s_Box_006843d4 = 00655980
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e480
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0f70(CTrigger *this_ptr)

{
  int iVar1;
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 1) {
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 9) {
    pcStack0000000c = (char *)0x0;
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 2) {
    pcStack0000000c = (char *)0x0;
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 5) {
    pcStack0000000c = (char *)0x0;
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 7) {
    pcStack0000000c = (char *)0x0;
    core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  iVar1 = *(int *)(this_ptr->field1_0x158 + 0x1c);
  if (((iVar1 == 1) || (iVar1 == 0)) || (iVar1 == 9)) {
    pcStack0000000c = this_ptr->field1_0x158 + 0xc0;
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  }
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 4) {
    pcStack00000010 = this_ptr->field1_0x158 + 0x1a8;
    pcStack0000000c = "Auto aim at me";
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
    return;
  }
  return;
}


// Assembly code:
// 005e0f70: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005e0f70
// 005e0f71: PUSH ESI
// 005e0f72: PUSH EBP
// 005e0f73: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e0f77: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e0f7b: PUSH ESI
// 005e0f7c: PUSH EBX
// 005e0f7d: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005e0f82: ADD ESP,0x8
// 005e0f85: LEA EAX,[EBX + 0x224]
// 005e0f8b: PUSH EAX
// 005e0f8c: PUSH 0x655854
//   XREF to: 00655854 (DATA)
// 005e0f91: PUSH ESI
// 005e0f92: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 005e0f97: ADD ESP,0xc
// 005e0f9a: LEA EAX,[EBX + 0x288]
// 005e0fa0: PUSH EAX
// 005e0fa1: PUSH 0x65585d
//   XREF to: 0065585d (DATA)
// 005e0fa6: PUSH ESI
// 005e0fa7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 005e0fac: ADD ESP,0xc
// 005e0faf: LEA EAX,[EBX + 0x15c]
// 005e0fb5: PUSH EAX
// 005e0fb6: PUSH 0x684364
//   XREF to: 00684364 (DATA)
// 005e0fbb: PUSH 0x4
// 005e0fbd: PUSH 0x655893
//   XREF to: 00655893 (DATA)
// 005e0fc2: PUSH ESI
// 005e0fc3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005e0fc8: ADD ESP,0x14
// 005e0fcb: LEA EAX,[EBX + 0x174]
// 005e0fd1: PUSH EAX
// 005e0fd2: PUSH 0x684384
//   XREF to: 00684384 (DATA)
// 005e0fd7: PUSH 0xa
// 005e0fd9: PUSH 0x65596f
//   XREF to: 0065596f (DATA)
// 005e0fde: PUSH ESI
// 005e0fdf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005e0fe4: ADD ESP,0x14
// 005e0fe7: LEA EAX,[EBX + 0x170]
// 005e0fed: PUSH EAX
// 005e0fee: PUSH 0x6843d4
//   XREF to: 006843d4 (DATA)
// 005e0ff3: PUSH 0x2
// 005e0ff5: PUSH 0x65598d
//   XREF to: 0065598d (DATA)
// 005e0ffa: PUSH ESI
// 005e0ffb: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005e1000: MOV EDX,dword ptr [EBX + 0x174]
// 005e1006: ADD ESP,0x14
// 005e1009: CMP EDX,0x1
// 005e100c: JZ 0x005e1131
//   XREF to: 005e1131 (CONDITIONAL_JUMP)
// 005e1012: CMP dword ptr [EBX + 0x174],0x9
//   Label: LAB_005e1012
// 005e1019: JNZ 0x005e104d
//   XREF to: 005e104d (CONDITIONAL_JUMP)
// 005e101b: PUSH 0x0
// 005e101d: PUSH 0x50
// 005e101f: LEA EAX,[EBX + 0x1c8]
// 005e1025: PUSH EAX
// 005e1026: PUSH 0x65599e
//   XREF to: 0065599e (DATA)
// 005e102b: PUSH ESI
// 005e102c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 005e1031: ADD ESP,0x14
// 005e1034: PUSH 0x0
// 005e1036: PUSH 0x50
// 005e1038: LEA EAX,[EBX + 0x178]
// 005e103e: PUSH EAX
// 005e103f: PUSH 0x6559ac
//   XREF to: 006559ac (DATA)
// 005e1044: PUSH ESI
// 005e1045: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 005e104a: ADD ESP,0x14
// 005e104d: CMP dword ptr [EBX + 0x174],0x2
//   Label: LAB_005e104d
// 005e1054: JNZ 0x005e1092
//   XREF to: 005e1092 (CONDITIONAL_JUMP)
// 005e1056: PUSH 0x0
// 005e1058: PUSH 0x3f800000
// 005e105d: LEA EAX,[EBX + 0x21c]
// 005e1063: PUSH 0x0
// 005e1065: PUSH EAX
// 005e1066: PUSH 0x6559c0
//   XREF to: 006559c0 (DATA)
// 005e106b: PUSH ESI
// 005e106c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 005e1071: ADD ESP,0x18
// 005e1074: PUSH 0x0
// 005e1076: PUSH 0x3f800000
// 005e107b: LEA EAX,[EBX + 0x220]
// 005e1081: PUSH 0x0
// 005e1083: PUSH EAX
// 005e1084: PUSH 0x6559ca
//   XREF to: 006559ca (DATA)
// 005e1089: PUSH ESI
// 005e108a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 005e108f: ADD ESP,0x18
// 005e1092: CMP dword ptr [EBX + 0x174],0x5
//   Label: LAB_005e1092
// 005e1099: JNZ 0x005e10b2
//   XREF to: 005e10b2 (CONDITIONAL_JUMP)
// 005e109b: PUSH 0x0
// 005e109d: LEA EAX,[EBX + 0x2f4]
// 005e10a3: PUSH EAX
// 005e10a4: PUSH 0x6559d4
//   XREF to: 006559d4 (DATA)
// 005e10a9: PUSH ESI
// 005e10aa: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 005e10af: ADD ESP,0x10
// 005e10b2: CMP dword ptr [EBX + 0x174],0x7
//   Label: LAB_005e10b2
// 005e10b9: JNZ 0x005e10eb
//   XREF to: 005e10eb (CONDITIONAL_JUMP)
// 005e10bb: PUSH 0x0
// 005e10bd: LEA EAX,[EBX + 0x2f8]
// 005e10c3: PUSH EAX
// 005e10c4: PUSH 0x6559df
//   XREF to: 006559df (DATA)
// 005e10c9: PUSH ESI
// 005e10ca: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e10cf: ADD ESP,0x10
// 005e10d2: PUSH 0x0
// 005e10d4: PUSH 0x64
// 005e10d6: LEA EAX,[EBX + 0x304]
// 005e10dc: PUSH EAX
// 005e10dd: PUSH 0x6559e9
//   XREF to: 006559e9 (DATA)
// 005e10e2: PUSH ESI
// 005e10e3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 005e10e8: ADD ESP,0x14
// 005e10eb: MOV EDX,dword ptr [EBX + 0x174]
//   Label: LAB_005e10eb
// 005e10f1: CMP EDX,0x1
// 005e10f4: JNZ 0x005e114f
//   XREF to: 005e114f (CONDITIONAL_JUMP)
// 005e10f6: LEA EAX,[EBX + 0x218]
//   Label: LAB_005e10f6
// 005e10fc: PUSH EAX
// 005e10fd: PUSH 0x655a04
//   XREF to: 00655a04 (DATA)
// 005e1102: PUSH ESI
// 005e1103: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005e1108: ADD ESP,0xc
// 005e110b: PUSH 0x0
//   Label: LAB_005e110b
// 005e110d: LEA EAX,[EBX + 0x158]
// 005e1113: PUSH EAX
// 005e1114: PUSH 0x655a12
//   XREF to: 00655a12 (DATA)
// 005e1119: PUSH ESI
// 005e111a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e111f: MOV EBP,dword ptr [EBX + 0x174]
// 005e1125: ADD ESP,0x10
// 005e1128: CMP EBP,0x4
// 005e112b: JZ 0x005e115a
//   XREF to: 005e115a (CONDITIONAL_JUMP)
// 005e112d: POP EBP
// 005e112e: POP ESI
// 005e112f: POP EBX
// 005e1130: RET
// 005e1131: PUSH 0x0
//   Label: LAB_005e1131
// 005e1133: PUSH 0x50
// 005e1135: LEA EAX,[EBX + 0x178]
// 005e113b: PUSH EAX
// 005e113c: PUSH 0x655993
//   XREF to: 00655993 (DATA)
// 005e1141: PUSH ESI
// 005e1142: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 005e1147: ADD ESP,0x14
// 005e114a: JMP 0x005e1012
//   XREF to: 005e1012 (UNCONDITIONAL_JUMP)
// 005e114f: TEST EDX,EDX
//   Label: LAB_005e114f
// 005e1151: JZ 0x005e10f6
//   XREF to: 005e10f6 (CONDITIONAL_JUMP)
// 005e1153: CMP EDX,0x9
// 005e1156: JZ 0x005e10f6
//   XREF to: 005e10f6 (CONDITIONAL_JUMP)
// 005e1158: JMP 0x005e110b
//   XREF to: 005e110b (UNCONDITIONAL_JUMP)
// 005e115a: ADD EBX,0x300
//   Label: LAB_005e115a
// 005e1160: PUSH EBX
// 005e1161: PUSH 0x655a1e
//   XREF to: 00655a1e (DATA)
// 005e1166: PUSH ESI
// 005e1167: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005e116c: ADD ESP,0xc
// 005e116f: POP EBP
// 005e1170: POP ESI
// 005e1171: POP EBX
// 005e1172: RET
