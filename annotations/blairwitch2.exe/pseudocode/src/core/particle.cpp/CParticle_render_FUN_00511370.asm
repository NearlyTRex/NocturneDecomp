; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_particle_cpp_CParticle_render_FUN_00511370(CParticle *this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_particle_cpp_005e15a6
;   TerminatedCString s_Base_class_shouldn_t_ren_005e15bb
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5e15a6                    ; 00511370 | = "..\\core\\particle.cpp"
        ;   Label: core_particle.cpp_CParticle_render_FUN_00511370
    MOV ECX,0xc8                        ; 00511375
    PUSH 0x5e15bb                       ; 0051137a | = "Base class shouldn't render"
    MOV dword ptr [0x01d046a0],EDX      ; 0051137f | g_CurrentFilename
    MOV dword ptr [0x01d046a4],ECX      ; 00511385 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 0051138b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 00511390
    RET                                 ; 00511393

