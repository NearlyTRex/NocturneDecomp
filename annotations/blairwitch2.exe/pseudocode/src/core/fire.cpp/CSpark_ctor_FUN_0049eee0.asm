; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_0049eee0(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049eee0
        ;   Label: core_fire.cpp_CSpark_ctor_FUN_0049eee0
    PUSH EDX                            ; 0049eee4
    CALL core_particle.cpp_FUN_00510dd0 ; 0049eee5
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049eeea
    MOV dword ptr [EAX + 0x3c],0x5f6614 ; 0049eeed
    RET                                 ; 0049eef4

