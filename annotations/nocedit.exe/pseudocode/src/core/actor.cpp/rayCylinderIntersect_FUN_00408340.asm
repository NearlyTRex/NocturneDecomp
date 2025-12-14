; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_actor.cpp_rayCylinderIntersect_FUN_00408340(SCollisionInfo * collision_info, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
;
; Parameters:
; SCollisionInfo * Stack[0x4]:4   collision_info
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
; Local Variables:
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
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 0040969a
;   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150 at 004091ca
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408340
        ;   Label: core_actor.cpp_rayCylinderIntersect_FUN_00408340
    PUSH ESI                            ; 00408341
    PUSH EBP                            ; 00408342
    MOV EBP,ESP                         ; 00408343
    SUB ESP,0xfc                        ; 00408345
    AND ESP,0xfffffff8                  ; 0040834b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0040834e
    MOV ECX,dword ptr [EBP + 0x14]      ; 00408351
    MOV EBX,dword ptr [EBP + 0x18]      ; 00408354
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00408357
    FLD float ptr [ECX + 0x8]           ; 0040835a
    FMUL ST0                            ; 0040835d
    FLD float ptr [ECX]                 ; 0040835f
    FMUL ST0                            ; 00408361
    FLD float ptr [ESI + 0x1c]          ; 00408363
    FMUL ST0                            ; 00408366
    FXCH                                ; 00408368
    FADDP ST2,ST0                       ; 0040836a
    FSTP double ptr [ESP + 0x90]        ; 0040836c
    FCOMP double ptr [ESP + 0x90]       ; 00408373
    FNSTSW AX                           ; 0040837a
    SAHF                                ; 0040837c
    JNC 0x0040845f                      ; 0040837d
        ;   XREF to: 0040845f (CONDITIONAL_JUMP)  ; LAB_0040845f
    FLD float ptr [ECX + 0x4]           ; 00408383
    FCOMP float ptr [ESI + 0x14]        ; 00408386
    FNSTSW AX                           ; 00408389
    SAHF                                ; 0040838b
    JC 0x00408636                       ; 0040838c
        ;   XREF to: 00408636 (CONDITIONAL_JUMP)  ; LAB_00408636
    FLD float ptr [ECX + 0x4]           ; 00408392
    FCOMP float ptr [ESI + 0x18]        ; 00408395
    FNSTSW AX                           ; 00408398
    SAHF                                ; 0040839a
    JA 0x00408636                       ; 0040839b
        ;   XREF to: 00408636 (CONDITIONAL_JUMP)  ; LAB_00408636
    FLD float ptr [EBX]                 ; 004083a1
    LEA EAX,[ESP + 0xa8]                ; 004083a3
    FCHS                                ; 004083aa
    FSTP float ptr [ESP + 0xa8]         ; 004083ac
    FLD float ptr [EBX + 0x4]           ; 004083b3
    FCHS                                ; 004083b6
    FSTP float ptr [ESP + 0xac]         ; 004083b8
    FLD float ptr [EBX + 0x8]           ; 004083bf
    FCHS                                ; 004083c2
    FSTP float ptr [ESP + 0xb0]         ; 004083c4
    CMP EDX,EAX                         ; 004083cb
    JZ 0x004083ec                       ; 004083cd
        ;   XREF to: 004083ec (CONDITIONAL_JUMP)  ; LAB_004083ec
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004083cf
    MOV dword ptr [EDX],EAX             ; 004083d6
    MOV EAX,dword ptr [ESP + 0xac]      ; 004083d8
    MOV dword ptr [EDX + 0x4],EAX       ; 004083df
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004083e2
    MOV dword ptr [EDX + 0x8],EAX       ; 004083e9
    FLD float ptr [EDX + 0x4]           ; 004083ec
        ;   Label: LAB_004083ec
    FMUL ST0                            ; 004083ef
    FLD float ptr [EDX]                 ; 004083f1
    FMUL ST0                            ; 004083f3
    FADDP                               ; 004083f5
    FLD float ptr [EDX + 0x8]           ; 004083f7
    FMUL ST0                            ; 004083fa
    FADDP                               ; 004083fc
    FSQRT                               ; 004083fe
    FST float ptr [ESP + 0xa0]          ; 00408400
    FLDZ                                ; 00408407
    FCOMPP                              ; 00408409
    FNSTSW AX                           ; 0040840b
    SAHF                                ; 0040840d
    JNC 0x0040844b                      ; 0040840e
        ;   XREF to: 0040844b (CONDITIONAL_JUMP)  ; LAB_0040844b
    FLD1                                ; 00408410
    FLD float ptr [EDX]                 ; 00408412
    FXCH                                ; 00408414
    FDIV float ptr [ESP + 0xa0]         ; 00408416
    FXCH                                ; 0040841d
    FMUL ST1                            ; 0040841f
    FLD float ptr [EDX + 0x4]           ; 00408421
    FMUL ST2                            ; 00408424
    FLD float ptr [EDX + 0x8]           ; 00408426
    FMULP ST3                           ; 00408429
    FXCH                                ; 0040842b
    FSTP float ptr [EDX]                ; 0040842d
    FSTP float ptr [EDX + 0x4]          ; 0040842f
    FSTP float ptr [EDX + 0x8]          ; 00408432
    XOR EAX,EAX                         ; 00408435
        ;   Label: LAB_00408435
    MOV dword ptr [ESP + 0xf4],EAX      ; 00408437
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0040843e
    MOV ESP,EBP                         ; 00408445
    POP EBP                             ; 00408447
    POP ESI                             ; 00408448
    POP EBX                             ; 00408449
    RET                                 ; 0040844a
    MOV dword ptr [EDX + 0x8],0x0       ; 0040844b
        ;   Label: LAB_0040844b
    MOV EAX,dword ptr [EDX + 0x8]       ; 00408452
    MOV dword ptr [EDX + 0x4],EAX       ; 00408455
    MOV EAX,dword ptr [EDX + 0x4]       ; 00408458
    MOV dword ptr [EDX],EAX             ; 0040845b
    JMP 0x00408435                      ; 0040845d
        ;   XREF to: 00408435 (UNCONDITIONAL_JUMP)  ; LAB_00408435
    FLD float ptr [EBX + 0x8]           ; 0040845f
        ;   Label: LAB_0040845f
    FMUL ST0                            ; 00408462
    FLD float ptr [EBX]                 ; 00408464
    FMUL ST0                            ; 00408466
    FADDP                               ; 00408468
    FSQRT                               ; 0040846a
    FLDZ                                ; 0040846c
    FXCH                                ; 0040846e
    FSTP double ptr [ESP]               ; 00408470
    FCOMP double ptr [ESP]              ; 00408473
    FNSTSW AX                           ; 00408476
    SAHF                                ; 00408478
    JNC 0x00408636                      ; 00408479
        ;   XREF to: 00408636 (CONDITIONAL_JUMP)  ; LAB_00408636
    FLD1                                ; 0040847f
    FDIV double ptr [ESP]               ; 00408481
    FLD float ptr [EBX]                 ; 00408484
    FST double ptr [ESP + 0x60]         ; 00408486
    FXCH                                ; 0040848a
    FSTP double ptr [ESP + 0x20]        ; 0040848c
    FMUL double ptr [ESP + 0x20]        ; 00408490
    FLD float ptr [EBX + 0x8]           ; 00408494
    FST double ptr [ESP + 0x78]         ; 00408497
    FMUL double ptr [ESP + 0x20]        ; 0040849b
    FLD float ptr [ECX + 0x8]           ; 0040849f
    FST double ptr [ESP + 0x8]          ; 004084a2
    FXCH                                ; 004084a6
    FSTP double ptr [ESP + 0x48]        ; 004084a8
    FMUL double ptr [ESP + 0x48]        ; 004084ac
    FXCH                                ; 004084b0
    FSTP double ptr [ESP + 0x58]        ; 004084b2
    FLD float ptr [ECX]                 ; 004084b6
    FST double ptr [ESP + 0x10]         ; 004084b8
    FMUL double ptr [ESP + 0x58]        ; 004084bc
    FADDP                               ; 004084c0
    FLDZ                                ; 004084c2
    FXCH                                ; 004084c4
    FCHS                                ; 004084c6
    FSTP double ptr [ESP + 0x88]        ; 004084c8
    FCOMP double ptr [ESP + 0x88]       ; 004084cf
    FNSTSW AX                           ; 004084d6
    SAHF                                ; 004084d8
    JNC 0x00408636                      ; 004084d9
        ;   XREF to: 00408636 (CONDITIONAL_JUMP)  ; LAB_00408636
    FLD double ptr [ESP + 0x88]         ; 004084df
    FLD double ptr [ESP + 0x58]         ; 004084e6
    FMUL ST1                            ; 004084ea
    FLD double ptr [ESP + 0x48]         ; 004084ec
    FMULP ST2                           ; 004084f0
    FADD double ptr [ESP + 0x10]        ; 004084f2
    FMUL ST0                            ; 004084f6
    FXCH                                ; 004084f8
    FADD double ptr [ESP + 0x8]         ; 004084fa
    FMUL ST0                            ; 004084fe
    FADDP                               ; 00408500
    FST double ptr [ESP + 0x68]         ; 00408502
    FCOMP double ptr [ESP + 0x90]       ; 00408506
    FNSTSW AX                           ; 0040850d
    SAHF                                ; 0040850f
    JNC 0x0040860a                      ; 00408510
        ;   XREF to: 0040860a (CONDITIONAL_JUMP)  ; LAB_0040860a
    FLD double ptr [ESP + 0x90]         ; 00408516
    FSUB double ptr [ESP + 0x68]        ; 0040851d
    FSQRT                               ; 00408521
    FSUBR double ptr [ESP + 0x88]       ; 00408523
    FST double ptr [ESP + 0x70]         ; 0040852a
    FCOMP double ptr [ESP]              ; 0040852e
    FNSTSW AX                           ; 00408531
    SAHF                                ; 00408533
    JA 0x0040860a                       ; 00408534
        ;   XREF to: 0040860a (CONDITIONAL_JUMP)  ; LAB_0040860a
    FLD double ptr [ESP + 0x70]         ; 0040853a
    FMUL double ptr [ESP + 0x20]        ; 0040853e
    FLD float ptr [EBX + 0x4]           ; 00408542
    FXCH                                ; 00408545
    FSTP double ptr [ESP + 0x40]        ; 00408547
    FMUL double ptr [ESP + 0x40]        ; 0040854b
    FADD float ptr [ECX + 0x4]          ; 0040854f
    FLD float ptr [ESI + 0x14]          ; 00408552
    FXCH                                ; 00408555
    FSTP double ptr [ESP + 0x80]        ; 00408557
    FCOMP double ptr [ESP + 0x80]       ; 0040855e
    FNSTSW AX                           ; 00408565
    SAHF                                ; 00408567
    JA 0x00408636                       ; 00408568
        ;   XREF to: 00408636 (CONDITIONAL_JUMP)  ; LAB_00408636
    FLD float ptr [ESI + 0x18]          ; 0040856e
    FCOMP double ptr [ESP + 0x80]       ; 00408571
    FNSTSW AX                           ; 00408578
    SAHF                                ; 0040857a
    JC 0x00408636                       ; 0040857b
        ;   XREF to: 00408636 (CONDITIONAL_JUMP)  ; LAB_00408636
    FLD double ptr [ESP + 0x40]         ; 00408581
    FLD double ptr [ESP + 0x60]         ; 00408585
    FMUL ST1                            ; 00408589
    FLD double ptr [ESP + 0x78]         ; 0040858b
    MOV dword ptr [EDX + 0x4],0x0       ; 0040858f
    FMULP ST2                           ; 00408596
    FLD float ptr [EDX + 0x4]           ; 00408598
    FMUL ST0                            ; 0040859b
    FXCH                                ; 0040859d
    FADD double ptr [ESP + 0x10]        ; 0040859f
    FST float ptr [EDX]                 ; 004085a3
    FMUL float ptr [EDX]                ; 004085a5
    FXCH ST2                            ; 004085a7
    FADD double ptr [ESP + 0x8]         ; 004085a9
    FXCH ST2                            ; 004085ad
    FADDP                               ; 004085af
    FXCH                                ; 004085b1
    FST float ptr [EDX + 0x8]           ; 004085b3
    FMUL float ptr [EDX + 0x8]          ; 004085b6
    FADDP                               ; 004085b9
    FSQRT                               ; 004085bb
    FST float ptr [ESP + 0xa4]          ; 004085bd
    FLDZ                                ; 004085c4
    FCOMPP                              ; 004085c6
    FNSTSW AX                           ; 004085c8
    SAHF                                ; 004085ca
    JNC 0x00408622                      ; 004085cb
        ;   XREF to: 00408622 (CONDITIONAL_JUMP)  ; LAB_00408622
    FLD1                                ; 004085cd
    FLD float ptr [EDX]                 ; 004085cf
    FXCH                                ; 004085d1
    FDIV float ptr [ESP + 0xa4]         ; 004085d3
    FXCH                                ; 004085da
    FMUL ST1                            ; 004085dc
    FLD float ptr [EDX + 0x4]           ; 004085de
    FMUL ST2                            ; 004085e1
    FLD float ptr [EDX + 0x8]           ; 004085e3
    FMULP ST3                           ; 004085e6
    FXCH                                ; 004085e8
    FSTP float ptr [EDX]                ; 004085ea
    FSTP float ptr [EDX + 0x4]          ; 004085ec
    FSTP float ptr [EDX + 0x8]          ; 004085ef
    FLD double ptr [ESP + 0x40]         ; 004085f2
        ;   Label: LAB_004085f2
    FSTP float ptr [ESP + 0xf4]         ; 004085f6
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004085fd
    MOV ESP,EBP                         ; 00408604
    POP EBP                             ; 00408606
    POP ESI                             ; 00408607
    POP EBX                             ; 00408608
    RET                                 ; 00408609
    MOV dword ptr [ESP + 0xf4],0x40000000 ; 0040860a
        ;   Label: LAB_0040860a
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00408615
    MOV ESP,EBP                         ; 0040861c
    POP EBP                             ; 0040861e
    POP ESI                             ; 0040861f
    POP EBX                             ; 00408620
    RET                                 ; 00408621
    MOV dword ptr [EDX + 0x8],0x0       ; 00408622
        ;   Label: LAB_00408622
    MOV EAX,dword ptr [EDX + 0x8]       ; 00408629
    MOV dword ptr [EDX + 0x4],EAX       ; 0040862c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040862f
    MOV dword ptr [EDX],EAX             ; 00408632
    JMP 0x004085f2                      ; 00408634
        ;   XREF to: 004085f2 (UNCONDITIONAL_JUMP)  ; LAB_004085f2
    FLD float ptr [ECX + 0x4]           ; 00408636
        ;   Label: LAB_00408636
    FCOMP float ptr [ESI + 0x14]        ; 00408639
    FNSTSW AX                           ; 0040863c
    SAHF                                ; 0040863e
    JNC 0x004086ec                      ; 0040863f
        ;   XREF to: 004086ec (CONDITIONAL_JUMP)  ; LAB_004086ec
    FLDZ                                ; 00408645
    FLD float ptr [EBX + 0x4]           ; 00408647
    FSTP double ptr [ESP + 0x30]        ; 0040864a
    FCOMP double ptr [ESP + 0x30]       ; 0040864e
    FNSTSW AX                           ; 00408652
    SAHF                                ; 00408654
    JNC 0x0040875b                      ; 00408655
        ;   XREF to: 0040875b (CONDITIONAL_JUMP)  ; LAB_0040875b
    FLD float ptr [ESI + 0x14]          ; 0040865b
    FSUB float ptr [ECX + 0x4]          ; 0040865e
    FST double ptr [ESP + 0x38]         ; 00408661
    FCOMP double ptr [ESP + 0x30]       ; 00408665
    FNSTSW AX                           ; 00408669
    SAHF                                ; 0040866b
    JNC 0x0040875b                      ; 0040866c
        ;   XREF to: 0040875b (CONDITIONAL_JUMP)  ; LAB_0040875b
    FLD double ptr [ESP + 0x38]         ; 00408672
    FDIV double ptr [ESP + 0x30]        ; 00408676
    FLD float ptr [EBX]                 ; 0040867a
    FXCH                                ; 0040867c
    FSTP double ptr [ESP + 0x18]        ; 0040867e
    FMUL double ptr [ESP + 0x18]        ; 00408682
    FLD float ptr [EBX + 0x8]           ; 00408686
    FMUL double ptr [ESP + 0x18]        ; 00408689
    FLD float ptr [ECX]                 ; 0040868d
    FADDP ST2,ST0                       ; 0040868f
    FLD ST1                             ; 00408691
    FMULP ST2                           ; 00408693
    FADD float ptr [ECX + 0x8]          ; 00408695
    FMUL ST0                            ; 00408698
    FADDP                               ; 0040869a
    FCOMP double ptr [ESP + 0x90]       ; 0040869c
    FNSTSW AX                           ; 004086a3
    SAHF                                ; 004086a5
    JBE 0x004086c0                      ; 004086a6
        ;   XREF to: 004086c0 (CONDITIONAL_JUMP)  ; LAB_004086c0
    MOV dword ptr [ESP + 0xf4],0x40000000 ; 004086a8
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004086b3
    MOV ESP,EBP                         ; 004086ba
    POP EBP                             ; 004086bc
    POP ESI                             ; 004086bd
    POP EBX                             ; 004086be
    RET                                 ; 004086bf
    MOV dword ptr [EDX + 0x4],0xbf800000 ; 004086c0
        ;   Label: LAB_004086c0
    FLD double ptr [ESP + 0x18]         ; 004086c7
    MOV dword ptr [EDX + 0x8],0x0       ; 004086cb
    FSTP float ptr [ESP + 0xf4]         ; 004086d2
    MOV dword ptr [EDX],0x0             ; 004086d9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004086df
    MOV ESP,EBP                         ; 004086e6
    POP EBP                             ; 004086e8
    POP ESI                             ; 004086e9
    POP EBX                             ; 004086ea
    RET                                 ; 004086eb
    FLD float ptr [ECX + 0x4]           ; 004086ec
        ;   Label: LAB_004086ec
    FCOMP float ptr [ESI + 0x18]        ; 004086ef
    FNSTSW AX                           ; 004086f2
    SAHF                                ; 004086f4
    JBE 0x0040875b                      ; 004086f5
        ;   XREF to: 0040875b (CONDITIONAL_JUMP)  ; LAB_0040875b
    FLDZ                                ; 004086f7
    FLD float ptr [EBX + 0x4]           ; 004086f9
    FSTP double ptr [ESP + 0x28]        ; 004086fc
    FCOMP double ptr [ESP + 0x28]       ; 00408700
    FNSTSW AX                           ; 00408704
    SAHF                                ; 00408706
    JBE 0x0040875b                      ; 00408707
        ;   XREF to: 0040875b (CONDITIONAL_JUMP)  ; LAB_0040875b
    FLD float ptr [ESI + 0x18]          ; 00408709
    FSUB float ptr [ECX + 0x4]          ; 0040870c
    FST double ptr [ESP + 0x50]         ; 0040870f
    FCOMP double ptr [ESP + 0x28]       ; 00408713
    FNSTSW AX                           ; 00408717
    SAHF                                ; 00408719
    JBE 0x0040875b                      ; 0040871a
        ;   XREF to: 0040875b (CONDITIONAL_JUMP)  ; LAB_0040875b
    FLD double ptr [ESP + 0x50]         ; 0040871c
    FDIV double ptr [ESP + 0x28]        ; 00408720
    FLD float ptr [EBX]                 ; 00408724
    FXCH                                ; 00408726
    FSTP double ptr [ESP + 0x98]        ; 00408728
    FMUL double ptr [ESP + 0x98]        ; 0040872f
    FLD float ptr [EBX + 0x8]           ; 00408736
    FMUL double ptr [ESP + 0x98]        ; 00408739
    FLD float ptr [ECX]                 ; 00408740
    FADDP ST2,ST0                       ; 00408742
    FLD ST1                             ; 00408744
    FMULP ST2                           ; 00408746
    FADD float ptr [ECX + 0x8]          ; 00408748
    FMUL ST0                            ; 0040874b
    FADDP                               ; 0040874d
    FCOMP double ptr [ESP + 0x90]       ; 0040874f
    FNSTSW AX                           ; 00408756
    SAHF                                ; 00408758
    JBE 0x00408773                      ; 00408759
        ;   XREF to: 00408773 (CONDITIONAL_JUMP)  ; LAB_00408773
    MOV dword ptr [ESP + 0xf4],0x40000000 ; 0040875b
        ;   Label: LAB_0040875b
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00408766
    MOV ESP,EBP                         ; 0040876d
    POP EBP                             ; 0040876f
    POP ESI                             ; 00408770
    POP EBX                             ; 00408771
    RET                                 ; 00408772
    MOV dword ptr [EDX + 0x4],0x3f800000 ; 00408773
        ;   Label: LAB_00408773
    FLD double ptr [ESP + 0x98]         ; 0040877a
    MOV dword ptr [EDX + 0x8],0x0       ; 00408781
    FSTP float ptr [ESP + 0xf4]         ; 00408788
    MOV dword ptr [EDX],0x0             ; 0040878f
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00408795
    MOV ESP,EBP                         ; 0040879c
    POP EBP                             ; 0040879e
    POP ESI                             ; 0040879f
    POP EBX                             ; 004087a0
    RET                                 ; 004087a1

