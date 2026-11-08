; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_00581360(uint param_1)
;
;
; XREF[1]:
;   FUN_004eaa60 at 004eac9f
;
; Referenced Globals:
;   undefined4 DAT_005d7cb1
;   undefined4 DAT_005d7cb5
;   undefined4 DAT_005d7cb7
;   undefined4 DAT_005d7cb9
;   undefined4 DAT_005d7cbb
;   undefined4 DAT_005d7cbd
;   undefined4 DAT_005d7cbf
;   undefined4 DAT_005d7cc1
;   undefined4 DAT_005d7cc3
;   undefined4 DAT_005d7cc5
;   undefined4 DAT_005d7cc7
;   undefined4 DAT_005d7cc9
;   undefined4 DAT_005d7ccb
;   TerminatedCString s_BackSpace_005d7ccd
;   undefined4 DAT_005d7cd7
;   ... and 87 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00581360
        ;   Label: FUN_00581360
    MOV EAX,EDX                         ; 00581364
    CMP EDX,0x34                        ; 00581366
    JNC 0x00581560                      ; 00581369
        ;   XREF to: 00581560 (CONDITIONAL_JUMP)  ; LAB_00581560
    CMP EDX,0x19                        ; 0058136f
    JNC 0x0058178a                      ; 00581372
        ;   XREF to: 0058178a (CONDITIONAL_JUMP)  ; LAB_0058178a
    CMP EDX,0xc                         ; 00581378
    JNC 0x00581872                      ; 0058137b
        ;   XREF to: 00581872 (CONDITIONAL_JUMP)  ; LAB_00581872
    CMP EDX,0x6                         ; 00581381
    JNC 0x005818db                      ; 00581384
        ;   XREF to: 005818db (CONDITIONAL_JUMP)  ; LAB_005818db
    CMP EDX,0x3                         ; 0058138a
    JNC 0x0058190a                      ; 0058138d
        ;   XREF to: 0058190a (CONDITIONAL_JUMP)  ; LAB_0058190a
    CMP EDX,0x1                         ; 00581393
    JC 0x00581628                       ; 00581396
        ;   XREF to: 00581628 (CONDITIONAL_JUMP)  ; LAB_00581628
    JA 0x005813a4                       ; 0058139c
        ;   XREF to: 005813a4 (CONDITIONAL_JUMP)  ; LAB_005813a4
    MOV EAX,0x5d7cb1                    ; 0058139e | DAT_005d7cb1
    RET                                 ; 005813a3
    MOV EAX,0x5d7cb5                    ; 005813a4 | DAT_005d7cb5
        ;   Label: LAB_005813a4
    RET                                 ; 005813a9
    MOV EAX,0x5d7cb7                    ; 005813aa | DAT_005d7cb7
        ;   Label: LAB_005813aa
    RET                                 ; 005813af
    MOV EAX,0x5d7cb9                    ; 005813b0 | DAT_005d7cb9
        ;   Label: LAB_005813b0
    RET                                 ; 005813b5
    MOV EAX,0x5d7cbd                    ; 005813b6 | DAT_005d7cbd
        ;   Label: LAB_005813b6
    RET                                 ; 005813bb
    MOV EAX,0x5d7cbf                    ; 005813bc | DAT_005d7cbf
        ;   Label: LAB_005813bc
    RET                                 ; 005813c1
    MOV EAX,0x5d7cc3                    ; 005813c2 | DAT_005d7cc3
        ;   Label: LAB_005813c2
    RET                                 ; 005813c7
    MOV EAX,0x5d7cc5                    ; 005813c8 | DAT_005d7cc5
        ;   Label: LAB_005813c8
    RET                                 ; 005813cd
    MOV EAX,0x5d7cc9                    ; 005813ce | DAT_005d7cc9
        ;   Label: LAB_005813ce
    RET                                 ; 005813d3
    MOV EAX,0x5d7ccb                    ; 005813d4 | DAT_005d7ccb
        ;   Label: LAB_005813d4
    RET                                 ; 005813d9
    MOV EAX,0x5d7cd7                    ; 005813da | DAT_005d7cd7
        ;   Label: LAB_005813da
    RET                                 ; 005813df
    MOV EAX,0x5d7cdb                    ; 005813e0 | DAT_005d7cdb
        ;   Label: LAB_005813e0
    RET                                 ; 005813e5
    MOV EAX,0x5d7cdf                    ; 005813e6 | DAT_005d7cdf
        ;   Label: LAB_005813e6
    RET                                 ; 005813eb
    MOV EAX,0x5d7ce1                    ; 005813ec | DAT_005d7ce1
        ;   Label: LAB_005813ec
    RET                                 ; 005813f1
    MOV EAX,0x5d7ce5                    ; 005813f2 | DAT_005d7ce5
        ;   Label: LAB_005813f2
    RET                                 ; 005813f7
    MOV EAX,0x5d7ce7                    ; 005813f8 | DAT_005d7ce7
        ;   Label: LAB_005813f8
    RET                                 ; 005813fd
    MOV EAX,0x5d7ce9                    ; 005813fe | DAT_005d7ce9
        ;   Label: LAB_005813fe
    RET                                 ; 00581403
    MOV EAX,0x5d7ced                    ; 00581404 | DAT_005d7ced
        ;   Label: LAB_00581404
    RET                                 ; 00581409
    MOV EAX,0x5d7cef                    ; 0058140a | DAT_005d7cef
        ;   Label: LAB_0058140a
    RET                                 ; 0058140f
    MOV EAX,0x5d7cf3                    ; 00581410 | = "Enter"
        ;   Label: LAB_00581410
    RET                                 ; 00581415
    MOV EAX,0x5d7cf9                    ; 00581416 | = "LeftCtrl"
        ;   Label: LAB_00581416
    RET                                 ; 0058141b
    MOV EAX,0x5d7d04                    ; 0058141c | DAT_005d7d04
        ;   Label: LAB_0058141c
    RET                                 ; 00581421
    MOV EAX,0x5d7d06                    ; 00581422 | DAT_005d7d06
        ;   Label: LAB_00581422
    RET                                 ; 00581427
    MOV EAX,0x5d7d0a                    ; 00581428 | DAT_005d7d0a
        ;   Label: LAB_00581428
    RET                                 ; 0058142d
    MOV EAX,0x5d7d0c                    ; 0058142e | DAT_005d7d0c
        ;   Label: LAB_0058142e
    RET                                 ; 00581433
    MOV EAX,0x5d7d0e                    ; 00581434 | DAT_005d7d0e
        ;   Label: LAB_00581434
    RET                                 ; 00581439
    MOV EAX,0x5d7d12                    ; 0058143a | DAT_005d7d12
        ;   Label: LAB_0058143a
    RET                                 ; 0058143f
    MOV EAX,0x5d7d14                    ; 00581440 | DAT_005d7d14
        ;   Label: LAB_00581440
    RET                                 ; 00581445
    MOV EAX,0x5d7d18                    ; 00581446 | DAT_005d7d18
        ;   Label: LAB_00581446
    RET                                 ; 0058144b
    MOV EAX,0x5d7d1a                    ; 0058144c | = "LeftShift"
        ;   Label: LAB_0058144c
    RET                                 ; 00581451
    MOV EAX,0x5d7d24                    ; 00581452 | DAT_005d7d24
        ;   Label: LAB_00581452
    RET                                 ; 00581457
    MOV EAX,0x5d7d26                    ; 00581458 | DAT_005d7d26
        ;   Label: LAB_00581458
    RET                                 ; 0058145d
    MOV EAX,0x5d7d28                    ; 0058145e | DAT_005d7d28
        ;   Label: LAB_0058145e
    RET                                 ; 00581463
    MOV EAX,0x5d7d2c                    ; 00581464 | DAT_005d7d2c
        ;   Label: LAB_00581464
    RET                                 ; 00581469
    MOV EAX,0x5d7d2e                    ; 0058146a | DAT_005d7d2e
        ;   Label: LAB_0058146a
    RET                                 ; 0058146f
    MOV EAX,0x5d7d30                    ; 00581470 | DAT_005d7d30
        ;   Label: LAB_00581470
    RET                                 ; 00581475
    MOV EAX,0x5d7d34                    ; 00581476 | DAT_005d7d34
        ;   Label: LAB_00581476
    RET                                 ; 0058147b
    MOV EAX,0x5d7d36                    ; 0058147c | DAT_005d7d36
        ;   Label: LAB_0058147c
    RET                                 ; 00581481
    MOV EAX,0x5d7d43                    ; 00581482 | = "NumPad*"
        ;   Label: LAB_00581482
    RET                                 ; 00581487
    MOV EAX,0x5d7d4b                    ; 00581488 | = "LeftAlt"
        ;   Label: LAB_00581488
    RET                                 ; 0058148d
    MOV EAX,0x5d7d59                    ; 0058148e | = "CapsLock"
        ;   Label: LAB_0058148e
    RET                                 ; 00581493
    MOV EAX,0x5d7d62                    ; 00581494 | DAT_005d7d62
        ;   Label: LAB_00581494
    RET                                 ; 00581499
    MOV EAX,0x5d7d68                    ; 0058149a | DAT_005d7d68
        ;   Label: LAB_0058149a
    RET                                 ; 0058149f
    MOV EAX,0x5d7d6b                    ; 005814a0 | DAT_005d7d6b
        ;   Label: LAB_005814a0
    RET                                 ; 005814a5
    MOV EAX,0x5d7d71                    ; 005814a6 | DAT_005d7d71
        ;   Label: LAB_005814a6
    RET                                 ; 005814ab
    MOV EAX,0x5d7d74                    ; 005814ac | DAT_005d7d74
        ;   Label: LAB_005814ac
    RET                                 ; 005814b1
    MOV EAX,0x5d7d7a                    ; 005814b2 | DAT_005d7d7a
        ;   Label: LAB_005814b2
    RET                                 ; 005814b7
    MOV EAX,0x5d7d7d                    ; 005814b8 | DAT_005d7d7d
        ;   Label: LAB_005814b8
    RET                                 ; 005814bd
    MOV EAX,0x5d7d87                    ; 005814be | = "ScrollLock"
        ;   Label: LAB_005814be
    RET                                 ; 005814c3
    MOV EAX,0x5d7d92                    ; 005814c4 | = "NumPad7"
        ;   Label: LAB_005814c4
    RET                                 ; 005814c9
    MOV EAX,0x5d7da2                    ; 005814ca | = "NumPad9"
        ;   Label: LAB_005814ca
    RET                                 ; 005814cf
    MOV EAX,0x5d7daa                    ; 005814d0 | = "NumPad-"
        ;   Label: LAB_005814d0
    RET                                 ; 005814d5
    MOV EAX,0x5d7db2                    ; 005814d6 | = "NumPad4"
        ;   Label: LAB_005814d6
    RET                                 ; 005814db
    MOV EAX,0x5d7dc2                    ; 005814dc | = "NumPad6"
        ;   Label: LAB_005814dc
    RET                                 ; 005814e1
    MOV EAX,0x5d7dca                    ; 005814e2 | = "NumPad+"
        ;   Label: LAB_005814e2
    RET                                 ; 005814e7
    MOV EAX,0x5d7dda                    ; 005814e8 | = "NumPad2"
        ;   Label: LAB_005814e8
    RET                                 ; 005814ed
    MOV EAX,0x5d7de2                    ; 005814ee | = "NumPad3"
        ;   Label: LAB_005814ee
    RET                                 ; 005814f3
    MOV EAX,0x5d7df2                    ; 005814f4 | = "NumPad."
        ;   Label: LAB_005814f4
    RET                                 ; 005814f9
    MOV EAX,0x5d7dfa                    ; 005814fa | DAT_005d7dfa
        ;   Label: LAB_005814fa
    RET                                 ; 005814ff
    MOV EAX,0x5d7dfe                    ; 00581500 | DAT_005d7dfe
        ;   Label: LAB_00581500
    RET                                 ; 00581505
    MOV EAX,0x5d7e02                    ; 00581506 | = "NumPadEnter"
        ;   Label: LAB_00581506
    RET                                 ; 0058150b
    MOV EAX,0x5d7e0e                    ; 0058150c | = "RightCtrl"
        ;   Label: LAB_0058150c
    RET                                 ; 00581511
    MOV EAX,0x5d7e18                    ; 00581512 | = "NumPad/"
        ;   Label: LAB_00581512
    RET                                 ; 00581517
    MOV EAX,0x5d7e20                    ; 00581518 | = "RightAlt"
        ;   Label: LAB_00581518
    RET                                 ; 0058151d
    MOV EAX,0x5d7e29                    ; 0058151e | = "NumLock"
        ;   Label: LAB_0058151e
    RET                                 ; 00581523
    MOV EAX,0x5d7e31                    ; 00581524 | DAT_005d7e31
        ;   Label: LAB_00581524
    RET                                 ; 00581529
    MOV EAX,0x5d7e39                    ; 0058152a | DAT_005d7e39
        ;   Label: LAB_0058152a
    RET                                 ; 0058152f
    MOV EAX,0x5d7e3e                    ; 00581530 | DAT_005d7e3e
        ;   Label: LAB_00581530
    RET                                 ; 00581535
    MOV EAX,0x5d7e43                    ; 00581536 | = "Right"
        ;   Label: LAB_00581536
    RET                                 ; 0058153b
    MOV EAX,0x5d7e49                    ; 0058153c | DAT_005d7e49
        ;   Label: LAB_0058153c
    RET                                 ; 00581541
    MOV EAX,0x5d7e4d                    ; 00581542 | DAT_005d7e4d
        ;   Label: LAB_00581542
    RET                                 ; 00581547
    MOV EAX,0x5d7e57                    ; 00581548 | DAT_005d7e57
        ;   Label: LAB_00581548
    RET                                 ; 0058154d
    MOV EAX,0x5d7e5b                    ; 0058154e | DAT_005d7e5b
        ;   Label: LAB_0058154e
    RET                                 ; 00581553
    MOV EAX,0x5d7e5f                    ; 00581554 | = "Left Mouse Button"
        ;   Label: LAB_00581554
    RET                                 ; 00581559
    MOV EAX,0x5d7e71                    ; 0058155a | = "Right Mouse Button"
        ;   Label: LAB_0058155a
    RET                                 ; 0058155f
    JBE 0x00581476                      ; 00581560
        ;   XREF to: 00581476 (CONDITIONAL_JUMP)  ; LAB_00581476
        ;   Label: LAB_00581560
    CMP EDX,0x4d                        ; 00581566
    JNC 0x00581595                      ; 00581569
        ;   XREF to: 00581595 (CONDITIONAL_JUMP)  ; LAB_00581595
    CMP EDX,0x40                        ; 0058156b
    JNC 0x005816dd                      ; 0058156e
        ;   XREF to: 005816dd (CONDITIONAL_JUMP)  ; LAB_005816dd
    CMP EDX,0x3a                        ; 00581574
    JNC 0x00581746                      ; 00581577
        ;   XREF to: 00581746 (CONDITIONAL_JUMP)  ; LAB_00581746
    CMP EDX,0x37                        ; 0058157d
    JNC 0x00581775                      ; 00581580
        ;   XREF to: 00581775 (CONDITIONAL_JUMP)  ; LAB_00581775
    CMP EDX,0x35                        ; 00581586
    JBE 0x0058147c                      ; 00581589
        ;   XREF to: 0058147c (CONDITIONAL_JUMP)  ; LAB_0058147c
    MOV EAX,0x5d7d38                    ; 0058158f | = "RightShift"
    RET                                 ; 00581594
    JBE 0x005814dc                      ; 00581595
        ;   XREF to: 005814dc (CONDITIONAL_JUMP)  ; LAB_005814dc
        ;   Label: LAB_00581595
    CMP EDX,0x145                       ; 0058159b
    JNC 0x005815c4                      ; 005815a1
        ;   XREF to: 005815c4 (CONDITIONAL_JUMP)  ; LAB_005815c4
    CMP EDX,0x53                        ; 005815a3
    JNC 0x00581668                      ; 005815a6
        ;   XREF to: 00581668 (CONDITIONAL_JUMP)  ; LAB_00581668
    CMP EDX,0x50                        ; 005815ac
    JNC 0x005816c8                      ; 005815af
        ;   XREF to: 005816c8 (CONDITIONAL_JUMP)  ; LAB_005816c8
    CMP EDX,0x4e                        ; 005815b5
    JBE 0x005814e2                      ; 005815b8
        ;   XREF to: 005814e2 (CONDITIONAL_JUMP)  ; LAB_005814e2
    MOV EAX,0x5d7dd2                    ; 005815be | = "NumPad1"
    RET                                 ; 005815c3
    JBE 0x0058151e                      ; 005815c4
        ;   XREF to: 0058151e (CONDITIONAL_JUMP)  ; LAB_0058151e
        ;   Label: LAB_005815c4
    CMP EDX,0x14f                       ; 005815ca
    JNC 0x005815ee                      ; 005815d0
        ;   XREF to: 005815ee (CONDITIONAL_JUMP)  ; LAB_005815ee
    CMP EDX,0x149                       ; 005815d2
    JNC 0x00581642                      ; 005815d8
        ;   XREF to: 00581642 (CONDITIONAL_JUMP)  ; LAB_00581642
    CMP EDX,0x147                       ; 005815da
    JC 0x00581628                       ; 005815e0
        ;   XREF to: 00581628 (CONDITIONAL_JUMP)  ; LAB_00581628
    JBE 0x00581524                      ; 005815e2
        ;   XREF to: 00581524 (CONDITIONAL_JUMP)  ; LAB_00581524
    MOV EAX,0x5d7e36                    ; 005815e8 | DAT_005d7e36
    RET                                 ; 005815ed
    JBE 0x0058153c                      ; 005815ee
        ;   XREF to: 0058153c (CONDITIONAL_JUMP)  ; LAB_0058153c
        ;   Label: LAB_005815ee
    CMP EDX,0x152                       ; 005815f4
    JNC 0x0058160e                      ; 005815fa
        ;   XREF to: 0058160e (CONDITIONAL_JUMP)  ; LAB_0058160e
    CMP EDX,0x150                       ; 005815fc
    JBE 0x00581542                      ; 00581602
        ;   XREF to: 00581542 (CONDITIONAL_JUMP)  ; LAB_00581542
    MOV EAX,0x5d7e52                    ; 00581608 | DAT_005d7e52
    RET                                 ; 0058160d
    JBE 0x00581548                      ; 0058160e
        ;   XREF to: 00581548 (CONDITIONAL_JUMP)  ; LAB_00581548
        ;   Label: LAB_0058160e
    CMP EDX,0x200                       ; 00581614
    JNC 0x0058162e                      ; 0058161a
        ;   XREF to: 0058162e (CONDITIONAL_JUMP)  ; LAB_0058162e
    CMP EDX,0x153                       ; 0058161c
    JZ 0x0058154e                       ; 00581622
        ;   XREF to: 0058154e (CONDITIONAL_JUMP)  ; LAB_0058154e
    MOV EAX,0x5d7e84                    ; 00581628 | = "(invalid key)"
        ;   Label: LAB_00581628
    RET                                 ; 0058162d
    JBE 0x00581554                      ; 0058162e
        ;   XREF to: 00581554 (CONDITIONAL_JUMP)  ; LAB_00581554
        ;   Label: LAB_0058162e
    CMP EDX,0x201                       ; 00581634
    JZ 0x0058155a                       ; 0058163a
        ;   XREF to: 0058155a (CONDITIONAL_JUMP)  ; LAB_0058155a
    JMP 0x00581628                      ; 00581640
        ;   XREF to: 00581628 (UNCONDITIONAL_JUMP)  ; LAB_00581628
    JBE 0x0058152a                      ; 00581642
        ;   XREF to: 0058152a (CONDITIONAL_JUMP)  ; LAB_0058152a
        ;   Label: LAB_00581642
    CMP EDX,0x14b                       ; 00581648
    JC 0x00581628                       ; 0058164e
        ;   XREF to: 00581628 (CONDITIONAL_JUMP)  ; LAB_00581628
    JBE 0x00581530                      ; 00581650
        ;   XREF to: 00581530 (CONDITIONAL_JUMP)  ; LAB_00581530
    CMP EDX,0x14d                       ; 00581656
    JZ 0x00581536                       ; 0058165c
        ;   XREF to: 00581536 (CONDITIONAL_JUMP)  ; LAB_00581536
    MOV EAX,0x5d7e84                    ; 00581662 | = "(invalid key)"
    RET                                 ; 00581667
    JBE 0x005814f4                      ; 00581668
        ;   XREF to: 005814f4 (CONDITIONAL_JUMP)  ; LAB_005814f4
        ;   Label: LAB_00581668
    CMP EDX,0x11c                       ; 0058166e
    JNC 0x00581690                      ; 00581674
        ;   XREF to: 00581690 (CONDITIONAL_JUMP)  ; LAB_00581690
    CMP EDX,0x57                        ; 00581676
    JC 0x00581628                       ; 00581679
        ;   XREF to: 00581628 (CONDITIONAL_JUMP)  ; LAB_00581628
    JBE 0x005814fa                      ; 0058167b
        ;   XREF to: 005814fa (CONDITIONAL_JUMP)  ; LAB_005814fa
    CMP EDX,0x58                        ; 00581681
    JZ 0x00581500                       ; 00581684
        ;   XREF to: 00581500 (CONDITIONAL_JUMP)  ; LAB_00581500
    MOV EAX,0x5d7e84                    ; 0058168a | = "(invalid key)"
    RET                                 ; 0058168f
    JBE 0x00581506                      ; 00581690
        ;   XREF to: 00581506 (CONDITIONAL_JUMP)  ; LAB_00581506
        ;   Label: LAB_00581690
    CMP EDX,0x135                       ; 00581696
    JNC 0x005816b0                      ; 0058169c
        ;   XREF to: 005816b0 (CONDITIONAL_JUMP)  ; LAB_005816b0
    CMP EDX,0x11d                       ; 0058169e
    JZ 0x0058150c                       ; 005816a4
        ;   XREF to: 0058150c (CONDITIONAL_JUMP)  ; LAB_0058150c
    MOV EAX,0x5d7e84                    ; 005816aa | = "(invalid key)"
    RET                                 ; 005816af
    JBE 0x00581512                      ; 005816b0
        ;   XREF to: 00581512 (CONDITIONAL_JUMP)  ; LAB_00581512
        ;   Label: LAB_005816b0
    CMP EDX,0x138                       ; 005816b6
    JZ 0x00581518                       ; 005816bc
        ;   XREF to: 00581518 (CONDITIONAL_JUMP)  ; LAB_00581518
    MOV EAX,0x5d7e84                    ; 005816c2 | = "(invalid key)"
    RET                                 ; 005816c7
    JBE 0x005814e8                      ; 005816c8
        ;   XREF to: 005814e8 (CONDITIONAL_JUMP)  ; LAB_005814e8
        ;   Label: LAB_005816c8
    CMP EDX,0x51                        ; 005816ce
    JBE 0x005814ee                      ; 005816d1
        ;   XREF to: 005814ee (CONDITIONAL_JUMP)  ; LAB_005814ee
    MOV EAX,0x5d7dea                    ; 005816d7 | = "NumPad0"
    RET                                 ; 005816dc
    JBE 0x005814a6                      ; 005816dd
        ;   XREF to: 005814a6 (CONDITIONAL_JUMP)  ; LAB_005814a6
        ;   Label: LAB_005816dd
    CMP EDX,0x46                        ; 005816e3
    JNC 0x005816fc                      ; 005816e6
        ;   XREF to: 005816fc (CONDITIONAL_JUMP)  ; LAB_005816fc
    CMP EDX,0x43                        ; 005816e8
    JNC 0x00581731                      ; 005816eb
        ;   XREF to: 00581731 (CONDITIONAL_JUMP)  ; LAB_00581731
    CMP EDX,0x41                        ; 005816ed
    JBE 0x005814ac                      ; 005816f0
        ;   XREF to: 005814ac (CONDITIONAL_JUMP)  ; LAB_005814ac
    MOV EAX,0x5d7d77                    ; 005816f6 | DAT_005d7d77
    RET                                 ; 005816fb
    JBE 0x005814be                      ; 005816fc
        ;   XREF to: 005814be (CONDITIONAL_JUMP)  ; LAB_005814be
        ;   Label: LAB_005816fc
    CMP EDX,0x49                        ; 00581702
    JNC 0x00581716                      ; 00581705
        ;   XREF to: 00581716 (CONDITIONAL_JUMP)  ; LAB_00581716
    CMP EDX,0x47                        ; 00581707
    JBE 0x005814c4                      ; 0058170a
        ;   XREF to: 005814c4 (CONDITIONAL_JUMP)  ; LAB_005814c4
    MOV EAX,0x5d7d9a                    ; 00581710 | = "NumPad8"
    RET                                 ; 00581715
    JBE 0x005814ca                      ; 00581716
        ;   XREF to: 005814ca (CONDITIONAL_JUMP)  ; LAB_005814ca
        ;   Label: LAB_00581716
    CMP EDX,0x4b                        ; 0058171c
    JC 0x005814d0                       ; 0058171f
        ;   XREF to: 005814d0 (CONDITIONAL_JUMP)  ; LAB_005814d0
    JBE 0x005814d6                      ; 00581725
        ;   XREF to: 005814d6 (CONDITIONAL_JUMP)  ; LAB_005814d6
    MOV EAX,0x5d7dba                    ; 0058172b | = "NumPad5"
    RET                                 ; 00581730
    JBE 0x005814b2                      ; 00581731
        ;   XREF to: 005814b2 (CONDITIONAL_JUMP)  ; LAB_005814b2
        ;   Label: LAB_00581731
    CMP EDX,0x44                        ; 00581737
    JBE 0x005814b8                      ; 0058173a
        ;   XREF to: 005814b8 (CONDITIONAL_JUMP)  ; LAB_005814b8
    MOV EAX,0x5d7d81                    ; 00581740 | = "Pause"
    RET                                 ; 00581745
    JBE 0x0058148e                      ; 00581746
        ;   XREF to: 0058148e (CONDITIONAL_JUMP)  ; LAB_0058148e
        ;   Label: LAB_00581746
    CMP EDX,0x3d                        ; 0058174c
    JNC 0x00581760                      ; 0058174f
        ;   XREF to: 00581760 (CONDITIONAL_JUMP)  ; LAB_00581760
    CMP EDX,0x3b                        ; 00581751
    JBE 0x00581494                      ; 00581754
        ;   XREF to: 00581494 (CONDITIONAL_JUMP)  ; LAB_00581494
    MOV EAX,0x5d7d65                    ; 0058175a | DAT_005d7d65
    RET                                 ; 0058175f
    JBE 0x0058149a                      ; 00581760
        ;   XREF to: 0058149a (CONDITIONAL_JUMP)  ; LAB_0058149a
        ;   Label: LAB_00581760
    CMP EDX,0x3e                        ; 00581766
    JBE 0x005814a0                      ; 00581769
        ;   XREF to: 005814a0 (CONDITIONAL_JUMP)  ; LAB_005814a0
    MOV EAX,0x5d7d6e                    ; 0058176f | DAT_005d7d6e
    RET                                 ; 00581774
    JBE 0x00581482                      ; 00581775
        ;   XREF to: 00581482 (CONDITIONAL_JUMP)  ; LAB_00581482
        ;   Label: LAB_00581775
    CMP EDX,0x38                        ; 0058177b
    JBE 0x00581488                      ; 0058177e
        ;   XREF to: 00581488 (CONDITIONAL_JUMP)  ; LAB_00581488
    MOV EAX,0x5d7d53                    ; 00581784 | = "Space"
    RET                                 ; 00581789
    JBE 0x00581404                      ; 0058178a
        ;   XREF to: 00581404 (CONDITIONAL_JUMP)  ; LAB_00581404
        ;   Label: LAB_0058178a
    CMP EDX,0x26                        ; 00581790
    JNC 0x005817b6                      ; 00581793
        ;   XREF to: 005817b6 (CONDITIONAL_JUMP)  ; LAB_005817b6
    CMP EDX,0x1f                        ; 00581795
    JNC 0x00581828                      ; 00581798
        ;   XREF to: 00581828 (CONDITIONAL_JUMP)  ; LAB_00581828
    CMP EDX,0x1c                        ; 0058179e
    JNC 0x0058185d                      ; 005817a1
        ;   XREF to: 0058185d (CONDITIONAL_JUMP)  ; LAB_0058185d
    CMP EDX,0x1a                        ; 005817a7
    JBE 0x0058140a                      ; 005817aa
        ;   XREF to: 0058140a (CONDITIONAL_JUMP)  ; LAB_0058140a
    MOV EAX,0x5d7cf1                    ; 005817b0 | DAT_005d7cf1
    RET                                 ; 005817b5
    JBE 0x0058143a                      ; 005817b6
        ;   XREF to: 0058143a (CONDITIONAL_JUMP)  ; LAB_0058143a
        ;   Label: LAB_005817b6
    CMP EDX,0x2d                        ; 005817bc
    JNC 0x005817d5                      ; 005817bf
        ;   XREF to: 005817d5 (CONDITIONAL_JUMP)  ; LAB_005817d5
    CMP EDX,0x29                        ; 005817c1
    JNC 0x0058180a                      ; 005817c4
        ;   XREF to: 0058180a (CONDITIONAL_JUMP)  ; LAB_0058180a
    CMP EDX,0x27                        ; 005817c6
    JBE 0x00581440                      ; 005817c9
        ;   XREF to: 00581440 (CONDITIONAL_JUMP)  ; LAB_00581440
    MOV EAX,0x5d7d16                    ; 005817cf | DAT_005d7d16
    RET                                 ; 005817d4
    JBE 0x00581458                      ; 005817d5
        ;   XREF to: 00581458 (CONDITIONAL_JUMP)  ; LAB_00581458
        ;   Label: LAB_005817d5
    CMP EDX,0x30                        ; 005817db
    JNC 0x005817ef                      ; 005817de
        ;   XREF to: 005817ef (CONDITIONAL_JUMP)  ; LAB_005817ef
    CMP EDX,0x2e                        ; 005817e0
    JBE 0x0058145e                      ; 005817e3
        ;   XREF to: 0058145e (CONDITIONAL_JUMP)  ; LAB_0058145e
    MOV EAX,0x5d7d2a                    ; 005817e9 | DAT_005d7d2a
    RET                                 ; 005817ee
    JBE 0x00581464                      ; 005817ef
        ;   XREF to: 00581464 (CONDITIONAL_JUMP)  ; LAB_00581464
        ;   Label: LAB_005817ef
    CMP EDX,0x32                        ; 005817f5
    JC 0x0058146a                       ; 005817f8
        ;   XREF to: 0058146a (CONDITIONAL_JUMP)  ; LAB_0058146a
    JBE 0x00581470                      ; 005817fe
        ;   XREF to: 00581470 (CONDITIONAL_JUMP)  ; LAB_00581470
    MOV EAX,0x5d7d32                    ; 00581804 | DAT_005d7d32
    RET                                 ; 00581809
    JBE 0x00581446                      ; 0058180a
        ;   XREF to: 00581446 (CONDITIONAL_JUMP)  ; LAB_00581446
        ;   Label: LAB_0058180a
    CMP EDX,0x2a                        ; 00581810
    JBE 0x0058144c                      ; 00581813
        ;   XREF to: 0058144c (CONDITIONAL_JUMP)  ; LAB_0058144c
    CMP EDX,0x2c                        ; 00581819
    JZ 0x00581452                       ; 0058181c
        ;   XREF to: 00581452 (CONDITIONAL_JUMP)  ; LAB_00581452
    MOV EAX,0x5d7e84                    ; 00581822 | = "(invalid key)"
    RET                                 ; 00581827
    JBE 0x0058141c                      ; 00581828
        ;   XREF to: 0058141c (CONDITIONAL_JUMP)  ; LAB_0058141c
        ;   Label: LAB_00581828
    CMP EDX,0x22                        ; 0058182e
    JNC 0x00581842                      ; 00581831
        ;   XREF to: 00581842 (CONDITIONAL_JUMP)  ; LAB_00581842
    CMP EDX,0x20                        ; 00581833
    JBE 0x00581422                      ; 00581836
        ;   XREF to: 00581422 (CONDITIONAL_JUMP)  ; LAB_00581422
    MOV EAX,0x5d7d08                    ; 0058183c | DAT_005d7d08
    RET                                 ; 00581841
    JBE 0x00581428                      ; 00581842
        ;   XREF to: 00581428 (CONDITIONAL_JUMP)  ; LAB_00581428
        ;   Label: LAB_00581842
    CMP EDX,0x24                        ; 00581848
    JC 0x0058142e                       ; 0058184b
        ;   XREF to: 0058142e (CONDITIONAL_JUMP)  ; LAB_0058142e
    JBE 0x00581434                      ; 00581851
        ;   XREF to: 00581434 (CONDITIONAL_JUMP)  ; LAB_00581434
    MOV EAX,0x5d7d10                    ; 00581857 | DAT_005d7d10
    RET                                 ; 0058185c
    JBE 0x00581410                      ; 0058185d
        ;   XREF to: 00581410 (CONDITIONAL_JUMP)  ; LAB_00581410
        ;   Label: LAB_0058185d
    CMP EDX,0x1d                        ; 00581863
    JBE 0x00581416                      ; 00581866
        ;   XREF to: 00581416 (CONDITIONAL_JUMP)  ; LAB_00581416
    MOV EAX,0x5d7d02                    ; 0058186c | DAT_005d7d02
    RET                                 ; 00581871
    JBE 0x005813ce                      ; 00581872
        ;   XREF to: 005813ce (CONDITIONAL_JUMP)  ; LAB_005813ce
        ;   Label: LAB_00581872
    CMP EDX,0x12                        ; 00581878
    JNC 0x00581891                      ; 0058187b
        ;   XREF to: 00581891 (CONDITIONAL_JUMP)  ; LAB_00581891
    CMP EDX,0xf                         ; 0058187d
    JNC 0x005818c6                      ; 00581880
        ;   XREF to: 005818c6 (CONDITIONAL_JUMP)  ; LAB_005818c6
    CMP EDX,0xd                         ; 00581882
    JBE 0x005813d4                      ; 00581885
        ;   XREF to: 005813d4 (CONDITIONAL_JUMP)  ; LAB_005813d4
    MOV EAX,0x5d7ccd                    ; 0058188b | = "BackSpace"
    RET                                 ; 00581890
    JBE 0x005813e6                      ; 00581891
        ;   XREF to: 005813e6 (CONDITIONAL_JUMP)  ; LAB_005813e6
        ;   Label: LAB_00581891
    CMP EDX,0x15                        ; 00581897
    JNC 0x005818ab                      ; 0058189a
        ;   XREF to: 005818ab (CONDITIONAL_JUMP)  ; LAB_005818ab
    CMP EDX,0x13                        ; 0058189c
    JBE 0x005813ec                      ; 0058189f
        ;   XREF to: 005813ec (CONDITIONAL_JUMP)  ; LAB_005813ec
    MOV EAX,0x5d7ce3                    ; 005818a5 | DAT_005d7ce3
    RET                                 ; 005818aa
    JBE 0x005813f2                      ; 005818ab
        ;   XREF to: 005813f2 (CONDITIONAL_JUMP)  ; LAB_005813f2
        ;   Label: LAB_005818ab
    CMP EDX,0x17                        ; 005818b1
    JC 0x005813f8                       ; 005818b4
        ;   XREF to: 005813f8 (CONDITIONAL_JUMP)  ; LAB_005813f8
    JBE 0x005813fe                      ; 005818ba
        ;   XREF to: 005813fe (CONDITIONAL_JUMP)  ; LAB_005813fe
    MOV EAX,0x5d7ceb                    ; 005818c0 | DAT_005d7ceb
    RET                                 ; 005818c5
    JBE 0x005813da                      ; 005818c6
        ;   XREF to: 005813da (CONDITIONAL_JUMP)  ; LAB_005813da
        ;   Label: LAB_005818c6
    CMP EDX,0x10                        ; 005818cc
    JBE 0x005813e0                      ; 005818cf
        ;   XREF to: 005813e0 (CONDITIONAL_JUMP)  ; LAB_005813e0
    MOV EAX,0x5d7cdd                    ; 005818d5 | DAT_005d7cdd
    RET                                 ; 005818da
    JBE 0x005813b6                      ; 005818db
        ;   XREF to: 005813b6 (CONDITIONAL_JUMP)  ; LAB_005813b6
        ;   Label: LAB_005818db
    CMP EDX,0x9                         ; 005818e1
    JNC 0x005818f5                      ; 005818e4
        ;   XREF to: 005818f5 (CONDITIONAL_JUMP)  ; LAB_005818f5
    CMP EDX,0x7                         ; 005818e6
    JBE 0x005813bc                      ; 005818e9
        ;   XREF to: 005813bc (CONDITIONAL_JUMP)  ; LAB_005813bc
    MOV EAX,0x5d7cc1                    ; 005818ef | DAT_005d7cc1
    RET                                 ; 005818f4
    JBE 0x005813c2                      ; 005818f5
        ;   XREF to: 005813c2 (CONDITIONAL_JUMP)  ; LAB_005813c2
        ;   Label: LAB_005818f5
    CMP EDX,0xa                         ; 005818fb
    JBE 0x005813c8                      ; 005818fe
        ;   XREF to: 005813c8 (CONDITIONAL_JUMP)  ; LAB_005813c8
    MOV EAX,0x5d7cc7                    ; 00581904 | DAT_005d7cc7
    RET                                 ; 00581909
    JBE 0x005813aa                      ; 0058190a
        ;   XREF to: 005813aa (CONDITIONAL_JUMP)  ; LAB_005813aa
        ;   Label: LAB_0058190a
    CMP EDX,0x4                         ; 00581910
    JBE 0x005813b0                      ; 00581913
        ;   XREF to: 005813b0 (CONDITIONAL_JUMP)  ; LAB_005813b0
    MOV EAX,0x5d7cbb                    ; 00581919 | DAT_005d7cbb
    RET                                 ; 0058191e

