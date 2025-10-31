// Name: core_frankgen.cpp_FUN_004d1720
// Address: 004d1720
// Address Range: [[004d1720, 004d1789]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * core_frankgen.cpp_FUN_004d1720(CFrankenstienMachine * this_ptr)
// Cross-references:
//   core_frankgen.cpp_FUN_004d16e0 (004d16e0) at 004d16fa [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable PTR_core_frankgen.cpp_FUN_0065e684
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_course.cpp_CCourse_ctor_FUN_004424c0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_FUN_004d1720(CFrankenstienMachine *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CCourse *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)&pCVar1[1].location.area_id);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0((CCourse *)(pCVar2 + 1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar3 + 1));
  *(CDemonActor_vtable **)(pCVar2[-2].animation_state + 100) = &PTR_core_frankgen_cpp_FUN_0065e684;
  pCVar2[-0xffffffff00000002].animation_state[0x6c] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x6d] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x6e] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x6f] = '\0';
  pCVar2[-2].animation_state[0x70] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x90] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x91] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x92] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x93] = '\0';
  pCVar2[1].part_visibility_flags[1] = 0;
  return (CFrankenstienMachine *)(pCVar2[-3].animation_state + 0x8c);
}


// Assembly code:
// 004d1720: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_frankgen.cpp_FUN_004d1720
//   XREF to: Stack[0x4] (READ)
// 004d1724: PUSH EAX
// 004d1725: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004d172a: ADD ESP,0x4
// 004d172d: ADD EAX,0x184
// 004d1732: PUSH EAX
// 004d1733: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004d1738: ADD ESP,0x4
// 004d173b: ADD EAX,0x17c
// 004d1740: PUSH EAX
// 004d1741: CALL core_course.cpp_CCourse_ctor_FUN_004424c0
//   XREF to: 004424c0 (UNCONDITIONAL_CALL)
// 004d1746: ADD ESP,0x4
// 004d1749: ADD EAX,0xc
// 004d174c: PUSH EAX
// 004d174d: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004d1752: MOV dword ptr [EAX + 0xfffffe48],0x65e684
//   XREF to: 0065e684 (DATA)
// 004d175c: MOV dword ptr [EAX + 0xfffffe50],0x0
// 004d1766: MOV byte ptr [EAX + 0xfffffe54],0x0
// 004d176d: MOV dword ptr [EAX + 0xfffffe74],0x0
// 004d1777: ADD ESP,0x4
// 004d177a: MOV dword ptr [EAX + 0x180],0x0
// 004d1784: SUB EAX,0x30c
// 004d1789: RET
