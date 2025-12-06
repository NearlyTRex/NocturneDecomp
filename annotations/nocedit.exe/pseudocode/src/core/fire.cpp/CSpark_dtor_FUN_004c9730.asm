; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSpark * core_fire.cpp_CSpark_dtor_FUN_004c9730(CSpark * this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00545670
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004c9730
        ;   Label: core_fire.cpp_CSpark_dtor_FUN_004c9730
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c9732
    PUSH EDX                            ; 004c9736
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004c9737 | CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr)
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c973c
    RET                                 ; 004c973f

