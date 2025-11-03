// Name: core_weapon.cpp_CWeapon_FUN_005ee3f0
// Address: 005ee3f0
// Address Range: [[005ee3f0, 005ee480]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee3f0(CWeapon * this_ptr)
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_weapon.cpp_FUN_005ee740

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee3f0(CWeapon *this_ptr)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000008;
  float fStack_10;
  
  this_ptr->carried_by_actor = '\0';
  this_ptr->field9_0x305[0] = '\0';
  this_ptr->field9_0x305[1] = '\0';
  this_ptr->field9_0x305[2] = '\0';
  core_weapon_cpp_FUN_005ee740();
  if (in_stack_00000008 != (CVector3f *)0x0) {
    pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(this_ptr->field9_0x305 + 0x1b),(CVector3f *)&fStack_10,
                        in_stack_00000008);
    if ((CVector3f *)(this_ptr->field9_0x305 + 0x4f) != pCVar1) {
      ((CVector3f *)(this_ptr->field9_0x305 + 0x4f))->x = pCVar1->x;
      *(float *)(this_ptr->field9_0x305 + 0x53) = pCVar1->y;
      *(float *)(this_ptr->field9_0x305 + 0x57) = pCVar1->z;
    }
    if ((CVector3f *)(this_ptr->field9_0x305 + 0x43) != in_stack_00000008) {
      ((CVector3f *)(this_ptr->field9_0x305 + 0x43))->x = in_stack_00000008->x;
      *(float *)(this_ptr->field9_0x305 + 0x47) = in_stack_00000008->y;
      *(float *)(this_ptr->field9_0x305 + 0x4b) = in_stack_00000008->z;
    }
  }
  fStack_10 = 0.0;
  (*(this_ptr->base_actor).vtable[1].process)(&this_ptr->base_actor);
  this_ptr->sim_timer = 5.0;
  return;
}


// Assembly code:
// 005ee3f0: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_FUN_005ee3f0
// 005ee3f1: PUSH ESI
// 005ee3f2: SUB ESP,0xc
// 005ee3f5: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005ee3f9: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005ee3fd: PUSH EBX
// 005ee3fe: MOV dword ptr [EBX + 0x304],0x0
// 005ee408: CALL core_weapon.cpp_FUN_005ee740
//   XREF to: 005ee740 (UNCONDITIONAL_CALL)
// 005ee40d: ADD ESP,0x4
// 005ee410: TEST ESI,ESI
// 005ee412: JNZ 0x005ee436
//   XREF to: 005ee436 (CONDITIONAL_JUMP)
// 005ee414: PUSH 0x0
//   Label: LAB_005ee414
// 005ee416: MOV EAX,dword ptr [EBX + 0x154]
// 005ee41c: PUSH EBX
// 005ee41d: CALL dword ptr [EAX + 0xf0]
// 005ee423: ADD ESP,0x8
// 005ee426: MOV dword ptr [EBX + 0x570],0x40a00000
// 005ee430: ADD ESP,0xc
// 005ee433: POP ESI
// 005ee434: POP EBX
// 005ee435: RET
// 005ee436: PUSH ESI
//   Label: LAB_005ee436
// 005ee437: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 005ee43b: PUSH EAX
// 005ee43c: LEA EAX,[EBX + 0x320]
// 005ee442: PUSH EAX
// 005ee443: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 005ee448: LEA EDX,[EBX + 0x354]
// 005ee44e: ADD ESP,0xc
// 005ee451: CMP EDX,EAX
// 005ee453: JZ 0x005ee465
//   XREF to: 005ee465 (CONDITIONAL_JUMP)
// 005ee455: MOV ECX,dword ptr [EAX]
// 005ee457: MOV dword ptr [EDX],ECX
// 005ee459: MOV ECX,dword ptr [EAX + 0x4]
// 005ee45c: MOV dword ptr [EDX + 0x4],ECX
// 005ee45f: MOV ECX,dword ptr [EAX + 0x8]
// 005ee462: MOV dword ptr [EDX + 0x8],ECX
// 005ee465: LEA EAX,[EBX + 0x348]
//   Label: LAB_005ee465
// 005ee46b: CMP EAX,ESI
// 005ee46d: JZ 0x005ee414
//   XREF to: 005ee414 (CONDITIONAL_JUMP)
// 005ee46f: MOV EDX,dword ptr [ESI]
// 005ee471: MOV dword ptr [EAX],EDX
// 005ee473: MOV EDX,dword ptr [ESI + 0x4]
// 005ee476: MOV dword ptr [EAX + 0x4],EDX
// 005ee479: MOV EDX,dword ptr [ESI + 0x8]
// 005ee47c: MOV dword ptr [EAX + 0x8],EDX
// 005ee47f: JMP 0x005ee414
//   XREF to: 005ee414 (UNCONDITIONAL_JUMP)
