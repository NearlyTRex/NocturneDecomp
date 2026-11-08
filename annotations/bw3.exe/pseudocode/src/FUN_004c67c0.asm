; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c67c0(int param_1)
;
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c67c0
        ;   Label: FUN_004c67c0
    PUSH EDI                            ; 004c67c1
    SUB ESP,0x18                        ; 004c67c2
    MOV EBX,ESI                         ; 004c67c5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c67c7
    ADD EAX,0x158                       ; 004c67cb
    PUSH EAX                            ; 004c67d0
    LEA EDI,[ESP + 0x4]                 ; 004c67d1
    CALL FUN_004625a0                   ; 004c67d5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 004c67da
    MOV ESI,dword ptr [EAX + 0x350]     ; 004c67df
    ADD ESP,0x4                         ; 004c67e5
    MOVSD.REP ES:EDI,ESI                ; 004c67e8
    MOV ECX,0x6                         ; 004c67ea
    MOV ESI,ESP                         ; 004c67ef
    MOV EDI,EBX                         ; 004c67f1
    MOVSD.REP ES:EDI,ESI                ; 004c67f3
    MOV EAX,EBX                         ; 004c67f5
    ADD ESP,0x18                        ; 004c67f7
    POP EDI                             ; 004c67fa
    POP EBX                             ; 004c67fb
    RET                                 ; 004c67fc

