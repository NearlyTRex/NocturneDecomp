; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_004a4850(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4850
        ;   Label: core_fire.cpp_CSpark_ctor_FUN_004a4850
    PUSH EDX                            ; 004a4854
    CALL core_particle.cpp_CParticle_ctor_FUN_00509e10 ; 004a4855
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a485a
    MOV dword ptr [EAX + 0x3c],0x5dfa14 ; 004a485d
    RET                                 ; 004a4864

