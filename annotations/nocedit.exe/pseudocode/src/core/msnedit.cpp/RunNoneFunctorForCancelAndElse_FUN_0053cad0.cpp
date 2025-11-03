// Name: core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0
// Address: 0053cad0
// Address Range: [[0053cad0, 0053cc20]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0()
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f233 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_0063c89a
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_msnedit.cpp_FUN_0053cc30
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_RunNoneFunctorForCancelAndElse(undefined4 param_1,
   undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4
   param_6, undefined4 param_7, undefined4 param_8) */

bool core_msnedit_cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0(void)

{
  char *pcVar1;
  int iVar2;
  int index;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int config_param1;
  CDemonMission *in_stack_00000010;
  char *in_stack_00000018;
  int in_stack_00000020;
  CStrList_vtable *in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  char **in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  CStrList_vtable *in_stack_fffffc64;
  uint in_stack_fffffc68;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc48);
  iVar3 = -1;
  if (((in_stack_00000018 != (char *)0x0) &&
      (shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc4c,"(none)"),
      in_stack_00000020 != 0)) && (*(int *)in_stack_00000010->field0_0x0 == 0)) {
    iVar3 = 0;
  }
  core_msnedit_cpp_FUN_0053cc30();
  config_param1 = iVar3;
  if (((in_stack_00000020 != 0) && (iVar3 < 0)) &&
     ((*(int *)in_stack_00000010->field0_0x0 != 0 && (index = 0, 0 < (int)in_stack_fffffc54)))) {
    do {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)&stack0xfffffc54,index);
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1,(char *)in_stack_fffffc54);
      config_param1 = index;
      if (iVar2 == 0) break;
      index = index + 1;
      config_param1 = iVar3;
    } while (index < (int)in_stack_fffffc54);
  }
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc54,in_stack_00000018,config_param1,0);
  if (-1 < iVar3) {
    shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffc58,iVar3);
    pcVar1 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000010);
    *(char **)in_stack_00000010->field0_0x0 = pcVar1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc58,0,(uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,
             (uint)in_stack_fffffc60,(uint)in_stack_fffffc64,in_stack_fffffc68);
  return -1 < iVar3;
}


// Assembly code:
// 0053cad0: PUSH EBX
//   Label: core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0
// 0053cad1: PUSH ESI
// 0053cad2: PUSH EDI
// 0053cad3: PUSH EBP
// 0053cad4: SUB ESP,0x3a8
// 0053cada: MOV ESI,dword ptr [ESP + 0x3c8]
//   XREF to: Stack[0x10] (READ)
// 0053cae1: MOV EBX,dword ptr [ESP + 0x3d8]
//   XREF to: Stack[0x20] (READ)
// 0053cae8: MOV EAX,ESP
// 0053caea: PUSH EAX
// 0053caeb: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053caf0: ADD ESP,0x4
// 0053caf3: MOV EDX,dword ptr [ESP + 0x3cc]
//   XREF to: Stack[0x14] (READ)
// 0053cafa: MOV EDI,0xffffffff
// 0053caff: TEST EDX,EDX
// 0053cb01: JNZ 0x0053cba2
//   XREF to: 0053cba2 (CONDITIONAL_JUMP)
// 0053cb07: MOV EBP,dword ptr [ESP + 0x3d4]
//   Label: LAB_0053cb07
//   XREF to: Stack[0x1c] (READ)
// 0053cb0e: PUSH EBP
// 0053cb0f: MOV EAX,dword ptr [ESP + 0x3d4]
//   XREF to: Stack[0x18] (READ)
// 0053cb16: PUSH EAX
// 0053cb17: MOV EDX,dword ptr [ESP + 0x3c8]
//   XREF to: Stack[0x8] (READ)
// 0053cb1e: PUSH EDX
// 0053cb1f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cb23: PUSH EAX
// 0053cb24: MOV ECX,dword ptr [ESP + 0x3cc]
//   XREF to: Stack[0x4] (READ)
// 0053cb2b: PUSH ECX
// 0053cb2c: CALL core_msnedit.cpp_FUN_0053cc30
//   XREF to: 0053cc30 (UNCONDITIONAL_CALL)
// 0053cb31: ADD ESP,0x14
// 0053cb34: TEST EBX,EBX
// 0053cb36: JZ 0x0053cb40
//   XREF to: 0053cb40 (CONDITIONAL_JUMP)
// 0053cb38: TEST EDI,EDI
// 0053cb3a: JL 0x0053cbcc
//   XREF to: 0053cbcc (CONDITIONAL_JUMP)
// 0053cb40: PUSH 0x0
//   Label: LAB_0053cb40
// 0053cb42: PUSH EDI
// 0053cb43: MOV ECX,dword ptr [ESP + 0x3cc]
//   XREF to: Stack[0xc] (READ)
// 0053cb4a: PUSH ECX
// 0053cb4b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cb4f: PUSH EAX
// 0053cb50: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053cb55: ADD ESP,0x10
// 0053cb58: TEST EAX,EAX
// 0053cb5a: JL 0x0053cc14
//   XREF to: 0053cc14 (CONDITIONAL_JUMP)
// 0053cb60: PUSH EAX
// 0053cb61: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cb65: PUSH EAX
// 0053cb66: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053cb6b: ADD ESP,0x8
// 0053cb6e: PUSH EAX
// 0053cb6f: MOV EBX,dword ptr [ESP + 0x3c0]
//   XREF to: Stack[0x4] (READ)
// 0053cb76: PUSH EBX
// 0053cb77: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053cb7c: ADD ESP,0x8
// 0053cb7f: PUSH 0x0
// 0053cb81: MOV dword ptr [ESI],EAX
// 0053cb83: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cb87: PUSH EAX
// 0053cb88: MOV EBX,0x1
// 0053cb8d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   Label: LAB_0053cb8d
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053cb92: ADD ESP,0x8
// 0053cb95: MOV EAX,EBX
// 0053cb97: ADD ESP,0x3a8
// 0053cb9d: POP EBP
// 0053cb9e: POP EDI
// 0053cb9f: POP ESI
// 0053cba0: POP EBX
// 0053cba1: RET
// 0053cba2: PUSH 0x63c89a
//   Label: LAB_0053cba2
//   XREF to: 0063c89a (DATA)
// 0053cba7: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cbab: PUSH EAX
// 0053cbac: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053cbb1: ADD ESP,0x8
// 0053cbb4: TEST EBX,EBX
// 0053cbb6: JZ 0x0053cb07
//   XREF to: 0053cb07 (CONDITIONAL_JUMP)
// 0053cbbc: CMP dword ptr [ESI],0x0
// 0053cbbf: JNZ 0x0053cb07
//   XREF to: 0053cb07 (CONDITIONAL_JUMP)
// 0053cbc5: XOR EDI,EDI
// 0053cbc7: JMP 0x0053cb07
//   XREF to: 0053cb07 (UNCONDITIONAL_JUMP)
// 0053cbcc: CMP dword ptr [ESI],0x0
//   Label: LAB_0053cbcc
// 0053cbcf: JZ 0x0053cb40
//   XREF to: 0053cb40 (CONDITIONAL_JUMP)
// 0053cbd5: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cbd8: XOR EBX,EBX
// 0053cbda: TEST EBP,EBP
// 0053cbdc: JLE 0x0053cb40
//   XREF to: 0053cb40 (CONDITIONAL_JUMP)
// 0053cbe2: MOV EDX,dword ptr [ESI]
//   Label: LAB_0053cbe2
// 0053cbe4: PUSH EDX
// 0053cbe5: PUSH EBX
// 0053cbe6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cbea: PUSH EAX
// 0053cbeb: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053cbf0: ADD ESP,0x8
// 0053cbf3: PUSH EAX
// 0053cbf4: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053cbf9: ADD ESP,0x8
// 0053cbfc: TEST EAX,EAX
// 0053cbfe: JNZ 0x0053cc07
//   XREF to: 0053cc07 (CONDITIONAL_JUMP)
// 0053cc00: MOV EDI,EBX
// 0053cc02: JMP 0x0053cb40
//   XREF to: 0053cb40 (UNCONDITIONAL_JUMP)
// 0053cc07: MOV EAX,dword ptr [ESP]
//   Label: LAB_0053cc07
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cc0a: INC EBX
// 0053cc0b: CMP EBX,EAX
// 0053cc0d: JL 0x0053cbe2
//   XREF to: 0053cbe2 (CONDITIONAL_JUMP)
// 0053cc0f: JMP 0x0053cb40
//   XREF to: 0053cb40 (UNCONDITIONAL_JUMP)
// 0053cc14: XOR EBX,EBX
//   Label: LAB_0053cc14
// 0053cc16: PUSH EBX
// 0053cc17: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b8] (DATA)
// 0053cc1b: PUSH EAX
// 0053cc1c: JMP 0x0053cb8d
//   XREF to: 0053cb8d (UNCONDITIONAL_JUMP)
