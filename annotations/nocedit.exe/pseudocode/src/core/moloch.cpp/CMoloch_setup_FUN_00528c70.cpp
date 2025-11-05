// Name: core_moloch.cpp_CMoloch_setup_FUN_00528c70
// Address: 00528c70
// Address Range: [[00528c70, 00528d19]]
// Convention: __cdecl
// Signature: void core_moloch.cpp_CMoloch_setup_FUN_00528c70(CMoloch * this_ptr)
// Globals:
//   TerminatedCString s_moloch_h_dfm_00639d71
//   TerminatedCString s_moloch_d_dfm_00639d7e
//   TerminatedCString s_moloch_d_dfm_00639d8b
//   TerminatedCString s_moloch_h_dfm_00639d98
// Function calls:
//   core_hero.cpp_CHero_FUN_004f2540
//   core_morph.cpp_CMorph_getReady_FUN_0052b680
//   core_morph.cpp_FUN_0052b430
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00528c70(CMoloch *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  char *model_name;
  
  this_ptr_00 = &(this_ptr->base_hero).base_character.model;
  if (this_ptr->in_human_form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (this_ptr_00,"moloch_d.dfm");
    model_name = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (this_ptr_00,"moloch_h.dfm");
    model_name = "moloch_d.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)this_ptr->field1_0x1fbd4,model_name);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            (&(this_ptr->base_hero).base_character.model);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            ((CDeformableModelInstance *)this_ptr->field1_0x1fbd4);
  this_ptr->field5_0x21e94[0xcf0] = '\0';
  this_ptr->field5_0x21e94[0xcf1] = '\0';
  this_ptr->field5_0x21e94[0xcf2] = '\0';
  this_ptr->field5_0x21e94[0xcf3] = '\0';
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)(this_ptr->field5_0x21e94 + 200));
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->base_hero);
  return;
}


// Assembly code:
// 00528c70: PUSH EBX
//   Label: core_moloch.cpp_CMoloch_setup_FUN_00528c70
// 00528c71: PUSH ESI
// 00528c72: PUSH EDI
// 00528c73: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00528c77: LEA ESI,[EBX + 0x1fbd4]
// 00528c7d: MOV EDX,dword ptr [EBX + 0x21e88]
// 00528c83: LEA EAX,[EBX + 0x158]
// 00528c89: TEST EDX,EDX
// 00528c8b: JZ 0x00528d05
//   XREF to: 00528d05 (CONDITIONAL_JUMP)
// 00528c8d: PUSH 0x639d71
//   XREF to: 00639d71 (DATA)
// 00528c92: PUSH EAX
// 00528c93: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00528c98: ADD ESP,0x8
// 00528c9b: PUSH 0x639d7e
//   XREF to: 00639d7e (DATA)
// 00528ca0: PUSH ESI
//   Label: LAB_00528ca0
// 00528ca1: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00528ca6: ADD ESP,0x8
// 00528ca9: LEA ESI,[EBX + 0x158]
// 00528caf: PUSH ESI
// 00528cb0: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00528cb5: ADD ESP,0x4
// 00528cb8: LEA EDI,[EBX + 0x1fbd4]
// 00528cbe: PUSH EDI
// 00528cbf: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00528cc4: ADD ESP,0x4
// 00528cc7: PUSH ESI
// 00528cc8: PUSH 0x0
// 00528cca: LEA ESI,[EBX + 0x21f5c]
// 00528cd0: PUSH ESI
// 00528cd1: MOV dword ptr [EBX + 0x22b84],0x0
// 00528cdb: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 00528ce0: ADD ESP,0xc
// 00528ce3: PUSH EDI
// 00528ce4: PUSH 0x1
// 00528ce6: PUSH ESI
// 00528ce7: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 00528cec: ADD ESP,0xc
// 00528cef: PUSH ESI
// 00528cf0: CALL core_morph.cpp_CMorph_getReady_FUN_0052b680
//   XREF to: 0052b680 (UNCONDITIONAL_CALL)
// 00528cf5: ADD ESP,0x4
// 00528cf8: PUSH EBX
// 00528cf9: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 00528cfe: ADD ESP,0x4
// 00528d01: POP EDI
// 00528d02: POP ESI
// 00528d03: POP EBX
// 00528d04: RET
// 00528d05: PUSH 0x639d8b
//   Label: LAB_00528d05
//   XREF to: 00639d8b (DATA)
// 00528d0a: PUSH EAX
// 00528d0b: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00528d10: ADD ESP,0x8
// 00528d13: PUSH 0x639d98
//   XREF to: 00639d98 (DATA)
// 00528d18: JMP 0x00528ca0
//   XREF to: 00528ca0 (UNCONDITIONAL_JUMP)
