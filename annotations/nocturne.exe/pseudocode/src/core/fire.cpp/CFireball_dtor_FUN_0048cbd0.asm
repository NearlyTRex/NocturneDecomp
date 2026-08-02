; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_0048cbd0(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0048cbd0
        ;   Label: core_fire.cpp_CFireball_dtor_FUN_0048cbd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048cbd2
    PUSH EDX                            ; 0048cbd6
    CALL core_particle.cpp_CParticle_dtor_FUN_004ef030 ; 0048cbd7
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_004ef030(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048cbdc
    RET                                 ; 0048cbdf

