; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056d0f0(int param_1)
;
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d0f0
        ;   Label: FUN_0056d0f0
    PUSH EDI                            ; 0056d0f1
    SUB ESP,0x18                        ; 0056d0f2
    MOV EBX,ESI                         ; 0056d0f5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056d0f7
    ADD EAX,0x158                       ; 0056d0fb
    PUSH EAX                            ; 0056d100
    LEA EDI,[ESP + 0x4]                 ; 0056d101
    CALL FUN_004625a0                   ; 0056d105
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 0056d10a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0056d10f
    ADD ESP,0x4                         ; 0056d115
    MOVSD.REP ES:EDI,ESI                ; 0056d118
    MOV ECX,0x6                         ; 0056d11a
    MOV ESI,ESP                         ; 0056d11f
    MOV EDI,EBX                         ; 0056d121
    MOVSD.REP ES:EDI,ESI                ; 0056d123
    MOV EAX,EBX                         ; 0056d125
    ADD ESP,0x18                        ; 0056d127
    POP EDI                             ; 0056d12a
    POP EBX                             ; 0056d12b
    RET                                 ; 0056d12c

