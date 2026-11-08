; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00408100(int param_1,float *param_2,float *param_3,float *param_4)
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
;   FUN_00408da0 at 00408e2b
;   FUN_004091b0 at 0040948f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408100
        ;   Label: FUN_00408100
    PUSH ESI                            ; 00408101
    PUSH EDI                            ; 00408102
    PUSH EBP                            ; 00408103
    MOV EBP,ESP                         ; 00408104
    SUB ESP,0x10c                       ; 00408106
    AND ESP,0xfffffff8                  ; 0040810c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040810f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00408112
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00408115
    MOV EDX,dword ptr [EBP + 0x20]      ; 00408118
    FLD float ptr [ECX + 0x8]           ; 0040811b
    FMUL ST0                            ; 0040811e
    FLD float ptr [ECX]                 ; 00408120
    FMUL ST0                            ; 00408122
    FLD float ptr [ESI + 0x1c]          ; 00408124
    FMUL ST0                            ; 00408127
    FXCH                                ; 00408129
    FADDP ST2,ST0                       ; 0040812b
    FSTP double ptr [ESP + 0x98]        ; 0040812d
    FCOMP double ptr [ESP + 0x98]       ; 00408134
    FNSTSW AX                           ; 0040813b
    SAHF                                ; 0040813d
    JNC 0x00408243                      ; 0040813e
        ;   XREF to: 00408243 (CONDITIONAL_JUMP)  ; LAB_00408243
    FLD float ptr [ECX + 0x4]           ; 00408144
    FCOMP float ptr [ESI + 0x14]        ; 00408147
    FNSTSW AX                           ; 0040814a
    SAHF                                ; 0040814c
    JC 0x0040841e                       ; 0040814d
        ;   XREF to: 0040841e (CONDITIONAL_JUMP)  ; LAB_0040841e
    FLD float ptr [ECX + 0x4]           ; 00408153
    FCOMP float ptr [ESI + 0x18]        ; 00408156
    FNSTSW AX                           ; 00408159
    SAHF                                ; 0040815b
    JA 0x0040841e                       ; 0040815c
        ;   XREF to: 0040841e (CONDITIONAL_JUMP)  ; LAB_0040841e
    FLD float ptr [EBX]                 ; 00408162
    FLD float ptr [EBX + 0x4]           ; 00408164
    FLD float ptr [EBX + 0x8]           ; 00408167
    LEA EDI,[ESP + 0xa0]                ; 0040816a
    LEA ESI,[ESP + 0xac]                ; 00408171
    LEA EAX,[ESP + 0xa0]                ; 00408178
    FXCH ST2                            ; 0040817f
    FCHS                                ; 00408181
    FXCH                                ; 00408183
    FCHS                                ; 00408185
    FXCH ST2                            ; 00408187
    FCHS                                ; 00408189
    FXCH ST2                            ; 0040818b
    FSTP float ptr [ESP + 0xb0]         ; 0040818d
    FXCH                                ; 00408194
    FSTP float ptr [ESP + 0xb4]         ; 00408196
    FSTP float ptr [ESP + 0xac]         ; 0040819d
    MOVSD ES:EDI,ESI                    ; 004081a4
    MOVSD ES:EDI,ESI                    ; 004081a5
    MOVSD ES:EDI,ESI                    ; 004081a6
    CMP EDX,EAX                         ; 004081a7
    JZ 0x004081c8                       ; 004081a9
        ;   XREF to: 004081c8 (CONDITIONAL_JUMP)  ; LAB_004081c8
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004081ab
    MOV dword ptr [EDX],EAX             ; 004081b2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004081b4
    MOV dword ptr [EDX + 0x4],EAX       ; 004081bb
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004081be
    MOV dword ptr [EDX + 0x8],EAX       ; 004081c5
    FLD float ptr [EDX + 0x4]           ; 004081c8
        ;   Label: LAB_004081c8
    FMUL ST0                            ; 004081cb
    FLD float ptr [EDX]                 ; 004081cd
    FMUL ST0                            ; 004081cf
    FADDP                               ; 004081d1
    FLD float ptr [EDX + 0x8]           ; 004081d3
    FMUL ST0                            ; 004081d6
    FADDP                               ; 004081d8
    FSQRT                               ; 004081da
    FLDZ                                ; 004081dc
    FXCH                                ; 004081de
    FSTP float ptr [ESP + 0x100]        ; 004081e0
    FCOMP float ptr [ESP + 0x100]       ; 004081e7
    FNSTSW AX                           ; 004081ee
    SAHF                                ; 004081f0
    JNC 0x0040822f                      ; 004081f1
        ;   XREF to: 0040822f (CONDITIONAL_JUMP)  ; LAB_0040822f
    FLD1                                ; 004081f3
    FLD float ptr [EDX]                 ; 004081f5
    FXCH                                ; 004081f7
    FDIV float ptr [ESP + 0x100]        ; 004081f9
    FXCH                                ; 00408200
    FMUL ST1                            ; 00408202
    FLD float ptr [EDX + 0x4]           ; 00408204
    FMUL ST2                            ; 00408207
    FLD float ptr [EDX + 0x8]           ; 00408209
    FMULP ST3                           ; 0040820c
    FXCH                                ; 0040820e
    FSTP float ptr [EDX]                ; 00408210
    FSTP float ptr [EDX + 0x4]          ; 00408212
    FSTP float ptr [EDX + 0x8]          ; 00408215
    XOR EAX,EAX                         ; 00408218
        ;   Label: LAB_00408218
    MOV dword ptr [ESP + 0x104],EAX     ; 0040821a
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408221
    MOV ESP,EBP                         ; 00408228
    POP EBP                             ; 0040822a
    POP EDI                             ; 0040822b
    POP ESI                             ; 0040822c
    POP EBX                             ; 0040822d
    RET                                 ; 0040822e
    MOV dword ptr [EDX + 0x8],0x0       ; 0040822f
        ;   Label: LAB_0040822f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00408236
    MOV dword ptr [EDX + 0x4],EAX       ; 00408239
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040823c
    MOV dword ptr [EDX],EAX             ; 0040823f
    JMP 0x00408218                      ; 00408241
        ;   XREF to: 00408218 (UNCONDITIONAL_JUMP)  ; LAB_00408218
    FLD float ptr [EBX + 0x8]           ; 00408243
        ;   Label: LAB_00408243
    FMUL ST0                            ; 00408246
    FLD float ptr [EBX]                 ; 00408248
    FMUL ST0                            ; 0040824a
    FADDP                               ; 0040824c
    FSQRT                               ; 0040824e
    FLDZ                                ; 00408250
    FXCH                                ; 00408252
    FSTP double ptr [ESP + 0x88]        ; 00408254
    FCOMP double ptr [ESP + 0x88]       ; 0040825b
    FNSTSW AX                           ; 00408262
    SAHF                                ; 00408264
    JNC 0x0040841e                      ; 00408265
        ;   XREF to: 0040841e (CONDITIONAL_JUMP)  ; LAB_0040841e
    FLD1                                ; 0040826b
    FDIV double ptr [ESP + 0x88]        ; 0040826d
    FLD float ptr [EBX]                 ; 00408274
    FST double ptr [ESP + 0x70]         ; 00408276
    FXCH                                ; 0040827a
    FSTP double ptr [ESP + 0x18]        ; 0040827c
    FMUL double ptr [ESP + 0x18]        ; 00408280
    FLD float ptr [EBX + 0x8]           ; 00408284
    FST double ptr [ESP + 0x58]         ; 00408287
    FMUL double ptr [ESP + 0x18]        ; 0040828b
    FLD float ptr [ECX + 0x8]           ; 0040828f
    FST double ptr [ESP + 0x8]          ; 00408292
    FXCH                                ; 00408296
    FSTP double ptr [ESP + 0x20]        ; 00408298
    FMUL double ptr [ESP + 0x20]        ; 0040829c
    FXCH                                ; 004082a0
    FSTP double ptr [ESP + 0x48]        ; 004082a2
    FLD float ptr [ECX]                 ; 004082a6
    FST double ptr [ESP + 0x10]         ; 004082a8
    FMUL double ptr [ESP + 0x48]        ; 004082ac
    FADDP                               ; 004082b0
    FLDZ                                ; 004082b2
    FXCH                                ; 004082b4
    FCHS                                ; 004082b6
    FSTP double ptr [ESP + 0x78]        ; 004082b8
    FCOMP double ptr [ESP + 0x78]       ; 004082bc
    FNSTSW AX                           ; 004082c0
    SAHF                                ; 004082c2
    JNC 0x0040841e                      ; 004082c3
        ;   XREF to: 0040841e (CONDITIONAL_JUMP)  ; LAB_0040841e
    FLD double ptr [ESP + 0x78]         ; 004082c9
    FLD double ptr [ESP + 0x48]         ; 004082cd
    FMUL ST1                            ; 004082d1
    FLD double ptr [ESP + 0x20]         ; 004082d3
    FMULP ST2                           ; 004082d7
    FADD double ptr [ESP + 0x10]        ; 004082d9
    FMUL ST0                            ; 004082dd
    FXCH                                ; 004082df
    FADD double ptr [ESP + 0x8]         ; 004082e1
    FMUL ST0                            ; 004082e5
    FADDP                               ; 004082e7
    FST double ptr [ESP + 0x68]         ; 004082e9
    FCOMP double ptr [ESP + 0x98]       ; 004082ed
    FNSTSW AX                           ; 004082f4
    SAHF                                ; 004082f6
    JNC 0x004083f1                      ; 004082f7
        ;   XREF to: 004083f1 (CONDITIONAL_JUMP)  ; LAB_004083f1
    FLD double ptr [ESP + 0x98]         ; 004082fd
    FSUB double ptr [ESP + 0x68]        ; 00408304
    FSQRT                               ; 00408308
    FSUBR double ptr [ESP + 0x78]       ; 0040830a
    FST double ptr [ESP + 0x40]         ; 0040830e
    FCOMP double ptr [ESP + 0x88]       ; 00408312
    FNSTSW AX                           ; 00408319
    SAHF                                ; 0040831b
    JA 0x004083f1                       ; 0040831c
        ;   XREF to: 004083f1 (CONDITIONAL_JUMP)  ; LAB_004083f1
    FLD double ptr [ESP + 0x40]         ; 00408322
    FMUL double ptr [ESP + 0x18]        ; 00408326
    FLD float ptr [EBX + 0x4]           ; 0040832a
    FXCH                                ; 0040832d
    FSTP double ptr [ESP + 0x38]        ; 0040832f
    FMUL double ptr [ESP + 0x38]        ; 00408333
    FADD float ptr [ECX + 0x4]          ; 00408337
    FLD float ptr [ESI + 0x14]          ; 0040833a
    FXCH                                ; 0040833d
    FSTP double ptr [ESP + 0x50]        ; 0040833f
    FCOMP double ptr [ESP + 0x50]       ; 00408343
    FNSTSW AX                           ; 00408347
    SAHF                                ; 00408349
    JA 0x0040841e                       ; 0040834a
        ;   XREF to: 0040841e (CONDITIONAL_JUMP)  ; LAB_0040841e
    FLD float ptr [ESI + 0x18]          ; 00408350
    FCOMP double ptr [ESP + 0x50]       ; 00408353
    FNSTSW AX                           ; 00408357
    SAHF                                ; 00408359
    JC 0x0040841e                       ; 0040835a
        ;   XREF to: 0040841e (CONDITIONAL_JUMP)  ; LAB_0040841e
    FLD double ptr [ESP + 0x38]         ; 00408360
    FLD double ptr [ESP + 0x70]         ; 00408364
    FMUL ST1                            ; 00408368
    FLD double ptr [ESP + 0x58]         ; 0040836a
    MOV dword ptr [EDX + 0x4],0x0       ; 0040836e
    FMULP ST2                           ; 00408375
    FLD float ptr [EDX + 0x4]           ; 00408377
    FMUL ST0                            ; 0040837a
    FXCH                                ; 0040837c
    FADD double ptr [ESP + 0x10]        ; 0040837e
    FST float ptr [EDX]                 ; 00408382
    FMUL float ptr [EDX]                ; 00408384
    FXCH ST2                            ; 00408386
    FADD double ptr [ESP + 0x8]         ; 00408388
    FXCH ST2                            ; 0040838c
    FADDP                               ; 0040838e
    FXCH                                ; 00408390
    FST float ptr [EDX + 0x8]           ; 00408392
    FMUL float ptr [EDX + 0x8]          ; 00408395
    FADDP                               ; 00408398
    FSQRT                               ; 0040839a
    FLDZ                                ; 0040839c
    FXCH                                ; 0040839e
    FSTP float ptr [ESP + 0x108]        ; 004083a0
    FCOMP float ptr [ESP + 0x108]       ; 004083a7
    FNSTSW AX                           ; 004083ae
    SAHF                                ; 004083b0
    JNC 0x0040840a                      ; 004083b1
        ;   XREF to: 0040840a (CONDITIONAL_JUMP)  ; LAB_0040840a
    FLD1                                ; 004083b3
    FLD float ptr [EDX]                 ; 004083b5
    FXCH                                ; 004083b7
    FDIV float ptr [ESP + 0x108]        ; 004083b9
    FXCH                                ; 004083c0
    FMUL ST1                            ; 004083c2
    FLD float ptr [EDX + 0x4]           ; 004083c4
    FMUL ST2                            ; 004083c7
    FLD float ptr [EDX + 0x8]           ; 004083c9
    FMULP ST3                           ; 004083cc
    FXCH                                ; 004083ce
    FSTP float ptr [EDX]                ; 004083d0
    FSTP float ptr [EDX + 0x4]          ; 004083d2
    FSTP float ptr [EDX + 0x8]          ; 004083d5
    FLD double ptr [ESP + 0x38]         ; 004083d8
        ;   Label: LAB_004083d8
    FSTP float ptr [ESP + 0x104]        ; 004083dc
    MOV EAX,dword ptr [ESP + 0x104]     ; 004083e3
    MOV ESP,EBP                         ; 004083ea
    POP EBP                             ; 004083ec
    POP EDI                             ; 004083ed
    POP ESI                             ; 004083ee
    POP EBX                             ; 004083ef
    RET                                 ; 004083f0
    MOV dword ptr [ESP + 0x104],0x40000000 ; 004083f1
        ;   Label: LAB_004083f1
    MOV EAX,dword ptr [ESP + 0x104]     ; 004083fc
    MOV ESP,EBP                         ; 00408403
    POP EBP                             ; 00408405
    POP EDI                             ; 00408406
    POP ESI                             ; 00408407
    POP EBX                             ; 00408408
    RET                                 ; 00408409
    MOV dword ptr [EDX + 0x8],0x0       ; 0040840a
        ;   Label: LAB_0040840a
    MOV EAX,dword ptr [EDX + 0x8]       ; 00408411
    MOV dword ptr [EDX + 0x4],EAX       ; 00408414
    MOV EAX,dword ptr [EDX + 0x4]       ; 00408417
    MOV dword ptr [EDX],EAX             ; 0040841a
    JMP 0x004083d8                      ; 0040841c
        ;   XREF to: 004083d8 (UNCONDITIONAL_JUMP)  ; LAB_004083d8
    FLD float ptr [ECX + 0x4]           ; 0040841e
        ;   Label: LAB_0040841e
    FCOMP float ptr [ESI + 0x14]        ; 00408421
    FNSTSW AX                           ; 00408424
    SAHF                                ; 00408426
    JNC 0x004084de                      ; 00408427
        ;   XREF to: 004084de (CONDITIONAL_JUMP)  ; LAB_004084de
    FLDZ                                ; 0040842d
    FLD float ptr [EBX + 0x4]           ; 0040842f
    FSTP double ptr [ESP]               ; 00408432
    FCOMP double ptr [ESP]              ; 00408435
    FNSTSW AX                           ; 00408438
    SAHF                                ; 0040843a
    JNC 0x00408550                      ; 0040843b
        ;   XREF to: 00408550 (CONDITIONAL_JUMP)  ; LAB_00408550
    FLD float ptr [ESI + 0x14]          ; 00408441
    FSUB float ptr [ECX + 0x4]          ; 00408444
    FST double ptr [ESP + 0x30]         ; 00408447
    FCOMP double ptr [ESP]              ; 0040844b
    FNSTSW AX                           ; 0040844e
    SAHF                                ; 00408450
    JNC 0x00408550                      ; 00408451
        ;   XREF to: 00408550 (CONDITIONAL_JUMP)  ; LAB_00408550
    FLD double ptr [ESP + 0x30]         ; 00408457
    FDIV double ptr [ESP]               ; 0040845b
    FLD float ptr [EBX]                 ; 0040845e
    FXCH                                ; 00408460
    FSTP double ptr [ESP + 0x90]        ; 00408462
    FMUL double ptr [ESP + 0x90]        ; 00408469
    FLD float ptr [EBX + 0x8]           ; 00408470
    FMUL double ptr [ESP + 0x90]        ; 00408473
    FLD float ptr [ECX]                 ; 0040847a
    FADDP ST2,ST0                       ; 0040847c
    FLD ST1                             ; 0040847e
    FMULP ST2                           ; 00408480
    FADD float ptr [ECX + 0x8]          ; 00408482
    FMUL ST0                            ; 00408485
    FADDP                               ; 00408487
    FCOMP double ptr [ESP + 0x98]       ; 00408489
    FNSTSW AX                           ; 00408490
    SAHF                                ; 00408492
    JBE 0x004084ae                      ; 00408493
        ;   XREF to: 004084ae (CONDITIONAL_JUMP)  ; LAB_004084ae
    MOV dword ptr [ESP + 0x104],0x40000000 ; 00408495
    MOV EAX,dword ptr [ESP + 0x104]     ; 004084a0
    MOV ESP,EBP                         ; 004084a7
    POP EBP                             ; 004084a9
    POP EDI                             ; 004084aa
    POP ESI                             ; 004084ab
    POP EBX                             ; 004084ac
    RET                                 ; 004084ad
    MOV dword ptr [EDX + 0x4],0xbf800000 ; 004084ae
        ;   Label: LAB_004084ae
    FLD double ptr [ESP + 0x90]         ; 004084b5
    MOV dword ptr [EDX + 0x8],0x0       ; 004084bc
    FSTP float ptr [ESP + 0x104]        ; 004084c3
    MOV dword ptr [EDX],0x0             ; 004084ca
    MOV EAX,dword ptr [ESP + 0x104]     ; 004084d0
    MOV ESP,EBP                         ; 004084d7
    POP EBP                             ; 004084d9
    POP EDI                             ; 004084da
    POP ESI                             ; 004084db
    POP EBX                             ; 004084dc
    RET                                 ; 004084dd
    FLD float ptr [ECX + 0x4]           ; 004084de
        ;   Label: LAB_004084de
    FCOMP float ptr [ESI + 0x18]        ; 004084e1
    FNSTSW AX                           ; 004084e4
    SAHF                                ; 004084e6
    JBE 0x00408550                      ; 004084e7
        ;   XREF to: 00408550 (CONDITIONAL_JUMP)  ; LAB_00408550
    FLDZ                                ; 004084e9
    FLD float ptr [EBX + 0x4]           ; 004084eb
    FSTP double ptr [ESP + 0x80]        ; 004084ee
    FCOMP double ptr [ESP + 0x80]       ; 004084f5
    FNSTSW AX                           ; 004084fc
    SAHF                                ; 004084fe
    JBE 0x00408550                      ; 004084ff
        ;   XREF to: 00408550 (CONDITIONAL_JUMP)  ; LAB_00408550
    FLD float ptr [ESI + 0x18]          ; 00408501
    FSUB float ptr [ECX + 0x4]          ; 00408504
    FST double ptr [ESP + 0x28]         ; 00408507
    FCOMP double ptr [ESP + 0x80]       ; 0040850b
    FNSTSW AX                           ; 00408512
    SAHF                                ; 00408514
    JBE 0x00408550                      ; 00408515
        ;   XREF to: 00408550 (CONDITIONAL_JUMP)  ; LAB_00408550
    FLD double ptr [ESP + 0x28]         ; 00408517
    FDIV double ptr [ESP + 0x80]        ; 0040851b
    FLD float ptr [EBX]                 ; 00408522
    FXCH                                ; 00408524
    FSTP double ptr [ESP + 0x60]        ; 00408526
    FMUL double ptr [ESP + 0x60]        ; 0040852a
    FLD float ptr [EBX + 0x8]           ; 0040852e
    FMUL double ptr [ESP + 0x60]        ; 00408531
    FLD float ptr [ECX]                 ; 00408535
    FADDP ST2,ST0                       ; 00408537
    FLD ST1                             ; 00408539
    FMULP ST2                           ; 0040853b
    FADD float ptr [ECX + 0x8]          ; 0040853d
    FMUL ST0                            ; 00408540
    FADDP                               ; 00408542
    FCOMP double ptr [ESP + 0x98]       ; 00408544
    FNSTSW AX                           ; 0040854b
    SAHF                                ; 0040854d
    JBE 0x00408569                      ; 0040854e
        ;   XREF to: 00408569 (CONDITIONAL_JUMP)  ; LAB_00408569
    MOV dword ptr [ESP + 0x104],0x40000000 ; 00408550
        ;   Label: LAB_00408550
    MOV EAX,dword ptr [ESP + 0x104]     ; 0040855b
    MOV ESP,EBP                         ; 00408562
    POP EBP                             ; 00408564
    POP EDI                             ; 00408565
    POP ESI                             ; 00408566
    POP EBX                             ; 00408567
    RET                                 ; 00408568
    MOV dword ptr [EDX + 0x4],0x3f800000 ; 00408569
        ;   Label: LAB_00408569
    FLD double ptr [ESP + 0x60]         ; 00408570
    MOV dword ptr [EDX + 0x8],0x0       ; 00408574
    FSTP float ptr [ESP + 0x104]        ; 0040857b
    MOV dword ptr [EDX],0x0             ; 00408582
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408588
    MOV ESP,EBP                         ; 0040858f
    POP EBP                             ; 00408591
    POP EDI                             ; 00408592
    POP ESI                             ; 00408593
    POP EBX                             ; 00408594
    RET                                 ; 00408595

