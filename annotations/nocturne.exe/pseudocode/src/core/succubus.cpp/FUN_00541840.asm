; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_succubus_cpp_FUN_00541840(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00541840
        ;   Label: core_succubus.cpp_FUN_00541840
    PUSH EDX                            ; 00541844
    MOV ECX,dword ptr [ESP + 0x8]       ; 00541845
    PUSH ECX                            ; 00541849
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0 ; 0054184a
        ;   XREF to: 00427da0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0()
    ADD ESP,0x8                         ; 0054184f
    RET                                 ; 00541852

