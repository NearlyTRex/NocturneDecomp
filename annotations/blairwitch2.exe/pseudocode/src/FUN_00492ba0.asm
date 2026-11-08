; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00492ba0(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492ba0
        ;   Label: FUN_00492ba0
    PUSH EDI                            ; 00492ba1
    SUB ESP,0x18                        ; 00492ba2
    MOV EBX,ESI                         ; 00492ba5
    MOV EAX,dword ptr [ESP + 0x24]      ; 00492ba7
    ADD EAX,0x2b4                       ; 00492bab
    PUSH EAX                            ; 00492bb0
    LEA EDI,[ESP + 0x4]                 ; 00492bb1
    CALL FUN_0044fd20                   ; 00492bb5
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 00492bba
    MOV ESI,dword ptr [EAX + 0x350]     ; 00492bbf
    ADD ESP,0x4                         ; 00492bc5
    MOVSD.REP ES:EDI,ESI                ; 00492bc8
    MOV ECX,0x6                         ; 00492bca
    MOV ESI,ESP                         ; 00492bcf
    MOV EDI,EBX                         ; 00492bd1
    MOVSD.REP ES:EDI,ESI                ; 00492bd3
    MOV EAX,EBX                         ; 00492bd5
    ADD ESP,0x18                        ; 00492bd7
    POP EDI                             ; 00492bda
    POP EBX                             ; 00492bdb
    RET                                 ; 00492bdc

