// Name: core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0
// Address: 0041b6b0
// Address Range: [[0041b6b0, 0041b6c4]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0(SBodyPartFire * * objs)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 (00419130) at 0041916c [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SBodyPartFireTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_bodypart_cpp_freeBodyPartFires_FUN_0041b6b0(SBodyPartFire **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,2,&g_SBodyPartFireTypeInfo);
  return iVar1;
}


// Assembly code:
// 0041b6b0: PUSH 0x65aee0
//   Label: core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0
//   XREF to: 0065aee0 (DATA)
// 0041b6b5: PUSH 0x2
// 0041b6b7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041b6bb: PUSH EDX
// 0041b6bc: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0041b6c1: ADD ESP,0xc
// 0041b6c4: RET
