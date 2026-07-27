; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_biggs_cpp_FUN_00415a10(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00415a10
        ;   Label: core_biggs.cpp_FUN_00415a10
    PUSH EDX                            ; 00415a14
    MOV ECX,dword ptr [ESP + 0x8]       ; 00415a15
    PUSH ECX                            ; 00415a19
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 00415a1a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 00415a1f
    RET                                 ; 00415a22

