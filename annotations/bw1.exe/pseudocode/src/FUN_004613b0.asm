; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004613b0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d8e6c
;   TerminatedCString s_ShotDjienWithPistol_005d8e71
;   TerminatedCString s_CRifle_005d8e85
;   TerminatedCString s_ShotDjienWithRifle_005d8e8c
;   TerminatedCString s_CLightgun_005d8e9f
;   TerminatedCString s_ShotDjienWithLightgun_005d8ea9
;   TerminatedCString s_DjienInvulnerable_005d8ebf
;   undefined4 DAT_005d8ed8
;   undefined4 DAT_005fea28
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_0040c550
;   FUN_0040cc60
;   FUN_004a1b70
;   FUN_00524770
;   FUN_005247c0
;   FUN_00525020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004613b0
        ;   Label: FUN_004613b0
    PUSH ESI                            ; 004613b1
    PUSH EDI                            ; 004613b2
    PUSH EBP                            ; 004613b3
    SUB ESP,0x4                         ; 004613b4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004613b7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004613bb
    LEA EBP,[EBX + 0x158]               ; 004613bf
    PUSH EBP                            ; 004613c5
    CALL FUN_00524770                   ; 004613c6
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 004613cb
    MOV EDX,dword ptr [EBX + 0xc9c0]    ; 004613ce
    MOV ESI,dword ptr [EAX + 0x24]      ; 004613d4
    TEST EDX,EDX                        ; 004613d7
    JZ 0x0046147f                       ; 004613d9
        ;   XREF to: 0046147f (CONDITIONAL_JUMP)  ; LAB_0046147f
    CMP ESI,0x12                        ; 004613df
    JNZ 0x00461463                      ; 004613e2
        ;   XREF to: 00461463 (CONDITIONAL_JUMP)  ; LAB_00461463
    PUSH 0x5d8e6c                       ; 004613e8 | DAT_005d8e6c
    MOV ECX,dword ptr [EDI + 0x34]      ; 004613ed
    PUSH ECX                            ; 004613f0
    CALL FUN_0040c550                   ; 004613f1
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004613f6
    TEST EAX,EAX                        ; 004613f9
    JZ 0x00461411                       ; 004613fb
        ;   XREF to: 00461411 (CONDITIONAL_JUMP)  ; LAB_00461411
    PUSH 0x5d8e71                       ; 004613fd | = "ShotDjienWithPistol"
    MOV EBX,dword ptr [0x0061b4d0]      ; 00461402 | DAT_0061b4d0
    PUSH EBX                            ; 00461408
    CALL FUN_004a1b70                   ; 00461409
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 0046140e
    PUSH 0x5d8e85                       ; 00461411 | = "CRifle"
        ;   Label: LAB_00461411
    MOV ESI,dword ptr [EDI + 0x34]      ; 00461416
    PUSH ESI                            ; 00461419
    CALL FUN_0040c550                   ; 0046141a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0046141f
    TEST EAX,EAX                        ; 00461422
    JZ 0x0046143a                       ; 00461424
        ;   XREF to: 0046143a (CONDITIONAL_JUMP)  ; LAB_0046143a
    PUSH 0x5d8e8c                       ; 00461426 | = "ShotDjienWithRifle"
    MOV EBP,dword ptr [0x0061b4d0]      ; 0046142b | DAT_0061b4d0
    PUSH EBP                            ; 00461431
    CALL FUN_004a1b70                   ; 00461432
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 00461437
    PUSH 0x5d8e9f                       ; 0046143a | = "CLightgun"
        ;   Label: LAB_0046143a
    MOV EAX,dword ptr [EDI + 0x34]      ; 0046143f
    PUSH EAX                            ; 00461442
    CALL FUN_0040c550                   ; 00461443
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 00461448
    TEST EAX,EAX                        ; 0046144b
    JZ 0x00461463                       ; 0046144d
        ;   XREF to: 00461463 (CONDITIONAL_JUMP)  ; LAB_00461463
    PUSH 0x5d8ea9                       ; 0046144f | = "ShotDjienWithLightgun"
    MOV EDX,dword ptr [0x0061b4d0]      ; 00461454 | DAT_0061b4d0
    PUSH EDX                            ; 0046145a
    CALL FUN_004a1b70                   ; 0046145b
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 00461460
    PUSH 0x5d8ebf                       ; 00461463 | = "DjienInvulnerable"
        ;   Label: LAB_00461463
    MOV ECX,dword ptr [0x0061b4d0]      ; 00461468 | DAT_0061b4d0
    PUSH ECX                            ; 0046146e
    CALL FUN_004a1b70                   ; 0046146f
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 00461474
    ADD ESP,0x4                         ; 00461477
        ;   Label: LAB_00461477
    POP EBP                             ; 0046147a
    POP EDI                             ; 0046147b
    POP ESI                             ; 0046147c
    POP EBX                             ; 0046147d
    RET                                 ; 0046147e
    FLD float ptr [EBX + 0xc1e4]        ; 0046147f
        ;   Label: LAB_0046147f
    FLDZ                                ; 00461485
    FCOMPP                              ; 00461487
    FNSTSW AX                           ; 00461489
    SAHF                                ; 0046148b
    JC 0x00461477                       ; 0046148c
        ;   XREF to: 00461477 (CONDITIONAL_JUMP)  ; LAB_00461477
    PUSH EDI                            ; 0046148e
    FLD float ptr [0x005fea28]          ; 0046148f | DAT_005fea28
    MOV EAX,dword ptr [EBX + 0x154]     ; 00461495
    PUSH EBX                            ; 0046149b
    FSTP float ptr [EBX + 0xc1e4]       ; 0046149c
    CALL dword ptr [EAX + 0x148]        ; 004614a2
    ADD ESP,0x8                         ; 004614a8
    CMP ESI,0xb                         ; 004614ab
    JZ 0x004614ba                       ; 004614ae
        ;   XREF to: 004614ba (CONDITIONAL_JUMP)  ; LAB_004614ba
    CMP ESI,0xc                         ; 004614b0
    JZ 0x004614ba                       ; 004614b3
        ;   XREF to: 004614ba (CONDITIONAL_JUMP)  ; LAB_004614ba
    CMP ESI,0xd                         ; 004614b5
    JNZ 0x004614ff                      ; 004614b8
        ;   XREF to: 004614ff (CONDITIONAL_JUMP)  ; LAB_004614ff
    ADD EBX,0x158                       ; 004614ba
        ;   Label: LAB_004614ba
    PUSH EBX                            ; 004614c0
    CALL FUN_00525020                   ; 004614c1
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; undefined FUN_00525020()
    MOV dword ptr [ESP + 0x4],EAX       ; 004614c6
    FLD float ptr [ESP + 0x4]           ; 004614ca
    ADD ESP,0x4                         ; 004614ce
    FCOMP double ptr [0x005d8ed8]       ; 004614d1 | DAT_005d8ed8
    FNSTSW AX                           ; 004614d7
    SAHF                                ; 004614d9
    JBE 0x00461477                      ; 004614da
        ;   XREF to: 00461477 (CONDITIONAL_JUMP)  ; LAB_00461477
    PUSH 0x1                            ; 004614dc
    PUSH 0x2                            ; 004614de
    PUSH 0x0                            ; 004614e0
    CALL FUN_0040cc60                   ; 004614e2
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 004614e7
    ADD EAX,0xb                         ; 004614ea
    PUSH EAX                            ; 004614ed
    PUSH EBX                            ; 004614ee
    CALL FUN_005247c0                   ; 004614ef
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004614f4
    ADD ESP,0x4                         ; 004614f7
    POP EBP                             ; 004614fa
    POP EDI                             ; 004614fb
    POP ESI                             ; 004614fc
    POP EBX                             ; 004614fd
    RET                                 ; 004614fe
    PUSH 0x1                            ; 004614ff
        ;   Label: LAB_004614ff
    PUSH 0x2                            ; 00461501
    PUSH 0x0                            ; 00461503
    CALL FUN_0040cc60                   ; 00461505
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 0046150a
    ADD EAX,0xb                         ; 0046150d
    PUSH EAX                            ; 00461510
    PUSH EBP                            ; 00461511
    CALL FUN_005247c0                   ; 00461512
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00461517
    ADD ESP,0x4                         ; 0046151a
    POP EBP                             ; 0046151d
    POP EDI                             ; 0046151e
    POP ESI                             ; 0046151f
    POP EBX                             ; 00461520
    RET                                 ; 00461521

