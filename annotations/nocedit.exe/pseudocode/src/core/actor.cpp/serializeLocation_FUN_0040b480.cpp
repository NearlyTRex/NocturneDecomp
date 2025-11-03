// Name: core_actor.cpp_serializeLocation_FUN_0040b480
// Address: 0040b480
// Address Range: [[0040b480, 0040b51a]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeLocation_FUN_0040b480(CLocation * location_ptr, char * property_name)
// Cross-references:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 (0040c1c0) at 0040c1d1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_f_f_f_00613ed3
//   TerminatedCString s_s_d_g_g_g_00613edf
//   string s_4D_location_0066e108
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
core_actor_cpp_serializeLocation_FUN_0040b480(CLocation *location_ptr,char *property_name)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("4D location",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%d,%g,%g,%g",g_PropertyNamePrefix,location_ptr->area_id,
               (double)(location_ptr->position).x,(double)(location_ptr->position).y,
               (double)(location_ptr->position).z);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("4D location",in_stack_0000000c);
  return;
}


// Assembly code:
// 0040b480: PUSH ESI
//   Label: core_actor.cpp_serializeLocation_FUN_0040b480
// 0040b481: PUSH EDI
// 0040b482: PUSH EBP
// 0040b483: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040b487: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b48e: JNZ 0x0040b4e0
//   XREF to: 0040b4e0 (CONDITIONAL_JUMP)
// 0040b490: LEA EDX,[EAX + 0x8]
// 0040b493: PUSH EDX
// 0040b494: LEA EDX,[EAX + 0x4]
// 0040b497: PUSH EDX
// 0040b498: PUSH EAX
// 0040b499: ADD EAX,0xc
// 0040b49c: PUSH EAX
// 0040b49d: PUSH 0x613ed3
//   XREF to: 00613ed3 (DATA)
// 0040b4a2: MOV ESI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b4a8: PUSH ESI
// 0040b4a9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b4ae: ADD ESP,0x18
// 0040b4b1: CMP EAX,0x4
// 0040b4b4: JNZ 0x0040b4cc
//   XREF to: 0040b4cc (CONDITIONAL_JUMP)
// 0040b4b6: MOV EBP,dword ptr [ESP + 0x14]
//   Label: LAB_0040b4b6
//   XREF to: Stack[0x8] (READ)
// 0040b4ba: PUSH EBP
// 0040b4bb: PUSH 0x66e108
//   XREF to: 0066e108 (DATA)
// 0040b4c0: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b4c5: ADD ESP,0x8
// 0040b4c8: POP EBP
// 0040b4c9: POP EDI
// 0040b4ca: POP ESI
// 0040b4cb: RET
// 0040b4cc: MOV EDI,dword ptr [ESP + 0x14]
//   Label: LAB_0040b4cc
//   XREF to: Stack[0x8] (READ)
// 0040b4d0: PUSH EDI
// 0040b4d1: PUSH 0x66e108
//   XREF to: 0066e108 (DATA)
// 0040b4d6: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b4db: ADD ESP,0x8
// 0040b4de: JMP 0x0040b4b6
//   XREF to: 0040b4b6 (UNCONDITIONAL_JUMP)
// 0040b4e0: PUSH EBX
//   Label: LAB_0040b4e0
// 0040b4e1: SUB ESP,0x8
// 0040b4e4: FLD float ptr [EAX + 0x8]
// 0040b4e7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040b4ea: SUB ESP,0x8
// 0040b4ed: FLD float ptr [EAX + 0x4]
// 0040b4f0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040b4f3: SUB ESP,0x8
// 0040b4f6: FLD float ptr [EAX]
// 0040b4f8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0040b4fb: MOV ECX,dword ptr [EAX + 0xc]
// 0040b4fe: PUSH ECX
// 0040b4ff: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040b504: PUSH 0x613edf
//   XREF to: 00613edf (DATA)
// 0040b509: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b50f: PUSH EBX
// 0040b510: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b515: ADD ESP,0x28
// 0040b518: POP EBX
// 0040b519: JMP 0x0040b4b6
//   XREF to: 0040b4b6 (UNCONDITIONAL_JUMP)
