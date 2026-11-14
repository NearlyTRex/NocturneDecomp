; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_dtor_FUN_0049ecb0(CShell *this_ptr,uint flags)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ecb0
        ;   Label: core_fire.cpp_CShell_dtor_FUN_0049ecb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ecb2
    PUSH EDX                            ; 0049ecb6
    CALL core_particle.cpp_CParticle_dtor_FUN_00510df0 ; 0049ecb7
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049ecbc
    RET                                 ; 0049ecbf

