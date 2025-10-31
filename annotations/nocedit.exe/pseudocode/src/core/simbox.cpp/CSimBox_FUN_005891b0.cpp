// Name: core_simbox.cpp_CSimBox_FUN_005891b0
// Address: 005891b0
// Address Range: [[005891b0, 00589258]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_FUN_005891b0(CSimBox * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00649c22
//   TerminatedCString s_weight_00649c2c
//   TerminatedCString s_initialVelocity_00649c33
//   TerminatedCString s_initRotVel_00649c43
//   TerminatedCString s_triggerEvent_00649c4e
//   TerminatedCString s_type_00649c5b
//   int g_CSimBoxClassVersion = 0x3
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_FUN_005891b0(CSimBox *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)this_ptr->field1_0x158,"modelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(this_ptr->field1_0x158 + 0x180),"weight");
  if (g_CSimBoxClassVersion < 2) {
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(this_ptr->field1_0x158 + 0x1e8),"initialVelocity");
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(this_ptr->field1_0x158 + 500),"initRotVel");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->field1_0x158 + 0x184),"triggerEvent");
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->field1_0x158 + 0x17c),"type");
  return;
}


// Assembly code:
// 005891b0: PUSH EBX
//   Label: core_simbox.cpp_CSimBox_FUN_005891b0
// 005891b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005891b5: PUSH EBX
// 005891b6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005891bb: ADD ESP,0x4
// 005891be: PUSH 0x649c22
//   XREF to: 00649c22 (DATA)
// 005891c3: LEA EAX,[EBX + 0x158]
// 005891c9: PUSH EAX
// 005891ca: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005891cf: ADD ESP,0x8
// 005891d2: PUSH 0x649c2c
//   XREF to: 00649c2c (DATA)
// 005891d7: LEA EAX,[EBX + 0x2d8]
// 005891dd: PUSH EAX
// 005891de: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005891e3: MOV EDX,dword ptr [0x0068183c]
//   XREF to: 0068183c (READ)
// 005891e9: ADD ESP,0x8
// 005891ec: CMP EDX,0x2
// 005891ef: JGE 0x005891fc
//   XREF to: 005891fc (CONDITIONAL_JUMP)
// 005891f1: CMP dword ptr [0x0068183c],0x3
//   XREF to: 0068183c (READ)
// 005891f8: JGE 0x00589243
//   XREF to: 00589243 (CONDITIONAL_JUMP)
// 005891fa: POP EBX
// 005891fb: RET
// 005891fc: PUSH 0x649c33
//   Label: LAB_005891fc
//   XREF to: 00649c33 (DATA)
// 00589201: LEA EAX,[EBX + 0x340]
// 00589207: PUSH EAX
// 00589208: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0058920d: ADD ESP,0x8
// 00589210: PUSH 0x649c43
//   XREF to: 00649c43 (DATA)
// 00589215: LEA EAX,[EBX + 0x34c]
// 0058921b: PUSH EAX
// 0058921c: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 00589221: ADD ESP,0x8
// 00589224: PUSH 0x649c4e
//   XREF to: 00649c4e (DATA)
// 00589229: LEA EAX,[EBX + 0x2dc]
// 0058922f: PUSH EAX
// 00589230: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00589235: ADD ESP,0x8
// 00589238: CMP dword ptr [0x0068183c],0x3
//   XREF to: 0068183c (READ)
// 0058923f: JGE 0x00589243
//   XREF to: 00589243 (CONDITIONAL_JUMP)
// 00589241: POP EBX
// 00589242: RET
// 00589243: PUSH 0x649c5b
//   Label: LAB_00589243
//   XREF to: 00649c5b (DATA)
// 00589248: ADD EBX,0x2d4
// 0058924e: PUSH EBX
// 0058924f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00589254: ADD ESP,0x8
// 00589257: POP EBX
// 00589258: RET
