; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   FUN_004f7e00 at 004f7f58
;
; Referenced Globals:
;   undefined4 DAT_01d0987c
;   undefined4 DAT_01d09880
;   undefined4 DAT_01d09884
;   undefined4 DAT_01d09888
;   undefined4 DAT_01d09b84
;   undefined4 DAT_01d09b88
;   undefined4 DAT_01d09b8c
;   undefined4 DAT_01d09b90
;   undefined4 DAT_01d09b94
;   undefined4 DAT_01d0a398
;   undefined4 DAT_01d0a39c
;   undefined4 DAT_01d0a3a0
;   undefined4 DAT_01d0a3d8
;   undefined4 DAT_01d0a3dc
;   undefined4 DAT_01d0a3e0
;   ... and 13 more
;
; Called Functions:
;   FUN_004f6300
;   FUN_004f6430
;   FUN_004f6560
;   FUN_004f6690
;   FUN_004f67b0
;   FUN_004f8110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8330
        ;   Label: FUN_004f8330
    PUSH ESI                            ; 004f8331
    PUSH EDI                            ; 004f8332
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f8333
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f8337
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f833b
    MOV ECX,dword ptr [EBX + 0x10]      ; 004f833f
    MOV ESI,dword ptr [EAX + 0x10]      ; 004f8342
    MOV EDI,dword ptr [EDX + 0x10]      ; 004f8345
    AND ESI,ECX                         ; 004f8348
    TEST ESI,EDI                        ; 004f834a
    JNZ 0x004f83e9                      ; 004f834c
        ;   XREF to: 004f83e9 (CONDITIONAL_JUMP)  ; LAB_004f83e9
    MOV ESI,dword ptr [EAX + 0x10]      ; 004f8352
    OR ESI,ECX                          ; 004f8355
    OR ESI,EDI                          ; 004f8357
    JZ 0x004f83ed                       ; 004f8359
        ;   XREF to: 004f83ed (CONDITIONAL_JUMP)  ; LAB_004f83ed
    FLD float ptr [EAX]                 ; 004f835f
    FLD float ptr [EAX + 0x4]           ; 004f8361
    FLD float ptr [EAX + 0x8]           ; 004f8364
    FLD float ptr [EBX]                 ; 004f8367
    FLD float ptr [EBX + 0x4]           ; 004f8369
    FLD float ptr [EBX + 0x8]           ; 004f836c
    FLD float ptr [EDX]                 ; 004f836f
    MOV ESI,0x3                         ; 004f8371
    FXCH ST6                            ; 004f8376
    FSTP float ptr [0x01d0a398]         ; 004f8378 | DAT_01d0a398
    FLD float ptr [EDX + 0x4]           ; 004f837e
    FXCH ST5                            ; 004f8381
    FSTP float ptr [0x01d0a39c]         ; 004f8383 | DAT_01d0a39c
    FLD float ptr [EDX + 0x8]           ; 004f8389
    FXCH ST4                            ; 004f838c
    FSTP float ptr [0x01d0a3a0]         ; 004f838e | DAT_01d0a3a0
    FXCH ST2                            ; 004f8394
    FSTP float ptr [0x01d0a3d8]         ; 004f8396 | DAT_01d0a3d8
    FSTP float ptr [0x01d0a3dc]         ; 004f839c | DAT_01d0a3dc
    FSTP float ptr [0x01d0a3e0]         ; 004f83a2 | DAT_01d0a3e0
    FXCH ST2                            ; 004f83a8
    FSTP float ptr [0x01d0a418]         ; 004f83aa | DAT_01d0a418
    FSTP float ptr [0x01d0a41c]         ; 004f83b0 | DAT_01d0a41c
    FSTP float ptr [0x01d0a420]         ; 004f83b6 | DAT_01d0a420
    XOR EDI,EDI                         ; 004f83bc
    MOV dword ptr [0x01d09b84],ESI      ; 004f83be | DAT_01d09b84
    MOV dword ptr [0x01d09b88],EDI      ; 004f83c4 | DAT_01d09b88
    MOV dword ptr [0x01d09b8c],EDI      ; 004f83ca | DAT_01d09b8c
    MOV dword ptr [0x01d09b90],EDI      ; 004f83d0 | DAT_01d09b90
    MOV dword ptr [0x01d09b94],EDI      ; 004f83d6 | DAT_01d09b94
    CALL FUN_004f6300                   ; 004f83dc
        ;   XREF to: 004f6300 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6300()
    CMP ESI,dword ptr [0x01d09b88]      ; 004f83e1 | DAT_01d09b88
    JLE 0x004f83fc                      ; 004f83e7
        ;   XREF to: 004f83fc (CONDITIONAL_JUMP)  ; LAB_004f83fc
    POP EDI                             ; 004f83e9
        ;   Label: LAB_004f83e9
    POP ESI                             ; 004f83ea
    POP EBX                             ; 004f83eb
    RET                                 ; 004f83ec
    PUSH EDX                            ; 004f83ed
        ;   Label: LAB_004f83ed
    PUSH EBX                            ; 004f83ee
    PUSH EAX                            ; 004f83ef
    CALL FUN_004f8110                   ; 004f83f0
        ;   XREF to: 004f8110 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8110()
    ADD ESP,0xc                         ; 004f83f5
    POP EDI                             ; 004f83f8
    POP ESI                             ; 004f83f9
    POP EBX                             ; 004f83fa
    RET                                 ; 004f83fb
    CALL FUN_004f6430                   ; 004f83fc
        ;   XREF to: 004f6430 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6430()
        ;   Label: LAB_004f83fc
    CMP ESI,dword ptr [0x01d09b8c]      ; 004f8401 | DAT_01d09b8c
    JG 0x004f83e9                       ; 004f8407
        ;   XREF to: 004f83e9 (CONDITIONAL_JUMP)  ; LAB_004f83e9
    CALL FUN_004f6560                   ; 004f8409
        ;   XREF to: 004f6560 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6560()
    CMP ESI,dword ptr [0x01d09b90]      ; 004f840e | DAT_01d09b90
    JG 0x004f83e9                       ; 004f8414
        ;   XREF to: 004f83e9 (CONDITIONAL_JUMP)  ; LAB_004f83e9
    CALL FUN_004f6690                   ; 004f8416
        ;   XREF to: 004f6690 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6690()
    CMP ESI,dword ptr [0x01d09b94]      ; 004f841b | DAT_01d09b94
    JG 0x004f83e9                       ; 004f8421
        ;   XREF to: 004f83e9 (CONDITIONAL_JUMP)  ; LAB_004f83e9
    CALL FUN_004f67b0                   ; 004f8423
        ;   XREF to: 004f67b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f67b0()
    MOV ECX,dword ptr [0x01d09b94]      ; 004f8428 | DAT_01d09b94
    XOR EDX,EDX                         ; 004f842e
    TEST ECX,ECX                        ; 004f8430
    JLE 0x004f8490                      ; 004f8432
        ;   XREF to: 004f8490 (CONDITIONAL_JUMP)  ; LAB_004f8490
    FLD float ptr [0x01d09888]          ; 004f8434 | DAT_01d09888
    MOV EAX,0x1d0bb98                   ; 004f843a
    FLD float ptr [0x01d09884]          ; 004f843f | DAT_01d09884
    FLD float ptr [0x01d0987c]          ; 004f8445 | DAT_01d0987c
    FLD float ptr [EAX + 0x8]           ; 004f844b | DAT_01d0bba0 | DAT_01d0bbe0
        ;   Label: LAB_004f844b
    FLD1                                ; 004f844e
    FDIVRP                              ; 004f8450
    FLD float ptr [EAX]                 ; 004f8452 | DAT_01d0bb98 | DAT_01d0bbd8
    FMUL ST2                            ; 004f8454
    FLD float ptr [EAX + 0x4]           ; 004f8456 | DAT_01d0bb9c | DAT_01d0bbdc
    FMUL float ptr [0x01d09880]         ; 004f8459 | DAT_01d09880
    FXCH ST2                            ; 004f845f
    FSTP float ptr [EAX + 0xc]          ; 004f8461 | DAT_01d0bba4 | DAT_01d0bbe4
    FMUL float ptr [EAX + 0xc]          ; 004f8464 | DAT_01d0bba4 | DAT_01d0bbe4
    FXCH                                ; 004f8467
    FMUL float ptr [EAX + 0xc]          ; 004f8469 | DAT_01d0bba4 | DAT_01d0bbe4
    MOV EBX,dword ptr [0x01d09b94]      ; 004f846c | DAT_01d09b94
    ADD EAX,0x40                        ; 004f8472
    INC EDX                             ; 004f8475
    FLD ST4                             ; 004f8476
    FLD ST4                             ; 004f8478
    FADDP ST3,ST0                       ; 004f847a
    FADDP                               ; 004f847c
    FXCH                                ; 004f847e
    FSTP float ptr [EAX + -0x2c]        ; 004f8480 | DAT_01d0bbac
    FSTP float ptr [EAX + -0x28]        ; 004f8483 | DAT_01d0bbb0
    CMP EDX,EBX                         ; 004f8486
    JL 0x004f844b                       ; 004f8488
        ;   XREF to: 004f844b (CONDITIONAL_JUMP)  ; LAB_004f844b
    FSTP ST0                            ; 004f848a
    FSTP ST0                            ; 004f848c
    FSTP ST0                            ; 004f848e
    MOV ESI,0x1d0bb98                   ; 004f8490
        ;   Label: LAB_004f8490
    MOV EDI,0x1d0bb98                   ; 004f8495
    XOR EBX,EBX                         ; 004f849a
    ADD ESI,0x40                        ; 004f849c
    ADD EDI,0x80                        ; 004f849f
    MOV EAX,[0x01d09b94]                ; 004f84a5 | DAT_01d09b94
        ;   Label: LAB_004f84a5
    SUB EAX,0x2                         ; 004f84aa
    CMP EBX,EAX                         ; 004f84ad
    JGE 0x004f83e9                      ; 004f84af
        ;   XREF to: 004f83e9 (CONDITIONAL_JUMP)  ; LAB_004f83e9
    PUSH EDI                            ; 004f84b5
    PUSH ESI                            ; 004f84b6 | DAT_01d0bbd8
    PUSH 0x1d0bb98                      ; 004f84b7 | DAT_01d0bb98
    INC EBX                             ; 004f84bc
    ADD EDI,0x40                        ; 004f84bd
    CALL FUN_004f8110                   ; 004f84c0
        ;   XREF to: 004f8110 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8110()
    ADD ESI,0x40                        ; 004f84c5
    ADD ESP,0xc                         ; 004f84c8
    JMP 0x004f84a5                      ; 004f84cb
        ;   XREF to: 004f84a5 (UNCONDITIONAL_JUMP)  ; LAB_004f84a5

