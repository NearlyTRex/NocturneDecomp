; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004b7550(CPopcorn *this_ptr,uint flags)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7550
        ;   Label: core_fire.cpp_CPopcorn_dtor_FUN_004b7550
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7552
    PUSH EDX                            ; 004b7556
    CALL core_particle.cpp_CParticle_dtor_FUN_00532150 ; 004b7557
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00532150(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b755c
    RET                                 ; 004b755f

