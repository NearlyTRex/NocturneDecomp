; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00583560(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583560
        ;   Label: FUN_00583560
    PUSH EDI                            ; 00583561
    SUB ESP,0x18                        ; 00583562
    MOV EBX,ESI                         ; 00583565
    MOV EAX,dword ptr [ESP + 0x24]      ; 00583567
    ADD EAX,0x158                       ; 0058356b
    PUSH EAX                            ; 00583570
    LEA EDI,[ESP + 0x4]                 ; 00583571
    CALL FUN_00468900                   ; 00583575
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 0058357a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0058357f
    ADD ESP,0x4                         ; 00583585
    MOVSD.REP ES:EDI,ESI                ; 00583588
    MOV ECX,0x6                         ; 0058358a
    MOV ESI,ESP                         ; 0058358f
    MOV EDI,EBX                         ; 00583591
    MOVSD.REP ES:EDI,ESI                ; 00583593
    MOV EAX,EBX                         ; 00583595
    ADD ESP,0x18                        ; 00583597
    POP EDI                             ; 0058359a
    POP EBX                             ; 0058359b
    RET                                 ; 0058359c

