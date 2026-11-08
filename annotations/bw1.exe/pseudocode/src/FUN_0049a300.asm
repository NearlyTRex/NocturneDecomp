; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0049a460 at 0049a475
;
; Called Functions:
;   FUN_00479320
;   FUN_00479340
;   FUN_00479360
;   FUN_004793e0
;   FUN_00479460
;   FUN_00479770
;   FUN_004994d0
;   FUN_0049dea0
;   FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a300
        ;   Label: FUN_0049a300
    PUSH ESI                            ; 0049a301
    PUSH EDI                            ; 0049a302
    PUSH EBP                            ; 0049a303
    SUB ESP,0x524                       ; 0049a304
    MOV ESI,dword ptr [ESP + 0x538]     ; 0049a30a
    MOV EBP,dword ptr [ESP + 0x53c]     ; 0049a311
    MOV EBX,dword ptr [ESP + 0x540]     ; 0049a318
    MOV EDI,dword ptr [ESP + 0x544]     ; 0049a31f
    LEA EAX,[ESP + 0x31c]               ; 0049a326
    PUSH EAX                            ; 0049a32d
    PUSH 0x5dc5fd                       ; 0049a32e
    PUSH EBX                            ; 0049a333
    CALL FUN_00479770                   ; 0049a334
        ;   XREF to: 00479770 (UNCONDITIONAL_CALL)  ; undefined FUN_00479770()
    ADD ESP,0xc                         ; 0049a339
    LEA EAX,[ESP + 0x420]               ; 0049a33c
    PUSH EAX                            ; 0049a343
    LEA EAX,[ESP + 0x320]               ; 0049a344
    PUSH EAX                            ; 0049a34b
    PUSH EBP                            ; 0049a34c
    CALL FUN_00479770                   ; 0049a34d
        ;   XREF to: 00479770 (UNCONDITIONAL_CALL)  ; undefined FUN_00479770()
    ADD ESP,0xc                         ; 0049a352
    MOV EAX,ESP                         ; 0049a355
    PUSH EAX                            ; 0049a357
    CALL FUN_00479320                   ; 0049a358
        ;   XREF to: 00479320 (UNCONDITIONAL_CALL)  ; undefined FUN_00479320()
    ADD ESP,0x4                         ; 0049a35d
    LEA EAX,[ESP + 0x420]               ; 0049a360
    PUSH EAX                            ; 0049a367
    LEA EAX,[ESP + 0x4]                 ; 0049a368
    PUSH EAX                            ; 0049a36c
    CALL FUN_00479360                   ; 0049a36d
        ;   XREF to: 00479360 (UNCONDITIONAL_CALL)  ; undefined FUN_00479360()
    ADD ESP,0x8                         ; 0049a372
    CMP byte ptr [ESP],0x0              ; 0049a375
    JZ 0x0049a3a2                       ; 0049a379
        ;   XREF to: 0049a3a2 (CONDITIONAL_JUMP)  ; LAB_0049a3a2
    PUSH 0x5dc5ff                       ; 0049a37b
        ;   Label: LAB_0049a37b
    LEA EAX,[ESP + 0x4]                 ; 0049a380
    PUSH EAX                            ; 0049a384
    CALL FUN_005c0f80                   ; 0049a385
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 0049a38a
    TEST EAX,EAX                        ; 0049a38d
    JNZ 0x0049a3c7                      ; 0049a38f
        ;   XREF to: 0049a3c7 (CONDITIONAL_JUMP)  ; LAB_0049a3c7
    MOV EAX,ESP                         ; 0049a391
        ;   Label: LAB_0049a391
    PUSH EAX                            ; 0049a393
    CALL FUN_004793e0                   ; 0049a394
        ;   XREF to: 004793e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004793e0()
    ADD ESP,0x4                         ; 0049a399
    CMP byte ptr [ESP],0x0              ; 0049a39c
    JNZ 0x0049a37b                      ; 0049a3a0
        ;   XREF to: 0049a37b (CONDITIONAL_JUMP)  ; LAB_0049a37b
    MOV EAX,ESP                         ; 0049a3a2
        ;   Label: LAB_0049a3a2
    PUSH EAX                            ; 0049a3a4
    CALL FUN_00479460                   ; 0049a3a5
        ;   XREF to: 00479460 (UNCONDITIONAL_CALL)  ; undefined FUN_00479460()
    ADD ESP,0x4                         ; 0049a3aa
    PUSH 0x0                            ; 0049a3ad
    LEA EAX,[ESP + 0x4]                 ; 0049a3af
    PUSH EAX                            ; 0049a3b3
    CALL FUN_00479340                   ; 0049a3b4
        ;   XREF to: 00479340 (UNCONDITIONAL_CALL)  ; undefined FUN_00479340()
    ADD ESP,0x8                         ; 0049a3b9
    ADD ESP,0x524                       ; 0049a3bc
    POP EBP                             ; 0049a3c2
    POP EDI                             ; 0049a3c3
    POP ESI                             ; 0049a3c4
    POP EBX                             ; 0049a3c5
    RET                                 ; 0049a3c6
    PUSH 0x5dc601                       ; 0049a3c7
        ;   Label: LAB_0049a3c7
    LEA EAX,[ESP + 0x4]                 ; 0049a3cc
    PUSH EAX                            ; 0049a3d0
    CALL FUN_005c0f80                   ; 0049a3d1
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 0049a3d6
    TEST EAX,EAX                        ; 0049a3d9
    JZ 0x0049a391                       ; 0049a3db
        ;   XREF to: 0049a391 (CONDITIONAL_JUMP)  ; LAB_0049a391
    TEST byte ptr [ESP + 0x100],0x4     ; 0049a3dd
    JZ 0x0049a415                       ; 0049a3e5
        ;   XREF to: 0049a415 (CONDITIONAL_JUMP)  ; LAB_0049a415
    LEA EAX,[ESP + 0x114]               ; 0049a3e7
    PUSH EAX                            ; 0049a3ee
    LEA EAX,[ESP + 0x4]                 ; 0049a3ef
    PUSH EAX                            ; 0049a3f3
    PUSH EBX                            ; 0049a3f4
    CALL FUN_00479770                   ; 0049a3f5
        ;   XREF to: 00479770 (UNCONDITIONAL_CALL)  ; undefined FUN_00479770()
    ADD ESP,0xc                         ; 0049a3fa
    PUSH EDI                            ; 0049a3fd
    LEA EAX,[ESP + 0x118]               ; 0049a3fe
    PUSH EAX                            ; 0049a405
    PUSH EBP                            ; 0049a406
    PUSH ESI                            ; 0049a407
    CALL FUN_0049a300                   ; 0049a408
        ;   XREF to: 0049a300 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a300()
    ADD ESP,0x10                        ; 0049a40d
    JMP 0x0049a391                      ; 0049a410
        ;   XREF to: 0049a391 (UNCONDITIONAL_JUMP)  ; LAB_0049a391
    PUSH 0x0                            ; 0049a415
        ;   Label: LAB_0049a415
    LEA EAX,[ESP + 0x4]                 ; 0049a417
    PUSH EAX                            ; 0049a41b
    PUSH EDI                            ; 0049a41c
    CALL FUN_0049dea0                   ; 0049a41d
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049dea0()
    ADD ESP,0xc                         ; 0049a422
    TEST EAX,EAX                        ; 0049a425
    JZ 0x0049a391                       ; 0049a427
        ;   XREF to: 0049a391 (CONDITIONAL_JUMP)  ; LAB_0049a391
    LEA EAX,[ESP + 0x218]               ; 0049a42d
    PUSH EAX                            ; 0049a434
    LEA EAX,[ESP + 0x4]                 ; 0049a435
    PUSH EAX                            ; 0049a439
    PUSH EBX                            ; 0049a43a
    CALL FUN_00479770                   ; 0049a43b
        ;   XREF to: 00479770 (UNCONDITIONAL_CALL)  ; undefined FUN_00479770()
    ADD ESP,0xc                         ; 0049a440
    LEA EAX,[ESP + 0x218]               ; 0049a443
    PUSH EAX                            ; 0049a44a
    PUSH ESI                            ; 0049a44b
    CALL FUN_004994d0                   ; 0049a44c
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 0049a451
    JMP 0x0049a391                      ; 0049a454
        ;   XREF to: 0049a391 (UNCONDITIONAL_JUMP)  ; LAB_0049a391

