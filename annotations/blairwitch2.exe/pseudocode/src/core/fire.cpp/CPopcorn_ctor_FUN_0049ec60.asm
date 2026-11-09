; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_0049ec60(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ec60
        ;   Label: core_fire.cpp_CPopcorn_ctor_FUN_0049ec60
    PUSH EDX                            ; 0049ec64
    CALL core_particle.cpp_FUN_00510dd0 ; 0049ec65
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049ec6a
    MOV dword ptr [EAX + 0x3c],0x5f6534 ; 0049ec6d
    RET                                 ; 0049ec74

