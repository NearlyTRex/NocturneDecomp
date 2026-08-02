; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_dtor_FUN_004b0a50(CBloodParticle *this_ptr,uint flags)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b0a50
        ;   Label: core_gore.cpp_CBloodParticle_dtor_FUN_004b0a50
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b0a52
    PUSH EDX                            ; 004b0a56
    CALL core_particle.cpp_CParticle_dtor_FUN_004ef030 ; 004b0a57
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_004ef030(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b0a5c
    RET                                 ; 004b0a5f

