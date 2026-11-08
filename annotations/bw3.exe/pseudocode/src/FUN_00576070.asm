; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00576070(int param_1)
;
;
; Called Functions:
;   FUN_004625a0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576070
        ;   Label: FUN_00576070
    PUSH EDI                            ; 00576071
    SUB ESP,0x1c                        ; 00576072
    MOV EAX,dword ptr [ESP + 0x28]      ; 00576075
    MOV EBX,ESI                         ; 00576079
    FLD float ptr [EAX + 0xd054]        ; 0057607b
    ADD EAX,0xd058                      ; 00576081
    CALL FUN_005a3120                   ; 00576086
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH EAX                            ; 0057608b
    FISTP dword ptr [ESP + 0x1c]        ; 0057608c
    CALL FUN_004625a0                   ; 00576090
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    ADD ESP,0x4                         ; 00576095
    MOV EDX,dword ptr [ESP + 0x18]      ; 00576098
    MOV ESI,EAX                         ; 0057609c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057609e
    MOV EDI,ESP                         ; 005760a5
    SUB EAX,EDX                         ; 005760a7
    MOV ESI,dword ptr [ESI + 0x350]     ; 005760a9
    SHL EAX,0x3                         ; 005760af
    MOV ECX,0x6                         ; 005760b2
    ADD ESI,EAX                         ; 005760b7
    MOVSD.REP ES:EDI,ESI                ; 005760b9
    MOV ECX,0x6                         ; 005760bb
    MOV ESI,ESP                         ; 005760c0
    MOV EDI,EBX                         ; 005760c2
    MOVSD.REP ES:EDI,ESI                ; 005760c4
    MOV EAX,EBX                         ; 005760c6
    ADD ESP,0x1c                        ; 005760c8
    POP EDI                             ; 005760cb
    POP EBX                             ; 005760cc
    RET                                 ; 005760cd

