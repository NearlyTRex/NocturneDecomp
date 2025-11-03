// Name: core_vehicle.cpp_CVehicle_serialize_FUN_005e8720
// Address: 005e8720
// Address Range: [[005e8720, 005e88a0]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_serialize_FUN_005e8720(CVehicle * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00656efe
//   TerminatedCString s_tireCount_00656f08
//   TerminatedCString s_static_bpos_00656f12
//   TerminatedCString s_radius_00656f1e
//   TerminatedCString s_width_00656f25
//   TerminatedCString s_curTime_00656f2b
//   TerminatedCString s_totalTime_00656f33
//   TerminatedCString s_courseName_00656f3d
//   TerminatedCString s_lastMobsterLeft_00656f48
//   TerminatedCString s_lastMobsterRight_00656f58
//   int g_CVehicleClassVersion = 0x3
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_serialize_FUN_005e8720(CVehicle *this_ptr)

{
  CVector3f *vector_ptr;
  int iVar1;
  float *float_ptr;
  float *float_ptr_00;
  CKeyFramedModelInstance *model_ptr;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158),"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_0000000c + 0x938),"tireCount");
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000010 + 0x938)) {
    vector_ptr = (CVector3f *)(in_stack_00000010 + 0x93c);
    float_ptr_00 = (float *)(in_stack_00000010 + 0x94c);
    float_ptr = (float *)(in_stack_00000010 + 0x948);
    model_ptr = (CKeyFramedModelInstance *)(in_stack_00000010 + 0x950);
    do {
      core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(model_ptr,(char *)0x0);
      core_actor_cpp_serializeVector_FUN_0040b340(vector_ptr,"static_bpos");
      core_actor_cpp_serializeFloat_FUN_0040b770(float_ptr,"radius");
      core_actor_cpp_serializeFloat_FUN_0040b770(float_ptr_00,"width");
      model_ptr = (CKeyFramedModelInstance *)(model_ptr[1].part_visibility_flags + 0xe);
      iVar1 = iVar1 + 1;
      float_ptr = float_ptr + 0x6d;
      float_ptr_00 = float_ptr_00 + 0x6d;
    } while (iVar1 < *(int *)(in_stack_00000020 + 0x938));
  }
  if (g_CVehicleClassVersion < 2) {
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000020 + 0x102c),"curTime");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000018 + 0x1030),"totalTime");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_0000001c + 0x1034),"courseName");
    if (g_CVehicleClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000020 + 0x1070),"lastMobsterLeft");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000020 + 0x1070),"lastMobsterRight");
  return;
}


// Assembly code:
// 005e8720: PUSH EBX
//   Label: core_vehicle.cpp_CVehicle_serialize_FUN_005e8720
// 005e8721: PUSH EBP
// 005e8722: SUB ESP,0x8
// 005e8725: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e8729: PUSH EDX
// 005e872a: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005e872f: ADD ESP,0x4
// 005e8732: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e8736: PUSH 0x656efe
//   XREF to: 00656efe (DATA)
// 005e873b: ADD EAX,0x158
// 005e8740: PUSH EAX
// 005e8741: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005e8746: ADD ESP,0x8
// 005e8749: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e874d: PUSH 0x656f08
//   XREF to: 00656f08 (DATA)
// 005e8752: ADD EAX,0x938
// 005e8757: PUSH EAX
// 005e8758: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005e875d: ADD ESP,0x8
// 005e8760: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e8764: MOV ECX,dword ptr [EAX + 0x938]
// 005e876a: XOR EBX,EBX
// 005e876c: TEST ECX,ECX
// 005e876e: JLE 0x005e8809
//   XREF to: 005e8809 (CONDITIONAL_JUMP)
// 005e8774: PUSH EDI
// 005e8775: PUSH ESI
// 005e8776: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005e877a: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005e877e: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005e8782: ADD EAX,0x93c
// 005e8787: ADD ESI,0x94c
// 005e878d: ADD EBP,0x948
// 005e8793: ADD EDI,0x950
// 005e8799: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005e879d: IMUL EAX,EBX,0x1b4
//   Label: LAB_005e879d
// 005e87a3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 005e87a7: PUSH 0x0
// 005e87a9: ADD EDX,EAX
// 005e87ab: PUSH EDI
// 005e87ac: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 005e87b0: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005e87b5: ADD ESP,0x8
// 005e87b8: PUSH 0x656f12
//   XREF to: 00656f12 (DATA)
// 005e87bd: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 005e87c1: PUSH EAX
// 005e87c2: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 005e87c7: ADD ESP,0x8
// 005e87ca: PUSH 0x656f1e
//   XREF to: 00656f1e (DATA)
// 005e87cf: PUSH EBP
// 005e87d0: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e87d5: ADD ESP,0x8
// 005e87d8: PUSH 0x656f25
//   XREF to: 00656f25 (DATA)
// 005e87dd: PUSH ESI
// 005e87de: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e87e3: ADD ESP,0x8
// 005e87e6: ADD EDI,0x1b4
// 005e87ec: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005e87f0: INC EBX
// 005e87f1: ADD EBP,0x1b4
// 005e87f7: MOV EDX,dword ptr [EAX + 0x938]
// 005e87fd: ADD ESI,0x1b4
// 005e8803: CMP EBX,EDX
// 005e8805: JL 0x005e879d
//   XREF to: 005e879d (CONDITIONAL_JUMP)
// 005e8807: POP ESI
// 005e8808: POP EDI
// 005e8809: CMP dword ptr [0x0068447c],0x2
//   Label: LAB_005e8809
//   XREF to: 0068447c (READ)
// 005e8810: JGE 0x005e8821
//   XREF to: 005e8821 (CONDITIONAL_JUMP)
// 005e8812: CMP dword ptr [0x0068447c],0x3
//   XREF to: 0068447c (READ)
// 005e8819: JGE 0x005e8875
//   XREF to: 005e8875 (CONDITIONAL_JUMP)
// 005e881b: ADD ESP,0x8
// 005e881e: POP EBP
// 005e881f: POP EBX
// 005e8820: RET
// 005e8821: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005e8821
//   XREF to: Stack[0x4] (READ)
// 005e8825: PUSH 0x656f2b
//   XREF to: 00656f2b (DATA)
// 005e882a: ADD EAX,0x102c
// 005e882f: PUSH EAX
// 005e8830: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e8835: ADD ESP,0x8
// 005e8838: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e883c: PUSH 0x656f33
//   XREF to: 00656f33 (DATA)
// 005e8841: ADD EAX,0x1030
// 005e8846: PUSH EAX
// 005e8847: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005e884c: ADD ESP,0x8
// 005e884f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e8853: PUSH 0x656f3d
//   XREF to: 00656f3d (DATA)
// 005e8858: ADD EAX,0x1034
// 005e885d: PUSH EAX
// 005e885e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005e8863: ADD ESP,0x8
// 005e8866: CMP dword ptr [0x0068447c],0x3
//   XREF to: 0068447c (READ)
// 005e886d: JGE 0x005e8875
//   XREF to: 005e8875 (CONDITIONAL_JUMP)
// 005e886f: ADD ESP,0x8
// 005e8872: POP EBP
// 005e8873: POP EBX
// 005e8874: RET
// 005e8875: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_005e8875
//   XREF to: Stack[0x4] (READ)
// 005e8879: PUSH 0x656f48
//   XREF to: 00656f48 (DATA)
// 005e887e: ADD EBX,0x1070
// 005e8884: PUSH EBX
// 005e8885: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e888a: ADD ESP,0x8
// 005e888d: PUSH 0x656f58
//   XREF to: 00656f58 (DATA)
// 005e8892: PUSH EBX
// 005e8893: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 005e8898: ADD ESP,0x8
// 005e889b: ADD ESP,0x8
// 005e889e: POP EBP
// 005e889f: POP EBX
// 005e88a0: RET
