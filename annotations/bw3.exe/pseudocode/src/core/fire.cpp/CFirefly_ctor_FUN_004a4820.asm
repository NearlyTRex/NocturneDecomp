; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * core_fire_cpp_CFirefly_ctor_FUN_004a4820(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4820
        ;   Label: core_fire.cpp_CFirefly_ctor_FUN_004a4820
    PUSH EDX                            ; 004a4824
    CALL core_particle.cpp_FUN_00509e10 ; 004a4825
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a482a
    MOV dword ptr [EAX + 0x3c],0x5df9f4 ; 004a482d
    RET                                 ; 004a4834

