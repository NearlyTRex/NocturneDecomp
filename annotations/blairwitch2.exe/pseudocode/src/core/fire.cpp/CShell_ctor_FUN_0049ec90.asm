; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_0049ec90(CShell *this_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ec90
        ;   Label: core_fire.cpp_CShell_ctor_FUN_0049ec90
    PUSH EDX                            ; 0049ec94
    CALL core_particle.cpp_FUN_00510dd0 ; 0049ec95
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049ec9a
    MOV dword ptr [EAX + 0x3c],0x5f6554 ; 0049ec9d
    RET                                 ; 0049eca4

