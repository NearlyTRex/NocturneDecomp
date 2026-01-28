; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004c94b0(CRainDrop *this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00545670
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004c94b0
        ;   Label: core_fire.cpp_CRainDrop_dtor_FUN_004c94b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c94b2
    PUSH EDX                            ; 004c94b6
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004c94b7
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr)
    ADD ESP,0x8                         ; 004c94bc
    RET                                 ; 004c94bf

