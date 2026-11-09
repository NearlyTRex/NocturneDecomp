; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_dtor_FUN_004ca090(CBloodParticle *this_ptr,uint flags)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004ca090
        ;   Label: core_gore.cpp_CBloodParticle_dtor_FUN_004ca090
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ca092
    PUSH EDX                            ; 004ca096
    CALL core_particle.cpp_FUN_00510df0 ; 004ca097
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ca09c
    RET                                 ; 004ca09f

