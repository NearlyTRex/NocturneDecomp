; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_ctor_FUN_004b7560(CShell *this_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7560
        ;   Label: core_fire.cpp_CShell_ctor_FUN_004b7560
    PUSH EDX                            ; 004b7564
    CALL core_particle.cpp_CParticle_ctor_FUN_00532130 ; 004b7565
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b756a
    MOV dword ptr [EAX + 0x3c],0x600004 ; 004b756d
    RET                                 ; 004b7574

