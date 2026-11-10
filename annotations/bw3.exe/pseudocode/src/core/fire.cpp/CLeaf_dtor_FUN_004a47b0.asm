; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * core_fire_cpp_CLeaf_dtor_FUN_004a47b0(CLeaf *this_ptr,uint flags)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a47b0
        ;   Label: core_fire.cpp_CLeaf_dtor_FUN_004a47b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a47b2
    PUSH EDX                            ; 004a47b6
    CALL core_particle.cpp_CParticle_dtor_FUN_00509e30 ; 004a47b7
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a47bc
    RET                                 ; 004a47bf

