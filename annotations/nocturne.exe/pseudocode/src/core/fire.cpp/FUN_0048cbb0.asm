; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cbb0(CParticle *param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059d2c4 = 004ef040
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cbb0
        ;   Label: core_fire.cpp_FUN_0048cbb0
    PUSH EDX                            ; 0048cbb4
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 0048cbb5
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_004ef010(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0048cbba
    MOV dword ptr [EAX + 0x34],0x59d2c4 ; 0048cbbd | PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059d2c4
    RET                                 ; 0048cbc4

