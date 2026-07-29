; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cbe0(CParticle *param_1)
;
;
; Referenced Globals:
;   CParticle_vtable g_CSparkVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cbe0
        ;   Label: core_fire.cpp_FUN_0048cbe0
    PUSH EDX                            ; 0048cbe4
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 0048cbe5
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_004ef010(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0048cbea
    MOV dword ptr [EAX + 0x34],0x59d2e4 ; 0048cbed | g_CSparkVTable
    RET                                 ; 0048cbf4

