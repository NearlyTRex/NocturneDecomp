// Name: core_actor.cpp_serializeSimBox_FUN_0040bd70
// Address: 0040bd70
// Address Range: [[0040bd70, 0040be5b]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeSimBox_FUN_0040bd70(CSimBox * simbox_ptr, char * property_name)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_load_FUN_00419880 (00419880) at 00419a05 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060 (00422060) at 00422190 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sim_box_state_info_openi_0061402e
//   TerminatedCString s_sim_box_state_info_closi_0061404f
//   TerminatedCString s_s_s_00614070
//   TerminatedCString s_s_0061407b
//   char[104] g_PropertyNamePrefix
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_box.cpp_CBox_loadFromFile_FUN_0041fe90
//   core_box.cpp_CBox_saveToFile_FUN_00420020
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeSimBox_FUN_0040bd70(CSimBox *simbox_ptr,char *property_name)

{
  int iVar1;
  CBox *in_stack_0000000c;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    core_box_cpp_CBox_saveToFile_FUN_00420020(in_stack_0000000c,g_ActorDataFile);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n",g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("sim box state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_box_cpp_CBox_loadFromFile_FUN_0041fe90((CBox *)simbox_ptr,g_ActorDataFile);
  do {
    while( true ) {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("sim box state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}


// Assembly code:
// 0040bd70: PUSH EBX
//   Label: core_actor.cpp_serializeSimBox_FUN_0040bd70
// 0040bd71: PUSH ESI
// 0040bd72: PUSH EBP
// 0040bd73: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040bd77: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040bd7e: JNZ 0x0040bdf6
//   XREF to: 0040bdf6 (CONDITIONAL_JUMP)
// 0040bd84: MOV EBP,dword ptr [0x00822034]
//   Label: LAB_0040bd84
//   XREF to: 00822034 (READ)
// 0040bd8a: PUSH EBP
// 0040bd8b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040bd90: ADD ESP,0x4
// 0040bd93: MOV ESI,EAX
// 0040bd95: TEST EAX,EAX
// 0040bd97: JL 0x0040bdcf
//   XREF to: 0040bdcf (CONDITIONAL_JUMP)
// 0040bd99: CMP ESI,0xa
//   Label: LAB_0040bd99
// 0040bd9c: JNZ 0x0040bd84
//   XREF to: 0040bd84 (CONDITIONAL_JUMP)
// 0040bd9e: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040bda3: PUSH EAX
// 0040bda4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040bda8: PUSH EDX
// 0040bda9: CALL core_box.cpp_CBox_loadFromFile_FUN_0041fe90
//   XREF to: 0041fe90 (UNCONDITIONAL_CALL)
// 0040bdae: ADD ESP,0x8
// 0040bdb1: MOV ECX,dword ptr [0x00822034]
//   Label: LAB_0040bdb1
//   XREF to: 00822034 (READ)
// 0040bdb7: PUSH ECX
// 0040bdb8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040bdbd: ADD ESP,0x4
// 0040bdc0: MOV ESI,EAX
// 0040bdc2: TEST EAX,EAX
// 0040bdc4: JL 0x0040bddf
//   XREF to: 0040bddf (CONDITIONAL_JUMP)
// 0040bdc6: CMP ESI,0xa
// 0040bdc9: JNZ 0x0040bdb1
//   XREF to: 0040bdb1 (CONDITIONAL_JUMP)
// 0040bdcb: POP EBP
// 0040bdcc: POP ESI
// 0040bdcd: POP EBX
// 0040bdce: RET
// 0040bdcf: PUSH EBX
//   Label: LAB_0040bdcf
// 0040bdd0: PUSH 0x61402e
//   XREF to: 0061402e (DATA)
// 0040bdd5: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bdda: ADD ESP,0x8
// 0040bddd: JMP 0x0040bd99
//   XREF to: 0040bd99 (UNCONDITIONAL_JUMP)
// 0040bddf: PUSH EBX
//   Label: LAB_0040bddf
// 0040bde0: PUSH 0x61404f
//   XREF to: 0061404f (DATA)
// 0040bde5: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040bdea: ADD ESP,0x8
// 0040bded: CMP ESI,0xa
// 0040bdf0: JNZ 0x0040bdb1
//   XREF to: 0040bdb1 (CONDITIONAL_JUMP)
// 0040bdf2: POP EBP
// 0040bdf3: POP ESI
// 0040bdf4: POP EBX
// 0040bdf5: RET
// 0040bdf6: PUSH EDI
//   Label: LAB_0040bdf6
// 0040bdf7: PUSH EBX
// 0040bdf8: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bdfd: PUSH 0x614070
//   XREF to: 00614070 (DATA)
// 0040be02: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040be08: PUSH ECX
// 0040be09: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040be0e: ADD ESP,0x10
// 0040be11: PUSH 0x1
// 0040be13: CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040be18: ADD ESP,0x4
// 0040be1b: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040be20: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040be26: PUSH EBX
// 0040be27: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040be2b: PUSH ESI
// 0040be2c: CALL core_box.cpp_CBox_saveToFile_FUN_00420020
//   XREF to: 00420020 (UNCONDITIONAL_CALL)
// 0040be31: ADD ESP,0xc
// 0040be34: PUSH -0x1
// 0040be36: CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040be3b: ADD ESP,0x4
// 0040be3e: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040be43: PUSH 0x61407b
//   XREF to: 0061407b (DATA)
// 0040be48: MOV EDI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040be4e: PUSH EDI
// 0040be4f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040be54: ADD ESP,0xc
// 0040be57: POP EDI
// 0040be58: POP EBP
// 0040be59: POP ESI
// 0040be5a: POP EBX
// 0040be5b: RET
