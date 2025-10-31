// Name: core_event.cpp_FUN_004aa320
// Address: 004aa320
// Address Range: [[004aa320, 004aa3bc]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa320()
// Globals:
//   TerminatedCString s_anon_00624439
//   TerminatedCString s_anon_0062443b
//   TerminatedCString s_anon_0062443e
//   TerminatedCString s_anon_00624441
//   TerminatedCString s_anon_00624444
//   TerminatedCString s_anon_00624446
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

undefined4 core_event_cpp_FUN_004aa320(void)

{
  int iVar1;
  char *in_stack_00000004;
  
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"<");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"<=");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"==");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"!=");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,">");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,">=");
  if (iVar1 == 0) {
    return 4;
  }
  return 6;
}


// Assembly code:
// 004aa320: PUSH EBX
//   Label: core_event.cpp_FUN_004aa320
// 004aa321: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004aa325: PUSH 0x624439
//   XREF to: 00624439 (DATA)
// 004aa32a: PUSH EBX
// 004aa32b: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004aa330: ADD ESP,0x8
// 004aa333: TEST EAX,EAX
// 004aa335: JNZ 0x004aa339
//   XREF to: 004aa339 (CONDITIONAL_JUMP)
// 004aa337: POP EBX
// 004aa338: RET
// 004aa339: PUSH 0x62443b
//   Label: LAB_004aa339
//   XREF to: 0062443b (DATA)
// 004aa33e: PUSH EBX
// 004aa33f: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004aa344: ADD ESP,0x8
// 004aa347: TEST EAX,EAX
// 004aa349: JNZ 0x004aa352
//   XREF to: 004aa352 (CONDITIONAL_JUMP)
// 004aa34b: MOV EAX,0x1
// 004aa350: POP EBX
// 004aa351: RET
// 004aa352: PUSH 0x62443e
//   Label: LAB_004aa352
//   XREF to: 0062443e (DATA)
// 004aa357: PUSH EBX
// 004aa358: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004aa35d: ADD ESP,0x8
// 004aa360: TEST EAX,EAX
// 004aa362: JNZ 0x004aa36b
//   XREF to: 004aa36b (CONDITIONAL_JUMP)
// 004aa364: MOV EAX,0x2
// 004aa369: POP EBX
// 004aa36a: RET
// 004aa36b: PUSH 0x624441
//   Label: LAB_004aa36b
//   XREF to: 00624441 (DATA)
// 004aa370: PUSH EBX
// 004aa371: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004aa376: ADD ESP,0x8
// 004aa379: TEST EAX,EAX
// 004aa37b: JNZ 0x004aa384
//   XREF to: 004aa384 (CONDITIONAL_JUMP)
// 004aa37d: MOV EAX,0x3
// 004aa382: POP EBX
// 004aa383: RET
// 004aa384: PUSH 0x624444
//   Label: LAB_004aa384
//   XREF to: 00624444 (DATA)
// 004aa389: PUSH EBX
// 004aa38a: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004aa38f: ADD ESP,0x8
// 004aa392: TEST EAX,EAX
// 004aa394: JNZ 0x004aa39d
//   XREF to: 004aa39d (CONDITIONAL_JUMP)
// 004aa396: MOV EAX,0x5
// 004aa39b: POP EBX
// 004aa39c: RET
// 004aa39d: PUSH 0x624446
//   Label: LAB_004aa39d
//   XREF to: 00624446 (DATA)
// 004aa3a2: PUSH EBX
// 004aa3a3: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004aa3a8: ADD ESP,0x8
// 004aa3ab: TEST EAX,EAX
// 004aa3ad: JNZ 0x004aa3b6
//   XREF to: 004aa3b6 (CONDITIONAL_JUMP)
// 004aa3af: MOV EAX,0x4
// 004aa3b4: POP EBX
// 004aa3b5: RET
// 004aa3b6: MOV EAX,0x6
//   Label: LAB_004aa3b6
// 004aa3bb: POP EBX
// 004aa3bc: RET
