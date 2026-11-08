; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af040(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01e82168
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_004207b0
;   FUN_00467270
;   FUN_004837b0
;   FUN_00483800
;   FUN_00551c30
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af040
        ;   Label: FUN_004af040
    PUSH ESI                            ; 004af041
    PUSH EDI                            ; 004af042
    PUSH EBP                            ; 004af043
    SUB ESP,0x18                        ; 004af044
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004af047
    PUSH EBX                            ; 004af04b
    MOV EDX,dword ptr [0x00612560]      ; 004af04c | DAT_00612560
    PUSH EDX                            ; 004af052 | DAT_01bc120c
    CALL FUN_004837b0                   ; 004af053
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004af058
    PUSH 0x0                            ; 004af05b
    LEA EAX,[EBX + 0x40]                ; 004af05d
    PUSH EAX                            ; 004af060
    MOV ECX,dword ptr [0x00612560]      ; 004af061 | DAT_00612560
    PUSH ECX                            ; 004af067 | DAT_01bc120c
    LEA EDI,[ESP + 0xc]                 ; 004af068
    CALL FUN_00483800                   ; 004af06c
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; undefined FUN_00483800()
    ADD ESP,0xc                         ; 004af071
    MOV ECX,0x6                         ; 004af074
    MOV ESI,dword ptr [EBX + 0x4c]      ; 004af079
    PUSH 0x0                            ; 004af07c
    LEA EAX,[ESP + 0x4]                 ; 004af07e
    MOV ESI,dword ptr [ESI + 0x350]     ; 004af082
    PUSH EAX                            ; 004af088
    MOVSD.REP ES:EDI,ESI                ; 004af089
    CALL FUN_004207b0                   ; 004af08b
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004af090
    TEST EAX,EAX                        ; 004af093
    JNZ 0x004af0ae                      ; 004af095
        ;   XREF to: 004af0ae (CONDITIONAL_JUMP)  ; LAB_004af0ae
    MOV EBP,dword ptr [0x00612560]      ; 004af097 | DAT_00612560
        ;   Label: LAB_004af097
    PUSH EBP                            ; 004af09d | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 004af09e
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004af0a3
    ADD ESP,0x18                        ; 004af0a6
    POP EBP                             ; 004af0a9
    POP EDI                             ; 004af0aa
    POP ESI                             ; 004af0ab
    POP EBX                             ; 004af0ac
    RET                                 ; 004af0ad
    PUSH 0x0                            ; 004af0ae
        ;   Label: LAB_004af0ae
    LEA EAX,[ESP + 0x10]                ; 004af0b0
    PUSH EAX                            ; 004af0b4
    LEA EAX,[ESP + 0x8]                 ; 004af0b5
    PUSH EAX                            ; 004af0b9
    PUSH 0x2c8af28                      ; 004af0ba | DAT_02c8af28
    PUSH EBX                            ; 004af0bf
    MOV ESI,dword ptr [0x00622c18]      ; 004af0c0 | DAT_00622c18
    PUSH ESI                            ; 004af0c6 | DAT_01e82168
    CALL FUN_00551c30                   ; 004af0c7
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    ADD ESP,0x18                        ; 004af0cc
    PUSH -0x1                           ; 004af0cf
    PUSH 0x0                            ; 004af0d1
    PUSH 0x0                            ; 004af0d3
    MOV EDI,dword ptr [EBX + 0x4c]      ; 004af0d5
    PUSH EDI                            ; 004af0d8
    CALL FUN_00467270                   ; 004af0d9
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; undefined FUN_00467270()
    ADD ESP,0x10                        ; 004af0de
    JMP 0x004af097                      ; 004af0e1
        ;   XREF to: 004af097 (UNCONDITIONAL_JUMP)  ; LAB_004af097

