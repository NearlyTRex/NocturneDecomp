; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004a47c0(CRock *this_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a47c0
        ;   Label: core_fire.cpp_CRock_ctor_FUN_004a47c0
    PUSH EDX                            ; 004a47c4
    CALL core_particle.cpp_CParticle_ctor_FUN_00509e10 ; 004a47c5
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a47ca
    MOV dword ptr [EAX + 0x3c],0x5df9b4 ; 004a47cd
    RET                                 ; 004a47d4

