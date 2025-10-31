// Name: core_script.cpp_FUN_00561a30
// Address: 00561a30
// Address Range: [[00561a30, 00561c69]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00561a30()
// Cross-references:
//   core_script.cpp_FUN_00561690 (00561690) at 005619c1 [UNCONDITIONAL_CALL]
// Globals:
//   CScript* g_CScriptPtr = 0310f858
//   void* PTR_s_cmp_counterUsed_relOp_co_0064546c_00681008 = 0064546c
//   CScript g_CScriptInstance
// Function calls:
//   core_script.cpp_FUN_00561690
//   core_script.cpp_FUN_00567310
//   crt_memory.c_memset_FUN_005fde40
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00561a30(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7) */

char * core_script_cpp_FUN_00561a30
                 (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
                 char *param_5)

{
  char cVar1;
  CStrList_vtable *d2;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int unaff_retaddr;
  char *in_stack_00000014;
  undefined1 *in_stack_00000018;
  char *in_stack_0000001c;
  void *in_stack_00000020;
  char *in_stack_00000024;
  undefined1 *in_stack_00000028;
  char *in_stack_0000002c;
  CStrList_vtable *in_stack_ffffffdc;
  
  bVar7 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffd0);
  d2 = (CStrList_vtable *)core_script_cpp_FUN_00567310();
  crt_memory_c_memset_FUN_005fde40(in_stack_00000020,0,0x328);
  if (unaff_ESI < 0) {
    uVar3 = 0xffffffff;
    pcVar2 = param_5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = in_stack_00000014;
    if ((char *)(~uVar3 - 1) < in_stack_00000014) {
      uVar3 = 0xffffffff;
      pcVar2 = param_5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = (char *)(~uVar3 - 1);
    }
    pcVar5 = param_5;
    pcVar6 = in_stack_00000014;
    for (uVar3 = (uint)pcVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
      pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
    }
    for (uVar3 = (uint)pcVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    }
    in_stack_00000014[(int)pcVar2] = '\0';
    param_5 = param_5 + (int)pcVar2;
    *in_stack_00000018 = 0;
    do {
      cVar1 = *param_5;
      *in_stack_0000001c = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_5[1];
      param_5 = param_5 + 2;
      in_stack_0000001c[1] = cVar1;
      in_stack_0000001c = in_stack_0000001c + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
              ((CStrList *)&stack0xffffffdc,0,(uint)in_stack_ffffffdc);
    return (char *)0x20;
  }
  pcVar2 = param_5;
  pcVar5 = in_stack_00000014;
  for (uVar3 = (uint)d2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + (uint)bVar7 * -8 + 4;
    pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
  }
  for (uVar3 = (uint)d2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  }
  in_stack_00000014[(int)d2] = '\0';
  pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                     ((CStrList *)&stack0xffffffdc,unaff_ESI);
  do {
    pcVar5 = pcVar2;
    if (*pcVar2 == '(') goto LAB_00561ae9;
    if (*pcVar2 == '\0') break;
    pcVar5 = pcVar2 + 1;
    if (*pcVar5 == '(') goto LAB_00561ae9;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00561ae9:
  if (pcVar5 != (char *)0x0) {
    shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xffffffe0,unaff_EBX);
    unaff_retaddr = core_script_cpp_FUN_00561690();
  }
  if (unaff_retaddr < 0) {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xffffffe8,unaff_EBX);
    do {
      cVar1 = *pcVar2;
      *in_stack_00000024 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      in_stack_00000024[1] = cVar1;
      in_stack_00000024 = in_stack_00000024 + 2;
    } while (cVar1 != '\0');
    *in_stack_00000028 = 0;
  }
  pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                     ((CStrList *)&stack0xffffffe8,unaff_EBX);
  uVar3 = 0xffffffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = param_5 + (~uVar3 - 1) + unaff_ESI;
  iVar4 = -1;
  do {
    pcVar5 = in_stack_0000002c;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar5 = in_stack_0000002c + (uint)bVar7 * -2 + 1;
    cVar1 = *in_stack_0000002c;
    in_stack_0000002c = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffec,0,(uint)d2);
  return param_5;
}


// Assembly code:
// 00561a30: PUSH EBX
//   Label: core_script.cpp_FUN_00561a30
// 00561a31: PUSH ESI
// 00561a32: PUSH EDI
// 00561a33: PUSH EBP
// 00561a34: SUB ESP,0x20
// 00561a37: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00561a3b: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x14] (READ)
// 00561a3f: MOV EAX,ESP
// 00561a41: PUSH EAX
// 00561a42: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 00561a47: ADD ESP,0x4
// 00561a4a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00561a4e: PUSH EAX
// 00561a4f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00561a53: PUSH EAX
// 00561a54: PUSH EBX
// 00561a55: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00561a5b: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 00561a5c: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 00561a60: CALL core_script.cpp_FUN_00567310
//   XREF to: 00567310 (UNCONDITIONAL_CALL)
// 00561a65: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00561a69: ADD ESP,0x10
// 00561a6c: PUSH 0x328
// 00561a71: PUSH 0x0
// 00561a73: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x18] (READ)
// 00561a77: PUSH ECX
// 00561a78: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00561a7c: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00561a81: ADD ESP,0xc
// 00561a84: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[-0x14] (READ)
// 00561a89: JL 0x00561be8
//   XREF to: 00561be8 (CONDITIONAL_JUMP)
// 00561a8f: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00561a93: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 00561a97: MOV ESI,EBX
// 00561a99: PUSH EDI
// 00561a9a: MOV EAX,ECX
// 00561a9c: SHR ECX,0x2
// 00561a9f: MOVSD.REP ES:EDI,ESI
// 00561aa1: MOV CL,AL
// 00561aa3: AND CL,0x3
// 00561aa6: MOVSB.REP ES:EDI,ESI
// 00561aa8: POP EDI
// 00561aa9: MOV EAX,EDI
// 00561aab: ADD EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00561aaf: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00561ab3: MOV byte ptr [EAX],0x0
// 00561ab6: MOV EAX,0xffffffff
// 00561abb: PUSH EDX
// 00561abc: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00561ac0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00561ac4: PUSH EAX
// 00561ac5: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00561aca: ADD ESP,0x8
// 00561acd: MOV DL,0x28
// 00561acf: MOV ESI,EAX
// 00561ad1: MOV AL,byte ptr [ESI]
//   Label: LAB_00561ad1
// 00561ad3: CMP AL,DL
// 00561ad5: JZ 0x00561ae9
//   XREF to: 00561ae9 (CONDITIONAL_JUMP)
// 00561ad7: CMP AL,0x0
// 00561ad9: JZ 0x00561ae7
//   XREF to: 00561ae7 (CONDITIONAL_JUMP)
// 00561adb: INC ESI
// 00561adc: MOV AL,byte ptr [ESI]
// 00561ade: CMP AL,DL
// 00561ae0: JZ 0x00561ae9
//   XREF to: 00561ae9 (CONDITIONAL_JUMP)
// 00561ae2: INC ESI
// 00561ae3: CMP AL,0x0
// 00561ae5: JNZ 0x00561ad1
//   XREF to: 00561ad1 (CONDITIONAL_JUMP)
// 00561ae7: SUB ESI,ESI
//   Label: LAB_00561ae7
// 00561ae9: TEST ESI,ESI
//   Label: LAB_00561ae9
// 00561aeb: JZ 0x00561b35
//   XREF to: 00561b35 (CONDITIONAL_JUMP)
// 00561aed: PUSH 0x15
// 00561aef: PUSH 0x681008
//   XREF to: 00681008 (DATA)
// 00561af4: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x1c] (READ)
// 00561af8: PUSH ECX
// 00561af9: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x18] (READ)
// 00561afd: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 00561b01: PUSH ESI
// 00561b02: SUB EBP,EDI
// 00561b04: PUSH EBP
// 00561b05: MOV EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x10] (READ)
// 00561b09: PUSH EBP
// 00561b0a: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 00561b0e: PUSH EAX
// 00561b0f: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 00561b13: ADD EAX,EDI
// 00561b15: PUSH EAX
// 00561b16: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 00561b1a: PUSH ECX
// 00561b1b: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x30] (DATA)
// 00561b1f: PUSH EAX
// 00561b20: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00561b25: ADD ESP,0x8
// 00561b28: PUSH EAX
// 00561b29: CALL core_script.cpp_FUN_00561690
//   XREF to: 00561690 (UNCONDITIONAL_CALL)
// 00561b2e: ADD ESP,0x24
// 00561b31: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00561b35: CMP dword ptr [ESP + 0x18],0x0
//   Label: LAB_00561b35
//   XREF to: Stack[-0x18] (READ)
// 00561b3a: JGE 0x00561b7e
//   XREF to: 00561b7e (CONDITIONAL_JUMP)
// 00561b3c: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00561b40: PUSH EDI
// 00561b41: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00561b45: PUSH EAX
// 00561b46: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00561b4b: ADD ESP,0x8
// 00561b4e: MOV ESI,EAX
// 00561b50: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0xc] (READ)
// 00561b54: MOV EBP,0x20
// 00561b59: PUSH EDI
// 00561b5a: MOV AL,byte ptr [ESI]
//   Label: LAB_00561b5a
// 00561b5c: MOV byte ptr [EDI],AL
// 00561b5e: CMP AL,0x0
// 00561b60: JZ 0x00561b72
//   XREF to: 00561b72 (CONDITIONAL_JUMP)
// 00561b62: MOV AL,byte ptr [ESI + 0x1]
// 00561b65: ADD ESI,0x2
// 00561b68: MOV byte ptr [EDI + 0x1],AL
// 00561b6b: ADD EDI,0x2
// 00561b6e: CMP AL,0x0
// 00561b70: JNZ 0x00561b5a
//   XREF to: 00561b5a (CONDITIONAL_JUMP)
// 00561b72: POP EDI
//   Label: LAB_00561b72
// 00561b73: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00561b77: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00561b7b: MOV byte ptr [EAX],0x0
// 00561b7e: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00561b7e
//   XREF to: Stack[-0x1c] (READ)
// 00561b82: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00561b86: PUSH EDX
// 00561b87: ADD EBX,EAX
// 00561b89: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00561b8d: PUSH EAX
// 00561b8e: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00561b93: ADD ESP,0x8
// 00561b96: MOV EDI,EAX
// 00561b98: SUB ECX,ECX
// 00561b9a: DEC ECX
// 00561b9b: XOR EAX,EAX
// 00561b9d: SCASB.REPNE ES:EDI
// 00561b9f: NOT ECX
// 00561ba1: DEC ECX
// 00561ba2: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00561ba6: LEA ESI,[EBX + ECX*0x1]
// 00561ba9: PUSH EDI
// 00561baa: SUB ECX,ECX
// 00561bac: DEC ECX
// 00561bad: MOV AL,0x0
// 00561baf: SCASB.REPNE ES:EDI
// 00561bb1: DEC EDI
// 00561bb2: MOV AL,byte ptr [ESI]
//   Label: LAB_00561bb2
// 00561bb4: MOV byte ptr [EDI],AL
// 00561bb6: CMP AL,0x0
// 00561bb8: JZ 0x00561bca
//   XREF to: 00561bca (CONDITIONAL_JUMP)
// 00561bba: MOV AL,byte ptr [ESI + 0x1]
// 00561bbd: ADD ESI,0x2
// 00561bc0: MOV byte ptr [EDI + 0x1],AL
// 00561bc3: ADD EDI,0x2
// 00561bc6: CMP AL,0x0
// 00561bc8: JNZ 0x00561bb2
//   XREF to: 00561bb2 (CONDITIONAL_JUMP)
// 00561bca: POP EDI
//   Label: LAB_00561bca
// 00561bcb: PUSH 0x0
// 00561bcd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00561bd1: PUSH EAX
// 00561bd2: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00561bd6: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 00561bdb: ADD ESP,0x8
// 00561bde: MOV EAX,EDI
// 00561be0: ADD ESP,0x20
// 00561be3: POP EBP
// 00561be4: POP EDI
// 00561be5: POP ESI
// 00561be6: POP EBX
// 00561be7: RET
// 00561be8: MOV EDI,EBX
//   Label: LAB_00561be8
// 00561bea: SUB ECX,ECX
// 00561bec: DEC ECX
// 00561bed: XOR EAX,EAX
// 00561bef: SCASB.REPNE ES:EDI
// 00561bf1: NOT ECX
// 00561bf3: DEC ECX
// 00561bf4: CMP EBP,ECX
// 00561bf6: JBE 0x00561c06
//   XREF to: 00561c06 (CONDITIONAL_JUMP)
// 00561bf8: MOV EDI,EBX
// 00561bfa: SUB ECX,ECX
// 00561bfc: DEC ECX
// 00561bfd: XOR EAX,EAX
// 00561bff: SCASB.REPNE ES:EDI
// 00561c01: NOT ECX
// 00561c03: DEC ECX
// 00561c04: MOV EBP,ECX
// 00561c06: MOV EDI,dword ptr [ESP + 0x38]
//   Label: LAB_00561c06
//   XREF to: Stack[0x8] (READ)
// 00561c0a: MOV ECX,EBP
// 00561c0c: MOV ESI,EBX
// 00561c0e: PUSH EDI
// 00561c0f: MOV EAX,ECX
// 00561c11: SHR ECX,0x2
// 00561c14: MOVSD.REP ES:EDI,ESI
// 00561c16: MOV CL,AL
// 00561c18: AND CL,0x3
// 00561c1b: MOVSB.REP ES:EDI,ESI
// 00561c1d: POP EDI
// 00561c1e: MOV EAX,EDI
// 00561c20: MOV byte ptr [EAX + EBP*0x1],0x0
// 00561c24: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0xc] (READ)
// 00561c28: LEA ESI,[EBX + EBP*0x1]
// 00561c2b: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00561c2f: MOV byte ptr [EAX],0x0
// 00561c32: PUSH EDI
// 00561c33: MOV AL,byte ptr [ESI]
//   Label: LAB_00561c33
// 00561c35: MOV byte ptr [EDI],AL
// 00561c37: CMP AL,0x0
// 00561c39: JZ 0x00561c4b
//   XREF to: 00561c4b (CONDITIONAL_JUMP)
// 00561c3b: MOV AL,byte ptr [ESI + 0x1]
// 00561c3e: ADD ESI,0x2
// 00561c41: MOV byte ptr [EDI + 0x1],AL
// 00561c44: ADD EDI,0x2
// 00561c47: CMP AL,0x0
// 00561c49: JNZ 0x00561c33
//   XREF to: 00561c33 (CONDITIONAL_JUMP)
// 00561c4b: POP EDI
//   Label: LAB_00561c4b
// 00561c4c: PUSH 0x0
// 00561c4e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00561c52: PUSH EAX
// 00561c53: MOV EDI,0x20
// 00561c58: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 00561c5d: ADD ESP,0x8
// 00561c60: MOV EAX,EDI
// 00561c62: ADD ESP,0x20
// 00561c65: POP EBP
// 00561c66: POP EDI
// 00561c67: POP ESI
// 00561c68: POP EBX
// 00561c69: RET
