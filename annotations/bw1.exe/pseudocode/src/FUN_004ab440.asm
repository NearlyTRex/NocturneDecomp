; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ab440(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
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

    PUSH EBX                            ; 004ab440
        ;   Label: FUN_004ab440
    PUSH ESI                            ; 004ab441
    PUSH EDI                            ; 004ab442
    SUB ESP,0x30                        ; 004ab443
    MOV EBX,dword ptr [ESP + 0x40]      ; 004ab446
    LEA EAX,[EBX + 0x20]                ; 004ab44a
    PUSH EAX                            ; 004ab44d
    MOV EDX,dword ptr [0x00612560]      ; 004ab44e | DAT_00612560
    PUSH EDX                            ; 004ab454 | DAT_01bc120c
    CALL FUN_004837b0                   ; 004ab455
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004ab45a
    PUSH 0x0                            ; 004ab45d
    LEA EAX,[EBX + 0x30]                ; 004ab45f
    PUSH EAX                            ; 004ab462
    MOV ECX,dword ptr [0x00612560]      ; 004ab463 | DAT_00612560
    PUSH ECX                            ; 004ab469 | DAT_01bc120c
    CALL FUN_00483850                   ; 004ab46a
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 004ab46f
    PUSH 0x0                            ; 004ab472
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ab474
    PUSH EBX                            ; 004ab47a
    LEA ESI,[ESP + 0x20]                ; 004ab47b
    LEA EDI,[ESP + 0x8]                 ; 004ab47f
    CALL dword ptr [EAX + 0x1c]         ; 004ab483
    MOV ECX,0x6                         ; 004ab486
    ADD ESP,0x4                         ; 004ab48b
    LEA EAX,[ESP + 0x4]                 ; 004ab48e
    LEA ESI,[ESP + 0x1c]                ; 004ab492
    PUSH EAX                            ; 004ab496
    MOVSD.REP ES:EDI,ESI                ; 004ab497
    CALL FUN_004207b0                   ; 004ab499
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004ab49e
    MOV ESI,EAX                         ; 004ab4a1
    TEST EAX,EAX                        ; 004ab4a3
    JNZ 0x004ab4c1                      ; 004ab4a5
        ;   XREF to: 004ab4c1 (CONDITIONAL_JUMP)  ; LAB_004ab4c1
    MOV EBX,dword ptr [0x00612560]      ; 004ab4a7 | DAT_00612560
        ;   Label: LAB_004ab4a7
    PUSH EBX                            ; 004ab4ad | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 004ab4ae
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004ab4b3
    MOV EAX,ESI                         ; 004ab4b6
    ADD ESP,0x30                        ; 004ab4b8
    POP EDI                             ; 004ab4bb
    POP ESI                             ; 004ab4bc
    POP EBX                             ; 004ab4bd
    MOV EAX,EAX                         ; 004ab4be
    RET                                 ; 004ab4c0
        ;   Label: LAB_004ab4c0
    PUSH -0x1                           ; 004ab4c1
        ;   Label: LAB_004ab4c1
    ADD EBX,0x158                       ; 004ab4c3
    PUSH 0x0                            ; 004ab4c9
    PUSH EBX                            ; 004ab4cb
    CALL FUN_004688a0                   ; 004ab4cc
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004ab4d1
    JMP 0x004ab4a7                      ; 004ab4d4
        ;   XREF to: 004ab4a7 (UNCONDITIONAL_JUMP)  ; LAB_004ab4a7

