; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_0049ee80(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ee80
        ;   Label: core_fire.cpp_CFireball_ctor_FUN_0049ee80
    PUSH EDX                            ; 0049ee84
    CALL core_particle.cpp_FUN_00510dd0 ; 0049ee85
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049ee8a
    MOV dword ptr [EAX + 0x3c],0x5f65d4 ; 0049ee8d
    RET                                 ; 0049ee94

