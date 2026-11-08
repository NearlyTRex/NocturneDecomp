; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ca440(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_model_name_005d95ba
;   undefined4 DAT_005d95c5
;   TerminatedCString s_active_005d95c9
;   TerminatedCString s_graveState_005d95d0
;   TerminatedCString s_curFrame_005d95db
;   TerminatedCString s_hideOnFirstFrame_005d95e4
;   TerminatedCString s_startCondition_005d95f5
;   TerminatedCString s_startSound_005d9604
;   undefined4 DAT_006179e4
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca440
        ;   Label: FUN_004ca440
    PUSH ESI                            ; 004ca441
    SUB ESP,0x4                         ; 004ca442
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ca445
    PUSH EBX                            ; 004ca449
    CALL FUN_0040c330                   ; 004ca44a
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 004ca44f
    PUSH 0x5d95ba                       ; 004ca452 | = "model name"
    LEA EAX,[EBX + 0x2b4]               ; 004ca457
    PUSH EAX                            ; 004ca45d
    CALL FUN_0040ba60                   ; 004ca45e
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 004ca463
    PUSH 0x5d95c5                       ; 004ca466 | DAT_005d95c5
    LEA EAX,[EBX + 0x434]               ; 004ca46b
    PUSH EAX                            ; 004ca471
    CALL FUN_0040b8e0                   ; 004ca472
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    MOV EDX,dword ptr [0x006179e4]      ; 004ca477 | DAT_006179e4
    ADD ESP,0x8                         ; 004ca47d
    CMP EDX,0x2                         ; 004ca480
    JL 0x004ca4ef                       ; 004ca483
        ;   XREF to: 004ca4ef (CONDITIONAL_JUMP)  ; LAB_004ca4ef
    PUSH 0x5d95d0                       ; 004ca485 | = "graveState"
    LEA EAX,[EBX + 0x43c]               ; 004ca48a
    PUSH EAX                            ; 004ca490
    CALL FUN_0040b960                   ; 004ca491
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004ca496
    PUSH 0x5d95db                       ; 004ca499 | = "curFrame"
        ;   Label: LAB_004ca499
    LEA EAX,[EBX + 0x430]               ; 004ca49e
    PUSH EAX                            ; 004ca4a4
    CALL FUN_0040b8e0                   ; 004ca4a5
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    MOV ESI,dword ptr [0x006179e4]      ; 004ca4aa | DAT_006179e4
    ADD ESP,0x8                         ; 004ca4b0
    CMP ESI,0x3                         ; 004ca4b3
    JL 0x004ca4e0                       ; 004ca4b6
        ;   XREF to: 004ca4e0 (CONDITIONAL_JUMP)  ; LAB_004ca4e0
    PUSH 0x5d95e4                       ; 004ca4b8 | = "hideOnFirstFrame"
    LEA EAX,[EBX + 0x440]               ; 004ca4bd
    PUSH EAX                            ; 004ca4c3
    CALL FUN_0040b960                   ; 004ca4c4
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004ca4c9
    PUSH 0x5d95f5                       ; 004ca4cc | = "startCondition"
    LEA EAX,[EBX + 0x444]               ; 004ca4d1
    PUSH EAX                            ; 004ca4d7
    CALL FUN_0040b730                   ; 004ca4d8
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004ca4dd
    CMP dword ptr [0x006179e4],0x4      ; 004ca4e0 | DAT_006179e4
        ;   Label: LAB_004ca4e0
    JGE 0x004ca520                      ; 004ca4e7
        ;   XREF to: 004ca520 (CONDITIONAL_JUMP)  ; LAB_004ca520
    ADD ESP,0x4                         ; 004ca4e9
    POP ESI                             ; 004ca4ec
    POP EBX                             ; 004ca4ed
    RET                                 ; 004ca4ee
    PUSH 0x5d95c9                       ; 004ca4ef | = "active"
        ;   Label: LAB_004ca4ef
    LEA EAX,[ESP + 0x4]                 ; 004ca4f4
    PUSH EAX                            ; 004ca4f8
    CALL FUN_0040b960                   ; 004ca4f9
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004ca4fe
    MOV dword ptr [EBX + 0x43c],0x0     ; 004ca501
    CMP dword ptr [ESP],0x0             ; 004ca50b
    JZ 0x004ca499                       ; 004ca50f
        ;   XREF to: 004ca499 (CONDITIONAL_JUMP)  ; LAB_004ca499
    MOV dword ptr [EBX + 0x43c],0x1     ; 004ca511
    JMP 0x004ca499                      ; 004ca51b
        ;   XREF to: 004ca499 (UNCONDITIONAL_JUMP)  ; LAB_004ca499
    PUSH 0x5d9604                       ; 004ca520 | = "startSound"
        ;   Label: LAB_004ca520
    ADD EBX,0x4a8                       ; 004ca525
    PUSH EBX                            ; 004ca52b
    CALL FUN_0040b730                   ; 004ca52c
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004ca531
    ADD ESP,0x4                         ; 004ca534
    POP ESI                             ; 004ca537
    POP EBX                             ; 004ca538
    RET                                 ; 004ca539

