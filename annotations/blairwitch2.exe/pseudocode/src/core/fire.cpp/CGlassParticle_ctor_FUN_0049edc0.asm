; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_0049edc0(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00510dd0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049edc0
        ;   Label: core_fire.cpp_CGlassParticle_ctor_FUN_0049edc0
    PUSH EAX                            ; 0049edc4
    CALL core_particle.cpp_CParticle_ctor_FUN_00510dd0 ; 0049edc5
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049edca
    PUSH 0x5f22b0                       ; 0049edcd
    PUSH 0x3                            ; 0049edd2
    ADD EAX,0x80                        ; 0049edd4
    PUSH EAX                            ; 0049edd9
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0049edda
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 0049eddf
    MOV dword ptr [EAX + -0x44],0x5f6574 ; 0049ede2
    SUB EAX,0x80                        ; 0049ede9
    RET                                 ; 0049edee

