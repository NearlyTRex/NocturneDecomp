; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517240(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   FUN_00516cc0 at 00516e18
;
; Referenced Globals:
;   undefined4 DAT_01d224dc
;   undefined4 DAT_01d224e0
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;   undefined4 DAT_01d227e8
;   undefined4 DAT_01d227ec
;   undefined4 DAT_01d227f0
;   undefined4 DAT_01d227f4
;   undefined4 DAT_01d227f8
;   undefined4 DAT_01d22ffc
;   undefined4 DAT_01d23000
;   undefined4 DAT_01d23004
;   undefined4 DAT_01d2303c
;   undefined4 DAT_01d23040
;   undefined4 DAT_01d23044
;   ... and 13 more
;
; Called Functions:
;   FUN_00515080
;   FUN_005151b0
;   FUN_005152e0
;   FUN_00515410
;   FUN_00515530
;   FUN_00516fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517240
        ;   Label: FUN_00517240
    PUSH ESI                            ; 00517241
    PUSH EDI                            ; 00517242
    MOV EAX,dword ptr [ESP + 0x10]      ; 00517243
    MOV EBX,dword ptr [ESP + 0x14]      ; 00517247
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051724b
    MOV ECX,dword ptr [EBX + 0x10]      ; 0051724f
    MOV ESI,dword ptr [EAX + 0x10]      ; 00517252
    MOV EDI,dword ptr [EDX + 0x10]      ; 00517255
    AND ESI,ECX                         ; 00517258
    TEST ESI,EDI                        ; 0051725a
    JNZ 0x005172f9                      ; 0051725c
        ;   XREF to: 005172f9 (CONDITIONAL_JUMP)  ; LAB_005172f9
    MOV ESI,dword ptr [EAX + 0x10]      ; 00517262
    OR ESI,ECX                          ; 00517265
    OR ESI,EDI                          ; 00517267
    JZ 0x005172fd                       ; 00517269
        ;   XREF to: 005172fd (CONDITIONAL_JUMP)  ; LAB_005172fd
    FLD float ptr [EAX]                 ; 0051726f
    FLD float ptr [EAX + 0x4]           ; 00517271
    FLD float ptr [EAX + 0x8]           ; 00517274
    FLD float ptr [EBX]                 ; 00517277
    FLD float ptr [EBX + 0x4]           ; 00517279
    FLD float ptr [EBX + 0x8]           ; 0051727c
    FLD float ptr [EDX]                 ; 0051727f
    MOV ESI,0x3                         ; 00517281
    FXCH ST6                            ; 00517286
    FSTP float ptr [0x01d22ffc]         ; 00517288 | DAT_01d22ffc
    FLD float ptr [EDX + 0x4]           ; 0051728e
    FXCH ST5                            ; 00517291
    FSTP float ptr [0x01d23000]         ; 00517293 | DAT_01d23000
    FLD float ptr [EDX + 0x8]           ; 00517299
    FXCH ST4                            ; 0051729c
    FSTP float ptr [0x01d23004]         ; 0051729e | DAT_01d23004
    FXCH ST2                            ; 005172a4
    FSTP float ptr [0x01d2303c]         ; 005172a6 | DAT_01d2303c
    FSTP float ptr [0x01d23040]         ; 005172ac | DAT_01d23040
    FSTP float ptr [0x01d23044]         ; 005172b2 | DAT_01d23044
    FXCH ST2                            ; 005172b8
    FSTP float ptr [0x01d2307c]         ; 005172ba | DAT_01d2307c
    FSTP float ptr [0x01d23080]         ; 005172c0 | DAT_01d23080
    FSTP float ptr [0x01d23084]         ; 005172c6 | DAT_01d23084
    XOR EDI,EDI                         ; 005172cc
    MOV dword ptr [0x01d227e8],ESI      ; 005172ce | DAT_01d227e8
    MOV dword ptr [0x01d227ec],EDI      ; 005172d4 | DAT_01d227ec
    MOV dword ptr [0x01d227f0],EDI      ; 005172da | DAT_01d227f0
    MOV dword ptr [0x01d227f4],EDI      ; 005172e0 | DAT_01d227f4
    MOV dword ptr [0x01d227f8],EDI      ; 005172e6 | DAT_01d227f8
    CALL FUN_00515080                   ; 005172ec
        ;   XREF to: 00515080 (UNCONDITIONAL_CALL)  ; undefined FUN_00515080()
    CMP ESI,dword ptr [0x01d227ec]      ; 005172f1 | DAT_01d227ec
    JLE 0x0051730c                      ; 005172f7
        ;   XREF to: 0051730c (CONDITIONAL_JUMP)  ; LAB_0051730c
    POP EDI                             ; 005172f9
        ;   Label: LAB_005172f9
    POP ESI                             ; 005172fa
    POP EBX                             ; 005172fb
    RET                                 ; 005172fc
    PUSH EDX                            ; 005172fd
        ;   Label: LAB_005172fd
    PUSH EBX                            ; 005172fe
    PUSH EAX                            ; 005172ff
    CALL FUN_00516fd0                   ; 00517300
        ;   XREF to: 00516fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00516fd0()
    ADD ESP,0xc                         ; 00517305
    POP EDI                             ; 00517308
    POP ESI                             ; 00517309
    POP EBX                             ; 0051730a
    RET                                 ; 0051730b
    CALL FUN_005151b0                   ; 0051730c
        ;   XREF to: 005151b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005151b0()
        ;   Label: LAB_0051730c
    CMP ESI,dword ptr [0x01d227f0]      ; 00517311 | DAT_01d227f0
    JG 0x005172f9                       ; 00517317
        ;   XREF to: 005172f9 (CONDITIONAL_JUMP)  ; LAB_005172f9
    CALL FUN_005152e0                   ; 00517319
        ;   XREF to: 005152e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005152e0()
    CMP ESI,dword ptr [0x01d227f4]      ; 0051731e | DAT_01d227f4
    JG 0x005172f9                       ; 00517324
        ;   XREF to: 005172f9 (CONDITIONAL_JUMP)  ; LAB_005172f9
    CALL FUN_00515410                   ; 00517326
        ;   XREF to: 00515410 (UNCONDITIONAL_CALL)  ; undefined FUN_00515410()
    CMP ESI,dword ptr [0x01d227f8]      ; 0051732b | DAT_01d227f8
    JG 0x005172f9                       ; 00517331
        ;   XREF to: 005172f9 (CONDITIONAL_JUMP)  ; LAB_005172f9
    CALL FUN_00515530                   ; 00517333
        ;   XREF to: 00515530 (UNCONDITIONAL_CALL)  ; undefined FUN_00515530()
    MOV ECX,dword ptr [0x01d227f8]      ; 00517338 | DAT_01d227f8
    XOR EDX,EDX                         ; 0051733e
    TEST ECX,ECX                        ; 00517340
    JLE 0x005173a0                      ; 00517342
        ;   XREF to: 005173a0 (CONDITIONAL_JUMP)  ; LAB_005173a0
    FLD float ptr [0x01d224e8]          ; 00517344 | DAT_01d224e8
    MOV EAX,0x1d247fc                   ; 0051734a
    FLD float ptr [0x01d224e4]          ; 0051734f | DAT_01d224e4
    FLD float ptr [0x01d224dc]          ; 00517355 | DAT_01d224dc
    FLD float ptr [EAX + 0x8]           ; 0051735b | DAT_01d24804 | DAT_01d24844
        ;   Label: LAB_0051735b
    FLD1                                ; 0051735e
    FDIVRP                              ; 00517360
    FLD float ptr [EAX]                 ; 00517362 | DAT_01d247fc | DAT_01d2483c
    FMUL ST2                            ; 00517364
    FLD float ptr [EAX + 0x4]           ; 00517366 | DAT_01d24800 | DAT_01d24840
    FMUL float ptr [0x01d224e0]         ; 00517369 | DAT_01d224e0
    FXCH ST2                            ; 0051736f
    FSTP float ptr [EAX + 0xc]          ; 00517371 | DAT_01d24808 | DAT_01d24848
    FMUL float ptr [EAX + 0xc]          ; 00517374 | DAT_01d24808 | DAT_01d24848
    FXCH                                ; 00517377
    FMUL float ptr [EAX + 0xc]          ; 00517379 | DAT_01d24808 | DAT_01d24848
    MOV EBX,dword ptr [0x01d227f8]      ; 0051737c | DAT_01d227f8
    ADD EAX,0x40                        ; 00517382
    INC EDX                             ; 00517385
    FLD ST4                             ; 00517386
    FLD ST4                             ; 00517388
    FADDP ST3,ST0                       ; 0051738a
    FADDP                               ; 0051738c
    FXCH                                ; 0051738e
    FSTP float ptr [EAX + -0x2c]        ; 00517390 | DAT_01d24810
    FSTP float ptr [EAX + -0x28]        ; 00517393 | DAT_01d24814
    CMP EDX,EBX                         ; 00517396
    JL 0x0051735b                       ; 00517398
        ;   XREF to: 0051735b (CONDITIONAL_JUMP)  ; LAB_0051735b
    FSTP ST0                            ; 0051739a
    FSTP ST0                            ; 0051739c
    FSTP ST0                            ; 0051739e
    MOV ESI,0x1d247fc                   ; 005173a0
        ;   Label: LAB_005173a0
    MOV EDI,0x1d247fc                   ; 005173a5
    XOR EBX,EBX                         ; 005173aa
    ADD ESI,0x40                        ; 005173ac
    ADD EDI,0x80                        ; 005173af
    MOV EAX,[0x01d227f8]                ; 005173b5 | DAT_01d227f8
        ;   Label: LAB_005173b5
    SUB EAX,0x2                         ; 005173ba
    CMP EBX,EAX                         ; 005173bd
    JGE 0x005172f9                      ; 005173bf
        ;   XREF to: 005172f9 (CONDITIONAL_JUMP)  ; LAB_005172f9
    PUSH EDI                            ; 005173c5
    PUSH ESI                            ; 005173c6 | DAT_01d2483c
    PUSH 0x1d247fc                      ; 005173c7 | DAT_01d247fc
    INC EBX                             ; 005173cc
    ADD EDI,0x40                        ; 005173cd
    CALL FUN_00516fd0                   ; 005173d0
        ;   XREF to: 00516fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00516fd0()
    ADD ESI,0x40                        ; 005173d5
    ADD ESP,0xc                         ; 005173d8
    JMP 0x005173b5                      ; 005173db
        ;   XREF to: 005173b5 (UNCONDITIONAL_JUMP)  ; LAB_005173b5

