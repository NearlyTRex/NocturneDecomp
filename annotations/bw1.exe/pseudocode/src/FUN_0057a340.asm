; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_0057a340(int param_1)
;
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
;
; XREF[1]:
;   FUN_005755c0 at 0057563c
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_create_DirectSound_objec_005f56a3
;   TerminatedCString s_Set_cooperative_level_005f56bd
;   TerminatedCString s_Create_the_primary_buffe_005f56d3
;   TerminatedCString s_Create_the_primary_buffe_005f56ed
;   undefined4 DAT_00627880
;   undefined4 DAT_02c81d94
;   undefined4 DAT_02c81d98
;   undefined4 DAT_02c81da0
;   undefined4 DAT_02c9be68
;
; Called Functions:
;   FUN_00575570
;   FUN_005773f0
;   FUN_00577500
;   FUN_00577a90
;   FUN_0057a290
;   FUN_005bfb40
;   FUN_005bfb70
;   Ordinal_1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a340
        ;   Label: FUN_0057a340
    PUSH ESI                            ; 0057a341
    PUSH EDI                            ; 0057a342
    SUB ESP,0x77c                       ; 0057a343
    MOV EBX,dword ptr [ESP + 0x78c]     ; 0057a349
    PUSH 0x2c8283c                      ; 0057a350
    CALL FUN_00577a90                   ; 0057a355
        ;   XREF to: 00577a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00577a90()
    ADD ESP,0x4                         ; 0057a35a
    TEST EAX,EAX                        ; 0057a35d
    JNZ 0x0057a36b                      ; 0057a35f
        ;   XREF to: 0057a36b (CONDITIONAL_JUMP)  ; LAB_0057a36b
    ADD ESP,0x77c                       ; 0057a361
        ;   Label: LAB_0057a361
    POP EDI                             ; 0057a367
    POP ESI                             ; 0057a368
    POP EBX                             ; 0057a369
    RET                                 ; 0057a36a
    LEA EAX,[ESP + 0x640]               ; 0057a36b
        ;   Label: LAB_0057a36b
    PUSH EAX                            ; 0057a372
    PUSH EBX                            ; 0057a373
    CALL FUN_0057a290                   ; 0057a374
        ;   XREF to: 0057a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a290()
    ADD ESP,0x8                         ; 0057a379
    TEST EAX,EAX                        ; 0057a37c
    JZ 0x0057a361                       ; 0057a37e
        ;   XREF to: 0057a361 (CONDITIONAL_JUMP)  ; LAB_0057a361
    LEA EAX,[EBX*0x8 + 0x0]             ; 0057a380
    ADD EAX,EBX                         ; 0057a387
    SHL EAX,0x3                         ; 0057a389
    SUB EAX,EBX                         ; 0057a38c
    SHL EAX,0x2                         ; 0057a38e
    MOV EDX,dword ptr [EAX + 0x2c81044] ; 0057a391
    XOR ECX,ECX                         ; 0057a397
    TEST EDX,EDX                        ; 0057a399
    JNZ 0x0057a3a5                      ; 0057a39b
        ;   XREF to: 0057a3a5 (CONDITIONAL_JUMP)  ; LAB_0057a3a5
    ADD EAX,0x2c81044                   ; 0057a39d
    LEA ECX,[EAX + 0x4]                 ; 0057a3a2
    PUSH 0x0                            ; 0057a3a5
        ;   Label: LAB_0057a3a5
    PUSH 0x2c81d94                      ; 0057a3a7 | DAT_02c81d94
    PUSH ECX                            ; 0057a3ac
    CALL Ordinal_1                      ; 0057a3ad
        ;   XREF to: 005cf862 (UNCONDITIONAL_CALL)  ; undefined Ordinal_1()
    TEST EAX,EAX                        ; 0057a3b2
    JZ 0x0057a403                       ; 0057a3b4
        ;   XREF to: 0057a403 (CONDITIONAL_JUMP)  ; LAB_0057a403
    PUSH EAX                            ; 0057a3b6
    CALL FUN_00577500                   ; 0057a3b7
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 0057a3bc
    PUSH EAX                            ; 0057a3bf
    PUSH 0x5f56a3                       ; 0057a3c0 | = "create DirectSound object"
    PUSH 0x5f4c35                       ; 0057a3c5 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0057a3ca
    PUSH EAX                            ; 0057a3d1
    CALL FUN_005bfb40                   ; 0057a3d2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057a3d7
    LEA EAX,[ESP + 0x190]               ; 0057a3da
    PUSH EAX                            ; 0057a3e1
        ;   Label: LAB_0057a3e1
    CALL FUN_005773f0                   ; 0057a3e2
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 0057a3e7
    PUSH 0x2c8283c                      ; 0057a3ea
    CALL FUN_00577a90                   ; 0057a3ef
        ;   XREF to: 00577a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00577a90()
    ADD ESP,0x4                         ; 0057a3f4
    XOR EAX,EAX                         ; 0057a3f7
    ADD ESP,0x77c                       ; 0057a3f9
    POP EDI                             ; 0057a3ff
    POP ESI                             ; 0057a400
    POP EBX                             ; 0057a401
    RET                                 ; 0057a402
    PUSH 0x2                            ; 0057a403
        ;   Label: LAB_0057a403
    MOV ECX,dword ptr [0x02c9be68]      ; 0057a405 | DAT_02c9be68
    MOV EAX,[0x02c81d94]                ; 0057a40b | DAT_02c81d94
    PUSH ECX                            ; 0057a410
    MOV EDX,dword ptr [EAX]             ; 0057a411
    PUSH EAX                            ; 0057a413
    CALL dword ptr [EDX + 0x18]         ; 0057a414
    TEST EAX,EAX                        ; 0057a417
    JNZ 0x0057a4ad                      ; 0057a419
        ;   XREF to: 0057a4ad (CONDITIONAL_JUMP)  ; LAB_0057a4ad
    PUSH 0x24                           ; 0057a41f
    PUSH EAX                            ; 0057a421
    LEA EAX,[ESP + 0x760]               ; 0057a422
    PUSH EAX                            ; 0057a429
    CALL FUN_005bfb70                   ; 0057a42a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0057a42f
    MOV ESI,0x24                        ; 0057a432
    MOV EDI,0x11                        ; 0057a437
    PUSH 0x0                            ; 0057a43c
    LEA EDX,[ESP + 0x75c]               ; 0057a43e
    MOV EAX,[0x02c81d94]                ; 0057a445 | DAT_02c81d94
    PUSH 0x2c81d98                      ; 0057a44a | DAT_02c81d98
    MOV dword ptr [ESP + 0x760],ESI     ; 0057a44f
    MOV dword ptr [ESP + 0x764],EDI     ; 0057a456
    PUSH EDX                            ; 0057a45d
    MOV ECX,dword ptr [EAX]             ; 0057a45e
    PUSH EAX                            ; 0057a460
    CALL dword ptr [ECX + 0xc]          ; 0057a461
    TEST EAX,EAX                        ; 0057a464
    JNZ 0x0057a4dd                      ; 0057a466
        ;   XREF to: 0057a4dd (CONDITIONAL_JUMP)  ; LAB_0057a4dd
    CALL FUN_00575570                   ; 0057a468
        ;   XREF to: 00575570 (UNCONDITIONAL_CALL)  ; undefined FUN_00575570()
        ;   Label: LAB_0057a468
    CMP EAX,0x2                         ; 0057a46d
    JL 0x0057a49e                       ; 0057a470
        ;   XREF to: 0057a49e (CONDITIONAL_JUMP)  ; LAB_0057a49e
    LEA EAX,[EBX*0x8 + 0x0]             ; 0057a472
    ADD EAX,EBX                         ; 0057a479
    SHL EAX,0x3                         ; 0057a47b
    SUB EAX,EBX                         ; 0057a47e
    CMP dword ptr [EAX*0x4 + 0x2c8115c],0x2 ; 0057a480
    JL 0x0057a49e                       ; 0057a488
        ;   XREF to: 0057a49e (CONDITIONAL_JUMP)  ; LAB_0057a49e
    PUSH 0x2c81da0                      ; 0057a48a | DAT_02c81da0
    MOV EAX,[0x02c81d98]                ; 0057a48f | DAT_02c81d98
    PUSH 0x627880                       ; 0057a494 | DAT_00627880
    MOV EDX,dword ptr [EAX]             ; 0057a499
    PUSH EAX                            ; 0057a49b
    CALL dword ptr [EDX]                ; 0057a49c
    MOV EAX,0x2c8283c                   ; 0057a49e
        ;   Label: LAB_0057a49e
    ADD ESP,0x77c                       ; 0057a4a3
    POP EDI                             ; 0057a4a9
    POP ESI                             ; 0057a4aa
    POP EBX                             ; 0057a4ab
    RET                                 ; 0057a4ac
    PUSH EAX                            ; 0057a4ad
        ;   Label: LAB_0057a4ad
    CALL FUN_00577500                   ; 0057a4ae
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 0057a4b3
    PUSH EAX                            ; 0057a4b6
    PUSH 0x5f56bd                       ; 0057a4b7 | = "Set cooperative level"
    PUSH 0x5f4c35                       ; 0057a4bc | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 0057a4c1
    PUSH EAX                            ; 0057a4c8
    CALL FUN_005bfb40                   ; 0057a4c9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057a4ce
    LEA EAX,[ESP + 0x4b0]               ; 0057a4d1
    JMP 0x0057a3e1                      ; 0057a4d8
        ;   XREF to: 0057a3e1 (UNCONDITIONAL_JUMP)  ; LAB_0057a3e1
    PUSH EAX                            ; 0057a4dd
        ;   Label: LAB_0057a4dd
    CALL FUN_00577500                   ; 0057a4de
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 0057a4e3
    PUSH EAX                            ; 0057a4e6
    PUSH 0x5f56d3                       ; 0057a4e7 | = "Create the primary buffer"
    PUSH 0x5f4c35                       ; 0057a4ec | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0057a4f1
    PUSH EAX                            ; 0057a4f5
    CALL FUN_005bfb40                   ; 0057a4f6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057a4fb
    MOV EAX,ESP                         ; 0057a4fe
    PUSH EAX                            ; 0057a500
    CALL FUN_005773f0                   ; 0057a501
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 0057a506
    PUSH 0x0                            ; 0057a509
    MOV AH,byte ptr [ESP + 0x760]       ; 0057a50b
    PUSH 0x2c81d98                      ; 0057a512 | DAT_02c81d98
    LEA EDX,[ESP + 0x760]               ; 0057a517
    AND AH,0xef                         ; 0057a51e
    PUSH EDX                            ; 0057a521
    MOV byte ptr [ESP + 0x768],AH       ; 0057a522
    MOV EAX,[0x02c81d94]                ; 0057a529 | DAT_02c81d94
    PUSH EAX                            ; 0057a52e
    MOV ECX,dword ptr [EAX]             ; 0057a52f
    CALL dword ptr [ECX + 0xc]          ; 0057a531
    TEST EAX,EAX                        ; 0057a534
    JZ 0x0057a468                       ; 0057a536
        ;   XREF to: 0057a468 (CONDITIONAL_JUMP)  ; LAB_0057a468
    PUSH EAX                            ; 0057a53c
    CALL FUN_00577500                   ; 0057a53d
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 0057a542
    PUSH EAX                            ; 0057a545
    PUSH 0x5f56ed                       ; 0057a546 | = "Create the primary buffer"
    PUSH 0x5f4c35                       ; 0057a54b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0057a550
    PUSH EAX                            ; 0057a557
    CALL FUN_005bfb40                   ; 0057a558
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0057a55d
    LEA EAX,[ESP + 0x320]               ; 0057a560
    JMP 0x0057a3e1                      ; 0057a567
        ;   XREF to: 0057a3e1 (UNCONDITIONAL_JUMP)  ; LAB_0057a3e1

