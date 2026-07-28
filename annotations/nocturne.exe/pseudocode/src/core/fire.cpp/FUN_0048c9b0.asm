; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048c9b0(CParticle *param_1)
;
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0048c9b0
        ;   Label: core_fire.cpp_FUN_0048c9b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048c9b2
    PUSH EDX                            ; 0048c9b6
    CALL core_particle.cpp_CParticle_dtor_FUN_004ef030 ; 0048c9b7
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_004ef030(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048c9bc
    RET                                 ; 0048c9bf

