; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d1fa0(int param_1)
;
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1fa0
        ;   Label: FUN_004d1fa0
    PUSH EDI                            ; 004d1fa1
    SUB ESP,0x18                        ; 004d1fa2
    MOV EBX,ESI                         ; 004d1fa5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004d1fa7
    ADD EAX,0x158                       ; 004d1fab
    PUSH EAX                            ; 004d1fb0
    LEA EDI,[ESP + 0x4]                 ; 004d1fb1
    CALL FUN_004625a0                   ; 004d1fb5
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV ECX,0x6                         ; 004d1fba
    MOV ESI,dword ptr [EAX + 0x350]     ; 004d1fbf
    ADD ESP,0x4                         ; 004d1fc5
    MOVSD.REP ES:EDI,ESI                ; 004d1fc8
    MOV ECX,0x6                         ; 004d1fca
    MOV ESI,ESP                         ; 004d1fcf
    MOV EDI,EBX                         ; 004d1fd1
    MOVSD.REP ES:EDI,ESI                ; 004d1fd3
    MOV EAX,EBX                         ; 004d1fd5
    ADD ESP,0x18                        ; 004d1fd7
    POP EDI                             ; 004d1fda
    POP EBX                             ; 004d1fdb
    RET                                 ; 004d1fdc

