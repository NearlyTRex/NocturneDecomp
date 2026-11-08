; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e3bd0(int param_1)
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

    PUSH EBX                            ; 004e3bd0
        ;   Label: FUN_004e3bd0
    PUSH ESI                            ; 004e3bd1
    PUSH EDI                            ; 004e3bd2
    SUB ESP,0x30                        ; 004e3bd3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004e3bd6
    LEA EAX,[EBX + 0x20]                ; 004e3bda
    PUSH EAX                            ; 004e3bdd
    MOV EDX,dword ptr [0x00612560]      ; 004e3bde | DAT_00612560
    PUSH EDX                            ; 004e3be4
    CALL FUN_004837b0                   ; 004e3be5
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004e3bea
    PUSH 0x0                            ; 004e3bed
    LEA EAX,[EBX + 0x30]                ; 004e3bef
    PUSH EAX                            ; 004e3bf2
    MOV ECX,dword ptr [0x00612560]      ; 004e3bf3 | DAT_00612560
    PUSH ECX                            ; 004e3bf9
    CALL FUN_00483850                   ; 004e3bfa
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 004e3bff
    PUSH 0x0                            ; 004e3c02
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e3c04
    PUSH EBX                            ; 004e3c0a
    LEA ESI,[ESP + 0x20]                ; 004e3c0b
    LEA EDI,[ESP + 0x8]                 ; 004e3c0f
    CALL dword ptr [EAX + 0x1c]         ; 004e3c13
    MOV ECX,0x6                         ; 004e3c16
    ADD ESP,0x4                         ; 004e3c1b
    LEA EAX,[ESP + 0x4]                 ; 004e3c1e
    LEA ESI,[ESP + 0x1c]                ; 004e3c22
    PUSH EAX                            ; 004e3c26
    MOVSD.REP ES:EDI,ESI                ; 004e3c27
    CALL FUN_004207b0                   ; 004e3c29
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004e3c2e
    MOV ESI,EAX                         ; 004e3c31
    TEST EAX,EAX                        ; 004e3c33
    JNZ 0x004e3c4f                      ; 004e3c35
        ;   XREF to: 004e3c4f (CONDITIONAL_JUMP)  ; LAB_004e3c4f
    MOV EBX,dword ptr [0x00612560]      ; 004e3c37 | DAT_00612560
        ;   Label: LAB_004e3c37
    PUSH EBX                            ; 004e3c3d
    CALL thunk_FUN_005084b0             ; 004e3c3e
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004e3c43
    MOV EAX,ESI                         ; 004e3c46
    ADD ESP,0x30                        ; 004e3c48
    POP EDI                             ; 004e3c4b
    POP ESI                             ; 004e3c4c
    POP EBX                             ; 004e3c4d
    RET                                 ; 004e3c4e
    PUSH -0x1                           ; 004e3c4f
        ;   Label: LAB_004e3c4f
    ADD EBX,0x158                       ; 004e3c51
    PUSH 0x0                            ; 004e3c57
    PUSH EBX                            ; 004e3c59
    CALL FUN_004688a0                   ; 004e3c5a
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004e3c5f
    JMP 0x004e3c37                      ; 004e3c62
        ;   XREF to: 004e3c37 (UNCONDITIONAL_JUMP)  ; LAB_004e3c37

