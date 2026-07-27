; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_FUN_004b99b0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004b99b0
        ;   Label: core_hotdemon.cpp_FUN_004b99b0
    PUSH EDX                            ; 004b99b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b99b5
    PUSH ECX                            ; 004b99b9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004b99ba
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 004b99bf
    RET                                 ; 004b99c2

