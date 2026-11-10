; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dcube_cpp_FUN_00452240(undefined4 *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dcube.cpp_FUN_00454360 at 0045439a
;   core_dcube.cpp_triangleCylinderCollision_FUN_00452e20 at 0045305f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452240
        ;   Label: core_dcube.cpp_FUN_00452240
    PUSH EBP                            ; 00452241
    MOV EBP,ESP                         ; 00452242
    SUB ESP,0x3c                        ; 00452244
    AND ESP,0xfffffff8                  ; 00452247
    MOV EDX,dword ptr [EBP + 0xc]       ; 0045224a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0045224d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00452250
    FLD float ptr [EDX + 0x10]          ; 00452253
    FMUL float ptr [ECX + 0x4]          ; 00452256
    FLD float ptr [EDX + 0xc]           ; 00452259
    FMUL float ptr [ECX]                ; 0045225c
    FADDP                               ; 0045225e
    FLD float ptr [EDX + 0x14]          ; 00452260
    FMUL float ptr [ECX + 0x8]          ; 00452263
    FADDP                               ; 00452266
    FST float ptr [ESP + 0xc]           ; 00452268
    FLDZ                                ; 0045226c
    FCOMPP                              ; 0045226e
    FNSTSW AX                           ; 00452270
    SAHF                                ; 00452272
    JNC 0x004523d5                      ; 00452273
        ;   XREF to: 004523d5 (CONDITIONAL_JUMP)  ; LAB_004523d5
    FLD float ptr [EDX + 0xc]           ; 00452279
    FMUL float ptr [EBX]                ; 0045227c
    FADD float ptr [EDX + 0x18]         ; 0045227e
    FLD float ptr [EDX + 0x10]          ; 00452281
    FMUL float ptr [EBX + 0x4]          ; 00452284
    FADDP                               ; 00452287
    FLD float ptr [EDX + 0x14]          ; 00452289
    FMUL float ptr [EBX + 0x8]          ; 0045228c
    FADDP                               ; 0045228f
    FCHS                                ; 00452291
    FST float ptr [ESP + 0x4]           ; 00452293
    FLDZ                                ; 00452297
    FCOMPP                              ; 00452299
    FNSTSW AX                           ; 0045229b
    SAHF                                ; 0045229d
    JA 0x004523d5                       ; 0045229e
        ;   XREF to: 004523d5 (CONDITIONAL_JUMP)  ; LAB_004523d5
    FLD float ptr [ESP + 0x4]           ; 004522a4
    FCOMP float ptr [ESP + 0xc]         ; 004522a8
    FNSTSW AX                           ; 004522ac
    SAHF                                ; 004522ae
    JA 0x004523d5                       ; 004522af
        ;   XREF to: 004523d5 (CONDITIONAL_JUMP)  ; LAB_004523d5
    FLD float ptr [ESP + 0x4]           ; 004522b5
    FDIV float ptr [ESP + 0xc]          ; 004522b9
    FST float ptr [ESP + 0x4]           ; 004522bd
    FMUL float ptr [ECX]                ; 004522c1
    FLD float ptr [ESP + 0x4]           ; 004522c3
    FMUL float ptr [ECX + 0x4]          ; 004522c7
    FLD float ptr [ESP + 0x4]           ; 004522ca
    FMUL float ptr [ECX + 0x8]          ; 004522ce
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004522d1
    FXCH ST2                            ; 004522d4
    FADD float ptr [EBX]                ; 004522d6
    FXCH                                ; 004522d8
    FADD float ptr [EBX + 0x4]          ; 004522da
    FXCH ST2                            ; 004522dd
    FADD float ptr [EBX + 0x8]          ; 004522df
    FXCH                                ; 004522e2
    FSTP float ptr [ESP + 0x10]         ; 004522e4
    FXCH                                ; 004522e8
    FSTP float ptr [ESP + 0x14]         ; 004522ea
    FSTP float ptr [ESP + 0x18]         ; 004522ee
    CMP EAX,0x1                         ; 004522f2
    JNC 0x0045247d                      ; 004522f5
        ;   XREF to: 0045247d (CONDITIONAL_JUMP)  ; LAB_0045247d
    TEST EAX,EAX                        ; 004522fb
    JNZ 0x00452357                      ; 004522fd
        ;   XREF to: 00452357 (CONDITIONAL_JUMP)  ; LAB_00452357
    FLD float ptr [ESP + 0x14]          ; 004522ff
    MOV ECX,dword ptr [EDX + 0x4]       ; 00452303
    FLD float ptr [ESP + 0x18]          ; 00452306
    MOV EAX,dword ptr [EDX]             ; 0045230a
    FLD float ptr [ECX + 0x4]           ; 0045230c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0045230f
    FLD float ptr [ECX + 0x8]           ; 00452312
    FLD float ptr [EDX + 0x4]           ; 00452315
    FLD float ptr [EDX + 0x8]           ; 00452318
    FXCH ST5                            ; 0045231b
    FSUB float ptr [EAX + 0x4]          ; 0045231d
    FXCH ST4                            ; 00452320
    FSUB float ptr [EAX + 0x8]          ; 00452322
    FXCH ST4                            ; 00452325
    FSTP float ptr [ESP + 0x28]         ; 00452327
    FXCH ST3                            ; 0045232b
    FSTP float ptr [ESP + 0x20]         ; 0045232d
    FXCH                                ; 00452331
    FSUB float ptr [EAX + 0x4]          ; 00452333
    FXCH                                ; 00452336
    FSUB float ptr [EAX + 0x8]          ; 00452338
    FXCH                                ; 0045233b
    FSTP float ptr [ESP + 0x2c]         ; 0045233d
    FSTP float ptr [ESP + 0x1c]         ; 00452341
    FSUB float ptr [EAX + 0x4]          ; 00452345
    FXCH                                ; 00452348
        ;   Label: LAB_00452348
    FSUB float ptr [EAX + 0x8]          ; 0045234a
    FXCH                                ; 0045234d
        ;   Label: LAB_0045234d
    FSTP float ptr [ESP + 0x30]         ; 0045234f
    FSTP float ptr [ESP + 0x24]         ; 00452353
    FLD float ptr [ESP + 0x24]          ; 00452357
        ;   Label: LAB_00452357
    FLD float ptr [ESP + 0x2c]          ; 0045235b
    FMUL ST1                            ; 0045235f
    FLD float ptr [ESP + 0x30]          ; 00452361
    FLD float ptr [ESP + 0x1c]          ; 00452365
    FMUL ST1                            ; 00452369
    FSUBP ST2,ST0                       ; 0045236b
    FLD1                                ; 0045236d
    FDIVRP ST2,ST0                      ; 0045236f
    FLD float ptr [ESP + 0x28]          ; 00452371
    FMULP ST3                           ; 00452375
    FMUL float ptr [ESP + 0x20]         ; 00452377
    FSUBP ST2,ST0                       ; 0045237b
    FSTP float ptr [ESP + 0x38]         ; 0045237d
    FMUL float ptr [ESP + 0x38]         ; 00452381
    FST float ptr [ESP + 0x8]           ; 00452385
    FLDZ                                ; 00452389
    FCOMPP                              ; 0045238b
    FNSTSW AX                           ; 0045238d
    SAHF                                ; 0045238f
    JA 0x004523d5                       ; 00452390
        ;   XREF to: 004523d5 (CONDITIONAL_JUMP)  ; LAB_004523d5
    FLD float ptr [ESP + 0x2c]          ; 00452392
    FMUL float ptr [ESP + 0x20]         ; 00452396
    FLD float ptr [ESP + 0x1c]          ; 0045239a
    FMUL float ptr [ESP + 0x28]         ; 0045239e
    FSUBP                               ; 004523a2
    FMUL float ptr [ESP + 0x38]         ; 004523a4
    FST float ptr [ESP]                 ; 004523a8
    FLDZ                                ; 004523ab
    FCOMPP                              ; 004523ad
    FNSTSW AX                           ; 004523af
    SAHF                                ; 004523b1
    JA 0x004523d5                       ; 004523b2
        ;   XREF to: 004523d5 (CONDITIONAL_JUMP)  ; LAB_004523d5
    FLD float ptr [ESP + 0x8]           ; 004523b4
    FADD float ptr [ESP]                ; 004523b8
    FLD1                                ; 004523bb
    FCOMPP                              ; 004523bd
    FNSTSW AX                           ; 004523bf
    SAHF                                ; 004523c1
    JC 0x004523d5                       ; 004523c2
        ;   XREF to: 004523d5 (CONDITIONAL_JUMP)  ; LAB_004523d5
    MOV EAX,dword ptr [ESP + 0x4]       ; 004523c4
    MOV dword ptr [ESP + 0x34],EAX      ; 004523c8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004523cc
    MOV ESP,EBP                         ; 004523d0
    POP EBP                             ; 004523d2
    POP EBX                             ; 004523d3
    RET                                 ; 004523d4
    MOV dword ptr [ESP + 0x34],0xbf800000 ; 004523d5
        ;   Label: LAB_004523d5
    MOV EAX,dword ptr [ESP + 0x34]      ; 004523dd
    MOV ESP,EBP                         ; 004523e1
    POP EBP                             ; 004523e3
    POP EBX                             ; 004523e4
    RET                                 ; 004523e5
    FLD float ptr [ESP + 0x10]          ; 004523e6
        ;   Label: LAB_004523e6
    MOV ECX,dword ptr [EDX + 0x4]       ; 004523ea
    FLD float ptr [ESP + 0x18]          ; 004523ed
    MOV EAX,dword ptr [EDX]             ; 004523f1
    FLD float ptr [ECX]                 ; 004523f3
    MOV EDX,dword ptr [EDX + 0x8]       ; 004523f5
    FLD float ptr [ECX + 0x8]           ; 004523f8
    FLD float ptr [EDX]                 ; 004523fb
    FLD float ptr [EDX + 0x8]           ; 004523fd
    FXCH ST5                            ; 00452400
    FSUB float ptr [EAX]                ; 00452402
    FXCH ST4                            ; 00452404
    FSUB float ptr [EAX + 0x8]          ; 00452406
    FXCH ST4                            ; 00452409
    FSTP float ptr [ESP + 0x28]         ; 0045240b
    FXCH ST3                            ; 0045240f
    FSTP float ptr [ESP + 0x20]         ; 00452411
    FXCH                                ; 00452415
    FSUB float ptr [EAX]                ; 00452417
    FXCH                                ; 00452419
    FSUB float ptr [EAX + 0x8]          ; 0045241b
    FXCH                                ; 0045241e
    FSTP float ptr [ESP + 0x2c]         ; 00452420
    FSTP float ptr [ESP + 0x1c]         ; 00452424
    FSUB float ptr [EAX]                ; 00452428
    JMP 0x00452348                      ; 0045242a
        ;   XREF to: 00452348 (UNCONDITIONAL_JUMP)  ; LAB_00452348
    FLD float ptr [ESP + 0x10]          ; 0045242f
        ;   Label: LAB_0045242f
    MOV ECX,dword ptr [EDX + 0x4]       ; 00452433
    FLD float ptr [ESP + 0x14]          ; 00452436
    MOV EAX,dword ptr [EDX]             ; 0045243a
    FLD float ptr [ECX]                 ; 0045243c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0045243e
    FLD float ptr [ECX + 0x4]           ; 00452441
    FLD float ptr [EDX]                 ; 00452444
    FLD float ptr [EDX + 0x4]           ; 00452446
    FXCH ST5                            ; 00452449
    FSUB float ptr [EAX]                ; 0045244b
    FXCH ST4                            ; 0045244d
    FSUB float ptr [EAX + 0x4]          ; 0045244f
    FXCH ST4                            ; 00452452
    FSTP float ptr [ESP + 0x28]         ; 00452454
    FXCH ST3                            ; 00452458
    FSTP float ptr [ESP + 0x20]         ; 0045245a
    FXCH                                ; 0045245e
    FSUB float ptr [EAX]                ; 00452460
    FXCH                                ; 00452462
    FSUB float ptr [EAX + 0x4]          ; 00452464
    FXCH                                ; 00452467
    FSTP float ptr [ESP + 0x2c]         ; 00452469
    FSTP float ptr [ESP + 0x1c]         ; 0045246d
    FSUB float ptr [EAX]                ; 00452471
    FXCH                                ; 00452473
    FSUB float ptr [EAX + 0x4]          ; 00452475
    JMP 0x0045234d                      ; 00452478
        ;   XREF to: 0045234d (UNCONDITIONAL_JUMP)  ; LAB_0045234d
    JBE 0x004523e6                      ; 0045247d
        ;   XREF to: 004523e6 (CONDITIONAL_JUMP)  ; LAB_004523e6
        ;   Label: LAB_0045247d
    CMP EAX,0x2                         ; 00452483
    JZ 0x0045242f                       ; 00452486
        ;   XREF to: 0045242f (CONDITIONAL_JUMP)  ; LAB_0045242f
    JMP 0x00452357                      ; 00452488
        ;   XREF to: 00452357 (UNCONDITIONAL_JUMP)  ; LAB_00452357

