; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00437510(int x,int y,float alpha,int color)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; float            Stack[0xc]:4   alpha
; int              Stack[0x10]:4   color
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_00436f80 at 00437103
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af7c
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af88
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af94
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437510
        ;   Label: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00437510
    PUSH ESI                            ; 00437511
    PUSH EDI                            ; 00437512
    PUSH EBP                            ; 00437513
    MOV EBP,ESP                         ; 00437514
    SUB ESP,0x2c                        ; 00437516
    AND ESP,0xfffffff8                  ; 00437519
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043751c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0043751f
    MOV EDI,dword ptr [EBP + 0x20]      ; 00437522
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00437525 | DAT_01c6b5a8
    JL 0x00437759                       ; 0043752b
        ;   XREF to: 00437759 (CONDITIONAL_JUMP)  ; LAB_00437759
    CMP EAX,dword ptr [0x01c6b5b0]      ; 00437531 | DAT_01c6b5b0
    JG 0x00437759                       ; 00437537
        ;   XREF to: 00437759 (CONDITIONAL_JUMP)  ; LAB_00437759
    CMP ESI,dword ptr [0x01c6b5ac]      ; 0043753d | DAT_01c6b5ac
    JL 0x00437759                       ; 00437543
        ;   XREF to: 00437759 (CONDITIONAL_JUMP)  ; LAB_00437759
    CMP ESI,dword ptr [0x01c6b5b4]      ; 00437549 | DAT_01c6b5b4
    JG 0x00437759                       ; 0043754f
        ;   XREF to: 00437759 (CONDITIONAL_JUMP)  ; LAB_00437759
    MOV ECX,dword ptr [0x005fba20]      ; 00437555 | DAT_005fba20
    CMP ECX,0x8                         ; 0043755b
    JZ 0x00437759                       ; 0043755e
        ;   XREF to: 00437759 (CONDITIONAL_JUMP)  ; LAB_00437759
    LEA EDX,[ESI*0x4 + 0x0]             ; 00437564
    CMP ECX,0x10                        ; 0043756b
    JZ 0x00437760                       ; 0043756e
        ;   XREF to: 00437760 (CONDITIONAL_JUMP)  ; LAB_00437760
    LEA EBX,[EAX*0x4 + 0x0]             ; 00437574
    MOV EDX,dword ptr [EDX + 0x1c5faec] ; 0043757b
    ADD EBX,EDX                         ; 00437581
    MOV CL,byte ptr [0x01c6af74]        ; 00437583 | DAT_01c6af74
    MOV EDX,dword ptr [EBX]             ; 00437589
    SHR EDX,CL                          ; 0043758b
    XOR ECX,ECX                         ; 0043758d
    AND EDX,0xff                        ; 0043758f
    MOV dword ptr [ESP + 0x14],ECX      ; 00437595
    MOV dword ptr [ESP + 0x10],EDX      ; 00437599
    FILD qword ptr [ESP + 0x10]         ; 0043759d
    MOV CL,byte ptr [0x01c6af80]        ; 004375a1 | DAT_01c6af80
    MOV EDX,dword ptr [EBX]             ; 004375a7
    FLD float ptr [EBP + 0x1c]          ; 004375a9
    FXCH                                ; 004375ac
    FMUL ST1                            ; 004375ae
    SHR EDX,CL                          ; 004375b0
    XOR ECX,ECX                         ; 004375b2
    AND EDX,0xff                        ; 004375b4
    MOV dword ptr [ESP + 0x14],ECX      ; 004375ba
    MOV dword ptr [ESP + 0x10],EDX      ; 004375be
    FILD qword ptr [ESP + 0x10]         ; 004375c2
    MOV CL,byte ptr [0x01c6af8c]        ; 004375c6 | DAT_01c6af8c
    MOV EDX,dword ptr [EBX]             ; 004375cc
    FMUL ST2                            ; 004375ce
    SHR EDX,CL                          ; 004375d0
    XOR EBX,EBX                         ; 004375d2
    AND EDX,0xff                        ; 004375d4
    MOV dword ptr [ESP + 0x24],EBX      ; 004375da
    MOV dword ptr [ESP + 0x20],EDX      ; 004375de
    FILD qword ptr [ESP + 0x20]         ; 004375e2
    FMULP ST3                           ; 004375e6
        ;   Label: LAB_004375e6
    FXCH                                ; 004375e8
    FSTP float ptr [ESP + 0x4]          ; 004375ea
    FSTP float ptr [ESP]                ; 004375ee
    FSTP float ptr [ESP + 0xc]          ; 004375f1
    CMP dword ptr [0x005fba20],0x10     ; 004375f5 | DAT_005fba20
    JNZ 0x004377ee                      ; 004375fc
        ;   XREF to: 004377ee (CONDITIONAL_JUMP)  ; LAB_004377ee
    MOV DX,word ptr [EDI*0x2 + 0x1c6ad74] ; 00437602
    AND EDX,0xffff                      ; 0043760a
    MOV CL,byte ptr [0x01c6af74]        ; 00437610 | DAT_01c6af74
    MOV EBX,EDX                         ; 00437616
    SHR EBX,CL                          ; 00437618
    MOV CL,byte ptr [0x01c6af7c]        ; 0043761a | DAT_01c6af7c
    SHL EBX,CL                          ; 00437620
    MOV ECX,EBX                         ; 00437622
    AND ECX,0xff                        ; 00437624
    MOV EDI,EDX                         ; 0043762a
    MOV dword ptr [ESP + 0x8],ECX       ; 0043762c
    MOV CL,byte ptr [0x01c6af80]        ; 00437630 | DAT_01c6af80
    SHR EDI,CL                          ; 00437636
    MOV CL,byte ptr [0x01c6af88]        ; 00437638 | DAT_01c6af88
    SHL EDI,CL                          ; 0043763e
    MOV CL,byte ptr [0x01c6af8c]        ; 00437640 | DAT_01c6af8c
    SHR EDX,CL                          ; 00437646
    MOV CL,byte ptr [0x01c6af94]        ; 00437648 | DAT_01c6af94
    SHL EDX,CL                          ; 0043764e
    MOV ECX,EDX                         ; 00437650
        ;   Label: LAB_00437650
    AND EDI,0xff                        ; 00437652
    AND ECX,0xff                        ; 00437658
    FLD float ptr [EBP + 0x1c]          ; 0043765e
    XOR EBX,EBX                         ; 00437661
    MOV EDX,dword ptr [ESP + 0x8]       ; 00437663
    MOV dword ptr [ESP + 0x24],EBX      ; 00437667
    MOV dword ptr [ESP + 0x20],EDX      ; 0043766b
    FLD1                                ; 0043766f
    FILD qword ptr [ESP + 0x20]         ; 00437671
    FXCH                                ; 00437675
    FSUBRP ST2,ST0                      ; 00437677
    FMUL ST1                            ; 00437679
    MOV dword ptr [ESP + 0x18],EDI      ; 0043767b
    MOV dword ptr [ESP + 0x10],ECX      ; 0043767f
    MOV dword ptr [ESP + 0x1c],EBX      ; 00437683
    MOV dword ptr [ESP + 0x14],EBX      ; 00437687
    FILD qword ptr [ESP + 0x18]         ; 0043768b
    FMUL ST2                            ; 0043768f
    FILD qword ptr [ESP + 0x10]         ; 00437691
    FMULP ST3                           ; 00437695
    SHL ESI,0x2                         ; 00437697
    MOV EDI,dword ptr [0x005fba20]      ; 0043769a | DAT_005fba20
    FLD float ptr [ESP + 0x4]           ; 004376a0
    FLD float ptr [ESP]                 ; 004376a4
    FLD float ptr [ESP + 0xc]           ; 004376a7
    FXCH ST4                            ; 004376ab
    FADD ST0,ST2                        ; 004376ad
    FXCH ST3                            ; 004376af
    FADD ST0,ST1                        ; 004376b1
    FXCH ST5                            ; 004376b3
    FADD ST0,ST4                        ; 004376b5
    FXCH ST3                            ; 004376b7
    FSTP ST2                            ; 004376b9
    FXCH ST4                            ; 004376bb
    FSTP ST4                            ; 004376bd
    FXCH                                ; 004376bf
    FSTP ST2                            ; 004376c1
    FSTP float ptr [ESP + 0x4]          ; 004376c3
    FXCH                                ; 004376c7
    FSTP float ptr [ESP]                ; 004376c9
    FSTP float ptr [ESP + 0xc]          ; 004376cc
    CMP EDI,0x10                        ; 004376d0
    JNZ 0x0043782e                      ; 004376d3
        ;   XREF to: 0043782e (CONDITIONAL_JUMP)  ; LAB_0043782e
    FLD float ptr [ESP + 0x4]           ; 004376d9
    FLD float ptr [ESP]                 ; 004376dd
    FLD float ptr [ESP + 0xc]           ; 004376e0
    MOV CL,byte ptr [0x01c6af7c]        ; 004376e4 | DAT_01c6af7c
    FXCH ST2                            ; 004376ea
    CALL crt_math.c_round_FUN_005a3120  ; 004376ec
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004376f1
    CALL crt_math.c_round_FUN_005a3120  ; 004376f3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 004376f8
    CALL crt_math.c_round_FUN_005a3120  ; 004376fa
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004376ff
    FISTP qword ptr [ESP + 0x10]        ; 00437701
    FXCH                                ; 00437705
    FISTP qword ptr [ESP + 0x20]        ; 00437707
    FISTP qword ptr [ESP + 0x18]        ; 0043770b
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043770f
    MOV EDX,dword ptr [ESP + 0x20]      ; 00437713
    SHR EDI,CL                          ; 00437717
    MOV CL,byte ptr [0x01c6af88]        ; 00437719 | DAT_01c6af88
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043771f
    SHR EDX,CL                          ; 00437723
    MOV CL,byte ptr [0x01c6af94]        ; 00437725 | DAT_01c6af94
    SHR EBX,CL                          ; 0043772b
    LEA ECX,[EAX + EAX*0x1]             ; 0043772d
    MOV EAX,dword ptr [ESI + 0x1c5faec] ; 00437730
    MOV ESI,EDI                         ; 00437736
    ADD EAX,ECX                         ; 00437738
    MOV CL,byte ptr [0x01c6af74]        ; 0043773a | DAT_01c6af74
    SHL ESI,CL                          ; 00437740
    MOV CL,byte ptr [0x01c6af80]        ; 00437742 | DAT_01c6af80
    SHL EDX,CL                          ; 00437748
    MOV CL,byte ptr [0x01c6af8c]        ; 0043774a | DAT_01c6af8c
    OR EDX,ESI                          ; 00437750
    SHL EBX,CL                          ; 00437752
    OR EDX,EBX                          ; 00437754
    MOV word ptr [EAX],DX               ; 00437756
    MOV ESP,EBP                         ; 00437759
        ;   Label: LAB_00437759
    POP EBP                             ; 0043775b
    POP EDI                             ; 0043775c
    POP ESI                             ; 0043775d
    POP EBX                             ; 0043775e
    RET                                 ; 0043775f
    MOV EDX,dword ptr [EDX + 0x1c5faec] ; 00437760
        ;   Label: LAB_00437760
    MOV DX,word ptr [EDX + EAX*0x2]     ; 00437766
    AND EDX,0xffff                      ; 0043776a
    MOV CL,byte ptr [0x01c6af74]        ; 00437770 | DAT_01c6af74
    MOV EBX,EDX                         ; 00437776
    SHR EBX,CL                          ; 00437778
    MOV CL,byte ptr [0x01c6af7c]        ; 0043777a | DAT_01c6af7c
    SHL EBX,CL                          ; 00437780
    XOR ECX,ECX                         ; 00437782
    AND EBX,0xff                        ; 00437784
    MOV dword ptr [ESP + 0x14],ECX      ; 0043778a
    MOV dword ptr [ESP + 0x10],EBX      ; 0043778e
    FILD qword ptr [ESP + 0x10]         ; 00437792
    MOV CL,byte ptr [0x01c6af80]        ; 00437796 | DAT_01c6af80
    MOV EBX,EDX                         ; 0043779c
    FLD float ptr [EBP + 0x1c]          ; 0043779e
    FXCH                                ; 004377a1
    FMUL ST1                            ; 004377a3
    SHR EBX,CL                          ; 004377a5
    MOV CL,byte ptr [0x01c6af88]        ; 004377a7 | DAT_01c6af88
    SHL EBX,CL                          ; 004377ad
    XOR ECX,ECX                         ; 004377af
    AND EBX,0xff                        ; 004377b1
    MOV dword ptr [ESP + 0x14],ECX      ; 004377b7
    MOV dword ptr [ESP + 0x10],EBX      ; 004377bb
    FILD qword ptr [ESP + 0x10]         ; 004377bf
    MOV CL,byte ptr [0x01c6af8c]        ; 004377c3 | DAT_01c6af8c
    FMUL ST2                            ; 004377c9
    SHR EDX,CL                          ; 004377cb
    MOV CL,byte ptr [0x01c6af94]        ; 004377cd | DAT_01c6af94
    SHL EDX,CL                          ; 004377d3
    XOR EBX,EBX                         ; 004377d5
    AND EDX,0xff                        ; 004377d7
    MOV dword ptr [ESP + 0x14],EBX      ; 004377dd
    MOV dword ptr [ESP + 0x10],EDX      ; 004377e1
    FILD qword ptr [ESP + 0x10]         ; 004377e5
    JMP 0x004375e6                      ; 004377e9
        ;   XREF to: 004375e6 (UNCONDITIONAL_JUMP)  ; LAB_004375e6
    LEA EBX,[EDI*0x4 + 0x0]             ; 004377ee
        ;   Label: LAB_004377ee
    MOV CL,byte ptr [0x01c6af74]        ; 004377f5 | DAT_01c6af74
    MOV EDX,dword ptr [EBX + 0x1c6a974] ; 004377fb
    SHR EDX,CL                          ; 00437801
    MOV EDI,dword ptr [EBX + 0x1c6a974] ; 00437803
    AND EDX,0xff                        ; 00437809
    MOV CL,byte ptr [0x01c6af80]        ; 0043780f | DAT_01c6af80
    MOV dword ptr [ESP + 0x8],EDX       ; 00437815
    SHR EDI,CL                          ; 00437819
    MOV CL,byte ptr [0x01c6af8c]        ; 0043781b | DAT_01c6af8c
    MOV EDX,dword ptr [EBX + 0x1c6a974] ; 00437821
    SHR EDX,CL                          ; 00437827
    JMP 0x00437650                      ; 00437829
        ;   XREF to: 00437650 (UNCONDITIONAL_JUMP)  ; LAB_00437650
    FLD float ptr [ESP + 0x4]           ; 0043782e
        ;   Label: LAB_0043782e
    FLD float ptr [ESP]                 ; 00437832
    FLD float ptr [ESP + 0xc]           ; 00437835
    MOV CL,byte ptr [0x01c6af74]        ; 00437839 | DAT_01c6af74
    FXCH ST2                            ; 0043783f
    CALL crt_math.c_round_FUN_005a3120  ; 00437841
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00437846
    CALL crt_math.c_round_FUN_005a3120  ; 00437848
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 0043784d
    CALL crt_math.c_round_FUN_005a3120  ; 0043784f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    SHL EAX,0x2                         ; 00437854
    FXCH                                ; 00437857
    FISTP qword ptr [ESP + 0x18]        ; 00437859
    FXCH                                ; 0043785d
    FISTP qword ptr [ESP + 0x10]        ; 0043785f
    FISTP qword ptr [ESP + 0x20]        ; 00437863
    MOV EDX,dword ptr [ESP + 0x10]      ; 00437867
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043786b
    MOV dword ptr [ESP + 0x28],EDX      ; 0043786f
    SHL EBX,CL                          ; 00437873
    MOV EDX,dword ptr [ESI + 0x1c5faec] ; 00437875
    MOV CL,byte ptr [0x01c6af80]        ; 0043787b | DAT_01c6af80
    ADD EDX,EAX                         ; 00437881
    MOV EAX,dword ptr [ESP + 0x28]      ; 00437883
    MOV EDI,dword ptr [ESP + 0x20]      ; 00437887
    SHL EAX,CL                          ; 0043788b
    MOV CL,byte ptr [0x01c6af8c]        ; 0043788d | DAT_01c6af8c
    OR EAX,EBX                          ; 00437893
    SHL EDI,CL                          ; 00437895
    OR EAX,EDI                          ; 00437897
    MOV dword ptr [EDX],EAX             ; 00437899
    MOV ESP,EBP                         ; 0043789b
    POP EBP                             ; 0043789d
    POP EDI                             ; 0043789e
    POP ESI                             ; 0043789f
    POP EBX                             ; 004378a0
    RET                                 ; 004378a1

