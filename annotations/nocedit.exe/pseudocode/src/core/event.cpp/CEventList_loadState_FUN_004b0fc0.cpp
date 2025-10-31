// Name: core_event.cpp_CEventList_loadState_FUN_004b0fc0
// Address: 004b0fc0
// Address Range: [[004b0fc0, 004b1377]]
// Convention: unknown
// Signature: undefined core_event.cpp_CEventList_loadState_FUN_004b0fc0()
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1a26 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00625d43
//   TerminatedCString s_core_event_cpp_00625d47
//   TerminatedCString s_CEventList_loadState_fil_00625d59
//   TerminatedCString s_d_00625dbc
//   TerminatedCString s_anon_00625dc0
//   TerminatedCString s_d_00625dc7
//   TerminatedCString s_anon_00625dcb
//   TerminatedCString s_d_00625dd2
//   TerminatedCString s_anon_00625dd6
//   TerminatedCString s_d_00625ddd
//   TerminatedCString s_f_00625de1
//   TerminatedCString s_d_00625dec
//   TerminatedCString s_d_00625df0
//   TerminatedCString s_d_00625dfb
//   TerminatedCString s_anon_00625dff
//   TerminatedCString s_d_00625e12
//   TerminatedCString s_anon_00625e16
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_event.cpp_FUN_004aaa70
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_CEventList_loadState(undefined4 param_1, undefined4 param_2)
    */

int core_event_cpp_CEventList_loadState_FUN_004b0fc0(void)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  FILE *in_stack_00000008;
  int iStack00000014;
  int local_14;
  
  core_event_cpp_FUN_004aaa70();
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee4,0xff,in_stack_00000008);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (5 < local_14) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xc2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::loadState - file version %d is newer than .EXE, which can only handle up to version %d");
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef0,0xff,in_stack_00000008);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < *in_stack_00000004) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n");
    } while (iVar1 < *in_stack_00000004);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef8,0xff,in_stack_00000008);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < in_stack_00000004[0x321]) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n");
    } while (iVar1 < in_stack_00000004[0x321]);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff00,0xff,in_stack_00000008);
  iVar2 = 0;
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < in_stack_00000004[0x963]) {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n");
    } while (iVar2 < in_stack_00000004[0x963]);
  }
  if (1 < (int)in_stack_00000008) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,in_stack_00000008);
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
    iVar1 = in_stack_00000004[0xc84];
    iStack00000014 = 0;
    if (0 < iVar1) {
      do {
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%f, %[^\n]\n");
        iStack00000014 = iStack00000014 + 1;
      } while (iStack00000014 < in_stack_00000004[0xc84]);
    }
  }
  if (2 < (int)in_stack_00000008) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,in_stack_00000008);
    iVar2 = 0;
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
    iVar1 = in_stack_00000004[0xcdf];
    if (0 < iVar1) {
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d, %[^\n]\n");
        iVar2 = iVar2 + 1;
        iVar1 = in_stack_00000004[0xcdf];
      } while (iVar2 < iVar1);
    }
  }
  if (3 < (int)in_stack_00000008) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,in_stack_00000008);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
    if (0 < in_stack_00000004[0xd3a]) {
      do {
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"\"%[^\"]\" , \"%[^\"]\"\n");
        iVar2 = iVar2 + 1;
      } while (iVar2 < in_stack_00000004[0xd3a]);
    }
  }
  if (4 < (int)in_stack_00000008) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff08,0xff,in_stack_00000008);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
    if (0 < in_stack_00000004[0x642]) {
      do {
        iVar2 = iVar2 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%[^\n]\n");
      } while (iVar2 < in_stack_00000004[0x642]);
      return in_stack_00000004[0x642];
    }
  }
  return iVar1;
}


// Assembly code:
// 004b0fc0: PUSH EBX
//   Label: core_event.cpp_CEventList_loadState_FUN_004b0fc0
// 004b0fc1: PUSH ESI
// 004b0fc2: PUSH EDI
// 004b0fc3: PUSH EBP
// 004b0fc4: SUB ESP,0x110
// 004b0fca: MOV EBX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x4] (READ)
// 004b0fd1: MOV ESI,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x8] (READ)
// 004b0fd8: PUSH EBX
// 004b0fd9: CALL core_event.cpp_FUN_004aaa70
//   XREF to: 004aaa70 (UNCONDITIONAL_CALL)
// 004b0fde: ADD ESP,0x4
// 004b0fe1: PUSH ESI
// 004b0fe2: PUSH 0xff
// 004b0fe7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x120] (DATA)
// 004b0feb: PUSH EAX
// 004b0fec: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b0ff1: ADD ESP,0xc
// 004b0ff4: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x20] (DATA)
// 004b0ffb: PUSH EAX
// 004b0ffc: PUSH 0x625d43
//   XREF to: 00625d43 (DATA)
// 004b1001: PUSH ESI
// 004b1002: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b1007: ADD ESP,0xc
// 004b100a: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x20] (READ)
// 004b1011: CMP EDX,0x5
// 004b1014: JG 0x004b12eb
//   XREF to: 004b12eb (CONDITIONAL_JUMP)
// 004b101a: PUSH ESI
//   Label: LAB_004b101a
// 004b101b: PUSH 0xff
// 004b1020: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x120] (DATA)
// 004b1024: PUSH EAX
// 004b1025: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b102a: ADD ESP,0xc
// 004b102d: PUSH EBX
// 004b102e: PUSH 0x625dbc
//   XREF to: 00625dbc (DATA)
// 004b1033: PUSH ESI
// 004b1034: XOR EBP,EBP
// 004b1036: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b103b: MOV EAX,dword ptr [EBX]
// 004b103d: ADD ESP,0xc
// 004b1040: TEST EAX,EAX
// 004b1042: JLE 0x004b1060
//   XREF to: 004b1060 (CONDITIONAL_JUMP)
// 004b1044: LEA EDI,[EBX + 0x4]
// 004b1047: PUSH EDI
//   Label: LAB_004b1047
// 004b1048: PUSH 0x625dc0
//   XREF to: 00625dc0 (DATA)
// 004b104d: PUSH ESI
// 004b104e: INC EBP
// 004b104f: ADD EDI,0x20
// 004b1052: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b1057: MOV EDX,dword ptr [EBX]
// 004b1059: ADD ESP,0xc
// 004b105c: CMP EBP,EDX
// 004b105e: JL 0x004b1047
//   XREF to: 004b1047 (CONDITIONAL_JUMP)
// 004b1060: PUSH ESI
//   Label: LAB_004b1060
// 004b1061: PUSH 0xff
// 004b1066: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x120] (DATA)
// 004b106a: PUSH EDI
// 004b106b: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b1070: ADD ESP,0xc
// 004b1073: LEA EDI,[EBX + 0xc84]
// 004b1079: PUSH EDI
// 004b107a: PUSH 0x625dc7
//   XREF to: 00625dc7 (DATA)
// 004b107f: PUSH ESI
// 004b1080: XOR EBP,EBP
// 004b1082: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b1087: MOV ECX,dword ptr [EBX + 0xc84]
// 004b108d: ADD ESP,0xc
// 004b1090: TEST ECX,ECX
// 004b1092: JLE 0x004b10c0
//   XREF to: 004b10c0 (CONDITIONAL_JUMP)
// 004b1094: LEA EDI,[EBX + 0xc88]
// 004b109a: PUSH EDI
//   Label: LAB_004b109a
// 004b109b: PUSH 0x625dcb
//   XREF to: 00625dcb (DATA)
// 004b10a0: PUSH ESI
// 004b10a1: INC EBP
// 004b10a2: ADD EDI,0x20
// 004b10a5: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b10aa: MOV EAX,dword ptr [EBX + 0xc84]
// 004b10b0: ADD ESP,0xc
// 004b10b3: CMP EBP,EAX
// 004b10b5: JL 0x004b109a
//   XREF to: 004b109a (CONDITIONAL_JUMP)
// 004b10b7: LEA EAX,[EAX]
// 004b10bd: LEA EDX,[EDX]
// 004b10c0: PUSH ESI
//   Label: LAB_004b10c0
// 004b10c1: PUSH 0xff
// 004b10c6: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x120] (DATA)
// 004b10ca: PUSH EDI
// 004b10cb: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b10d0: ADD ESP,0xc
// 004b10d3: LEA EDI,[EBX + 0x258c]
// 004b10d9: PUSH EDI
// 004b10da: PUSH 0x625dd2
//   XREF to: 00625dd2 (DATA)
// 004b10df: PUSH ESI
// 004b10e0: XOR EBP,EBP
// 004b10e2: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b10e7: MOV EDX,dword ptr [EBX + 0x258c]
// 004b10ed: ADD ESP,0xc
// 004b10f0: TEST EDX,EDX
// 004b10f2: JLE 0x004b1120
//   XREF to: 004b1120 (CONDITIONAL_JUMP)
// 004b10f4: LEA EDI,[EBX + 0x2590]
// 004b10fa: PUSH EDI
//   Label: LAB_004b10fa
// 004b10fb: PUSH 0x625dd6
//   XREF to: 00625dd6 (DATA)
// 004b1100: PUSH ESI
// 004b1101: INC EBP
// 004b1102: ADD EDI,0x20
// 004b1105: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b110a: MOV ECX,dword ptr [EBX + 0x258c]
// 004b1110: ADD ESP,0xc
// 004b1113: CMP EBP,ECX
// 004b1115: JL 0x004b10fa
//   XREF to: 004b10fa (CONDITIONAL_JUMP)
// 004b1117: LEA EAX,[EAX]
// 004b111d: LEA EDX,[EDX]
// 004b1120: CMP dword ptr [ESP + 0x100],0x2
//   Label: LAB_004b1120
//   XREF to: Stack[-0x20] (READ)
// 004b1128: JL 0x004b11b0
//   XREF to: 004b11b0 (CONDITIONAL_JUMP)
// 004b112e: PUSH ESI
// 004b112f: PUSH 0xff
// 004b1134: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x120] (DATA)
// 004b1138: PUSH EDI
// 004b1139: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b113e: ADD ESP,0xc
// 004b1141: LEA EDI,[EBX + 0x3210]
// 004b1147: PUSH EDI
// 004b1148: PUSH 0x625ddd
//   XREF to: 00625ddd (DATA)
// 004b114d: PUSH ESI
// 004b114e: XOR EBP,EBP
// 004b1150: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b1155: ADD ESP,0xc
// 004b1158: MOV EAX,dword ptr [EBX + 0x3210]
// 004b115e: MOV dword ptr [ESP + 0x10c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004b1165: TEST EAX,EAX
// 004b1167: JLE 0x004b11b0
//   XREF to: 004b11b0 (CONDITIONAL_JUMP)
// 004b1169: LEA EDI,[EBX + 0x3214]
// 004b116f: LEA EBP,[EBX + 0x3354]
// 004b1175: PUSH EDI
//   Label: LAB_004b1175
// 004b1176: PUSH EBP
// 004b1177: PUSH 0x625de1
//   XREF to: 00625de1 (DATA)
// 004b117c: PUSH ESI
// 004b117d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b1182: ADD ESP,0x10
// 004b1185: ADD EDI,0x20
// 004b1188: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x14] (READ)
// 004b118f: ADD EBP,0x4
// 004b1192: INC EDX
// 004b1193: MOV ECX,dword ptr [EBX + 0x3210]
// 004b1199: MOV dword ptr [ESP + 0x10c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004b11a0: CMP EDX,ECX
// 004b11a2: JL 0x004b1175
//   XREF to: 004b1175 (CONDITIONAL_JUMP)
// 004b11a4: LEA EAX,[EAX]
// 004b11aa: LEA EDX,[EDX]
// 004b11b0: CMP dword ptr [ESP + 0x100],0x3
//   Label: LAB_004b11b0
//   XREF to: Stack[-0x20] (READ)
// 004b11b8: JL 0x004b1240
//   XREF to: 004b1240 (CONDITIONAL_JUMP)
// 004b11be: PUSH ESI
// 004b11bf: PUSH 0xff
// 004b11c4: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x120] (DATA)
// 004b11c8: PUSH EDI
// 004b11c9: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b11ce: ADD ESP,0xc
// 004b11d1: LEA EDI,[EBX + 0x337c]
// 004b11d7: PUSH EDI
// 004b11d8: PUSH 0x625dec
//   XREF to: 00625dec (DATA)
// 004b11dd: PUSH ESI
// 004b11de: XOR EBP,EBP
// 004b11e0: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b11e5: MOV EAX,dword ptr [EBX + 0x337c]
// 004b11eb: ADD ESP,0xc
// 004b11ee: TEST EAX,EAX
// 004b11f0: JLE 0x004b1240
//   XREF to: 004b1240 (CONDITIONAL_JUMP)
// 004b11f2: LEA EAX,[EBX + 0x3380]
// 004b11f8: LEA EDI,[EBX + 0x34c0]
// 004b11fe: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b1205: MOV EDX,dword ptr [ESP + 0x108]
//   Label: LAB_004b1205
//   XREF to: Stack[-0x18] (READ)
// 004b120c: PUSH EDX
// 004b120d: PUSH EDI
// 004b120e: PUSH 0x625df0
//   XREF to: 00625df0 (DATA)
// 004b1213: PUSH ESI
// 004b1214: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b1219: ADD ESP,0x10
// 004b121c: INC EBP
// 004b121d: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x18] (READ)
// 004b1224: ADD EDI,0x4
// 004b1227: ADD ECX,0x20
// 004b122a: MOV EAX,dword ptr [EBX + 0x337c]
// 004b1230: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004b1237: CMP EBP,EAX
// 004b1239: JL 0x004b1205
//   XREF to: 004b1205 (CONDITIONAL_JUMP)
// 004b123b: LEA EAX,[EAX]
// 004b123e: MOV ECX,ECX
// 004b1240: CMP dword ptr [ESP + 0x100],0x4
//   Label: LAB_004b1240
//   XREF to: Stack[-0x20] (READ)
// 004b1248: JL 0x004b12d0
//   XREF to: 004b12d0 (CONDITIONAL_JUMP)
// 004b124e: PUSH ESI
// 004b124f: PUSH 0xff
// 004b1254: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x120] (DATA)
// 004b1258: PUSH EDI
// 004b1259: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b125e: ADD ESP,0xc
// 004b1261: LEA EDI,[EBX + 0x34e8]
// 004b1267: PUSH EDI
// 004b1268: PUSH 0x625dfb
//   XREF to: 00625dfb (DATA)
// 004b126d: PUSH ESI
// 004b126e: XOR EBP,EBP
// 004b1270: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b1275: MOV ECX,dword ptr [EBX + 0x34e8]
// 004b127b: ADD ESP,0xc
// 004b127e: TEST ECX,ECX
// 004b1280: JLE 0x004b12d0
//   XREF to: 004b12d0 (CONDITIONAL_JUMP)
// 004b1282: LEA EAX,[EBX + 0x37da]
// 004b1288: LEA EDI,[EBX + 0x34ec]
// 004b128e: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b1295: MOV EAX,dword ptr [ESP + 0x104]
//   Label: LAB_004b1295
//   XREF to: Stack[-0x1c] (READ)
// 004b129c: PUSH EAX
// 004b129d: PUSH EDI
// 004b129e: PUSH 0x625dff
//   XREF to: 00625dff (DATA)
// 004b12a3: PUSH ESI
// 004b12a4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b12a9: ADD ESP,0x10
// 004b12ac: INC EBP
// 004b12ad: MOV EDX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x1c] (READ)
// 004b12b4: ADD EDI,0x1e
// 004b12b7: ADD EDX,0x1e
// 004b12ba: MOV ECX,dword ptr [EBX + 0x34e8]
// 004b12c0: MOV dword ptr [ESP + 0x104],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b12c7: CMP EBP,ECX
// 004b12c9: JL 0x004b1295
//   XREF to: 004b1295 (CONDITIONAL_JUMP)
// 004b12cb: LEA EAX,[EAX]
// 004b12ce: MOV ECX,ECX
// 004b12d0: CMP dword ptr [ESP + 0x100],0x5
//   Label: LAB_004b12d0
//   XREF to: Stack[-0x20] (READ)
// 004b12d8: JGE 0x004b1316
//   XREF to: 004b1316 (CONDITIONAL_JUMP)
// 004b12da: LEA EAX,[EAX]
// 004b12e0: ADD ESP,0x110
//   Label: LAB_004b12e0
// 004b12e6: POP EBP
// 004b12e7: POP EDI
// 004b12e8: POP ESI
// 004b12e9: POP EBX
// 004b12ea: RET
// 004b12eb: PUSH 0x5
//   Label: LAB_004b12eb
// 004b12ed: PUSH EDX
// 004b12ee: MOV ECX,0x625d47
//   XREF to: 00625d47 (PARAM)
// 004b12f3: MOV EDI,0xc2c
// 004b12f8: PUSH 0x625d59
//   XREF to: 00625d59 (DATA)
// 004b12fd: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b1303: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b1309: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b130e: ADD ESP,0xc
// 004b1311: JMP 0x004b101a
//   XREF to: 004b101a (UNCONDITIONAL_JUMP)
// 004b1316: PUSH ESI
//   Label: LAB_004b1316
// 004b1317: PUSH 0xff
// 004b131c: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x120] (DATA)
// 004b1320: PUSH EDI
// 004b1321: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004b1326: ADD ESP,0xc
// 004b1329: LEA EDI,[EBX + 0x1908]
// 004b132f: PUSH EDI
// 004b1330: PUSH 0x625e12
//   XREF to: 00625e12 (DATA)
// 004b1335: PUSH ESI
// 004b1336: XOR EDI,EDI
// 004b1338: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b133d: MOV EBP,dword ptr [EBX + 0x1908]
// 004b1343: ADD ESP,0xc
// 004b1346: TEST EBP,EBP
// 004b1348: JLE 0x004b12e0
//   XREF to: 004b12e0 (CONDITIONAL_JUMP)
// 004b134a: LEA EBP,[EBX + 0x190c]
// 004b1350: PUSH EBP
//   Label: LAB_004b1350
// 004b1351: PUSH 0x625e16
//   XREF to: 00625e16 (DATA)
// 004b1356: PUSH ESI
// 004b1357: INC EDI
// 004b1358: ADD EBP,0x20
// 004b135b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b1360: MOV EAX,dword ptr [EBX + 0x1908]
// 004b1366: ADD ESP,0xc
// 004b1369: CMP EDI,EAX
// 004b136b: JL 0x004b1350
//   XREF to: 004b1350 (CONDITIONAL_JUMP)
// 004b136d: ADD ESP,0x110
// 004b1373: POP EBP
// 004b1374: POP EDI
// 004b1375: POP ESI
// 004b1376: POP EBX
// 004b1377: RET
