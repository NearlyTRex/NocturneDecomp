; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562a00(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562a00
        ;   Label: FUN_00562a00
    PUSH EDI                            ; 00562a01
    SUB ESP,0x18                        ; 00562a02
    MOV EBX,ESI                         ; 00562a05
    MOV EAX,dword ptr [ESP + 0x24]      ; 00562a07
    ADD EAX,0x158                       ; 00562a0b
    PUSH EAX                            ; 00562a10
    LEA EDI,[ESP + 0x4]                 ; 00562a11
    CALL FUN_00468900                   ; 00562a15
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 00562a1a
    MOV ESI,dword ptr [EAX + 0x350]     ; 00562a1f
    ADD ESP,0x4                         ; 00562a25
    MOVSD.REP ES:EDI,ESI                ; 00562a28
    MOV ECX,0x6                         ; 00562a2a
    MOV ESI,ESP                         ; 00562a2f
    MOV EDI,EBX                         ; 00562a31
    MOVSD.REP ES:EDI,ESI                ; 00562a33
    MOV EAX,EBX                         ; 00562a35
    ADD ESP,0x18                        ; 00562a37
    POP EDI                             ; 00562a3a
    POP EBX                             ; 00562a3b
    RET                                 ; 00562a3c

