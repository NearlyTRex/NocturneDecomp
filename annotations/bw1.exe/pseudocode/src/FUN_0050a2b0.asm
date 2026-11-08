; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050a2b0(void)
;
; Local Variables:
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0050b470 at 0050b9ff
;   FUN_0050d640 at 0050e6db
;
; Referenced Globals:
;   TerminatedCString s_d_d_x_005e7aae
;   TerminatedCString s_Center_gamepad_press_ENT_005e7ab7
;   TerminatedCString s_Move_gamepad_in_all_dire_005e7ad3
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_00622c18
;   undefined4 DAT_0152d23c
;   undefined4 DAT_01c51cb0
;   undefined4 DAT_01c51cb4
;   undefined4 DAT_01c51cc0
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf448
;   undefined4 DAT_01ccf44c
;   undefined4 DAT_01ccf450
;   undefined4 DAT_01ccf454
;   ... and 7 more
;
; Called Functions:
;   FUN_00401fe0
;   FUN_004c1dd0
;   FUN_004c3ea0
;   FUN_004c4510
;   FUN_004d0960
;   FUN_00521e40
;   FUN_00531090
;   FUN_00555770
;   FUN_005acff0
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a2b0
        ;   Label: FUN_0050a2b0
    PUSH ESI                            ; 0050a2b1
    PUSH EDI                            ; 0050a2b2
    PUSH EBP                            ; 0050a2b3
    SUB ESP,0x214                       ; 0050a2b4
    MOV EDI,0x7fffffff                  ; 0050a2ba
    XOR EBP,EBP                         ; 0050a2bf
    MOV ESI,EDI                         ; 0050a2c1
    MOV dword ptr [ESP + 0x210],EBP     ; 0050a2c3
    PUSH 0x1d1e380                      ; 0050a2ca
        ;   Label: LAB_0050a2ca
    CALL FUN_00521e40                   ; 0050a2cf
        ;   XREF to: 00521e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00521e40()
    ADD ESP,0x4                         ; 0050a2d4
    PUSH 0x5e7ab7                       ; 0050a2d7 | = "Center gamepad, press ENTER"
    CALL FUN_00531090                   ; 0050a2dc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050a2e1
    PUSH EAX                            ; 0050a2e4
    MOV ECX,dword ptr [0x0152d23c]      ; 0050a2e5 | DAT_0152d23c
    PUSH ECX                            ; 0050a2eb
    MOV EBX,EAX                         ; 0050a2ec
    CALL FUN_004c3ea0                   ; 0050a2ee
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    MOV EDX,EAX                         ; 0050a2f3
    SAR EDX,0x1f                        ; 0050a2f5
    SUB EAX,EDX                         ; 0050a2f8
    SAR EAX,0x1                         ; 0050a2fa
    ADD ESP,0x8                         ; 0050a2fc
    MOV EDX,0x140                       ; 0050a2ff
    PUSH 0x58                           ; 0050a304
    SUB EDX,EAX                         ; 0050a306
    MOV EAX,[0x0152d23c]                ; 0050a308 | DAT_0152d23c
    PUSH EAX                            ; 0050a30d
    MOV dword ptr [ESP + 0x208],EDX     ; 0050a30e
    CALL FUN_004c4510                   ; 0050a315
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    MOV EDX,EAX                         ; 0050a31a
    SAR EDX,0x1f                        ; 0050a31c
    SUB EAX,EDX                         ; 0050a31f
    SAR EAX,0x1                         ; 0050a321
    ADD ESP,0x8                         ; 0050a323
    PUSH 0x0                            ; 0050a326
    MOV EDX,0xf0                        ; 0050a328
    PUSH 0x7                            ; 0050a32d
    SUB EDX,EAX                         ; 0050a32f
    PUSH EDX                            ; 0050a331
    MOV EDX,dword ptr [ESP + 0x20c]     ; 0050a332
    PUSH EDX                            ; 0050a339
    PUSH EBX                            ; 0050a33a
    MOV ECX,dword ptr [0x0152d23c]      ; 0050a33b | DAT_0152d23c
    PUSH ECX                            ; 0050a341
    CALL FUN_004c1dd0                   ; 0050a342
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    ADD ESP,0x18                        ; 0050a347
    MOV EBX,dword ptr [0x01c51cc0]      ; 0050a34a | DAT_01c51cc0
    PUSH EBX                            ; 0050a350
    MOV EAX,[0x01c51cb4]                ; 0050a351 | DAT_01c51cb4
    PUSH EAX                            ; 0050a356
    MOV EDX,dword ptr [0x01c51cb0]      ; 0050a357 | DAT_01c51cb0
    PUSH EDX                            ; 0050a35d
    PUSH 0x5e7aae                       ; 0050a35e | = "%d,%d,%x"
    LEA EAX,[ESP + 0x110]               ; 0050a363
    PUSH EAX                            ; 0050a36a
    CALL FUN_005bfb40                   ; 0050a36b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x14                        ; 0050a370
    PUSH 0x0                            ; 0050a373
    PUSH 0x0                            ; 0050a375
    LEA EAX,[ESP + 0x108]               ; 0050a377
    PUSH EAX                            ; 0050a37e
    CALL FUN_00401fe0                   ; 0050a37f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0050a384
    MOV ECX,dword ptr [0x0061d95c]      ; 0050a387 | DAT_0061d95c
    PUSH ECX                            ; 0050a38d | DAT_01ccf390
    CALL FUN_004d0960                   ; 0050a38e
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0960()
    ADD ESP,0x4                         ; 0050a393
    CALL FUN_005acff0                   ; 0050a396
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
    PUSH 0x1c                           ; 0050a39b
    MOV EAX,[0x0061f2a4]                ; 0050a39d | DAT_0061f2a4
    PUSH EAX                            ; 0050a3a2 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a3a3 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a3a5
    ADD ESP,0x8                         ; 0050a3a8
    TEST EAX,EAX                        ; 0050a3ab
    JZ 0x0050a536                       ; 0050a3ad
        ;   XREF to: 0050a536 (CONDITIONAL_JUMP)  ; LAB_0050a536
    PUSH 0x10000                        ; 0050a3b3
        ;   Label: LAB_0050a3b3
    PUSH 0xc350                         ; 0050a3b8
    PUSH 0xc350                         ; 0050a3bd
    MOV EAX,[0x00622c18]                ; 0050a3c2 | DAT_00622c18
    PUSH EAX                            ; 0050a3c7 | DAT_01e82168
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 0050a3c8 | DAT_01fdcfec
    CALL FUN_00555770                   ; 0050a3d2
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 0050a3d7
    MOV EAX,[0x00622c18]                ; 0050a3da | DAT_00622c18
    PUSH 0x1d1e380                      ; 0050a3df
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 0050a3e4 | DAT_01fdcffc
    CALL FUN_00521e40                   ; 0050a3ee
        ;   XREF to: 00521e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00521e40()
    ADD ESP,0x4                         ; 0050a3f3
    MOV EAX,[0x00622c18]                ; 0050a3f6 | DAT_00622c18
    PUSH 0x5e7ad3                       ; 0050a3fb | = "Move gamepad in all directions, press..."
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 0050a400 | DAT_01fdcfec
    CALL FUN_00531090                   ; 0050a40a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050a40f
    PUSH EAX                            ; 0050a412
    MOV EBX,EAX                         ; 0050a413
    MOV EAX,[0x0152d23c]                ; 0050a415 | DAT_0152d23c
    PUSH EAX                            ; 0050a41a
    CALL FUN_004c3ea0                   ; 0050a41b
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    MOV EDX,EAX                         ; 0050a420
    SAR EDX,0x1f                        ; 0050a422
    SUB EAX,EDX                         ; 0050a425
    SAR EAX,0x1                         ; 0050a427
    MOV EDX,0x140                       ; 0050a429
    ADD ESP,0x8                         ; 0050a42e
    SUB EDX,EAX                         ; 0050a431
    PUSH 0x58                           ; 0050a433
    MOV dword ptr [ESP + 0x208],EDX     ; 0050a435
    MOV EDX,dword ptr [0x0152d23c]      ; 0050a43c | DAT_0152d23c
    PUSH EDX                            ; 0050a442
    CALL FUN_004c4510                   ; 0050a443
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    MOV EDX,EAX                         ; 0050a448
    SAR EDX,0x1f                        ; 0050a44a
    SUB EAX,EDX                         ; 0050a44d
    SAR EAX,0x1                         ; 0050a44f
    ADD ESP,0x8                         ; 0050a451
    PUSH 0x0                            ; 0050a454
    MOV EDX,0xf0                        ; 0050a456
    PUSH 0x7                            ; 0050a45b
    SUB EDX,EAX                         ; 0050a45d
    PUSH EDX                            ; 0050a45f
    MOV ECX,dword ptr [ESP + 0x210]     ; 0050a460
    PUSH ECX                            ; 0050a467
    PUSH EBX                            ; 0050a468
    MOV EBX,dword ptr [0x0152d23c]      ; 0050a469 | DAT_0152d23c
    PUSH EBX                            ; 0050a46f
    CALL FUN_004c1dd0                   ; 0050a470
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    ADD ESP,0x18                        ; 0050a475
    MOV EAX,[0x01c51cc0]                ; 0050a478 | DAT_01c51cc0
    PUSH EAX                            ; 0050a47d
    MOV EDX,dword ptr [0x01c51cb4]      ; 0050a47e | DAT_01c51cb4
    PUSH EDX                            ; 0050a484
    MOV ECX,dword ptr [0x01c51cb0]      ; 0050a485 | DAT_01c51cb0
    PUSH ECX                            ; 0050a48b
    PUSH 0x5e7aae                       ; 0050a48c | = "%d,%d,%x"
    LEA EAX,[ESP + 0x10]                ; 0050a491
    PUSH EAX                            ; 0050a495
    CALL FUN_005bfb40                   ; 0050a496
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x14                        ; 0050a49b
    PUSH 0x0                            ; 0050a49e
    PUSH 0x0                            ; 0050a4a0
    LEA EAX,[ESP + 0x8]                 ; 0050a4a2
    PUSH EAX                            ; 0050a4a6
    CALL FUN_00401fe0                   ; 0050a4a7
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0050a4ac
    MOV EBX,dword ptr [0x0061d95c]      ; 0050a4af | DAT_0061d95c
    PUSH EBX                            ; 0050a4b5 | DAT_01ccf390
    CALL FUN_004d0960                   ; 0050a4b6
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0960()
    ADD ESP,0x4                         ; 0050a4bb
    CALL FUN_005acff0                   ; 0050a4be
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
    PUSH 0x1c                           ; 0050a4c3
    MOV EAX,[0x0061f2a4]                ; 0050a4c5 | DAT_0061f2a4
    PUSH EAX                            ; 0050a4ca | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a4cb | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a4cd
    ADD ESP,0x8                         ; 0050a4d0
    TEST EAX,EAX                        ; 0050a4d3
    JNZ 0x0050a58d                      ; 0050a4d5
        ;   XREF to: 0050a58d (CONDITIONAL_JUMP)  ; LAB_0050a58d
    PUSH 0x1                            ; 0050a4db
    MOV EAX,[0x0061f2a4]                ; 0050a4dd | DAT_0061f2a4
    PUSH EAX                            ; 0050a4e2 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a4e3 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a4e5
    ADD ESP,0x8                         ; 0050a4e8
    TEST EAX,EAX                        ; 0050a4eb
    JNZ 0x0050a567                      ; 0050a4ed
        ;   XREF to: 0050a567 (CONDITIONAL_JUMP)  ; LAB_0050a567
    MOV EAX,[0x01c51cb0]                ; 0050a4f3 | DAT_01c51cb0
    CMP EDI,EAX                         ; 0050a4f8
    JLE 0x0050a4fe                      ; 0050a4fa
        ;   XREF to: 0050a4fe (CONDITIONAL_JUMP)  ; LAB_0050a4fe
    MOV EDI,EAX                         ; 0050a4fc
    MOV EDX,dword ptr [0x01c51cb0]      ; 0050a4fe | DAT_01c51cb0
        ;   Label: LAB_0050a4fe
    CMP EBP,EDX                         ; 0050a504
    JGE 0x0050a50a                      ; 0050a506
        ;   XREF to: 0050a50a (CONDITIONAL_JUMP)  ; LAB_0050a50a
    MOV EBP,EDX                         ; 0050a508
    MOV ECX,dword ptr [0x01c51cb4]      ; 0050a50a | DAT_01c51cb4
        ;   Label: LAB_0050a50a
    CMP ESI,ECX                         ; 0050a510
    JLE 0x0050a516                      ; 0050a512
        ;   XREF to: 0050a516 (CONDITIONAL_JUMP)  ; LAB_0050a516
    MOV ESI,ECX                         ; 0050a514
    MOV EBX,dword ptr [ESP + 0x210]     ; 0050a516
        ;   Label: LAB_0050a516
    MOV EAX,[0x01c51cb4]                ; 0050a51d | DAT_01c51cb4
    CMP EAX,EBX                         ; 0050a522
    JLE 0x0050a3b3                      ; 0050a524
        ;   XREF to: 0050a3b3 (CONDITIONAL_JUMP)  ; LAB_0050a3b3
    MOV dword ptr [ESP + 0x210],EAX     ; 0050a52a
    JMP 0x0050a3b3                      ; 0050a531
        ;   XREF to: 0050a3b3 (UNCONDITIONAL_JUMP)  ; LAB_0050a3b3
    PUSH 0x1                            ; 0050a536
        ;   Label: LAB_0050a536
    MOV EAX,[0x0061f2a4]                ; 0050a538 | DAT_0061f2a4
    PUSH EAX                            ; 0050a53d | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a53e | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a540
    ADD ESP,0x8                         ; 0050a543
    TEST EAX,EAX                        ; 0050a546
    JNZ 0x0050a567                      ; 0050a548
        ;   XREF to: 0050a567 (CONDITIONAL_JUMP)  ; LAB_0050a567
    MOV EAX,[0x01c51cb0]                ; 0050a54a | DAT_01c51cb0
    MOV dword ptr [ESP + 0x208],EAX     ; 0050a54f
    MOV EAX,[0x01c51cb4]                ; 0050a556 | DAT_01c51cb4
    MOV dword ptr [ESP + 0x20c],EAX     ; 0050a55b
    JMP 0x0050a2ca                      ; 0050a562
        ;   XREF to: 0050a2ca (UNCONDITIONAL_JUMP)  ; LAB_0050a2ca
    MOV EAX,[0x0061d95c]                ; 0050a567 | DAT_0061d95c
        ;   Label: LAB_0050a567
    MOV dword ptr [EAX + 0xb8],0x0      ; 0050a56c | DAT_01ccf448
    MOV dword ptr [EAX + 0xd0],0x0      ; 0050a576 | DAT_01ccf460
    XOR EAX,EAX                         ; 0050a580
    ADD ESP,0x214                       ; 0050a582
    POP EBP                             ; 0050a588
    POP EDI                             ; 0050a589
    POP ESI                             ; 0050a58a
    POP EBX                             ; 0050a58b
    RET                                 ; 0050a58c
    MOV EAX,[0x0061d95c]                ; 0050a58d | DAT_0061d95c
        ;   Label: LAB_0050a58d
    MOV EDX,dword ptr [ESP + 0x208]     ; 0050a592
    MOV dword ptr [EAX + 0xb8],EDX      ; 0050a599 | DAT_01ccf448
    MOV dword ptr [EAX + 0xc0],EDI      ; 0050a59f | DAT_01ccf450
    MOV dword ptr [EAX + 0xc4],EBP      ; 0050a5a5 | DAT_01ccf454
    MOV dword ptr [EAX + 0xc8],ESI      ; 0050a5ab | DAT_01ccf458
    MOV EDX,dword ptr [ESP + 0x20c]     ; 0050a5b1
    MOV dword ptr [EAX + 0xbc],EDX      ; 0050a5b8 | DAT_01ccf44c
    MOV EDX,dword ptr [ESP + 0x210]     ; 0050a5be
    MOV dword ptr [EAX + 0xcc],EDX      ; 0050a5c5 | DAT_01ccf45c
    MOV EAX,0x1                         ; 0050a5cb
    ADD ESP,0x214                       ; 0050a5d0
    POP EBP                             ; 0050a5d6
    POP EDI                             ; 0050a5d7
    POP ESI                             ; 0050a5d8
    POP EBX                             ; 0050a5d9
    RET                                 ; 0050a5da

