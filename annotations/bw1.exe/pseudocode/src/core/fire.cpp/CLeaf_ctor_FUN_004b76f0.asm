; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * __cdecl core_fire_cpp_CLeaf_ctor_FUN_004b76f0(CLeaf *this_ptr)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b76f0
        ;   Label: core_fire.cpp_CLeaf_ctor_FUN_004b76f0
    PUSH EDX                            ; 004b76f4
    CALL core_particle.cpp_CParticle_ctor_FUN_00532130 ; 004b76f5
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b76fa
    MOV dword ptr [EAX + 0x3c],0x600044 ; 004b76fd
    RET                                 ; 004b7704

