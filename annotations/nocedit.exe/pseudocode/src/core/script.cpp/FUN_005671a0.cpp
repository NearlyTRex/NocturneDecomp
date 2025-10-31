// Name: core_script.cpp_FUN_005671a0
// Address: 005671a0
// Address Range: [[005671a0, 0056730b]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005671a0()
// Cross-references:
//   core_msnedit.cpp_FUN_0053ea30 (0053ea30) at 0053eb0a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00564090 (00564090) at 00564156 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_00644047
//   TerminatedCString s_true_0064404c
//   TerminatedCString s_false_00644051
// Function calls:
//   core_script.cpp_CScript_ParseCounterUsed_FUN_00567490
//   core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   core_script.cpp_FUN_00567310
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005671a0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_FUN_005671a0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int index;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  byte bVar7;
  char *in_stack_00000004;
  CStrList_vtable *in_stack_0000000c;
  CStrList *in_stack_fffffed8;
  char *in_stack_fffffedc;
  char **in_stack_fffffee4;
  char *in_stack_fffffeec;
  char acStack_10c [236];
  CStrList local_20;
  
  bVar7 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  core_script_cpp_FUN_00567310();
  index = 0;
  puVar6 = (undefined4 *)&stack0xfffffed0;
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = in_stack_0000000c->dtor;
    in_stack_0000000c = (CStrList_vtable *)((int)in_stack_0000000c + (uint)bVar7 * -8 + 4);
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  do {
    iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&local_20.data_array);
    if (iVar3 <= index) {
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)&local_20.vtable,0,(uint)in_stack_fffffed8);
      return;
    }
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&local_20.vtable,index);
    in_stack_fffffed8 = (CStrList *)&stack0xfffffedc;
    pcVar5 = pcVar2;
    do {
      pcVar4 = pcVar5;
      if (*pcVar5 == '(') goto LAB_00567250;
      if (*pcVar5 == '\0') break;
      pcVar4 = pcVar5 + 1;
      if (*pcVar4 == '(') goto LAB_00567250;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar4 != '\0');
    pcVar4 = (char *)0x0;
LAB_00567250:
    if (pcVar4 == (char *)0x0) {
      in_stack_fffffed8 =
           (CStrList *)
           shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffff0,index);
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0((char *)in_stack_fffffed8,in_stack_fffffedc);
      if (iVar3 != 0) {
        in_stack_fffffed8 = (CStrList *)&stack0xfffffff8;
        pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_fffffed8,index);
        in_stack_fffffedc = (char *)0x5672a9;
        iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,(char *)in_stack_fffffee4);
        if (iVar3 != 0) {
          in_stack_fffffedc = (char *)0x5672c3;
          pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             ((CStrList *)&stack0x00000000,index);
          in_stack_fffffee4 = (char **)0x5672cc;
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,in_stack_fffffeec);
          pcVar5 = acStack_10c;
          if (iVar3 != 0) {
            do {
              cVar1 = *pcVar2;
              *pcVar5 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar5[1] = cVar1;
              pcVar5 = pcVar5 + 2;
            } while (cVar1 != '\0');
            in_stack_fffffeec = in_stack_00000004;
            core_script_cpp_CScript_ReallocSomething_FUN_00567510();
          }
        }
      }
    }
    else {
      core_script_cpp_CScript_ParseCounterUsed_FUN_00567490();
    }
    index = index + 1;
  } while( true );
}


// Assembly code:
// 005671a0: PUSH EBX
//   Label: core_script.cpp_FUN_005671a0
// 005671a1: PUSH ESI
// 005671a2: PUSH EDI
// 005671a3: PUSH EBP
// 005671a4: SUB ESP,0x124
// 005671aa: MOV EBP,dword ptr [ESP + 0x138]
//   XREF to: Stack[0x4] (READ)
// 005671b1: MOV ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[0xc] (READ)
// 005671b8: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x20] (DATA)
// 005671bf: PUSH EAX
// 005671c0: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 005671c5: ADD ESP,0x4
// 005671c8: PUSH 0x0
// 005671ca: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x20] (DATA)
// 005671d1: PUSH EAX
// 005671d2: MOV EDX,dword ptr [ESP + 0x144]
//   XREF to: Stack[0x8] (READ)
// 005671d9: PUSH EDX
// 005671da: PUSH EBP
// 005671db: LEA EDI,[ESP + 0x10]
//   XREF to: Stack[-0x134] (DATA)
// 005671df: CALL core_script.cpp_FUN_00567310
//   XREF to: 00567310 (UNCONDITIONAL_CALL)
// 005671e4: MOV ECX,0x45
// 005671e9: ADD ESP,0x10
// 005671ec: XOR EBX,EBX
// 005671ee: MOVSD.REP ES:EDI,ESI
// 005671f0: LEA EAX,[ESP + 0x114]
//   Label: LAB_005671f0
//   XREF to: Stack[-0x20] (DATA)
// 005671f7: PUSH EAX
// 005671f8: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 005671fd: ADD ESP,0x4
// 00567200: CMP EBX,EAX
// 00567202: JL 0x00567221
//   XREF to: 00567221 (CONDITIONAL_JUMP)
// 00567204: PUSH 0x0
// 00567206: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x20] (DATA)
// 0056720d: PUSH EAX
// 0056720e: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 00567213: ADD ESP,0x8
// 00567216: ADD ESP,0x124
// 0056721c: POP EBP
// 0056721d: POP EDI
// 0056721e: POP ESI
// 0056721f: POP EBX
// 00567220: RET
// 00567221: PUSH EBX
//   Label: LAB_00567221
// 00567222: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x20] (DATA)
// 00567229: PUSH EAX
// 0056722a: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0056722f: MOV DL,0x28
// 00567231: ADD ESP,0x8
// 00567234: MOV ESI,EAX
// 00567236: MOV EDI,EAX
// 00567238: MOV AL,byte ptr [ESI]
//   Label: LAB_00567238
// 0056723a: CMP AL,DL
// 0056723c: JZ 0x00567250
//   XREF to: 00567250 (CONDITIONAL_JUMP)
// 0056723e: CMP AL,0x0
// 00567240: JZ 0x0056724e
//   XREF to: 0056724e (CONDITIONAL_JUMP)
// 00567242: INC ESI
// 00567243: MOV AL,byte ptr [ESI]
// 00567245: CMP AL,DL
// 00567247: JZ 0x00567250
//   XREF to: 00567250 (CONDITIONAL_JUMP)
// 00567249: INC ESI
// 0056724a: CMP AL,0x0
// 0056724c: JNZ 0x00567238
//   XREF to: 00567238 (CONDITIONAL_JUMP)
// 0056724e: SUB ESI,ESI
//   Label: LAB_0056724e
// 00567250: TEST ESI,ESI
//   Label: LAB_00567250
// 00567252: JZ 0x00567266
//   XREF to: 00567266 (CONDITIONAL_JUMP)
// 00567254: MOV EAX,ESP
// 00567256: PUSH EAX
// 00567257: PUSH EDI
// 00567258: PUSH EBP
// 00567259: CALL core_script.cpp_CScript_ParseCounterUsed_FUN_00567490
//   XREF to: 00567490 (UNCONDITIONAL_CALL)
// 0056725e: ADD ESP,0xc
// 00567261: JMP 0x00567306
//   XREF to: 00567306 (UNCONDITIONAL_JUMP)
// 00567266: PUSH 0x644047
//   Label: LAB_00567266
//   XREF to: 00644047 (DATA)
// 0056726b: PUSH EBX
// 0056726c: LEA EAX,[ESP + 0x11c]
//   XREF to: Stack[-0x20] (DATA)
// 00567273: PUSH EAX
// 00567274: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00567279: ADD ESP,0x8
// 0056727c: PUSH EAX
// 0056727d: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00567282: ADD ESP,0x8
// 00567285: TEST EAX,EAX
// 00567287: JZ 0x00567306
//   XREF to: 00567306 (CONDITIONAL_JUMP)
// 0056728d: PUSH 0x64404c
//   XREF to: 0064404c (DATA)
// 00567292: PUSH EBX
// 00567293: LEA EAX,[ESP + 0x11c]
//   XREF to: Stack[-0x20] (DATA)
// 0056729a: PUSH EAX
// 0056729b: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005672a0: ADD ESP,0x8
// 005672a3: PUSH EAX
// 005672a4: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005672a9: ADD ESP,0x8
// 005672ac: TEST EAX,EAX
// 005672ae: JZ 0x00567306
//   XREF to: 00567306 (CONDITIONAL_JUMP)
// 005672b0: PUSH 0x644051
//   XREF to: 00644051 (DATA)
// 005672b5: PUSH EBX
// 005672b6: LEA EAX,[ESP + 0x11c]
//   XREF to: Stack[-0x20] (DATA)
// 005672bd: PUSH EAX
// 005672be: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005672c3: ADD ESP,0x8
// 005672c6: PUSH EAX
// 005672c7: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005672cc: ADD ESP,0x8
// 005672cf: TEST EAX,EAX
// 005672d1: JZ 0x00567306
//   XREF to: 00567306 (CONDITIONAL_JUMP)
// 005672d3: MOV ESI,EDI
// 005672d5: MOV EDI,ESP
// 005672d7: PUSH EDI
// 005672d8: MOV AL,byte ptr [ESI]
//   Label: LAB_005672d8
// 005672da: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x134] (DATA)
// 005672dc: CMP AL,0x0
// 005672de: JZ 0x005672f0
//   XREF to: 005672f0 (CONDITIONAL_JUMP)
// 005672e0: MOV AL,byte ptr [ESI + 0x1]
// 005672e3: ADD ESI,0x2
// 005672e6: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x133] (WRITE)
// 005672e9: ADD EDI,0x2
// 005672ec: CMP AL,0x0
// 005672ee: JNZ 0x005672d8
//   XREF to: 005672d8 (CONDITIONAL_JUMP)
// 005672f0: POP EDI
//   Label: LAB_005672f0
// 005672f1: MOV EAX,ESP
// 005672f3: PUSH EAX
// 005672f4: XOR ECX,ECX
// 005672f6: PUSH EBP
// 005672f7: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005672fe: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 00567303: ADD ESP,0x8
// 00567306: INC EBX
//   Label: LAB_00567306
// 00567307: JMP 0x005671f0
//   XREF to: 005671f0 (UNCONDITIONAL_JUMP)
