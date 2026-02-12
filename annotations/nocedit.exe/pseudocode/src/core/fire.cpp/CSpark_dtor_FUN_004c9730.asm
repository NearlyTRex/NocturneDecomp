; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_004c9730(CSpark *this_ptr,uint flags)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
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
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004c9737
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c973c
    RET                                 ; 004c973f

