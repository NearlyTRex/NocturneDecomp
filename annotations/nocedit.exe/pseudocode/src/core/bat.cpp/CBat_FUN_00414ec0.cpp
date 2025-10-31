// Name: core_bat.cpp_CBat_FUN_00414ec0
// Address: 00414ec0
// Address Range: [[00414ec0, 00414efb]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_00414ec0(CBat * this_ptr)
// Globals:
//   TerminatedCString s_data_s_00615417
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414ec0(CBat *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base_actor,in_stack_00000008)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)this_ptr->model_name,in_stack_00000008);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"data\\%s\n",this_ptr->course_filename);
  return;
}


// Assembly code:
// 00414ec0: PUSH EBX
//   Label: core_bat.cpp_CBat_FUN_00414ec0
// 00414ec1: PUSH ESI
// 00414ec2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00414ec6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00414eca: PUSH ESI
// 00414ecb: PUSH EBX
// 00414ecc: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00414ed1: ADD ESP,0x8
// 00414ed4: PUSH ESI
// 00414ed5: LEA EAX,[EBX + 0x188]
// 00414edb: PUSH EAX
// 00414edc: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 00414ee1: ADD ESP,0x8
// 00414ee4: LEA EAX,[EBX + 0x158]
// 00414eea: PUSH EAX
// 00414eeb: PUSH 0x615417
//   XREF to: 00615417 (DATA)
// 00414ef0: PUSH ESI
// 00414ef1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00414ef6: ADD ESP,0xc
// 00414ef9: POP ESI
// 00414efa: POP EBX
// 00414efb: RET
