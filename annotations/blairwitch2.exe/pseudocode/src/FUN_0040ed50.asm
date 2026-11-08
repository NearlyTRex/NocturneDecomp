; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ed50(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ed50
        ;   Label: FUN_0040ed50
    PUSH EDI                            ; 0040ed51
    SUB ESP,0x18                        ; 0040ed52
    MOV EBX,ESI                         ; 0040ed55
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040ed57
    ADD EAX,0x2b4                       ; 0040ed5b
    PUSH EAX                            ; 0040ed60
    LEA EDI,[ESP + 0x4]                 ; 0040ed61
    CALL FUN_0044fd20                   ; 0040ed65
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 0040ed6a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0040ed6f
    ADD ESP,0x4                         ; 0040ed75
    MOVSD.REP ES:EDI,ESI                ; 0040ed78
    MOV ECX,0x6                         ; 0040ed7a
    MOV ESI,ESP                         ; 0040ed7f
    MOV EDI,EBX                         ; 0040ed81
    MOVSD.REP ES:EDI,ESI                ; 0040ed83
    MOV EAX,EBX                         ; 0040ed85
    ADD ESP,0x18                        ; 0040ed87
    POP EDI                             ; 0040ed8a
    POP EBX                             ; 0040ed8b
    RET                                 ; 0040ed8c

