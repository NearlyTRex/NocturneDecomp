; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004c9700(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00545670
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004c9700
        ;   Label: core_fire.cpp_CFireball_dtor_FUN_004c9700
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c9702
    PUSH EDX                            ; 004c9706
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004c9707
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c970c
    RET                                 ; 004c970f

