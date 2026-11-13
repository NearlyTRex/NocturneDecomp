; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * __cdecl core_fire_cpp_CFirefly_ctor_FUN_004b7780(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7780
        ;   Label: core_fire.cpp_CFirefly_ctor_FUN_004b7780
    PUSH EDX                            ; 004b7784
    CALL core_particle.cpp_CParticle_ctor_FUN_00532130 ; 004b7785
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b778a
    MOV dword ptr [EAX + 0x3c],0x6000a4 ; 004b778d
    RET                                 ; 004b7794

