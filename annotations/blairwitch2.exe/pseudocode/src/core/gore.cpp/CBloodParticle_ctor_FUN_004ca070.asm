; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004ca070(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ca070
        ;   Label: core_gore.cpp_CBloodParticle_ctor_FUN_004ca070
    PUSH EDX                            ; 004ca074
    CALL core_particle.cpp_FUN_00510dd0 ; 004ca075
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004ca07a
    MOV dword ptr [EAX + 0x3c],0x5f7bd4 ; 004ca07d
    RET                                 ; 004ca084

