// Name: crt_env.c_putenv_internal_FUN_0060ee80
// Address: 0060ee80
// Address Range: [[0060ee80, 0060f04b]]
// Convention: __cdecl
// Signature: int crt_env.c_putenv_internal_FUN_0060ee80(char * envstr)
// Cross-references:
//   crt_io.c_parseFileInfo_FUN_0060e3b0 (0060e3b0) at 0060e4de [UNCONDITIONAL_CALL]
// Globals:
//   SetEnvironmentVariableA* PTR_SetEnvironmentVariableA_0061161c = 00212160
//   int g_EnvironInitialized
// Function calls:
//   crt_env.c_updateEnvironTable_FUN_0060f04c
//   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_string.c_char_in_set_FUN_0060e340
//   crt_unknown.c_FUN_0060fa90
//   crt_unknown.c_FUN_0060fac0
//   crt_unknown.c_FUN_0060fcf4

#include "nocturne.h"

int __cdecl crt_env_c_putenv_internal_FUN_0060ee80(char *envstr)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  BOOL BVar4;
  void *ptr;
  uint uVar5;
  uint uVar6;
  char *unaff_ESI;
  char *pcVar7;
  LPCSTR unaff_EDI;
  char *pcVar8;
  byte bVar9;
  void *unaff_retaddr;
  char *in_stack_00000008;
  int in_stack_0000000c;
  char *in_stack_00000028;
  
  bVar9 = 0;
  pcVar1 = crt_string_c_char_in_set_FUN_0060e340(envstr,L'=');
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    if (pcVar1 == in_stack_00000008) {
      return -1;
    }
    pcVar3 = (char *)crt_memory_c_malloc_FUN_00601bb0
                               ((ulong)(pcVar1 + (1 - (int)in_stack_00000008)));
    if (pcVar3 == (char *)0x0) {
      return -1;
    }
    pcVar7 = in_stack_00000008;
    pcVar8 = pcVar3;
    for (uVar5 = (uint)unaff_EDI >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar5 = (uint)unaff_EDI & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
    pcVar3[(int)unaff_EDI] = '\0';
    uVar5 = crt_unknown_c_FUN_0060fa90();
    if (uVar5 == 0) {
      unaff_EDI = (LPCSTR)0x0;
    }
    else {
      unaff_ESI = (char *)crt_memory_c_malloc_FUN_00601bb0(uVar5 + 1);
      if (unaff_ESI == (char *)0x0) {
        crt_memory_c_free_FUN_00601cd0(pcVar3);
        return -1;
      }
      pcVar1 = pcVar1 + 1;
      pcVar3 = unaff_ESI;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar1;
        pcVar1 = pcVar1 + (uint)bVar9 * -8 + 4;
        pcVar3 = pcVar3 + (uint)bVar9 * -8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar1;
        pcVar1 = pcVar1 + (uint)bVar9 * -2 + 1;
        pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
      }
      unaff_ESI[uVar5] = '\0';
    }
    BVar4 = (*PTR_SetEnvironmentVariableA_0061161c)(unaff_EDI,unaff_ESI);
    crt_memory_c_free_FUN_00601cd0(unaff_retaddr);
    crt_memory_c_free_FUN_00601cd0(in_stack_00000008);
    if (BVar4 == 0) {
      return -1;
    }
    iVar2 = crt_env_c_updateEnvironTable_FUN_0060f04c(in_stack_00000028);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = 0;
    if (g_EnvironInitialized != 0) {
      iVar2 = crt_unknown_c_FUN_0060fa90();
      ptr = crt_memory_c_malloc_FUN_00601bb0(in_stack_0000000c * (iVar2 + 1));
      if (ptr == (void *)0x0) {
        crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(5);
        return -1;
      }
      iVar2 = crt_unknown_c_FUN_0060fac0();
      if (iVar2 == -1) {
        crt_memory_c_free_FUN_00601cd0(ptr);
        return -1;
      }
      iVar2 = crt_unknown_c_FUN_0060fcf4();
    }
  }
  return iVar2;
}


// Assembly code:
// 0060ee80: PUSH EBX
//   Label: crt_env.c_putenv_internal_FUN_0060ee80
// 0060ee81: PUSH ESI
// 0060ee82: PUSH EDI
// 0060ee83: PUSH EBP
// 0060ee84: SUB ESP,0x14
// 0060ee87: MOV EDX,0x2
// 0060ee8c: PUSH 0x3d
// 0060ee8e: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0060ee92: MOV EBX,0x1
// 0060ee97: PUSH ECX
// 0060ee98: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0060ee9c: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0060eea0: CALL crt_string.c_char_in_set_FUN_0060e340
//   XREF to: 0060e340 (UNCONDITIONAL_CALL)
// 0060eea5: MOV EBP,EAX
// 0060eea7: ADD ESP,0x8
// 0060eeaa: TEST EAX,EAX
// 0060eeac: JNZ 0x0060eeb8
//   XREF to: 0060eeb8 (CONDITIONAL_JUMP)
// 0060eeae: MOV EAX,0xffffffff
// 0060eeb3: JMP 0x0060f044
//   XREF to: 0060f044 (UNCONDITIONAL_JUMP)
// 0060eeb8: MOV ESI,dword ptr [ESP + 0x28]
//   Label: LAB_0060eeb8
//   XREF to: Stack[0x4] (READ)
// 0060eebc: CMP EAX,ESI
// 0060eebe: JNZ 0x0060eecd
//   XREF to: 0060eecd (CONDITIONAL_JUMP)
// 0060eec0: MOV EAX,0xffffffff
// 0060eec5: ADD ESP,0x14
// 0060eec8: POP EBP
// 0060eec9: POP EDI
// 0060eeca: POP ESI
// 0060eecb: POP EBX
// 0060eecc: RET
// 0060eecd: SUB EAX,ESI
//   Label: LAB_0060eecd
// 0060eecf: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060eed3: ADD EAX,EBX
// 0060eed5: PUSH EAX
// 0060eed6: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060eedb: ADD ESP,0x4
// 0060eede: MOV EBX,EAX
// 0060eee0: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060eee4: TEST EAX,EAX
// 0060eee6: JNZ 0x0060eef5
//   XREF to: 0060eef5 (CONDITIONAL_JUMP)
// 0060eee8: MOV EAX,0xffffffff
// 0060eeed: ADD ESP,0x14
// 0060eef0: POP EBP
// 0060eef1: POP EDI
// 0060eef2: POP ESI
// 0060eef3: POP EBX
// 0060eef4: RET
// 0060eef5: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_0060eef5
//   XREF to: Stack[-0x14] (READ)
// 0060eef9: MOV EDI,EAX
// 0060eefb: PUSH ES
// 0060eefc: MOV AX,DS
// 0060eefe: MOV ES,AX
// 0060ef00: PUSH EDI
// 0060ef01: MOV EAX,ECX
// 0060ef03: SHR ECX,0x2
// 0060ef06: MOVSD.REP ES:EDI,ESI
// 0060ef08: MOV CL,AL
// 0060ef0a: AND CL,0x3
// 0060ef0d: MOVSB.REP ES:EDI,ESI
// 0060ef0f: POP EDI
// 0060ef10: POP ES
// 0060ef11: LEA ESI,[EBP + 0x1]
// 0060ef14: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060ef18: PUSH ESI
// 0060ef19: MOV byte ptr [EBX + EAX*0x1],0x0
// 0060ef1d: CALL crt_unknown.c_FUN_0060fa90
//   XREF to: 0060fa90 (UNCONDITIONAL_CALL)
// 0060ef22: MOV EBP,EAX
// 0060ef24: ADD ESP,0x4
// 0060ef27: TEST EAX,EAX
// 0060ef29: JZ 0x0060ef6f
//   XREF to: 0060ef6f (CONDITIONAL_JUMP)
// 0060ef2b: INC EAX
// 0060ef2c: PUSH EAX
// 0060ef2d: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060ef32: ADD ESP,0x4
// 0060ef35: MOV EDX,EAX
// 0060ef37: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0060ef3b: TEST EAX,EAX
// 0060ef3d: JNZ 0x0060ef4f
//   XREF to: 0060ef4f (CONDITIONAL_JUMP)
// 0060ef3f: PUSH EBX
// 0060ef40: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060ef45: MOV EAX,0xffffffff
// 0060ef4a: JMP 0x0060f041
//   XREF to: 0060f041 (UNCONDITIONAL_JUMP)
// 0060ef4f: MOV ECX,EBP
//   Label: LAB_0060ef4f
// 0060ef51: MOV EDI,EAX
// 0060ef53: PUSH ES
// 0060ef54: MOV AX,DS
// 0060ef56: MOV ES,AX
// 0060ef58: PUSH EDI
// 0060ef59: MOV EAX,ECX
// 0060ef5b: SHR ECX,0x2
// 0060ef5e: MOVSD.REP ES:EDI,ESI
// 0060ef60: MOV CL,AL
// 0060ef62: AND CL,0x3
// 0060ef65: MOVSB.REP ES:EDI,ESI
// 0060ef67: POP EDI
// 0060ef68: POP ES
// 0060ef69: MOV byte ptr [EDX + EBP*0x1],0x0
// 0060ef6d: JMP 0x0060ef73
//   XREF to: 0060ef73 (UNCONDITIONAL_JUMP)
// 0060ef6f: MOV dword ptr [ESP + 0xc],EAX
//   Label: LAB_0060ef6f
//   XREF to: Stack[-0x18] (WRITE)
// 0060ef73: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0060ef73
//   XREF to: Stack[-0x18] (READ)
// 0060ef77: PUSH EAX
// 0060ef78: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0060ef7c: PUSH EDX
// 0060ef7d: CALL dword ptr CS:[0x61161c]
//   XREF to: 0061161c (READ)
// 0060ef84: MOV ECX,dword ptr [ESP + 0x8]
// 0060ef88: PUSH ECX
// 0060ef89: MOV EBX,EAX
// 0060ef8b: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060ef90: ADD ESP,0x4
// 0060ef93: MOV ESI,dword ptr [ESP + 0xc]
// 0060ef97: PUSH ESI
// 0060ef98: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060ef9d: ADD ESP,0x4
// 0060efa0: TEST EBX,EBX
// 0060efa2: JNZ 0x0060efb1
//   XREF to: 0060efb1 (CONDITIONAL_JUMP)
// 0060efa4: MOV EAX,0xffffffff
// 0060efa9: ADD ESP,0x14
// 0060efac: POP EBP
// 0060efad: POP EDI
// 0060efae: POP ESI
// 0060efaf: POP EBX
// 0060efb0: RET
// 0060efb1: MOV EDI,dword ptr [ESP + 0x28]
//   Label: LAB_0060efb1
// 0060efb5: PUSH EDI
// 0060efb6: CALL crt_env.c_updateEnvironTable_FUN_0060f04c
//   XREF to: 0060f04c (UNCONDITIONAL_CALL)
// 0060efbb: ADD ESP,0x4
// 0060efbe: TEST EAX,EAX
// 0060efc0: JZ 0x0060efcf
//   XREF to: 0060efcf (CONDITIONAL_JUMP)
// 0060efc2: MOV EAX,0xffffffff
// 0060efc7: ADD ESP,0x14
// 0060efca: POP EBP
// 0060efcb: POP EDI
// 0060efcc: POP ESI
// 0060efcd: POP EBX
// 0060efce: RET
// 0060efcf: CMP dword ptr [0x03f9b868],0x0
//   Label: LAB_0060efcf
//   XREF to: 03f9b868 (READ)
// 0060efd6: JZ 0x0060f044
//   XREF to: 0060f044 (CONDITIONAL_JUMP)
// 0060efd8: PUSH EDI
// 0060efd9: CALL crt_unknown.c_FUN_0060fa90
//   XREF to: 0060fa90 (UNCONDITIONAL_CALL)
// 0060efde: ADD ESP,0x4
// 0060efe1: LEA ESI,[EAX + 0x1]
// 0060efe4: MOV EAX,dword ptr [ESP + 0x4]
// 0060efe8: IMUL EAX,ESI
// 0060efeb: PUSH EAX
// 0060efec: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060eff1: MOV EBX,EAX
// 0060eff3: ADD ESP,0x4
// 0060eff6: TEST EAX,EAX
// 0060eff8: JNZ 0x0060f011
//   XREF to: 0060f011 (CONDITIONAL_JUMP)
// 0060effa: PUSH 0x5
// 0060effc: CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   XREF to: 00608390 (UNCONDITIONAL_CALL)
// 0060f001: MOV EAX,0xffffffff
// 0060f006: ADD ESP,0x4
// 0060f009: ADD ESP,0x14
// 0060f00c: POP EBP
// 0060f00d: POP EDI
// 0060f00e: POP ESI
// 0060f00f: POP EBX
// 0060f010: RET
// 0060f011: IMUL ESI,dword ptr [ESP]
//   Label: LAB_0060f011
// 0060f015: PUSH ESI
// 0060f016: PUSH EDI
// 0060f017: PUSH EAX
// 0060f018: CALL crt_unknown.c_FUN_0060fac0
//   XREF to: 0060fac0 (UNCONDITIONAL_CALL)
// 0060f01d: ADD ESP,0xc
// 0060f020: CMP EAX,-0x1
// 0060f023: JNZ 0x0060f03b
//   XREF to: 0060f03b (CONDITIONAL_JUMP)
// 0060f025: PUSH EBX
// 0060f026: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f02b: MOV EAX,0xffffffff
// 0060f030: ADD ESP,0x4
// 0060f033: ADD ESP,0x14
// 0060f036: POP EBP
// 0060f037: POP EDI
// 0060f038: POP ESI
// 0060f039: POP EBX
// 0060f03a: RET
// 0060f03b: PUSH EBX
//   Label: LAB_0060f03b
// 0060f03c: CALL crt_unknown.c_FUN_0060fcf4
//   XREF to: 0060fcf4 (UNCONDITIONAL_CALL)
// 0060f041: ADD ESP,0x4
//   Label: LAB_0060f041
// 0060f044: ADD ESP,0x14
//   Label: LAB_0060f044
// 0060f047: POP EBP
// 0060f048: POP EDI
// 0060f049: POP ESI
// 0060f04a: POP EBX
// 0060f04b: RET
