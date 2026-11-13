; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * __cdecl core_fire_cpp_CFirefly_ctor_FUN_0049eeb0(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049eeb0
        ;   Label: core_fire.cpp_CFirefly_ctor_FUN_0049eeb0
    PUSH EDX                            ; 0049eeb4
    CALL core_particle.cpp_CParticle_ctor_FUN_00510dd0 ; 0049eeb5
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049eeba
    MOV dword ptr [EAX + 0x3c],0x5f65f4 ; 0049eebd
    RET                                 ; 0049eec4

