; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00521370(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine2_005ea33d
;   TerminatedCString s_Bip01_Head_005ea34a
;   undefined4 DAT_005ea355
;   TerminatedCString s_lforearm_005ea35a
;   TerminatedCString s_rforearm_005ea363
;   TerminatedCString s_lshin_005ea36c
;   TerminatedCString s_rshin_005ea372
;   TerminatedCString s_torso_005ea378
;
; Called Functions:
;   FUN_0042c510
;   FUN_005634f0
;   FUN_00565780
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521370
        ;   Label: FUN_00521370
    PUSH ESI                            ; 00521371
    PUSH EDI                            ; 00521372
    MOV EBX,dword ptr [ESP + 0x10]      ; 00521373
    LEA ESI,[EBX + 0x158]               ; 00521377
    PUSH ESI                            ; 0052137d
    CALL FUN_00569b20                   ; 0052137e
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 00521383
    PUSH ESI                            ; 00521386
    CALL FUN_00569f30                   ; 00521387
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0052138c
    PUSH 0x1                            ; 0052138f
    PUSH 0x5ea33d                       ; 00521391 | = "Bip01 Spine2"
    PUSH EAX                            ; 00521396
    MOV EDI,EAX                         ; 00521397
    CALL FUN_005634f0                   ; 00521399
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0052139e
    PUSH 0x1                            ; 005213a1
    PUSH 0x5ea34a                       ; 005213a3 | = "Bip01 Head"
    PUSH EDI                            ; 005213a8
    MOV dword ptr [EBX + 0xc1d0],EAX    ; 005213a9
    CALL FUN_005634f0                   ; 005213af
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 005213b4
    PUSH EBX                            ; 005213b7
    MOV dword ptr [EBX + 0xc1d4],EAX    ; 005213b8
    CALL FUN_0042c510                   ; 005213be
        ;   XREF to: 0042c510 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c510()
    ADD ESP,0x4                         ; 005213c3
    PUSH ESI                            ; 005213c6
    CALL FUN_00569eb0                   ; 005213c7
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 005213cc
    PUSH 0x1                            ; 005213cf
    PUSH 0x5ea355                       ; 005213d1 | DAT_005ea355
    PUSH EAX                            ; 005213d6
    MOV ESI,EAX                         ; 005213d7
    CALL FUN_00565780                   ; 005213d9
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 005213de
    PUSH 0x1                            ; 005213e1
    PUSH 0x5ea35a                       ; 005213e3 | = "lforearm"
    PUSH ESI                            ; 005213e8
    MOV dword ptr [EBX + 0xc1dc],EAX    ; 005213e9
    CALL FUN_00565780                   ; 005213ef
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 005213f4
    PUSH 0x1                            ; 005213f7
    PUSH 0x5ea363                       ; 005213f9 | = "rforearm"
    PUSH ESI                            ; 005213fe
    MOV dword ptr [EBX + 0xc1e0],EAX    ; 005213ff
    CALL FUN_00565780                   ; 00521405
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0052140a
    PUSH 0x1                            ; 0052140d
    PUSH 0x5ea36c                       ; 0052140f | = "lshin"
    PUSH ESI                            ; 00521414
    MOV dword ptr [EBX + 0xc1e4],EAX    ; 00521415
    CALL FUN_00565780                   ; 0052141b
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00521420
    PUSH 0x1                            ; 00521423
    PUSH 0x5ea372                       ; 00521425 | = "rshin"
    PUSH ESI                            ; 0052142a
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 0052142b
    CALL FUN_00565780                   ; 00521431
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00521436
    PUSH 0x1                            ; 00521439
    PUSH 0x5ea378                       ; 0052143b | = "torso"
    PUSH ESI                            ; 00521440
    MOV dword ptr [EBX + 0xc1ec],EAX    ; 00521441
    CALL FUN_00565780                   ; 00521447
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0052144c
    MOV dword ptr [EBX + 0xc1f0],EAX    ; 0052144f
    POP EDI                             ; 00521455
    POP ESI                             ; 00521456
    POP EBX                             ; 00521457
    RET                                 ; 00521458

