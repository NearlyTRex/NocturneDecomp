; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_ctor_FUN_004a4730(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00509e10
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4730
        ;   Label: core_fire.cpp_CGlassParticle_ctor_FUN_004a4730
    PUSH EAX                            ; 004a4734
    CALL core_particle.cpp_CParticle_ctor_FUN_00509e10 ; 004a4735
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a473a
    PUSH 0x5db0f0                       ; 004a473d
    PUSH 0x3                            ; 004a4742
    ADD EAX,0xb0                        ; 004a4744
    PUSH EAX                            ; 004a4749
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004a474a
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004a474f
    MOV dword ptr [EAX + -0x74],0x5df974 ; 004a4752
    SUB EAX,0xb0                        ; 004a4759
    RET                                 ; 004a475e

