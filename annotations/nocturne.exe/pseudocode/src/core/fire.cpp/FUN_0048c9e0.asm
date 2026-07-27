; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048c9e0(undefined4 param_1)
;
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0048c9e0
        ;   Label: core_fire.cpp_FUN_0048c9e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048c9e2
    PUSH EDX                            ; 0048c9e6
    CALL core_particle.cpp_CParticle_dtor_FUN_004ef030 ; 0048c9e7
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_CParticle_dtor_FUN_004ef030()
    ADD ESP,0x8                         ; 0048c9ec
    RET                                 ; 0048c9ef

