; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004a45b0(CShell *this_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a45b0
        ;   Label: core_fire.cpp_CShell_ctor_FUN_004a45b0
    PUSH EDX                            ; 004a45b4
    CALL core_particle.cpp_FUN_00509e10 ; 004a45b5
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a45ba
    MOV dword ptr [EAX + 0x3c],0x5df954 ; 004a45bd
    RET                                 ; 004a45c4

