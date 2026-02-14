; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0(int point_count,CVector3f *positions,float *values,CVector3f *normal,CVector3f *out_gradient,float *out_offset)
;
; Parameters:
; int              Stack[0x4]:4   point_count
; CVector3f *      Stack[0x8]:4   positions
; float *          Stack[0xc]:4   values
; CVector3f *      Stack[0x10]:4   normal
; CVector3f *      Stack[0x14]:4   out_gradient
; float *          Stack[0x18]:4   out_offset
; Local Variables:
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
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
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
; undefined        Stack[-0x40]:1  local_40
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530 at 00517605
;
; Referenced Globals:
;   double DOUBLE_00637345 = 2
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005151e0
        ;   Label: shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0
    PUSH ESI                            ; 005151e1
    PUSH EDI                            ; 005151e2
    PUSH EBP                            ; 005151e3
    MOV EBP,ESP                         ; 005151e4
    SUB ESP,0xe8                        ; 005151e6
    AND ESP,0xfffffff8                  ; 005151ec
    MOV EDX,dword ptr [EBP + 0x20]      ; 005151ef
    MOV EAX,dword ptr [EDX]             ; 005151f2
    MOV dword ptr [ESP + 0x68],EAX      ; 005151f4
    MOV EAX,dword ptr [EDX + 0x4]       ; 005151f8
    MOV dword ptr [ESP + 0x74],EAX      ; 005151fb
    MOV EAX,dword ptr [EDX + 0x8]       ; 005151ff
    MOV dword ptr [ESP + 0x80],EAX      ; 00515202
    FLD float ptr [EDX + 0x4]           ; 00515209
    FABS                                ; 0051520c
    FLD float ptr [EDX + 0x8]           ; 0051520e
    FABS                                ; 00515211
    FLD float ptr [EDX]                 ; 00515213
    FABS                                ; 00515215
    MOV EAX,dword ptr [EDX]             ; 00515217
    MOV dword ptr [ESP + 0x88],EAX      ; 00515219
    LEA EAX,[EDX + 0x4]                 ; 00515220
    FSTP float ptr [ESP + 0xcc]         ; 00515223
    MOV EAX,dword ptr [EAX]             ; 0051522a
    FXCH                                ; 0051522c
    FSTP float ptr [ESP + 0xe0]         ; 0051522e
    MOV dword ptr [ESP + 0x8c],EAX      ; 00515235
    LEA EAX,[EDX + 0x8]                 ; 0051523c
    FSTP float ptr [ESP + 0xdc]         ; 0051523f
    MOV EAX,dword ptr [EAX]             ; 00515246
    FLD float ptr [ESP + 0xcc]          ; 00515248
    MOV dword ptr [ESP + 0x90],EAX      ; 0051524f
    FCOMP float ptr [ESP + 0xe0]        ; 00515256
    FNSTSW AX                           ; 0051525d
    SAHF                                ; 0051525f
    JC 0x0051563f                       ; 00515260
        ;   XREF to: 0051563f (CONDITIONAL_JUMP)  ; LAB_0051563f
    FLD float ptr [ESP + 0xcc]          ; 00515266
    FCOMP float ptr [ESP + 0xdc]        ; 0051526d
    FNSTSW AX                           ; 00515274
    SAHF                                ; 00515276
    JC 0x0051563f                       ; 00515277
        ;   XREF to: 0051563f (CONDITIONAL_JUMP)  ; LAB_0051563f
    XOR byte ptr [ESP + 0x8b],0x80      ; 0051527d
    MOV EAX,dword ptr [ESP + 0x88]      ; 00515285
    MOV dword ptr [ESP + 0xd8],EAX      ; 0051528c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00515293
    MOV dword ptr [ESP + 0x88],EAX      ; 0051529a
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005152a1
    MOV dword ptr [ESP + 0x8c],EAX      ; 005152a8
    FLD float ptr [EDX + 0x4]           ; 005152af
        ;   Label: LAB_005152af
    FMUL float ptr [ESP + 0x90]         ; 005152b2
    FLD float ptr [EDX + 0x8]           ; 005152b9
    FMUL float ptr [ESP + 0x8c]         ; 005152bc
    FSUBP                               ; 005152c3
    FSTP float ptr [ESP + 0xa0]         ; 005152c5
    FLD float ptr [EDX + 0x8]           ; 005152cc
    FMUL float ptr [ESP + 0x88]         ; 005152cf
    FLD float ptr [EDX]                 ; 005152d6
    FMUL float ptr [ESP + 0x90]         ; 005152d8
    FSUBP                               ; 005152df
    FSTP float ptr [ESP + 0xa4]         ; 005152e1
    FLD float ptr [EDX]                 ; 005152e8
    FMUL float ptr [ESP + 0x8c]         ; 005152ea
    FLD float ptr [EDX + 0x4]           ; 005152f1
    FMUL float ptr [ESP + 0x88]         ; 005152f4
    LEA EBX,[ESP + 0xa0]                ; 005152fb
    FSUBP                               ; 00515302
    LEA EAX,[ESP + 0x88]                ; 00515304
    FSTP float ptr [ESP + 0xa8]         ; 0051530b
    CMP EAX,EBX                         ; 00515312
    JZ 0x00515340                       ; 00515314
        ;   XREF to: 00515340 (CONDITIONAL_JUMP)  ; LAB_00515340
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00515316
    MOV dword ptr [ESP + 0x88],EAX      ; 0051531d
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00515324
    MOV dword ptr [ESP + 0x8c],EAX      ; 0051532b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00515332
    MOV dword ptr [ESP + 0x90],EAX      ; 00515339
    MOV EAX,dword ptr [ESP + 0x88]      ; 00515340
        ;   Label: LAB_00515340
    MOV dword ptr [ESP + 0x60],EAX      ; 00515347
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0051534b
    MOV dword ptr [ESP + 0x6c],EAX      ; 00515352
    MOV EAX,dword ptr [ESP + 0x90]      ; 00515356
    MOV dword ptr [ESP + 0x78],EAX      ; 0051535d
    FLD float ptr [EDX + 0x4]           ; 00515361
    FMUL float ptr [ESP + 0x90]         ; 00515364
    FLD float ptr [EDX + 0x8]           ; 0051536b
    FMUL float ptr [ESP + 0x8c]         ; 0051536e
    FSUBP                               ; 00515375
    FSTP float ptr [ESP + 0x94]         ; 00515377
    FLD float ptr [EDX + 0x8]           ; 0051537e
    FMUL float ptr [ESP + 0x88]         ; 00515381
    FLD float ptr [EDX]                 ; 00515388
    FMUL float ptr [ESP + 0x90]         ; 0051538a
    FSUBP                               ; 00515391
    FSTP float ptr [ESP + 0x98]         ; 00515393
    FLD float ptr [EDX]                 ; 0051539a
    FMUL float ptr [ESP + 0x8c]         ; 0051539c
    FLD float ptr [EDX + 0x4]           ; 005153a3
    FMUL float ptr [ESP + 0x88]         ; 005153a6
    LEA EAX,[ESP + 0x94]                ; 005153ad
    FSUBP                               ; 005153b4
    LEA EDX,[ESP + 0x88]                ; 005153b6
    FSTP float ptr [ESP + 0x9c]         ; 005153bd
    CMP EDX,EAX                         ; 005153c4
    JZ 0x005153f2                       ; 005153c6
        ;   XREF to: 005153f2 (CONDITIONAL_JUMP)  ; LAB_005153f2
    MOV EAX,dword ptr [ESP + 0x94]      ; 005153c8
    MOV dword ptr [ESP + 0x88],EAX      ; 005153cf
    MOV EAX,dword ptr [ESP + 0x98]      ; 005153d6
    MOV dword ptr [ESP + 0x8c],EAX      ; 005153dd
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005153e4
    MOV dword ptr [ESP + 0x90],EAX      ; 005153eb
    MOV EAX,dword ptr [ESP + 0x88]      ; 005153f2
        ;   Label: LAB_005153f2
    MOV EDI,dword ptr [EBP + 0x14]      ; 005153f9
    XOR EDX,EDX                         ; 005153fc
    XOR ESI,ESI                         ; 005153fe
    MOV dword ptr [ESP + 0x64],EAX      ; 00515400
    MOV dword ptr [ESP + 0x18],EDX      ; 00515404
    MOV dword ptr [ESP + 0x1c],EDX      ; 00515408
    MOV dword ptr [ESP + 0x8],EDX       ; 0051540c
    MOV dword ptr [ESP + 0xc],EDX       ; 00515410
    MOV dword ptr [ESP + 0x20],EDX      ; 00515414
    MOV dword ptr [ESP + 0x24],EDX      ; 00515418
    MOV dword ptr [ESP + 0x38],EDX      ; 0051541c
    MOV dword ptr [ESP + 0x3c],EDX      ; 00515420
    MOV dword ptr [ESP + 0x28],EDX      ; 00515424
    MOV dword ptr [ESP + 0x2c],EDX      ; 00515428
    MOV dword ptr [ESP + 0x10],EDX      ; 0051542c
    MOV dword ptr [ESP + 0x14],EDX      ; 00515430
    MOV dword ptr [ESP + 0x30],EDX      ; 00515434
    MOV dword ptr [ESP + 0x34],EDX      ; 00515438
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0051543c
    MOV dword ptr [ESP],EDX             ; 00515443
    MOV dword ptr [ESP + 0x70],EAX      ; 00515446
    MOV EAX,dword ptr [ESP + 0x90]      ; 0051544a
    MOV dword ptr [ESP + 0x4],EDX       ; 00515451
    MOV dword ptr [ESP + 0x7c],EAX      ; 00515455
    TEST EDI,EDI                        ; 00515459
    JLE 0x00515551                      ; 0051545b
        ;   XREF to: 00515551 (CONDITIONAL_JUMP)  ; LAB_00515551
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00515461
    MOV EDI,dword ptr [EBP + 0x18]      ; 00515464
    PUSH EDI                            ; 00515467
        ;   Label: LAB_00515467
    LEA EAX,[ESP + 0xb0]                ; 00515468
    PUSH EAX                            ; 0051546f
    LEA EAX,[ESP + 0x68]                ; 00515470
    PUSH EAX                            ; 00515474
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00515475
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0051547a
    LEA EAX,[ESP + 0x94]                ; 0051547c
    ADD ESP,0xc                         ; 00515483
    CMP EAX,EDX                         ; 00515486
    JZ 0x005154a7                       ; 00515488
        ;   XREF to: 005154a7 (CONDITIONAL_JUMP)  ; LAB_005154a7
    MOV EAX,dword ptr [EDX]             ; 0051548a
    MOV dword ptr [ESP + 0x88],EAX      ; 0051548c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00515493
    MOV dword ptr [ESP + 0x8c],EAX      ; 00515496
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051549d
    MOV dword ptr [ESP + 0x90],EAX      ; 005154a0
    FLD float ptr [ESP + 0x88]          ; 005154a7
        ;   Label: LAB_005154a7
    FMUL ST0                            ; 005154ae
    FLD float ptr [ESP + 0x8c]          ; 005154b0
    FMUL ST0                            ; 005154b7
    FLD float ptr [ESP + 0x88]          ; 005154b9
    FMUL float ptr [ESP + 0x8c]         ; 005154c0
    FLD float ptr [EBX]                 ; 005154c7
    FMUL float ptr [ESP + 0x88]         ; 005154c9
    FLD float ptr [EBX]                 ; 005154d0
    FMUL float ptr [ESP + 0x8c]         ; 005154d2
    FLD float ptr [ESP + 0x88]          ; 005154d9
    FADD double ptr [ESP + 0x18]        ; 005154e0
    FLD float ptr [ESP + 0x8c]          ; 005154e4
    FXCH                                ; 005154eb
    FSTP double ptr [ESP + 0x18]        ; 005154ed
    FLD float ptr [EBX]                 ; 005154f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005154f3
    ADD EDI,0xc                         ; 005154f6
    ADD EBX,0x4                         ; 005154f9
    INC ESI                             ; 005154fc
    FXCH                                ; 005154fd
    FADD double ptr [ESP + 0x8]         ; 005154ff
    FXCH                                ; 00515503
    FADD double ptr [ESP + 0x20]        ; 00515505
    FXCH                                ; 00515509
    FSTP double ptr [ESP + 0x8]         ; 0051550b
    FSTP double ptr [ESP + 0x20]        ; 0051550f
    FXCH ST4                            ; 00515513
    FADD double ptr [ESP + 0x38]        ; 00515515
    FXCH ST3                            ; 00515519
    FADD double ptr [ESP + 0x28]        ; 0051551b
    FXCH ST2                            ; 0051551f
    FADD double ptr [ESP + 0x10]        ; 00515521
    FXCH                                ; 00515525
    FADD double ptr [ESP + 0x30]        ; 00515527
    FXCH ST4                            ; 0051552b
    FADD double ptr [ESP]               ; 0051552d
    FXCH ST3                            ; 00515530
    FSTP double ptr [ESP + 0x38]        ; 00515532
    FXCH                                ; 00515536
    FSTP double ptr [ESP + 0x28]        ; 00515538
    FSTP double ptr [ESP + 0x10]        ; 0051553c
    FXCH                                ; 00515540
    FSTP double ptr [ESP + 0x30]        ; 00515542
    FSTP double ptr [ESP]               ; 00515546
    CMP ESI,EAX                         ; 00515549
    JL 0x00515467                       ; 0051554b
        ;   XREF to: 00515467 (CONDITIONAL_JUMP)  ; LAB_00515467
    FLD double ptr [ESP + 0x10]         ; 00515551
        ;   Label: LAB_00515551
    FLD ST0                             ; 00515555
    FMUL double ptr [0x00637345]        ; 00515557 | DOUBLE_00637345
    FLD double ptr [ESP + 0x18]         ; 0051555d
    FXCH                                ; 00515561
    FMUL ST1                            ; 00515563
    MOV EAX,dword ptr [EBP + 0x14]      ; 00515565
    FLD double ptr [ESP + 0x8]          ; 00515568
    FXCH                                ; 0051556c
    FMUL ST1                            ; 0051556e
    MOV dword ptr [ESP + 0xe4],EAX      ; 00515570
    FILD dword ptr [ESP + 0xe4]         ; 00515577
    FST double ptr [ESP + 0x40]         ; 0051557e
    FMUL ST4                            ; 00515582
    FST double ptr [ESP + 0x50]         ; 00515584
    FMULP ST4                           ; 00515588
    FSUBP ST3,ST0                       ; 0051558a
    FLD double ptr [ESP + 0x28]         ; 0051558c
    FLD ST0                             ; 00515590
    FMUL double ptr [ESP + 0x40]        ; 00515592
    FLD double ptr [ESP + 0x38]         ; 00515596
    FXCH                                ; 0051559a
    FMUL ST1                            ; 0051559c
    FSUBP ST5,ST0                       ; 0051559e
    FXCH                                ; 005155a0
    FMUL ST3                            ; 005155a2
    FMULP ST3                           ; 005155a4
    FXCH ST2                            ; 005155a6
    FADDP ST3,ST0                       ; 005155a8
    FMUL ST0                            ; 005155aa
    FST double ptr [ESP + 0x48]         ; 005155ac
    FMULP                               ; 005155b0
    FADDP                               ; 005155b2
    FSTP double ptr [ESP + 0x58]        ; 005155b4
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005155b8
    MOV ECX,dword ptr [ESP + 0x58]      ; 005155bc
    TEST EDX,0x7fffffff                 ; 005155c0
    JNZ 0x005156d3                      ; 005155c6
        ;   XREF to: 005156d3 (CONDITIONAL_JUMP)  ; LAB_005156d3
    TEST ECX,ECX                        ; 005155cc
    JNZ 0x005156d3                      ; 005155ce
        ;   XREF to: 005156d3 (CONDITIONAL_JUMP)  ; LAB_005156d3
    MOV EAX,dword ptr [EBP + 0x24]      ; 005155d4
    MOV dword ptr [EAX + 0x8],0x0       ; 005155d7
    MOV EDX,dword ptr [EAX + 0x8]       ; 005155de
    MOV dword ptr [EAX + 0x4],EDX       ; 005155e1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005155e4
    MOV dword ptr [EAX],EDX             ; 005155e7
    MOV EAX,dword ptr [EBP + 0x28]      ; 005155e9
    MOV EDI,dword ptr [EBP + 0x14]      ; 005155ec
    XOR EDX,EDX                         ; 005155ef
    MOV dword ptr [EAX],0x0             ; 005155f1
    TEST EDI,EDI                        ; 005155f7
    JLE 0x00515620                      ; 005155f9
        ;   XREF to: 00515620 (CONDITIONAL_JUMP)  ; LAB_00515620
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005155fb
    MOV EBX,dword ptr [EBP + 0x28]      ; 005155fe
    MOV ECX,dword ptr [EBP + 0x14]      ; 00515601
    FLD float ptr [EAX]                 ; 00515604
        ;   Label: LAB_00515604
    ADD EAX,0x4                         ; 00515606
    FADD float ptr [EBX]                ; 00515609
    INC EDX                             ; 0051560b
    FSTP float ptr [EBX]                ; 0051560c
    CMP EDX,ECX                         ; 0051560e
    JL 0x00515604                       ; 00515610
        ;   XREF to: 00515604 (CONDITIONAL_JUMP)  ; LAB_00515604
    LEA EAX,[EAX]                       ; 00515612
    LEA EDX,[EDX]                       ; 00515618
    MOV EAX,EAX                         ; 0051561e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00515620
        ;   Label: LAB_00515620
    MOV dword ptr [ESP + 0xe4],EAX      ; 00515623
    MOV EAX,dword ptr [EBP + 0x28]      ; 0051562a
    FILD dword ptr [ESP + 0xe4]         ; 0051562d
    FDIVR float ptr [EAX]               ; 00515634
    FSTP float ptr [EAX]                ; 00515636
    MOV ESP,EBP                         ; 00515638
    POP EBP                             ; 0051563a
    POP EDI                             ; 0051563b
    POP ESI                             ; 0051563c
    POP EBX                             ; 0051563d
    RET                                 ; 0051563e
    FLD float ptr [ESP + 0xe0]          ; 0051563f
        ;   Label: LAB_0051563f
    FCOMP float ptr [ESP + 0xcc]        ; 00515646
    FNSTSW AX                           ; 0051564d
    SAHF                                ; 0051564f
    JC 0x0051569c                       ; 00515650
        ;   XREF to: 0051569c (CONDITIONAL_JUMP)  ; LAB_0051569c
    FLD float ptr [ESP + 0xe0]          ; 00515652
    FCOMP float ptr [ESP + 0xdc]        ; 00515659
    FNSTSW AX                           ; 00515660
    SAHF                                ; 00515662
    JC 0x0051569c                       ; 00515663
        ;   XREF to: 0051569c (CONDITIONAL_JUMP)  ; LAB_0051569c
    XOR byte ptr [ESP + 0x8f],0x80      ; 00515665
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0051566d
    MOV dword ptr [ESP + 0xd0],EAX      ; 00515674
    MOV EAX,dword ptr [ESP + 0x88]      ; 0051567b
    MOV dword ptr [ESP + 0x8c],EAX      ; 00515682
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00515689
    MOV dword ptr [ESP + 0x88],EAX      ; 00515690
    JMP 0x005152af                      ; 00515697
        ;   XREF to: 005152af (UNCONDITIONAL_JUMP)  ; LAB_005152af
    XOR byte ptr [ESP + 0x93],0x80      ; 0051569c
        ;   Label: LAB_0051569c
    MOV EAX,dword ptr [ESP + 0x90]      ; 005156a4
    MOV dword ptr [ESP + 0xd4],EAX      ; 005156ab
    MOV EAX,dword ptr [ESP + 0x88]      ; 005156b2
    MOV dword ptr [ESP + 0x90],EAX      ; 005156b9
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005156c0
    MOV dword ptr [ESP + 0x88],EAX      ; 005156c7
    JMP 0x005152af                      ; 005156ce
        ;   XREF to: 005152af (UNCONDITIONAL_JUMP)  ; LAB_005152af
    FLD double ptr [ESP + 0x18]         ; 005156d3
        ;   Label: LAB_005156d3
    FLD ST0                             ; 005156d7
    FMUL double ptr [ESP + 0x8]         ; 005156d9
    FST double ptr [ESP + 0xc4]         ; 005156dd
    FMUL double ptr [ESP]               ; 005156e4
    FLD double ptr [ESP + 0x20]         ; 005156e7
    FLD ST2                             ; 005156eb
    FMUL ST1                            ; 005156ed
    FLD double ptr [ESP + 0x28]         ; 005156ef
    FXCH                                ; 005156f3
    FMUL ST1                            ; 005156f5
    FSUBP ST3,ST0                       ; 005156f7
    FLD double ptr [ESP + 0x50]         ; 005156f9
    FLD ST0                             ; 005156fd
    FMUL double ptr [ESP]               ; 005156ff
    FSUBP ST4,ST0                       ; 00515702
    FLD double ptr [ESP + 0x30]         ; 00515704
    FLD double ptr [ESP + 0x48]         ; 00515708
    FMUL ST1                            ; 0051570c
    FSUBP ST5,ST0                       ; 0051570e
    FLD ST0                             ; 00515710
    FMUL double ptr [ESP + 0x40]        ; 00515712
    FMULP ST3                           ; 00515716
    FXCH ST2                            ; 00515718
    FADDP ST4,ST0                       ; 0051571a
    FLD double ptr [ESP + 0x10]         ; 0051571c
    FLD double ptr [ESP + 0x8]          ; 00515720
    FMUL ST1                            ; 00515724
    FMUL ST4                            ; 00515726
    FADDP ST5,ST0                       ; 00515728
    FXCH ST4                            ; 0051572a
    FCHS                                ; 0051572c
    FLD1                                ; 0051572e
    FDIV double ptr [ESP + 0x58]        ; 00515730
    FXCH ST5                            ; 00515734
    FCHS                                ; 00515736
    FMUL ST6                            ; 00515738
    FMUL ST4                            ; 0051573a
    FXCH ST2                            ; 0051573c
    FMUL ST3                            ; 0051573e
    FADDP ST2,ST0                       ; 00515740
    FLD double ptr [ESP + 0xc4]         ; 00515742
    FMULP ST3                           ; 00515749
    FXCH ST2                            ; 0051574b
    FSUBP                               ; 0051574d
    FLD double ptr [ESP + 0x8]          ; 0051574f
    FMULP ST3                           ; 00515753
    FXCH ST2                            ; 00515755
    FLD double ptr [ESP + 0x38]         ; 00515757
    FXCH                                ; 0051575b
    FMUL ST1                            ; 0051575d
    FADDP ST3,ST0                       ; 0051575f
    FLD double ptr [ESP]                ; 00515761
    FMUL double ptr [ESP + 0x40]        ; 00515764
    FMULP                               ; 00515768
    FSUBP ST2,ST0                       ; 0051576a
    FLD double ptr [ESP]                ; 0051576c
    FMUL ST4                            ; 0051576f
    FMULP ST4                           ; 00515771
    FMUL ST2                            ; 00515773
    FXCH ST3                            ; 00515775
    FADDP                               ; 00515777
    LEA EAX,[ESP + 0x88]                ; 00515779
    FMULP                               ; 00515780
    PUSH EAX                            ; 00515782
    LEA EAX,[ESP + 0xbc]                ; 00515783
    XOR EBX,EBX                         ; 0051578a
    PUSH EAX                            ; 0051578c
    LEA EAX,[ESP + 0x68]                ; 0051578d
    MOV dword ptr [ESP + 0x98],EBX      ; 00515791
    PUSH EAX                            ; 00515798
    FXCH                                ; 00515799
    FSTP float ptr [ESP + 0x94]         ; 0051579b
    FSTP float ptr [ESP + 0x98]         ; 005157a2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005157a9
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005157ae
    MOV ESI,dword ptr [EBP + 0x24]      ; 005157b1
    CMP EAX,ESI                         ; 005157b4
    JZ 0x005157c8                       ; 005157b6
        ;   XREF to: 005157c8 (CONDITIONAL_JUMP)  ; LAB_005157c8
    MOV EDX,dword ptr [EAX]             ; 005157b8
    MOV dword ptr [ESI],EDX             ; 005157ba
    MOV EDX,dword ptr [EAX + 0x4]       ; 005157bc
    MOV dword ptr [ESI + 0x4],EDX       ; 005157bf
    MOV EDX,dword ptr [EAX + 0x8]       ; 005157c2
    MOV dword ptr [ESI + 0x8],EDX       ; 005157c5
    FLD double ptr [ESP + 0x18]         ; 005157c8
        ;   Label: LAB_005157c8
    FLD ST0                             ; 005157cc
    FLD double ptr [ESP + 0x10]         ; 005157ce
    FXCH                                ; 005157d2
    FMUL ST1                            ; 005157d4
    FLD double ptr [ESP]                ; 005157d6
    FXCH                                ; 005157d9
    FMUL ST1                            ; 005157db
    FXCH ST3                            ; 005157dd
    FLD double ptr [ESP + 0x30]         ; 005157df
    FXCH                                ; 005157e3
    FMUL ST1                            ; 005157e5
    FLD double ptr [ESP + 0x28]         ; 005157e7
    FXCH                                ; 005157eb
    FMUL ST1                            ; 005157ed
    FSUBP ST5,ST0                       ; 005157ef
    FLD double ptr [ESP + 0x8]          ; 005157f1
    FLD ST0                             ; 005157f5
    FMUL ST5                            ; 005157f7
    FMULP ST3                           ; 005157f9
    FXCH ST2                            ; 005157fb
    FADDP ST5,ST0                       ; 005157fd
    FXCH                                ; 005157ff
    FMULP ST2                           ; 00515801
    FXCH                                ; 00515803
    FLD double ptr [ESP + 0x38]         ; 00515805
    FXCH                                ; 00515809
    FMUL ST1                            ; 0051580b
    FSUBP ST4,ST0                       ; 0051580d
    FLD double ptr [ESP + 0x20]         ; 0051580f
    FLD ST0                             ; 00515813
    FMUL ST4                            ; 00515815
    FMULP ST4                           ; 00515817
    FXCH ST3                            ; 00515819
    FSUBP ST4,ST0                       ; 0051581b
    FXCH ST2                            ; 0051581d
    FMULP                               ; 0051581f
    FMULP                               ; 00515821
    FADDP                               ; 00515823
    FCHS                                ; 00515825
    FDIV double ptr [ESP + 0x58]        ; 00515827
    MOV EAX,dword ptr [EBP + 0x28]      ; 0051582b
    FSTP float ptr [EAX]                ; 0051582e
    MOV ESP,EBP                         ; 00515830
    POP EBP                             ; 00515832
    POP EDI                             ; 00515833
    POP ESI                             ; 00515834
    POP EBX                             ; 00515835
    RET                                 ; 00515836

