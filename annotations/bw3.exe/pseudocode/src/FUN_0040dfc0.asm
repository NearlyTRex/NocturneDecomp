; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dfc0(int param_1)
;
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dfc0
        ;   Label: FUN_0040dfc0
    PUSH EDI                            ; 0040dfc1
    SUB ESP,0x18                        ; 0040dfc2
    MOV EBX,ESI                         ; 0040dfc5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040dfc7
    ADD EAX,0x158                       ; 0040dfcb
    PUSH EAX                            ; 0040dfd0
    LEA EDI,[ESP + 0x4]                 ; 0040dfd1
    CALL FUN_004625a0                   ; 0040dfd5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 0040dfda
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040dfdf
    ADD ESP,0x4                         ; 0040dfe5
    MOVSD.REP ES:EDI,ESI                ; 0040dfe8
    MOV ECX,0x6                         ; 0040dfea
    MOV ESI,ESP                         ; 0040dfef
    MOV EDI,EBX                         ; 0040dff1
    MOVSD.REP ES:EDI,ESI                ; 0040dff3
    MOV EAX,EBX                         ; 0040dff5
    ADD ESP,0x18                        ; 0040dff7
    POP EDI                             ; 0040dffa
    POP EBX                             ; 0040dffb
    RET                                 ; 0040dffc

