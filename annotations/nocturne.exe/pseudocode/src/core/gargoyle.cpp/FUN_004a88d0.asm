; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_FUN_004a88d0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004a88d0
        ;   Label: core_gargoyle.cpp_FUN_004a88d0
    PUSH EDX                            ; 004a88d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a88d5
    PUSH ECX                            ; 004a88d9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004a88da
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 004a88df
    RET                                 ; 004a88e2

