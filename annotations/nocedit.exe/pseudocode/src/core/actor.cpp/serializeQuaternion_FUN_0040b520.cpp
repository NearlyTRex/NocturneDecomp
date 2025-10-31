// Name: core_actor.cpp_serializeQuaternion_FUN_0040b520
// Address: 0040b520
// Address Range: [[0040b520, 0040b5bd]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeQuaternion_FUN_0040b520(CQuaternion4f * quat_ptr, char * property_type)
// Cross-references:
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d3e7 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054dec7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_f_00613eed
//   TerminatedCString s_s_g_g_g_g_00613ef9
//   string s_Quaternion_0066e118
//   char* g_PropertyNamePrefix = 00000000
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_actor.cpp_serializeDescription_FUN_0040b290
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeQuaternion_FUN_0040b520(CQuaternion4f *quat_ptr,char *property_type)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (g_ActorDataFile,"%f,%f,%f,%f",quat_ptr,&quat_ptr->x,&quat_ptr->y);
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("Quaternion",property_type)
      ;
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%g,%g,%g,%g",&g_PropertyNamePrefix,(double)quat_ptr->w,
               (double)quat_ptr->x,(double)quat_ptr->y,(double)quat_ptr->z);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("Quaternion",in_stack_0000000c);
  return;
}


// Assembly code:
// 0040b520: PUSH EBX
//   Label: core_actor.cpp_serializeQuaternion_FUN_0040b520
// 0040b521: PUSH EDI
// 0040b522: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040b526: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b52d: JNZ 0x0040b580
//   XREF to: 0040b580 (CONDITIONAL_JUMP)
// 0040b52f: LEA EDX,[EAX + 0xc]
// 0040b532: PUSH EDX
// 0040b533: LEA EDX,[EAX + 0x8]
// 0040b536: PUSH EDX
// 0040b537: LEA EDX,[EAX + 0x4]
// 0040b53a: PUSH EDX
// 0040b53b: PUSH EAX
// 0040b53c: PUSH 0x613eed
//   XREF to: 00613eed (DATA)
// 0040b541: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b547: PUSH EBX
// 0040b548: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b54d: ADD ESP,0x18
// 0040b550: CMP EAX,0x4
// 0040b553: JNZ 0x0040b56a
//   XREF to: 0040b56a (CONDITIONAL_JUMP)
// 0040b555: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_0040b555
//   XREF to: Stack[0x8] (READ)
// 0040b559: PUSH EDI
// 0040b55a: PUSH 0x66e118
//   XREF to: 0066e118 (DATA)
// 0040b55f: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b564: ADD ESP,0x8
// 0040b567: POP EDI
// 0040b568: POP EBX
// 0040b569: RET
// 0040b56a: PUSH ESI
//   Label: LAB_0040b56a
// 0040b56b: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040b56f: PUSH ESI
// 0040b570: PUSH 0x66e118
//   XREF to: 0066e118 (DATA)
// 0040b575: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b57a: ADD ESP,0x8
// 0040b57d: POP ESI
// 0040b57e: JMP 0x0040b555
//   XREF to: 0040b555 (UNCONDITIONAL_JUMP)
// 0040b580: SUB ESP,0x8
//   Label: LAB_0040b580
// 0040b583: FLD float ptr [EAX + 0xc]
// 0040b586: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0040b589: SUB ESP,0x8
// 0040b58c: FLD float ptr [EAX + 0x8]
// 0040b58f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040b592: SUB ESP,0x8
// 0040b595: FLD float ptr [EAX + 0x4]
// 0040b598: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040b59b: SUB ESP,0x8
// 0040b59e: FLD float ptr [EAX]
// 0040b5a0: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0040b5a3: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040b5a8: PUSH 0x613ef9
//   XREF to: 00613ef9 (DATA)
// 0040b5ad: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b5b3: PUSH ECX
// 0040b5b4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b5b9: ADD ESP,0x2c
// 0040b5bc: JMP 0x0040b555
//   XREF to: 0040b555 (UNCONDITIONAL_JUMP)
