; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_dtor_FUN_004cf230(CBloodParticle *this_ptr,uint flags)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004cf230
        ;   Label: core_gore.cpp_CBloodParticle_dtor_FUN_004cf230
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cf232
    PUSH EDX                            ; 004cf236
    CALL core_particle.cpp_CParticle_dtor_FUN_00509e30 ; 004cf237
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004cf23c
    RET                                 ; 004cf23f

