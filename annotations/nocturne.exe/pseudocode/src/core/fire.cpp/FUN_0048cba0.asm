; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cba0(CParticle *param_1)
;
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0048cba0
        ;   Label: core_fire.cpp_FUN_0048cba0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048cba2
    PUSH EDX                            ; 0048cba6
    CALL core_particle.cpp_CParticle_dtor_FUN_004ef030 ; 0048cba7
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_004ef030(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048cbac
    RET                                 ; 0048cbaf

