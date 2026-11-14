; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * __cdecl core_fire_cpp_CFirefly_dtor_FUN_004b77a0(CFirefly *this_ptr,uint flags)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b77a0
        ;   Label: core_fire.cpp_CFirefly_dtor_FUN_004b77a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b77a2
    PUSH EDX                            ; 004b77a6
    CALL core_particle.cpp_CParticle_dtor_FUN_00532150 ; 004b77a7
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00532150(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b77ac
    RET                                 ; 004b77af

