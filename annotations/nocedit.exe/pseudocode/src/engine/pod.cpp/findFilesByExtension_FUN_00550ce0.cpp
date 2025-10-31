// Name: engine_pod.cpp_findFilesByExtension_FUN_00550ce0
// Address: 00550ce0
// Address Range: [[00550ce0, 00550e98]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_findFilesByExtension_FUN_00550ce0(CPod * * pod_array, char * extension, char * output_buffer, int max_results, int result_string_length)
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_strncpy_FUN_00600f40
//   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140

#include "nocturne.h"

int __cdecl
engine_pod_cpp_findFilesByExtension_FUN_00550ce0
          (CPod **pod_array,char *extension,char *output_buffer,int max_results,
          int result_string_length)

{
  char cVar1;
  char *filename;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  CPod **ppCVar8;
  char *pcVar9;
  byte bVar10;
  char local_50 [12];
  char local_44 [12];
  int local_38;
  int local_34;
  SIZE_T local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  uVar5 = 0xffffffff;
  pcVar9 = extension;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_24 = ~uVar5 - 1;
  local_14 = 0;
  iVar3 = 0;
  if (0 < local_24) {
    do {
      iVar6 = iVar3 + 1;
      iVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)*extension);
      iVar4 = local_24;
      extension = (char *)((byte *)extension + 1);
      local_44[iVar3] = (char)iVar2;
      iVar3 = iVar6;
    } while (iVar6 < iVar4);
  }
  local_44[local_24] = '\0';
  local_38 = 0;
  if (0 < (int)*pod_array) {
    local_30 = result_string_length - 1;
    local_34 = 0;
    do {
      local_2c = local_34;
      local_28 = result_string_length;
      local_20 = 0;
      local_1c = output_buffer + local_14 * result_string_length;
      local_18 = 0;
      while( true ) {
        pcVar9 = local_50;
        iVar3 = *(int *)((int)pod_array + local_2c + 4);
        if (*(int *)(iVar3 + 0x410) <= local_18) break;
        filename = *(char **)(*(int *)(iVar3 + 0x414) + local_20);
        uVar5 = 0xffffffff;
        pcVar7 = filename;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        pcVar7 = filename + ((~uVar5 - 1) - local_24);
        do {
          cVar1 = *pcVar7;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        iVar3 = crt_string_c_strcmp_FUN_005fef20(local_50,local_44);
        if (iVar3 == 0) {
          iVar3 = 0;
          ppCVar8 = pod_array;
          if (0 < local_38) {
            do {
              iVar4 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140
                                ((CPodFile *)ppCVar8[1],filename);
              if (-1 < iVar4) break;
              iVar3 = iVar3 + 1;
              ppCVar8 = ppCVar8 + 1;
            } while (iVar3 < local_38);
          }
          pcVar9 = local_1c;
          if (iVar3 == local_38) {
            crt_string_c_strncpy_FUN_00600f40(local_1c,filename,local_30);
            local_1c = pcVar9 + local_28;
            local_14 = local_14 + 1;
            if (max_results <= local_14) {
              return local_14;
            }
          }
        }
        local_18 = local_18 + 1;
        local_20 = local_20 + 0x14;
      }
      local_34 = local_34 + 4;
      local_38 = local_38 + 1;
    } while (local_38 < (int)*pod_array);
  }
  return local_14;
}


// Assembly code:
// 00550ce0: PUSH EBX
//   Label: engine_pod.cpp_findFilesByExtension_FUN_00550ce0
// 00550ce1: PUSH ESI
// 00550ce2: PUSH EDI
// 00550ce3: PUSH EBP
// 00550ce4: SUB ESP,0x40
// 00550ce7: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 00550ceb: MOV EDI,ESI
// 00550ced: SUB ECX,ECX
// 00550cef: DEC ECX
// 00550cf0: XOR EAX,EAX
// 00550cf2: SCASB.REPNE ES:EDI
// 00550cf4: NOT ECX
// 00550cf6: DEC ECX
// 00550cf7: XOR EDX,EDX
// 00550cf9: XOR EBX,EBX
// 00550cfb: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00550cff: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00550d03: TEST ECX,ECX
// 00550d05: JLE 0x00550d30
//   XREF to: 00550d30 (CONDITIONAL_JUMP)
// 00550d07: XOR EAX,EAX
//   Label: LAB_00550d07
// 00550d09: MOV AL,byte ptr [ESI]
// 00550d0b: PUSH EAX
// 00550d0c: INC EBX
// 00550d0d: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00550d12: ADD ESP,0x4
// 00550d15: INC ESI
// 00550d16: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 00550d1a: MOV byte ptr [ESP + EBX*0x1 + 0xb],AL
//   XREF to: Stack[-0x44] (DATA)
// 00550d1e: CMP EBX,ECX
// 00550d20: JL 0x00550d07
//   XREF to: 00550d07 (CONDITIONAL_JUMP)
// 00550d22: LEA EAX,[EAX]
// 00550d28: LEA EDX,[EDX]
// 00550d2e: MOV EAX,EAX
// 00550d30: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00550d30
//   XREF to: Stack[-0x24] (READ)
// 00550d34: XOR DL,DL
// 00550d36: MOV byte ptr [ESP + EAX*0x1 + 0xc],DL
// 00550d3a: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 00550d3e: XOR EBX,EBX
// 00550d40: MOV ESI,dword ptr [EAX]
// 00550d42: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00550d46: TEST ESI,ESI
// 00550d48: JLE 0x00550dbb
//   XREF to: 00550dbb (CONDITIONAL_JUMP)
// 00550d4a: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x14] (READ)
// 00550d4e: DEC EAX
// 00550d4f: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 00550d53: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00550d57: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00550d57
//   XREF to: Stack[-0x34] (READ)
// 00550d5b: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00550d5f: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x14] (READ)
// 00550d63: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x14] (READ)
// 00550d67: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00550d6b: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 00550d6f: IMUL EAX,EDI
// 00550d72: XOR EBX,EBX
// 00550d74: MOV EBP,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0xc] (READ)
// 00550d78: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00550d7c: ADD EAX,EBP
// 00550d7e: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00550d82: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00550d86: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00550d86
//   XREF to: Stack[0x4] (READ)
// 00550d8a: ADD EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 00550d8e: MOV EAX,dword ptr [EAX + 0x4]
// 00550d91: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 00550d95: CMP ECX,dword ptr [EAX + 0x410]
// 00550d9b: JL 0x00550dc7
//   XREF to: 00550dc7 (CONDITIONAL_JUMP)
// 00550d9d: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 00550da1: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 00550da5: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 00550da9: ADD EDI,0x4
// 00550dac: INC EBP
// 00550dad: MOV EDX,dword ptr [ECX]
// 00550daf: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00550db3: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 00550db7: CMP EBP,EDX
// 00550db9: JL 0x00550d57
//   XREF to: 00550d57 (CONDITIONAL_JUMP)
// 00550dbb: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_00550dbb
//   XREF to: Stack[-0x14] (READ)
// 00550dbf: ADD ESP,0x40
// 00550dc2: POP EBP
// 00550dc3: POP EDI
// 00550dc4: POP ESI
// 00550dc5: POP EBX
// 00550dc6: RET
// 00550dc7: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_00550dc7
//   XREF to: Stack[-0x20] (READ)
// 00550dcb: MOV EAX,dword ptr [EAX + 0x414]
// 00550dd1: ADD EAX,ESI
// 00550dd3: MOV EBP,dword ptr [EAX]
// 00550dd5: MOV EDI,EBP
// 00550dd7: SUB ECX,ECX
// 00550dd9: DEC ECX
// 00550dda: XOR EAX,EAX
// 00550ddc: SCASB.REPNE ES:EDI
// 00550dde: NOT ECX
// 00550de0: DEC ECX
// 00550de1: SUB ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 00550de5: MOV EDI,ESP
// 00550de7: LEA ESI,[ECX + EBP*0x1]
// 00550dea: PUSH EDI
// 00550deb: MOV AL,byte ptr [ESI]
//   Label: LAB_00550deb
// 00550ded: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x50] (DATA)
// 00550def: CMP AL,0x0
// 00550df1: JZ 0x00550e03
//   XREF to: 00550e03 (CONDITIONAL_JUMP)
// 00550df3: MOV AL,byte ptr [ESI + 0x1]
// 00550df6: ADD ESI,0x2
// 00550df9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x4f] (WRITE)
// 00550dfc: ADD EDI,0x2
// 00550dff: CMP AL,0x0
// 00550e01: JNZ 0x00550deb
//   XREF to: 00550deb (CONDITIONAL_JUMP)
// 00550e03: POP EDI
//   Label: LAB_00550e03
// 00550e04: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x44] (DATA)
// 00550e08: PUSH EAX
// 00550e09: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x50] (DATA)
// 00550e0d: PUSH EAX
// 00550e0e: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00550e13: ADD ESP,0x8
// 00550e16: TEST EAX,EAX
// 00550e18: JNZ 0x00550e72
//   XREF to: 00550e72 (CONDITIONAL_JUMP)
// 00550e1a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 00550e1e: XOR EBX,EBX
// 00550e20: TEST EAX,EAX
// 00550e22: JLE 0x00550e39
//   XREF to: 00550e39 (CONDITIONAL_JUMP)
// 00550e24: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 00550e28: PUSH EBP
//   Label: LAB_00550e28
// 00550e29: MOV ECX,dword ptr [ESI + 0x4]
// 00550e2c: PUSH ECX
// 00550e2d: CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   XREF to: 00550140 (UNCONDITIONAL_CALL)
// 00550e32: ADD ESP,0x8
// 00550e35: TEST EAX,EAX
// 00550e37: JL 0x00550e8b
//   XREF to: 00550e8b (CONDITIONAL_JUMP)
// 00550e39: CMP EBX,dword ptr [ESP + 0x18]
//   Label: LAB_00550e39
//   XREF to: Stack[-0x38] (READ)
// 00550e3d: JNZ 0x00550e72
//   XREF to: 00550e72 (CONDITIONAL_JUMP)
// 00550e3f: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 00550e43: PUSH EDI
// 00550e44: PUSH EBP
// 00550e45: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 00550e49: PUSH EBP
// 00550e4a: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 00550e4f: ADD ESP,0xc
// 00550e52: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 00550e56: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 00550e5a: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x10] (READ)
// 00550e5e: LEA EDX,[EAX + EBP*0x1]
// 00550e61: INC ECX
// 00550e62: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00550e66: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00550e6a: CMP ECX,EBX
// 00550e6c: JGE 0x00550dbb
//   XREF to: 00550dbb (CONDITIONAL_JUMP)
// 00550e72: MOV EDI,dword ptr [ESP + 0x38]
//   Label: LAB_00550e72
//   XREF to: Stack[-0x18] (READ)
// 00550e76: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 00550e7a: INC EDI
// 00550e7b: ADD ESI,0x14
// 00550e7e: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00550e82: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00550e86: JMP 0x00550d86
//   XREF to: 00550d86 (UNCONDITIONAL_JUMP)
// 00550e8b: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00550e8b
//   XREF to: Stack[-0x38] (READ)
// 00550e8f: INC EBX
// 00550e90: ADD ESI,0x4
// 00550e93: CMP EBX,EDX
// 00550e95: JL 0x00550e28
//   XREF to: 00550e28 (CONDITIONAL_JUMP)
// 00550e97: JMP 0x00550e39
//   XREF to: 00550e39 (UNCONDITIONAL_JUMP)
