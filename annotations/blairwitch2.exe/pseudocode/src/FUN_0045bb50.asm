; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045bb50(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004568e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bb50
        ;   Label: FUN_0045bb50
    PUSH EDI                            ; 0045bb51
    SUB ESP,0x30                        ; 0045bb52
    MOV EDX,dword ptr [ESP + 0x40]      ; 0045bb55
    MOV EBX,ESI                         ; 0045bb59
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0045bb5b
    PUSH EDX                            ; 0045bb5f
    SHL EDX,0x3                         ; 0045bb60
    MOV EAX,EDX                         ; 0045bb63
    SHL EAX,0x4                         ; 0045bb65
    SUB EAX,EDX                         ; 0045bb68
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x2620] ; 0045bb6a
    PUSH EDX                            ; 0045bb71
    PUSH ESI                            ; 0045bb72
    LEA ESI,[ESP + 0xc]                 ; 0045bb73
    MOV EDI,EBX                         ; 0045bb77
    CALL FUN_004568e0                   ; 0045bb79
        ;   XREF to: 004568e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004568e0()
    MOV ECX,0xc                         ; 0045bb7e
    LEA ESI,[ESP + 0xc]                 ; 0045bb83
    ADD ESP,0xc                         ; 0045bb87
    MOVSD.REP ES:EDI,ESI                ; 0045bb8a
    MOV EAX,EBX                         ; 0045bb8c
    ADD ESP,0x30                        ; 0045bb8e
    POP EDI                             ; 0045bb91
    POP EBX                             ; 0045bb92
    RET                                 ; 0045bb93

