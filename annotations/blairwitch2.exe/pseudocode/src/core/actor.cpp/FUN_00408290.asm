; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_actor_cpp_FUN_00408290(int param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x120]:8  local_120
; undefined8       Stack[-0x118]:8  local_118
; undefined8       Stack[-0x110]:8  local_110
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408f90 at 0040901b
;   core_actor.cpp_FUN_004093a0 at 0040967c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408290
        ;   Label: core_actor.cpp_FUN_00408290
    PUSH ESI                            ; 00408291
    PUSH EDI                            ; 00408292
    PUSH EBP                            ; 00408293
    MOV EBP,ESP                         ; 00408294
    SUB ESP,0x10c                       ; 00408296
    AND ESP,0xfffffff8                  ; 0040829c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040829f
    MOV ECX,dword ptr [EBP + 0x18]      ; 004082a2
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004082a5
    MOV EDX,dword ptr [EBP + 0x20]      ; 004082a8
    FLD float ptr [ECX + 0x8]           ; 004082ab
    FMUL ST0                            ; 004082ae
    FLD float ptr [ECX]                 ; 004082b0
    FMUL ST0                            ; 004082b2
    FLD float ptr [ESI + 0x1c]          ; 004082b4
    FMUL ST0                            ; 004082b7
    FXCH                                ; 004082b9
    FADDP ST2,ST0                       ; 004082bb
    FSTP double ptr [ESP + 0x98]        ; 004082bd
    FCOMP double ptr [ESP + 0x98]       ; 004082c4
    FNSTSW AX                           ; 004082cb
    SAHF                                ; 004082cd
    JNC 0x004083d3                      ; 004082ce
        ;   XREF to: 004083d3 (CONDITIONAL_JUMP)  ; LAB_004083d3
    FLD float ptr [ECX + 0x4]           ; 004082d4
    FCOMP float ptr [ESI + 0x14]        ; 004082d7
    FNSTSW AX                           ; 004082da
    SAHF                                ; 004082dc
    JC 0x004085ae                       ; 004082dd
        ;   XREF to: 004085ae (CONDITIONAL_JUMP)  ; LAB_004085ae
    FLD float ptr [ECX + 0x4]           ; 004082e3
    FCOMP float ptr [ESI + 0x18]        ; 004082e6
    FNSTSW AX                           ; 004082e9
    SAHF                                ; 004082eb
    JA 0x004085ae                       ; 004082ec
        ;   XREF to: 004085ae (CONDITIONAL_JUMP)  ; LAB_004085ae
    FLD float ptr [EBX]                 ; 004082f2
    FLD float ptr [EBX + 0x4]           ; 004082f4
    FLD float ptr [EBX + 0x8]           ; 004082f7
    LEA EDI,[ESP + 0xa0]                ; 004082fa
    LEA ESI,[ESP + 0xac]                ; 00408301
    LEA EAX,[ESP + 0xa0]                ; 00408308
    FXCH ST2                            ; 0040830f
    FCHS                                ; 00408311
    FXCH                                ; 00408313
    FCHS                                ; 00408315
    FXCH ST2                            ; 00408317
    FCHS                                ; 00408319
    FXCH ST2                            ; 0040831b
    FSTP float ptr [ESP + 0xb0]         ; 0040831d
    FXCH                                ; 00408324
    FSTP float ptr [ESP + 0xb4]         ; 00408326
    FSTP float ptr [ESP + 0xac]         ; 0040832d
    MOVSD ES:EDI,ESI                    ; 00408334
    MOVSD ES:EDI,ESI                    ; 00408335
    MOVSD ES:EDI,ESI                    ; 00408336
    CMP EDX,EAX                         ; 00408337
    JZ 0x00408358                       ; 00408339
        ;   XREF to: 00408358 (CONDITIONAL_JUMP)  ; LAB_00408358
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0040833b
    MOV dword ptr [EDX],EAX             ; 00408342
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00408344
    MOV dword ptr [EDX + 0x4],EAX       ; 0040834b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0040834e
    MOV dword ptr [EDX + 0x8],EAX       ; 00408355
    FLD float ptr [EDX + 0x4]           ; 00408358
        ;   Label: LAB_00408358
    FMUL ST0                            ; 0040835b
    FLD float ptr [EDX]                 ; 0040835d
    FMUL ST0                            ; 0040835f
    FADDP                               ; 00408361
    FLD float ptr [EDX + 0x8]           ; 00408363
    FMUL ST0                            ; 00408366
    FADDP                               ; 00408368
    FSQRT                               ; 0040836a
    FLDZ                                ; 0040836c
    FXCH                                ; 0040836e
    FSTP float ptr [ESP + 0x100]        ; 00408370
    FCOMP float ptr [ESP + 0x100]       ; 00408377
    FNSTSW AX                           ; 0040837e
    SAHF                                ; 00408380
    JNC 0x004083bf                      ; 00408381
        ;   XREF to: 004083bf (CONDITIONAL_JUMP)  ; LAB_004083bf
    FLD1                                ; 00408383
    FLD float ptr [EDX]                 ; 00408385
    FXCH                                ; 00408387
    FDIV float ptr [ESP + 0x100]        ; 00408389
    FXCH                                ; 00408390
    FMUL ST1                            ; 00408392
    FLD float ptr [EDX + 0x4]           ; 00408394
    FMUL ST2                            ; 00408397
    FLD float ptr [EDX + 0x8]           ; 00408399
    FMULP ST3                           ; 0040839c
    FXCH                                ; 0040839e
    FSTP float ptr [EDX]                ; 004083a0
    FSTP float ptr [EDX + 0x4]          ; 004083a2
    FSTP float ptr [EDX + 0x8]          ; 004083a5
    XOR EAX,EAX                         ; 004083a8
        ;   Label: LAB_004083a8
    MOV dword ptr [ESP + 0x104],EAX     ; 004083aa
    MOV EAX,dword ptr [ESP + 0x104]     ; 004083b1
    MOV ESP,EBP                         ; 004083b8
    POP EBP                             ; 004083ba
    POP EDI                             ; 004083bb
    POP ESI                             ; 004083bc
    POP EBX                             ; 004083bd
    RET                                 ; 004083be
    MOV dword ptr [EDX + 0x8],0x0       ; 004083bf
        ;   Label: LAB_004083bf
    MOV EAX,dword ptr [EDX + 0x8]       ; 004083c6
    MOV dword ptr [EDX + 0x4],EAX       ; 004083c9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004083cc
    MOV dword ptr [EDX],EAX             ; 004083cf
    JMP 0x004083a8                      ; 004083d1
        ;   XREF to: 004083a8 (UNCONDITIONAL_JUMP)  ; LAB_004083a8
    FLD float ptr [EBX + 0x8]           ; 004083d3
        ;   Label: LAB_004083d3
    FMUL ST0                            ; 004083d6
    FLD float ptr [EBX]                 ; 004083d8
    FMUL ST0                            ; 004083da
    FADDP                               ; 004083dc
    FSQRT                               ; 004083de
    FLDZ                                ; 004083e0
    FXCH                                ; 004083e2
    FSTP double ptr [ESP + 0x88]        ; 004083e4
    FCOMP double ptr [ESP + 0x88]       ; 004083eb
    FNSTSW AX                           ; 004083f2
    SAHF                                ; 004083f4
    JNC 0x004085ae                      ; 004083f5
        ;   XREF to: 004085ae (CONDITIONAL_JUMP)  ; LAB_004085ae
    FLD1                                ; 004083fb
    FDIV double ptr [ESP + 0x88]        ; 004083fd
    FLD float ptr [EBX]                 ; 00408404
    FST double ptr [ESP + 0x70]         ; 00408406
    FXCH                                ; 0040840a
    FSTP double ptr [ESP + 0x18]        ; 0040840c
    FMUL double ptr [ESP + 0x18]        ; 00408410
    FLD float ptr [EBX + 0x8]           ; 00408414
    FST double ptr [ESP + 0x58]         ; 00408417
    FMUL double ptr [ESP + 0x18]        ; 0040841b
    FLD float ptr [ECX + 0x8]           ; 0040841f
    FST double ptr [ESP + 0x8]          ; 00408422
    FXCH                                ; 00408426
    FSTP double ptr [ESP + 0x20]        ; 00408428
    FMUL double ptr [ESP + 0x20]        ; 0040842c
    FXCH                                ; 00408430
    FSTP double ptr [ESP + 0x48]        ; 00408432
    FLD float ptr [ECX]                 ; 00408436
    FST double ptr [ESP + 0x10]         ; 00408438
    FMUL double ptr [ESP + 0x48]        ; 0040843c
    FADDP                               ; 00408440
    FLDZ                                ; 00408442
    FXCH                                ; 00408444
    FCHS                                ; 00408446
    FSTP double ptr [ESP + 0x78]        ; 00408448
    FCOMP double ptr [ESP + 0x78]       ; 0040844c
    FNSTSW AX                           ; 00408450
    SAHF                                ; 00408452
    JNC 0x004085ae                      ; 00408453
        ;   XREF to: 004085ae (CONDITIONAL_JUMP)  ; LAB_004085ae
    FLD double ptr [ESP + 0x78]         ; 00408459
    FLD double ptr [ESP + 0x48]         ; 0040845d
    FMUL ST1                            ; 00408461
    FLD double ptr [ESP + 0x20]         ; 00408463
    FMULP ST2                           ; 00408467
    FADD double ptr [ESP + 0x10]        ; 00408469
    FMUL ST0                            ; 0040846d
    FXCH                                ; 0040846f
    FADD double ptr [ESP + 0x8]         ; 00408471
    FMUL ST0                            ; 00408475
    FADDP                               ; 00408477
    FST double ptr [ESP + 0x68]         ; 00408479
    FCOMP double ptr [ESP + 0x98]       ; 0040847d
    FNSTSW AX                           ; 00408484
    SAHF                                ; 00408486
    JNC 0x00408581                      ; 00408487
        ;   XREF to: 00408581 (CONDITIONAL_JUMP)  ; LAB_00408581
    FLD double ptr [ESP + 0x98]         ; 0040848d
    FSUB double ptr [ESP + 0x68]        ; 00408494
    FSQRT                               ; 00408498
    FSUBR double ptr [ESP + 0x78]       ; 0040849a
    FST double ptr [ESP + 0x40]         ; 0040849e
    FCOMP double ptr [ESP + 0x88]       ; 004084a2
    FNSTSW AX                           ; 004084a9
    SAHF                                ; 004084ab
    JA 0x00408581                       ; 004084ac
        ;   XREF to: 00408581 (CONDITIONAL_JUMP)  ; LAB_00408581
    FLD double ptr [ESP + 0x40]         ; 004084b2
    FMUL double ptr [ESP + 0x18]        ; 004084b6
    FLD float ptr [EBX + 0x4]           ; 004084ba
    FXCH                                ; 004084bd
    FSTP double ptr [ESP + 0x38]        ; 004084bf
    FMUL double ptr [ESP + 0x38]        ; 004084c3
    FADD float ptr [ECX + 0x4]          ; 004084c7
    FLD float ptr [ESI + 0x14]          ; 004084ca
    FXCH                                ; 004084cd
    FSTP double ptr [ESP + 0x50]        ; 004084cf
    FCOMP double ptr [ESP + 0x50]       ; 004084d3
    FNSTSW AX                           ; 004084d7
    SAHF                                ; 004084d9
    JA 0x004085ae                       ; 004084da
        ;   XREF to: 004085ae (CONDITIONAL_JUMP)  ; LAB_004085ae
    FLD float ptr [ESI + 0x18]          ; 004084e0
    FCOMP double ptr [ESP + 0x50]       ; 004084e3
    FNSTSW AX                           ; 004084e7
    SAHF                                ; 004084e9
    JC 0x004085ae                       ; 004084ea
        ;   XREF to: 004085ae (CONDITIONAL_JUMP)  ; LAB_004085ae
    FLD double ptr [ESP + 0x38]         ; 004084f0
    FLD double ptr [ESP + 0x70]         ; 004084f4
    FMUL ST1                            ; 004084f8
    FLD double ptr [ESP + 0x58]         ; 004084fa
    MOV dword ptr [EDX + 0x4],0x0       ; 004084fe
    FMULP ST2                           ; 00408505
    FLD float ptr [EDX + 0x4]           ; 00408507
    FMUL ST0                            ; 0040850a
    FXCH                                ; 0040850c
    FADD double ptr [ESP + 0x10]        ; 0040850e
    FST float ptr [EDX]                 ; 00408512
    FMUL float ptr [EDX]                ; 00408514
    FXCH ST2                            ; 00408516
    FADD double ptr [ESP + 0x8]         ; 00408518
    FXCH ST2                            ; 0040851c
    FADDP                               ; 0040851e
    FXCH                                ; 00408520
    FST float ptr [EDX + 0x8]           ; 00408522
    FMUL float ptr [EDX + 0x8]          ; 00408525
    FADDP                               ; 00408528
    FSQRT                               ; 0040852a
    FLDZ                                ; 0040852c
    FXCH                                ; 0040852e
    FSTP float ptr [ESP + 0x108]        ; 00408530
    FCOMP float ptr [ESP + 0x108]       ; 00408537
    FNSTSW AX                           ; 0040853e
    SAHF                                ; 00408540
    JNC 0x0040859a                      ; 00408541
        ;   XREF to: 0040859a (CONDITIONAL_JUMP)  ; LAB_0040859a
    FLD1                                ; 00408543
    FLD float ptr [EDX]                 ; 00408545
    FXCH                                ; 00408547
    FDIV float ptr [ESP + 0x108]        ; 00408549
    FXCH                                ; 00408550
    FMUL ST1                            ; 00408552
    FLD float ptr [EDX + 0x4]           ; 00408554
    FMUL ST2                            ; 00408557
    FLD float ptr [EDX + 0x8]           ; 00408559
    FMULP ST3                           ; 0040855c
    FXCH                                ; 0040855e
    FSTP float ptr [EDX]                ; 00408560
    FSTP float ptr [EDX + 0x4]          ; 00408562
    FSTP float ptr [EDX + 0x8]          ; 00408565
    FLD double ptr [ESP + 0x38]         ; 00408568
        ;   Label: LAB_00408568
    FSTP float ptr [ESP + 0x104]        ; 0040856c
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408573
    MOV ESP,EBP                         ; 0040857a
    POP EBP                             ; 0040857c
    POP EDI                             ; 0040857d
    POP ESI                             ; 0040857e
    POP EBX                             ; 0040857f
    RET                                 ; 00408580
    MOV dword ptr [ESP + 0x104],0x40000000 ; 00408581
        ;   Label: LAB_00408581
    MOV EAX,dword ptr [ESP + 0x104]     ; 0040858c
    MOV ESP,EBP                         ; 00408593
    POP EBP                             ; 00408595
    POP EDI                             ; 00408596
    POP ESI                             ; 00408597
    POP EBX                             ; 00408598
    RET                                 ; 00408599
    MOV dword ptr [EDX + 0x8],0x0       ; 0040859a
        ;   Label: LAB_0040859a
    MOV EAX,dword ptr [EDX + 0x8]       ; 004085a1
    MOV dword ptr [EDX + 0x4],EAX       ; 004085a4
    MOV EAX,dword ptr [EDX + 0x4]       ; 004085a7
    MOV dword ptr [EDX],EAX             ; 004085aa
    JMP 0x00408568                      ; 004085ac
        ;   XREF to: 00408568 (UNCONDITIONAL_JUMP)  ; LAB_00408568
    FLD float ptr [ECX + 0x4]           ; 004085ae
        ;   Label: LAB_004085ae
    FCOMP float ptr [ESI + 0x14]        ; 004085b1
    FNSTSW AX                           ; 004085b4
    SAHF                                ; 004085b6
    JNC 0x0040866e                      ; 004085b7
        ;   XREF to: 0040866e (CONDITIONAL_JUMP)  ; LAB_0040866e
    FLDZ                                ; 004085bd
    FLD float ptr [EBX + 0x4]           ; 004085bf
    FSTP double ptr [ESP]               ; 004085c2
    FCOMP double ptr [ESP]              ; 004085c5
    FNSTSW AX                           ; 004085c8
    SAHF                                ; 004085ca
    JNC 0x004086e0                      ; 004085cb
        ;   XREF to: 004086e0 (CONDITIONAL_JUMP)  ; LAB_004086e0
    FLD float ptr [ESI + 0x14]          ; 004085d1
    FSUB float ptr [ECX + 0x4]          ; 004085d4
    FST double ptr [ESP + 0x30]         ; 004085d7
    FCOMP double ptr [ESP]              ; 004085db
    FNSTSW AX                           ; 004085de
    SAHF                                ; 004085e0
    JNC 0x004086e0                      ; 004085e1
        ;   XREF to: 004086e0 (CONDITIONAL_JUMP)  ; LAB_004086e0
    FLD double ptr [ESP + 0x30]         ; 004085e7
    FDIV double ptr [ESP]               ; 004085eb
    FLD float ptr [EBX]                 ; 004085ee
    FXCH                                ; 004085f0
    FSTP double ptr [ESP + 0x90]        ; 004085f2
    FMUL double ptr [ESP + 0x90]        ; 004085f9
    FLD float ptr [EBX + 0x8]           ; 00408600
    FMUL double ptr [ESP + 0x90]        ; 00408603
    FLD float ptr [ECX]                 ; 0040860a
    FADDP ST2,ST0                       ; 0040860c
    FLD ST1                             ; 0040860e
    FMULP ST2                           ; 00408610
    FADD float ptr [ECX + 0x8]          ; 00408612
    FMUL ST0                            ; 00408615
    FADDP                               ; 00408617
    FCOMP double ptr [ESP + 0x98]       ; 00408619
    FNSTSW AX                           ; 00408620
    SAHF                                ; 00408622
    JBE 0x0040863e                      ; 00408623
        ;   XREF to: 0040863e (CONDITIONAL_JUMP)  ; LAB_0040863e
    MOV dword ptr [ESP + 0x104],0x40000000 ; 00408625
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408630
    MOV ESP,EBP                         ; 00408637
    POP EBP                             ; 00408639
    POP EDI                             ; 0040863a
    POP ESI                             ; 0040863b
    POP EBX                             ; 0040863c
    RET                                 ; 0040863d
    MOV dword ptr [EDX + 0x4],0xbf800000 ; 0040863e
        ;   Label: LAB_0040863e
    FLD double ptr [ESP + 0x90]         ; 00408645
    MOV dword ptr [EDX + 0x8],0x0       ; 0040864c
    FSTP float ptr [ESP + 0x104]        ; 00408653
    MOV dword ptr [EDX],0x0             ; 0040865a
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408660
    MOV ESP,EBP                         ; 00408667
    POP EBP                             ; 00408669
    POP EDI                             ; 0040866a
    POP ESI                             ; 0040866b
    POP EBX                             ; 0040866c
    RET                                 ; 0040866d
    FLD float ptr [ECX + 0x4]           ; 0040866e
        ;   Label: LAB_0040866e
    FCOMP float ptr [ESI + 0x18]        ; 00408671
    FNSTSW AX                           ; 00408674
    SAHF                                ; 00408676
    JBE 0x004086e0                      ; 00408677
        ;   XREF to: 004086e0 (CONDITIONAL_JUMP)  ; LAB_004086e0
    FLDZ                                ; 00408679
    FLD float ptr [EBX + 0x4]           ; 0040867b
    FSTP double ptr [ESP + 0x80]        ; 0040867e
    FCOMP double ptr [ESP + 0x80]       ; 00408685
    FNSTSW AX                           ; 0040868c
    SAHF                                ; 0040868e
    JBE 0x004086e0                      ; 0040868f
        ;   XREF to: 004086e0 (CONDITIONAL_JUMP)  ; LAB_004086e0
    FLD float ptr [ESI + 0x18]          ; 00408691
    FSUB float ptr [ECX + 0x4]          ; 00408694
    FST double ptr [ESP + 0x28]         ; 00408697
    FCOMP double ptr [ESP + 0x80]       ; 0040869b
    FNSTSW AX                           ; 004086a2
    SAHF                                ; 004086a4
    JBE 0x004086e0                      ; 004086a5
        ;   XREF to: 004086e0 (CONDITIONAL_JUMP)  ; LAB_004086e0
    FLD double ptr [ESP + 0x28]         ; 004086a7
    FDIV double ptr [ESP + 0x80]        ; 004086ab
    FLD float ptr [EBX]                 ; 004086b2
    FXCH                                ; 004086b4
    FSTP double ptr [ESP + 0x60]        ; 004086b6
    FMUL double ptr [ESP + 0x60]        ; 004086ba
    FLD float ptr [EBX + 0x8]           ; 004086be
    FMUL double ptr [ESP + 0x60]        ; 004086c1
    FLD float ptr [ECX]                 ; 004086c5
    FADDP ST2,ST0                       ; 004086c7
    FLD ST1                             ; 004086c9
    FMULP ST2                           ; 004086cb
    FADD float ptr [ECX + 0x8]          ; 004086cd
    FMUL ST0                            ; 004086d0
    FADDP                               ; 004086d2
    FCOMP double ptr [ESP + 0x98]       ; 004086d4
    FNSTSW AX                           ; 004086db
    SAHF                                ; 004086dd
    JBE 0x004086f9                      ; 004086de
        ;   XREF to: 004086f9 (CONDITIONAL_JUMP)  ; LAB_004086f9
    MOV dword ptr [ESP + 0x104],0x40000000 ; 004086e0
        ;   Label: LAB_004086e0
    MOV EAX,dword ptr [ESP + 0x104]     ; 004086eb
    MOV ESP,EBP                         ; 004086f2
    POP EBP                             ; 004086f4
    POP EDI                             ; 004086f5
    POP ESI                             ; 004086f6
    POP EBX                             ; 004086f7
    RET                                 ; 004086f8
    MOV dword ptr [EDX + 0x4],0x3f800000 ; 004086f9
        ;   Label: LAB_004086f9
    FLD double ptr [ESP + 0x60]         ; 00408700
    MOV dword ptr [EDX + 0x8],0x0       ; 00408704
    FSTP float ptr [ESP + 0x104]        ; 0040870b
    MOV dword ptr [EDX],0x0             ; 00408712
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408718
    MOV ESP,EBP                         ; 0040871f
    POP EBP                             ; 00408721
    POP EDI                             ; 00408722
    POP ESI                             ; 00408723
    POP EBX                             ; 00408724
    RET                                 ; 00408725

