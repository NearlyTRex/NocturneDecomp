// Name: core_trigger.cpp_CTrigger_serialize_FUN_005e0690
// Address: 005e0690
// Address Range: [[005e0690, 005e0920]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_serialize_FUN_005e0690(CTrigger * this_ptr)
// Cross-references:
//   core_waypoint.cpp_CWayPoint_FUN_005ec280 (005ec280) at 005ec28c [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_triggerState_0065567c
//   TerminatedCString s_triggerSize_00655689
//   TerminatedCString s_triggerType_00655695
//   TerminatedCString s_onName_006556a1
//   TerminatedCString s_offName_006556a8
//   TerminatedCString s_whoTriggers_006556b0
//   TerminatedCString s_actorTriggerName_006556bc
//   TerminatedCString s_lightMin_006556cd
//   TerminatedCString s_lightMax_006556d6
//   TerminatedCString s_laserType_006556df
//   TerminatedCString s_actorTriggerTypes_006556e9
//   TerminatedCString s_hitPoints_006556fb
//   TerminatedCString s_pressurePlate_00655705
//   TerminatedCString s_whoTriggers_00655713
//   TerminatedCString s_actorTriggerName_0065571f
//   TerminatedCString s_actorTriggerTypes_00655730
//   TerminatedCString s_lightMin_00655742
//   TerminatedCString s_lightMax_0065574b
//   TerminatedCString s_laserType_00655754
//   TerminatedCString s_hitPoints_0065575e
//   TerminatedCString s_pressurePlate_00655768
//   TerminatedCString s_testRadius_00655776
//   TerminatedCString s_autoAimAtMe_00655781
//   TerminatedCString s_shape_0065578d
//   TerminatedCString s_damageActorWildcard_00655793
//   int g_CTriggerClassVersion = 0xb
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_trigger.cpp_FUN_005e0ba0

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_serialize_FUN_005e0690(CTrigger *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->field1_0x158 + 0x14),"?triggerState" + 1);
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(this_ptr->field1_0x158 + 8),"triggerSize");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->field1_0x158 + 4),"triggerType");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field1_0x158 + 0xcc),"onName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field1_0x158 + 0x130),"offName");
  if (g_CTriggerClassVersion < 7) {
    if (1 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->field1_0x158 + 0x1c),"whoTriggers");
      core_actor_cpp_serializeString_FUN_0040b5c0
                ((char **)(this_ptr->field1_0x158 + 0x20),"actorTriggerName");
    }
    if (2 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770
                ((float *)(this_ptr->field1_0x158 + 0xc4),"lightMin");
      core_actor_cpp_serializeFloat_FUN_0040b770
                ((float *)(this_ptr->field1_0x158 + 200),"lightMax");
    }
    if ((3 < g_CTriggerClassVersion) && (*(int *)(this_ptr->field1_0x158 + 0x1c) == 5)) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->field1_0x158 + 0x19c),"laserType");
    }
    if (4 < g_CTriggerClassVersion) {
      if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 1) {
        core_actor_cpp_serializeString_FUN_0040b5c0
                  ((char **)(this_ptr->field1_0x158 + 0x70),"actorTriggerTypes");
      }
      if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 7) {
        core_actor_cpp_serializeFloat_FUN_0040b770
                  ((float *)(this_ptr->field1_0x158 + 0x1a0),"hitPoints");
      }
    }
    if (5 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->field1_0x158 + 0xc0),"pressurePlate");
      return;
    }
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->field1_0x158 + 0x1c),"whoTriggers");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->field1_0x158 + 0x20),"actorTriggerName");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->field1_0x158 + 0x70),"actorTriggerTypes");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(this_ptr->field1_0x158 + 0xc4),"lightMin");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(this_ptr->field1_0x158 + 200),"lightMax");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->field1_0x158 + 0x19c),"laserType");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(this_ptr->field1_0x158 + 0x1a0),"hitPoints");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->field1_0x158 + 0xc0),"pressurePlate");
    if (g_CTriggerClassVersion < 8) {
      core_trigger_cpp_FUN_005e0ba0();
    }
    else {
      core_actor_cpp_serializeFloat_FUN_0040b770
                ((float *)this_ptr->field1_0x158,"testRadius");
    }
    if (8 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->field1_0x158 + 0x1a8),"autoAimAtMe");
    }
    if (9 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(this_ptr->field1_0x158 + 0x18),"shape");
    }
    if (10 < g_CTriggerClassVersion) {
      core_actor_cpp_serializeString_FUN_0040b5c0
                ((char **)(this_ptr->field1_0x158 + 0x1ac),"damageActorWildcard");
      return;
    }
  }
  return;
}


// Assembly code:
// 005e0690: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_serialize_FUN_005e0690
// 005e0691: PUSH ESI
// 005e0692: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e0696: PUSH EBX
// 005e0697: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005e069c: ADD ESP,0x4
// 005e069f: PUSH 0x65567c
//   XREF to: 0065567c (DATA)
// 005e06a4: LEA EAX,[EBX + 0x16c]
// 005e06aa: PUSH EAX
// 005e06ab: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e06b0: ADD ESP,0x8
// 005e06b3: PUSH 0x655689
//   XREF to: 00655689 (DATA)
// 005e06b8: LEA EAX,[EBX + 0x160]
// 005e06be: PUSH EAX
// 005e06bf: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 005e06c4: ADD ESP,0x8
// 005e06c7: PUSH 0x655695
//   XREF to: 00655695 (DATA)
// 005e06cc: LEA EAX,[EBX + 0x15c]
// 005e06d2: PUSH EAX
// 005e06d3: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e06d8: ADD ESP,0x8
// 005e06db: PUSH 0x6556a1
//   XREF to: 006556a1 (DATA)
// 005e06e0: LEA EAX,[EBX + 0x224]
// 005e06e6: PUSH EAX
// 005e06e7: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e06ec: ADD ESP,0x8
// 005e06ef: PUSH 0x6556a8
//   XREF to: 006556a8 (DATA)
// 005e06f4: LEA EAX,[EBX + 0x288]
// 005e06fa: PUSH EAX
// 005e06fb: LEA ESI,[EBX + 0x178]
// 005e0701: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e0706: MOV EDX,dword ptr [0x006843e4]
//   XREF to: 006843e4 (READ)
// 005e070c: ADD ESP,0x8
// 005e070f: LEA EAX,[EBX + 0x174]
// 005e0715: CMP EDX,0x7
// 005e0718: JGE 0x005e0805
//   XREF to: 005e0805 (CONDITIONAL_JUMP)
// 005e071e: CMP EDX,0x2
// 005e0721: JGE 0x005e07cd
//   XREF to: 005e07cd (CONDITIONAL_JUMP)
// 005e0727: CMP dword ptr [0x006843e4],0x3
//   Label: LAB_005e0727
//   XREF to: 006843e4 (READ)
// 005e072e: JL 0x005e0758
//   XREF to: 005e0758 (CONDITIONAL_JUMP)
// 005e0730: PUSH 0x6556cd
//   XREF to: 006556cd (DATA)
// 005e0735: LEA EAX,[EBX + 0x21c]
// 005e073b: PUSH EAX
// 005e073c: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e0741: ADD ESP,0x8
// 005e0744: PUSH 0x6556d6
//   XREF to: 006556d6 (DATA)
// 005e0749: LEA EAX,[EBX + 0x220]
// 005e074f: PUSH EAX
// 005e0750: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e0755: ADD ESP,0x8
// 005e0758: CMP dword ptr [0x006843e4],0x4
//   Label: LAB_005e0758
//   XREF to: 006843e4 (READ)
// 005e075f: JL 0x005e077e
//   XREF to: 005e077e (CONDITIONAL_JUMP)
// 005e0761: CMP dword ptr [EBX + 0x174],0x5
// 005e0768: JNZ 0x005e077e
//   XREF to: 005e077e (CONDITIONAL_JUMP)
// 005e076a: PUSH 0x6556df
//   XREF to: 006556df (DATA)
// 005e076f: LEA EAX,[EBX + 0x2f4]
// 005e0775: PUSH EAX
// 005e0776: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e077b: ADD ESP,0x8
// 005e077e: CMP dword ptr [0x006843e4],0x5
//   Label: LAB_005e077e
//   XREF to: 006843e4 (READ)
// 005e0785: JL 0x005e07c1
//   XREF to: 005e07c1 (CONDITIONAL_JUMP)
// 005e0787: CMP dword ptr [EBX + 0x174],0x1
// 005e078e: JNZ 0x005e07a4
//   XREF to: 005e07a4 (CONDITIONAL_JUMP)
// 005e0790: PUSH 0x6556e9
//   XREF to: 006556e9 (DATA)
// 005e0795: LEA EAX,[EBX + 0x1c8]
// 005e079b: PUSH EAX
// 005e079c: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e07a1: ADD ESP,0x8
// 005e07a4: CMP dword ptr [EBX + 0x174],0x7
//   Label: LAB_005e07a4
// 005e07ab: JNZ 0x005e07c1
//   XREF to: 005e07c1 (CONDITIONAL_JUMP)
// 005e07ad: PUSH 0x6556fb
//   XREF to: 006556fb (DATA)
// 005e07b2: LEA EAX,[EBX + 0x2f8]
// 005e07b8: PUSH EAX
// 005e07b9: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e07be: ADD ESP,0x8
// 005e07c1: CMP dword ptr [0x006843e4],0x6
//   Label: LAB_005e07c1
//   XREF to: 006843e4 (READ)
// 005e07c8: JGE 0x005e07ee
//   XREF to: 005e07ee (CONDITIONAL_JUMP)
// 005e07ca: POP ESI
//   Label: LAB_005e07ca
// 005e07cb: POP EBX
// 005e07cc: RET
// 005e07cd: PUSH 0x6556b0
//   Label: LAB_005e07cd
//   XREF to: 006556b0 (DATA)
// 005e07d2: PUSH EAX
// 005e07d3: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e07d8: ADD ESP,0x8
// 005e07db: PUSH 0x6556bc
//   XREF to: 006556bc (DATA)
// 005e07e0: PUSH ESI
// 005e07e1: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e07e6: ADD ESP,0x8
// 005e07e9: JMP 0x005e0727
//   XREF to: 005e0727 (UNCONDITIONAL_JUMP)
// 005e07ee: PUSH 0x655705
//   Label: LAB_005e07ee
//   XREF to: 00655705 (DATA)
// 005e07f3: ADD EBX,0x218
// 005e07f9: PUSH EBX
// 005e07fa: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e07ff: ADD ESP,0x8
// 005e0802: POP ESI
// 005e0803: POP EBX
// 005e0804: RET
// 005e0805: PUSH 0x655713
//   Label: LAB_005e0805
//   XREF to: 00655713 (DATA)
// 005e080a: PUSH EAX
// 005e080b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e0810: ADD ESP,0x8
// 005e0813: PUSH 0x65571f
//   XREF to: 0065571f (DATA)
// 005e0818: PUSH ESI
// 005e0819: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e081e: ADD ESP,0x8
// 005e0821: PUSH 0x655730
//   XREF to: 00655730 (DATA)
// 005e0826: LEA EAX,[EBX + 0x1c8]
// 005e082c: PUSH EAX
// 005e082d: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e0832: ADD ESP,0x8
// 005e0835: PUSH 0x655742
//   XREF to: 00655742 (DATA)
// 005e083a: LEA EAX,[EBX + 0x21c]
// 005e0840: PUSH EAX
// 005e0841: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e0846: ADD ESP,0x8
// 005e0849: PUSH 0x65574b
//   XREF to: 0065574b (DATA)
// 005e084e: LEA EAX,[EBX + 0x220]
// 005e0854: PUSH EAX
// 005e0855: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e085a: ADD ESP,0x8
// 005e085d: PUSH 0x655754
//   XREF to: 00655754 (DATA)
// 005e0862: LEA EAX,[EBX + 0x2f4]
// 005e0868: PUSH EAX
// 005e0869: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e086e: ADD ESP,0x8
// 005e0871: PUSH 0x65575e
//   XREF to: 0065575e (DATA)
// 005e0876: LEA EAX,[EBX + 0x2f8]
// 005e087c: PUSH EAX
// 005e087d: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e0882: ADD ESP,0x8
// 005e0885: PUSH 0x655768
//   XREF to: 00655768 (DATA)
// 005e088a: LEA EAX,[EBX + 0x218]
// 005e0890: PUSH EAX
// 005e0891: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e0896: MOV ECX,dword ptr [0x006843e4]
//   XREF to: 006843e4 (READ)
// 005e089c: ADD ESP,0x8
// 005e089f: CMP ECX,0x8
// 005e08a2: JL 0x005e0916
//   XREF to: 005e0916 (CONDITIONAL_JUMP)
// 005e08a4: PUSH 0x655776
//   XREF to: 00655776 (DATA)
// 005e08a9: LEA EAX,[EBX + 0x158]
// 005e08af: PUSH EAX
// 005e08b0: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e08b5: ADD ESP,0x8
// 005e08b8: CMP dword ptr [0x006843e4],0x9
//   Label: LAB_005e08b8
//   XREF to: 006843e4 (READ)
// 005e08bf: JL 0x005e08d5
//   XREF to: 005e08d5 (CONDITIONAL_JUMP)
// 005e08c1: PUSH 0x655781
//   XREF to: 00655781 (DATA)
// 005e08c6: LEA EAX,[EBX + 0x300]
// 005e08cc: PUSH EAX
// 005e08cd: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e08d2: ADD ESP,0x8
// 005e08d5: CMP dword ptr [0x006843e4],0xa
//   Label: LAB_005e08d5
//   XREF to: 006843e4 (READ)
// 005e08dc: JL 0x005e08f2
//   XREF to: 005e08f2 (CONDITIONAL_JUMP)
// 005e08de: PUSH 0x65578d
//   XREF to: 0065578d (DATA)
// 005e08e3: LEA EAX,[EBX + 0x170]
// 005e08e9: PUSH EAX
// 005e08ea: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e08ef: ADD ESP,0x8
// 005e08f2: CMP dword ptr [0x006843e4],0xb
//   Label: LAB_005e08f2
//   XREF to: 006843e4 (READ)
// 005e08f9: JL 0x005e07ca
//   XREF to: 005e07ca (CONDITIONAL_JUMP)
// 005e08ff: PUSH 0x655793
//   XREF to: 00655793 (DATA)
// 005e0904: ADD EBX,0x304
// 005e090a: PUSH EBX
// 005e090b: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e0910: ADD ESP,0x8
// 005e0913: POP ESI
// 005e0914: POP EBX
// 005e0915: RET
// 005e0916: PUSH EBX
//   Label: LAB_005e0916
// 005e0917: CALL core_trigger.cpp_FUN_005e0ba0
//   XREF to: 005e0ba0 (UNCONDITIONAL_CALL)
// 005e091c: ADD ESP,0x4
// 005e091f: JMP 0x005e08b8
//   XREF to: 005e08b8 (UNCONDITIONAL_JUMP)
