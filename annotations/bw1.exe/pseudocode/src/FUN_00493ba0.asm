; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00493ba0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00492920 at 00492925
;
; Referenced Globals:
;   undefined4 DAT_01c3eb5c
;
; Called Functions:
;   FUN_00493c30
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493ba0
        ;   Label: FUN_00493ba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00493ba1
    PUSH 0x9d8                          ; 00493ba5
    XOR EDX,EDX                         ; 00493baa
    PUSH EDX                            ; 00493bac
    PUSH 0x1c3eb60                      ; 00493bad
    MOV dword ptr [0x01c3eb5c],EDX      ; 00493bb2 | DAT_01c3eb5c
    CALL FUN_005bfb70                   ; 00493bb8
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 00493bbd
    PUSH EBX                            ; 00493bc0
    CALL FUN_00493c30                   ; 00493bc1
        ;   XREF to: 00493c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00493c30()
    ADD ESP,0x4                         ; 00493bc6
    MOV EAX,EBX                         ; 00493bc9
    POP EBX                             ; 00493bcb
    RET                                 ; 00493bcc

