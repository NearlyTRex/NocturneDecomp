; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004b7750(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7750
        ;   Label: core_fire.cpp_CFireball_ctor_FUN_004b7750
    PUSH EDX                            ; 004b7754
    CALL core_particle.cpp_CParticle_ctor_FUN_00532130 ; 004b7755
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b775a
    MOV dword ptr [EAX + 0x3c],0x600084 ; 004b775d
    RET                                 ; 004b7764

