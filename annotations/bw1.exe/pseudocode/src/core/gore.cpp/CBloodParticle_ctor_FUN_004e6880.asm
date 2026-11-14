; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004e6880(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e6880
        ;   Label: core_gore.cpp_CBloodParticle_ctor_FUN_004e6880
    PUSH EDX                            ; 004e6884
    CALL core_particle.cpp_CParticle_ctor_FUN_00532130 ; 004e6885
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004e688a
    MOV dword ptr [EAX + 0x3c],0x6016d4 ; 004e688d
    RET                                 ; 004e6894

