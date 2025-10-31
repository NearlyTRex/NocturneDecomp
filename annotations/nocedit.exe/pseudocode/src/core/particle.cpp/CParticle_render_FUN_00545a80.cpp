// Name: core_particle.cpp_CParticle_render_FUN_00545a80
// Address: 00545a80
// Address Range: [[00545a80, 00545aa3]]
// Convention: __cdecl
// Signature: void core_particle.cpp_CParticle_render_FUN_00545a80(CParticle * this_ptr)
// Globals:
//   TerminatedCString s_core_particle_cpp_0063e734
//   TerminatedCString s_Base_class_shouldn_t_ren_0063e749
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_render_FUN_00545a80(CParticle *this_ptr)

{
  g_CurrentFilename = "..\\core\\particle.cpp";
  g_CurrentLineNumber = 0xc5;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Base class shouldn't render");
  return;
}


// Assembly code:
// 00545a80: MOV EDX,0x63e734
//   Label: core_particle.cpp_CParticle_render_FUN_00545a80
//   XREF to: 0063e734 (PARAM)
// 00545a85: MOV ECX,0xc5
// 00545a8a: PUSH 0x63e749
//   XREF to: 0063e749 (DATA)
// 00545a8f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00545a95: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00545a9b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00545aa0: ADD ESP,0x4
// 00545aa3: RET
