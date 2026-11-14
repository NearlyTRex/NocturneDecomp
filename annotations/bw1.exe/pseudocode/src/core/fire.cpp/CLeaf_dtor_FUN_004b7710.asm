; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * __cdecl core_fire_cpp_CLeaf_dtor_FUN_004b7710(CLeaf *this_ptr,uint flags)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7710
        ;   Label: core_fire.cpp_CLeaf_dtor_FUN_004b7710
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7712
    PUSH EDX                            ; 004b7716
    CALL core_particle.cpp_CParticle_dtor_FUN_00532150 ; 004b7717
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00532150(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b771c
    RET                                 ; 004b771f

