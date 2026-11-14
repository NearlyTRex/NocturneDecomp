; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004cf210(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cf210
        ;   Label: core_gore.cpp_CBloodParticle_ctor_FUN_004cf210
    PUSH EDX                            ; 004cf214
    CALL core_particle.cpp_CParticle_ctor_FUN_00509e10 ; 004cf215
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004cf21a
    MOV dword ptr [EAX + 0x3c],0x5e0e44 ; 004cf21d
    RET                                 ; 004cf224

