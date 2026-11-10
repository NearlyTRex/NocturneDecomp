; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * core_fire_cpp_CLeaf_dtor_FUN_0049ee40(CLeaf *this_ptr,uint flags)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ee40
        ;   Label: core_fire.cpp_CLeaf_dtor_FUN_0049ee40
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ee42
    PUSH EDX                            ; 0049ee46
    CALL core_particle.cpp_CParticle_dtor_FUN_00510df0 ; 0049ee47
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049ee4c
    RET                                 ; 0049ee4f

