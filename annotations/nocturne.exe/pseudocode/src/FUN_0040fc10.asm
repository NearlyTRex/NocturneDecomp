; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fc10(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0040fc10
        ;   Label: FUN_0040fc10
    PUSH EDX                            ; 0040fc14
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040fc15
    PUSH ECX                            ; 0040fc19
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 0040fc1a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 0040fc1f
    RET                                 ; 0040fc22

