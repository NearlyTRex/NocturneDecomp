; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00590690(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_0058afe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590690
        ;   Label: FUN_00590690
    PUSH EDI                            ; 00590691
    SUB ESP,0x30                        ; 00590692
    MOV EDX,dword ptr [ESP + 0x40]      ; 00590695
    MOV EBX,ESI                         ; 00590699
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0059069b
    PUSH EDX                            ; 0059069f
    SHL EDX,0x3                         ; 005906a0
    MOV EAX,EDX                         ; 005906a3
    SHL EAX,0x4                         ; 005906a5
    SUB EAX,EDX                         ; 005906a8
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x25b0] ; 005906aa
    PUSH EDX                            ; 005906b1
    PUSH ESI                            ; 005906b2
    LEA ESI,[ESP + 0xc]                 ; 005906b3
    MOV EDI,EBX                         ; 005906b7
    CALL FUN_0058afe0                   ; 005906b9
        ;   XREF to: 0058afe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058afe0()
    MOV ECX,0xc                         ; 005906be
    LEA ESI,[ESP + 0xc]                 ; 005906c3
    ADD ESP,0xc                         ; 005906c7
    MOVSD.REP ES:EDI,ESI                ; 005906ca
    MOV EAX,EBX                         ; 005906cc
    ADD ESP,0x30                        ; 005906ce
    POP EDI                             ; 005906d1
    POP EBX                             ; 005906d2
    RET                                 ; 005906d3

