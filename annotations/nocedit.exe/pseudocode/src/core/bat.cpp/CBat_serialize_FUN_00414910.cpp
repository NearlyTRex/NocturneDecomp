// Name: core_bat.cpp_CBat_serialize_FUN_00414910
// Address: 00414910
// Address Range: [[00414910, 004149fd]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_serialize_FUN_00414910(CBat * this_ptr)
// Globals:
//   TerminatedCString s_courseFilename_006152ef
//   TerminatedCString s_param_006152fe
//   TerminatedCString s_speed_00615304
//   TerminatedCString s_flapSpeedMult_0061530a
//   TerminatedCString s_courseSpeed_00615318
//   TerminatedCString s_modelName_00615324
//   TerminatedCString s_periodicSoundTimerMin_0061532e
//   TerminatedCString s_periodicSoundTimerMax_00615344
//   double DOUBLE_0061535e = 30
//   undefined4 g_CBatClassVersion
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_serialize_FUN_00414910(CBat *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->course_filename,"courseFilename");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->param,"param");
  if (g_CBatClassVersion < 3) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->speed,"speed");
    this_ptr->course_speed = this_ptr->speed * (float)DOUBLE_0061535e;
  }
  else {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->speed,"flapSpeedMult");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->course_speed,"courseSpeed");
  }
  if (1 < g_CBatClassVersion) {
    core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
              ((CKeyFramedModelInstance *)this_ptr->model_name,"modelName");
  }
  if (g_CBatClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->unused,(char *)0x0);
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&this_ptr->periodic_sound_timer_min,"periodicSoundTimerMin");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&this_ptr->periodic_sound_timer_max,"periodicSoundTimerMax");
  return;
}


// Assembly code:
// 00414910: PUSH EBX
//   Label: core_bat.cpp_CBat_serialize_FUN_00414910
// 00414911: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00414915: PUSH EBX
// 00414916: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0041491b: ADD ESP,0x4
// 0041491e: PUSH 0x6152ef
//   XREF to: 006152ef (DATA)
// 00414923: LEA EAX,[EBX + 0x158]
// 00414929: PUSH EAX
// 0041492a: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0041492f: ADD ESP,0x8
// 00414932: PUSH 0x6152fe
//   XREF to: 006152fe (DATA)
// 00414937: LEA EAX,[EBX + 0x304]
// 0041493d: PUSH EAX
// 0041493e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00414943: MOV EDX,dword ptr [0x0066e4b4]
//   XREF to: 0066e4b4 (READ)
// 00414949: ADD ESP,0x8
// 0041494c: LEA EAX,[EBX + 0x30c]
// 00414952: CMP EDX,0x3
// 00414955: JL 0x004149a1
//   XREF to: 004149a1 (CONDITIONAL_JUMP)
// 00414957: PUSH 0x61530a
//   XREF to: 0061530a (DATA)
// 0041495c: PUSH EAX
// 0041495d: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00414962: ADD ESP,0x8
// 00414965: PUSH 0x615318
//   XREF to: 00615318 (DATA)
// 0041496a: LEA EAX,[EBX + 0x308]
// 00414970: PUSH EAX
// 00414971: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00414976: ADD ESP,0x8
// 00414979: CMP dword ptr [0x0066e4b4],0x2
//   Label: LAB_00414979
//   XREF to: 0066e4b4 (READ)
// 00414980: JL 0x00414996
//   XREF to: 00414996 (CONDITIONAL_JUMP)
// 00414982: PUSH 0x615324
//   XREF to: 00615324 (DATA)
// 00414987: LEA EAX,[EBX + 0x188]
// 0041498d: PUSH EAX
// 0041498e: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 00414993: ADD ESP,0x8
// 00414996: CMP dword ptr [0x0066e4b4],0x4
//   Label: LAB_00414996
//   XREF to: 0066e4b4 (READ)
// 0041499d: JGE 0x004149c3
//   XREF to: 004149c3 (CONDITIONAL_JUMP)
// 0041499f: POP EBX
// 004149a0: RET
// 004149a1: PUSH 0x615304
//   Label: LAB_004149a1
//   XREF to: 00615304 (DATA)
// 004149a6: PUSH EAX
// 004149a7: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004149ac: FLD float ptr [EBX + 0x30c]
// 004149b2: FMUL double ptr [0x0061535e]
//   XREF to: 0061535e (READ)
// 004149b8: ADD ESP,0x8
// 004149bb: FSTP float ptr [EBX + 0x308]
// 004149c1: JMP 0x00414979
//   XREF to: 00414979 (UNCONDITIONAL_JUMP)
// 004149c3: PUSH 0x0
//   Label: LAB_004149c3
// 004149c5: LEA EAX,[EBX + 0x314]
// 004149cb: PUSH EAX
// 004149cc: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004149d1: ADD ESP,0x8
// 004149d4: PUSH 0x61532e
//   XREF to: 0061532e (DATA)
// 004149d9: LEA EAX,[EBX + 0x378]
// 004149df: PUSH EAX
// 004149e0: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004149e5: ADD ESP,0x8
// 004149e8: PUSH 0x615344
//   XREF to: 00615344 (DATA)
// 004149ed: ADD EBX,0x37c
// 004149f3: PUSH EBX
// 004149f4: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004149f9: ADD ESP,0x8
// 004149fc: POP EBX
// 004149fd: RET
