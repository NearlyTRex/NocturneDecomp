; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dcube_cpp_intersectXZCylinder_FUN_004493a0(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00449720 at 004499d6
;   core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00449680 at 004496a9
;
; Referenced Globals:
;   float FLOAT_0057bb8f = -2
;   float FLOAT_0057bb93 = 4
;   float FLOAT_0057bb97 = 2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004493a0
        ;   Label: core_dcube.cpp_intersectXZCylinder_FUN_004493a0
    PUSH EBP                            ; 004493a1
    MOV EBP,ESP                         ; 004493a2
    SUB ESP,0x58                        ; 004493a4
    AND ESP,0xfffffff8                  ; 004493a7
    MOV EDX,dword ptr [EBP + 0xc]       ; 004493aa
    FLD float ptr [EDX + 0x44]          ; 004493ad
    FLD float ptr [EDX + 0x48]          ; 004493b0
    FSUB float ptr [EDX + 0x40]         ; 004493b3
    FXCH                                ; 004493b6
    FSUB float ptr [EDX + 0x3c]         ; 004493b8
    FXCH                                ; 004493bb
    FST float ptr [ESP + 0x1c]          ; 004493bd
    FCHS                                ; 004493c1
    FST float ptr [ESP + 0x50]          ; 004493c3
    FMUL float ptr [ESP + 0x50]         ; 004493c7
    FXCH                                ; 004493cb
    FST float ptr [ESP + 0x20]          ; 004493cd
    FMUL float ptr [ESP + 0x20]         ; 004493d1
    FADDP                               ; 004493d5
    FLDZ                                ; 004493d7
    FXCH                                ; 004493d9
    FSTP double ptr [ESP + 0x10]        ; 004493db
    FCOMP double ptr [ESP + 0x10]       ; 004493df
    FNSTSW AX                           ; 004493e3
    SAHF                                ; 004493e5
    JNC 0x00449600                      ; 004493e6
        ;   XREF to: 00449600 (CONDITIONAL_JUMP)  ; LAB_00449600
    FLD double ptr [ESP + 0x10]         ; 004493ec
    FSQRT                               ; 004493f0
    FLD float ptr [ESP + 0x50]          ; 004493f2
    FLD1                                ; 004493f6
    FDIVRP ST2,ST0                      ; 004493f8
    FMUL ST1                            ; 004493fa
    FLD float ptr [EDX + 0x10]          ; 004493fc
    FSUB float ptr [EDX + 0x3c]         ; 004493ff
    FXCH                                ; 00449402
    FSTP float ptr [ESP + 0x50]         ; 00449404
    FMUL float ptr [ESP + 0x50]         ; 00449408
    FLD float ptr [ESP + 0x20]          ; 0044940c
    FMULP ST2                           ; 00449410
    FLD float ptr [EDX + 0x14]          ; 00449412
    FSUB float ptr [EDX + 0x40]         ; 00449415
    FXCH ST2                            ; 00449418
    FSTP float ptr [ESP + 0x4c]         ; 0044941a
    FXCH                                ; 0044941e
    FMUL float ptr [ESP + 0x4c]         ; 00449420
    FADDP                               ; 00449424
    FLDZ                                ; 00449426
    FCOMPP                              ; 00449428
    FNSTSW AX                           ; 0044942a
    SAHF                                ; 0044942c
    JC 0x00449607                       ; 0044942d
        ;   XREF to: 00449607 (CONDITIONAL_JUMP)  ; LAB_00449607
    FLD float ptr [EDX + 0x18]          ; 00449433
        ;   Label: LAB_00449433
    FMUL float ptr [ESP + 0x50]         ; 00449436
    FLD float ptr [EDX + 0x1c]          ; 0044943a
    FMUL float ptr [ESP + 0x4c]         ; 0044943d
    FADDP                               ; 00449441
    FST float ptr [ESP + 0x28]          ; 00449443
    FLDZ                                ; 00449447
    FCOMPP                              ; 00449449
    FNSTSW AX                           ; 0044944b
    SAHF                                ; 0044944d
    JNC 0x00449600                      ; 0044944e
        ;   XREF to: 00449600 (CONDITIONAL_JUMP)  ; LAB_00449600
    FLD float ptr [ESP + 0x50]          ; 00449454
    FLD float ptr [EDX + 0x3c]          ; 00449458
    FMUL ST1                            ; 0044945b
    FLD float ptr [EDX + 0x10]          ; 0044945d
    FMULP ST2                           ; 00449460
    FLD float ptr [ESP + 0x4c]          ; 00449462
    FLD float ptr [EDX + 0x40]          ; 00449466
    FMUL ST1                            ; 00449469
    FLD float ptr [EDX + 0x14]          ; 0044946b
    FMULP ST2                           ; 0044946e
    FADDP ST2,ST0                       ; 00449470
    FADDP ST2,ST0                       ; 00449472
    FSTP float ptr [ESP + 0x40]         ; 00449474
    FCOMP float ptr [ESP + 0x40]        ; 00449478
    FNSTSW AX                           ; 0044947c
    SAHF                                ; 0044947e
    JA 0x00449600                       ; 0044947f
        ;   XREF to: 00449600 (CONDITIONAL_JUMP)  ; LAB_00449600
    FLD float ptr [ESP + 0x50]          ; 00449485
    FLD ST0                             ; 00449489
    FMUL float ptr [EDX + 0x20]         ; 0044948b
    FLD float ptr [ESP + 0x4c]          ; 0044948e
    FLD ST0                             ; 00449492
    FMUL float ptr [EDX + 0x20]         ; 00449494
    FXCH ST2                            ; 00449497
    FADD float ptr [EDX + 0x10]         ; 00449499
    FXCH ST2                            ; 0044949c
    FADD float ptr [EDX + 0x14]         ; 0044949e
    FXCH ST2                            ; 004494a1
    FST float ptr [ESP + 0x3c]          ; 004494a3
    FMULP ST3                           ; 004494a7
    FXCH                                ; 004494a9
    FST float ptr [ESP + 0x44]          ; 004494ab
    FMULP                               ; 004494af
    FADDP                               ; 004494b1
    FSUBR float ptr [ESP + 0x40]        ; 004494b3
    FST float ptr [ESP + 0x24]          ; 004494b7
    FCOMP float ptr [ESP + 0x28]        ; 004494bb
    FNSTSW AX                           ; 004494bf
    SAHF                                ; 004494c1
    JA 0x00449600                       ; 004494c2
        ;   XREF to: 00449600 (CONDITIONAL_JUMP)  ; LAB_00449600
    FLD float ptr [ESP + 0x24]          ; 004494c8
    FDIV float ptr [ESP + 0x28]         ; 004494cc
    FST float ptr [ESP + 0x24]          ; 004494d0
    FCOMP float ptr [EDX]               ; 004494d4
    FNSTSW AX                           ; 004494d6
    SAHF                                ; 004494d8
    JNC 0x00449600                      ; 004494d9
        ;   XREF to: 00449600 (CONDITIONAL_JUMP)  ; LAB_00449600
    FLD float ptr [ESP + 0x20]          ; 004494df
    FABS                                ; 004494e3
    FLD float ptr [ESP + 0x1c]          ; 004494e5
    FABS                                ; 004494e9
    FLD float ptr [ESP + 0x24]          ; 004494eb
    FLD float ptr [EDX + 0x18]          ; 004494ef
    FMUL ST1                            ; 004494f2
    FLD float ptr [EDX + 0x1c]          ; 004494f4
    FMULP ST2                           ; 004494f7
    FADD float ptr [ESP + 0x3c]         ; 004494f9
    FXCH                                ; 004494fd
    FADD float ptr [ESP + 0x44]         ; 004494ff
    FXCH                                ; 00449503
    FSTP float ptr [EDX + 0x54]         ; 00449505
    FSTP float ptr [EDX + 0x58]         ; 00449508
    FCOMPP                              ; 0044950b
    FNSTSW AX                           ; 0044950d
    SAHF                                ; 0044950f
    JNC 0x00449622                      ; 00449510
        ;   XREF to: 00449622 (CONDITIONAL_JUMP)  ; LAB_00449622
    FLD float ptr [EDX + 0x54]          ; 00449516
    FSUB float ptr [EDX + 0x3c]         ; 00449519
    FDIV float ptr [ESP + 0x20]         ; 0044951c
    FSTP float ptr [EDX + 0x50]         ; 00449520
        ;   Label: LAB_00449520
    FLDZ                                ; 00449523
    FLD float ptr [EDX + 0x50]          ; 00449525
    FSTP double ptr [ESP + 0x8]         ; 00449528
    FCOMP double ptr [ESP + 0x8]        ; 0044952c
    FNSTSW AX                           ; 00449530
    SAHF                                ; 00449532
    JBE 0x00449631                      ; 00449533
        ;   XREF to: 00449631 (CONDITIONAL_JUMP)  ; LAB_00449631
    MOV dword ptr [EDX + 0x50],0x0      ; 00449539
    FLD float ptr [EDX + 0x3c]          ; 00449540
    MOV EAX,dword ptr [EDX + 0x40]      ; 00449543
    MOV dword ptr [EDX + 0x58],EAX      ; 00449546
        ;   Label: LAB_00449546
    FSTP float ptr [EDX + 0x54]         ; 00449549
    FLD float ptr [EDX + 0x18]          ; 0044954c
    FMUL ST0                            ; 0044954f
    FLD float ptr [EDX + 0x18]          ; 00449551
    FLD float ptr [EDX + 0x54]          ; 00449554
    FSUB float ptr [EDX + 0x10]         ; 00449557
    FXCH                                ; 0044955a
    FMUL ST1                            ; 0044955c
    FLD float ptr [EDX + 0x1c]          ; 0044955e
    FMUL ST0                            ; 00449561
    FLD ST2                             ; 00449563
    FMULP ST3                           ; 00449565
    FLD float ptr [EDX + 0x58]          ; 00449567
    FSUB float ptr [EDX + 0x14]         ; 0044956a
    FLD float ptr [EDX + 0x1c]          ; 0044956d
    FMUL ST1                            ; 00449570
    FLD ST1                             ; 00449572
    FXCH ST3                            ; 00449574
    FADDP ST6,ST0                       ; 00449576
    FXCH ST2                            ; 00449578
    FMULP                               ; 0044957a
    FXCH ST4                            ; 0044957c
    FST float ptr [ESP + 0x38]          ; 0044957e
    FMUL float ptr [0x0057bb93]         ; 00449582 | FLOAT_0057bb93
    FXCH ST4                            ; 00449588
    FADDP ST3,ST0                       ; 0044958a
    FADDP                               ; 0044958c
    FLD float ptr [EDX + 0x20]          ; 0044958e
    FMUL ST0                            ; 00449591
    FXCH                                ; 00449593
    FMUL float ptr [0x0057bb8f]         ; 00449595 | FLOAT_0057bb8f
    FXCH                                ; 0044959b
    FSUBP ST2,ST0                       ; 0044959d
    FXCH ST2                            ; 0044959f
    FMULP                               ; 004495a1
    FXCH                                ; 004495a3
    FST float ptr [ESP + 0x48]          ; 004495a5
    FMUL float ptr [ESP + 0x48]         ; 004495a9
    FSUBRP                              ; 004495ad
    FLDZ                                ; 004495af
    FXCH                                ; 004495b1
    FSTP float ptr [ESP + 0x18]         ; 004495b3
    FCOMP float ptr [ESP + 0x18]        ; 004495b7
    FNSTSW AX                           ; 004495bb
    SAHF                                ; 004495bd
    JA 0x00449600                       ; 004495be
        ;   XREF to: 00449600 (CONDITIONAL_JUMP)  ; LAB_00449600
    FLD float ptr [ESP + 0x48]          ; 004495c0
    FCHS                                ; 004495c4
    FLD float ptr [ESP + 0x18]          ; 004495c6
    FSQRT                               ; 004495ca
    FSUBP                               ; 004495cc
    FLD float ptr [ESP + 0x38]          ; 004495ce
    FMUL float ptr [0x0057bb97]         ; 004495d2 | FLOAT_0057bb97
    FDIVP                               ; 004495d8
    FLDZ                                ; 004495da
    FXCH                                ; 004495dc
    FST float ptr [EDX + 0x4c]          ; 004495de
    FSTP double ptr [ESP]               ; 004495e1
    FCOMP double ptr [ESP]              ; 004495e4
    FNSTSW AX                           ; 004495e7
    SAHF                                ; 004495e9
    JA 0x00449600                       ; 004495ea
        ;   XREF to: 00449600 (CONDITIONAL_JUMP)  ; LAB_00449600
    FLD1                                ; 004495ec
    FCOMP double ptr [ESP]              ; 004495ee
    FNSTSW AX                           ; 004495f1
    SAHF                                ; 004495f3
    JC 0x00449600                       ; 004495f4
        ;   XREF to: 00449600 (CONDITIONAL_JUMP)  ; LAB_00449600
    FLD float ptr [EDX + 0x4c]          ; 004495f6
    FCOMP float ptr [EDX]               ; 004495f9
    FNSTSW AX                           ; 004495fb
    SAHF                                ; 004495fd
    JC 0x00449668                       ; 004495fe
        ;   XREF to: 00449668 (CONDITIONAL_JUMP)  ; LAB_00449668
    XOR EAX,EAX                         ; 00449600
        ;   Label: LAB_00449600
    MOV ESP,EBP                         ; 00449602
    POP EBP                             ; 00449604
    POP EBX                             ; 00449605
    RET                                 ; 00449606
    MOV BL,byte ptr [ESP + 0x4f]        ; 00449607
        ;   Label: LAB_00449607
    MOV AH,byte ptr [ESP + 0x53]        ; 0044960b
    XOR BL,0x80                         ; 0044960f
    XOR AH,0x80                         ; 00449612
    MOV byte ptr [ESP + 0x4f],BL        ; 00449615
    MOV byte ptr [ESP + 0x53],AH        ; 00449619
    JMP 0x00449433                      ; 0044961d
        ;   XREF to: 00449433 (UNCONDITIONAL_JUMP)  ; LAB_00449433
    FLD float ptr [EDX + 0x58]          ; 00449622
        ;   Label: LAB_00449622
    FSUB float ptr [EDX + 0x40]         ; 00449625
    FDIV float ptr [ESP + 0x1c]         ; 00449628
    JMP 0x00449520                      ; 0044962c
        ;   XREF to: 00449520 (UNCONDITIONAL_JUMP)  ; LAB_00449520
    FLD1                                ; 00449631
        ;   Label: LAB_00449631
    FCOMP double ptr [ESP + 0x8]        ; 00449633
    FNSTSW AX                           ; 00449637
    SAHF                                ; 00449639
    JNC 0x0044964e                      ; 0044963a
        ;   XREF to: 0044964e (CONDITIONAL_JUMP)  ; LAB_0044964e
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 0044963c
    FLD float ptr [EDX + 0x44]          ; 00449643
    MOV EAX,dword ptr [EDX + 0x48]      ; 00449646
    JMP 0x00449546                      ; 00449649
        ;   XREF to: 00449546 (UNCONDITIONAL_JUMP)  ; LAB_00449546
    FLD float ptr [ESP + 0x24]          ; 0044964e
        ;   Label: LAB_0044964e
    FLDZ                                ; 00449652
    FCOMPP                              ; 00449654
    FNSTSW AX                           ; 00449656
    SAHF                                ; 00449658
    JBE 0x00449661                      ; 00449659
        ;   XREF to: 00449661 (CONDITIONAL_JUMP)  ; LAB_00449661
    XOR ECX,ECX                         ; 0044965b
    MOV dword ptr [ESP + 0x24],ECX      ; 0044965d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00449661
        ;   Label: LAB_00449661
    MOV dword ptr [EDX + 0x4c],EAX      ; 00449665
    MOV EAX,0x1                         ; 00449668
        ;   Label: LAB_00449668
    MOV ESP,EBP                         ; 0044966d
    POP EBP                             ; 0044966f
    POP EBX                             ; 00449670
    RET                                 ; 00449671

