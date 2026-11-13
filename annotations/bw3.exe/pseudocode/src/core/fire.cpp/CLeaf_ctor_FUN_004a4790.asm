; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * __cdecl core_fire_cpp_CLeaf_ctor_FUN_004a4790(CLeaf *this_ptr)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4790
        ;   Label: core_fire.cpp_CLeaf_ctor_FUN_004a4790
    PUSH EDX                            ; 004a4794
    CALL core_particle.cpp_CParticle_ctor_FUN_00509e10 ; 004a4795
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a479a
    MOV dword ptr [EAX + 0x3c],0x5df994 ; 004a479d
    RET                                 ; 004a47a4

