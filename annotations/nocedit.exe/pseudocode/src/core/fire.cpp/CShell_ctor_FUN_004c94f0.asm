; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004c94f0(CShell *this_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CShellVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00545650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c94f0
        ;   Label: core_fire.cpp_CShell_ctor_FUN_004c94f0
    PUSH EDX                            ; 004c94f4
    CALL core_particle.cpp_CParticle_ctor_FUN_00545650 ; 004c94f5
        ;   XREF to: 00545650 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004c94fa
    MOV dword ptr [EAX + 0x34],0x65dd14 ; 004c94fd | g_CShellVTable
    RET                                 ; 004c9504

