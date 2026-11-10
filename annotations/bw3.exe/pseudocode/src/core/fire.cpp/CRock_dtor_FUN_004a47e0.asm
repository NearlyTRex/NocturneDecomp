; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_dtor_FUN_004a47e0(CRock *this_ptr,uint flags)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a47e0
        ;   Label: core_fire.cpp_CRock_dtor_FUN_004a47e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a47e2
    PUSH EDX                            ; 004a47e6
    CALL core_particle.cpp_CParticle_dtor_FUN_00509e30 ; 004a47e7
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a47ec
    RET                                 ; 004a47ef

