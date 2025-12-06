; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_particle.cpp_CParticle_render_FUN_00545a80(CParticle * this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_particle_cpp_0063e734
;   TerminatedCString s_Base_class_shouldn_t_ren_0063e749
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x63e734                    ; 00545a80 | = "..\\core\\particle.cpp" | s_core_particle_cpp_0063e734 = ..\core\particle.cpp
        ;   Label: core_particle.cpp_CParticle_render_FUN_00545a80
    MOV ECX,0xc5                        ; 00545a85
    PUSH 0x63e749                       ; 00545a8a | = "Base class shouldn't render" | s_Base_class_shouldn_t_ren_0063e749 = Base class shouldn't render
    MOV dword ptr [0x02f0ca48],EDX      ; 00545a8f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00545a95 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00545a9b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00545aa0
    RET                                 ; 00545aa3

