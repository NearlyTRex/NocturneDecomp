; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004080c0(int param_1,float *param_2,float *param_3,float *param_4)
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
;   FUN_00408d60 at 00408deb
;   FUN_00409170 at 0040944f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004080c0
        ;   Label: FUN_004080c0
    PUSH ESI                            ; 004080c1
    PUSH EDI                            ; 004080c2
    PUSH EBP                            ; 004080c3
    MOV EBP,ESP                         ; 004080c4
    SUB ESP,0x10c                       ; 004080c6
    AND ESP,0xfffffff8                  ; 004080cc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004080cf
    MOV ECX,dword ptr [EBP + 0x18]      ; 004080d2
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004080d5
    MOV EDX,dword ptr [EBP + 0x20]      ; 004080d8
    FLD float ptr [ECX + 0x8]           ; 004080db
    FMUL ST0                            ; 004080de
    FLD float ptr [ECX]                 ; 004080e0
    FMUL ST0                            ; 004080e2
    FLD float ptr [ESI + 0x1c]          ; 004080e4
    FMUL ST0                            ; 004080e7
    FXCH                                ; 004080e9
    FADDP ST2,ST0                       ; 004080eb
    FSTP double ptr [ESP + 0x98]        ; 004080ed
    FCOMP double ptr [ESP + 0x98]       ; 004080f4
    FNSTSW AX                           ; 004080fb
    SAHF                                ; 004080fd
    JNC 0x00408203                      ; 004080fe
        ;   XREF to: 00408203 (CONDITIONAL_JUMP)  ; LAB_00408203
    FLD float ptr [ECX + 0x4]           ; 00408104
    FCOMP float ptr [ESI + 0x14]        ; 00408107
    FNSTSW AX                           ; 0040810a
    SAHF                                ; 0040810c
    JC 0x004083de                       ; 0040810d
        ;   XREF to: 004083de (CONDITIONAL_JUMP)  ; LAB_004083de
    FLD float ptr [ECX + 0x4]           ; 00408113
    FCOMP float ptr [ESI + 0x18]        ; 00408116
    FNSTSW AX                           ; 00408119
    SAHF                                ; 0040811b
    JA 0x004083de                       ; 0040811c
        ;   XREF to: 004083de (CONDITIONAL_JUMP)  ; LAB_004083de
    FLD float ptr [EBX]                 ; 00408122
    FLD float ptr [EBX + 0x4]           ; 00408124
    FLD float ptr [EBX + 0x8]           ; 00408127
    LEA EDI,[ESP + 0xa0]                ; 0040812a
    LEA ESI,[ESP + 0xac]                ; 00408131
    LEA EAX,[ESP + 0xa0]                ; 00408138
    FXCH ST2                            ; 0040813f
    FCHS                                ; 00408141
    FXCH                                ; 00408143
    FCHS                                ; 00408145
    FXCH ST2                            ; 00408147
    FCHS                                ; 00408149
    FXCH ST2                            ; 0040814b
    FSTP float ptr [ESP + 0xb0]         ; 0040814d
    FXCH                                ; 00408154
    FSTP float ptr [ESP + 0xb4]         ; 00408156
    FSTP float ptr [ESP + 0xac]         ; 0040815d
    MOVSD ES:EDI,ESI                    ; 00408164
    MOVSD ES:EDI,ESI                    ; 00408165
    MOVSD ES:EDI,ESI                    ; 00408166
    CMP EDX,EAX                         ; 00408167
    JZ 0x00408188                       ; 00408169
        ;   XREF to: 00408188 (CONDITIONAL_JUMP)  ; LAB_00408188
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0040816b
    MOV dword ptr [EDX],EAX             ; 00408172
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00408174
    MOV dword ptr [EDX + 0x4],EAX       ; 0040817b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0040817e
    MOV dword ptr [EDX + 0x8],EAX       ; 00408185
    FLD float ptr [EDX + 0x4]           ; 00408188
        ;   Label: LAB_00408188
    FMUL ST0                            ; 0040818b
    FLD float ptr [EDX]                 ; 0040818d
    FMUL ST0                            ; 0040818f
    FADDP                               ; 00408191
    FLD float ptr [EDX + 0x8]           ; 00408193
    FMUL ST0                            ; 00408196
    FADDP                               ; 00408198
    FSQRT                               ; 0040819a
    FLDZ                                ; 0040819c
    FXCH                                ; 0040819e
    FSTP float ptr [ESP + 0x100]        ; 004081a0
    FCOMP float ptr [ESP + 0x100]       ; 004081a7
    FNSTSW AX                           ; 004081ae
    SAHF                                ; 004081b0
    JNC 0x004081ef                      ; 004081b1
        ;   XREF to: 004081ef (CONDITIONAL_JUMP)  ; LAB_004081ef
    FLD1                                ; 004081b3
    FLD float ptr [EDX]                 ; 004081b5
    FXCH                                ; 004081b7
    FDIV float ptr [ESP + 0x100]        ; 004081b9
    FXCH                                ; 004081c0
    FMUL ST1                            ; 004081c2
    FLD float ptr [EDX + 0x4]           ; 004081c4
    FMUL ST2                            ; 004081c7
    FLD float ptr [EDX + 0x8]           ; 004081c9
    FMULP ST3                           ; 004081cc
    FXCH                                ; 004081ce
    FSTP float ptr [EDX]                ; 004081d0
    FSTP float ptr [EDX + 0x4]          ; 004081d2
    FSTP float ptr [EDX + 0x8]          ; 004081d5
    XOR EAX,EAX                         ; 004081d8
        ;   Label: LAB_004081d8
    MOV dword ptr [ESP + 0x104],EAX     ; 004081da
    MOV EAX,dword ptr [ESP + 0x104]     ; 004081e1
    MOV ESP,EBP                         ; 004081e8
    POP EBP                             ; 004081ea
    POP EDI                             ; 004081eb
    POP ESI                             ; 004081ec
    POP EBX                             ; 004081ed
    RET                                 ; 004081ee
    MOV dword ptr [EDX + 0x8],0x0       ; 004081ef
        ;   Label: LAB_004081ef
    MOV EAX,dword ptr [EDX + 0x8]       ; 004081f6
    MOV dword ptr [EDX + 0x4],EAX       ; 004081f9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004081fc
    MOV dword ptr [EDX],EAX             ; 004081ff
    JMP 0x004081d8                      ; 00408201
        ;   XREF to: 004081d8 (UNCONDITIONAL_JUMP)  ; LAB_004081d8
    FLD float ptr [EBX + 0x8]           ; 00408203
        ;   Label: LAB_00408203
    FMUL ST0                            ; 00408206
    FLD float ptr [EBX]                 ; 00408208
    FMUL ST0                            ; 0040820a
    FADDP                               ; 0040820c
    FSQRT                               ; 0040820e
    FLDZ                                ; 00408210
    FXCH                                ; 00408212
    FSTP double ptr [ESP + 0x88]        ; 00408214
    FCOMP double ptr [ESP + 0x88]       ; 0040821b
    FNSTSW AX                           ; 00408222
    SAHF                                ; 00408224
    JNC 0x004083de                      ; 00408225
        ;   XREF to: 004083de (CONDITIONAL_JUMP)  ; LAB_004083de
    FLD1                                ; 0040822b
    FDIV double ptr [ESP + 0x88]        ; 0040822d
    FLD float ptr [EBX]                 ; 00408234
    FST double ptr [ESP + 0x70]         ; 00408236
    FXCH                                ; 0040823a
    FSTP double ptr [ESP + 0x18]        ; 0040823c
    FMUL double ptr [ESP + 0x18]        ; 00408240
    FLD float ptr [EBX + 0x8]           ; 00408244
    FST double ptr [ESP + 0x58]         ; 00408247
    FMUL double ptr [ESP + 0x18]        ; 0040824b
    FLD float ptr [ECX + 0x8]           ; 0040824f
    FST double ptr [ESP + 0x8]          ; 00408252
    FXCH                                ; 00408256
    FSTP double ptr [ESP + 0x20]        ; 00408258
    FMUL double ptr [ESP + 0x20]        ; 0040825c
    FXCH                                ; 00408260
    FSTP double ptr [ESP + 0x48]        ; 00408262
    FLD float ptr [ECX]                 ; 00408266
    FST double ptr [ESP + 0x10]         ; 00408268
    FMUL double ptr [ESP + 0x48]        ; 0040826c
    FADDP                               ; 00408270
    FLDZ                                ; 00408272
    FXCH                                ; 00408274
    FCHS                                ; 00408276
    FSTP double ptr [ESP + 0x78]        ; 00408278
    FCOMP double ptr [ESP + 0x78]       ; 0040827c
    FNSTSW AX                           ; 00408280
    SAHF                                ; 00408282
    JNC 0x004083de                      ; 00408283
        ;   XREF to: 004083de (CONDITIONAL_JUMP)  ; LAB_004083de
    FLD double ptr [ESP + 0x78]         ; 00408289
    FLD double ptr [ESP + 0x48]         ; 0040828d
    FMUL ST1                            ; 00408291
    FLD double ptr [ESP + 0x20]         ; 00408293
    FMULP ST2                           ; 00408297
    FADD double ptr [ESP + 0x10]        ; 00408299
    FMUL ST0                            ; 0040829d
    FXCH                                ; 0040829f
    FADD double ptr [ESP + 0x8]         ; 004082a1
    FMUL ST0                            ; 004082a5
    FADDP                               ; 004082a7
    FST double ptr [ESP + 0x68]         ; 004082a9
    FCOMP double ptr [ESP + 0x98]       ; 004082ad
    FNSTSW AX                           ; 004082b4
    SAHF                                ; 004082b6
    JNC 0x004083b1                      ; 004082b7
        ;   XREF to: 004083b1 (CONDITIONAL_JUMP)  ; LAB_004083b1
    FLD double ptr [ESP + 0x98]         ; 004082bd
    FSUB double ptr [ESP + 0x68]        ; 004082c4
    FSQRT                               ; 004082c8
    FSUBR double ptr [ESP + 0x78]       ; 004082ca
    FST double ptr [ESP + 0x40]         ; 004082ce
    FCOMP double ptr [ESP + 0x88]       ; 004082d2
    FNSTSW AX                           ; 004082d9
    SAHF                                ; 004082db
    JA 0x004083b1                       ; 004082dc
        ;   XREF to: 004083b1 (CONDITIONAL_JUMP)  ; LAB_004083b1
    FLD double ptr [ESP + 0x40]         ; 004082e2
    FMUL double ptr [ESP + 0x18]        ; 004082e6
    FLD float ptr [EBX + 0x4]           ; 004082ea
    FXCH                                ; 004082ed
    FSTP double ptr [ESP + 0x38]        ; 004082ef
    FMUL double ptr [ESP + 0x38]        ; 004082f3
    FADD float ptr [ECX + 0x4]          ; 004082f7
    FLD float ptr [ESI + 0x14]          ; 004082fa
    FXCH                                ; 004082fd
    FSTP double ptr [ESP + 0x50]        ; 004082ff
    FCOMP double ptr [ESP + 0x50]       ; 00408303
    FNSTSW AX                           ; 00408307
    SAHF                                ; 00408309
    JA 0x004083de                       ; 0040830a
        ;   XREF to: 004083de (CONDITIONAL_JUMP)  ; LAB_004083de
    FLD float ptr [ESI + 0x18]          ; 00408310
    FCOMP double ptr [ESP + 0x50]       ; 00408313
    FNSTSW AX                           ; 00408317
    SAHF                                ; 00408319
    JC 0x004083de                       ; 0040831a
        ;   XREF to: 004083de (CONDITIONAL_JUMP)  ; LAB_004083de
    FLD double ptr [ESP + 0x38]         ; 00408320
    FLD double ptr [ESP + 0x70]         ; 00408324
    FMUL ST1                            ; 00408328
    FLD double ptr [ESP + 0x58]         ; 0040832a
    MOV dword ptr [EDX + 0x4],0x0       ; 0040832e
    FMULP ST2                           ; 00408335
    FLD float ptr [EDX + 0x4]           ; 00408337
    FMUL ST0                            ; 0040833a
    FXCH                                ; 0040833c
    FADD double ptr [ESP + 0x10]        ; 0040833e
    FST float ptr [EDX]                 ; 00408342
    FMUL float ptr [EDX]                ; 00408344
    FXCH ST2                            ; 00408346
    FADD double ptr [ESP + 0x8]         ; 00408348
    FXCH ST2                            ; 0040834c
    FADDP                               ; 0040834e
    FXCH                                ; 00408350
    FST float ptr [EDX + 0x8]           ; 00408352
    FMUL float ptr [EDX + 0x8]          ; 00408355
    FADDP                               ; 00408358
    FSQRT                               ; 0040835a
    FLDZ                                ; 0040835c
    FXCH                                ; 0040835e
    FSTP float ptr [ESP + 0x108]        ; 00408360
    FCOMP float ptr [ESP + 0x108]       ; 00408367
    FNSTSW AX                           ; 0040836e
    SAHF                                ; 00408370
    JNC 0x004083ca                      ; 00408371
        ;   XREF to: 004083ca (CONDITIONAL_JUMP)  ; LAB_004083ca
    FLD1                                ; 00408373
    FLD float ptr [EDX]                 ; 00408375
    FXCH                                ; 00408377
    FDIV float ptr [ESP + 0x108]        ; 00408379
    FXCH                                ; 00408380
    FMUL ST1                            ; 00408382
    FLD float ptr [EDX + 0x4]           ; 00408384
    FMUL ST2                            ; 00408387
    FLD float ptr [EDX + 0x8]           ; 00408389
    FMULP ST3                           ; 0040838c
    FXCH                                ; 0040838e
    FSTP float ptr [EDX]                ; 00408390
    FSTP float ptr [EDX + 0x4]          ; 00408392
    FSTP float ptr [EDX + 0x8]          ; 00408395
    FLD double ptr [ESP + 0x38]         ; 00408398
        ;   Label: LAB_00408398
    FSTP float ptr [ESP + 0x104]        ; 0040839c
    MOV EAX,dword ptr [ESP + 0x104]     ; 004083a3
    MOV ESP,EBP                         ; 004083aa
    POP EBP                             ; 004083ac
    POP EDI                             ; 004083ad
    POP ESI                             ; 004083ae
    POP EBX                             ; 004083af
    RET                                 ; 004083b0
    MOV dword ptr [ESP + 0x104],0x40000000 ; 004083b1
        ;   Label: LAB_004083b1
    MOV EAX,dword ptr [ESP + 0x104]     ; 004083bc
    MOV ESP,EBP                         ; 004083c3
    POP EBP                             ; 004083c5
    POP EDI                             ; 004083c6
    POP ESI                             ; 004083c7
    POP EBX                             ; 004083c8
    RET                                 ; 004083c9
    MOV dword ptr [EDX + 0x8],0x0       ; 004083ca
        ;   Label: LAB_004083ca
    MOV EAX,dword ptr [EDX + 0x8]       ; 004083d1
    MOV dword ptr [EDX + 0x4],EAX       ; 004083d4
    MOV EAX,dword ptr [EDX + 0x4]       ; 004083d7
    MOV dword ptr [EDX],EAX             ; 004083da
    JMP 0x00408398                      ; 004083dc
        ;   XREF to: 00408398 (UNCONDITIONAL_JUMP)  ; LAB_00408398
    FLD float ptr [ECX + 0x4]           ; 004083de
        ;   Label: LAB_004083de
    FCOMP float ptr [ESI + 0x14]        ; 004083e1
    FNSTSW AX                           ; 004083e4
    SAHF                                ; 004083e6
    JNC 0x0040849e                      ; 004083e7
        ;   XREF to: 0040849e (CONDITIONAL_JUMP)  ; LAB_0040849e
    FLDZ                                ; 004083ed
    FLD float ptr [EBX + 0x4]           ; 004083ef
    FSTP double ptr [ESP]               ; 004083f2
    FCOMP double ptr [ESP]              ; 004083f5
    FNSTSW AX                           ; 004083f8
    SAHF                                ; 004083fa
    JNC 0x00408510                      ; 004083fb
        ;   XREF to: 00408510 (CONDITIONAL_JUMP)  ; LAB_00408510
    FLD float ptr [ESI + 0x14]          ; 00408401
    FSUB float ptr [ECX + 0x4]          ; 00408404
    FST double ptr [ESP + 0x30]         ; 00408407
    FCOMP double ptr [ESP]              ; 0040840b
    FNSTSW AX                           ; 0040840e
    SAHF                                ; 00408410
    JNC 0x00408510                      ; 00408411
        ;   XREF to: 00408510 (CONDITIONAL_JUMP)  ; LAB_00408510
    FLD double ptr [ESP + 0x30]         ; 00408417
    FDIV double ptr [ESP]               ; 0040841b
    FLD float ptr [EBX]                 ; 0040841e
    FXCH                                ; 00408420
    FSTP double ptr [ESP + 0x90]        ; 00408422
    FMUL double ptr [ESP + 0x90]        ; 00408429
    FLD float ptr [EBX + 0x8]           ; 00408430
    FMUL double ptr [ESP + 0x90]        ; 00408433
    FLD float ptr [ECX]                 ; 0040843a
    FADDP ST2,ST0                       ; 0040843c
    FLD ST1                             ; 0040843e
    FMULP ST2                           ; 00408440
    FADD float ptr [ECX + 0x8]          ; 00408442
    FMUL ST0                            ; 00408445
    FADDP                               ; 00408447
    FCOMP double ptr [ESP + 0x98]       ; 00408449
    FNSTSW AX                           ; 00408450
    SAHF                                ; 00408452
    JBE 0x0040846e                      ; 00408453
        ;   XREF to: 0040846e (CONDITIONAL_JUMP)  ; LAB_0040846e
    MOV dword ptr [ESP + 0x104],0x40000000 ; 00408455
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408460
    MOV ESP,EBP                         ; 00408467
    POP EBP                             ; 00408469
    POP EDI                             ; 0040846a
    POP ESI                             ; 0040846b
    POP EBX                             ; 0040846c
    RET                                 ; 0040846d
    MOV dword ptr [EDX + 0x4],0xbf800000 ; 0040846e
        ;   Label: LAB_0040846e
    FLD double ptr [ESP + 0x90]         ; 00408475
    MOV dword ptr [EDX + 0x8],0x0       ; 0040847c
    FSTP float ptr [ESP + 0x104]        ; 00408483
    MOV dword ptr [EDX],0x0             ; 0040848a
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408490
    MOV ESP,EBP                         ; 00408497
    POP EBP                             ; 00408499
    POP EDI                             ; 0040849a
    POP ESI                             ; 0040849b
    POP EBX                             ; 0040849c
    RET                                 ; 0040849d
    FLD float ptr [ECX + 0x4]           ; 0040849e
        ;   Label: LAB_0040849e
    FCOMP float ptr [ESI + 0x18]        ; 004084a1
    FNSTSW AX                           ; 004084a4
    SAHF                                ; 004084a6
    JBE 0x00408510                      ; 004084a7
        ;   XREF to: 00408510 (CONDITIONAL_JUMP)  ; LAB_00408510
    FLDZ                                ; 004084a9
    FLD float ptr [EBX + 0x4]           ; 004084ab
    FSTP double ptr [ESP + 0x80]        ; 004084ae
    FCOMP double ptr [ESP + 0x80]       ; 004084b5
    FNSTSW AX                           ; 004084bc
    SAHF                                ; 004084be
    JBE 0x00408510                      ; 004084bf
        ;   XREF to: 00408510 (CONDITIONAL_JUMP)  ; LAB_00408510
    FLD float ptr [ESI + 0x18]          ; 004084c1
    FSUB float ptr [ECX + 0x4]          ; 004084c4
    FST double ptr [ESP + 0x28]         ; 004084c7
    FCOMP double ptr [ESP + 0x80]       ; 004084cb
    FNSTSW AX                           ; 004084d2
    SAHF                                ; 004084d4
    JBE 0x00408510                      ; 004084d5
        ;   XREF to: 00408510 (CONDITIONAL_JUMP)  ; LAB_00408510
    FLD double ptr [ESP + 0x28]         ; 004084d7
    FDIV double ptr [ESP + 0x80]        ; 004084db
    FLD float ptr [EBX]                 ; 004084e2
    FXCH                                ; 004084e4
    FSTP double ptr [ESP + 0x60]        ; 004084e6
    FMUL double ptr [ESP + 0x60]        ; 004084ea
    FLD float ptr [EBX + 0x8]           ; 004084ee
    FMUL double ptr [ESP + 0x60]        ; 004084f1
    FLD float ptr [ECX]                 ; 004084f5
    FADDP ST2,ST0                       ; 004084f7
    FLD ST1                             ; 004084f9
    FMULP ST2                           ; 004084fb
    FADD float ptr [ECX + 0x8]          ; 004084fd
    FMUL ST0                            ; 00408500
    FADDP                               ; 00408502
    FCOMP double ptr [ESP + 0x98]       ; 00408504
    FNSTSW AX                           ; 0040850b
    SAHF                                ; 0040850d
    JBE 0x00408529                      ; 0040850e
        ;   XREF to: 00408529 (CONDITIONAL_JUMP)  ; LAB_00408529
    MOV dword ptr [ESP + 0x104],0x40000000 ; 00408510
        ;   Label: LAB_00408510
    MOV EAX,dword ptr [ESP + 0x104]     ; 0040851b
    MOV ESP,EBP                         ; 00408522
    POP EBP                             ; 00408524
    POP EDI                             ; 00408525
    POP ESI                             ; 00408526
    POP EBX                             ; 00408527
    RET                                 ; 00408528
    MOV dword ptr [EDX + 0x4],0x3f800000 ; 00408529
        ;   Label: LAB_00408529
    FLD double ptr [ESP + 0x60]         ; 00408530
    MOV dword ptr [EDX + 0x8],0x0       ; 00408534
    FSTP float ptr [ESP + 0x104]        ; 0040853b
    MOV dword ptr [EDX],0x0             ; 00408542
    MOV EAX,dword ptr [ESP + 0x104]     ; 00408548
    MOV ESP,EBP                         ; 0040854f
    POP EBP                             ; 00408551
    POP EDI                             ; 00408552
    POP ESI                             ; 00408553
    POP EBX                             ; 00408554
    RET                                 ; 00408555

