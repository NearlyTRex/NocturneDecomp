; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c14c0(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c14c0
        ;   Label: FUN_004c14c0
    PUSH EDI                            ; 004c14c1
    SUB ESP,0x18                        ; 004c14c2
    MOV EBX,ESI                         ; 004c14c5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c14c7
    ADD EAX,0x2b4                       ; 004c14cb
    PUSH EAX                            ; 004c14d0
    LEA EDI,[ESP + 0x4]                 ; 004c14d1
    CALL FUN_0044fd20                   ; 004c14d5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 004c14da
    MOV ESI,dword ptr [EAX + 0x350]     ; 004c14df
    ADD ESP,0x4                         ; 004c14e5
    MOVSD.REP ES:EDI,ESI                ; 004c14e8
    MOV ECX,0x6                         ; 004c14ea
    MOV ESI,ESP                         ; 004c14ef
    MOV EDI,EBX                         ; 004c14f1
    MOVSD.REP ES:EDI,ESI                ; 004c14f3
    MOV EAX,EBX                         ; 004c14f5
    ADD ESP,0x18                        ; 004c14f7
    POP EDI                             ; 004c14fa
    POP EBX                             ; 004c14fb
    RET                                 ; 004c14fc

