; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_0049ef00(CSpark *this_ptr,uint flags)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ef00
        ;   Label: core_fire.cpp_CSpark_dtor_FUN_0049ef00
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ef02
    PUSH EDX                            ; 0049ef06
    CALL core_particle.cpp_FUN_00510df0 ; 0049ef07
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049ef0c
    RET                                 ; 0049ef0f

