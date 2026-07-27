; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004b0a30(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059e4f4 = 004ef040
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b0a30
        ;   Label: core_gore.cpp_FUN_004b0a30
    PUSH EDX                            ; 004b0a34
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 004b0a35
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_CParticle_ctor_FUN_004ef010()
    ADD ESP,0x4                         ; 004b0a3a
    MOV dword ptr [EAX + 0x34],0x59e4f4 ; 004b0a3d | PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059e4f4
    RET                                 ; 004b0a44

