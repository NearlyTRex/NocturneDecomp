; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048c990(CParticle *param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059d244 = 004ef040
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048c990
        ;   Label: core_fire.cpp_FUN_0048c990
    PUSH EDX                            ; 0048c994
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 0048c995
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_004ef010(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0048c99a
    MOV dword ptr [EAX + 0x34],0x59d244 ; 0048c99d | PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059d244
    RET                                 ; 0048c9a4

