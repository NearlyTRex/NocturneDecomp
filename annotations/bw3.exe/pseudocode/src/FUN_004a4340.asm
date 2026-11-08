; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4340(undefined4 param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0040f900 at 0040f930
;   FUN_0045c0d0 at 0045c100
;   FUN_00568c10 at 00568c52
;
; Called Functions:
;   FUN_0042f280
;   FUN_00462500
;   FUN_00462580
;   FUN_004625f0
;   FUN_004a42c0
;   FUN_004a42f0
;   FUN_0054bf00
;   FUN_0054bf80
;   FUN_0054e6b0
;   FUN_0054eae0
;   FUN_00556230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4340
        ;   Label: FUN_004a4340
    SUB ESP,0x2520                      ; 004a4341
    MOV EBX,dword ptr [ESP + 0x252c]    ; 004a4347
    LEA EAX,[ESP + 0x23a4]              ; 004a434e
    PUSH EAX                            ; 004a4355
    CALL FUN_00462500                   ; 004a4356
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 004a435b
    MOV EAX,ESP                         ; 004a435e
    PUSH EAX                            ; 004a4360
    CALL FUN_0054bf00                   ; 004a4361
        ;   XREF to: 0054bf00 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf00()
    ADD ESP,0x4                         ; 004a4366
    CMP EBX,0x1                         ; 004a4369
    JZ 0x004a4393                       ; 004a436c
        ;   XREF to: 004a4393 (CONDITIONAL_JUMP)  ; LAB_004a4393
    CMP EBX,0x2                         ; 004a436e
    JZ 0x004a43e2                       ; 004a4371
        ;   XREF to: 004a43e2 (CONDITIONAL_JUMP)  ; LAB_004a43e2
    CMP EBX,0x3                         ; 004a4373
    JZ 0x004a4487                       ; 004a4376
        ;   XREF to: 004a4487 (CONDITIONAL_JUMP)  ; LAB_004a4487
    PUSH 0x0                            ; 004a437c
        ;   Label: LAB_004a437c
    LEA EAX,[ESP + 0x4]                 ; 004a437e
    PUSH EAX                            ; 004a4382
    CALL FUN_0054bf80                   ; 004a4383
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004a4388
    ADD ESP,0x2520                      ; 004a438b
    POP EBX                             ; 004a4391
    RET                                 ; 004a4392
    PUSH EBX                            ; 004a4393
        ;   Label: LAB_004a4393
    MOV ECX,dword ptr [ESP + 0x252c]    ; 004a4394
    PUSH ECX                            ; 004a439b
    CALL FUN_004a42c0                   ; 004a439c
        ;   XREF to: 004a42c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a42c0()
    ADD ESP,0x8                         ; 004a43a1
    PUSH 0x5c0a63                       ; 004a43a4
    CALL FUN_00556230                   ; 004a43a9
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004a43ae
    PUSH 0x5c0a73                       ; 004a43b1
    LEA EAX,[ESP + 0x23a8]              ; 004a43b6
    PUSH EAX                            ; 004a43bd
    CALL FUN_004625f0                   ; 004a43be
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004a43c3
    LEA EAX,[ESP + 0x23a4]              ; 004a43c6
    PUSH EAX                            ; 004a43cd
    CALL FUN_00462580                   ; 004a43ce
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004a43d3
    PUSH 0x0                            ; 004a43d6
    CALL FUN_0042f280                   ; 004a43d8
        ;   XREF to: 0042f280 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f280()
    ADD ESP,0x4                         ; 004a43dd
    JMP 0x004a437c                      ; 004a43e0
        ;   XREF to: 004a437c (UNCONDITIONAL_JUMP)  ; LAB_004a437c
    PUSH 0x5c0a84                       ; 004a43e2
        ;   Label: LAB_004a43e2
    LEA EAX,[ESP + 0x23a8]              ; 004a43e7
    PUSH EAX                            ; 004a43ee
    CALL FUN_004625f0                   ; 004a43ef
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004a43f4
    LEA EAX,[ESP + 0x23a4]              ; 004a43f7
    PUSH EAX                            ; 004a43fe
    CALL FUN_00462580                   ; 004a43ff
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004a4404
    PUSH 0x5c0a94                       ; 004a4407
    LEA EAX,[ESP + 0x23a8]              ; 004a440c
    PUSH EAX                            ; 004a4413
    CALL FUN_004625f0                   ; 004a4414
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004a4419
    LEA EAX,[ESP + 0x23a4]              ; 004a441c
    PUSH EAX                            ; 004a4423
    CALL FUN_00462580                   ; 004a4424
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004a4429
    PUSH 0x5c0a9f                       ; 004a442c
    LEA EAX,[ESP + 0x4]                 ; 004a4431
    PUSH EAX                            ; 004a4435
    CALL FUN_0054eae0                   ; 004a4436
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    ADD ESP,0x8                         ; 004a443b
    MOV EAX,ESP                         ; 004a443e
    PUSH EAX                            ; 004a4440
    CALL FUN_0054e6b0                   ; 004a4441
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 004a4446
    PUSH 0x5c0aa8                       ; 004a4449
    CALL FUN_00556230                   ; 004a444e
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004a4453
    PUSH 0x5c0abc                       ; 004a4456
    CALL FUN_00556230                   ; 004a445b
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004a4460
    PUSH 0x3                            ; 004a4463
    MOV EDX,dword ptr [ESP + 0x252c]    ; 004a4465
    PUSH EDX                            ; 004a446c
    CALL FUN_004a42f0                   ; 004a446d
        ;   XREF to: 004a42f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a42f0()
    ADD ESP,0x8                         ; 004a4472
    PUSH 0x5c0ad1                       ; 004a4475
    CALL FUN_00556230                   ; 004a447a
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004a447f
    JMP 0x004a437c                      ; 004a4482
        ;   XREF to: 004a437c (UNCONDITIONAL_JUMP)  ; LAB_004a437c
    PUSH 0x5c0ae0                       ; 004a4487
        ;   Label: LAB_004a4487
    LEA EAX,[ESP + 0x23a8]              ; 004a448c
    PUSH EAX                            ; 004a4493
    CALL FUN_004625f0                   ; 004a4494
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004a4499
    LEA EAX,[ESP + 0x23a4]              ; 004a449c
    PUSH EAX                            ; 004a44a3
    CALL FUN_00462580                   ; 004a44a4
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004a44a9
    JMP 0x004a437c                      ; 004a44ac
        ;   XREF to: 004a437c (UNCONDITIONAL_JUMP)  ; LAB_004a437c

