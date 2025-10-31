// Name: core_ladder.cpp_FUN_00502540
// Address: 00502540
// Address Range: [[00502540, 005025e5]]
// Convention: __cdecl
// Signature: CLadder * core_ladder.cpp_FUN_00502540(CLadder * this_ptr)
// Cross-references:
//   core_ladder.cpp_FUN_00502500 (00502500) at 0050251a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_null_kfm_00630e0b
//   CDemonActor_vtable PTR_core_ladder.cpp_FUN_006605f4
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_FUN_00502540(CLadder *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_ladder_cpp_FUN_006605f4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"null.kfm")
  ;
  this_ptr_00[1].part_visibility_flags[0] = 0x40000000;
  this_ptr_00[1].part_visibility_flags[1] = 0x41200000;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  this_ptr_00[1].part_visibility_flags[6] = 0;
  this_ptr_00[1].part_visibility_flags[5] = this_ptr_00[1].part_visibility_flags[6];
  this_ptr_00[1].part_visibility_flags[4] = this_ptr_00[1].part_visibility_flags[5];
  this_ptr_00[1].part_visibility_flags[9] = 0;
  this_ptr_00[1].part_visibility_flags[8] = this_ptr_00[1].part_visibility_flags[9];
  this_ptr_00[1].part_visibility_flags[7] = this_ptr_00[1].part_visibility_flags[8];
  this_ptr_00[1].part_visibility_flags[10] = 0;
  return (CLadder *)(this_ptr_00[-1].part_visibility_flags + 9);
}


// Assembly code:
// 00502540: PUSH EBX
//   Label: core_ladder.cpp_FUN_00502540
// 00502541: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00502545: PUSH EBX
// 00502546: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0050254b: ADD ESP,0x4
// 0050254e: ADD EAX,0x158
// 00502553: PUSH EAX
// 00502554: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00502559: ADD ESP,0x4
// 0050255c: LEA EBX,[EAX + 0xfffffea8]
// 00502562: PUSH 0x630e0b
//   XREF to: 00630e0b (DATA)
// 00502567: LEA EAX,[EBX + 0x158]
// 0050256d: PUSH EAX
// 0050256e: MOV dword ptr [EBX + 0x154],0x6605f4
//   XREF to: 006605f4 (DATA)
// 00502578: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0050257d: MOV dword ptr [EBX + 0x2d4],0x40000000
// 00502587: MOV dword ptr [EBX + 0x2d8],0x41200000
// 00502591: MOV dword ptr [EBX + 0x2dc],0x0
// 0050259b: LEA EAX,[EBX + 0x2e4]
// 005025a1: MOV dword ptr [EBX + 0x2e0],0x0
// 005025ab: MOV dword ptr [EAX + 0x8],0x0
// 005025b2: MOV EDX,dword ptr [EAX + 0x8]
// 005025b5: MOV dword ptr [EAX + 0x4],EDX
// 005025b8: MOV EDX,dword ptr [EAX + 0x4]
// 005025bb: MOV dword ptr [EAX],EDX
// 005025bd: LEA EAX,[EBX + 0x2f0]
// 005025c3: MOV dword ptr [EAX + 0x8],0x0
// 005025ca: ADD ESP,0x8
// 005025cd: MOV EDX,dword ptr [EAX + 0x8]
// 005025d0: MOV dword ptr [EAX + 0x4],EDX
// 005025d3: MOV EDX,dword ptr [EAX + 0x4]
// 005025d6: MOV dword ptr [EAX],EDX
// 005025d8: MOV EAX,EBX
// 005025da: MOV dword ptr [EBX + 0x2fc],0x0
// 005025e4: POP EBX
// 005025e5: RET
