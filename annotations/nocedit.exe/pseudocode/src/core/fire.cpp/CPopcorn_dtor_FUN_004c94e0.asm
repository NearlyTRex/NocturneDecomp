; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_004c94e0(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00545670
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004c94e0
        ;   Label: core_fire.cpp_CPopcorn_dtor_FUN_004c94e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c94e2
    PUSH EDX                            ; 004c94e6
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004c94e7
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr)
    ADD ESP,0x8                         ; 004c94ec
    RET                                 ; 004c94ef

