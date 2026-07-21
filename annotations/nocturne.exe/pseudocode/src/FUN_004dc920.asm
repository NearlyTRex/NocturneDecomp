; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dc920(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004dc920
        ;   Label: FUN_004dc920
    PUSH EDX                            ; 004dc924
    MOV ECX,dword ptr [ESP + 0x8]       ; 004dc925
    PUSH ECX                            ; 004dc929
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 004dc92a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 004dc92f
    RET                                 ; 004dc932

