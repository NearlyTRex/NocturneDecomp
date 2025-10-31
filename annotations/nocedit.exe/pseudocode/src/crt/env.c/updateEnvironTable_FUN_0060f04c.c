// Name: crt_env.c_updateEnvironTable_FUN_0060f04c
// Address: 0060f04c
// Address Range: [[0060f04c, 0060f1ee]]
// Convention: __cdecl
// Signature: int crt_env.c_updateEnvironTable_FUN_0060f04c(char * envstr)
// Cross-references:
//   crt_env.c_putenv_internal_FUN_0060ee80 (0060ee80) at 0060efb6 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fce1 [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironStringArea
//   char** g_EnvironmentBlock
// Function calls:
//   crt_env.c_findEnvVar_FUN_0060f1f0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_memory.c_memset_FUN_005fde40
//   crt_memory.c_realloc_FUN_00601df0
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

int __cdecl crt_env_c_updateEnvironTable_FUN_0060f04c(char *envstr)

{
  uint uVar1;
  char cVar2;
  char *in_EAX;
  char **ptr;
  int iVar3;
  char *n;
  uint uVar4;
  int iVar5;
  char **ppcVar6;
  int unaff_EDI;
  char **ppcVar7;
  bool bVar8;
  byte bVar9;
  char *in_stack_00000010;
  
  ptr = g_EnvironmentBlock;
  bVar9 = 0;
  if (envstr == (char *)0x0) {
    return -1;
  }
  if (*envstr != '\0') {
    in_EAX = envstr + 1;
    cVar2 = *in_EAX;
    for (; (cVar2 != '\0' && (*in_EAX != '=')); in_EAX = in_EAX + 1) {
      cVar2 = in_EAX[1];
    }
  }
  if (*in_EAX == '\0') {
    return -1;
  }
  bVar8 = in_EAX[1] == '\0';
  n = (char *)(uint)bVar8;
  if (g_EnvironmentBlock == (char **)0x0) {
    if (bVar8) {
      return 0;
    }
    ptr = (char **)crt_memory_c_malloc_FUN_00601bb0(9);
    if (ptr == (char **)0x0) {
      return -1;
    }
    g_EnvironStringArea = ptr + 2;
    g_EnvironmentBlock = ptr;
    *ptr = n;
    ptr[1] = n;
  }
  else {
    iVar3 = crt_env_c_findEnvVar_FUN_0060f1f0(envstr,(int)n);
    if (bVar8) {
      return 0;
    }
    if (iVar3 < 1) {
      n = (char *)-iVar3;
      uVar1 = iVar3 * -4;
      if (g_EnvironStringArea == (char **)0x0) {
        ptr = (char **)crt_memory_c_malloc_FUN_00601bb0((ulong)(n + uVar1 + 9));
        if (ptr == (char **)0x0) {
          return -1;
        }
        ppcVar6 = g_EnvironmentBlock;
        ppcVar7 = ptr;
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *ppcVar7 = *ppcVar6;
          ppcVar6 = ppcVar6 + (uint)bVar9 * -2 + 1;
          ppcVar7 = ppcVar7 + (uint)bVar9 * -2 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)ppcVar7 = *(undefined1 *)ppcVar6;
          ppcVar6 = (char **)((int)ppcVar6 + (uint)bVar9 * -2 + 1);
          ppcVar7 = (char **)((int)ppcVar7 + (uint)bVar9 * -2 + 1);
        }
        g_EnvironStringArea = (char **)(unaff_EDI + (int)ptr);
        crt_memory_c_memset_FUN_005fde40(g_EnvironStringArea,0,uVar1 + 8);
      }
      else {
        ptr = (char **)crt_memory_c_realloc_FUN_00601df0(ptr,(ulong)(n + uVar1 + 9));
        if (ptr == (char **)0x0) {
          return -1;
        }
        crt_string_c_memmove_FUN_005fe5e0
                  ((char **)(unaff_EDI + (int)ptr),g_EnvironStringArea,(SIZE_T)n);
        g_EnvironStringArea = (char **)(unaff_EDI + (int)ptr);
      }
      ptr[1 - iVar3] = (char *)0x0;
      g_EnvironmentBlock = ptr;
    }
    else {
      n = (char *)(iVar3 - 1);
    }
  }
  ptr[(int)n] = in_stack_00000010;
  *(char *)((int)g_EnvironStringArea + (int)n) = '\0';
  return 0;
}


// Assembly code:
// 0060f04c: PUSH EBX
//   Label: crt_env.c_updateEnvironTable_FUN_0060f04c
// 0060f04d: PUSH ESI
// 0060f04e: PUSH EDI
// 0060f04f: PUSH EBP
// 0060f050: SUB ESP,0x8
// 0060f053: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0060f057: TEST EDX,EDX
// 0060f059: JNZ 0x0060f065
//   XREF to: 0060f065 (CONDITIONAL_JUMP)
// 0060f05b: MOV EAX,0xffffffff
// 0060f060: JMP 0x0060f1e7
//   XREF to: 0060f1e7 (UNCONDITIONAL_JUMP)
// 0060f065: CMP byte ptr [EDX],0x0
//   Label: LAB_0060f065
// 0060f068: JZ 0x0060f07f
//   XREF to: 0060f07f (CONDITIONAL_JUMP)
// 0060f06a: LEA EAX,[EDX + 0x1]
// 0060f06d: CMP byte ptr [EAX],0x0
// 0060f070: JZ 0x0060f07f
//   XREF to: 0060f07f (CONDITIONAL_JUMP)
// 0060f072: CMP byte ptr [EAX],0x3d
//   Label: LAB_0060f072
// 0060f075: JZ 0x0060f07f
//   XREF to: 0060f07f (CONDITIONAL_JUMP)
// 0060f077: MOV CL,byte ptr [EAX + 0x1]
// 0060f07a: INC EAX
// 0060f07b: TEST CL,CL
// 0060f07d: JNZ 0x0060f072
//   XREF to: 0060f072 (CONDITIONAL_JUMP)
// 0060f07f: CMP byte ptr [EAX],0x0
//   Label: LAB_0060f07f
// 0060f082: JNZ 0x0060f091
//   XREF to: 0060f091 (CONDITIONAL_JUMP)
// 0060f084: MOV EAX,0xffffffff
// 0060f089: ADD ESP,0x8
// 0060f08c: POP EBP
// 0060f08d: POP EDI
// 0060f08e: POP ESI
// 0060f08f: POP EBX
// 0060f090: RET
// 0060f091: CMP byte ptr [EAX + 0x1],0x0
//   Label: LAB_0060f091
// 0060f095: SETZ AL
// 0060f098: MOV EBX,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060f09e: MOVZX EBP,AL
// 0060f0a1: TEST EBX,EBX
// 0060f0a3: JNZ 0x0060f0e2
//   XREF to: 0060f0e2 (CONDITIONAL_JUMP)
// 0060f0a5: TEST EBP,EBP
// 0060f0a7: JNZ 0x0060f1e5
//   XREF to: 0060f1e5 (CONDITIONAL_JUMP)
// 0060f0ad: PUSH 0x9
// 0060f0af: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060f0b4: ADD ESP,0x4
// 0060f0b7: MOV EBX,EAX
// 0060f0b9: TEST EAX,EAX
// 0060f0bb: JNZ 0x0060f0ca
//   XREF to: 0060f0ca (CONDITIONAL_JUMP)
// 0060f0bd: MOV EAX,0xffffffff
// 0060f0c2: ADD ESP,0x8
// 0060f0c5: POP EBP
// 0060f0c6: POP EDI
// 0060f0c7: POP ESI
// 0060f0c8: POP EBX
// 0060f0c9: RET
// 0060f0ca: MOV [0x03f9b864],EAX
//   Label: LAB_0060f0ca
//   XREF to: 03f9b864 (WRITE)
// 0060f0cf: ADD EAX,0x8
// 0060f0d2: MOV dword ptr [EAX + -0x8],EBP
// 0060f0d5: MOV dword ptr [EAX + -0x4],EBP
// 0060f0d8: MOV [0x03f9b860],EAX
//   XREF to: 03f9b860 (WRITE)
// 0060f0dd: JMP 0x0060f1cd
//   XREF to: 0060f1cd (UNCONDITIONAL_JUMP)
// 0060f0e2: PUSH EBP
//   Label: LAB_0060f0e2
// 0060f0e3: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0060f0e7: PUSH ECX
// 0060f0e8: CALL crt_env.c_findEnvVar_FUN_0060f1f0
//   XREF to: 0060f1f0 (UNCONDITIONAL_CALL)
// 0060f0ed: ADD ESP,0x8
// 0060f0f0: TEST EBP,EBP
// 0060f0f2: JNZ 0x0060f1e5
//   XREF to: 0060f1e5 (CONDITIONAL_JUMP)
// 0060f0f8: TEST EAX,EAX
// 0060f0fa: JG 0x0060f1ca
//   XREF to: 0060f1ca (CONDITIONAL_JUMP)
// 0060f100: NEG EAX
// 0060f102: MOV EDX,dword ptr [0x03f9b860]
//   XREF to: 03f9b860 (READ)
// 0060f108: MOV EBP,EAX
// 0060f10a: INC EAX
// 0060f10b: LEA ESI,[EBP*0x4 + 0x0]
// 0060f112: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0060f115: LEA EAX,[ESI + 0x8]
// 0060f118: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0060f11b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060f11f: ADD EAX,EDI
// 0060f121: TEST EDX,EDX
// 0060f123: JNZ 0x0060f180
//   XREF to: 0060f180 (CONDITIONAL_JUMP)
// 0060f125: PUSH EAX
// 0060f126: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060f12b: MOV EDX,EAX
// 0060f12d: ADD ESP,0x4
// 0060f130: MOV EBX,EAX
// 0060f132: TEST EAX,EAX
// 0060f134: JNZ 0x0060f143
//   XREF to: 0060f143 (CONDITIONAL_JUMP)
// 0060f136: MOV EAX,0xffffffff
// 0060f13b: ADD ESP,0x8
// 0060f13e: POP EBP
// 0060f13f: POP EDI
// 0060f140: POP ESI
// 0060f141: POP EBX
// 0060f142: RET
// 0060f143: MOV EAX,[0x03f9b864]
//   Label: LAB_0060f143
//   XREF to: 03f9b864 (READ)
// 0060f148: MOV ECX,ESI
// 0060f14a: MOV EDI,EDX
// 0060f14c: MOV ESI,EAX
// 0060f14e: PUSH ES
// 0060f14f: MOV AX,DS
// 0060f151: MOV ES,AX
// 0060f153: PUSH EDI
// 0060f154: MOV EAX,ECX
// 0060f156: SHR ECX,0x2
// 0060f159: MOVSD.REP ES:EDI,ESI
// 0060f15b: MOV CL,AL
// 0060f15d: AND CL,0x3
// 0060f160: MOVSB.REP ES:EDI,ESI
// 0060f162: POP EDI
// 0060f163: POP ES
// 0060f164: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0060f167: PUSH ESI
// 0060f168: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0060f16c: PUSH 0x0
// 0060f16e: ADD EAX,EDX
// 0060f170: PUSH EAX
// 0060f171: MOV [0x03f9b860],EAX
//   XREF to: 03f9b860 (WRITE)
// 0060f176: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060f17b: ADD ESP,0xc
// 0060f17e: JMP 0x0060f1ba
//   XREF to: 0060f1ba (UNCONDITIONAL_JUMP)
// 0060f180: PUSH EAX
//   Label: LAB_0060f180
// 0060f181: PUSH EBX
// 0060f182: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 0060f187: ADD ESP,0x8
// 0060f18a: MOV EBX,EAX
// 0060f18c: TEST EAX,EAX
// 0060f18e: JNZ 0x0060f19d
//   XREF to: 0060f19d (CONDITIONAL_JUMP)
// 0060f190: MOV EAX,0xffffffff
// 0060f195: ADD ESP,0x8
// 0060f198: POP EBP
// 0060f199: POP EDI
// 0060f19a: POP ESI
// 0060f19b: POP EBX
// 0060f19c: RET
// 0060f19d: PUSH EBP
//   Label: LAB_0060f19d
// 0060f19e: MOV ECX,dword ptr [0x03f9b860]
//   XREF to: 03f9b860 (READ)
// 0060f1a4: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0060f1a8: PUSH ECX
// 0060f1a9: ADD ESI,EAX
// 0060f1ab: PUSH ESI
// 0060f1ac: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0060f1b1: ADD ESP,0xc
// 0060f1b4: MOV dword ptr [0x03f9b860],ESI
//   XREF to: 03f9b860 (WRITE)
// 0060f1ba: MOV dword ptr [EBX + EBP*0x4 + 0x4],0x0
//   Label: LAB_0060f1ba
// 0060f1c2: MOV dword ptr [0x03f9b864],EBX
//   XREF to: 03f9b864 (WRITE)
// 0060f1c8: JMP 0x0060f1cd
//   XREF to: 0060f1cd (UNCONDITIONAL_JUMP)
// 0060f1ca: LEA EBP,[EAX + -0x1]
//   Label: LAB_0060f1ca
// 0060f1cd: LEA EAX,[EBP*0x4 + 0x0]
//   Label: LAB_0060f1cd
// 0060f1d4: ADD EBX,EAX
// 0060f1d6: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0060f1da: MOV dword ptr [EBX],EAX
// 0060f1dc: MOV EAX,[0x03f9b860]
//   XREF to: 03f9b860 (READ)
// 0060f1e1: MOV byte ptr [EAX + EBP*0x1],0x0
// 0060f1e5: XOR EAX,EAX
//   Label: LAB_0060f1e5
// 0060f1e7: ADD ESP,0x8
//   Label: LAB_0060f1e7
// 0060f1ea: POP EBP
// 0060f1eb: POP EDI
// 0060f1ec: POP ESI
// 0060f1ed: POP EBX
// 0060f1ee: RET
