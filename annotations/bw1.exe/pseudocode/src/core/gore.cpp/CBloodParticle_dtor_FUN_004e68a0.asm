; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_dtor_FUN_004e68a0(CBloodParticle *this_ptr,uint flags)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004e68a0
        ;   Label: core_gore.cpp_CBloodParticle_dtor_FUN_004e68a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e68a2
    PUSH EDX                            ; 004e68a6
    CALL core_particle.cpp_CParticle_dtor_FUN_00532150 ; 004e68a7
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00532150(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e68ac
    RET                                 ; 004e68af

