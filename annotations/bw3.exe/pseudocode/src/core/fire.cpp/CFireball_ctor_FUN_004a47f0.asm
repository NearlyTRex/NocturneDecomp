; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_004a47f0(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a47f0
        ;   Label: core_fire.cpp_CFireball_ctor_FUN_004a47f0
    PUSH EDX                            ; 004a47f4
    CALL core_particle.cpp_FUN_00509e10 ; 004a47f5
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a47fa
    MOV dword ptr [EAX + 0x3c],0x5df9d4 ; 004a47fd
    RET                                 ; 004a4804

