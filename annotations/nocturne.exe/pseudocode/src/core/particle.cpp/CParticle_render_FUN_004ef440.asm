; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_particle_cpp_CParticle_render_FUN_004ef440(CParticle *this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_particle_cpp_0058cb94
;   TerminatedCString s_Base_class_shouldn_t_ren_0058cba9
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x58cb94                    ; 004ef440 | = "..\\core\\particle.cpp"
        ;   Label: core_particle.cpp_CParticle_render_FUN_004ef440
    MOV ECX,0xc5                        ; 004ef445
    PUSH 0x58cba9                       ; 004ef44a | = "Base class shouldn't render"
    MOV dword ptr [0x01cc4800],EDX      ; 004ef44f | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004ef455 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ef45b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ef460
    RET                                 ; 004ef463

