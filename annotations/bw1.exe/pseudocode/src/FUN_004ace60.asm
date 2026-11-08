; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ace60(int param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   FUN_004b5100 at 004b5490
;   FUN_004b54a0 at 004b552d
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_004207b0
;   FUN_004688a0
;   FUN_00468900
;   FUN_004837b0
;   FUN_00483850
;   FUN_00551c30
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ace60
        ;   Label: FUN_004ace60
    PUSH ESI                            ; 004ace61
    PUSH EDI                            ; 004ace62
    PUSH EBP                            ; 004ace63
    SUB ESP,0x18                        ; 004ace64
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004ace67
    ADD EBP,0x4                         ; 004ace6b
    PUSH EBP                            ; 004ace6e
    MOV EDX,dword ptr [0x00612560]      ; 004ace6f | DAT_00612560
    PUSH EDX                            ; 004ace75 | DAT_01bc120c
    CALL FUN_004837b0                   ; 004ace76
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004ace7b
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004ace7e
    PUSH 0x0                            ; 004ace82
    ADD EBX,0x10                        ; 004ace84
    PUSH EBX                            ; 004ace87
    MOV ECX,dword ptr [0x00612560]      ; 004ace88 | DAT_00612560
    PUSH ECX                            ; 004ace8e | DAT_01bc120c
    CALL FUN_00483850                   ; 004ace8f
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 004ace94
    PUSH 0x1c570b8                      ; 004ace97
    CALL FUN_00468900                   ; 004ace9c
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 004acea1
    MOV EDI,ESP                         ; 004acea4
    LEA ESI,[EAX + 0x338]               ; 004acea6
    PUSH 0x0                            ; 004aceac
    LEA EAX,[ESP + 0x4]                 ; 004aceae
    MOV ECX,0x6                         ; 004aceb2
    PUSH EAX                            ; 004aceb7
    MOVSD.REP ES:EDI,ESI                ; 004aceb8
    CALL FUN_004207b0                   ; 004aceba
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004acebf
    TEST EAX,EAX                        ; 004acec2
    JNZ 0x004acedd                      ; 004acec4
        ;   XREF to: 004acedd (CONDITIONAL_JUMP)  ; LAB_004acedd
    MOV ESI,dword ptr [0x00612560]      ; 004acec6 | DAT_00612560
        ;   Label: LAB_004acec6
    PUSH ESI                            ; 004acecc | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 004acecd
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004aced2
    ADD ESP,0x18                        ; 004aced5
    POP EBP                             ; 004aced8
    POP EDI                             ; 004aced9
    POP ESI                             ; 004aceda
    POP EBX                             ; 004acedb
    RET                                 ; 004acedc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004acedd
        ;   Label: LAB_004acedd
    ADD EAX,0x1c                        ; 004acee1
    PUSH EAX                            ; 004acee4
    LEA EAX,[ESP + 0x10]                ; 004acee5
    PUSH EAX                            ; 004acee9
    LEA EAX,[ESP + 0x8]                 ; 004aceea
    PUSH EAX                            ; 004aceee
    PUSH EBX                            ; 004aceef
    PUSH EBP                            ; 004acef0
    MOV EBX,dword ptr [0x00622c18]      ; 004acef1 | DAT_00622c18
    PUSH EBX                            ; 004acef7 | DAT_01e82168
    CALL FUN_00551c30                   ; 004acef8
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    ADD ESP,0x18                        ; 004acefd
    PUSH -0x1                           ; 004acf00
    PUSH 0x0                            ; 004acf02
    PUSH 0x1c570b8                      ; 004acf04
    CALL FUN_004688a0                   ; 004acf09
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004acf0e
    JMP 0x004acec6                      ; 004acf11
        ;   XREF to: 004acec6 (UNCONDITIONAL_JUMP)  ; LAB_004acec6

