; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_0049eea0(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049eea0
        ;   Label: core_fire.cpp_CFireball_dtor_FUN_0049eea0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049eea2
    PUSH EDX                            ; 0049eea6
    CALL core_particle.cpp_FUN_00510df0 ; 0049eea7
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049eeac
    RET                                 ; 0049eeaf

