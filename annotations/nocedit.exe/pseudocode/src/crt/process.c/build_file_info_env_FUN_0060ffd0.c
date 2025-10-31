// Name: crt_process.c_build_file_info_env_FUN_0060ffd0
// Address: 0060ffd0
// Address Range: [[0060ffd0, 006101ed]]
// Convention: __cdecl
// Signature: undefined crt_process.c_build_file_info_env_FUN_0060ffd0()
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f3d0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_C_FILE_INFO_00659790
//   undefined4 s__FILE_INFO=_00659791
//   undefined4 s_NFO=_00659798
//   undefined4 s__0065979c
//   char g_ColonChar = :
//   undefined1 DAT_006597a1
//   undefined1 DAT_006597a2
//   undefined1 DAT_006597a3
//   char g_AsteriskChar = *
//   undefined1 DAT_006597a5
//   undefined1 DAT_006597a6
//   undefined1 DAT_006597a7
//   uint g_MaxHandleCount = 0x14
// Function calls:
//   crt_io.c_get_handle_FUN_006109f0
//   crt_io.c_getFileTypeFlags_FUN_006088b0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_stdio.c_IntegerToString_FUN_00607d18

#include "nocturne.h"

char * __cdecl crt_process_c_build_file_info_env_FUN_0060ffd0(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint file_handle_index;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_40 [16];
  char acStack_30 [4];
  char acStack_2c [8];
  undefined4 uStack_24;
  int iStack_20;
  
  bVar8 = 0;
  uVar3 = 0xffffffff;
  pcVar2 = "C_FILE_INFO=";
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)crt_memory_c_malloc_FUN_00601bb0(g_MaxHandleCount * 0x1b + ~uVar3);
  uVar3 = g_MaxHandleCount;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    file_handle_index = 0;
    pcVar6 = pcVar2 + (uint)bVar8 * -8 + 4;
    *(undefined4 *)pcVar2 = "C_FILE_INFO="._0_4_;
    *(undefined4 *)pcVar6 = *(undefined4 *)("C_FILE_INFO=" + (uint)bVar8 * -8 + 4);
    *(undefined4 *)(pcVar6 + (uint)bVar8 * -8 + 4) =
         *(undefined4 *)("C_FILE_INFO=" + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    (pcVar6 + (uint)bVar8 * -8 + 4)[(uint)bVar8 * -8 + 4] =
         ("C_FILE_INFO=" + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8)
         [((uint)bVar8 * -2 + 1) * 4];
    if (uVar3 != 0) {
      do {
        uVar3 = crt_io_c_getFileTypeFlags_FUN_006088b0(file_handle_index);
        if ((uVar3 & 0x4000) != 0) {
          uStack_24 = crt_io_c_get_handle_FUN_006109f0(file_handle_index);
          crt_stdio_c_IntegerToString_FUN_00607d18(file_handle_index,acStack_30,0x10);
          pcVar6 = acStack_2c;
          iVar4 = -1;
          pcVar5 = &stack0xffffffb8;
          do {
            pcVar7 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar6;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = &g_ColonChar;
          iVar4 = -1;
          pcVar6 = &stack0xffffffb8;
          do {
            pcVar7 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          crt_stdio_c_IntegerToString_FUN_00607d18(iStack_20,acStack_2c,0x10);
          pcVar6 = acStack_2c + 4;
          iVar4 = -1;
          pcVar5 = &stack0xffffffbc;
          do {
            pcVar7 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar6;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = &g_ColonChar;
          iVar4 = -1;
          pcVar6 = &stack0xffffffbc;
          do {
            pcVar7 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          crt_stdio_c_IntegerToString_FUN_00607d18(uVar3,acStack_2c + 4,0x10);
          pcVar6 = (char *)&uStack_24;
          iVar4 = -1;
          pcVar5 = acStack_40;
          do {
            pcVar7 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar6;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = &g_AsteriskChar;
          iVar4 = -1;
          pcVar6 = acStack_40;
          do {
            pcVar7 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
          pcVar5 = acStack_40;
          iVar4 = -1;
          pcVar6 = pcVar2;
          do {
            pcVar7 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar7;
          } while (cVar1 != '\0');
          pcVar7 = pcVar7 + -1;
          do {
            cVar1 = *pcVar5;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar5[1];
            pcVar5 = pcVar5 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
        }
        file_handle_index = file_handle_index + 1;
      } while (file_handle_index < g_MaxHandleCount);
    }
  }
  return pcVar2;
}


// Assembly code:
// 0060ffd0: PUSH EBX
//   Label: crt_process.c_build_file_info_env_FUN_0060ffd0
// 0060ffd1: PUSH ESI
// 0060ffd2: PUSH EDI
// 0060ffd3: PUSH ES
// 0060ffd4: PUSH EBP
// 0060ffd5: SUB ESP,0x30
// 0060ffd8: MOV ESI,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 0060ffde: LEA EBX,[ESI*0x8 + 0x0]
// 0060ffe5: SUB EBX,ESI
// 0060ffe7: SHL EBX,0x2
// 0060ffea: MOV EDI,0x659790
//   XREF to: 00659790 (DATA)
// 0060ffef: SUB EBX,ESI
// 0060fff1: PUSH ES
// 0060fff2: MOV AX,DS
// 0060fff4: MOV ES,AX
// 0060fff6: SUB ECX,ECX
// 0060fff8: DEC ECX
// 0060fff9: XOR EAX,EAX
// 0060fffb: SCASB.REPNE ES:EDI
//   XREF to: 00659790 (READ)
//   XREF to: 00659791 (READ)
// 0060fffd: NOT ECX
// 0060ffff: DEC ECX
// 00610000: POP ES
// 00610001: ADD EBX,ECX
// 00610003: INC EBX
// 00610004: PUSH EBX
// 00610005: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0061000a: ADD ESP,0x4
// 0061000d: MOV EDI,EAX
// 0061000f: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00610013: TEST EAX,EAX
// 00610015: JNZ 0x0061001e
//   XREF to: 0061001e (CONDITIONAL_JUMP)
// 00610017: XOR ESI,ESI
// 00610019: JMP 0x006101e3
//   XREF to: 006101e3 (UNCONDITIONAL_JUMP)
// 0061001e: MOV AX,DS
//   Label: LAB_0061001e
// 00610020: MOV ES,AX
// 00610022: MOV ESI,0x659790
//   XREF to: 00659790 (DATA)
// 00610027: XOR EBX,EBX
// 00610029: MOV EDX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 0061002f: MOVSD ES:EDI,ESI
//   XREF to: 00659790 (READ)
// 00610030: MOVSD ES:EDI,ESI
//   XREF to: 00659794 (READ)
// 00610031: MOVSD ES:EDI,ESI
//   XREF to: 00659798 (READ)
// 00610032: MOVSB ES:EDI,ESI
//   XREF to: 0065979c (READ)
// 00610033: TEST EDX,EDX
// 00610035: JBE 0x006101df
//   XREF to: 006101df (CONDITIONAL_JUMP)
// 0061003b: PUSH EBX
//   Label: LAB_0061003b
// 0061003c: CALL crt_io.c_getFileTypeFlags_FUN_006088b0
//   XREF to: 006088b0 (UNCONDITIONAL_CALL)
// 00610041: MOV EBP,EAX
// 00610043: ADD ESP,0x4
// 00610046: TEST EBP,0x4000
// 0061004c: JZ 0x006101d0
//   XREF to: 006101d0 (CONDITIONAL_JUMP)
// 00610052: PUSH EBX
// 00610053: CALL crt_io.c_get_handle_FUN_006109f0
//   XREF to: 006109f0 (UNCONDITIONAL_CALL)
// 00610058: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0061005c: ADD ESP,0x4
// 0061005f: PUSH 0x10
// 00610061: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 00610065: PUSH ESI
// 00610066: XOR AH,AH
// 00610068: PUSH EBX
// 00610069: MOV byte ptr [ESP + 0xc],AH
//   XREF to: Stack[-0x44] (WRITE)
// 0061006d: CALL crt_stdio.c_IntegerToString_FUN_00607d18
//   XREF to: 00607d18 (UNCONDITIONAL_CALL)
// 00610072: ADD ESP,0xc
// 00610075: MOV EDI,ESP
// 00610077: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 0061007b: PUSH ES
// 0061007c: PUSH DS
// 0061007d: POP ES
// 0061007e: PUSH EDI
// 0061007f: SUB ECX,ECX
// 00610081: DEC ECX
// 00610082: MOV AL,0x0
// 00610084: SCASB.REPNE ES:EDI
// 00610086: DEC EDI
// 00610087: MOV AL,byte ptr [ESI]
//   Label: LAB_00610087
//   XREF to: Stack[-0x28] (DATA)
// 00610089: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x44] (DATA)
// 0061008b: CMP AL,0x0
// 0061008d: JZ 0x0061009f
//   XREF to: 0061009f (CONDITIONAL_JUMP)
// 0061008f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x27] (READ)
// 00610092: ADD ESI,0x2
// 00610095: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x43] (WRITE)
// 00610098: ADD EDI,0x2
// 0061009b: CMP AL,0x0
// 0061009d: JNZ 0x00610087
//   XREF to: 00610087 (CONDITIONAL_JUMP)
// 0061009f: POP EDI
//   Label: LAB_0061009f
// 006100a0: POP ES
// 006100a1: MOV ESI,0x6597a0
//   XREF to: 006597a0 (DATA)
// 006100a6: MOV EDI,ESP
// 006100a8: PUSH ES
// 006100a9: PUSH DS
// 006100aa: POP ES
// 006100ab: PUSH EDI
// 006100ac: SUB ECX,ECX
// 006100ae: DEC ECX
// 006100af: MOV AL,0x0
// 006100b1: SCASB.REPNE ES:EDI
// 006100b3: DEC EDI
// 006100b4: MOV AL,byte ptr [ESI]
//   Label: LAB_006100b4
//   XREF to: 006597a0 (READ)
//   XREF to: 006597a2 (READ)
// 006100b6: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x44] (DATA)
// 006100b8: CMP AL,0x0
// 006100ba: JZ 0x006100cc
//   XREF to: 006100cc (CONDITIONAL_JUMP)
// 006100bc: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006597a1 (READ)
//   XREF to: 006597a3 (READ)
// 006100bf: ADD ESI,0x2
// 006100c2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x43] (WRITE)
// 006100c5: ADD EDI,0x2
// 006100c8: CMP AL,0x0
// 006100ca: JNZ 0x006100b4
//   XREF to: 006100b4 (CONDITIONAL_JUMP)
// 006100cc: POP EDI
//   Label: LAB_006100cc
// 006100cd: POP ES
// 006100ce: PUSH 0x10
// 006100d0: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 006100d4: PUSH ESI
// 006100d5: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 006100d9: PUSH ESI
// 006100da: CALL crt_stdio.c_IntegerToString_FUN_00607d18
//   XREF to: 00607d18 (UNCONDITIONAL_CALL)
// 006100df: ADD ESP,0xc
// 006100e2: MOV EDI,ESP
// 006100e4: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 006100e8: PUSH ES
// 006100e9: PUSH DS
// 006100ea: POP ES
// 006100eb: PUSH EDI
// 006100ec: SUB ECX,ECX
// 006100ee: DEC ECX
// 006100ef: MOV AL,0x0
// 006100f1: SCASB.REPNE ES:EDI
// 006100f3: DEC EDI
// 006100f4: MOV AL,byte ptr [ESI]
//   Label: LAB_006100f4
//   XREF to: Stack[-0x28] (DATA)
// 006100f6: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x44] (DATA)
// 006100f8: CMP AL,0x0
// 006100fa: JZ 0x0061010c
//   XREF to: 0061010c (CONDITIONAL_JUMP)
// 006100fc: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x27] (READ)
// 006100ff: ADD ESI,0x2
// 00610102: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x43] (WRITE)
// 00610105: ADD EDI,0x2
// 00610108: CMP AL,0x0
// 0061010a: JNZ 0x006100f4
//   XREF to: 006100f4 (CONDITIONAL_JUMP)
// 0061010c: POP EDI
//   Label: LAB_0061010c
// 0061010d: POP ES
// 0061010e: MOV ESI,0x6597a0
//   XREF to: 006597a0 (DATA)
// 00610113: MOV EDI,ESP
// 00610115: PUSH ES
// 00610116: PUSH DS
// 00610117: POP ES
// 00610118: PUSH EDI
// 00610119: SUB ECX,ECX
// 0061011b: DEC ECX
// 0061011c: MOV AL,0x0
// 0061011e: SCASB.REPNE ES:EDI
// 00610120: DEC EDI
// 00610121: MOV AL,byte ptr [ESI]
//   Label: LAB_00610121
//   XREF to: 006597a0 (READ)
//   XREF to: 006597a2 (READ)
// 00610123: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x44] (DATA)
// 00610125: CMP AL,0x0
// 00610127: JZ 0x00610139
//   XREF to: 00610139 (CONDITIONAL_JUMP)
// 00610129: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006597a1 (READ)
//   XREF to: 006597a3 (READ)
// 0061012c: ADD ESI,0x2
// 0061012f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x43] (WRITE)
// 00610132: ADD EDI,0x2
// 00610135: CMP AL,0x0
// 00610137: JNZ 0x00610121
//   XREF to: 00610121 (CONDITIONAL_JUMP)
// 00610139: POP EDI
//   Label: LAB_00610139
// 0061013a: POP ES
// 0061013b: PUSH 0x10
// 0061013d: LEA ESI,[ESP + 0x20]
//   XREF to: Stack[-0x28] (DATA)
// 00610141: PUSH ESI
// 00610142: PUSH EBP
// 00610143: CALL crt_stdio.c_IntegerToString_FUN_00607d18
//   XREF to: 00607d18 (UNCONDITIONAL_CALL)
// 00610148: ADD ESP,0xc
// 0061014b: MOV EDI,ESP
// 0061014d: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 00610151: PUSH ES
// 00610152: PUSH DS
// 00610153: POP ES
// 00610154: PUSH EDI
// 00610155: SUB ECX,ECX
// 00610157: DEC ECX
// 00610158: MOV AL,0x0
// 0061015a: SCASB.REPNE ES:EDI
// 0061015c: DEC EDI
// 0061015d: MOV AL,byte ptr [ESI]
//   Label: LAB_0061015d
//   XREF to: Stack[-0x28] (DATA)
// 0061015f: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x44] (DATA)
// 00610161: CMP AL,0x0
// 00610163: JZ 0x00610175
//   XREF to: 00610175 (CONDITIONAL_JUMP)
// 00610165: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x27] (READ)
// 00610168: ADD ESI,0x2
// 0061016b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x43] (WRITE)
// 0061016e: ADD EDI,0x2
// 00610171: CMP AL,0x0
// 00610173: JNZ 0x0061015d
//   XREF to: 0061015d (CONDITIONAL_JUMP)
// 00610175: POP EDI
//   Label: LAB_00610175
// 00610176: POP ES
// 00610177: MOV ESI,0x6597a4
//   XREF to: 006597a4 (DATA)
// 0061017c: MOV EDI,ESP
// 0061017e: PUSH ES
// 0061017f: PUSH DS
// 00610180: POP ES
// 00610181: PUSH EDI
// 00610182: SUB ECX,ECX
// 00610184: DEC ECX
// 00610185: MOV AL,0x0
// 00610187: SCASB.REPNE ES:EDI
// 00610189: DEC EDI
// 0061018a: MOV AL,byte ptr [ESI]
//   Label: LAB_0061018a
//   XREF to: 006597a4 (READ)
//   XREF to: 006597a6 (READ)
// 0061018c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x44] (DATA)
// 0061018e: CMP AL,0x0
// 00610190: JZ 0x006101a2
//   XREF to: 006101a2 (CONDITIONAL_JUMP)
// 00610192: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006597a5 (READ)
//   XREF to: 006597a7 (READ)
// 00610195: ADD ESI,0x2
// 00610198: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x43] (WRITE)
// 0061019b: ADD EDI,0x2
// 0061019e: CMP AL,0x0
// 006101a0: JNZ 0x0061018a
//   XREF to: 0061018a (CONDITIONAL_JUMP)
// 006101a2: POP EDI
//   Label: LAB_006101a2
// 006101a3: POP ES
// 006101a4: MOV ESI,ESP
// 006101a6: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x18] (READ)
// 006101aa: PUSH ES
// 006101ab: PUSH DS
// 006101ac: POP ES
// 006101ad: PUSH EDI
// 006101ae: SUB ECX,ECX
// 006101b0: DEC ECX
// 006101b1: MOV AL,0x0
// 006101b3: SCASB.REPNE ES:EDI
// 006101b5: DEC EDI
// 006101b6: MOV AL,byte ptr [ESI]
//   Label: LAB_006101b6
//   XREF to: Stack[-0x44] (DATA)
// 006101b8: MOV byte ptr [EDI],AL
// 006101ba: CMP AL,0x0
// 006101bc: JZ 0x006101ce
//   XREF to: 006101ce (CONDITIONAL_JUMP)
// 006101be: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x43] (READ)
// 006101c1: ADD ESI,0x2
// 006101c4: MOV byte ptr [EDI + 0x1],AL
// 006101c7: ADD EDI,0x2
// 006101ca: CMP AL,0x0
// 006101cc: JNZ 0x006101b6
//   XREF to: 006101b6 (CONDITIONAL_JUMP)
// 006101ce: POP EDI
//   Label: LAB_006101ce
// 006101cf: POP ES
// 006101d0: MOV ECX,dword ptr [0x00685214]
//   Label: LAB_006101d0
//   XREF to: 00685214 (READ)
// 006101d6: INC EBX
// 006101d7: CMP EBX,ECX
// 006101d9: JC 0x0061003b
//   XREF to: 0061003b (CONDITIONAL_JUMP)
// 006101df: MOV ESI,dword ptr [ESP + 0x2c]
//   Label: LAB_006101df
//   XREF to: Stack[-0x18] (READ)
// 006101e3: MOV EAX,ESI
//   Label: LAB_006101e3
// 006101e5: ADD ESP,0x30
// 006101e8: POP EBP
// 006101e9: POP ES
// 006101ea: POP EDI
// 006101eb: POP ESI
// 006101ec: POP EBX
// 006101ed: RET
