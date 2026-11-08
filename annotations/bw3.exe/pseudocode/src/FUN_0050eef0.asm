; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050eef0(int param_1)
;
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050eef0
        ;   Label: FUN_0050eef0
    PUSH EDI                            ; 0050eef1
    SUB ESP,0x18                        ; 0050eef2
    MOV EBX,ESI                         ; 0050eef5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050eef7
    ADD EAX,0x158                       ; 0050eefb
    PUSH EAX                            ; 0050ef00
    LEA EDI,[ESP + 0x4]                 ; 0050ef01
    CALL FUN_004625a0                   ; 0050ef05
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 0050ef0a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0050ef0f
    ADD ESP,0x4                         ; 0050ef15
    MOVSD.REP ES:EDI,ESI                ; 0050ef18
    MOV ECX,0x6                         ; 0050ef1a
    MOV ESI,ESP                         ; 0050ef1f
    MOV EDI,EBX                         ; 0050ef21
    MOVSD.REP ES:EDI,ESI                ; 0050ef23
    MOV EAX,EBX                         ; 0050ef25
    ADD ESP,0x18                        ; 0050ef27
    POP EDI                             ; 0050ef2a
    POP EBX                             ; 0050ef2b
    RET                                 ; 0050ef2c

