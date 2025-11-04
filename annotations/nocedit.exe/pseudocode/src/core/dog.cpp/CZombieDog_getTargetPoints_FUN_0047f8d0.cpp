// Name: core_dog.cpp_CZombieDog_getTargetPoints_FUN_0047f8d0
// Address: 0047f8d0
// Address Range: [[0047f8d0, 0047f91e]]
// Convention: __cdecl
// Signature: int core_dog.cpp_CZombieDog_getTargetPoints_FUN_0047f8d0(CZombieDog * this_ptr, CVector3f * out_points_array)
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

int __cdecl
core_dog_cpp_CZombieDog_getTargetPoints_FUN_0047f8d0
          (CZombieDog *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base_enemy).base_character.model,&local_10,
                      *(int *)(this_ptr->field1_0xbeb4 + 8));
  if (out_points_array == pCVar1) {
    return 1;
  }
  out_points_array->x = pCVar1->x;
  out_points_array->y = pCVar1->y;
  out_points_array->z = pCVar1->z;
  return 1;
}


// Assembly code:
// 0047f8d0: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_getTargetPoints_FUN_0047f8d0
// 0047f8d1: SUB ESP,0xc
// 0047f8d4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047f8d8: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047f8dc: MOV ECX,dword ptr [EDX + 0xbebc]
// 0047f8e2: PUSH ECX
// 0047f8e3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 0047f8e7: PUSH EAX
// 0047f8e8: LEA EAX,[EDX + 0x158]
// 0047f8ee: PUSH EAX
// 0047f8ef: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0047f8f4: ADD ESP,0xc
// 0047f8f7: CMP EBX,EAX
// 0047f8f9: JNZ 0x0047f905
//   XREF to: 0047f905 (CONDITIONAL_JUMP)
// 0047f8fb: MOV EAX,0x1
// 0047f900: ADD ESP,0xc
// 0047f903: POP EBX
// 0047f904: RET
// 0047f905: MOV EDX,dword ptr [EAX]
//   Label: LAB_0047f905
// 0047f907: MOV dword ptr [EBX],EDX
// 0047f909: MOV EDX,dword ptr [EAX + 0x4]
// 0047f90c: MOV dword ptr [EBX + 0x4],EDX
// 0047f90f: MOV EDX,dword ptr [EAX + 0x8]
// 0047f912: MOV dword ptr [EBX + 0x8],EDX
// 0047f915: MOV EAX,0x1
// 0047f91a: ADD ESP,0xc
// 0047f91d: POP EBX
// 0047f91e: RET
