; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043a240(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a240
        ;   Label: FUN_0043a240
    PUSH EDI                            ; 0043a241
    SUB ESP,0x18                        ; 0043a242
    MOV EBX,ESI                         ; 0043a245
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043a247
    ADD EAX,0x2b4                       ; 0043a24b
    PUSH EAX                            ; 0043a250
    LEA EDI,[ESP + 0x4]                 ; 0043a251
    CALL FUN_0044fd20                   ; 0043a255
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 0043a25a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0043a25f
    ADD ESP,0x4                         ; 0043a265
    MOVSD.REP ES:EDI,ESI                ; 0043a268
    MOV ECX,0x6                         ; 0043a26a
    MOV ESI,ESP                         ; 0043a26f
    MOV EDI,EBX                         ; 0043a271
    MOVSD.REP ES:EDI,ESI                ; 0043a273
    MOV EAX,EBX                         ; 0043a275
    ADD ESP,0x18                        ; 0043a277
    POP EDI                             ; 0043a27a
    POP EBX                             ; 0043a27b
    RET                                 ; 0043a27c

