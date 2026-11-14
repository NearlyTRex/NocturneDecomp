; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_004a4870(CSpark *this_ptr,uint flags)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a4870
        ;   Label: core_fire.cpp_CSpark_dtor_FUN_004a4870
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4872
    PUSH EDX                            ; 004a4876
    CALL core_particle.cpp_CParticle_dtor_FUN_00509e30 ; 004a4877
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a487c
    RET                                 ; 004a487f

