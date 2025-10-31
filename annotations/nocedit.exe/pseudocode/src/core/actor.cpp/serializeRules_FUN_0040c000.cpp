// Name: core_actor.cpp_serializeRules_FUN_0040c000
// Address: 0040c000
// Address Range: [[0040c000, 0040c1b7]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeRules_FUN_0040c000(void * rules, char * property_name)
// Cross-references:
//   core_door.cpp_CDoor_serialize_FUN_00480aa0 (00480aa0) at 00480c67 [UNCONDITIONAL_CALL]
//   core_lever.cpp_CLever_load_FUN_00504e80 (00504e80) at 00504fe5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Rule_list_opening_brace_00614117
//   TerminatedCString s_d_0061412f
//   TerminatedCString s_rule_count_00614132
//   TerminatedCString s_ruleCount_0061413d
//   TerminatedCString s_anon_00614147
//   TerminatedCString s_rule_0061415c
//   TerminatedCString s_Rule_list_closing_brace_00614161
//   TerminatedCString s_s_s_00614179
//   TerminatedCString s_s_d_ruleCount_00614184
//   TerminatedCString s_s_s_s_00614197
//   TerminatedCString s_s_006141a7
//   char* g_PropertyNamePrefix = 00000000
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_0040aee0
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_actor.cpp_serializeDescription_FUN_0040b290
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeRules_FUN_0040c000(void *rules,char *property_name)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_stack_0000000c;
  int *in_stack_00000010;
  
  if (g_ActorReadingMode != 1) {
    iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0
                      (g_ActorDataFile,"%s{ // %s\n",&g_PropertyNamePrefix,property_name);
    core_actor_cpp_CDemonActor_FUN_0040aee0(iVar1);
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%d // ruleCount\n",&g_PropertyNamePrefix,*in_stack_0000000c);
    iVar1 = 0;
    if (0 < *in_stack_00000010) {
      piVar3 = in_stack_00000010 + 0x7e;
      piVar4 = in_stack_00000010 + 1;
      do {
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (g_ActorDataFile,"%s\"%s\" => \"%s\"\n","%s\"%s\" => \"%s\"\n",&g_PropertyNamePrefix,piVar4,
                   piVar3);
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x19;
        piVar4 = piVar4 + 0x19;
      } while (iVar1 < *in_stack_00000010);
    }
    core_actor_cpp_CDemonActor_FUN_0040aee0((int)in_stack_00000010);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n",&g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Rule list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",rules);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("rule count",property_name);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("ruleCount",property_name);
  iVar1 = 0;
  if (0 < *in_stack_00000010) {
    piVar3 = in_stack_00000010 + 0x7e;
    piVar4 = in_stack_00000010 + 1;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (g_ActorDataFile," \"%[^\"]\" => \"%[^\"]\"\n",g_ActorDataFile," \"%[^\"]\" => \"%[^\"]\"\n",piVar4,
                         piVar3);
      if (iVar2 != 2) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("rule",property_name);
      }
      piVar4 = piVar4 + 0x19;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x19;
    } while (iVar1 < *in_stack_00000010);
  }
  do {
    while (iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("Rule list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}


// Assembly code:
// 0040c000: PUSH EBX
//   Label: core_actor.cpp_serializeRules_FUN_0040c000
// 0040c001: PUSH ESI
// 0040c002: PUSH EDI
// 0040c003: PUSH EBP
// 0040c004: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040c008: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040c00f: JNZ 0x0040c105
//   XREF to: 0040c105 (CONDITIONAL_JUMP)
// 0040c015: MOV ESI,dword ptr [0x00822034]
//   Label: LAB_0040c015
//   XREF to: 00822034 (READ)
// 0040c01b: PUSH ESI
// 0040c01c: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040c021: ADD ESP,0x4
// 0040c024: MOV ESI,EAX
// 0040c026: TEST EAX,EAX
// 0040c028: JL 0x0040c0da
//   XREF to: 0040c0da (CONDITIONAL_JUMP)
// 0040c02e: CMP ESI,0xa
//   Label: LAB_0040c02e
// 0040c031: JNZ 0x0040c015
//   XREF to: 0040c015 (CONDITIONAL_JUMP)
// 0040c033: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040c037: PUSH EDI
// 0040c038: PUSH 0x61412f
//   XREF to: 0061412f (DATA)
// 0040c03d: MOV EBP,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040c043: PUSH EBP
// 0040c044: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040c049: ADD ESP,0xc
// 0040c04c: CMP EAX,0x1
// 0040c04f: JZ 0x0040c05f
//   XREF to: 0040c05f (CONDITIONAL_JUMP)
// 0040c051: PUSH EBX
// 0040c052: PUSH 0x614132
//   XREF to: 00614132 (DATA)
// 0040c057: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040c05c: ADD ESP,0x8
// 0040c05f: PUSH EBX
//   Label: LAB_0040c05f
// 0040c060: PUSH 0x61413d
//   XREF to: 0061413d (DATA)
// 0040c065: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040c06a: ADD ESP,0x8
// 0040c06d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040c071: MOV EDX,dword ptr [EAX]
// 0040c073: XOR EDI,EDI
// 0040c075: TEST EDX,EDX
// 0040c077: JLE 0x0040c0bb
//   XREF to: 0040c0bb (CONDITIONAL_JUMP)
// 0040c079: LEA EBP,[EAX + 0x1f8]
// 0040c07f: LEA ESI,[EAX + 0x4]
// 0040c082: PUSH EBP
//   Label: LAB_0040c082
// 0040c083: PUSH ESI
// 0040c084: PUSH 0x614147
//   XREF to: 00614147 (DATA)
// 0040c089: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040c08e: PUSH EAX
// 0040c08f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040c094: ADD ESP,0x10
// 0040c097: CMP EAX,0x2
// 0040c09a: JZ 0x0040c0aa
//   XREF to: 0040c0aa (CONDITIONAL_JUMP)
// 0040c09c: PUSH EBX
// 0040c09d: PUSH 0x61415c
//   XREF to: 0061415c (DATA)
// 0040c0a2: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040c0a7: ADD ESP,0x8
// 0040c0aa: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0040c0aa
//   XREF to: Stack[0x4] (READ)
// 0040c0ae: ADD ESI,0x64
// 0040c0b1: INC EDI
// 0040c0b2: MOV ECX,dword ptr [EAX]
// 0040c0b4: ADD EBP,0x64
// 0040c0b7: CMP EDI,ECX
// 0040c0b9: JL 0x0040c082
//   XREF to: 0040c082 (CONDITIONAL_JUMP)
// 0040c0bb: MOV EDX,dword ptr [0x00822034]
//   Label: LAB_0040c0bb
//   XREF to: 00822034 (READ)
// 0040c0c1: PUSH EDX
// 0040c0c2: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040c0c7: ADD ESP,0x4
// 0040c0ca: MOV ESI,EAX
// 0040c0cc: TEST EAX,EAX
// 0040c0ce: JL 0x0040c0ed
//   XREF to: 0040c0ed (CONDITIONAL_JUMP)
// 0040c0d0: CMP ESI,0xa
// 0040c0d3: JNZ 0x0040c0bb
//   XREF to: 0040c0bb (CONDITIONAL_JUMP)
// 0040c0d5: POP EBP
// 0040c0d6: POP EDI
// 0040c0d7: POP ESI
// 0040c0d8: POP EBX
// 0040c0d9: RET
// 0040c0da: PUSH EBX
//   Label: LAB_0040c0da
// 0040c0db: PUSH 0x614117
//   XREF to: 00614117 (DATA)
// 0040c0e0: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040c0e5: ADD ESP,0x8
// 0040c0e8: JMP 0x0040c02e
//   XREF to: 0040c02e (UNCONDITIONAL_JUMP)
// 0040c0ed: PUSH EBX
//   Label: LAB_0040c0ed
// 0040c0ee: PUSH 0x614161
//   XREF to: 00614161 (DATA)
// 0040c0f3: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040c0f8: ADD ESP,0x8
// 0040c0fb: CMP ESI,0xa
// 0040c0fe: JNZ 0x0040c0bb
//   XREF to: 0040c0bb (CONDITIONAL_JUMP)
// 0040c100: POP EBP
// 0040c101: POP EDI
// 0040c102: POP ESI
// 0040c103: POP EBX
// 0040c104: RET
// 0040c105: PUSH EBX
//   Label: LAB_0040c105
// 0040c106: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040c10b: PUSH 0x614179
//   XREF to: 00614179 (DATA)
// 0040c110: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040c116: PUSH ECX
// 0040c117: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040c11c: ADD ESP,0x10
// 0040c11f: PUSH 0x1
// 0040c121: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040c126: ADD ESP,0x4
// 0040c129: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040c12d: MOV EBX,dword ptr [EAX]
// 0040c12f: PUSH EBX
// 0040c130: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040c135: PUSH 0x614184
//   XREF to: 00614184 (DATA)
// 0040c13a: MOV ESI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040c140: PUSH ESI
// 0040c141: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040c146: ADD ESP,0x10
// 0040c149: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040c14d: MOV EBP,dword ptr [EAX]
// 0040c14f: XOR EDI,EDI
// 0040c151: TEST EBP,EBP
// 0040c153: JLE 0x0040c190
//   XREF to: 0040c190 (CONDITIONAL_JUMP)
// 0040c155: LEA EBX,[EAX + 0x1f8]
// 0040c15b: LEA ESI,[EAX + 0x4]
// 0040c15e: PUSH EBX
//   Label: LAB_0040c15e
// 0040c15f: PUSH ESI
// 0040c160: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040c165: PUSH 0x614197
//   XREF to: 00614197 (DATA)
// 0040c16a: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040c16f: PUSH EAX
// 0040c170: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040c175: ADD ESP,0x14
// 0040c178: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040c17c: INC EDI
// 0040c17d: ADD EBX,0x64
// 0040c180: MOV EDX,dword ptr [EAX]
// 0040c182: ADD ESI,0x64
// 0040c185: CMP EDI,EDX
// 0040c187: JL 0x0040c15e
//   XREF to: 0040c15e (CONDITIONAL_JUMP)
// 0040c189: LEA EAX,[EAX]
// 0040c18f: NOP
// 0040c190: PUSH -0x1
//   Label: LAB_0040c190
// 0040c192: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040c197: ADD ESP,0x4
// 0040c19a: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040c19f: PUSH 0x6141a7
//   XREF to: 006141a7 (DATA)
// 0040c1a4: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040c1aa: PUSH ECX
// 0040c1ab: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040c1b0: ADD ESP,0xc
// 0040c1b3: POP EBP
// 0040c1b4: POP EDI
// 0040c1b5: POP ESI
// 0040c1b6: POP EBX
// 0040c1b7: RET
