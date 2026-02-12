; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CShell * __cdecl core_fire_cpp_CShell_dtor_FUN_004c9510(CShell *this_ptr,uint flags)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00545670
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004c9510
        ;   Label: core_fire.cpp_CShell_dtor_FUN_004c9510
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c9512
    PUSH EDX                            ; 004c9516
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004c9517
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c951c
    RET                                 ; 004c951f

