; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005862e0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_0052d0e0 at 0052d320
;   FUN_0052ddf0 at 0052e54c
;   FUN_0052f2a0 at 0052f61d
;
; Referenced Globals:
;   undefined4 DAT_005edef6
;   undefined4 DAT_005edefe
;   undefined4 DAT_005edf06
;   undefined4 DAT_005edf0e
;   undefined4 DAT_005fdc5c
;   undefined4 DAT_0060b280
;   undefined4 DAT_00616494
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_0061e524
;   undefined4 DAT_0061e528
;   undefined4 DAT_0061e52c
;   undefined4 DAT_0061e6ac
;   undefined4 DAT_0061e6c8
;   undefined4 DAT_0061e6cc
;   undefined4 DAT_0061e6d4
;   ... and 27 more
;
; Called Functions:
;   FUN_004696f0
;   FUN_0046a030
;   FUN_0046a270
;   FUN_0046ac20
;   FUN_0046b2b0
;   FUN_0046b7e0
;   FUN_0046b8e0
;   FUN_0046ca00
;   FUN_00531a90
;   FUN_0055d723
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005862e0
        ;   Label: FUN_005862e0
    PUSH ESI                            ; 005862e1
    PUSH EDI                            ; 005862e2
    PUSH EBP                            ; 005862e3
    SUB ESP,0x78                        ; 005862e4
    MOV EBP,dword ptr [ESP + 0x8c]      ; 005862e7
    TEST dword ptr [EBP + 0x4],0x7fffffff ; 005862ee
    JZ 0x0058684d                       ; 005862f5
        ;   XREF to: 0058684d (CONDITIONAL_JUMP)  ; LAB_0058684d
    MOV ECX,dword ptr [0x026537b4]      ; 005862fb | DAT_026537b4
    ADD ECX,dword ptr [0x01c2a370]      ; 00586301 | DAT_01c2a370
    MOV EBX,dword ptr [0x0061e528]      ; 00586307 | DAT_0061e528
    MOV dword ptr [0x026537b4],ECX      ; 0058630d | DAT_026537b4
    CMP ECX,EBX                         ; 00586313
    JG 0x00586855                       ; 00586315
        ;   XREF to: 00586855 (CONDITIONAL_JUMP)  ; LAB_00586855
    MOV EAX,[0x00616494]                ; 0058631b | DAT_00616494
        ;   Label: LAB_0058631b
    MOV EAX,dword ptr [EAX + 0x284]     ; 00586320 | DAT_01cb6b84
    MOV dword ptr [ESP + 0x58],EAX      ; 00586326
    FLD float ptr [0x026537a0]          ; 0058632a | DAT_026537a0
    FMUL float ptr [ESP + 0x58]         ; 00586330
    FLD float ptr [0x026537a4]          ; 00586334 | DAT_026537a4
    FMUL float ptr [ESP + 0x58]         ; 0058633a
    FXCH                                ; 0058633e
    FLD double ptr [0x005edef6]         ; 00586340 | DAT_005edef6
    FXCH                                ; 00586346
    FMUL ST1                            ; 00586348
    FXCH ST2                            ; 0058634a
    FMULP                               ; 0058634c
    FILD dword ptr [0x0265b7ec]         ; 0058634e | DAT_0265b7ec
    FILD dword ptr [0x0265b7f0]         ; 00586354 | DAT_0265b7f0
    FXCH ST3                            ; 0058635a
    FADD ST0,ST1                        ; 0058635c
    FXCH ST2                            ; 0058635e
    FADD ST0,ST3                        ; 00586360
    FXCH ST2                            ; 00586362
    FSTP ST1                            ; 00586364
    FXCH                                ; 00586366
    FSTP ST2                            ; 00586368
    CALL FUN_005b7ff0                   ; 0058636a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0058636f
    CALL FUN_005b7ff0                   ; 00586371
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 00586376
    FISTP dword ptr [0x0265b7ec]        ; 00586378 | DAT_0265b7ec
    MOV ECX,dword ptr [0x0265b7ec]      ; 0058637e | DAT_0265b7ec
    FISTP dword ptr [0x0265b7f0]        ; 00586384 | DAT_0265b7f0
    CMP ECX,0x1000000                   ; 0058638a
    JL 0x0058639e                       ; 00586390
        ;   XREF to: 0058639e (CONDITIONAL_JUMP)  ; LAB_0058639e
    LEA EBX,[ECX + 0xff000000]          ; 00586392
    MOV dword ptr [0x0265b7ec],EBX      ; 00586398 | DAT_0265b7ec
    CMP dword ptr [0x0265b7ec],0x0      ; 0058639e | DAT_0265b7ec
        ;   Label: LAB_0058639e
    JL 0x00586882                       ; 005863a5
        ;   XREF to: 00586882 (CONDITIONAL_JUMP)  ; LAB_00586882
    MOV EDI,dword ptr [0x0265b7f0]      ; 005863ab | DAT_0265b7f0
        ;   Label: LAB_005863ab
    CMP EDI,0x1000000                   ; 005863b1
    JL 0x005863c4                       ; 005863b7
        ;   XREF to: 005863c4 (CONDITIONAL_JUMP)  ; LAB_005863c4
    LEA EAX,[EDI + 0xff000000]          ; 005863b9
    MOV [0x0265b7f0],EAX                ; 005863bf | DAT_0265b7f0
    CMP dword ptr [0x0265b7f0],0x0      ; 005863c4 | DAT_0265b7f0
        ;   Label: LAB_005863c4
    JL 0x0058688d                       ; 005863cb
        ;   XREF to: 0058688d (CONDITIONAL_JUMP)  ; LAB_0058688d
    MOV EAX,[0x0265b7ec]                ; 005863d1 | DAT_0265b7ec
        ;   Label: LAB_005863d1
    MOV [0x0061e6c8],EAX                ; 005863d6 | DAT_0061e6c8
    MOV EAX,[0x0265b7f0]                ; 005863db | DAT_0265b7f0
    MOV [0x0061e6cc],EAX                ; 005863e0 | DAT_0061e6cc
    MOV EAX,[0x0265b7ec]                ; 005863e5 | DAT_0265b7ec
    ADD EAX,0x1000000                   ; 005863ea
    MOV [0x0061e6d4],EAX                ; 005863ef | DAT_0061e6d4
    MOV EAX,[0x0265b7f0]                ; 005863f4 | DAT_0265b7f0
    MOV [0x0061e6d8],EAX                ; 005863f9 | DAT_0061e6d8
    MOV EAX,[0x0061e6d4]                ; 005863fe | DAT_0061e6d4
    MOV [0x0061e6e0],EAX                ; 00586403 | DAT_0061e6e0
    MOV EAX,[0x0265b7f0]                ; 00586408 | DAT_0265b7f0
    ADD EAX,0x1000000                   ; 0058640d
    MOV [0x0061e6e4],EAX                ; 00586412 | DAT_0061e6e4
    MOV EAX,[0x0265b7ec]                ; 00586417 | DAT_0265b7ec
    MOV EDX,0xffff                      ; 0058641c
    MOV [0x0061e6ec],EAX                ; 00586421 | DAT_0061e6ec
    MOV EAX,[0x0061e6e4]                ; 00586426 | DAT_0061e6e4
    MOV EBX,dword ptr [0x0061e528]      ; 0058642b | DAT_0061e528
    MOV [0x0061e6f0],EAX                ; 00586431 | DAT_0061e6f0
    MOV EAX,[0x026537b4]                ; 00586436 | DAT_026537b4
    IMUL EDX                            ; 0058643b
    IDIV EBX                            ; 0058643d
    MOV [0x0265b7e4],EAX                ; 0058643f | DAT_0265b7e4
    CMP EAX,0xffff                      ; 00586444
    JLE 0x00586898                      ; 00586449
        ;   XREF to: 00586898 (CONDITIONAL_JUMP)  ; LAB_00586898
    MOV dword ptr [0x0265b7e4],0xffff   ; 0058644f | DAT_0265b7e4
    MOV EDX,dword ptr [0x026537b8]      ; 00586459 | DAT_026537b8
        ;   Label: LAB_00586459
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058645f
    SUB EAX,EDX                         ; 00586466
    SHL EAX,0x3                         ; 00586468
    ADD EAX,0x61e52c                    ; 0058646b | DAT_0061e52c
    PUSH EAX                            ; 00586470
    MOV ESI,dword ptr [0x0060b280]      ; 00586471 | DAT_0060b280
    PUSH ESI                            ; 00586477 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 00586478
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    MOV EAX,[0x00616494]                ; 0058647d | DAT_00616494 | DAT_01cb6900
    FLD float ptr [EAX + 0x284]         ; 00586482 | DAT_01cb6b84
    FMUL float ptr [0x005edefe]         ; 00586488 | DAT_005edefe
    FMUL double ptr [0x005edf06]        ; 0058648e | DAT_005edf06
    FMUL double ptr [0x005edf0e]        ; 00586494 | DAT_005edf0e
    XOR EDI,EDI                         ; 0058649a
    MOV EDX,dword ptr [0x026537bc]      ; 0058649c | DAT_026537bc
    ADD ESP,0x8                         ; 005864a2
    MOV dword ptr [0x01c38aec],EDI      ; 005864a5 | DAT_01c38aec
    FLD float ptr [0x0265b7e8]          ; 005864ab | DAT_0265b7e8
    FXCH                                ; 005864b1
    FADD ST0,ST1                        ; 005864b3
    MOV dword ptr [ESP + 0x64],EDI      ; 005864b5
    FSTP ST1                            ; 005864b9
    FSTP float ptr [0x0265b7e8]         ; 005864bb | DAT_0265b7e8
    TEST EDX,EDX                        ; 005864c1
    JLE 0x0058684d                      ; 005864c3
        ;   XREF to: 0058684d (CONDITIONAL_JUMP)  ; LAB_0058684d
    MOV dword ptr [ESP + 0x68],EDI      ; 005864c9
    MOV EAX,dword ptr [ESP + 0x68]      ; 005864cd
        ;   Label: LAB_005864cd
    MOV EAX,dword ptr [EAX + 0x26537c0] ; 005864d1 | DAT_026537c0
    MOV dword ptr [ESP + 0x6c],EAX      ; 005864d7
    MOV EAX,dword ptr [ESP + 0x68]      ; 005864db
    MOV EAX,dword ptr [EAX + 0x26577c0] ; 005864df | DAT_026577c0
    MOV dword ptr [ESP + 0x70],EAX      ; 005864e5
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005864e9
    MOV dword ptr [ESP + 0x74],EAX      ; 005864ed
    FILD dword ptr [ESP + 0x74]         ; 005864f1
    FST float ptr [ESP + 0x5c]          ; 005864f5
    FMUL float ptr [EBP + 0x8]          ; 005864f9
    FSTP float ptr [ESP + 0xc]          ; 005864fc
    MOV EAX,dword ptr [EBP + 0x4]       ; 00586500
    MOV dword ptr [ESP + 0x10],EAX      ; 00586503
    MOV EAX,dword ptr [ESP + 0x70]      ; 00586507
    MOV dword ptr [ESP + 0x74],EAX      ; 0058650b
    FILD dword ptr [ESP + 0x74]         ; 0058650f
    FST float ptr [ESP + 0x60]          ; 00586513
    FMUL float ptr [EBP + 0x8]          ; 00586517
    LEA EDI,[ESP + 0x3c]                ; 0058651a
    LEA ESI,[ESP + 0xc]                 ; 0058651e
    FLD float ptr [ESP + 0xc]           ; 00586522
    FADD float ptr [0x026537a8]         ; 00586526 | DAT_026537a8
    FLD float ptr [ESP + 0x10]          ; 0058652c
    LEA EAX,[ESP + 0xc]                 ; 00586530
    FADD float ptr [0x026537ac]         ; 00586534 | DAT_026537ac
    PUSH EAX                            ; 0058653a
    MOV EAX,[0x0060b280]                ; 0058653b | DAT_0060b280
    FXCH ST2                            ; 00586540
    FSTP float ptr [ESP + 0x18]         ; 00586542
    FSTP float ptr [ESP + 0x10]         ; 00586546
    FSTP float ptr [ESP + 0x14]         ; 0058654a
    FLD float ptr [ESP + 0x18]          ; 0058654e
    FADD float ptr [0x026537b0]         ; 00586552 | DAT_026537b0
    PUSH EAX                            ; 00586558 | DAT_01ba5c50
    FSTP float ptr [ESP + 0x1c]         ; 00586559
    CALL FUN_0046b2b0                   ; 0058655d
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 00586562
    XOR EDX,EDX                         ; 00586565
    MOVSD ES:EDI,ESI                    ; 00586567
    MOVSD ES:EDI,ESI                    ; 00586568
    MOVSD ES:EDI,ESI                    ; 00586569
    MOV dword ptr [ESP + 0xc],EDX       ; 0058656a
    MOV dword ptr [ESP + 0x10],EDX      ; 0058656e
    MOV dword ptr [ESP + 0x14],EDX      ; 00586572
    CMP dword ptr [EBP],0x0             ; 00586576
    JZ 0x005865a8                       ; 0058657a
        ;   XREF to: 005865a8 (CONDITIONAL_JUMP)  ; LAB_005865a8
    FLD float ptr [0x005edefe]          ; 0058657c | DAT_005edefe
    FLD float ptr [ESP + 0x60]          ; 00586582
    FMUL ST1                            ; 00586586
    FMUL double ptr [0x005edf06]        ; 00586588 | DAT_005edf06
    FLD float ptr [ESP + 0x5c]          ; 0058658e
    FMULP ST2                           ; 00586592
    FADDP                               ; 00586594
    FADD float ptr [0x0265b7e8]         ; 00586596 | DAT_0265b7e8
    FSIN                                ; 0058659c
    FMUL float ptr [0x0061e524]         ; 0058659e | DAT_0061e524
    FSTP float ptr [ESP + 0x10]         ; 005865a4
    LEA EBX,[ESP + 0x24]                ; 005865a8
        ;   Label: LAB_005865a8
    LEA EAX,[ESP + 0xc]                 ; 005865ac
    MOV EDX,dword ptr [0x0060b280]      ; 005865b0 | DAT_0060b280
    FLD float ptr [EAX]                 ; 005865b6
    FMUL float ptr [0x005fdc5c]         ; 005865b8 | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 005865be
    FLD float ptr [EAX + 0x4]           ; 005865c0
    FMUL float ptr [0x005fdc5c]         ; 005865c3 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 005865c9
    FLD float ptr [EAX + 0x8]           ; 005865cc
    FMUL float ptr [0x005fdc5c]         ; 005865cf | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 005865d5
    LEA EAX,[ESP + 0x24]                ; 005865d8
    PUSH EAX                            ; 005865dc
    MOV EAX,dword ptr [EDX]             ; 005865dd | DAT_01ba5c50
    PUSH EAX                            ; 005865df
    CALL FUN_0055d723                   ; 005865e0
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 005865e5
    PUSH 0x0                            ; 005865e8
    LEA EAX,[ESP + 0x40]                ; 005865ea
    PUSH EAX                            ; 005865ee
    LEA EAX,[ESP + 0x14]                ; 005865ef
    PUSH EAX                            ; 005865f3
    MOV EDI,dword ptr [0x0061b5a8]      ; 005865f4 | DAT_0061b5a8
    PUSH EDI                            ; 005865fa
    CALL FUN_00531a90                   ; 005865fb
        ;   XREF to: 00531a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531a90()
    ADD ESP,0x10                        ; 00586600
    MOV EAX,dword ptr [EBP + 0x8]       ; 00586603
    MOV dword ptr [ESP + 0xc],EAX       ; 00586606
    CMP dword ptr [EBP],0x0             ; 0058660a
    JZ 0x0058664d                       ; 0058660e
        ;   XREF to: 0058664d (CONDITIONAL_JUMP)  ; LAB_0058664d
    MOV EDX,dword ptr [ESP + 0x70]      ; 00586610
    MOV dword ptr [ESP + 0x74],EDX      ; 00586614
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00586618
    FLD float ptr [0x005edefe]          ; 0058661c | DAT_005edefe
    FILD dword ptr [ESP + 0x74]         ; 00586622
    FMUL ST1                            ; 00586626
    INC EAX                             ; 00586628
    FMUL double ptr [0x005edf06]        ; 00586629 | DAT_005edf06
    MOV dword ptr [ESP + 0x74],EAX      ; 0058662f
    FILD dword ptr [ESP + 0x74]         ; 00586633
    FMULP ST2                           ; 00586637
    FADDP                               ; 00586639
    FADD float ptr [0x0265b7e8]         ; 0058663b | DAT_0265b7e8
    FSIN                                ; 00586641
    FMUL float ptr [0x0061e524]         ; 00586643 | DAT_0061e524
    FSTP float ptr [ESP + 0x10]         ; 00586649
    LEA EBX,[ESP + 0x18]                ; 0058664d
        ;   Label: LAB_0058664d
    LEA EAX,[ESP + 0xc]                 ; 00586651
    MOV EDX,dword ptr [0x0060b280]      ; 00586655 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058665b
    FMUL float ptr [0x005fdc5c]         ; 0058665d | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 00586663
    FLD float ptr [EAX + 0x4]           ; 00586665
    FMUL float ptr [0x005fdc5c]         ; 00586668 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 0058666e
    FLD float ptr [EAX + 0x8]           ; 00586671
    FMUL float ptr [0x005fdc5c]         ; 00586674 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 0058667a
    LEA EAX,[ESP + 0x18]                ; 0058667d
    PUSH EAX                            ; 00586681
    MOV EAX,dword ptr [EDX]             ; 00586682 | DAT_01ba5c50
    ADD EAX,0x30                        ; 00586684
    PUSH EAX                            ; 00586687
    CALL FUN_0055d723                   ; 00586688
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0058668d
    PUSH 0x1                            ; 00586690
    LEA EAX,[ESP + 0x40]                ; 00586692
    PUSH EAX                            ; 00586696
    LEA EAX,[ESP + 0x14]                ; 00586697
    PUSH EAX                            ; 0058669b
    MOV EDX,dword ptr [0x0061b5a8]      ; 0058669c | DAT_0061b5a8
    PUSH EDX                            ; 005866a2
    CALL FUN_00531a90                   ; 005866a3
        ;   XREF to: 00531a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531a90()
    ADD ESP,0x10                        ; 005866a8
    MOV EAX,dword ptr [EBP + 0x8]       ; 005866ab
    MOV dword ptr [ESP + 0x14],EAX      ; 005866ae
    CMP dword ptr [EBP],0x0             ; 005866b2
    JZ 0x005866f6                       ; 005866b6
        ;   XREF to: 005866f6 (CONDITIONAL_JUMP)  ; LAB_005866f6
    MOV EAX,dword ptr [ESP + 0x70]      ; 005866b8
    INC EAX                             ; 005866bc
    MOV dword ptr [ESP + 0x74],EAX      ; 005866bd
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005866c1
    FLD float ptr [0x005edefe]          ; 005866c5 | DAT_005edefe
    FILD dword ptr [ESP + 0x74]         ; 005866cb
    FMUL ST1                            ; 005866cf
    INC EBX                             ; 005866d1
    FMUL double ptr [0x005edf06]        ; 005866d2 | DAT_005edf06
    MOV dword ptr [ESP + 0x74],EBX      ; 005866d8
    FILD dword ptr [ESP + 0x74]         ; 005866dc
    FMULP ST2                           ; 005866e0
    FADDP                               ; 005866e2
    FADD float ptr [0x0265b7e8]         ; 005866e4 | DAT_0265b7e8
    FSIN                                ; 005866ea
    FMUL float ptr [0x0061e524]         ; 005866ec | DAT_0061e524
    FSTP float ptr [ESP + 0x10]         ; 005866f2
    LEA EBX,[ESP + 0x30]                ; 005866f6
        ;   Label: LAB_005866f6
    LEA EAX,[ESP + 0xc]                 ; 005866fa
    MOV EDX,dword ptr [0x0060b280]      ; 005866fe | DAT_0060b280
    FLD float ptr [EAX]                 ; 00586704
    FMUL float ptr [0x005fdc5c]         ; 00586706 | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 0058670c
    FLD float ptr [EAX + 0x4]           ; 0058670e
    FMUL float ptr [0x005fdc5c]         ; 00586711 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 00586717
    FLD float ptr [EAX + 0x8]           ; 0058671a
    FMUL float ptr [0x005fdc5c]         ; 0058671d | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 00586723
    LEA EAX,[ESP + 0x30]                ; 00586726
    PUSH EAX                            ; 0058672a
    MOV EAX,dword ptr [EDX]             ; 0058672b | DAT_01ba5c50
    ADD EAX,0x60                        ; 0058672d
    PUSH EAX                            ; 00586730
    CALL FUN_0055d723                   ; 00586731
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 00586736
    PUSH 0x2                            ; 00586739
    LEA EAX,[ESP + 0x40]                ; 0058673b
    PUSH EAX                            ; 0058673f
    LEA EAX,[ESP + 0x14]                ; 00586740
    PUSH EAX                            ; 00586744
    MOV EBX,dword ptr [0x0061b5a8]      ; 00586745 | DAT_0061b5a8
    PUSH EBX                            ; 0058674b
    XOR ESI,ESI                         ; 0058674c
    CALL FUN_00531a90                   ; 0058674e
        ;   XREF to: 00531a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531a90()
    ADD ESP,0x10                        ; 00586753
    MOV dword ptr [ESP + 0xc],ESI       ; 00586756
    CMP dword ptr [EBP],0x0             ; 0058675a
    JZ 0x0058679d                       ; 0058675e
        ;   XREF to: 0058679d (CONDITIONAL_JUMP)  ; LAB_0058679d
    MOV EAX,dword ptr [ESP + 0x70]      ; 00586760
    INC EAX                             ; 00586764
    MOV dword ptr [ESP + 0x74],EAX      ; 00586765
    FLD float ptr [0x005edefe]          ; 00586769 | DAT_005edefe
    FILD dword ptr [ESP + 0x74]         ; 0058676f
    FMUL ST1                            ; 00586773
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00586775
    FMUL double ptr [0x005edf06]        ; 00586779 | DAT_005edf06
    MOV dword ptr [ESP + 0x74],EAX      ; 0058677f
    FILD dword ptr [ESP + 0x74]         ; 00586783
    FMULP ST2                           ; 00586787
    FADDP                               ; 00586789
    FADD float ptr [0x0265b7e8]         ; 0058678b | DAT_0265b7e8
    FSIN                                ; 00586791
    FMUL float ptr [0x0061e524]         ; 00586793 | DAT_0061e524
    FSTP float ptr [ESP + 0x10]         ; 00586799
    MOV EBX,ESP                         ; 0058679d
        ;   Label: LAB_0058679d
    LEA EAX,[ESP + 0xc]                 ; 0058679f
    MOV EDX,dword ptr [0x0060b280]      ; 005867a3 | DAT_0060b280
    FLD float ptr [EAX]                 ; 005867a9
    FMUL float ptr [0x005fdc5c]         ; 005867ab | DAT_005fdc5c
    FISTP dword ptr [EBX]               ; 005867b1
    FLD float ptr [EAX + 0x4]           ; 005867b3
    FMUL float ptr [0x005fdc5c]         ; 005867b6 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x4]         ; 005867bc
    FLD float ptr [EAX + 0x8]           ; 005867bf
    FMUL float ptr [0x005fdc5c]         ; 005867c2 | DAT_005fdc5c
    FISTP dword ptr [EBX + 0x8]         ; 005867c8
    MOV EAX,ESP                         ; 005867cb
    PUSH EAX                            ; 005867cd
    MOV EAX,dword ptr [EDX]             ; 005867ce | DAT_01ba5c50
    ADD EAX,0x90                        ; 005867d0
    PUSH EAX                            ; 005867d5
    CALL FUN_0055d723                   ; 005867d6
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 005867db
    PUSH 0x3                            ; 005867de
    LEA EAX,[ESP + 0x40]                ; 005867e0
    PUSH EAX                            ; 005867e4
    LEA EAX,[ESP + 0x14]                ; 005867e5
    PUSH EAX                            ; 005867e9
    MOV EAX,[0x0061b5a8]                ; 005867ea | DAT_0061b5a8
    PUSH EAX                            ; 005867ef
    CALL FUN_00531a90                   ; 005867f0
        ;   XREF to: 00531a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531a90()
    MOV EDX,dword ptr [EBP]             ; 005867f5
    ADD ESP,0x10                        ; 005867f8
    TEST EDX,EDX                        ; 005867fb
    JZ 0x005868ad                       ; 005867fd
        ;   XREF to: 005868ad (CONDITIONAL_JUMP)  ; LAB_005868ad
    PUSH 0xa000                         ; 00586803
    MOV ECX,dword ptr [0x0060b280]      ; 00586808 | DAT_0060b280
    PUSH ECX                            ; 0058680e | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 0058680f
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 00586814
    PUSH 0x61e6ac                       ; 00586817 | DAT_0061e6ac
    MOV EBX,dword ptr [0x0060b280]      ; 0058681c | DAT_0060b280
    PUSH EBX                            ; 00586822 | DAT_01ba5c50
    CALL FUN_0046ac20                   ; 00586823
        ;   XREF to: 0046ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ac20()
    ADD ESP,0x8                         ; 00586828
        ;   Label: LAB_00586828
    MOV ECX,dword ptr [ESP + 0x68]      ; 0058682b
    MOV EBX,dword ptr [ESP + 0x64]      ; 0058682f
    MOV ESI,dword ptr [0x026537bc]      ; 00586833 | DAT_026537bc
    ADD ECX,0x4                         ; 00586839
    INC EBX                             ; 0058683c
    MOV dword ptr [ESP + 0x68],ECX      ; 0058683d
    MOV dword ptr [ESP + 0x64],EBX      ; 00586841
    CMP EBX,ESI                         ; 00586845
    JL 0x005864cd                       ; 00586847
        ;   XREF to: 005864cd (CONDITIONAL_JUMP)  ; LAB_005864cd
    ADD ESP,0x78                        ; 0058684d
        ;   Label: LAB_0058684d
    POP EBP                             ; 00586850
    POP EDI                             ; 00586851
    POP ESI                             ; 00586852
    POP EBX                             ; 00586853
    RET                                 ; 00586854
    MOV ESI,ECX                         ; 00586855
        ;   Label: LAB_00586855
    MOV EDI,dword ptr [0x026537b8]      ; 00586857 | DAT_026537b8
    SUB ESI,EBX                         ; 0058685d
    INC EDI                             ; 0058685f
    MOV dword ptr [0x026537b4],ESI      ; 00586860 | DAT_026537b4
    MOV dword ptr [0x026537b8],EDI      ; 00586866 | DAT_026537b8
    CMP EDI,0x10                        ; 0058686c
    JL 0x0058631b                       ; 0058686f
        ;   XREF to: 0058631b (CONDITIONAL_JUMP)  ; LAB_0058631b
    XOR EDX,EDX                         ; 00586875
    MOV dword ptr [0x026537b8],EDX      ; 00586877 | DAT_026537b8
    JMP 0x0058631b                      ; 0058687d
        ;   XREF to: 0058631b (UNCONDITIONAL_JUMP)  ; LAB_0058631b
    INC byte ptr [0x0265b7ef]           ; 00586882 | DAT_0265b7ef
        ;   Label: LAB_00586882
    JMP 0x005863ab                      ; 00586888
        ;   XREF to: 005863ab (UNCONDITIONAL_JUMP)  ; LAB_005863ab
    INC byte ptr [0x0265b7f3]           ; 0058688d | DAT_0265b7f3
        ;   Label: LAB_0058688d
    JMP 0x005863d1                      ; 00586893
        ;   XREF to: 005863d1 (UNCONDITIONAL_JUMP)  ; LAB_005863d1
    TEST EAX,EAX                        ; 00586898
        ;   Label: LAB_00586898
    JGE 0x00586459                      ; 0058689a
        ;   XREF to: 00586459 (CONDITIONAL_JUMP)  ; LAB_00586459
    XOR ECX,ECX                         ; 005868a0
    MOV dword ptr [0x0265b7e4],ECX      ; 005868a2 | DAT_0265b7e4
    JMP 0x00586459                      ; 005868a8
        ;   XREF to: 00586459 (UNCONDITIONAL_JUMP)  ; LAB_00586459
    CMP dword ptr [0x01c37788],0x0      ; 005868ad | DAT_01c37788
        ;   Label: LAB_005868ad
    JNZ 0x005868d6                      ; 005868b4
        ;   XREF to: 005868d6 (CONDITIONAL_JUMP)  ; LAB_005868d6
    CMP dword ptr [ESP + 0x90],0x0      ; 005868b6
    JZ 0x005868fc                       ; 005868be
        ;   XREF to: 005868fc (CONDITIONAL_JUMP)  ; LAB_005868fc
    PUSH 0x61e6ac                       ; 005868c0 | DAT_0061e6ac
    MOV EDI,dword ptr [0x0060b280]      ; 005868c5 | DAT_0060b280
    PUSH EDI                            ; 005868cb | DAT_01ba5c50
    CALL FUN_0046a030                   ; 005868cc
        ;   XREF to: 0046a030 (UNCONDITIONAL_CALL)  ; undefined FUN_0046a030()
    JMP 0x00586828                      ; 005868d1
        ;   XREF to: 00586828 (UNCONDITIONAL_JUMP)  ; LAB_00586828
    PUSH 0x1                            ; 005868d6
        ;   Label: LAB_005868d6
    MOV EAX,[0x0060b280]                ; 005868d8 | DAT_0060b280
    PUSH EAX                            ; 005868dd | DAT_01ba5c50
    CALL FUN_0046b7e0                   ; 005868de
        ;   XREF to: 0046b7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b7e0()
    ADD ESP,0x8                         ; 005868e3
    PUSH 0x61e6ac                       ; 005868e6 | DAT_0061e6ac
    MOV EDX,dword ptr [0x0060b280]      ; 005868eb | DAT_0060b280
    PUSH EDX                            ; 005868f1 | DAT_01ba5c50
    CALL FUN_004696f0                   ; 005868f2
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004696f0()
    JMP 0x00586828                      ; 005868f7
        ;   XREF to: 00586828 (UNCONDITIONAL_JUMP)  ; LAB_00586828
    PUSH 0x61e6ac                       ; 005868fc | DAT_0061e6ac
        ;   Label: LAB_005868fc
    MOV ESI,dword ptr [0x0060b280]      ; 00586901 | DAT_0060b280
    PUSH ESI                            ; 00586907 | DAT_01ba5c50
    CALL FUN_0046a270                   ; 00586908
        ;   XREF to: 0046a270 (UNCONDITIONAL_CALL)  ; undefined FUN_0046a270()
    JMP 0x00586828                      ; 0058690d
        ;   XREF to: 00586828 (UNCONDITIONAL_JUMP)  ; LAB_00586828

