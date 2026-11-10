; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004b7720(CRock *this_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7720
        ;   Label: core_fire.cpp_CRock_ctor_FUN_004b7720
    PUSH EDX                            ; 004b7724
    CALL core_particle.cpp_CParticle_ctor_FUN_00532130 ; 004b7725
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b772a
    MOV dword ptr [EAX + 0x3c],0x600064 ; 004b772d
    RET                                 ; 004b7734

