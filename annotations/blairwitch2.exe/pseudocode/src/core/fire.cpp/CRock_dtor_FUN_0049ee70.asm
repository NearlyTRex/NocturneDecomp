; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_dtor_FUN_0049ee70(CRock *this_ptr,uint flags)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ee70
        ;   Label: core_fire.cpp_CRock_dtor_FUN_0049ee70
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ee72
    PUSH EDX                            ; 0049ee76
    CALL core_particle.cpp_FUN_00510df0 ; 0049ee77
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049ee7c
    RET                                 ; 0049ee7f

