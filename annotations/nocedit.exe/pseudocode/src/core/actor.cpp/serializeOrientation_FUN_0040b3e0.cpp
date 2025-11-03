// Name: core_actor.cpp_serializeOrientation_FUN_0040b3e0
// Address: 0040b3e0
// Address Range: [[0040b3e0, 0040b470]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeOrientation_FUN_0040b3e0(COrientation * orient_ptr, char * property_name)
// Cross-references:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 (0040c1c0) at 0040c1e2 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_load_FUN_00422c80 (00422c80) at 00422cd6 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0 (0050adf0) at 0050aeb2 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_serialize_FUN_005e2c40 (005e2c40) at 005e2c5a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_00613ebf
//   TerminatedCString s_s_g_g_g_00613ec8
//   string s_Euler_PBH_orientation_0066e0f0
//   char[104] g_PropertyNamePrefix
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_actor.cpp_serializeDescription_FUN_0040b290
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeOrientation_FUN_0040b3e0(COrientation *orient_ptr,char *property_name)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Euler PBH orientation",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%g,%g,%g",g_PropertyNamePrefix,(double)orient_ptr->pitch,
               (double)orient_ptr->heading,(double)orient_ptr->bank);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290
            ("Euler PBH orientation",in_stack_0000000c);
  return;
}


// Assembly code:
// 0040b3e0: PUSH EBX
//   Label: core_actor.cpp_serializeOrientation_FUN_0040b3e0
// 0040b3e1: PUSH EDI
// 0040b3e2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040b3e6: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b3ed: JNZ 0x0040b43c
//   XREF to: 0040b43c (CONDITIONAL_JUMP)
// 0040b3ef: LEA EDX,[EAX + 0x4]
// 0040b3f2: PUSH EDX
// 0040b3f3: LEA EDX,[EAX + 0x8]
// 0040b3f6: PUSH EDX
// 0040b3f7: PUSH EAX
// 0040b3f8: PUSH 0x613ebf
//   XREF to: 00613ebf (DATA)
// 0040b3fd: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b403: PUSH EBX
// 0040b404: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b409: ADD ESP,0x14
// 0040b40c: CMP EAX,0x3
// 0040b40f: JNZ 0x0040b426
//   XREF to: 0040b426 (CONDITIONAL_JUMP)
// 0040b411: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_0040b411
//   XREF to: Stack[0x8] (READ)
// 0040b415: PUSH EDI
// 0040b416: PUSH 0x66e0f0
//   XREF to: 0066e0f0 (DATA)
// 0040b41b: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b420: ADD ESP,0x8
// 0040b423: POP EDI
// 0040b424: POP EBX
// 0040b425: RET
// 0040b426: PUSH ESI
//   Label: LAB_0040b426
// 0040b427: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040b42b: PUSH ESI
// 0040b42c: PUSH 0x66e0f0
//   XREF to: 0066e0f0 (DATA)
// 0040b431: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b436: ADD ESP,0x8
// 0040b439: POP ESI
// 0040b43a: JMP 0x0040b411
//   XREF to: 0040b411 (UNCONDITIONAL_JUMP)
// 0040b43c: SUB ESP,0x8
//   Label: LAB_0040b43c
// 0040b43f: FLD float ptr [EAX + 0x4]
// 0040b442: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0040b445: SUB ESP,0x8
// 0040b448: FLD float ptr [EAX + 0x8]
// 0040b44b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040b44e: SUB ESP,0x8
// 0040b451: FLD float ptr [EAX]
// 0040b453: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040b456: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040b45b: PUSH 0x613ec8
//   XREF to: 00613ec8 (DATA)
// 0040b460: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b466: PUSH ECX
// 0040b467: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b46c: ADD ESP,0x24
// 0040b46f: JMP 0x0040b411
//   XREF to: 0040b411 (UNCONDITIONAL_JUMP)
