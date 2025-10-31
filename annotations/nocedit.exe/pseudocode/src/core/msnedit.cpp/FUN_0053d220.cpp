// Name: core_msnedit.cpp_FUN_0053d220
// Address: 0053d220
// Address Range: [[0053d220, 0053d398]]
// Convention: __cdecl
// Signature: int core_msnedit.cpp_FUN_0053d220(CDemonMission * this_ptr)
// Cross-references:
//   core_actor.cpp_FUN_0040d270 (0040d270) at 0040d282 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053c077 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537410 (00537410) at 00537479 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053bb8a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Actor_name_contains_inva_0063cb94
//   TerminatedCString s_Already_an_actor_named_s_0063cbbc
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00524030
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

int __cdecl core_msnedit_cpp_FUN_0053d220(CDemonMission *this_ptr)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  CDemonMission *in_stack_00000008;
  char *in_stack_0000000c;
  
  pcVar3 = in_stack_0000000c;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == ' ') goto LAB_0053d242;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == ' ') goto LAB_0053d242;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_0053d242:
  pcVar3 = in_stack_0000000c;
  if (pcVar2 == (char *)0x0) {
    do {
      pcVar2 = pcVar3;
      if (*pcVar3 == '\t') goto LAB_0053d266;
      if (*pcVar3 == '\0') break;
      pcVar2 = pcVar3 + 1;
      if (*pcVar2 == '\t') goto LAB_0053d266;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar2 != '\0');
    pcVar2 = (char *)0x0;
LAB_0053d266:
    pcVar3 = in_stack_0000000c;
    if (pcVar2 == (char *)0x0) {
      do {
        pcVar2 = pcVar3;
        if (*pcVar3 == '\r') goto LAB_0053d28a;
        if (*pcVar3 == '\0') break;
        pcVar2 = pcVar3 + 1;
        if (*pcVar2 == '\r') goto LAB_0053d28a;
        pcVar3 = pcVar3 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_0053d28a:
      pcVar3 = in_stack_0000000c;
      if (pcVar2 == (char *)0x0) {
        do {
          pcVar2 = pcVar3;
          if (*pcVar3 == '\n') goto LAB_0053d2ae;
          if (*pcVar3 == '\0') break;
          pcVar2 = pcVar3 + 1;
          if (*pcVar2 == '\n') goto LAB_0053d2ae;
          pcVar3 = pcVar3 + 2;
        } while (*pcVar2 != '\0');
        pcVar2 = (char *)0x0;
LAB_0053d2ae:
        pcVar3 = in_stack_0000000c;
        if (pcVar2 == (char *)0x0) {
          do {
            pcVar2 = pcVar3;
            if (*pcVar3 == '\"') goto LAB_0053d2d2;
            if (*pcVar3 == '\0') break;
            pcVar2 = pcVar3 + 1;
            if (*pcVar2 == '\"') goto LAB_0053d2d2;
            pcVar3 = pcVar3 + 2;
          } while (*pcVar2 != '\0');
          pcVar2 = (char *)0x0;
LAB_0053d2d2:
          pcVar3 = in_stack_0000000c;
          if (pcVar2 == (char *)0x0) {
            do {
              pcVar2 = pcVar3;
              if (*pcVar3 == '\'') goto LAB_0053d2f6;
              if (*pcVar3 == '\0') break;
              pcVar2 = pcVar3 + 1;
              if (*pcVar2 == '\'') goto LAB_0053d2f6;
              pcVar3 = pcVar3 + 2;
            } while (*pcVar2 != '\0');
            pcVar2 = (char *)0x0;
LAB_0053d2f6:
            pcVar3 = in_stack_0000000c;
            if (pcVar2 == (char *)0x0) {
              do {
                pcVar2 = pcVar3;
                if (*pcVar3 == '{') goto LAB_0053d316;
                if (*pcVar3 == '\0') break;
                pcVar2 = pcVar3 + 1;
                if (*pcVar2 == '{') goto LAB_0053d316;
                pcVar3 = pcVar3 + 2;
              } while (*pcVar2 != '\0');
              pcVar2 = (char *)0x0;
LAB_0053d316:
              pcVar3 = in_stack_0000000c;
              if (pcVar2 == (char *)0x0) {
                do {
                  pcVar2 = pcVar3;
                  if (*pcVar3 == '}') goto LAB_0053d336;
                  if (*pcVar3 == '\0') break;
                  pcVar2 = pcVar3 + 1;
                  if (*pcVar2 == '}') goto LAB_0053d336;
                  pcVar3 = pcVar3 + 2;
                } while (*pcVar2 != '\0');
                pcVar2 = (char *)0x0;
LAB_0053d336:
                if (pcVar2 == (char *)0x0) {
                  iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                                    (in_stack_00000008->field0_0x0,in_stack_0000000c);
                  if ((iVar1 != 0) &&
                     (pcVar3 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000008),
                     pcVar3 != (char *)0x0)) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Already an actor named %s in this mission!");
                    return 0;
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Actor name contains invalid characters.");
  return 0;
}


// Assembly code:
// 0053d220: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053d220
// 0053d221: PUSH ESI
// 0053d222: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0053d226: MOV DL,0x20
// 0053d228: MOV ESI,EBX
// 0053d22a: MOV AL,byte ptr [ESI]
//   Label: LAB_0053d22a
// 0053d22c: CMP AL,DL
// 0053d22e: JZ 0x0053d242
//   XREF to: 0053d242 (CONDITIONAL_JUMP)
// 0053d230: CMP AL,0x0
// 0053d232: JZ 0x0053d240
//   XREF to: 0053d240 (CONDITIONAL_JUMP)
// 0053d234: INC ESI
// 0053d235: MOV AL,byte ptr [ESI]
// 0053d237: CMP AL,DL
// 0053d239: JZ 0x0053d242
//   XREF to: 0053d242 (CONDITIONAL_JUMP)
// 0053d23b: INC ESI
// 0053d23c: CMP AL,0x0
// 0053d23e: JNZ 0x0053d22a
//   XREF to: 0053d22a (CONDITIONAL_JUMP)
// 0053d240: SUB ESI,ESI
//   Label: LAB_0053d240
// 0053d242: TEST ESI,ESI
//   Label: LAB_0053d242
// 0053d244: JNZ 0x0053d354
//   XREF to: 0053d354 (CONDITIONAL_JUMP)
// 0053d24a: MOV DL,0x9
// 0053d24c: MOV ESI,EBX
// 0053d24e: MOV AL,byte ptr [ESI]
//   Label: LAB_0053d24e
// 0053d250: CMP AL,DL
// 0053d252: JZ 0x0053d266
//   XREF to: 0053d266 (CONDITIONAL_JUMP)
// 0053d254: CMP AL,0x0
// 0053d256: JZ 0x0053d264
//   XREF to: 0053d264 (CONDITIONAL_JUMP)
// 0053d258: INC ESI
// 0053d259: MOV AL,byte ptr [ESI]
// 0053d25b: CMP AL,DL
// 0053d25d: JZ 0x0053d266
//   XREF to: 0053d266 (CONDITIONAL_JUMP)
// 0053d25f: INC ESI
// 0053d260: CMP AL,0x0
// 0053d262: JNZ 0x0053d24e
//   XREF to: 0053d24e (CONDITIONAL_JUMP)
// 0053d264: SUB ESI,ESI
//   Label: LAB_0053d264
// 0053d266: TEST ESI,ESI
//   Label: LAB_0053d266
// 0053d268: JNZ 0x0053d354
//   XREF to: 0053d354 (CONDITIONAL_JUMP)
// 0053d26e: MOV DL,0xd
// 0053d270: MOV ESI,EBX
// 0053d272: MOV AL,byte ptr [ESI]
//   Label: LAB_0053d272
// 0053d274: CMP AL,DL
// 0053d276: JZ 0x0053d28a
//   XREF to: 0053d28a (CONDITIONAL_JUMP)
// 0053d278: CMP AL,0x0
// 0053d27a: JZ 0x0053d288
//   XREF to: 0053d288 (CONDITIONAL_JUMP)
// 0053d27c: INC ESI
// 0053d27d: MOV AL,byte ptr [ESI]
// 0053d27f: CMP AL,DL
// 0053d281: JZ 0x0053d28a
//   XREF to: 0053d28a (CONDITIONAL_JUMP)
// 0053d283: INC ESI
// 0053d284: CMP AL,0x0
// 0053d286: JNZ 0x0053d272
//   XREF to: 0053d272 (CONDITIONAL_JUMP)
// 0053d288: SUB ESI,ESI
//   Label: LAB_0053d288
// 0053d28a: TEST ESI,ESI
//   Label: LAB_0053d28a
// 0053d28c: JNZ 0x0053d354
//   XREF to: 0053d354 (CONDITIONAL_JUMP)
// 0053d292: MOV DL,0xa
// 0053d294: MOV ESI,EBX
// 0053d296: MOV AL,byte ptr [ESI]
//   Label: LAB_0053d296
// 0053d298: CMP AL,DL
// 0053d29a: JZ 0x0053d2ae
//   XREF to: 0053d2ae (CONDITIONAL_JUMP)
// 0053d29c: CMP AL,0x0
// 0053d29e: JZ 0x0053d2ac
//   XREF to: 0053d2ac (CONDITIONAL_JUMP)
// 0053d2a0: INC ESI
// 0053d2a1: MOV AL,byte ptr [ESI]
// 0053d2a3: CMP AL,DL
// 0053d2a5: JZ 0x0053d2ae
//   XREF to: 0053d2ae (CONDITIONAL_JUMP)
// 0053d2a7: INC ESI
// 0053d2a8: CMP AL,0x0
// 0053d2aa: JNZ 0x0053d296
//   XREF to: 0053d296 (CONDITIONAL_JUMP)
// 0053d2ac: SUB ESI,ESI
//   Label: LAB_0053d2ac
// 0053d2ae: TEST ESI,ESI
//   Label: LAB_0053d2ae
// 0053d2b0: JNZ 0x0053d354
//   XREF to: 0053d354 (CONDITIONAL_JUMP)
// 0053d2b6: MOV DL,0x22
// 0053d2b8: MOV ESI,EBX
// 0053d2ba: MOV AL,byte ptr [ESI]
//   Label: LAB_0053d2ba
// 0053d2bc: CMP AL,DL
// 0053d2be: JZ 0x0053d2d2
//   XREF to: 0053d2d2 (CONDITIONAL_JUMP)
// 0053d2c0: CMP AL,0x0
// 0053d2c2: JZ 0x0053d2d0
//   XREF to: 0053d2d0 (CONDITIONAL_JUMP)
// 0053d2c4: INC ESI
// 0053d2c5: MOV AL,byte ptr [ESI]
// 0053d2c7: CMP AL,DL
// 0053d2c9: JZ 0x0053d2d2
//   XREF to: 0053d2d2 (CONDITIONAL_JUMP)
// 0053d2cb: INC ESI
// 0053d2cc: CMP AL,0x0
// 0053d2ce: JNZ 0x0053d2ba
//   XREF to: 0053d2ba (CONDITIONAL_JUMP)
// 0053d2d0: SUB ESI,ESI
//   Label: LAB_0053d2d0
// 0053d2d2: TEST ESI,ESI
//   Label: LAB_0053d2d2
// 0053d2d4: JNZ 0x0053d354
//   XREF to: 0053d354 (CONDITIONAL_JUMP)
// 0053d2da: MOV DL,0x27
// 0053d2dc: MOV ESI,EBX
// 0053d2de: MOV AL,byte ptr [ESI]
//   Label: LAB_0053d2de
// 0053d2e0: CMP AL,DL
// 0053d2e2: JZ 0x0053d2f6
//   XREF to: 0053d2f6 (CONDITIONAL_JUMP)
// 0053d2e4: CMP AL,0x0
// 0053d2e6: JZ 0x0053d2f4
//   XREF to: 0053d2f4 (CONDITIONAL_JUMP)
// 0053d2e8: INC ESI
// 0053d2e9: MOV AL,byte ptr [ESI]
// 0053d2eb: CMP AL,DL
// 0053d2ed: JZ 0x0053d2f6
//   XREF to: 0053d2f6 (CONDITIONAL_JUMP)
// 0053d2ef: INC ESI
// 0053d2f0: CMP AL,0x0
// 0053d2f2: JNZ 0x0053d2de
//   XREF to: 0053d2de (CONDITIONAL_JUMP)
// 0053d2f4: SUB ESI,ESI
//   Label: LAB_0053d2f4
// 0053d2f6: TEST ESI,ESI
//   Label: LAB_0053d2f6
// 0053d2f8: JNZ 0x0053d354
//   XREF to: 0053d354 (CONDITIONAL_JUMP)
// 0053d2fa: MOV DL,0x7b
// 0053d2fc: MOV ESI,EBX
// 0053d2fe: MOV AL,byte ptr [ESI]
//   Label: LAB_0053d2fe
// 0053d300: CMP AL,DL
// 0053d302: JZ 0x0053d316
//   XREF to: 0053d316 (CONDITIONAL_JUMP)
// 0053d304: CMP AL,0x0
// 0053d306: JZ 0x0053d314
//   XREF to: 0053d314 (CONDITIONAL_JUMP)
// 0053d308: INC ESI
// 0053d309: MOV AL,byte ptr [ESI]
// 0053d30b: CMP AL,DL
// 0053d30d: JZ 0x0053d316
//   XREF to: 0053d316 (CONDITIONAL_JUMP)
// 0053d30f: INC ESI
// 0053d310: CMP AL,0x0
// 0053d312: JNZ 0x0053d2fe
//   XREF to: 0053d2fe (CONDITIONAL_JUMP)
// 0053d314: SUB ESI,ESI
//   Label: LAB_0053d314
// 0053d316: TEST ESI,ESI
//   Label: LAB_0053d316
// 0053d318: JNZ 0x0053d354
//   XREF to: 0053d354 (CONDITIONAL_JUMP)
// 0053d31a: MOV DL,0x7d
// 0053d31c: MOV ESI,EBX
// 0053d31e: MOV AL,byte ptr [ESI]
//   Label: LAB_0053d31e
// 0053d320: CMP AL,DL
// 0053d322: JZ 0x0053d336
//   XREF to: 0053d336 (CONDITIONAL_JUMP)
// 0053d324: CMP AL,0x0
// 0053d326: JZ 0x0053d334
//   XREF to: 0053d334 (CONDITIONAL_JUMP)
// 0053d328: INC ESI
// 0053d329: MOV AL,byte ptr [ESI]
// 0053d32b: CMP AL,DL
// 0053d32d: JZ 0x0053d336
//   XREF to: 0053d336 (CONDITIONAL_JUMP)
// 0053d32f: INC ESI
// 0053d330: CMP AL,0x0
// 0053d332: JNZ 0x0053d31e
//   XREF to: 0053d31e (CONDITIONAL_JUMP)
// 0053d334: SUB ESI,ESI
//   Label: LAB_0053d334
// 0053d336: TEST ESI,ESI
//   Label: LAB_0053d336
// 0053d338: JNZ 0x0053d354
//   XREF to: 0053d354 (CONDITIONAL_JUMP)
// 0053d33a: PUSH EBX
// 0053d33b: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0053d33f: PUSH EDX
// 0053d340: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053d345: ADD ESP,0x8
// 0053d348: TEST EAX,EAX
// 0053d34a: JNZ 0x0053d36d
//   XREF to: 0053d36d (CONDITIONAL_JUMP)
// 0053d34c: MOV EAX,0x1
//   Label: LAB_0053d34c
// 0053d351: POP ESI
// 0053d352: POP EBX
// 0053d353: RET
// 0053d354: PUSH 0x63cb94
//   Label: LAB_0053d354
//   XREF to: 0063cb94 (DATA)
// 0053d359: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053d35f: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053d360: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053d365: ADD ESP,0x8
// 0053d368: XOR EAX,EAX
// 0053d36a: POP ESI
// 0053d36b: POP EBX
// 0053d36c: RET
// 0053d36d: PUSH EBX
//   Label: LAB_0053d36d
// 0053d36e: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0053d372: PUSH ECX
// 0053d373: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053d378: ADD ESP,0x8
// 0053d37b: TEST EAX,EAX
// 0053d37d: JZ 0x0053d34c
//   XREF to: 0053d34c (CONDITIONAL_JUMP)
// 0053d37f: PUSH EBX
// 0053d380: PUSH 0x63cbbc
//   XREF to: 0063cbbc (DATA)
// 0053d385: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053d38b: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0053d38c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053d391: ADD ESP,0xc
// 0053d394: XOR EAX,EAX
// 0053d396: POP ESI
// 0053d397: POP EBX
// 0053d398: RET
