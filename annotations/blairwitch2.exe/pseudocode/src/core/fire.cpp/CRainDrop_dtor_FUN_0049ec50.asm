; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_0049ec50(CRainDrop *this_ptr,uint flags)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ec50
        ;   Label: core_fire.cpp_CRainDrop_dtor_FUN_0049ec50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ec52
    PUSH EDX                            ; 0049ec56
    CALL core_particle.cpp_CParticle_dtor_FUN_00510df0 ; 0049ec57
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049ec5c
    RET                                 ; 0049ec5f

