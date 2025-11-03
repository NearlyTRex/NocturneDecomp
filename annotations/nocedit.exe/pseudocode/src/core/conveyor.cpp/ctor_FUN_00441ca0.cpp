// Name: core_conveyor.cpp_ctor_FUN_00441ca0
// Address: 00441ca0
// Address Range: [[00441ca0, 00441d56]]
// Convention: __cdecl
// Signature: CConveyor * core_conveyor.cpp_ctor_FUN_00441ca0(CConveyor * this_ptr)
// Cross-references:
//   core_conveyor.cpp_FUN_00441c60 (00441c60) at 00441c7a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_00618e3a
//   undefined4 s_one_00618e3b
//   undefined4 s_ne_00618e3c
//   undefined4 s_e_00618e3d
//   TerminatedCString s_none_00618e3f
//   undefined4 s_one_00618e40
//   undefined4 s_ne_00618e41
//   undefined4 s_e_00618e42
//   CDemonActor_vtable PTR_core_conveyor.cpp_FUN_0065bf34
// Function calls:
//   core_platfrm.cpp_FUN_0054c850

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_ctor_FUN_00441ca0(CConveyor *this_ptr)

{
  char cVar1;
  CConveyor *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CConveyor *)core_platfrm_cpp_FUN_0054c850(&this_ptr->base_platform);
  (pCVar2->base_platform).base_actor.vtable = &PTR_core_conveyor_cpp_FUN_0065bf34;
  pcVar3 = "none";
  pCVar2->field1_0x72c[0] = '\0';
  pCVar2->field1_0x72c[1] = '\0';
  pCVar2->field1_0x72c[2] = -0x80;
  pCVar2->field1_0x72c[3] = '?';
  pCVar2->field1_0x72c[8] = '\0';
  pCVar2->field1_0x72c[9] = '\0';
  pCVar2->field1_0x72c[10] = -0x80;
  pCVar2->field1_0x72c[0xb] = '?';
  pCVar2->field1_0x72c[4] = -0x33;
  pCVar2->field1_0x72c[5] = -0x34;
  pCVar2->field1_0x72c[6] = -0x34;
  pCVar2->field1_0x72c[7] = '=';
  pcVar4 = pCVar2->field1_0x72c + 0x18;
  pCVar2->field1_0x72c[0xe0] = '\0';
  pCVar2->field1_0x72c[0xe1] = '\0';
  pCVar2->field1_0x72c[0xe2] = '\0';
  pCVar2->field1_0x72c[0xe3] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = pCVar2->field1_0x72c + 0x7c;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->field1_0x72c[0xc] = '\0';
  pCVar2->field1_0x72c[0xd] = '\0';
  pCVar2->field1_0x72c[0xe] = '\0';
  pCVar2->field1_0x72c[0xf] = '\0';
  pCVar2->field1_0x72c[0x10] = '\0';
  pCVar2->field1_0x72c[0x11] = '\0';
  pCVar2->field1_0x72c[0x12] = '\0';
  pCVar2->field1_0x72c[0x13] = '\0';
  pCVar2->field1_0x72c[0x14] = '\0';
  pCVar2->field1_0x72c[0x15] = '\0';
  pCVar2->field1_0x72c[0x16] = -0x80;
  pCVar2->field1_0x72c[0x17] = '?';
  pCVar2->field1_0x72c[0xe4] = '\0';
  return pCVar2;
}


// Assembly code:
// 00441ca0: PUSH ESI
//   Label: core_conveyor.cpp_ctor_FUN_00441ca0
// 00441ca1: PUSH EDI
// 00441ca2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00441ca6: PUSH EDX
// 00441ca7: CALL core_platfrm.cpp_FUN_0054c850
//   XREF to: 0054c850 (UNCONDITIONAL_CALL)
// 00441cac: MOV dword ptr [EAX + 0x154],0x65bf34
//   XREF to: 0065bf34 (DATA)
// 00441cb6: MOV ESI,0x618e3a
//   XREF to: 00618e3a (DATA)
// 00441cbb: MOV dword ptr [EAX + 0x72c],0x3f800000
// 00441cc5: MOV EDX,EAX
// 00441cc7: MOV dword ptr [EAX + 0x734],0x3f800000
// 00441cd1: ADD ESP,0x4
// 00441cd4: MOV dword ptr [EAX + 0x730],0x3dcccccd
// 00441cde: LEA EDI,[EAX + 0x744]
// 00441ce4: MOV dword ptr [EAX + 0x80c],0x0
// 00441cee: PUSH EDI
// 00441cef: MOV AL,byte ptr [ESI]
//   Label: LAB_00441cef
//   XREF to: 00618e3a (READ)
//   XREF to: 00618e3c (READ)
// 00441cf1: MOV byte ptr [EDI],AL
// 00441cf3: CMP AL,0x0
// 00441cf5: JZ 0x00441d07
//   XREF to: 00441d07 (CONDITIONAL_JUMP)
// 00441cf7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00618e3b (READ)
//   XREF to: 00618e3d (READ)
// 00441cfa: ADD ESI,0x2
// 00441cfd: MOV byte ptr [EDI + 0x1],AL
// 00441d00: ADD EDI,0x2
// 00441d03: CMP AL,0x0
// 00441d05: JNZ 0x00441cef
//   XREF to: 00441cef (CONDITIONAL_JUMP)
// 00441d07: POP EDI
//   Label: LAB_00441d07
// 00441d08: MOV ESI,0x618e3f
//   XREF to: 00618e3f (DATA)
// 00441d0d: LEA EDI,[EDX + 0x7a8]
// 00441d13: PUSH EDI
// 00441d14: MOV AL,byte ptr [ESI]
//   Label: LAB_00441d14
//   XREF to: 00618e3f (READ)
//   XREF to: 00618e41 (READ)
// 00441d16: MOV byte ptr [EDI],AL
// 00441d18: CMP AL,0x0
// 00441d1a: JZ 0x00441d2c
//   XREF to: 00441d2c (CONDITIONAL_JUMP)
// 00441d1c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00618e40 (READ)
//   XREF to: 00618e42 (READ)
// 00441d1f: ADD ESI,0x2
// 00441d22: MOV byte ptr [EDI + 0x1],AL
// 00441d25: ADD EDI,0x2
// 00441d28: CMP AL,0x0
// 00441d2a: JNZ 0x00441d14
//   XREF to: 00441d14 (CONDITIONAL_JUMP)
// 00441d2c: POP EDI
//   Label: LAB_00441d2c
// 00441d2d: MOV dword ptr [EDX + 0x738],0x0
// 00441d37: MOV dword ptr [EDX + 0x73c],0x0
// 00441d41: MOV dword ptr [EDX + 0x740],0x3f800000
// 00441d4b: MOV EAX,EDX
// 00441d4d: MOV byte ptr [EDX + 0x810],0x0
// 00441d54: POP EDI
// 00441d55: POP ESI
// 00441d56: RET
