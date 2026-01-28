; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CRock * __cdecl core_fire_cpp_CRock_dtor_FUN_004c96d0(CRock *this_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00545670
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004c96d0
        ;   Label: core_fire.cpp_CRock_dtor_FUN_004c96d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c96d2
    PUSH EDX                            ; 004c96d6
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004c96d7
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr)
    ADD ESP,0x8                         ; 004c96dc
    RET                                 ; 004c96df

