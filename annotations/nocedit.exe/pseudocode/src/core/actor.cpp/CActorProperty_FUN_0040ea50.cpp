// Name: core_actor.cpp_CActorProperty_FUN_0040ea50
// Address: 0040ea50
// Address Range: [[0040ea50, 0040ee2b]]
// Convention: unknown
// Signature: undefined core_actor.cpp_CActorProperty_FUN_0040ea50()
// Cross-references:
//   core_actor.cpp_CActorPropertyList_FUN_0040e850 (0040e850) at 0040e8b2 [UNCONDITIONAL_CALL]
//   core_actor.cpp_FUN_0040ee50 (0040ee50) at 0040ee69 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c730 (0053c730) at 0053c7c8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ea30 (0053ea30) at 0053ea8c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053ed25 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053adaf [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0040ea00 = 0040ea6e
//   TerminatedCString s_d_006144c2
//   TerminatedCString s_g_006144c5
//   TerminatedCString s_g_g_g_006144c8
//   TerminatedCString s_TRUE_006144d1
//   undefined4 DAT_006144d2
//   undefined4 DAT_006144d3
//   undefined4 DAT_006144d4
//   string s_FALSE_006144d6
//   undefined4 s_ALSE_006144d7
//   string s_(none)_006144dc
//   undefined4 DAT_006144dd
//   undefined4 DAT_006144de
//   undefined4 s_ne)_006144df
//   string s_(none)_006144e3
//   undefined4 DAT_006144e4
//   undefined4 DAT_006144e5
//   undefined4 s_ne)_006144e6
//   TerminatedCString s_s_s_006144ea
//   TerminatedCString s_add_a_new_cloth_006144f2
//   undefined4 s_add_a_new_cloth)_006144f3
//   undefined4 s_dd_a_new_cloth)_006144f4
//   undefined4 s_d_a_new_cloth)_006144f5
//   TerminatedCString s_add_a_rule_00614504
//   undefined4 s_add_a_rule)_00614505
//   undefined4 s_dd_a_rule)_00614506
//   undefined4 s_d_a_rule)_00614507
//   TerminatedCString s_s_s_00614511
//   string s_??????_0061451a
//   undefined4 s_?????_0061451b
//   string s_(none)_00614521
//   undefined4 DAT_00614522
//   undefined4 DAT_00614523
//   undefined4 s_ne)_00614524
//   TerminatedCString s_anon_00614528
//   TerminatedCString s_s_0061452b
//   TerminatedCString s_core_actor_cpp_0061452e
//   TerminatedCString s_Unknown_CActorProperty_t_00614540
//   undefined4 DAT_0066e30c
//   void* PTR_s_thrust_0066e310 = 006146f5
//   undefined4 DAT_0066e314
//   void* PTR_s_swing_0066e318 = 006146fc
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_ground.cpp_getGroundTypeName_FUN_004eed80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void core_actor_cpp_CActorProperty_FUN_0040ea50(void)

{
  char cVar1;
  float *pfVar2;
  CMotionList *pCVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *in_stack_00000004;
  char *in_stack_0000000c;
  
  switch(*in_stack_00000004) {
  case 0:
    crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_0000000c,"%d");
    break;
  case 1:
    crt_stdio_c_sprintf_FUN_005fdbd0
              (in_stack_0000000c,"%g",(double)*(float *)in_stack_00000004[0x1a]);
    return;
  case 2:
    pfVar2 = (float *)in_stack_00000004[0x1a];
    crt_stdio_c_sprintf_FUN_005fdbd0
              (in_stack_0000000c,"%g,%g,%g",(double)*pfVar2,(double)pfVar2[1],
               (double)pfVar2[2]);
    return;
  case 3:
  case 8:
  case 0xb:
  case 0xc:
    pcVar8 = (char *)in_stack_00000004[0x1a];
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 4:
    if (*(int *)in_stack_00000004[0x1a] == 0) {
      pcVar8 = "FALSE";
    }
    else {
      pcVar8 = "TRUE";
    }
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 5:
    pcVar8 = *(char **)in_stack_00000004[0x1a];
    if (pcVar8 != (char *)0x0) {
      do {
        cVar1 = *pcVar8;
        *in_stack_0000000c = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        in_stack_0000000c[1] = cVar1;
        in_stack_0000000c = in_stack_0000000c + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar8 = "(none)";
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 6:
    pcVar8 = (char *)(in_stack_00000004[0x1a] + 0x78);
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 7:
    pcVar8 = (char *)(in_stack_00000004[0x1a] + 0x2260);
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 9:
    pcVar8 = core_ground_cpp_getGroundTypeName_FUN_004eed80(*(int *)in_stack_00000004[0x1a]);
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 10:
    pcVar8 = (char *)in_stack_00000004[0x1a];
    if (*pcVar8 == '\0') {
      pcVar8 = "(none)";
    }
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 0xd:
    pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       ((CMotionController *)in_stack_00000004[0x1a]);
    iVar9 = core_motion_cpp_CMotionController_FUN_0052dab0
                      ((CMotionController *)in_stack_00000004[0x1a]);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (in_stack_0000000c,"%s (%s)",iVar9,pCVar3->state_names + *(int *)(iVar9 + 0x24));
    return;
  case 0xe:
    if ((int)in_stack_00000004[0x17] < *(int *)in_stack_00000004[0x1a]) {
      piVar5 = (int *)in_stack_00000004[0x1a] + in_stack_00000004[0x17] * 10 + 1;
      do {
        iVar9 = *piVar5;
        *in_stack_0000000c = (char)iVar9;
        if ((char)iVar9 == '\0') {
          return;
        }
        cVar1 = *(char *)((int)piVar5 + 1);
        piVar5 = (int *)((int)piVar5 + 2);
        in_stack_0000000c[1] = cVar1;
        in_stack_0000000c = in_stack_0000000c + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar8 = "(add a new cloth)";
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 0xf:
    pcVar8 = "??????";
    iVar9 = 0;
    if (0 < (int)in_stack_00000004[0x17]) {
      puVar6 = (undefined4 *)in_stack_00000004[0x18];
      do {
        if (*(int *)in_stack_00000004[0x1a] == puVar6[1]) {
          pcVar8 = (char *)*puVar6;
          break;
        }
        iVar9 = iVar9 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar9 < (int)in_stack_00000004[0x17]);
    }
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 0x10:
    piVar5 = (int *)in_stack_00000004[0x1a];
    iVar9 = in_stack_00000004[0x17];
    if (iVar9 < *piVar5) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (in_stack_0000000c,"%s => %s",piVar5 + iVar9 * 0x19 + 1,
                 piVar5 + iVar9 * 0x19 + 0x7e);
      return;
    }
    pcVar8 = "(add a rule)";
    do {
      cVar1 = *pcVar8;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 0x11:
    (*(code *)in_stack_00000004[0x1a])();
    return;
  case 0x12:
    pcVar7 = "(none)";
    pcVar8 = in_stack_0000000c;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar9 = 0;
    pcVar8 = in_stack_0000000c;
    do {
      if ((*(uint *)in_stack_00000004[0x1a] & *(uint *)((int)&DAT_0066e30c + iVar9)) != 0) {
        if (in_stack_0000000c < pcVar8) {
          iVar4 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar8,", ");
          pcVar8 = pcVar8 + iVar4;
        }
        iVar4 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar8,"%s");
        pcVar8 = pcVar8 + iVar4;
      }
      iVar9 = iVar9 + 8;
    } while (iVar9 != 0x10);
    break;
  default:
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xfc9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown CActorProperty type: %d");
    return;
  }
  return;
}


// Assembly code:
// 0040ea50: PUSH EBX
//   Label: core_actor.cpp_CActorProperty_FUN_0040ea50
// 0040ea51: PUSH ESI
// 0040ea52: PUSH EDI
// 0040ea53: PUSH EBP
// 0040ea54: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040ea58: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040ea5c: MOV EAX,dword ptr [EBX]
// 0040ea5e: CMP EAX,0x12
// 0040ea61: JA 0x0040ee01
//   XREF to: 0040ee01 (CONDITIONAL_JUMP)
// 0040ea67: JMP dword ptr [EAX*0x4 + 0x40ea00]
//   Label: switchD
//   XREF to: 0040ea6e (COMPUTED_JUMP)
//   XREF to: 0040ea88 (COMPUTED_JUMP)
//   XREF to: 0040eaa6 (COMPUTED_JUMP)
//   XREF to: 0040ead6 (COMPUTED_JUMP)
//   XREF to: 0040eb0b (COMPUTED_JUMP)
//   XREF to: 0040eb2f (COMPUTED_JUMP)
//   XREF to: 0040eb5d (COMPUTED_JUMP)
//   XREF to: 0040ebaf (COMPUTED_JUMP)
//   XREF to: 0040ebd6 (COMPUTED_JUMP)
//   XREF to: 0040ec00 (COMPUTED_JUMP)
//   XREF to: 0040ec31 (COMPUTED_JUMP)
//   XREF to: 0040ec75 (COMPUTED_JUMP)
//   XREF to: 0040ecd6 (COMPUTED_JUMP)
//   XREF to: 0040ed37 (COMPUTED_JUMP)
//   XREF to: 0040ed84 (COMPUTED_JUMP)
//   XREF to: 0040edef (COMPUTED_JUMP)
//   XREF to: 0040ea00 (DATA)
// 0040ea6e: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_0
// 0040ea71: MOV EDI,dword ptr [EAX]
// 0040ea73: PUSH EDI
// 0040ea74: MOV EAX,0x6144c2
//   XREF to: 006144c2 (PARAM)
// 0040ea79: PUSH EAX
//   XREF to: 006144c2 (DATA)
// 0040ea7a: PUSH EBP
// 0040ea7b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040ea80: ADD ESP,0xc
// 0040ea83: POP EBP
//   Label: LAB_0040ea83
// 0040ea84: POP EDI
// 0040ea85: POP ESI
// 0040ea86: POP EBX
// 0040ea87: RET
// 0040ea88: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_1
// 0040ea8b: SUB ESP,0x8
// 0040ea8e: FLD float ptr [EAX]
// 0040ea90: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040ea93: PUSH 0x6144c5
//   XREF to: 006144c5 (DATA)
// 0040ea98: PUSH EBP
// 0040ea99: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040ea9e: ADD ESP,0x10
// 0040eaa1: POP EBP
// 0040eaa2: POP EDI
// 0040eaa3: POP ESI
// 0040eaa4: POP EBX
// 0040eaa5: RET
// 0040eaa6: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_2
// 0040eaa9: SUB ESP,0x8
// 0040eaac: FLD float ptr [EAX + 0x8]
// 0040eaaf: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040eab2: SUB ESP,0x8
// 0040eab5: FLD float ptr [EAX + 0x4]
// 0040eab8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040eabb: SUB ESP,0x8
// 0040eabe: FLD float ptr [EAX]
// 0040eac0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0040eac3: PUSH 0x6144c8
//   XREF to: 006144c8 (DATA)
// 0040eac8: PUSH EBP
// 0040eac9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040eace: ADD ESP,0x20
// 0040ead1: POP EBP
// 0040ead2: POP EDI
// 0040ead3: POP ESI
// 0040ead4: POP EBX
// 0040ead5: RET
// 0040ead6: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_4
// 0040ead9: CMP dword ptr [EAX],0x0
// 0040eadc: JZ 0x0040eb04
//   XREF to: 0040eb04 (CONDITIONAL_JUMP)
// 0040eade: MOV ESI,0x6144d1
//   XREF to: 006144d1 (DATA)
// 0040eae3: MOV EDI,EBP
//   Label: LAB_0040eae3
// 0040eae5: PUSH EDI
// 0040eae6: MOV AL,byte ptr [ESI]
//   Label: LAB_0040eae6
//   XREF to: 006144d1 (READ)
//   XREF to: 006144d3 (READ)
//   XREF to: 006144d6 (READ)
// 0040eae8: MOV byte ptr [EDI],AL
// 0040eaea: CMP AL,0x0
// 0040eaec: JZ 0x0040eafe
//   XREF to: 0040eafe (CONDITIONAL_JUMP)
// 0040eaee: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006144d2 (READ)
//   XREF to: 006144d4 (READ)
//   XREF to: 006144d7 (READ)
// 0040eaf1: ADD ESI,0x2
// 0040eaf4: MOV byte ptr [EDI + 0x1],AL
// 0040eaf7: ADD EDI,0x2
// 0040eafa: CMP AL,0x0
// 0040eafc: JNZ 0x0040eae6
//   XREF to: 0040eae6 (CONDITIONAL_JUMP)
// 0040eafe: POP EDI
//   Label: LAB_0040eafe
// 0040eaff: POP EBP
// 0040eb00: POP EDI
// 0040eb01: POP ESI
// 0040eb02: POP EBX
// 0040eb03: RET
// 0040eb04: MOV ESI,0x6144d6
//   Label: LAB_0040eb04
//   XREF to: 006144d6 (DATA)
// 0040eb09: JMP 0x0040eae3
//   XREF to: 0040eae3 (UNCONDITIONAL_JUMP)
// 0040eb0b: MOV EDI,EBP
//   Label: caseD_c
// 0040eb0d: MOV ESI,dword ptr [EBX + 0x68]
// 0040eb10: PUSH EDI
// 0040eb11: MOV AL,byte ptr [ESI]
//   Label: LAB_0040eb11
// 0040eb13: MOV byte ptr [EDI],AL
// 0040eb15: CMP AL,0x0
// 0040eb17: JZ 0x0040eb29
//   XREF to: 0040eb29 (CONDITIONAL_JUMP)
// 0040eb19: MOV AL,byte ptr [ESI + 0x1]
// 0040eb1c: ADD ESI,0x2
// 0040eb1f: MOV byte ptr [EDI + 0x1],AL
// 0040eb22: ADD EDI,0x2
// 0040eb25: CMP AL,0x0
// 0040eb27: JNZ 0x0040eb11
//   XREF to: 0040eb11 (CONDITIONAL_JUMP)
// 0040eb29: POP EDI
//   Label: LAB_0040eb29
// 0040eb2a: POP EBP
// 0040eb2b: POP EDI
// 0040eb2c: POP ESI
// 0040eb2d: POP EBX
// 0040eb2e: RET
// 0040eb2f: MOV ESI,dword ptr [EBX + 0x68]
//   Label: caseD_a
// 0040eb32: CMP byte ptr [ESI],0x0
// 0040eb35: JNZ 0x0040eb3c
//   XREF to: 0040eb3c (CONDITIONAL_JUMP)
// 0040eb37: MOV ESI,0x6144dc
//   XREF to: 006144dc (DATA)
// 0040eb3c: MOV EDI,EBP
//   Label: LAB_0040eb3c
// 0040eb3e: PUSH EDI
// 0040eb3f: MOV AL,byte ptr [ESI]
//   Label: LAB_0040eb3f
//   XREF to: 006144dc (READ)
//   XREF to: 006144de (READ)
// 0040eb41: MOV byte ptr [EDI],AL
// 0040eb43: CMP AL,0x0
// 0040eb45: JZ 0x0040eb57
//   XREF to: 0040eb57 (CONDITIONAL_JUMP)
// 0040eb47: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006144dd (READ)
//   XREF to: 006144df (READ)
// 0040eb4a: ADD ESI,0x2
// 0040eb4d: MOV byte ptr [EDI + 0x1],AL
// 0040eb50: ADD EDI,0x2
// 0040eb53: CMP AL,0x0
// 0040eb55: JNZ 0x0040eb3f
//   XREF to: 0040eb3f (CONDITIONAL_JUMP)
// 0040eb57: POP EDI
//   Label: LAB_0040eb57
// 0040eb58: POP EBP
// 0040eb59: POP EDI
// 0040eb5a: POP ESI
// 0040eb5b: POP EBX
// 0040eb5c: RET
// 0040eb5d: MOV ESI,dword ptr [EBX + 0x68]
//   Label: caseD_5
// 0040eb60: MOV EBX,dword ptr [ESI]
// 0040eb62: TEST EBX,EBX
// 0040eb64: JNZ 0x0040eb8c
//   XREF to: 0040eb8c (CONDITIONAL_JUMP)
// 0040eb66: MOV ESI,0x6144e3
//   XREF to: 006144e3 (DATA)
// 0040eb6b: MOV EDI,EBP
// 0040eb6d: PUSH EDI
// 0040eb6e: MOV AL,byte ptr [ESI]
//   Label: LAB_0040eb6e
//   XREF to: 006144e3 (READ)
//   XREF to: 006144e5 (READ)
// 0040eb70: MOV byte ptr [EDI],AL
// 0040eb72: CMP AL,0x0
// 0040eb74: JZ 0x0040eb86
//   XREF to: 0040eb86 (CONDITIONAL_JUMP)
// 0040eb76: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006144e4 (READ)
//   XREF to: 006144e6 (READ)
// 0040eb79: ADD ESI,0x2
// 0040eb7c: MOV byte ptr [EDI + 0x1],AL
// 0040eb7f: ADD EDI,0x2
// 0040eb82: CMP AL,0x0
// 0040eb84: JNZ 0x0040eb6e
//   XREF to: 0040eb6e (CONDITIONAL_JUMP)
// 0040eb86: POP EDI
//   Label: LAB_0040eb86
// 0040eb87: POP EBP
// 0040eb88: POP EDI
// 0040eb89: POP ESI
// 0040eb8a: POP EBX
// 0040eb8b: RET
// 0040eb8c: MOV ESI,EBX
//   Label: LAB_0040eb8c
// 0040eb8e: MOV EDI,EBP
// 0040eb90: PUSH EDI
// 0040eb91: MOV AL,byte ptr [ESI]
//   Label: LAB_0040eb91
// 0040eb93: MOV byte ptr [EDI],AL
// 0040eb95: CMP AL,0x0
// 0040eb97: JZ 0x0040eba9
//   XREF to: 0040eba9 (CONDITIONAL_JUMP)
// 0040eb99: MOV AL,byte ptr [ESI + 0x1]
// 0040eb9c: ADD ESI,0x2
// 0040eb9f: MOV byte ptr [EDI + 0x1],AL
// 0040eba2: ADD EDI,0x2
// 0040eba5: CMP AL,0x0
// 0040eba7: JNZ 0x0040eb91
//   XREF to: 0040eb91 (CONDITIONAL_JUMP)
// 0040eba9: POP EDI
//   Label: LAB_0040eba9
// 0040ebaa: POP EBP
// 0040ebab: POP EDI
// 0040ebac: POP ESI
// 0040ebad: POP EBX
// 0040ebae: RET
// 0040ebaf: MOV ESI,dword ptr [EBX + 0x68]
//   Label: caseD_6
// 0040ebb2: MOV EDI,EBP
// 0040ebb4: ADD ESI,0x78
// 0040ebb7: PUSH EDI
// 0040ebb8: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ebb8
// 0040ebba: MOV byte ptr [EDI],AL
// 0040ebbc: CMP AL,0x0
// 0040ebbe: JZ 0x0040ebd0
//   XREF to: 0040ebd0 (CONDITIONAL_JUMP)
// 0040ebc0: MOV AL,byte ptr [ESI + 0x1]
// 0040ebc3: ADD ESI,0x2
// 0040ebc6: MOV byte ptr [EDI + 0x1],AL
// 0040ebc9: ADD EDI,0x2
// 0040ebcc: CMP AL,0x0
// 0040ebce: JNZ 0x0040ebb8
//   XREF to: 0040ebb8 (CONDITIONAL_JUMP)
// 0040ebd0: POP EDI
//   Label: LAB_0040ebd0
// 0040ebd1: POP EBP
// 0040ebd2: POP EDI
// 0040ebd3: POP ESI
// 0040ebd4: POP EBX
// 0040ebd5: RET
// 0040ebd6: MOV ESI,dword ptr [EBX + 0x68]
//   Label: caseD_7
// 0040ebd9: MOV EDI,EBP
// 0040ebdb: ADD ESI,0x2260
// 0040ebe1: PUSH EDI
// 0040ebe2: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ebe2
// 0040ebe4: MOV byte ptr [EDI],AL
// 0040ebe6: CMP AL,0x0
// 0040ebe8: JZ 0x0040ebfa
//   XREF to: 0040ebfa (CONDITIONAL_JUMP)
// 0040ebea: MOV AL,byte ptr [ESI + 0x1]
// 0040ebed: ADD ESI,0x2
// 0040ebf0: MOV byte ptr [EDI + 0x1],AL
// 0040ebf3: ADD EDI,0x2
// 0040ebf6: CMP AL,0x0
// 0040ebf8: JNZ 0x0040ebe2
//   XREF to: 0040ebe2 (CONDITIONAL_JUMP)
// 0040ebfa: POP EDI
//   Label: LAB_0040ebfa
// 0040ebfb: POP EBP
// 0040ebfc: POP EDI
// 0040ebfd: POP ESI
// 0040ebfe: POP EBX
// 0040ebff: RET
// 0040ec00: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_9
// 0040ec03: MOV ECX,dword ptr [EAX]
// 0040ec05: PUSH ECX
// 0040ec06: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 0040ec0b: ADD ESP,0x4
// 0040ec0e: MOV EDI,EBP
// 0040ec10: MOV ESI,EAX
// 0040ec12: PUSH EDI
// 0040ec13: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ec13
// 0040ec15: MOV byte ptr [EDI],AL
// 0040ec17: CMP AL,0x0
// 0040ec19: JZ 0x0040ec2b
//   XREF to: 0040ec2b (CONDITIONAL_JUMP)
// 0040ec1b: MOV AL,byte ptr [ESI + 0x1]
// 0040ec1e: ADD ESI,0x2
// 0040ec21: MOV byte ptr [EDI + 0x1],AL
// 0040ec24: ADD EDI,0x2
// 0040ec27: CMP AL,0x0
// 0040ec29: JNZ 0x0040ec13
//   XREF to: 0040ec13 (CONDITIONAL_JUMP)
// 0040ec2b: POP EDI
//   Label: LAB_0040ec2b
// 0040ec2c: POP EBP
// 0040ec2d: POP EDI
// 0040ec2e: POP ESI
// 0040ec2f: POP EBX
// 0040ec30: RET
// 0040ec31: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_d
// 0040ec34: PUSH EAX
// 0040ec35: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0040ec3a: ADD ESP,0x4
// 0040ec3d: MOV EDX,dword ptr [EBX + 0x68]
// 0040ec40: PUSH EDX
// 0040ec41: MOV ESI,EAX
// 0040ec43: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0040ec48: MOV EBX,EAX
// 0040ec4a: MOV EAX,dword ptr [EAX + 0x24]
// 0040ec4d: ADD EAX,EAX
// 0040ec4f: MOV EDX,EAX
// 0040ec51: SHL EAX,0x4
// 0040ec54: SUB EAX,EDX
// 0040ec56: MOV EDX,EAX
// 0040ec58: LEA EAX,[ESI + 0x4]
// 0040ec5b: ADD ESP,0x4
// 0040ec5e: ADD EAX,EDX
// 0040ec60: PUSH EAX
// 0040ec61: PUSH EBX
// 0040ec62: PUSH 0x6144ea
//   XREF to: 006144ea (DATA)
// 0040ec67: PUSH EBP
// 0040ec68: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040ec6d: ADD ESP,0x10
// 0040ec70: POP EBP
// 0040ec71: POP EDI
// 0040ec72: POP ESI
// 0040ec73: POP EBX
// 0040ec74: RET
// 0040ec75: MOV EDX,dword ptr [EBX + 0x68]
//   Label: caseD_e
// 0040ec78: MOV EAX,dword ptr [EBX + 0x5c]
// 0040ec7b: CMP EAX,dword ptr [EDX]
// 0040ec7d: JL 0x0040eca5
//   XREF to: 0040eca5 (CONDITIONAL_JUMP)
// 0040ec7f: MOV ESI,0x6144f2
//   XREF to: 006144f2 (DATA)
// 0040ec84: MOV EDI,EBP
// 0040ec86: PUSH EDI
// 0040ec87: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ec87
//   XREF to: 006144f2 (READ)
//   XREF to: 006144f4 (READ)
// 0040ec89: MOV byte ptr [EDI],AL
// 0040ec8b: CMP AL,0x0
// 0040ec8d: JZ 0x0040ec9f
//   XREF to: 0040ec9f (CONDITIONAL_JUMP)
// 0040ec8f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006144f3 (READ)
//   XREF to: 006144f5 (READ)
// 0040ec92: ADD ESI,0x2
// 0040ec95: MOV byte ptr [EDI + 0x1],AL
// 0040ec98: ADD EDI,0x2
// 0040ec9b: CMP AL,0x0
// 0040ec9d: JNZ 0x0040ec87
//   XREF to: 0040ec87 (CONDITIONAL_JUMP)
// 0040ec9f: POP EDI
//   Label: LAB_0040ec9f
// 0040eca0: POP EBP
// 0040eca1: POP EDI
// 0040eca2: POP ESI
// 0040eca3: POP EBX
// 0040eca4: RET
// 0040eca5: MOV ECX,EAX
//   Label: LAB_0040eca5
// 0040eca7: SHL EAX,0x2
// 0040ecaa: ADD EAX,ECX
// 0040ecac: ADD EDX,0x4
// 0040ecaf: SHL EAX,0x3
// 0040ecb2: MOV EDI,EBP
// 0040ecb4: LEA ESI,[EDX + EAX*0x1]
// 0040ecb7: PUSH EDI
// 0040ecb8: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ecb8
// 0040ecba: MOV byte ptr [EDI],AL
// 0040ecbc: CMP AL,0x0
// 0040ecbe: JZ 0x0040ecd0
//   XREF to: 0040ecd0 (CONDITIONAL_JUMP)
// 0040ecc0: MOV AL,byte ptr [ESI + 0x1]
// 0040ecc3: ADD ESI,0x2
// 0040ecc6: MOV byte ptr [EDI + 0x1],AL
// 0040ecc9: ADD EDI,0x2
// 0040eccc: CMP AL,0x0
// 0040ecce: JNZ 0x0040ecb8
//   XREF to: 0040ecb8 (CONDITIONAL_JUMP)
// 0040ecd0: POP EDI
//   Label: LAB_0040ecd0
// 0040ecd1: POP EBP
// 0040ecd2: POP EDI
// 0040ecd3: POP ESI
// 0040ecd4: POP EBX
// 0040ecd5: RET
// 0040ecd6: MOV EDX,dword ptr [EBX + 0x68]
//   Label: caseD_10
// 0040ecd9: MOV EAX,dword ptr [EBX + 0x5c]
// 0040ecdc: CMP EAX,dword ptr [EDX]
// 0040ecde: JL 0x0040ed06
//   XREF to: 0040ed06 (CONDITIONAL_JUMP)
// 0040ece0: MOV ESI,0x614504
//   XREF to: 00614504 (DATA)
// 0040ece5: MOV EDI,EBP
// 0040ece7: PUSH EDI
// 0040ece8: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ece8
//   XREF to: 00614504 (READ)
//   XREF to: 00614506 (READ)
// 0040ecea: MOV byte ptr [EDI],AL
// 0040ecec: CMP AL,0x0
// 0040ecee: JZ 0x0040ed00
//   XREF to: 0040ed00 (CONDITIONAL_JUMP)
// 0040ecf0: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614505 (READ)
//   XREF to: 00614507 (READ)
// 0040ecf3: ADD ESI,0x2
// 0040ecf6: MOV byte ptr [EDI + 0x1],AL
// 0040ecf9: ADD EDI,0x2
// 0040ecfc: CMP AL,0x0
// 0040ecfe: JNZ 0x0040ece8
//   XREF to: 0040ece8 (CONDITIONAL_JUMP)
// 0040ed00: POP EDI
//   Label: LAB_0040ed00
// 0040ed01: POP EBP
// 0040ed02: POP EDI
// 0040ed03: POP ESI
// 0040ed04: POP EBX
// 0040ed05: RET
// 0040ed06: MOV ECX,EAX
//   Label: LAB_0040ed06
// 0040ed08: SHL EAX,0x2
// 0040ed0b: SUB EAX,ECX
// 0040ed0d: SHL EAX,0x3
// 0040ed10: ADD EAX,ECX
// 0040ed12: SHL EAX,0x2
// 0040ed15: LEA ECX,[EDX + 0x1f8]
// 0040ed1b: ADD ECX,EAX
// 0040ed1d: ADD EDX,0x4
// 0040ed20: PUSH ECX
// 0040ed21: ADD EAX,EDX
// 0040ed23: PUSH EAX
// 0040ed24: PUSH 0x614511
//   XREF to: 00614511 (DATA)
// 0040ed29: PUSH EBP
// 0040ed2a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040ed2f: ADD ESP,0x10
// 0040ed32: POP EBP
// 0040ed33: POP EDI
// 0040ed34: POP ESI
// 0040ed35: POP EBX
// 0040ed36: RET
// 0040ed37: MOV ECX,0x61451a
//   Label: caseD_f
//   XREF to: 0061451a (DATA)
// 0040ed3c: MOV ESI,dword ptr [EBX + 0x5c]
// 0040ed3f: XOR EDI,EDI
// 0040ed41: TEST ESI,ESI
// 0040ed43: JLE 0x0040ed54
//   XREF to: 0040ed54 (CONDITIONAL_JUMP)
// 0040ed45: MOV EDX,dword ptr [EBX + 0x68]
// 0040ed48: MOV ESI,dword ptr [EBX + 0x60]
// 0040ed4b: MOV EAX,dword ptr [EDX]
//   Label: LAB_0040ed4b
// 0040ed4d: CMP EAX,dword ptr [ESI + 0x4]
// 0040ed50: JNZ 0x0040ed77
//   XREF to: 0040ed77 (CONDITIONAL_JUMP)
// 0040ed52: MOV ECX,dword ptr [ESI]
// 0040ed54: MOV ESI,ECX
//   Label: LAB_0040ed54
// 0040ed56: MOV EDI,EBP
// 0040ed58: PUSH EDI
// 0040ed59: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ed59
//   XREF to: 0061451a (READ)
// 0040ed5b: MOV byte ptr [EDI],AL
// 0040ed5d: CMP AL,0x0
// 0040ed5f: JZ 0x0040ed71
//   XREF to: 0040ed71 (CONDITIONAL_JUMP)
// 0040ed61: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061451b (READ)
// 0040ed64: ADD ESI,0x2
// 0040ed67: MOV byte ptr [EDI + 0x1],AL
// 0040ed6a: ADD EDI,0x2
// 0040ed6d: CMP AL,0x0
// 0040ed6f: JNZ 0x0040ed59
//   XREF to: 0040ed59 (CONDITIONAL_JUMP)
// 0040ed71: POP EDI
//   Label: LAB_0040ed71
// 0040ed72: POP EBP
// 0040ed73: POP EDI
// 0040ed74: POP ESI
// 0040ed75: POP EBX
// 0040ed76: RET
// 0040ed77: INC EDI
//   Label: LAB_0040ed77
// 0040ed78: MOV EAX,dword ptr [EBX + 0x5c]
// 0040ed7b: ADD ESI,0x8
// 0040ed7e: CMP EDI,EAX
// 0040ed80: JL 0x0040ed4b
//   XREF to: 0040ed4b (CONDITIONAL_JUMP)
// 0040ed82: JMP 0x0040ed54
//   XREF to: 0040ed54 (UNCONDITIONAL_JUMP)
// 0040ed84: MOV ESI,0x614521
//   Label: caseD_12
//   XREF to: 00614521 (DATA)
// 0040ed89: MOV EDI,EBP
// 0040ed8b: PUSH EDI
// 0040ed8c: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ed8c
//   XREF to: 00614521 (READ)
//   XREF to: 00614523 (READ)
// 0040ed8e: MOV byte ptr [EDI],AL
// 0040ed90: CMP AL,0x0
// 0040ed92: JZ 0x0040eda4
//   XREF to: 0040eda4 (CONDITIONAL_JUMP)
// 0040ed94: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614522 (READ)
//   XREF to: 00614524 (READ)
// 0040ed97: ADD ESI,0x2
// 0040ed9a: MOV byte ptr [EDI + 0x1],AL
// 0040ed9d: ADD EDI,0x2
// 0040eda0: CMP AL,0x0
// 0040eda2: JNZ 0x0040ed8c
//   XREF to: 0040ed8c (CONDITIONAL_JUMP)
// 0040eda4: POP EDI
//   Label: LAB_0040eda4
// 0040eda5: MOV ESI,EBP
// 0040eda7: XOR EDI,EBP
// 0040eda9: MOV EAX,dword ptr [EBX + 0x68]
//   Label: LAB_0040eda9
// 0040edac: MOV EDX,dword ptr [EDI + 0x66e30c]
//   XREF to: 0066e30c (DATA)
//   XREF to: 0066e314 (DATA)
// 0040edb2: TEST dword ptr [EAX],EDX
// 0040edb4: JZ 0x0040ede1
//   XREF to: 0040ede1 (CONDITIONAL_JUMP)
// 0040edb6: CMP ESI,EBP
// 0040edb8: JBE 0x0040edca
//   XREF to: 0040edca (CONDITIONAL_JUMP)
// 0040edba: PUSH 0x614528
//   XREF to: 00614528 (DATA)
// 0040edbf: PUSH ESI
// 0040edc0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040edc5: ADD ESP,0x8
// 0040edc8: ADD ESI,EAX
// 0040edca: MOV ECX,dword ptr [EDI + 0x66e310]
//   Label: LAB_0040edca
//   XREF to: 0066e310 (DATA)
//   XREF to: 0066e318 (DATA)
// 0040edd0: PUSH ECX
// 0040edd1: PUSH 0x61452b
//   XREF to: 0061452b (DATA)
// 0040edd6: PUSH ESI
// 0040edd7: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040eddc: ADD ESP,0xc
// 0040eddf: ADD ESI,EAX
// 0040ede1: ADD EDI,0x8
//   Label: LAB_0040ede1
// 0040ede4: CMP EDI,0x10
// 0040ede7: JZ 0x0040ea83
//   XREF to: 0040ea83 (CONDITIONAL_JUMP)
// 0040eded: JMP 0x0040eda9
//   XREF to: 0040eda9 (UNCONDITIONAL_JUMP)
// 0040edef: PUSH EBP
//   Label: caseD_11
// 0040edf0: PUSH EBX
// 0040edf1: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0040edf5: PUSH EDI
// 0040edf6: CALL dword ptr [EBX + 0x68]
// 0040edf9: ADD ESP,0xc
// 0040edfc: POP EBP
// 0040edfd: POP EDI
// 0040edfe: POP ESI
// 0040edff: POP EBX
// 0040ee00: RET
// 0040ee01: MOV ESI,dword ptr [EBX]
//   Label: default
// 0040ee03: PUSH ESI
// 0040ee04: MOV EDX,0x61452e
//   XREF to: 0061452e (PARAM)
// 0040ee09: MOV ECX,0xfc9
// 0040ee0e: PUSH 0x614540
//   XREF to: 00614540 (DATA)
// 0040ee13: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040ee19: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040ee1f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040ee24: ADD ESP,0x8
// 0040ee27: POP EBP
// 0040ee28: POP EDI
// 0040ee29: POP ESI
// 0040ee2a: POP EBX
// 0040ee2b: RET
