; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bcfb0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004bcfb0
        ;   Label: FUN_004bcfb0
    PUSH EDX                            ; 004bcfb4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004bcfb5
    PUSH ECX                            ; 004bcfb9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004bcfba
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 004bcfbf
    RET                                 ; 004bcfc2

