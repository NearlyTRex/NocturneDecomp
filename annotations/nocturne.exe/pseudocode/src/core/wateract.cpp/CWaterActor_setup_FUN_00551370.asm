; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_CWaterActor_setup_FUN_00551370(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005975d7
;   undefined4 DAT_005975df
;   undefined4 DAT_005975e7
;   undefined4 DAT_005975ef
;   undefined4 DAT_005975f7
;   undefined4 DAT_005975ff
;   undefined4 DAT_00597607
;   undefined4 DAT_0059760f
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00551920
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551370
        ;   Label: core_wateract.cpp_CWaterActor_setup_FUN_00551370
    PUSH ESI                            ; 00551371
    PUSH EDI                            ; 00551372
    PUSH EBP                            ; 00551373
    MOV EBP,ESP                         ; 00551374
    SUB ESP,0x40                        ; 00551376
    AND ESP,0xfffffff8                  ; 00551379
    MOV EDI,dword ptr [EBP + 0x14]      ; 0055137c
    PUSH EDI                            ; 0055137f
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00551380
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    FLD float ptr [EDI + 0x160]         ; 00551385
    FMUL float ptr [EDI + 0x274]        ; 0055138b
    ADD ESP,0x4                         ; 00551391
    FSUBR float ptr [EDI + 0x24]        ; 00551394
    MOV EDX,dword ptr [EDI + 0x280]     ; 00551397
    FSTP float ptr [EDI + 0x2b228]      ; 0055139d
    TEST EDX,EDX                        ; 005513a3
    JNZ 0x0055142b                      ; 005513a5
        ;   XREF to: 0055142b (CONDITIONAL_JUMP)  ; LAB_0055142b
    FLD1                                ; 005513ab
        ;   Label: LAB_005513ab
    FLD float ptr [EDI + 0x158]         ; 005513ad
    FXCH                                ; 005513b3
    FDIV float ptr [EDI + 0x27c]        ; 005513b5
    FXCH                                ; 005513bb
    FMUL ST1                            ; 005513bd
    FLD float ptr [EDI + 0x150]         ; 005513bf
    FMULP ST2                           ; 005513c5
    CALL crt_math.c_round_FUN_00563a30  ; 005513c7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc]         ; 005513cc
    MOV EAX,dword ptr [ESP + 0xc]       ; 005513d0
    CALL crt_math.c_round_FUN_00563a30  ; 005513d4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    INC EAX                             ; 005513d9
    FISTP dword ptr [ESP + 0x3c]        ; 005513da
    MOV dword ptr [ESP + 0x14],EAX      ; 005513de
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005513e2
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005513e6
    MOV dword ptr [EDI + 0x7f98],EAX    ; 005513ea
    MOV EAX,dword ptr [ESP + 0xc]       ; 005513f0
    INC EBX                             ; 005513f4
    MOV dword ptr [EDI + 0x7f9c],EAX    ; 005513f5
    MOV EAX,dword ptr [ESP + 0x14]      ; 005513fb
    IMUL EAX,EBX                        ; 005513ff
    MOV dword ptr [EDI + 0x290],EAX     ; 00551402
    CMP EAX,0x3e8                       ; 00551408
    JLE 0x00551664                      ; 0055140d
        ;   XREF to: 00551664 (CONDITIONAL_JUMP)  ; LAB_00551664
    FLD float ptr [EDI + 0x27c]         ; 00551413
    FLD ST0                             ; 00551419
    FMUL double ptr [0x005975df]        ; 0055141b | DAT_005975df
    FSTP ST1                            ; 00551421
    FSTP float ptr [EDI + 0x27c]        ; 00551423
    JMP 0x005513ab                      ; 00551429
        ;   XREF to: 005513ab (UNCONDITIONAL_JUMP)  ; LAB_005513ab
    MOV dword ptr [EDI + 0x2b22c],0x20  ; 0055142b
        ;   Label: LAB_0055142b
    MOV dword ptr [EDI + 0x290],0x0     ; 00551435
    MOV ECX,dword ptr [EDI + 0x2b22c]   ; 0055143f
    XOR EDX,EDX                         ; 00551445
    TEST ECX,ECX                        ; 00551447
    JLE 0x00551557                      ; 00551449
        ;   XREF to: 00551557 (CONDITIONAL_JUMP)  ; LAB_00551557
    FLD double ptr [0x0059760f]         ; 0055144f | DAT_0059760f
    FLD double ptr [0x005975ff]         ; 00551455 | DAT_005975ff
    FLD double ptr [0x005975f7]         ; 0055145b | DAT_005975f7
    MOV dword ptr [ESP + 0x3c],EDX      ; 00551461
        ;   Label: LAB_00551461
    FILD dword ptr [EDI + 0x2b22c]      ; 00551465
    FILD dword ptr [ESP + 0x3c]         ; 0055146b
    FDIVRP                              ; 0055146f
    FMUL double ptr [0x005975e7]        ; 00551471 | DAT_005975e7
    FMUL double ptr [0x005975df]        ; 00551477 | DAT_005975df
    FLD float ptr [EDI + 0x150]         ; 0055147d
    FLD ST1                             ; 00551483
    FCOS                                ; 00551485
    FXCH ST2                            ; 00551487
    FSIN                                ; 00551489
    FXCH ST2                            ; 0055148b
    FMULP                               ; 0055148d
    MOV EAX,dword ptr [EDI + 0x290]     ; 0055148f
    FMUL double ptr [0x005975ef]        ; 00551495 | DAT_005975ef
    SHL EAX,0x5                         ; 0055149b
    FSTP float ptr [EDI + EAX*0x1 + 0x294] ; 0055149e
    MOV EAX,dword ptr [EDI + 0x290]     ; 005514a5
    SHL EAX,0x5                         ; 005514ab
    MOV dword ptr [EDI + EAX*0x1 + 0x298],0x0 ; 005514ae
    FMUL float ptr [EDI + 0x158]        ; 005514b9
    MOV EAX,dword ptr [EDI + 0x290]     ; 005514bf
    FMUL double ptr [0x005975ef]        ; 005514c5 | DAT_005975ef
    SHL EAX,0x5                         ; 005514cb
    FSTP float ptr [EDI + EAX*0x1 + 0x29c] ; 005514ce
    MOV ECX,dword ptr [EDI + 0x290]     ; 005514d5
    SHL ECX,0x5                         ; 005514db
    FLD float ptr [ECX + EDI*0x1 + 0x294] ; 005514de
    FDIV float ptr [EDI + 0x150]        ; 005514e5
    FMUL ST1                            ; 005514eb
    FMUL ST2                            ; 005514ed
    FADD ST0,ST3                        ; 005514ef
    CALL crt_math.c_round_FUN_00563a30  ; 005514f1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc]         ; 005514f6
    MOV EAX,dword ptr [ESP + 0xc]       ; 005514fa
    MOV dword ptr [ECX + EDI*0x1 + 0x2ac],EAX ; 005514fe
    MOV ECX,dword ptr [EDI + 0x290]     ; 00551505
    SHL ECX,0x5                         ; 0055150b
    FLD float ptr [ECX + EDI*0x1 + 0x29c] ; 0055150e
    FDIV float ptr [EDI + 0x158]        ; 00551515
    FMUL ST1                            ; 0055151b
    FMUL ST2                            ; 0055151d
    FADD ST0,ST3                        ; 0055151f
    CALL crt_math.c_round_FUN_00563a30  ; 00551521
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x3c]        ; 00551526
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0055152a
    MOV dword ptr [ECX + EDI*0x1 + 0x2b0],EAX ; 0055152e
    MOV EBX,dword ptr [EDI + 0x290]     ; 00551535
    INC EDX                             ; 0055153b
    INC EBX                             ; 0055153c
    MOV ESI,dword ptr [EDI + 0x2b22c]   ; 0055153d
    MOV dword ptr [EDI + 0x290],EBX     ; 00551543
    CMP EDX,ESI                         ; 00551549
    JL 0x00551461                       ; 0055154b
        ;   XREF to: 00551461 (CONDITIONAL_JUMP)  ; LAB_00551461
    FSTP ST0                            ; 00551551
    FSTP ST0                            ; 00551553
    FSTP ST0                            ; 00551555
    MOV EDX,dword ptr [EDI + 0x290]     ; 00551557
        ;   Label: LAB_00551557
    LEA EAX,[EDI + 0x294]               ; 0055155d
    SHL EDX,0x5                         ; 00551563
    MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0 ; 00551566
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x8] ; 0055156e
    MOV dword ptr [EDX + EAX*0x1 + 0x4],ECX ; 00551572
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4] ; 00551576
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 0055157a
    MOV EDX,dword ptr [EDI + 0x290]     ; 0055157d
    MOV ECX,dword ptr [EDI + 0x2b22c]   ; 00551583
    XOR EAX,EAX                         ; 00551589
    INC EDX                             ; 0055158b
    MOV dword ptr [ESP + 0x34],EAX      ; 0055158c
    MOV dword ptr [EDI + 0x290],EDX     ; 00551590
    TEST ECX,ECX                        ; 00551596
    JLE 0x00551640                      ; 00551598
        ;   XREF to: 00551640 (CONDITIONAL_JUMP)  ; LAB_00551640
    LEA ECX,[EDI + 0x7fa0]              ; 0055159e
    MOV ESI,EDI                         ; 005515a4
    MOV dword ptr [ECX + 0x4],0x3       ; 005515a6
        ;   Label: LAB_005515a6
    MOV dword ptr [ECX + 0x14],0x0      ; 005515ad
    MOV EAX,dword ptr [ECX + 0x14]      ; 005515b4
    MOV dword ptr [ECX + 0x10],EAX      ; 005515b7
    MOV dword ptr [ECX + 0xc],EAX       ; 005515ba
    MOV EBX,dword ptr [ESP + 0x34]      ; 005515bd
    MOV dword ptr [ECX + 0x8],EAX       ; 005515c1
    INC EBX                             ; 005515c4
    MOV EAX,dword ptr [EDI + 0x2b22c]   ; 005515c5
    MOV dword ptr [ECX + 0x1c],0x0      ; 005515cb
    MOV EDX,EBX                         ; 005515d2
    MOV dword ptr [ECX + 0x20],0x0      ; 005515d4
    SAR EDX,0x1f                        ; 005515db
    MOV dword ptr [ECX + 0x18],EAX      ; 005515de
    MOV EAX,EBX                         ; 005515e1
    IDIV dword ptr [EDI + 0x2b22c]      ; 005515e3
    MOV EAX,dword ptr [ESP + 0x34]      ; 005515e9
    MOV dword ptr [ECX + 0x24],EAX      ; 005515ed
    MOV EAX,dword ptr [ESI + 0x2ac]     ; 005515f0
    MOV dword ptr [ECX + 0x28],EAX      ; 005515f6
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005515f9
    MOV dword ptr [ECX + 0x30],EDX      ; 005515ff
    SHL EDX,0x5                         ; 00551602
    MOV dword ptr [ECX + 0x2c],EAX      ; 00551605
    LEA EAX,[EDI + EDX*0x1]             ; 00551608
    MOV EDX,dword ptr [EAX + 0x2ac]     ; 0055160b
    MOV dword ptr [ECX + 0x34],EDX      ; 00551611
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00551614
    ADD ESI,0x20                        ; 0055161a
    MOV dword ptr [ECX + 0x38],EAX      ; 0055161d
    ADD ECX,0x48                        ; 00551620
    MOV EAX,dword ptr [EDI + 0x2b22c]   ; 00551623
    MOV dword ptr [ESP + 0x34],EBX      ; 00551629
    CMP EBX,EAX                         ; 0055162d
    JL 0x005515a6                       ; 0055162f
        ;   XREF to: 005515a6 (CONDITIONAL_JUMP)  ; LAB_005515a6
    LEA EAX,[EAX]                       ; 00551635
    LEA EDX,[EDX]                       ; 0055163b
    MOV EBX,EBX                         ; 0055163e
    PUSH EDI                            ; 00551640
        ;   Label: LAB_00551640
    CALL core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00551920 ; 00551641
        ;   XREF to: 00551920 (UNCONDITIONAL_CALL)  ; undefined core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00551920()
    MOV dword ptr [EDI + 0x2b220],0x0   ; 00551646
    ADD ESP,0x4                         ; 00551650
    MOV dword ptr [EDI + 0x2b224],0x0   ; 00551653
    MOV ESP,EBP                         ; 0055165d
    POP EBP                             ; 0055165f
    POP EDI                             ; 00551660
    POP ESI                             ; 00551661
    POP EBX                             ; 00551662
    RET                                 ; 00551663
    LEA EAX,[EBX + -0x1]                ; 00551664
        ;   Label: LAB_00551664
    MOV dword ptr [ESP + 0x3c],EAX      ; 00551667
    FILD dword ptr [ESP + 0x3c]         ; 0055166b
    FDIVR float ptr [EDI + 0x150]       ; 0055166f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00551675
    DEC EAX                             ; 00551679
    MOV dword ptr [ESP + 0x3c],EAX      ; 0055167a
    FILD dword ptr [ESP + 0x3c]         ; 0055167e
    FDIVR float ptr [EDI + 0x158]       ; 00551682
    FLD float ptr [EDI + 0x158]         ; 00551688
    FCHS                                ; 0055168e
    FMUL double ptr [0x005975d7]        ; 00551690 | DAT_005975d7
    XOR EDX,EDX                         ; 00551696
    MOV ECX,dword ptr [ESP + 0x14]      ; 00551698
    MOV dword ptr [ESP + 0x38],EDX      ; 0055169c
    FSTP float ptr [ESP + 0x1c]         ; 005516a0
    FXCH                                ; 005516a4
    FSTP float ptr [ESP + 0x18]         ; 005516a6
    FSTP float ptr [ESP + 0x10]         ; 005516aa
    TEST ECX,ECX                        ; 005516ae
    JLE 0x0055179e                      ; 005516b0
        ;   XREF to: 0055179e (CONDITIONAL_JUMP)  ; LAB_0055179e
    LEA EAX,[EDI + 0x294]               ; 005516b6
    MOV dword ptr [ESP + 0x30],EAX      ; 005516bc
    FLD float ptr [EDI + 0x150]         ; 005516c0
        ;   Label: LAB_005516c0
    FCHS                                ; 005516c6
    FMUL double ptr [0x005975d7]        ; 005516c8 | DAT_005975d7
    XOR ECX,ECX                         ; 005516ce
    FSTP float ptr [ESP + 0x28]         ; 005516d0
    TEST EBX,EBX                        ; 005516d4
    JLE 0x0055177d                      ; 005516d6
        ;   XREF to: 0055177d (CONDITIONAL_JUMP)  ; LAB_0055177d
    FLD double ptr [0x00597607]         ; 005516dc | DAT_00597607
    MOV ESI,dword ptr [ESP + 0x30]      ; 005516e2
    FLD double ptr [0x005975ff]         ; 005516e6 | DAT_005975ff
    MOV EAX,EDX                         ; 005516ec
    FLD double ptr [0x005975d7]         ; 005516ee | DAT_005975d7
    SHL EAX,0x5                         ; 005516f4
    FLD float ptr [ESP + 0x18]          ; 005516f7
    ADD EAX,ESI                         ; 005516fb
    MOV ESI,dword ptr [ESP + 0x28]      ; 005516fd
        ;   Label: LAB_005516fd
    MOV dword ptr [EAX + 0x4],0x0       ; 00551701
    MOV dword ptr [EAX],ESI             ; 00551708
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0055170a
    MOV dword ptr [EAX + 0x8],ESI       ; 0055170e
    FLD float ptr [EDI + 0x150]         ; 00551711
    FLD ST0                             ; 00551717
    FMUL ST3                            ; 00551719
    FADD float ptr [EAX]                ; 0055171b
    FDIVRP                              ; 0055171d
    FMUL ST4                            ; 0055171f
    FMUL ST3                            ; 00551721
    CALL crt_math.c_round_FUN_00563a30  ; 00551723
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x3c]        ; 00551728
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0055172c
    ADD ESI,0x20000                     ; 00551730
    MOV dword ptr [EAX + 0x18],ESI      ; 00551736
    FLD float ptr [EAX + 0x8]           ; 00551739
    FDIV float ptr [EDI + 0x158]        ; 0055173c
    FLD1                                ; 00551742
    FSUBRP                              ; 00551744
    FMUL ST4                            ; 00551746
    FMUL ST3                            ; 00551748
    FLD float ptr [ESP + 0x28]          ; 0055174a
    ADD EAX,0x20                        ; 0055174e
    INC EDX                             ; 00551751
    INC ECX                             ; 00551752
    FXCH                                ; 00551753
    CALL crt_math.c_round_FUN_00563a30  ; 00551755
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x3c]        ; 0055175a
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0055175e
    FADD ST0,ST1                        ; 00551762
    ADD ESI,0x20000                     ; 00551764
    FSTP float ptr [ESP + 0x28]         ; 0055176a
    MOV dword ptr [EAX + -0x4],ESI      ; 0055176e
    CMP ECX,EBX                         ; 00551771
    JL 0x005516fd                       ; 00551773
        ;   XREF to: 005516fd (CONDITIONAL_JUMP)  ; LAB_005516fd
    FSTP ST0                            ; 00551775
    FSTP ST0                            ; 00551777
    FSTP ST0                            ; 00551779
    FSTP ST0                            ; 0055177b
    FLD float ptr [ESP + 0x1c]          ; 0055177d
        ;   Label: LAB_0055177d
    MOV ECX,dword ptr [ESP + 0x38]      ; 00551781
    MOV ESI,dword ptr [ESP + 0x14]      ; 00551785
    FADD float ptr [ESP + 0x10]         ; 00551789
    INC ECX                             ; 0055178d
    FSTP float ptr [ESP + 0x1c]         ; 0055178e
    MOV dword ptr [ESP + 0x38],ECX      ; 00551792
    CMP ECX,ESI                         ; 00551796
    JL 0x005516c0                       ; 00551798
        ;   XREF to: 005516c0 (CONDITIONAL_JUMP)  ; LAB_005516c0
    LEA ECX,[EDI + 0x7fa0]              ; 0055179e
        ;   Label: LAB_0055179e
    XOR EAX,EAX                         ; 005517a4
    MOV EDX,dword ptr [EDI + 0x7f9c]    ; 005517a6
    MOV dword ptr [ESP + 0x20],EAX      ; 005517ac
    TEST EDX,EDX                        ; 005517b0
    JLE 0x005518fd                      ; 005517b2
        ;   XREF to: 005518fd (CONDITIONAL_JUMP)  ; LAB_005518fd
    MOV EBX,dword ptr [EDI + 0x7f98]    ; 005517b8
        ;   Label: LAB_005517b8
    XOR ESI,ESI                         ; 005517be
    TEST EBX,EBX                        ; 005517c0
    JLE 0x005518e6                      ; 005517c2
        ;   XREF to: 005518e6 (CONDITIONAL_JUMP)  ; LAB_005518e6
    MOV EAX,dword ptr [ESP + 0x20]      ; 005517c8
    MOV EDX,EAX                         ; 005517cc
    MOV EBX,0x4                         ; 005517ce
    SAR EDX,0x1f                        ; 005517d3
    IDIV EBX                            ; 005517d6
    MOV EAX,EDX                         ; 005517d8
    INC EDX                             ; 005517da
    SHL EAX,0x16                        ; 005517db
    SHL EDX,0x16                        ; 005517de
    MOV dword ptr [ESP + 0x24],EAX      ; 005517e1
    MOV dword ptr [ESP + 0x2c],EDX      ; 005517e5
    MOV dword ptr [ECX + 0x4],0x3       ; 005517e9
        ;   Label: LAB_005517e9
    MOV dword ptr [ECX + 0x14],0x0      ; 005517f0
    MOV EAX,dword ptr [ECX + 0x14]      ; 005517f7
    MOV dword ptr [ECX + 0x10],EAX      ; 005517fa
    MOV dword ptr [ECX + 0xc],EAX       ; 005517fd
    MOV dword ptr [ECX + 0x8],EAX       ; 00551800
    MOV EBX,dword ptr [EDI + 0x7f98]    ; 00551803
    MOV EAX,dword ptr [ESP + 0x20]      ; 00551809
    INC EBX                             ; 0055180d
    IMUL EBX,EAX                        ; 0055180e
    MOV EDX,ESI                         ; 00551811
    MOV dword ptr [ESP + 0x3c],0x4      ; 00551813
    SAR EDX,0x1f                        ; 0055181b
    MOV EAX,ESI                         ; 0055181e
    IDIV dword ptr [ESP + 0x3c]         ; 00551820
    ADD EBX,ESI                         ; 00551824
    MOV dword ptr [ECX + 0x30],EBX      ; 00551826
    MOV dword ptr [ESP + 0x3c],EDX      ; 00551829
    MOV EAX,EDX                         ; 0055182d
    MOV EDX,dword ptr [ESP + 0x24]      ; 0055182f
    INC EBX                             ; 00551833
    MOV dword ptr [ECX + 0x38],EDX      ; 00551834
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00551837
    MOV dword ptr [ECX + 0x24],EBX      ; 0055183b
    INC EDX                             ; 0055183e
    SHL EAX,0x16                        ; 0055183f
    SHL EDX,0x16                        ; 00551842
    MOV dword ptr [ECX + 0x34],EAX      ; 00551845
    MOV dword ptr [ESP + 0x3c],EDX      ; 00551848
    MOV dword ptr [ECX + 0x28],EDX      ; 0055184c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0055184f
    MOV dword ptr [ECX + 0x2c],EDX      ; 00551853
    MOV EDX,dword ptr [EDI + 0x7f98]    ; 00551856
    INC EDX                             ; 0055185c
    ADD EBX,EDX                         ; 0055185d
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0055185f
    MOV dword ptr [ECX + 0x18],EBX      ; 00551863
    MOV dword ptr [ECX + 0x1c],EDX      ; 00551866
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00551869
    MOV dword ptr [ECX + 0x20],EDX      ; 0055186d
    MOV dword ptr [ECX + 0x4c],0x3      ; 00551870
    MOV dword ptr [ECX + 0x5c],0x0      ; 00551877
    MOV EDX,dword ptr [ECX + 0x5c]      ; 0055187e
    MOV dword ptr [ECX + 0x58],EDX      ; 00551881
    MOV dword ptr [ECX + 0x54],EDX      ; 00551884
    MOV dword ptr [ECX + 0x50],EDX      ; 00551887
    MOV EDX,dword ptr [EDI + 0x7f98]    ; 0055188a
    MOV EBX,dword ptr [ESP + 0x20]      ; 00551890
    INC EDX                             ; 00551894
    IMUL EDX,EBX                        ; 00551895
    MOV dword ptr [ECX + 0x7c],EAX      ; 00551898
    LEA EBX,[ESI + EDX*0x1]             ; 0055189b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0055189e
    MOV dword ptr [ECX + 0x78],EBX      ; 005518a2
    MOV dword ptr [ECX + 0x80],EDX      ; 005518a5
    MOV EDX,dword ptr [EDI + 0x7f98]    ; 005518ab
    ADD ECX,0x48                        ; 005518b1
    ADD EDX,0x2                         ; 005518b4
    MOV dword ptr [ECX + 0x1c],EAX      ; 005518b7
    ADD EBX,EDX                         ; 005518ba
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005518bc
    MOV dword ptr [ECX + 0x24],EBX      ; 005518c0
    DEC EBX                             ; 005518c3
    MOV dword ptr [ECX + 0x28],EDX      ; 005518c4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005518c7
    MOV dword ptr [ECX + 0x18],EBX      ; 005518cb
    MOV dword ptr [ECX + 0x2c],EDX      ; 005518ce
    MOV dword ptr [ECX + 0x20],EDX      ; 005518d1
    INC ESI                             ; 005518d4
    MOV EBX,dword ptr [EDI + 0x7f98]    ; 005518d5
    ADD ECX,0x48                        ; 005518db
    CMP ESI,EBX                         ; 005518de
    JL 0x005517e9                       ; 005518e0
        ;   XREF to: 005517e9 (CONDITIONAL_JUMP)  ; LAB_005517e9
    MOV EAX,dword ptr [ESP + 0x20]      ; 005518e6
        ;   Label: LAB_005518e6
    INC EAX                             ; 005518ea
    MOV EDX,dword ptr [EDI + 0x7f9c]    ; 005518eb
    MOV dword ptr [ESP + 0x20],EAX      ; 005518f1
    CMP EAX,EDX                         ; 005518f5
    JL 0x005517b8                       ; 005518f7
        ;   XREF to: 005517b8 (CONDITIONAL_JUMP)  ; LAB_005517b8
    MOV ECX,dword ptr [EDI + 0x7f9c]    ; 005518fd
        ;   Label: LAB_005518fd
    MOV EAX,dword ptr [EDI + 0x7f98]    ; 00551903
    IMUL EAX,ECX                        ; 00551909
    ADD EAX,EAX                         ; 0055190c
    MOV dword ptr [EDI + 0x2b22c],EAX   ; 0055190e
    JMP 0x00551640                      ; 00551914
        ;   XREF to: 00551640 (UNCONDITIONAL_JUMP)  ; LAB_00551640

