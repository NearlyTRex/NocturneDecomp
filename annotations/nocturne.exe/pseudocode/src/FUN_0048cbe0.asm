; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cbe0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059d2e4 = 004ef040
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cbe0
        ;   Label: FUN_0048cbe0
    PUSH EDX                            ; 0048cbe4
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 0048cbe5
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_CParticle_ctor_FUN_004ef010()
    ADD ESP,0x4                         ; 0048cbea
    MOV dword ptr [EAX + 0x34],0x59d2e4 ; 0048cbed | PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059d2e4
    RET                                 ; 0048cbf4

