// Name: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
// Address: 00541ff0
// Address Range: [[00541ff0, 0054236f]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0()
// Cross-references:
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 (005405b0) at 00540645 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063d245
//   TerminatedCString s_removeChatOut_invalid_in_0063d259
//   double DOUBLE_0063db1d = 0.0000152587890625
//   double DOUBLE_0063db25 = 4
//   double DOUBLE_0063db2d = 30
//   double DOUBLE_0063db35 = 20
//   double DOUBLE_0063db3d = 2
//   double DOUBLE_0063db45 = 5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   undefined4 DAT_02f98ad0
//   undefined4 DAT_02f98ad4
//   undefined4 DAT_02f98ad4+1
//   undefined4 DAT_02f98ad4+2
//   undefined4 DAT_02f98ad8
//   undefined1 DAT_02f98adc
//   undefined1 DAT_02f98add
//   undefined4 DAT_02f98ae0
//   undefined4 DAT_02f98ae4
//   undefined1 DAT_02f98ae8
//   undefined1 DAT_02f98ae9
//   undefined1 DAT_02f98aea
//   undefined1 DAT_02f98aeb
//   undefined4 DAT_02f98be8
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_FUN_00541230
//   crt_string.c_memmove_FUN_005fe5e0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_removeChatOut(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  BADSPACEBASE *in_ESP;
  int *piVar5;
  char *pcVar6;
  int in_stack_00000004;
  float local_154;
  float local_150;
  float local_14c;
  char acStack_13f [259];
  int local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int iStack_14;
  
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar2 / 0x12;
  iVar3 = iVar2 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  local_34 = 0;
  g_LastPingTime = iVar2;
  if (0 < DAT_02f98ad0) {
    local_3c = in_stack_00000004 + 0x20;
    local_38 = &DAT_02f98ad4;
    do {
      local_28 = local_38;
      iStack_14 = g_CurrentGameTime - *local_38;
      local_150 = (float)iStack_14 * (float)DOUBLE_0063db1d;
      local_2c = 1;
      if (local_150 < 0.0) {
        local_150 = 0.0;
      }
      if ((float)DOUBLE_0063db2d < local_150) {
        local_150 = 30.0;
      }
      if ((local_150 < (float)DOUBLE_0063db35) &&
         (local_24 = 0, 0 < *(int *)(in_stack_00000004 + 0x1c))) {
        local_30 = local_38 + 5;
        local_1c = local_38;
        local_20 = in_stack_00000004;
        local_18 = local_3c + 0x1c;
        piVar4 = local_38;
        do {
          if ((char)local_1c[2] == '\0') {
            local_14c = *(float *)(local_20 + 0x48) * (float)DOUBLE_0063db25;
            local_2c = 0;
            if (local_14c < (float)DOUBLE_0063db3d) {
              local_14c = 2.0;
            }
            if ((float)DOUBLE_0063db45 < local_14c) {
              local_14c = 5.0;
            }
            iStack_14 = g_CurrentGameTime - piVar4[3];
            local_154 = (float)iStack_14 * (float)DOUBLE_0063db1d;
            if (local_154 < 0.0) {
              local_154 = 0.0;
            }
            if ((float)DOUBLE_0063db2d < local_154) {
              local_154 = 30.0;
            }
            if (local_14c < local_154) {
              pcVar6 = acStack_13f;
              piVar5 = local_30;
              do {
                iVar2 = *piVar5;
                *pcVar6 = (char)iVar2;
                if ((char)iVar2 == '\0') break;
                cVar1 = *(char *)((int)piVar5 + 1);
                piVar5 = (int *)((int)piVar5 + 2);
                pcVar6[1] = cVar1;
                pcVar6 = pcVar6 + 2;
              } while (cVar1 != '\0');
              core_netgame_cpp_CNetGame_FUN_00541230();
              piVar4[3] = g_CurrentGameTime;
            }
          }
          piVar4 = piVar4 + 1;
          local_1c = (int *)((int)local_1c + 1);
          local_20 = local_20 + 0x78;
          local_18 = local_18 + 0x78;
          local_24 = local_24 + 1;
        } while (local_24 < *(int *)(in_stack_00000004 + 0x1c));
      }
      iVar2 = local_34;
      if (local_2c == 0) {
        local_34 = local_34 + 1;
        local_38 = local_38 + 0x45;
      }
      else {
        if ((local_34 < 0) || (DAT_02f98ad0 <= local_34)) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x107;
          core_main_c_displayErrorAndQuit_FUN_00506f10("removeChatOut - invalid index");
        }
        DAT_02f98ad0 = DAT_02f98ad0 + -1;
        crt_string_c_memmove_FUN_005fe5e0
                  (&DAT_02f98ad4 + iVar2 * 0x45,&DAT_02f98ad4 + (iVar2 + 1) * 0x45,
                   (DAT_02f98ad0 - iVar2) * 0x114);
      }
    } while (local_34 < DAT_02f98ad0);
  }
  return;
}


// Assembly code:
// 00541ff0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
// 00541ff1: PUSH ESI
// 00541ff2: PUSH EDI
// 00541ff3: PUSH EBP
// 00541ff4: MOV EBP,ESP
// 00541ff6: SUB ESP,0x144
// 00541ffc: AND ESP,0xfffffff8
// 00541fff: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00542004: MOV EDX,EAX
// 00542006: MOV EBX,0x12
// 0054200b: SAR EDX,0x1f
// 0054200e: IDIV EBX
// 00542010: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00542016: MOV EDX,EAX
// 00542018: SUB EAX,ECX
// 0054201a: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00542020: TEST EAX,EAX
// 00542022: JL 0x00542232
//   XREF to: 00542232 (CONDITIONAL_JUMP)
// 00542028: CMP EAX,0x20000
// 0054202d: JLE 0x00542034
//   XREF to: 00542034 (CONDITIONAL_JUMP)
// 0054202f: MOV EAX,0x20000
// 00542034: MOV EBX,dword ptr [0x02f7c8b8]
//   Label: LAB_00542034
//   XREF to: 02f7c8b8 (READ)
// 0054203a: MOV EDI,dword ptr [0x02f98ad0]
//   XREF to: 02f98ad0 (READ)
// 00542040: XOR ESI,ESI
// 00542042: ADD EBX,EAX
// 00542044: MOV dword ptr [ESP + 0x120],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0054204b: MOV dword ptr [0x02f7c8b8],EBX
//   XREF to: 02f7c8b8 (WRITE)
// 00542051: TEST EDI,EDI
// 00542053: JLE 0x0054222b
//   XREF to: 0054222b (CONDITIONAL_JUMP)
// 00542059: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054205c: MOV ECX,0x2f98ad4
//   XREF to: 02f98ad4 (PARAM)
// 00542061: ADD EAX,0x20
// 00542064: MOV dword ptr [ESP + 0x11c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
//   XREF to: 02f98ad4 (DATA)
// 0054206b: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00542072: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_00542072
//   XREF to: Stack[-0x3c] (READ)
// 00542079: MOV EDX,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 0054207f: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
//   XREF to: 02f98ad4 (DATA)
// 00542086: MOV EAX,dword ptr [EAX]
//   XREF to: 02f98ad4 (READ)
// 00542088: SUB EDX,EAX
// 0054208a: MOV dword ptr [ESP + 0x140],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00542091: MOV EBX,0x1
// 00542096: FILD dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x18] (READ)
// 0054209d: FMUL double ptr [0x0063db1d]
//   XREF to: 0063db1d (READ)
// 005420a3: MOV dword ptr [ESP + 0x128],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 005420aa: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x154] (WRITE)
// 005420ae: FLDZ
// 005420b0: FCOMPP
// 005420b2: FNSTSW AX
// 005420b4: SAHF
// 005420b5: JA 0x00542239
//   XREF to: 00542239 (CONDITIONAL_JUMP)
// 005420bb: FLD float ptr [ESP + 0x4]
//   Label: LAB_005420bb
//   XREF to: Stack[-0x154] (READ)
// 005420bf: FCOMP double ptr [0x0063db2d]
//   XREF to: 0063db2d (READ)
// 005420c5: FNSTSW AX
// 005420c7: SAHF
// 005420c8: JBE 0x005420d2
//   XREF to: 005420d2 (CONDITIONAL_JUMP)
// 005420ca: MOV dword ptr [ESP + 0x4],0x41f00000
//   XREF to: Stack[-0x154] (WRITE)
// 005420d2: FLD float ptr [ESP + 0x4]
//   Label: LAB_005420d2
//   XREF to: Stack[-0x154] (READ)
// 005420d6: FCOMP double ptr [0x0063db35]
//   XREF to: 0063db35 (READ)
// 005420dc: FNSTSW AX
// 005420de: SAHF
// 005420df: JNC 0x0054219a
//   XREF to: 0054219a (CONDITIONAL_JUMP)
// 005420e5: XOR EAX,EAX
// 005420e7: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005420ee: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005420f1: CMP dword ptr [EAX + 0x1c],0x0
// 005420f5: JLE 0x0054219a
//   XREF to: 0054219a (CONDITIONAL_JUMP)
// 005420fb: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x2c] (READ)
// 00542102: ADD EAX,0x14
// 00542105: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x34] (WRITE)
//   XREF to: 02f98ae8 (DATA)
// 0054210c: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x2c] (READ)
// 00542113: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x20] (WRITE)
//   XREF to: 02f98ad4 (DATA)
// 0054211a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054211d: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00542124: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (READ)
// 0054212b: ADD EAX,0x1c
// 0054212e: MOV EBX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x2c] (READ)
//   XREF to: 02f98ad4 (PARAM)
// 00542135: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0054213c: MOV EAX,dword ptr [ESP + 0x138]
//   Label: LAB_0054213c
//   XREF to: Stack[-0x20] (READ)
// 00542143: CMP byte ptr [EAX + 0x8],0x0
//   XREF to: 02f98adc (READ)
//   XREF to: 02f98add (READ)
// 00542147: JZ 0x00542244
//   XREF to: 00542244 (CONDITIONAL_JUMP)
// 0054214d: MOV ECX,dword ptr [ESP + 0x138]
//   Label: LAB_0054214d
//   XREF to: Stack[-0x20] (READ)
// 00542154: MOV ESI,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x24] (READ)
// 0054215b: MOV EDI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x1c] (READ)
// 00542162: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 00542169: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054216c: ADD EBX,0x4
//   XREF to: 02f98ad8 (PARAM)
// 0054216f: INC ECX
// 00542170: ADD ESI,0x78
// 00542173: ADD EDI,0x78
// 00542176: INC EAX
// 00542177: MOV dword ptr [ESP + 0x138],ECX
//   XREF to: Stack[-0x20] (WRITE)
//   XREF to: 02f98ad5 (DATA)
//   XREF to: 02f98ad6 (DATA)
// 0054217e: MOV dword ptr [ESP + 0x134],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00542185: MOV dword ptr [ESP + 0x13c],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0054218c: MOV ECX,dword ptr [EDX + 0x1c]
// 0054218f: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00542196: CMP EAX,ECX
// 00542198: JL 0x0054213c
//   XREF to: 0054213c (CONDITIONAL_JUMP)
// 0054219a: CMP dword ptr [ESP + 0x128],0x0
//   Label: LAB_0054219a
//   XREF to: Stack[-0x30] (READ)
// 005421a2: JZ 0x00542348
//   XREF to: 00542348 (CONDITIONAL_JUMP)
// 005421a8: MOV EBX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x38] (READ)
// 005421af: TEST EBX,EBX
// 005421b1: JL 0x005421bb
//   XREF to: 005421bb (CONDITIONAL_JUMP)
// 005421b3: CMP EBX,dword ptr [0x02f98ad0]
//   XREF to: 02f98ad0 (READ)
// 005421b9: JL 0x005421dd
//   XREF to: 005421dd (CONDITIONAL_JUMP)
// 005421bb: MOV EAX,0x63d245
//   Label: LAB_005421bb
//   XREF to: 0063d245 (PARAM)
// 005421c0: MOV EDX,0x107
// 005421c5: PUSH 0x63d259
//   XREF to: 0063d259 (DATA)
// 005421ca: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005421cf: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005421d5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005421da: ADD ESP,0x4
// 005421dd: MOV ECX,dword ptr [0x02f98ad0]
//   Label: LAB_005421dd
//   XREF to: 02f98ad0 (READ)
// 005421e3: DEC ECX
// 005421e4: MOV EAX,ECX
// 005421e6: SUB EAX,EBX
// 005421e8: IMUL EAX,EAX,0x114
// 005421ee: PUSH EAX
// 005421ef: LEA EAX,[EBX + 0x1]
// 005421f2: IMUL EAX,EAX,0x114
// 005421f8: ADD EAX,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 005421fd: PUSH EAX
// 005421fe: IMUL EAX,EBX,0x114
// 00542204: ADD EAX,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 00542209: PUSH EAX
// 0054220a: MOV dword ptr [0x02f98ad0],ECX
//   XREF to: 02f98ad0 (WRITE)
// 00542210: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00542215: ADD ESP,0xc
// 00542218: MOV EAX,dword ptr [ESP + 0x120]
//   Label: LAB_00542218
//   XREF to: Stack[-0x38] (READ)
// 0054221f: CMP EAX,dword ptr [0x02f98ad0]
//   XREF to: 02f98ad0 (READ)
// 00542225: JL 0x00542072
//   XREF to: 00542072 (CONDITIONAL_JUMP)
// 0054222b: MOV ESP,EBP
//   Label: LAB_0054222b
// 0054222d: POP EBP
// 0054222e: POP EDI
// 0054222f: POP ESI
// 00542230: POP EBX
// 00542231: RET
// 00542232: XOR EAX,EAX
//   Label: LAB_00542232
// 00542234: JMP 0x00542034
//   XREF to: 00542034 (UNCONDITIONAL_JUMP)
// 00542239: XOR ESI,ESI
//   Label: LAB_00542239
// 0054223b: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x154] (WRITE)
// 0054223f: JMP 0x005420bb
//   XREF to: 005420bb (UNCONDITIONAL_JUMP)
// 00542244: MOV EAX,dword ptr [ESP + 0x134]
//   Label: LAB_00542244
//   XREF to: Stack[-0x24] (READ)
// 0054224b: XOR ESI,ESI
// 0054224d: FLD float ptr [EAX + 0x48]
// 00542250: FMUL double ptr [0x0063db25]
//   XREF to: 0063db25 (READ)
// 00542256: MOV dword ptr [ESP + 0x128],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 0054225d: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x150] (WRITE)
// 00542261: FCOMP double ptr [0x0063db3d]
//   XREF to: 0063db3d (READ)
// 00542267: FNSTSW AX
// 00542269: SAHF
// 0054226a: JNC 0x00542274
//   XREF to: 00542274 (CONDITIONAL_JUMP)
// 0054226c: MOV dword ptr [ESP + 0x8],0x40000000
//   XREF to: Stack[-0x150] (WRITE)
// 00542274: FLD float ptr [ESP + 0x8]
//   Label: LAB_00542274
//   XREF to: Stack[-0x150] (READ)
// 00542278: FCOMP double ptr [0x0063db45]
//   XREF to: 0063db45 (READ)
// 0054227e: FNSTSW AX
// 00542280: SAHF
// 00542281: JBE 0x0054228b
//   XREF to: 0054228b (CONDITIONAL_JUMP)
// 00542283: MOV dword ptr [ESP + 0x8],0x40a00000
//   XREF to: Stack[-0x150] (WRITE)
// 0054228b: MOV EDX,dword ptr [0x02f7c8b8]
//   Label: LAB_0054228b
//   XREF to: 02f7c8b8 (READ)
// 00542291: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 02f98ae0 (READ)
//   XREF to: 02f98ae4 (READ)
// 00542294: SUB EDX,EAX
// 00542296: MOV dword ptr [ESP + 0x140],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0054229d: FILD dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x18] (READ)
// 005422a4: FMUL double ptr [0x0063db1d]
//   XREF to: 0063db1d (READ)
// 005422aa: FST float ptr [ESP]
//   XREF to: Stack[-0x158] (DATA)
// 005422ad: FLDZ
// 005422af: FCOMPP
// 005422b1: FNSTSW AX
// 005422b3: SAHF
// 005422b4: JBE 0x005422bb
//   XREF to: 005422bb (CONDITIONAL_JUMP)
// 005422b6: XOR EDX,EDX
// 005422b8: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x158] (DATA)
// 005422bb: FLD float ptr [ESP]
//   Label: LAB_005422bb
//   XREF to: Stack[-0x158] (DATA)
// 005422be: FCOMP double ptr [0x0063db2d]
//   XREF to: 0063db2d (READ)
// 005422c4: FNSTSW AX
// 005422c6: SAHF
// 005422c7: JBE 0x005422d0
//   XREF to: 005422d0 (CONDITIONAL_JUMP)
// 005422c9: MOV dword ptr [ESP],0x41f00000
//   XREF to: Stack[-0x158] (DATA)
// 005422d0: FLD float ptr [ESP]
//   Label: LAB_005422d0
//   XREF to: Stack[-0x158] (DATA)
// 005422d3: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x150] (READ)
// 005422d7: FNSTSW AX
// 005422d9: SAHF
// 005422da: JBE 0x0054214d
//   XREF to: 0054214d (CONDITIONAL_JUMP)
// 005422e0: MOV ESI,0x109
// 005422e5: MOV DH,0x6
// 005422e7: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x2c] (READ)
// 005422ee: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x14c] (WRITE)
// 005422f2: MOV byte ptr [ESP + 0x10],DH
//   XREF to: Stack[-0x148] (WRITE)
// 005422f6: LEA EDI,[ESP + 0x15]
//   XREF to: Stack[-0x143] (DATA)
// 005422fa: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 02f98ad8 (READ)
// 005422fd: MOV ESI,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x34] (READ)
// 00542304: MOV dword ptr [ESP + 0x11],EAX
//   XREF to: Stack[-0x147] (WRITE)
// 00542308: PUSH EDI
// 00542309: MOV AL,byte ptr [ESI]
//   Label: LAB_00542309
//   XREF to: 02f98ae8 (READ)
//   XREF to: 02f98aea (READ)
// 0054230b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x143] (DATA)
// 0054230d: CMP AL,0x0
// 0054230f: JZ 0x00542321
//   XREF to: 00542321 (CONDITIONAL_JUMP)
// 00542311: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02f98ae9 (READ)
//   XREF to: 02f98aeb (READ)
// 00542314: ADD ESI,0x2
// 00542317: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x142] (WRITE)
// 0054231a: ADD EDI,0x2
// 0054231d: CMP AL,0x0
// 0054231f: JNZ 0x00542309
//   XREF to: 00542309 (CONDITIONAL_JUMP)
// 00542321: POP EDI
//   Label: LAB_00542321
// 00542322: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x14c] (DATA)
// 00542326: PUSH EAX
// 00542327: MOV EDI,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x1c] (READ)
// 0054232e: PUSH EDI
// 0054232f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00542332: PUSH EAX
// 00542333: CALL core_netgame.cpp_CNetGame_FUN_00541230
//   XREF to: 00541230 (UNCONDITIONAL_CALL)
// 00542338: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 0054233d: ADD ESP,0xc
// 00542340: MOV dword ptr [EBX + 0xc],EAX
//   XREF to: 02f98ae0 (WRITE)
//   XREF to: 02f98ae4 (WRITE)
// 00542343: JMP 0x0054214d
//   XREF to: 0054214d (UNCONDITIONAL_JUMP)
// 00542348: MOV EBX,dword ptr [ESP + 0x120]
//   Label: LAB_00542348
//   XREF to: Stack[-0x38] (READ)
// 0054234f: MOV ECX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x3c] (READ)
// 00542356: INC EBX
// 00542357: ADD ECX,0x114
// 0054235d: MOV dword ptr [ESP + 0x120],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00542364: MOV dword ptr [ESP + 0x11c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
//   XREF to: 02f98be8 (DATA)
// 0054236b: JMP 0x00542218
//   XREF to: 00542218 (UNCONDITIONAL_JUMP)
