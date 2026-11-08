; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e22e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005dbf59+1
;   TerminatedCString s_modelName_005dbf64
;   TerminatedCString s_leverType_005dbf6e
;   TerminatedCString s_onEvent_005dbf78
;   TerminatedCString s_offEvent_005dbf80
;   TerminatedCString s_sound_005dbf89
;   TerminatedCString s_param_005dbf8f
;   TerminatedCString s_momentaryFlag_005dbf95
;   TerminatedCString s_linkedLever_005dbfa3
;   TerminatedCString s_endVertexIndex_005dbfaf
;   TerminatedCString s_moving_005dbfbe
;   TerminatedCString s_moveToPct_005dbfc5
;   TerminatedCString s_rules_005dbfcf
;   TerminatedCString s_allowedSides_005dbfd5
;   TerminatedCString s_enableCollision_005dbfe2
;   ... and 2 more
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040c170
;   FUN_0040c330
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e22e0
        ;   Label: FUN_004e22e0
    PUSH ESI                            ; 004e22e1
    PUSH EDI                            ; 004e22e2
    SUB ESP,0xc8                        ; 004e22e3
    MOV EBX,dword ptr [ESP + 0xd8]      ; 004e22e9
    PUSH EBX                            ; 004e22f0
    CALL FUN_0040c330                   ; 004e22f1
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    MOV EDX,dword ptr [0x007bc038]      ; 004e22f6 | DAT_007bc038
    ADD ESP,0x4                         ; 004e22fc
    LEA EDI,[EBX + 0x2b4]               ; 004e22ff
    CMP EDX,0x1                         ; 004e2305
    JZ 0x004e247d                       ; 004e2308
        ;   XREF to: 004e247d (CONDITIONAL_JUMP)  ; LAB_004e247d
    MOV EDI,ESP                         ; 004e230e
    LEA ESI,[EBX + 0x32c]               ; 004e2310
    PUSH EDI                            ; 004e2316
    MOV AL,byte ptr [ESI]               ; 004e2317
        ;   Label: LAB_004e2317
    MOV byte ptr [EDI],AL               ; 004e2319
    CMP AL,0x0                          ; 004e231b
    JZ 0x004e232f                       ; 004e231d
        ;   XREF to: 004e232f (CONDITIONAL_JUMP)  ; LAB_004e232f
    MOV AL,byte ptr [ESI + 0x1]         ; 004e231f
    ADD ESI,0x2                         ; 004e2322
    MOV byte ptr [EDI + 0x1],AL         ; 004e2325
    ADD EDI,0x2                         ; 004e2328
    CMP AL,0x0                          ; 004e232b
    JNZ 0x004e2317                      ; 004e232d
        ;   XREF to: 004e2317 (CONDITIONAL_JUMP)  ; LAB_004e2317
    POP EDI                             ; 004e232f
        ;   Label: LAB_004e232f
    PUSH 0x5dbf64                       ; 004e2330 | = "modelName"
    LEA ESI,[ESP + 0x4]                 ; 004e2335
    PUSH ESI                            ; 004e2339
    CALL FUN_0040b730                   ; 004e233a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004e233f
        ;   Label: LAB_004e233f
    PUSH 0x5dbf6e                       ; 004e2342 | = "leverType"
    LEA ESI,[EBX + 0x434]               ; 004e2347
    PUSH ESI                            ; 004e234d
    CALL FUN_0040b960                   ; 004e234e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e2353
    PUSH 0x5dbf78                       ; 004e2356 | = "onEvent"
    LEA ESI,[EBX + 0x43c]               ; 004e235b
    PUSH ESI                            ; 004e2361
    CALL FUN_0040b730                   ; 004e2362
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004e2367
    PUSH 0x5dbf80                       ; 004e236a | = "offEvent"
    LEA ESI,[EBX + 0x4a0]               ; 004e236f
    PUSH ESI                            ; 004e2375
    CALL FUN_0040b730                   ; 004e2376
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004e237b
    PUSH 0x5dbf89                       ; 004e237e | = "sound"
    LEA ESI,[EBX + 0x504]               ; 004e2383
    PUSH ESI                            ; 004e2389
    CALL FUN_0040b730                   ; 004e238a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004e238f
    PUSH 0x5dbf8f                       ; 004e2392 | = "param"
    LEA ESI,[EBX + 0x438]               ; 004e2397
    PUSH ESI                            ; 004e239d
    CALL FUN_0040b8e0                   ; 004e239e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    MOV ECX,dword ptr [0x00617e2c]      ; 004e23a3 | DAT_00617e2c
    ADD ESP,0x8                         ; 004e23a9
    CMP ECX,0x2                         ; 004e23ac
    JL 0x004e23c5                       ; 004e23af
        ;   XREF to: 004e23c5 (CONDITIONAL_JUMP)  ; LAB_004e23c5
    PUSH 0x5dbf95                       ; 004e23b1 | = "momentaryFlag"
    LEA ESI,[EBX + 0x568]               ; 004e23b6
    PUSH ESI                            ; 004e23bc
    CALL FUN_0040b960                   ; 004e23bd
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e23c2
    CMP dword ptr [0x00617e2c],0x3      ; 004e23c5 | DAT_00617e2c
        ;   Label: LAB_004e23c5
    JL 0x004e23e2                       ; 004e23cc
        ;   XREF to: 004e23e2 (CONDITIONAL_JUMP)  ; LAB_004e23e2
    PUSH 0x5dbfa3                       ; 004e23ce | = "linkedLever"
    LEA ESI,[EBX + 0x56c]               ; 004e23d3
    PUSH ESI                            ; 004e23d9
    CALL FUN_0040b9e0                   ; 004e23da
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 004e23df
    CMP dword ptr [0x00617e2c],0x4      ; 004e23e2 | DAT_00617e2c
        ;   Label: LAB_004e23e2
    JL 0x004e23ff                       ; 004e23e9
        ;   XREF to: 004e23ff (CONDITIONAL_JUMP)  ; LAB_004e23ff
    PUSH 0x5dbfaf                       ; 004e23eb | = "endVertexIndex"
    LEA ESI,[EBX + 0x570]               ; 004e23f0
    PUSH ESI                            ; 004e23f6
    CALL FUN_0040b960                   ; 004e23f7
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e23fc
    CMP dword ptr [0x00617e2c],0x5      ; 004e23ff | DAT_00617e2c
        ;   Label: LAB_004e23ff
    JL 0x004e2430                       ; 004e2406
        ;   XREF to: 004e2430 (CONDITIONAL_JUMP)  ; LAB_004e2430
    PUSH 0x5dbfbe                       ; 004e2408 | = "moving"
    LEA ESI,[EBX + 0x574]               ; 004e240d
    PUSH ESI                            ; 004e2413
    CALL FUN_0040b960                   ; 004e2414
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e2419
    PUSH 0x5dbfc5                       ; 004e241c | = "moveToPct"
    LEA ESI,[EBX + 0x578]               ; 004e2421
    PUSH ESI                            ; 004e2427
    CALL FUN_0040b8e0                   ; 004e2428
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 004e242d
    CMP dword ptr [0x00617e2c],0x6      ; 004e2430 | DAT_00617e2c
        ;   Label: LAB_004e2430
    JL 0x004e244d                       ; 004e2437
        ;   XREF to: 004e244d (CONDITIONAL_JUMP)  ; LAB_004e244d
    PUSH 0x5dbfcf                       ; 004e2439 | = "rules"
    LEA ESI,[EBX + 0x57c]               ; 004e243e
    PUSH ESI                            ; 004e2444
    CALL FUN_0040c170                   ; 004e2445
        ;   XREF to: 0040c170 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c170()
    ADD ESP,0x8                         ; 004e244a
    CMP dword ptr [0x00617e2c],0x7      ; 004e244d | DAT_00617e2c
        ;   Label: LAB_004e244d
    JL 0x004e246a                       ; 004e2454
        ;   XREF to: 004e246a (CONDITIONAL_JUMP)  ; LAB_004e246a
    PUSH 0x5dbfd5                       ; 004e2456 | = "allowedSides"
    LEA ESI,[EBX + 0x968]               ; 004e245b
    PUSH ESI                            ; 004e2461
    CALL FUN_0040b960                   ; 004e2462
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e2467
    CMP dword ptr [0x00617e2c],0x8      ; 004e246a | DAT_00617e2c
        ;   Label: LAB_004e246a
    JGE 0x004e249d                      ; 004e2471
        ;   XREF to: 004e249d (CONDITIONAL_JUMP)  ; LAB_004e249d
    ADD ESP,0xc8                        ; 004e2473
    POP EDI                             ; 004e2479
    POP ESI                             ; 004e247a
    POP EBX                             ; 004e247b
    RET                                 ; 004e247c
    PUSH 0x5dbf5a                       ; 004e247d | s_modelName_005dbf59+1
        ;   Label: LAB_004e247d
    LEA ESI,[ESP + 0x4]                 ; 004e2482
    PUSH ESI                            ; 004e2486
    CALL FUN_0040b730                   ; 004e2487
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004e248c
    MOV ESI,ESP                         ; 004e248f
    PUSH ESI                            ; 004e2491
    PUSH EDI                            ; 004e2492
    CALL FUN_0044fd70                   ; 004e2493
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    JMP 0x004e233f                      ; 004e2498
        ;   XREF to: 004e233f (UNCONDITIONAL_JUMP)  ; LAB_004e233f
    PUSH 0x5dbfe2                       ; 004e249d | = "enableCollision"
        ;   Label: LAB_004e249d
    ADD EBX,0x96c                       ; 004e24a2
    PUSH EBX                            ; 004e24a8
    CALL FUN_0040b960                   ; 004e24a9
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 004e24ae
    ADD ESP,0xc8                        ; 004e24b1
    POP EDI                             ; 004e24b7
    POP ESI                             ; 004e24b8
    POP EBX                             ; 004e24b9
    RET                                 ; 004e24ba

