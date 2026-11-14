; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_union_cpp_CUnion_processStates_FUN_005a4c50(CUnion *this_ptr,float delta_time,int mode)
;
; Parameters:
; CUnion *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_union.cpp_CUnion_ctor_FUN_005a4a80 at 005a4b6c
;
; Referenced Globals:
;   TerminatedCString s_RangeAttack_005f048f
;   TerminatedCString s_RangeAttack_005f049b
;   TerminatedCString s_MeleeAttack_005f04a7
;   TerminatedCString s_MeleeAttack_005f04b3
;   TerminatedCString s_SupportStand_005f04bf
;   TerminatedCString s_SupportStand_005f04cc
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0
;   core_muzzle.cpp_FUN_0059d650
;   core_muzzle.cpp_FUN_0059daa0
;   core_union.cpp_FUN_005a4e90
;   core_union.cpp_FUN_005a4fe0
;   core_union.cpp_FUN_005a5130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4c50
        ;   Label: core_union.cpp_CUnion_processStates_FUN_005a4c50
    PUSH ESI                            ; 005a4c51
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a4c52
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a4c56
    TEST EBX,EBX                        ; 005a4c5a
    JNZ 0x005a4c96                      ; 005a4c5c
        ;   XREF to: 005a4c96 (CONDITIONAL_JUMP)  ; LAB_005a4c96
    LEA EAX,[ESI + 0x10af8]             ; 005a4c5e
        ;   Label: LAB_005a4c5e
    TEST EBX,EBX                        ; 005a4c64
    JBE 0x005a4ca6                      ; 005a4c66
        ;   XREF to: 005a4ca6 (CONDITIONAL_JUMP)  ; LAB_005a4ca6
    CMP EBX,0x1                         ; 005a4c68
    JZ 0x005a4cb6                       ; 005a4c6b
        ;   XREF to: 005a4cb6 (CONDITIONAL_JUMP)  ; LAB_005a4cb6
    LEA EAX,[ESI + 0x10af8]             ; 005a4c6d
        ;   Label: LAB_005a4c6d
    TEST EBX,EBX                        ; 005a4c73
    JBE 0x005a4cd8                      ; 005a4c75
        ;   XREF to: 005a4cd8 (CONDITIONAL_JUMP)  ; LAB_005a4cd8
    CMP EBX,0x1                         ; 005a4c77
    JZ 0x005a4ce8                       ; 005a4c7a
        ;   XREF to: 005a4ce8 (CONDITIONAL_JUMP)  ; LAB_005a4ce8
    LEA EAX,[ESI + 0x10af8]             ; 005a4c7c
        ;   Label: LAB_005a4c7c
    TEST EBX,EBX                        ; 005a4c82
    JBE 0x005a4d0a                      ; 005a4c84
        ;   XREF to: 005a4d0a (CONDITIONAL_JUMP)  ; LAB_005a4d0a
    CMP EBX,0x1                         ; 005a4c8a
    JZ 0x005a4d1b                       ; 005a4c8d
        ;   XREF to: 005a4d1b (CONDITIONAL_JUMP)  ; LAB_005a4d1b
    POP ESI                             ; 005a4c93
        ;   Label: LAB_005a4c93
    POP EBX                             ; 005a4c94
    RET                                 ; 005a4c95
    PUSH EBX                            ; 005a4c96
        ;   Label: LAB_005a4c96
    PUSH dword ptr [ESP + 0x14]         ; 005a4c97
    PUSH ESI                            ; 005a4c9b
    CALL core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0 ; 005a4c9c
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0(CBasicEnemy * this_ptr, undefined4 param_2, int param_3)
    ADD ESP,0xc                         ; 005a4ca1
    JMP 0x005a4c5e                      ; 005a4ca4
        ;   XREF to: 005a4c5e (UNCONDITIONAL_JUMP)  ; LAB_005a4c5e
    PUSH 0x5f048f                       ; 005a4ca6 | = "RangeAttack"
        ;   Label: LAB_005a4ca6
    PUSH EAX                            ; 005a4cab
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a4cac
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a4cb1
    JMP 0x005a4c6d                      ; 005a4cb4
        ;   XREF to: 005a4c6d (UNCONDITIONAL_JUMP)  ; LAB_005a4c6d
    PUSH 0x5f049b                       ; 005a4cb6 | = "RangeAttack"
        ;   Label: LAB_005a4cb6
    PUSH EAX                            ; 005a4cbb
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a4cbc
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4cc1
    TEST EAX,EAX                        ; 005a4cc4
    JZ 0x005a4c6d                       ; 005a4cc6
        ;   XREF to: 005a4c6d (CONDITIONAL_JUMP)  ; LAB_005a4c6d
    PUSH dword ptr [ESP + 0x10]         ; 005a4cc8
    PUSH ESI                            ; 005a4ccc
    CALL core_union.cpp_FUN_005a4e90    ; 005a4ccd
        ;   XREF to: 005a4e90 (UNCONDITIONAL_CALL)  ; undefined core_union.cpp_FUN_005a4e90()
    ADD ESP,0x8                         ; 005a4cd2
    POP ESI                             ; 005a4cd5
    POP EBX                             ; 005a4cd6
    RET                                 ; 005a4cd7
    PUSH 0x5f04a7                       ; 005a4cd8 | = "MeleeAttack"
        ;   Label: LAB_005a4cd8
    PUSH EAX                            ; 005a4cdd
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a4cde
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a4ce3
    JMP 0x005a4c7c                      ; 005a4ce6
        ;   XREF to: 005a4c7c (UNCONDITIONAL_JUMP)  ; LAB_005a4c7c
    PUSH 0x5f04b3                       ; 005a4ce8 | = "MeleeAttack"
        ;   Label: LAB_005a4ce8
    PUSH EAX                            ; 005a4ced
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a4cee
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4cf3
    TEST EAX,EAX                        ; 005a4cf6
    JZ 0x005a4c7c                       ; 005a4cf8
        ;   XREF to: 005a4c7c (CONDITIONAL_JUMP)  ; LAB_005a4c7c
    PUSH dword ptr [ESP + 0x10]         ; 005a4cfa
    PUSH ESI                            ; 005a4cfe
    CALL core_union.cpp_FUN_005a4fe0    ; 005a4cff
        ;   XREF to: 005a4fe0 (UNCONDITIONAL_CALL)  ; undefined core_union.cpp_FUN_005a4fe0()
    ADD ESP,0x8                         ; 005a4d04
    POP ESI                             ; 005a4d07
    POP EBX                             ; 005a4d08
    RET                                 ; 005a4d09
    PUSH 0x5f04bf                       ; 005a4d0a | = "SupportStand"
        ;   Label: LAB_005a4d0a
    PUSH EAX                            ; 005a4d0f
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a4d10
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a4d15
    POP ESI                             ; 005a4d18
    POP EBX                             ; 005a4d19
    RET                                 ; 005a4d1a
    PUSH 0x5f04cc                       ; 005a4d1b | = "SupportStand"
        ;   Label: LAB_005a4d1b
    PUSH EAX                            ; 005a4d20
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a4d21
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4d26
    TEST EAX,EAX                        ; 005a4d29
    JZ 0x005a4c93                       ; 005a4d2b
        ;   XREF to: 005a4c93 (CONDITIONAL_JUMP)  ; LAB_005a4c93
    PUSH dword ptr [ESP + 0x10]         ; 005a4d31
    PUSH ESI                            ; 005a4d35
    CALL core_union.cpp_FUN_005a5130    ; 005a4d36
        ;   XREF to: 005a5130 (UNCONDITIONAL_CALL)  ; undefined core_union.cpp_FUN_005a5130()
    ADD ESP,0x8                         ; 005a4d3b
    POP ESI                             ; 005a4d3e
    POP EBX                             ; 005a4d3f
    RET                                 ; 005a4d40

