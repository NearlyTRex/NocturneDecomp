; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00541aa0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00541ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541aa0
        ;   Label: FUN_00541aa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00541aa1
    PUSH EBX                            ; 00541aa5
    CALL FUN_00541ac0                   ; 00541aa6
        ;   XREF to: 00541ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00541ac0()
    ADD ESP,0x4                         ; 00541aab
    MOV EAX,EBX                         ; 00541aae
    POP EBX                             ; 00541ab0
    RET                                 ; 00541ab1

