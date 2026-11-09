; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_dtor_FUN_004a45d0(CShell *this_ptr,uint flags)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a45d0
        ;   Label: core_fire.cpp_CShell_dtor_FUN_004a45d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a45d2
    PUSH EDX                            ; 004a45d6
    CALL core_particle.cpp_FUN_00509e30 ; 004a45d7
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a45dc
    RET                                 ; 004a45df

