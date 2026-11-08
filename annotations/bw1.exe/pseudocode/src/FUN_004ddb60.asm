; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ddb60(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_004207b0
;   FUN_004688a0
;   FUN_004837b0
;   FUN_00483850
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddb60
        ;   Label: FUN_004ddb60
    PUSH ESI                            ; 004ddb61
    PUSH EDI                            ; 004ddb62
    SUB ESP,0x30                        ; 004ddb63
    MOV EBX,dword ptr [ESP + 0x40]      ; 004ddb66
    LEA EAX,[EBX + 0x20]                ; 004ddb6a
    PUSH EAX                            ; 004ddb6d
    MOV EDX,dword ptr [0x00612560]      ; 004ddb6e | DAT_00612560
    PUSH EDX                            ; 004ddb74
    CALL FUN_004837b0                   ; 004ddb75
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004ddb7a
    PUSH 0x0                            ; 004ddb7d
    LEA EAX,[EBX + 0x30]                ; 004ddb7f
    PUSH EAX                            ; 004ddb82
    MOV ECX,dword ptr [0x00612560]      ; 004ddb83 | DAT_00612560
    PUSH ECX                            ; 004ddb89
    CALL FUN_00483850                   ; 004ddb8a
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 004ddb8f
    PUSH 0x0                            ; 004ddb92
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ddb94
    PUSH EBX                            ; 004ddb9a
    LEA ESI,[ESP + 0x20]                ; 004ddb9b
    LEA EDI,[ESP + 0x8]                 ; 004ddb9f
    CALL dword ptr [EAX + 0x1c]         ; 004ddba3
    MOV ECX,0x6                         ; 004ddba6
    ADD ESP,0x4                         ; 004ddbab
    LEA EAX,[ESP + 0x4]                 ; 004ddbae
    LEA ESI,[ESP + 0x1c]                ; 004ddbb2
    PUSH EAX                            ; 004ddbb6
    MOVSD.REP ES:EDI,ESI                ; 004ddbb7
    CALL FUN_004207b0                   ; 004ddbb9
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004ddbbe
    MOV ESI,EAX                         ; 004ddbc1
    TEST EAX,EAX                        ; 004ddbc3
    JNZ 0x004ddbdf                      ; 004ddbc5
        ;   XREF to: 004ddbdf (CONDITIONAL_JUMP)  ; LAB_004ddbdf
    MOV EBX,dword ptr [0x00612560]      ; 004ddbc7 | DAT_00612560
        ;   Label: LAB_004ddbc7
    PUSH EBX                            ; 004ddbcd
    CALL thunk_FUN_005084b0             ; 004ddbce
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004ddbd3
    MOV EAX,ESI                         ; 004ddbd6
    ADD ESP,0x30                        ; 004ddbd8
    POP EDI                             ; 004ddbdb
    POP ESI                             ; 004ddbdc
    POP EBX                             ; 004ddbdd
    RET                                 ; 004ddbde
    PUSH -0x1                           ; 004ddbdf
        ;   Label: LAB_004ddbdf
    ADD EBX,0x158                       ; 004ddbe1
    PUSH 0x0                            ; 004ddbe7
    PUSH EBX                            ; 004ddbe9
    CALL FUN_004688a0                   ; 004ddbea
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004ddbef
    JMP 0x004ddbc7                      ; 004ddbf2
        ;   XREF to: 004ddbc7 (UNCONDITIONAL_JUMP)  ; LAB_004ddbc7

