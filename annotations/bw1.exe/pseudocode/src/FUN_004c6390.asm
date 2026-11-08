; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c6390(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_gabriela_dfm_005e0e54
;   TerminatedCString s_gabcoat_cth_005e0e61
;   TerminatedCString s_Bip01_head_005e0e6d
;   TerminatedCString s_Bip01_L_Clavicle_005e0e78
;   TerminatedCString s_Bip01_R_Clavicle_005e0e89
;   TerminatedCString s_Bip01_L_UpperArm_005e0e9a
;   TerminatedCString s_Bip01_R_UpperArm_005e0eab
;   TerminatedCString s_Bip01_L_ForeArm_005e0ebc
;   TerminatedCString s_Bip01_R_ForeArm_005e0ecc
;   TerminatedCString s_Bip01_L_Foot_005e0edc
;   TerminatedCString s_Bip01_R_Foot_005e0ee9
;   TerminatedCString s_Bip01_L_Thigh_005e0ef6
;   TerminatedCString s_Bip01_R_Thigh_005e0f04
;   TerminatedCString s_Bip01_L_Calf_005e0f12
;   TerminatedCString s_Bip01_R_Calf_005e0f1f
;   ... and 27 more
;
; Called Functions:
;   FUN_0043e6d0
;   FUN_0043eea0
;   FUN_004eaa10
;   FUN_005240c0
;   FUN_00524a00
;   FUN_005634f0
;   FUN_00569b20
;   FUN_00569f30
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6390
        ;   Label: FUN_004c6390
    PUSH ESI                            ; 004c6391
    PUSH EDI                            ; 004c6392
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c6393
    PUSH ESI                            ; 004c6397
    CALL FUN_004eaa10                   ; 004c6398
        ;   XREF to: 004eaa10 (UNCONDITIONAL_CALL)  ; undefined FUN_004eaa10()
    ADD ESP,0x4                         ; 004c639d
    PUSH 0x5e0e54                       ; 004c63a0 | = "gabriela.dfm"
    LEA EDI,[ESI + 0x158]               ; 004c63a5
    PUSH EDI                            ; 004c63ab
    CALL FUN_00569f50                   ; 004c63ac
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 004c63b1
    PUSH EDI                            ; 004c63b4
    CALL FUN_00569b20                   ; 004c63b5
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 004c63ba
    PUSH 0x5e0e61                       ; 004c63bd | = "gabcoat.cth"
    LEA EBX,[ESI + 0x1ffec]             ; 004c63c2
    PUSH EBX                            ; 004c63c8
    CALL FUN_0043e6d0                   ; 004c63c9
        ;   XREF to: 0043e6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e6d0()
    ADD ESP,0x8                         ; 004c63ce
    PUSH EDI                            ; 004c63d1
    LEA EAX,[ESI + 0x30]                ; 004c63d2
    PUSH EAX                            ; 004c63d5
    LEA EAX,[ESI + 0x20]                ; 004c63d6
    PUSH EAX                            ; 004c63d9
    PUSH EBX                            ; 004c63da
    CALL FUN_0043eea0                   ; 004c63db
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043eea0()
    ADD ESP,0x10                        ; 004c63e0
    PUSH EDI                            ; 004c63e3
    CALL FUN_00569f30                   ; 004c63e4
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004c63e9
    PUSH 0x1                            ; 004c63ec
    PUSH 0x5e0e6d                       ; 004c63ee | = "Bip01 head"
    PUSH EAX                            ; 004c63f3
    MOV EBX,EAX                         ; 004c63f4
    CALL FUN_005634f0                   ; 004c63f6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c63fb
    PUSH 0x1                            ; 004c63fe
    PUSH 0x5e0e78                       ; 004c6400 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004c6405
    MOV [0x01cc9108],EAX                ; 004c6406 | DAT_01cc9108
    CALL FUN_005634f0                   ; 004c640b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c6410
    PUSH 0x1                            ; 004c6413
    PUSH 0x5e0e89                       ; 004c6415 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004c641a
    MOV [0x01cc910c],EAX                ; 004c641b | DAT_01cc910c
    CALL FUN_005634f0                   ; 004c6420
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c6425
    PUSH 0x1                            ; 004c6428
    PUSH 0x5e0e9a                       ; 004c642a | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004c642f
    MOV [0x01cc9110],EAX                ; 004c6430 | DAT_01cc9110
    CALL FUN_005634f0                   ; 004c6435
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c643a
    PUSH 0x1                            ; 004c643d
    PUSH 0x5e0eab                       ; 004c643f | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004c6444
    MOV [0x01cc9114],EAX                ; 004c6445 | DAT_01cc9114
    CALL FUN_005634f0                   ; 004c644a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c644f
    PUSH 0x1                            ; 004c6452
    PUSH 0x5e0ebc                       ; 004c6454 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004c6459
    MOV [0x01cc9118],EAX                ; 004c645a | DAT_01cc9118
    CALL FUN_005634f0                   ; 004c645f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c6464
    MOV [0x01cc911c],EAX                ; 004c6467 | DAT_01cc911c
    PUSH 0x1                            ; 004c646c
    PUSH 0x5e0ecc                       ; 004c646e | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004c6473
    CALL FUN_005634f0                   ; 004c6474
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c6479
    PUSH 0x1                            ; 004c647c
    PUSH 0x5e0edc                       ; 004c647e | = "Bip01 L Foot"
    PUSH EBX                            ; 004c6483
    MOV [0x01cc9120],EAX                ; 004c6484 | DAT_01cc9120
    CALL FUN_005634f0                   ; 004c6489
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c648e
    PUSH 0x1                            ; 004c6491
    PUSH 0x5e0ee9                       ; 004c6493 | = "Bip01 R Foot"
    PUSH EBX                            ; 004c6498
    MOV [0x01cc9124],EAX                ; 004c6499 | DAT_01cc9124
    CALL FUN_005634f0                   ; 004c649e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c64a3
    PUSH 0x1                            ; 004c64a6
    PUSH 0x5e0ef6                       ; 004c64a8 | = "Bip01 L Thigh"
    PUSH EBX                            ; 004c64ad
    MOV [0x01cc9128],EAX                ; 004c64ae | DAT_01cc9128
    CALL FUN_005634f0                   ; 004c64b3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c64b8
    PUSH 0x1                            ; 004c64bb
    PUSH 0x5e0f04                       ; 004c64bd | = "Bip01 R Thigh"
    PUSH EBX                            ; 004c64c2
    MOV [0x01cc912c],EAX                ; 004c64c3 | DAT_01cc912c
    CALL FUN_005634f0                   ; 004c64c8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c64cd
    PUSH 0x1                            ; 004c64d0
    PUSH 0x5e0f12                       ; 004c64d2 | = "Bip01 L Calf"
    PUSH EBX                            ; 004c64d7
    MOV [0x01cc9130],EAX                ; 004c64d8 | DAT_01cc9130
    CALL FUN_005634f0                   ; 004c64dd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c64e2
    PUSH 0x1                            ; 004c64e5
    PUSH 0x5e0f1f                       ; 004c64e7 | = "Bip01 R Calf"
    PUSH EBX                            ; 004c64ec
    MOV [0x01cc9134],EAX                ; 004c64ed | DAT_01cc9134
    CALL FUN_005634f0                   ; 004c64f2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c64f7
    PUSH 0x1                            ; 004c64fa
    PUSH 0x5e0f2c                       ; 004c64fc | = "Bip01 L Hand"
    PUSH EBX                            ; 004c6501
    MOV [0x01cc9138],EAX                ; 004c6502 | DAT_01cc9138
    CALL FUN_005634f0                   ; 004c6507
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c650c
    PUSH 0x1                            ; 004c650f
    PUSH 0x5e0f39                       ; 004c6511 | = "Bip01 R Hand"
    PUSH EBX                            ; 004c6516
    MOV [0x01cc9148],EAX                ; 004c6517 | DAT_01cc9148
    CALL FUN_005634f0                   ; 004c651c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c6521
    PUSH 0x1                            ; 004c6524
    PUSH 0x5e0f46                       ; 004c6526 | = "Bip01 Spine2"
    PUSH EBX                            ; 004c652b
    MOV [0x01cc914c],EAX                ; 004c652c | DAT_01cc914c
    CALL FUN_005634f0                   ; 004c6531
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c6536
    MOV [0x01cc9150],EAX                ; 004c6539 | DAT_01cc9150
    PUSH 0x1                            ; 004c653e
    PUSH 0x5e0f53                       ; 004c6540 | = "Bip01 Spine"
    PUSH EBX                            ; 004c6545
    CALL FUN_005634f0                   ; 004c6546
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004c654b
    PUSH 0x1                            ; 004c654e
    PUSH 0x5e0f5f                       ; 004c6550 | = "gab draw"
    PUSH EDI                            ; 004c6555
    MOV [0x01cc9154],EAX                ; 004c6556 | DAT_01cc9154
    CALL FUN_00524a00                   ; 004c655b
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 004c6560
    PUSH EAX                            ; 004c6563
    CALL FUN_005240c0                   ; 004c6564
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005240c0()
    ADD ESP,0xc                         ; 004c6569
    PUSH 0x1                            ; 004c656c
    PUSH 0x5e0f68                       ; 004c656e | = "gab shoot"
    PUSH EDI                            ; 004c6573
    MOV [0x01cc913c],EAX                ; 004c6574 | DAT_01cc913c
    CALL FUN_00524a00                   ; 004c6579
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 004c657e
    PUSH EAX                            ; 004c6581
    CALL FUN_005240c0                   ; 004c6582
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005240c0()
    ADD ESP,0xc                         ; 004c6587
    PUSH 0x1                            ; 004c658a
    PUSH 0x5e0f72                       ; 004c658c | = "gab crossbow shoot"
    PUSH EDI                            ; 004c6591
    MOV [0x01cc9144],EAX                ; 004c6592 | DAT_01cc9144
    CALL FUN_00524a00                   ; 004c6597
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 004c659c
    PUSH EAX                            ; 004c659f
    CALL FUN_005240c0                   ; 004c65a0
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005240c0()
    MOV dword ptr [ESI + 0x1ff7c],0x0   ; 004c65a5
    MOV dword ptr [ESI + 0x1ff80],0x0   ; 004c65af
    MOV [0x01cc9140],EAX                ; 004c65b9 | DAT_01cc9140
    MOV dword ptr [ESI + 0x1ff84],0x0   ; 004c65be
    MOV EAX,[0x01cc9148]                ; 004c65c8 | DAT_01cc9148
    ADD ESP,0xc                         ; 004c65cd
    MOV dword ptr [ESI + 0x25a8],EAX    ; 004c65d0
    POP EDI                             ; 004c65d6
    POP ESI                             ; 004c65d7
    POP EBX                             ; 004c65d8
    RET                                 ; 004c65d9

