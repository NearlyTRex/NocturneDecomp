; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004132a0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004132a0
        ;   Label: FUN_004132a0
    PUSH EDX                            ; 004132a4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004132a5
    PUSH ECX                            ; 004132a9
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004132aa
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 004132af
    RET                                 ; 004132b2

