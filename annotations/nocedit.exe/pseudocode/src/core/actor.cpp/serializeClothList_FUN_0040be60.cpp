// Name: core_actor.cpp_serializeClothList_FUN_0040be60
// Address: 0040be60
// Address Range: [[0040be60, 0040bff7]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeClothList_FUN_0040be60(CClothList * cloth_list, char * property_name)
// Cross-references:
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0 (004283a0) at 004284aa [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f6222 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_load_FUN_00527230 (00527230) at 005272a0 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fc0d1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Cloth_list_opening_brace_00614080
//   TerminatedCString s_d_00614099
//   TerminatedCString s_cloth_count_0061409c
//   TerminatedCString s_clothCount_006140a8
//   TerminatedCString s_anon_006140b3
//   TerminatedCString s_cloth_filename_entry_006140bd
//   TerminatedCString s_Cloth_list_closing_brace_006140d2
//   TerminatedCString s_s_s_006140eb
//   TerminatedCString s_s_d_clothCount_006140f6
//   TerminatedCString s_s_s_0061410a
//   TerminatedCString s_s_00614112
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

void __cdecl
core_actor_cpp_serializeClothList_FUN_0040be60(CClothList *cloth_list,char *property_name)

{
  int iVar1;
  int iVar2;
  CClothList *pCVar3;
  
  if (g_ActorReadingMode != 1) {
    iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0
                      (g_ActorDataFile,"%s{ // %s\n",&g_PropertyNamePrefix,property_name);
    core_actor_cpp_CDemonActor_FUN_0040aee0(iVar1);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0
                      (g_ActorDataFile,"%s%d // clothCount\n",&g_PropertyNamePrefix,
                       *(undefined4 *)cloth_list);
    if (0 < *(int *)cloth_list) {
      pCVar3 = cloth_list + 4;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0
                          (g_ActorDataFile,"%s\"%s\"\n","%s\"%s\"\n",&g_PropertyNamePrefix,
                           pCVar3);
        pCVar3 = pCVar3 + 0x28;
      } while (iVar2 < *(int *)cloth_list);
    }
    core_actor_cpp_CDemonActor_FUN_0040aee0(iVar1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n",&g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Cloth list opening brace",property_name);
    }
  } while (iVar1 != 10);
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",cloth_list);
  if (iVar1 != 1) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("cloth count",property_name);
  }
  iVar1 = 0;
  core_actor_cpp_serializeDescription_FUN_0040b290("clothCount",property_name);
  if (0 < *(int *)cloth_list) {
    pCVar3 = cloth_list + 4;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (g_ActorDataFile," \"%[^\"]\"\n",g_ActorDataFile," \"%[^\"]\"\n",pCVar3);
      if (iVar2 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("cloth filename entry",property_name);
      }
      iVar1 = iVar1 + 1;
      pCVar3 = pCVar3 + 0x28;
    } while (iVar1 < *(int *)cloth_list);
  }
  do {
    while (iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("Cloth list closing brace",property_name);
  } while (iVar1 != 10);
  return;
}


// Assembly code:
// 0040be60: PUSH EBX
//   Label: core_actor.cpp_serializeClothList_FUN_0040be60
// 0040be61: PUSH ESI
// 0040be62: PUSH EDI
// 0040be63: PUSH EBP
// 0040be64: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040be68: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040be6c: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040be73: JNZ 0x0040bf56
//   XREF to: 0040bf56 (CONDITIONAL_JUMP)
// 0040be79: MOV ESI,dword ptr [0x00822034]
//   Label: LAB_0040be79
//   XREF to: 00822034 (READ)
// 0040be7f: PUSH ESI
// 0040be80: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040be85: ADD ESP,0x4
// 0040be88: MOV ESI,EAX
// 0040be8a: TEST EAX,EAX
// 0040be8c: JL 0x0040bf2b
//   XREF to: 0040bf2b (CONDITIONAL_JUMP)
// 0040be92: CMP ESI,0xa
//   Label: LAB_0040be92
// 0040be95: JNZ 0x0040be79
//   XREF to: 0040be79 (CONDITIONAL_JUMP)
// 0040be97: PUSH EBP
// 0040be98: PUSH 0x614099
//   XREF to: 00614099 (DATA)
// 0040be9d: MOV EDI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bea3: PUSH EDI
// 0040bea4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040bea9: ADD ESP,0xc
// 0040beac: CMP EAX,0x1
// 0040beaf: JZ 0x0040bebf
//   XREF to: 0040bebf (CONDITIONAL_JUMP)
// 0040beb1: PUSH EBX
// 0040beb2: PUSH 0x61409c
//   XREF to: 0061409c (DATA)
// 0040beb7: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bebc: ADD ESP,0x8
// 0040bebf: PUSH EBX
//   Label: LAB_0040bebf
// 0040bec0: PUSH 0x6140a8
//   XREF to: 006140a8 (DATA)
// 0040bec5: XOR EDI,EDI
// 0040bec7: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040becc: MOV EAX,dword ptr [EBP]
// 0040becf: ADD ESP,0x8
// 0040bed2: TEST EAX,EAX
// 0040bed4: JLE 0x0040bf0c
//   XREF to: 0040bf0c (CONDITIONAL_JUMP)
// 0040bed6: LEA ESI,[EBP + 0x4]
// 0040bed9: PUSH ESI
//   Label: LAB_0040bed9
// 0040beda: PUSH 0x6140b3
//   XREF to: 006140b3 (DATA)
// 0040bedf: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bee5: PUSH ECX
// 0040bee6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040beeb: ADD ESP,0xc
// 0040beee: CMP EAX,0x1
// 0040bef1: JZ 0x0040bf01
//   XREF to: 0040bf01 (CONDITIONAL_JUMP)
// 0040bef3: PUSH EBX
// 0040bef4: PUSH 0x6140bd
//   XREF to: 006140bd (DATA)
// 0040bef9: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040befe: ADD ESP,0x8
// 0040bf01: INC EDI
//   Label: LAB_0040bf01
// 0040bf02: MOV EDX,dword ptr [EBP]
// 0040bf05: ADD ESI,0x28
// 0040bf08: CMP EDI,EDX
// 0040bf0a: JL 0x0040bed9
//   XREF to: 0040bed9 (CONDITIONAL_JUMP)
// 0040bf0c: MOV ESI,dword ptr [0x00822034]
//   Label: LAB_0040bf0c
//   XREF to: 00822034 (READ)
// 0040bf12: PUSH ESI
// 0040bf13: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040bf18: ADD ESP,0x4
// 0040bf1b: MOV ESI,EAX
// 0040bf1d: TEST EAX,EAX
// 0040bf1f: JL 0x0040bf3e
//   XREF to: 0040bf3e (CONDITIONAL_JUMP)
// 0040bf21: CMP ESI,0xa
// 0040bf24: JNZ 0x0040bf0c
//   XREF to: 0040bf0c (CONDITIONAL_JUMP)
// 0040bf26: POP EBP
// 0040bf27: POP EDI
// 0040bf28: POP ESI
// 0040bf29: POP EBX
// 0040bf2a: RET
// 0040bf2b: PUSH EBX
//   Label: LAB_0040bf2b
// 0040bf2c: PUSH 0x614080
//   XREF to: 00614080 (DATA)
// 0040bf31: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bf36: ADD ESP,0x8
// 0040bf39: JMP 0x0040be92
//   XREF to: 0040be92 (UNCONDITIONAL_JUMP)
// 0040bf3e: PUSH EBX
//   Label: LAB_0040bf3e
// 0040bf3f: PUSH 0x6140d2
//   XREF to: 006140d2 (DATA)
// 0040bf44: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bf49: ADD ESP,0x8
// 0040bf4c: CMP ESI,0xa
// 0040bf4f: JNZ 0x0040bf0c
//   XREF to: 0040bf0c (CONDITIONAL_JUMP)
// 0040bf51: POP EBP
// 0040bf52: POP EDI
// 0040bf53: POP ESI
// 0040bf54: POP EBX
// 0040bf55: RET
// 0040bf56: PUSH EBX
//   Label: LAB_0040bf56
// 0040bf57: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bf5c: PUSH 0x6140eb
//   XREF to: 006140eb (DATA)
// 0040bf61: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bf67: PUSH ECX
// 0040bf68: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bf6d: ADD ESP,0x10
// 0040bf70: PUSH 0x1
// 0040bf72: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040bf77: ADD ESP,0x4
// 0040bf7a: MOV EBX,dword ptr [EBP]
// 0040bf7d: PUSH EBX
// 0040bf7e: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bf83: PUSH 0x6140f6
//   XREF to: 006140f6 (DATA)
// 0040bf88: MOV ESI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bf8e: PUSH ESI
// 0040bf8f: XOR EBX,EBX
// 0040bf91: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bf96: MOV EDI,dword ptr [EBP]
// 0040bf99: ADD ESP,0x10
// 0040bf9c: TEST EDI,EDI
// 0040bf9e: JLE 0x0040bfd0
//   XREF to: 0040bfd0 (CONDITIONAL_JUMP)
// 0040bfa0: LEA ESI,[EBP + 0x4]
// 0040bfa3: PUSH ESI
//   Label: LAB_0040bfa3
// 0040bfa4: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bfa9: PUSH 0x61410a
//   XREF to: 0061410a (DATA)
// 0040bfae: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040bfb3: PUSH EAX
// 0040bfb4: INC EBX
// 0040bfb5: ADD ESI,0x28
// 0040bfb8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bfbd: MOV EDX,dword ptr [EBP]
// 0040bfc0: ADD ESP,0x10
// 0040bfc3: CMP EBX,EDX
// 0040bfc5: JL 0x0040bfa3
//   XREF to: 0040bfa3 (CONDITIONAL_JUMP)
// 0040bfc7: LEA EAX,[EAX]
// 0040bfcd: LEA EDX,[EDX]
// 0040bfd0: PUSH -0x1
//   Label: LAB_0040bfd0
// 0040bfd2: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040bfd7: ADD ESP,0x4
// 0040bfda: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bfdf: PUSH 0x614112
//   XREF to: 00614112 (DATA)
// 0040bfe4: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bfea: PUSH ECX
// 0040bfeb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bff0: ADD ESP,0xc
// 0040bff3: POP EBP
// 0040bff4: POP EDI
// 0040bff5: POP ESI
// 0040bff6: POP EBX
// 0040bff7: RET
