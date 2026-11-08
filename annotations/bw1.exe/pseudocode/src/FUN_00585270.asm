; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00585270(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00606084
;
; Called Functions:
;   FUN_00434320
;   FUN_00441de0
;   FUN_00468860
;   FUN_00468950
;   FUN_004ea830
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585270
        ;   Label: FUN_00585270
    PUSH EBP                            ; 00585271
    MOV EBP,ESP                         ; 00585272
    MOV EBX,dword ptr [EBP + 0xc]       ; 00585274
    PUSH EBX                            ; 00585277
    CALL FUN_004ea830                   ; 00585278
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea830()
    ADD ESP,0x4                         ; 0058527d
    ADD EAX,0x200ac                     ; 00585280
    PUSH EAX                            ; 00585285
    CALL FUN_00468860                   ; 00585286
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    LEA EBX,[EAX + 0xfffdff54]          ; 0058528b
    MOV dword ptr [EBX + 0x154],0x6060c4 ; 00585291
    MOV dword ptr [EBX + 0x1ffac],0x0   ; 0058529b
    MOV dword ptr [EBX + 0x1ffb0],0x0   ; 005852a5
    MOV dword ptr [EBX + 0x1ffb4],0x0   ; 005852af
    MOV dword ptr [EBX + 0x1ffb8],0xbf060a92 ; 005852b9
    MOV dword ptr [EBX + 0x1ffd8],0x0   ; 005852c3
    MOV dword ptr [EBX + 0x1ffd0],0x0   ; 005852cd
    MOV dword ptr [EBX + 0x1ffc8],0x0   ; 005852d7
    MOV dword ptr [EBX + 0x1ffc0],0x0   ; 005852e1
    MOV dword ptr [EBX + 0x1ffd4],0x0   ; 005852eb
    MOV dword ptr [EBX + 0x1ffdc],0x0   ; 005852f5
    MOV dword ptr [EBX + 0x1fff8],0x0   ; 005852ff
    MOV dword ptr [EBX + 0x1fff0],0x0   ; 00585309
    MOV dword ptr [EBX + 0x1ffe8],0x0   ; 00585313
    MOV dword ptr [EBX + 0x1ffe0],0x0   ; 0058531d
    MOV dword ptr [EBX + 0x1fff4],0x0   ; 00585327
    MOV dword ptr [EBX + 0x1fffc],0x0   ; 00585331
    MOV dword ptr [EBX + 0x20060],0x0   ; 0058533b
    MOV dword ptr [EBX + 0x20000],0x0   ; 00585345
    MOV dword ptr [EBX + 0x20008],0x0   ; 0058534f
    MOV dword ptr [EBX + 0x20010],0x0   ; 00585359
    MOV dword ptr [EBX + 0x20014],0x0   ; 00585363
    FLD float ptr [0x00606084]          ; 0058536d | DAT_00606084
    MOV dword ptr [EBX + 0x20018],0x0   ; 00585373
    ADD ESP,0x4                         ; 0058537d
    FSTP float ptr [EBX + 0x1ffbc]      ; 00585380
    MOV dword ptr [EBX + 0x20084],0xf149f2ca ; 00585386
    PUSH 0x5f63c1                       ; 00585390
    MOV dword ptr [EBX + 0x2006c],0xf149f2ca ; 00585395
    LEA EAX,[EBX + 0x158]               ; 0058539f
    FLD float ptr [EBX + 0x1ffc8]       ; 005853a5
    FLD float ptr [EBX + 0x1ffc0]       ; 005853ab
    FLD float ptr [EBX + 0x1ffe8]       ; 005853b1
    FLD float ptr [EBX + 0x1ffe0]       ; 005853b7
    PUSH EAX                            ; 005853bd
    FXCH ST3                            ; 005853be
    FSTP float ptr [EBX + 0x1ffcc]      ; 005853c0
    FXCH                                ; 005853c6
    FSTP float ptr [EBX + 0x1ffc4]      ; 005853c8
    FSTP float ptr [EBX + 0x1ffec]      ; 005853ce
    FSTP float ptr [EBX + 0x1ffe4]      ; 005853d4
    CALL FUN_00569f50                   ; 005853da
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0x2c98],0x0    ; 005853df
    MOV dword ptr [EBX + 0x20004],0x0   ; 005853e9
    MOV dword ptr [EBX + 0x20024],0x0   ; 005853f3
    LEA EAX,[EBX + 0x2004c]             ; 005853fd
    MOV dword ptr [EBX + 0x20028],0x0   ; 00585403
    MOV dword ptr [EAX + 0x8],0x0       ; 0058540d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00585414
    MOV dword ptr [EAX + 0x4],EDX       ; 00585417
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058541a
    MOV dword ptr [EAX],EDX             ; 0058541d
    MOV dword ptr [EBX + 0x20058],0xffffffff ; 0058541f
    MOV dword ptr [EBX + 0x2000c],0x0   ; 00585429
    MOV dword ptr [EBX + 0x2002c],0x0   ; 00585433
    MOV dword ptr [EBX + 0x20030],0x0   ; 0058543d
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00585447
    ADD ESP,0x8                         ; 00585451
    MOV dword ptr [EBX + 0x2005c],0x0   ; 00585454
    LEA EAX,[EBX + 0x1fae8]             ; 0058545e
    MOV dword ptr [EBX + 0x20064],0x0   ; 00585464
    PUSH 0x5f63ce                       ; 0058546e
    MOV EAX,dword ptr [EAX + 0x338]     ; 00585473
    ADD EAX,0x158                       ; 00585479
    PUSH EAX                            ; 0058547e
    CALL FUN_00468950                   ; 0058547f
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 00585484
    PUSH 0x0                            ; 00585487
    PUSH 0x5f63d6                       ; 00585489
    PUSH 0x1                            ; 0058548e
    PUSH 0x0                            ; 00585490
    PUSH EBX                            ; 00585492
    CALL FUN_00434320                   ; 00585493
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585498
    PUSH 0x0                            ; 0058549b
    PUSH 0x5f63ea                       ; 0058549d
    PUSH 0x2                            ; 005854a2
    PUSH 0x1                            ; 005854a4
    PUSH EBX                            ; 005854a6
    CALL FUN_00434320                   ; 005854a7
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005854ac
    PUSH 0x0                            ; 005854af
    PUSH 0x5f6403                       ; 005854b1
    PUSH 0x3                            ; 005854b6
    PUSH 0x0                            ; 005854b8
    PUSH EBX                            ; 005854ba
    CALL FUN_00434320                   ; 005854bb
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005854c0
    PUSH 0x0                            ; 005854c3
    PUSH 0x5f6419                       ; 005854c5
    PUSH 0x4                            ; 005854ca
    PUSH 0x3                            ; 005854cc
    PUSH EBX                            ; 005854ce
    CALL FUN_00434320                   ; 005854cf
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005854d4
    PUSH 0x0                            ; 005854d7
    PUSH 0x5f6434                       ; 005854d9
    PUSH 0x5                            ; 005854de
    PUSH 0x3                            ; 005854e0
    PUSH EBX                            ; 005854e2
    CALL FUN_00434320                   ; 005854e3
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005854e8
    PUSH 0x0                            ; 005854eb
    PUSH 0x5f6454                       ; 005854ed
    PUSH 0x3                            ; 005854f2
    PUSH 0x1                            ; 005854f4
    PUSH EBX                            ; 005854f6
    CALL FUN_00434320                   ; 005854f7
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005854fc
    PUSH 0x1                            ; 005854ff
    PUSH 0x5f646d                       ; 00585501
    PUSH 0x6                            ; 00585506
    PUSH 0x0                            ; 00585508
    PUSH EBX                            ; 0058550a
    CALL FUN_00434320                   ; 0058550b
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585510
    PUSH 0x1                            ; 00585513
    PUSH 0x5f6480                       ; 00585515
    PUSH 0x0                            ; 0058551a
    PUSH 0x6                            ; 0058551c
    PUSH EBX                            ; 0058551e
    CALL FUN_00434320                   ; 0058551f
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585524
    PUSH 0x1                            ; 00585527
    PUSH 0x5f6493                       ; 00585529
    PUSH 0x4                            ; 0058552e
    PUSH 0xc                            ; 00585530
    PUSH EBX                            ; 00585532
    CALL FUN_00434320                   ; 00585533
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585538
    PUSH 0x0                            ; 0058553b
    PUSH 0x5f64a6                       ; 0058553d
    PUSH 0x7                            ; 00585542
    PUSH 0x3                            ; 00585544
    PUSH EBX                            ; 00585546
    CALL FUN_00434320                   ; 00585547
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 0058554c
    PUSH 0x0                            ; 0058554f
    PUSH 0x5f64bf                       ; 00585551
    PUSH 0x7                            ; 00585556
    PUSH 0x7                            ; 00585558
    PUSH EBX                            ; 0058555a
    CALL FUN_00434320                   ; 0058555b
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585560
    PUSH 0x0                            ; 00585563
    PUSH 0x5f64d0                       ; 00585565
    PUSH 0x8                            ; 0058556a
    PUSH 0x0                            ; 0058556c
    PUSH EBX                            ; 0058556e
    CALL FUN_00434320                   ; 0058556f
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585574
    PUSH 0x1                            ; 00585577
    PUSH 0x5f64e5                       ; 00585579
    PUSH 0x8                            ; 0058557e
    PUSH 0xd                            ; 00585580
    PUSH EBX                            ; 00585582
    CALL FUN_00434320                   ; 00585583
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585588
    PUSH 0x1                            ; 0058558b
    PUSH 0x5f64f4                       ; 0058558d
    PUSH 0x8                            ; 00585592
    PUSH 0xd                            ; 00585594
    PUSH EBX                            ; 00585596
    CALL FUN_00434320                   ; 00585597
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 0058559c
    PUSH 0x0                            ; 0058559f
    PUSH 0x5f650c                       ; 005855a1
    PUSH 0x9                            ; 005855a6
    PUSH 0x9                            ; 005855a8
    PUSH EBX                            ; 005855aa
    CALL FUN_00434320                   ; 005855ab
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005855b0
    PUSH 0x0                            ; 005855b3
    PUSH 0x5f651b                       ; 005855b5
    PUSH 0xa                            ; 005855ba
    PUSH 0x3                            ; 005855bc
    PUSH EBX                            ; 005855be
    CALL FUN_00434320                   ; 005855bf
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005855c4
    PUSH 0x0                            ; 005855c7
    PUSH 0x5f6533                       ; 005855c9
    PUSH 0x0                            ; 005855ce
    PUSH 0xa                            ; 005855d0
    PUSH EBX                            ; 005855d2
    CALL FUN_00434320                   ; 005855d3
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005855d8
    PUSH 0x0                            ; 005855db
    PUSH 0x5f6546                       ; 005855dd
    PUSH 0xe                            ; 005855e2
    PUSH 0x3                            ; 005855e4
    PUSH EBX                            ; 005855e6
    CALL FUN_00434320                   ; 005855e7
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 005855ec
    PUSH 0x0                            ; 005855ef
    PUSH 0x5f655f                       ; 005855f1
    PUSH 0xe                            ; 005855f6
    PUSH 0xf                            ; 005855f8
    PUSH EBX                            ; 005855fa
    CALL FUN_00434320                   ; 005855fb
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585600
    PUSH 0x0                            ; 00585603
    PUSH 0x5f656e                       ; 00585605
    PUSH 0x10                           ; 0058560a
    PUSH 0x1                            ; 0058560c
    PUSH EBX                            ; 0058560e
    CALL FUN_00434320                   ; 0058560f
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585614
    PUSH 0x0                            ; 00585617
    PUSH 0x5f658a                       ; 00585619
    PUSH 0xb                            ; 0058561e
    PUSH 0x3                            ; 00585620
    PUSH EBX                            ; 00585622
    CALL FUN_00434320                   ; 00585623
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 00585628
    PUSH 0x0                            ; 0058562b
    PUSH 0x5f65a2                       ; 0058562d
    PUSH 0x0                            ; 00585632
    PUSH 0xb                            ; 00585634
    PUSH EBX                            ; 00585636
    CALL FUN_00434320                   ; 00585637
        ;   XREF to: 00434320 (UNCONDITIONAL_CALL)  ; undefined FUN_00434320()
    ADD ESP,0x14                        ; 0058563c
    PUSH 0x5f65b5                       ; 0058563f
    LEA EAX,[EBX + 0x2ca0]              ; 00585644
    PUSH EAX                            ; 0058564a
    CALL FUN_00441de0                   ; 0058564b
        ;   XREF to: 00441de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441de0()
    ADD ESP,0x8                         ; 00585650
    MOV EAX,EBX                         ; 00585653
    MOV dword ptr [EBX + 0x20240],0x0   ; 00585655
    POP EBP                             ; 0058565f
    POP EBX                             ; 00585660
    RET                                 ; 00585661

