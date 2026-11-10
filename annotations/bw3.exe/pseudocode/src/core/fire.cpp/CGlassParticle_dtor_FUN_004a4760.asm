; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * core_fire_cpp_CGlassParticle_dtor_FUN_004a4760(CGlassParticle *this_ptr,uint flags)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a4760
        ;   Label: core_fire.cpp_CGlassParticle_dtor_FUN_004a4760
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4762
    PUSH EDX                            ; 004a4766
    CALL core_particle.cpp_CParticle_dtor_FUN_00509e30 ; 004a4767
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a476c
    RET                                 ; 004a476f

