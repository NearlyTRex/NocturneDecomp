; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00490b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_00490b20 at 00490b4f
;
; Called Functions:
;   FUN_00490af0
;   FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490b70
        ;   Label: FUN_00490b70
    PUSH ESI                            ; 00490b71
    PUSH EDI                            ; 00490b72
    PUSH EBP                            ; 00490b73
    SUB ESP,0x1000                      ; 00490b74
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00490b7a
    PUSH EDX                            ; 00490b81
    MOV ECX,dword ptr [ESP + 0x102c]    ; 00490b82
    PUSH ECX                            ; 00490b89
    LEA EAX,[ESP + 0x8]                 ; 00490b8a
    PUSH EAX                            ; 00490b8e
    CALL FUN_00563a08                   ; 00490b8f
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a08()
    ADD ESP,0xc                         ; 00490b94
    MOV EAX,ESP                         ; 00490b97
    PUSH EAX                            ; 00490b99
    MOV EBX,dword ptr [ESP + 0x1028]    ; 00490b9a
    PUSH EBX                            ; 00490ba1
    MOV ESI,dword ptr [ESP + 0x1028]    ; 00490ba2
    PUSH ESI                            ; 00490ba9
    MOV EDI,dword ptr [ESP + 0x1028]    ; 00490baa
    PUSH EDI                            ; 00490bb1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00490bb2
    PUSH EBP                            ; 00490bb9
    MOV EAX,dword ptr [ESP + 0x1028]    ; 00490bba
    PUSH EAX                            ; 00490bc1
    CALL FUN_00490af0                   ; 00490bc2
        ;   XREF to: 00490af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00490af0()
    ADD ESP,0x18                        ; 00490bc7
    ADD ESP,0x1000                      ; 00490bca
    POP EBP                             ; 00490bd0
    POP EDI                             ; 00490bd1
    POP ESI                             ; 00490bd2
    POP EBX                             ; 00490bd3
    RET                                 ; 00490bd4

