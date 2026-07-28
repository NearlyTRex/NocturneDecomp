; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cc00(CParticle *param_1)
;
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0048cc00
        ;   Label: core_fire.cpp_FUN_0048cc00
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048cc02
    PUSH EDX                            ; 0048cc06
    CALL core_particle.cpp_CParticle_dtor_FUN_004ef030 ; 0048cc07
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_004ef030(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048cc0c
    RET                                 ; 0048cc0f

