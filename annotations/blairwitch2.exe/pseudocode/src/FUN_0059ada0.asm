; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059ada0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006138e0
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   FUN_00403170
;   FUN_0047f210
;   FUN_0055b1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ada0
        ;   Label: FUN_0059ada0
    PUSH ESI                            ; 0059ada1
    PUSH EDI                            ; 0059ada2
    PUSH EBP                            ; 0059ada3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059ada4
    CALL FUN_0055b1f0                   ; 0059ada8
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
    MOV ECX,dword ptr [ESI + 0x10]      ; 0059adad
    PUSH ECX                            ; 0059adb0
    MOV EBX,dword ptr [ESI + 0xc]       ; 0059adb1
    PUSH EBX                            ; 0059adb4
    MOV EDI,dword ptr [ESI + 0x8]       ; 0059adb5
    PUSH EDI                            ; 0059adb8
    MOV EBP,dword ptr [ESI + 0x4]       ; 0059adb9
    MOV EDX,0xff                        ; 0059adbc
    PUSH EBP                            ; 0059adc1
    MOV dword ptr [0x01c35e60],EDX      ; 0059adc2 | DAT_01c35e60
    CALL FUN_00403170                   ; 0059adc8
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; undefined FUN_00403170()
    ADD ESP,0x10                        ; 0059adcd
    PUSH 0x0                            ; 0059add0
    MOV EAX,[0x006138e0]                ; 0059add2 | DAT_006138e0
    PUSH EAX                            ; 0059add7
    CALL FUN_0047f210                   ; 0059add8
        ;   XREF to: 0047f210 (UNCONDITIONAL_CALL)  ; undefined FUN_0047f210()
    ADD ESP,0x8                         ; 0059addd
    POP EBP                             ; 0059ade0
    POP EDI                             ; 0059ade1
    POP ESI                             ; 0059ade2
    POP EBX                             ; 0059ade3
    RET                                 ; 0059ade4

