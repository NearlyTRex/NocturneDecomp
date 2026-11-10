; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_0049ee50(CRock *this_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ee50
        ;   Label: core_fire.cpp_CRock_ctor_FUN_0049ee50
    PUSH EDX                            ; 0049ee54
    CALL core_particle.cpp_CParticle_ctor_FUN_00510dd0 ; 0049ee55
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049ee5a
    MOV dword ptr [EAX + 0x3c],0x5f65b4 ; 0049ee5d
    RET                                 ; 0049ee64

