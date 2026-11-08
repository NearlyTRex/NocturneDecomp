; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040dd00(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dd00
        ;   Label: FUN_0040dd00
    PUSH EDI                            ; 0040dd01
    SUB ESP,0x18                        ; 0040dd02
    MOV EBX,ESI                         ; 0040dd05
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040dd07
    ADD EAX,0x158                       ; 0040dd0b
    PUSH EAX                            ; 0040dd10
    LEA EDI,[ESP + 0x4]                 ; 0040dd11
    CALL FUN_00468900                   ; 0040dd15
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 0040dd1a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040dd1f
    ADD ESP,0x4                         ; 0040dd25
    MOVSD.REP ES:EDI,ESI                ; 0040dd28
    MOV ECX,0x6                         ; 0040dd2a
    MOV ESI,ESP                         ; 0040dd2f
    MOV EDI,EBX                         ; 0040dd31
    MOVSD.REP ES:EDI,ESI                ; 0040dd33
    MOV EAX,EBX                         ; 0040dd35
    ADD ESP,0x18                        ; 0040dd37
    POP EDI                             ; 0040dd3a
    POP EBX                             ; 0040dd3b
    RET                                 ; 0040dd3c

