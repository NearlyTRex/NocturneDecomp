; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a90e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_004a9130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a90e0
        ;   Label: FUN_004a90e0
    PUSH ESI                            ; 004a90e1
    PUSH EDI                            ; 004a90e2
    PUSH EBP                            ; 004a90e3
    SUB ESP,0x4                         ; 004a90e4
    LEA EAX,[ESP + 0x30]                ; 004a90e7
    MOV dword ptr [ESP],EAX             ; 004a90eb
    MOV EAX,ESP                         ; 004a90ee
    PUSH EAX                            ; 004a90f0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004a90f1
    PUSH EDX                            ; 004a90f5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a90f6
    PUSH ECX                            ; 004a90fa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004a90fb
    PUSH EBX                            ; 004a90ff
    MOV ESI,dword ptr [ESP + 0x30]      ; 004a9100
    PUSH ESI                            ; 004a9104
    MOV EDI,dword ptr [ESP + 0x30]      ; 004a9105
    PUSH EDI                            ; 004a9109
    MOV EBP,dword ptr [ESP + 0x30]      ; 004a910a
    PUSH EBP                            ; 004a910e
    CALL FUN_004a9130                   ; 004a910f
        ;   XREF to: 004a9130 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9130()
    ADD ESP,0x1c                        ; 004a9114
    XOR EDX,EDX                         ; 004a9117
    MOV dword ptr [ESP],EDX             ; 004a9119
    ADD ESP,0x4                         ; 004a911c
    POP EBP                             ; 004a911f
    POP EDI                             ; 004a9120
    POP ESI                             ; 004a9121
    POP EBX                             ; 004a9122
    RET                                 ; 004a9123

