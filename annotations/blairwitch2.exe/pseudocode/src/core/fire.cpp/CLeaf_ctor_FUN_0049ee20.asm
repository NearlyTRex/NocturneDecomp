; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLeaf * core_fire_cpp_CLeaf_ctor_FUN_0049ee20(CLeaf *this_ptr)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ee20
        ;   Label: core_fire.cpp_CLeaf_ctor_FUN_0049ee20
    PUSH EDX                            ; 0049ee24
    CALL core_particle.cpp_FUN_00510dd0 ; 0049ee25
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049ee2a
    MOV dword ptr [EAX + 0x3c],0x5f6594 ; 0049ee2d
    RET                                 ; 0049ee34

