; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408c30(int param_1,undefined4 param_2,undefined4 *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01e614ac
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb32e0
;   undefined4 DAT_01fb32e4
;   undefined4 DAT_01fb32e8
;   undefined4 DAT_01fb32fc
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_00534ea0
;   FUN_00537a90
;   FUN_00537c40
;   FUN_00537e30
;   FUN_00537ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c30
        ;   Label: FUN_00408c30
    PUSH ESI                            ; 00408c31
    PUSH EDI                            ; 00408c32
    PUSH EBP                            ; 00408c33
    SUB ESP,0x8                         ; 00408c34
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00408c37
    MOV EBX,dword ptr [ESP + 0x24]      ; 00408c3b
    MOV EDX,dword ptr [0x0061b5a8]      ; 00408c3f | DAT_0061b5a8
    PUSH EDX                            ; 00408c45 | DAT_01e661b8
    CALL FUN_00537a90                   ; 00408c46
        ;   XREF to: 00537a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00537a90()
    ADD ESP,0x4                         ; 00408c4b
    PUSH ESI                            ; 00408c4e
    MOV ECX,dword ptr [0x0061b5a8]      ; 00408c4f | DAT_0061b5a8
    PUSH ECX                            ; 00408c55 | DAT_01e661b8
    CALL FUN_00537e30                   ; 00408c56
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    ADD ESP,0x8                         ; 00408c5b
    MOV EDI,dword ptr [0x0061b5a8]      ; 00408c5e | DAT_0061b5a8
    PUSH EDI                            ; 00408c64 | DAT_01e661b8
    CALL FUN_00537ea0                   ; 00408c65
        ;   XREF to: 00537ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537ea0()
    ADD ESP,0x4                         ; 00408c6a
    LEA EAX,[ESI + 0x20]                ; 00408c6d
    PUSH dword ptr [ESP + 0x20]         ; 00408c70
    PUSH EAX                            ; 00408c74
    MOV EBP,dword ptr [0x0061b5a8]      ; 00408c75 | DAT_0061b5a8
    PUSH EBP                            ; 00408c7b | DAT_01e661b8
    CALL FUN_00534ea0                   ; 00408c7c
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00534ea0()
    MOV dword ptr [ESP + 0x10],EAX      ; 00408c81
    FLD float ptr [ESP + 0x10]          ; 00408c85
    ADD ESP,0xc                         ; 00408c89
    MOV EAX,[0x01e614ac]                ; 00408c8c | DAT_01e614ac
    PUSH EAX                            ; 00408c91
    MOV EAX,[0x0061b5a8]                ; 00408c92 | DAT_0061b5a8
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00408c97 | DAT_01fb32fc
    PUSH EDX                            ; 00408c9d
    FSTP float ptr [ESP + 0x8]          ; 00408c9e
    CALL FUN_0040c8f0                   ; 00408ca2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 00408ca7
    MOV dword ptr [ESI + 0xdc],EAX      ; 00408caa
    TEST EBX,EBX                        ; 00408cb0
    JZ 0x00408cd2                       ; 00408cb2
        ;   XREF to: 00408cd2 (CONDITIONAL_JUMP)  ; LAB_00408cd2
    MOV EAX,[0x0061b5a8]                ; 00408cb4 | DAT_0061b5a8
    ADD EAX,0x14d128                    ; 00408cb9
    CMP EBX,EAX                         ; 00408cbe
    JZ 0x00408cd2                       ; 00408cc0
        ;   XREF to: 00408cd2 (CONDITIONAL_JUMP)  ; LAB_00408cd2
    MOV EDX,dword ptr [EAX]             ; 00408cc2 | DAT_01fb32e0
    MOV dword ptr [EBX],EDX             ; 00408cc4
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408cc6 | DAT_01fb32e4
    MOV dword ptr [EBX + 0x4],EDX       ; 00408cc9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00408ccc | DAT_01fb32e8
    MOV dword ptr [EBX + 0x8],EDX       ; 00408ccf
    MOV ECX,dword ptr [0x0061b5a8]      ; 00408cd2 | DAT_0061b5a8
        ;   Label: LAB_00408cd2
    PUSH ECX                            ; 00408cd8 | DAT_01e661b8
    CALL FUN_00537c40                   ; 00408cd9
        ;   XREF to: 00537c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00537c40()
    ADD ESP,0x4                         ; 00408cde
    MOV EAX,dword ptr [ESP]             ; 00408ce1
    ADD ESP,0x8                         ; 00408ce4
    POP EBP                             ; 00408ce7
    POP EDI                             ; 00408ce8
    POP ESI                             ; 00408ce9
    POP EBX                             ; 00408cea
    RET                                 ; 00408ceb

