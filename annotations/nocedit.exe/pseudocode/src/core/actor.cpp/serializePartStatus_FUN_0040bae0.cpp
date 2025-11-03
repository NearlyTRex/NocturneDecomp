// Name: core_actor.cpp_serializePartStatus_FUN_0040bae0
// Address: 0040bae0
// Address Range: [[0040bae0, 0040bd6e]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializePartStatus_FUN_0040bae0(void * part, char * property_name)
// Cross-references:
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d361 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_load_FUN_004e81c0 (004e81c0) at 004e827f [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f2670 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f61d6 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_serialize_FUN_005db880 (005db880) at 005db8c8 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fc054 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_part_status_opening_brac_00613f83
//   TerminatedCString s_d_00613f9d
//   TerminatedCString s_d_00613fa0
//   TerminatedCString s_description_00613fa3
//   TerminatedCString s_part_status_entry_00613faf
//   TerminatedCString s_anon_00613fc1
//   TerminatedCString s_d_00613fc3
//   TerminatedCString s_description_00613fc6
//   TerminatedCString s_part_texture_entry_00613fd2
//   TerminatedCString s_anon_00613fe5
//   TerminatedCString s_part_status_info_closing_00613fe7
//   TerminatedCString s_s_s_00614006
//   TerminatedCString s_s_d_00614011
//   TerminatedCString s_s_00614017
//   TerminatedCString s_d_0061401a
//   TerminatedCString s_anon_0061401e
//   TerminatedCString s_s_00614020
//   TerminatedCString s_d_00614023
//   TerminatedCString s_anon_00614027
//   TerminatedCString s_s_00614029
//   char[104] g_PropertyNamePrefix
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_skeleton.cpp_FUN_005a0410
//   core_skeleton.cpp_FUN_005a0430
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializePartStatus_FUN_0040bae0(void *part,char *property_name)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  char *pcStack0000000c;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s%d\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s");
    pvVar1 = (void *)((int)part + 0x78);
    do {
      part = (void *)((int)part + 4);
      crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%d ");
    } while (part != pvVar1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\n");
    iVar2 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s");
    do {
      iVar2 = iVar2 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%d ");
    } while (iVar2 < 0x1e);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    pcStack0000000c = g_PropertyNamePrefix;
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n");
    return;
  }
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar2 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("part status opening brace",property_name);
    }
  } while (iVar2 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d",&stack0xffffffec);
  core_skeleton_cpp_FUN_005a0410();
  iVar2 = 0;
  if (0 < unaff_EDI) {
    do {
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("part status entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EDI);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile," ");
  core_skeleton_cpp_FUN_005a0430();
  iVar2 = 0;
  if (0 < unaff_EBX) {
    do {
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d");
      if (iVar3 != 1) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                  ("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile," ");
  do {
    while (iVar2 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
              ("part status info closing brace",property_name);
  } while (iVar2 != 10);
  return;
}


// Assembly code:
// 0040bae0: PUSH EBX
//   Label: core_actor.cpp_serializePartStatus_FUN_0040bae0
// 0040bae1: PUSH ESI
// 0040bae2: PUSH EDI
// 0040bae3: PUSH EBP
// 0040bae4: SUB ESP,0x4
// 0040bae7: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040baeb: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0040baef: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040baf6: JNZ 0x0040bc47
//   XREF to: 0040bc47 (CONDITIONAL_JUMP)
// 0040bafc: MOV EBX,dword ptr [0x00822034]
//   Label: LAB_0040bafc
//   XREF to: 00822034 (READ)
// 0040bb02: PUSH EBX
// 0040bb03: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040bb08: ADD ESP,0x4
// 0040bb0b: MOV EBX,EAX
// 0040bb0d: TEST EAX,EAX
// 0040bb0f: JL 0x0040bc19
//   XREF to: 0040bc19 (CONDITIONAL_JUMP)
// 0040bb15: CMP EBX,0xa
//   Label: LAB_0040bb15
// 0040bb18: JNZ 0x0040bafc
//   XREF to: 0040bafc (CONDITIONAL_JUMP)
// 0040bb1a: MOV EAX,ESP
// 0040bb1c: PUSH EAX
// 0040bb1d: PUSH 0x613f9d
//   XREF to: 00613f9d (DATA)
// 0040bb22: MOV ESI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bb28: PUSH ESI
// 0040bb29: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040bb2e: ADD ESP,0xc
// 0040bb31: PUSH EBP
// 0040bb32: CALL core_skeleton.cpp_FUN_005a0410
//   XREF to: 005a0410 (UNCONDITIONAL_CALL)
// 0040bb37: ADD ESP,0x4
// 0040bb3a: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0040bb3d: XOR EBX,EBX
// 0040bb3f: TEST EAX,EAX
// 0040bb41: JLE 0x0040bb80
//   XREF to: 0040bb80 (CONDITIONAL_JUMP)
// 0040bb43: LEA ESI,[EBP + 0x2140]
// 0040bb49: PUSH ESI
//   Label: LAB_0040bb49
// 0040bb4a: PUSH 0x613fa0
//   XREF to: 00613fa0 (DATA)
// 0040bb4f: MOV EDX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bb55: PUSH EDX
// 0040bb56: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040bb5b: ADD ESP,0xc
// 0040bb5e: CMP EAX,0x1
// 0040bb61: JZ 0x0040bb75
//   XREF to: 0040bb75 (CONDITIONAL_JUMP)
// 0040bb63: PUSH 0x613fa3
//   XREF to: 00613fa3 (DATA)
// 0040bb68: PUSH 0x613faf
//   XREF to: 00613faf (DATA)
// 0040bb6d: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bb72: ADD ESP,0x8
// 0040bb75: MOV ECX,dword ptr [ESP]
//   Label: LAB_0040bb75
//   XREF to: Stack[-0x14] (DATA)
// 0040bb78: INC EBX
// 0040bb79: ADD ESI,0x4
// 0040bb7c: CMP EBX,ECX
// 0040bb7e: JL 0x0040bb49
//   XREF to: 0040bb49 (CONDITIONAL_JUMP)
// 0040bb80: PUSH 0x613fc1
//   Label: LAB_0040bb80
//   XREF to: 00613fc1 (DATA)
// 0040bb85: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bb8b: PUSH EBX
// 0040bb8c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040bb91: ADD ESP,0x8
// 0040bb94: PUSH EBP
// 0040bb95: CALL core_skeleton.cpp_FUN_005a0430
//   XREF to: 005a0430 (UNCONDITIONAL_CALL)
// 0040bb9a: ADD ESP,0x4
// 0040bb9d: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0040bba0: XOR EBX,EBX
// 0040bba2: TEST ESI,ESI
// 0040bba4: JLE 0x0040bbe3
//   XREF to: 0040bbe3 (CONDITIONAL_JUMP)
// 0040bba6: LEA ESI,[EBP + 0x21b8]
// 0040bbac: PUSH ESI
//   Label: LAB_0040bbac
// 0040bbad: PUSH 0x613fc3
//   XREF to: 00613fc3 (DATA)
// 0040bbb2: MOV EBP,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bbb8: PUSH EBP
// 0040bbb9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040bbbe: ADD ESP,0xc
// 0040bbc1: CMP EAX,0x1
// 0040bbc4: JZ 0x0040bbd8
//   XREF to: 0040bbd8 (CONDITIONAL_JUMP)
// 0040bbc6: PUSH 0x613fc6
//   XREF to: 00613fc6 (DATA)
// 0040bbcb: PUSH 0x613fd2
//   XREF to: 00613fd2 (DATA)
// 0040bbd0: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bbd5: ADD ESP,0x8
// 0040bbd8: MOV EAX,dword ptr [ESP]
//   Label: LAB_0040bbd8
//   XREF to: Stack[-0x14] (DATA)
// 0040bbdb: INC EBX
// 0040bbdc: ADD ESI,0x4
// 0040bbdf: CMP EBX,EAX
// 0040bbe1: JL 0x0040bbac
//   XREF to: 0040bbac (CONDITIONAL_JUMP)
// 0040bbe3: PUSH 0x613fe5
//   Label: LAB_0040bbe3
//   XREF to: 00613fe5 (DATA)
// 0040bbe8: MOV EDX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bbee: PUSH EDX
// 0040bbef: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040bbf4: ADD ESP,0x8
// 0040bbf7: MOV ECX,dword ptr [0x00822034]
//   Label: LAB_0040bbf7
//   XREF to: 00822034 (READ)
// 0040bbfd: PUSH ECX
// 0040bbfe: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040bc03: ADD ESP,0x4
// 0040bc06: MOV EBX,EAX
// 0040bc08: TEST EAX,EAX
// 0040bc0a: JL 0x0040bc2c
//   XREF to: 0040bc2c (CONDITIONAL_JUMP)
// 0040bc0c: CMP EBX,0xa
// 0040bc0f: JNZ 0x0040bbf7
//   XREF to: 0040bbf7 (CONDITIONAL_JUMP)
// 0040bc11: ADD ESP,0x4
// 0040bc14: POP EBP
// 0040bc15: POP EDI
// 0040bc16: POP ESI
// 0040bc17: POP EBX
// 0040bc18: RET
// 0040bc19: PUSH EDI
//   Label: LAB_0040bc19
// 0040bc1a: PUSH 0x613f83
//   XREF to: 00613f83 (DATA)
// 0040bc1f: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bc24: ADD ESP,0x8
// 0040bc27: JMP 0x0040bb15
//   XREF to: 0040bb15 (UNCONDITIONAL_JUMP)
// 0040bc2c: PUSH EDI
//   Label: LAB_0040bc2c
// 0040bc2d: PUSH 0x613fe7
//   XREF to: 00613fe7 (DATA)
// 0040bc32: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bc37: ADD ESP,0x8
// 0040bc3a: CMP EBX,0xa
// 0040bc3d: JNZ 0x0040bbf7
//   XREF to: 0040bbf7 (CONDITIONAL_JUMP)
// 0040bc3f: ADD ESP,0x4
// 0040bc42: POP EBP
// 0040bc43: POP EDI
// 0040bc44: POP ESI
// 0040bc45: POP EBX
// 0040bc46: RET
// 0040bc47: PUSH EDI
//   Label: LAB_0040bc47
// 0040bc48: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bc4d: PUSH 0x614006
//   XREF to: 00614006 (DATA)
// 0040bc52: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bc58: PUSH ECX
// 0040bc59: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bc5e: ADD ESP,0x10
// 0040bc61: PUSH 0x1
// 0040bc63: CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040bc68: ADD ESP,0x4
// 0040bc6b: MOV EDI,0x1e
// 0040bc70: PUSH EDI
// 0040bc71: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bc76: PUSH 0x614011
//   XREF to: 00614011 (DATA)
// 0040bc7b: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bc81: PUSH EBX
// 0040bc82: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bc87: ADD ESP,0x10
// 0040bc8a: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bc8f: PUSH 0x614017
//   XREF to: 00614017 (DATA)
// 0040bc94: MOV ESI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bc9a: PUSH ESI
// 0040bc9b: MOV EBX,EBP
// 0040bc9d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bca2: ADD ESP,0xc
// 0040bca5: LEA ESI,[EBP + 0x78]
// 0040bca8: MOV EAX,dword ptr [EBX + 0x2140]
//   Label: LAB_0040bca8
// 0040bcae: PUSH EAX
// 0040bcaf: PUSH 0x61401a
//   XREF to: 0061401a (DATA)
// 0040bcb4: MOV EDX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bcba: PUSH EDX
// 0040bcbb: ADD EBX,0x4
// 0040bcbe: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bcc3: ADD ESP,0xc
// 0040bcc6: CMP EBX,ESI
// 0040bcc8: JNZ 0x0040bca8
//   XREF to: 0040bca8 (CONDITIONAL_JUMP)
// 0040bcca: PUSH 0x61401e
//   XREF to: 0061401e (DATA)
// 0040bccf: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bcd5: PUSH ECX
// 0040bcd6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bcdb: ADD ESP,0x8
// 0040bcde: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bce3: PUSH 0x614020
//   XREF to: 00614020 (DATA)
// 0040bce8: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bcee: PUSH EBX
// 0040bcef: XOR ESI,ESI
// 0040bcf1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bcf6: ADD ESP,0xc
// 0040bcf9: TEST EDI,EDI
// 0040bcfb: JLE 0x0040bd30
//   XREF to: 0040bd30 (CONDITIONAL_JUMP)
// 0040bcfd: MOV EBX,EBP
// 0040bcff: MOV EBP,dword ptr [EBX + 0x21b8]
//   Label: LAB_0040bcff
// 0040bd05: PUSH EBP
// 0040bd06: PUSH 0x614023
//   XREF to: 00614023 (DATA)
// 0040bd0b: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040bd10: PUSH EAX
// 0040bd11: ADD EBX,0x4
// 0040bd14: INC ESI
// 0040bd15: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bd1a: ADD ESP,0xc
// 0040bd1d: CMP ESI,EDI
// 0040bd1f: JL 0x0040bcff
//   XREF to: 0040bcff (CONDITIONAL_JUMP)
// 0040bd21: LEA EAX,[EAX]
// 0040bd27: LEA EDX,[EDX]
// 0040bd2d: LEA EAX,[EAX]
// 0040bd30: PUSH 0x614027
//   Label: LAB_0040bd30
//   XREF to: 00614027 (DATA)
// 0040bd35: MOV EDX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bd3b: PUSH EDX
// 0040bd3c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bd41: ADD ESP,0x8
// 0040bd44: PUSH -0x1
// 0040bd46: CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040bd4b: ADD ESP,0x4
// 0040bd4e: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bd53: PUSH 0x614029
//   XREF to: 00614029 (DATA)
// 0040bd58: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bd5e: PUSH ECX
// 0040bd5f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bd64: ADD ESP,0xc
// 0040bd67: ADD ESP,0x4
// 0040bd6a: POP EBP
// 0040bd6b: POP EDI
// 0040bd6c: POP ESI
// 0040bd6d: POP EBX
// 0040bd6e: RET
