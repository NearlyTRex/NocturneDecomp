; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcube_cpp_FUN_00456340(SIntersectXZCylinder *cylinder)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
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
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_004566c0 at 00456976
;   core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00456620 at 00456649
;
; Referenced Globals:
;   undefined4 DAT_005d7aa3
;   undefined4 DAT_005d7aa7
;   undefined4 DAT_005d7aab
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456340
        ;   Label: core_dcube.cpp_FUN_00456340
    PUSH EBP                            ; 00456341
    MOV EBP,ESP                         ; 00456342
    SUB ESP,0x58                        ; 00456344
    AND ESP,0xfffffff8                  ; 00456347
    MOV EDX,dword ptr [EBP + 0xc]       ; 0045634a
    FLD float ptr [EDX + 0x44]          ; 0045634d
    FLD float ptr [EDX + 0x48]          ; 00456350
    FSUB float ptr [EDX + 0x40]         ; 00456353
    FXCH                                ; 00456356
    FSUB float ptr [EDX + 0x3c]         ; 00456358
    FXCH                                ; 0045635b
    FST float ptr [ESP + 0x1c]          ; 0045635d
    FCHS                                ; 00456361
    FST float ptr [ESP + 0x50]          ; 00456363
    FMUL float ptr [ESP + 0x50]         ; 00456367
    FXCH                                ; 0045636b
    FST float ptr [ESP + 0x20]          ; 0045636d
    FMUL float ptr [ESP + 0x20]         ; 00456371
    FADDP                               ; 00456375
    FLDZ                                ; 00456377
    FXCH                                ; 00456379
    FSTP double ptr [ESP + 0x10]        ; 0045637b
    FCOMP double ptr [ESP + 0x10]       ; 0045637f
    FNSTSW AX                           ; 00456383
    SAHF                                ; 00456385
    JNC 0x004565a0                      ; 00456386
        ;   XREF to: 004565a0 (CONDITIONAL_JUMP)  ; LAB_004565a0
    FLD double ptr [ESP + 0x10]         ; 0045638c
    FSQRT                               ; 00456390
    FLD float ptr [ESP + 0x50]          ; 00456392
    FLD1                                ; 00456396
    FDIVRP ST2,ST0                      ; 00456398
    FMUL ST1                            ; 0045639a
    FLD float ptr [EDX + 0x10]          ; 0045639c
    FSUB float ptr [EDX + 0x3c]         ; 0045639f
    FXCH                                ; 004563a2
    FSTP float ptr [ESP + 0x50]         ; 004563a4
    FMUL float ptr [ESP + 0x50]         ; 004563a8
    FLD float ptr [ESP + 0x20]          ; 004563ac
    FMULP ST2                           ; 004563b0
    FLD float ptr [EDX + 0x14]          ; 004563b2
    FSUB float ptr [EDX + 0x40]         ; 004563b5
    FXCH ST2                            ; 004563b8
    FSTP float ptr [ESP + 0x4c]         ; 004563ba
    FXCH                                ; 004563be
    FMUL float ptr [ESP + 0x4c]         ; 004563c0
    FADDP                               ; 004563c4
    FLDZ                                ; 004563c6
    FCOMPP                              ; 004563c8
    FNSTSW AX                           ; 004563ca
    SAHF                                ; 004563cc
    JC 0x004565a7                       ; 004563cd
        ;   XREF to: 004565a7 (CONDITIONAL_JUMP)  ; LAB_004565a7
    FLD float ptr [EDX + 0x18]          ; 004563d3
        ;   Label: LAB_004563d3
    FMUL float ptr [ESP + 0x50]         ; 004563d6
    FLD float ptr [EDX + 0x1c]          ; 004563da
    FMUL float ptr [ESP + 0x4c]         ; 004563dd
    FADDP                               ; 004563e1
    FST float ptr [ESP + 0x28]          ; 004563e3
    FLDZ                                ; 004563e7
    FCOMPP                              ; 004563e9
    FNSTSW AX                           ; 004563eb
    SAHF                                ; 004563ed
    JNC 0x004565a0                      ; 004563ee
        ;   XREF to: 004565a0 (CONDITIONAL_JUMP)  ; LAB_004565a0
    FLD float ptr [ESP + 0x50]          ; 004563f4
    FLD float ptr [EDX + 0x3c]          ; 004563f8
    FMUL ST1                            ; 004563fb
    FLD float ptr [EDX + 0x10]          ; 004563fd
    FMULP ST2                           ; 00456400
    FLD float ptr [ESP + 0x4c]          ; 00456402
    FLD float ptr [EDX + 0x40]          ; 00456406
    FMUL ST1                            ; 00456409
    FLD float ptr [EDX + 0x14]          ; 0045640b
    FMULP ST2                           ; 0045640e
    FADDP ST2,ST0                       ; 00456410
    FADDP ST2,ST0                       ; 00456412
    FSTP float ptr [ESP + 0x40]         ; 00456414
    FCOMP float ptr [ESP + 0x40]        ; 00456418
    FNSTSW AX                           ; 0045641c
    SAHF                                ; 0045641e
    JA 0x004565a0                       ; 0045641f
        ;   XREF to: 004565a0 (CONDITIONAL_JUMP)  ; LAB_004565a0
    FLD float ptr [ESP + 0x50]          ; 00456425
    FLD ST0                             ; 00456429
    FMUL float ptr [EDX + 0x20]         ; 0045642b
    FLD float ptr [ESP + 0x4c]          ; 0045642e
    FLD ST0                             ; 00456432
    FMUL float ptr [EDX + 0x20]         ; 00456434
    FXCH ST2                            ; 00456437
    FADD float ptr [EDX + 0x10]         ; 00456439
    FXCH ST2                            ; 0045643c
    FADD float ptr [EDX + 0x14]         ; 0045643e
    FXCH ST2                            ; 00456441
    FST float ptr [ESP + 0x3c]          ; 00456443
    FMULP ST3                           ; 00456447
    FXCH                                ; 00456449
    FST float ptr [ESP + 0x44]          ; 0045644b
    FMULP                               ; 0045644f
    FADDP                               ; 00456451
    FSUBR float ptr [ESP + 0x40]        ; 00456453
    FST float ptr [ESP + 0x24]          ; 00456457
    FCOMP float ptr [ESP + 0x28]        ; 0045645b
    FNSTSW AX                           ; 0045645f
    SAHF                                ; 00456461
    JA 0x004565a0                       ; 00456462
        ;   XREF to: 004565a0 (CONDITIONAL_JUMP)  ; LAB_004565a0
    FLD float ptr [ESP + 0x24]          ; 00456468
    FDIV float ptr [ESP + 0x28]         ; 0045646c
    FST float ptr [ESP + 0x24]          ; 00456470
    FCOMP float ptr [EDX]               ; 00456474
    FNSTSW AX                           ; 00456476
    SAHF                                ; 00456478
    JNC 0x004565a0                      ; 00456479
        ;   XREF to: 004565a0 (CONDITIONAL_JUMP)  ; LAB_004565a0
    FLD float ptr [ESP + 0x20]          ; 0045647f
    FABS                                ; 00456483
    FLD float ptr [ESP + 0x1c]          ; 00456485
    FABS                                ; 00456489
    FLD float ptr [ESP + 0x24]          ; 0045648b
    FLD float ptr [EDX + 0x18]          ; 0045648f
    FMUL ST1                            ; 00456492
    FLD float ptr [EDX + 0x1c]          ; 00456494
    FMULP ST2                           ; 00456497
    FADD float ptr [ESP + 0x3c]         ; 00456499
    FXCH                                ; 0045649d
    FADD float ptr [ESP + 0x44]         ; 0045649f
    FXCH                                ; 004564a3
    FSTP float ptr [EDX + 0x54]         ; 004564a5
    FSTP float ptr [EDX + 0x58]         ; 004564a8
    FCOMPP                              ; 004564ab
    FNSTSW AX                           ; 004564ad
    SAHF                                ; 004564af
    JNC 0x004565c2                      ; 004564b0
        ;   XREF to: 004565c2 (CONDITIONAL_JUMP)  ; LAB_004565c2
    FLD float ptr [EDX + 0x54]          ; 004564b6
    FSUB float ptr [EDX + 0x3c]         ; 004564b9
    FDIV float ptr [ESP + 0x20]         ; 004564bc
    FSTP float ptr [EDX + 0x50]         ; 004564c0
        ;   Label: LAB_004564c0
    FLDZ                                ; 004564c3
    FLD float ptr [EDX + 0x50]          ; 004564c5
    FSTP double ptr [ESP + 0x8]         ; 004564c8
    FCOMP double ptr [ESP + 0x8]        ; 004564cc
    FNSTSW AX                           ; 004564d0
    SAHF                                ; 004564d2
    JBE 0x004565d1                      ; 004564d3
        ;   XREF to: 004565d1 (CONDITIONAL_JUMP)  ; LAB_004565d1
    MOV dword ptr [EDX + 0x50],0x0      ; 004564d9
    FLD float ptr [EDX + 0x3c]          ; 004564e0
    MOV EAX,dword ptr [EDX + 0x40]      ; 004564e3
    MOV dword ptr [EDX + 0x58],EAX      ; 004564e6
        ;   Label: LAB_004564e6
    FSTP float ptr [EDX + 0x54]         ; 004564e9
    FLD float ptr [EDX + 0x18]          ; 004564ec
    FMUL ST0                            ; 004564ef
    FLD float ptr [EDX + 0x18]          ; 004564f1
    FLD float ptr [EDX + 0x54]          ; 004564f4
    FSUB float ptr [EDX + 0x10]         ; 004564f7
    FXCH                                ; 004564fa
    FMUL ST1                            ; 004564fc
    FLD float ptr [EDX + 0x1c]          ; 004564fe
    FMUL ST0                            ; 00456501
    FLD ST2                             ; 00456503
    FMULP ST3                           ; 00456505
    FLD float ptr [EDX + 0x58]          ; 00456507
    FSUB float ptr [EDX + 0x14]         ; 0045650a
    FLD float ptr [EDX + 0x1c]          ; 0045650d
    FMUL ST1                            ; 00456510
    FLD ST1                             ; 00456512
    FXCH ST3                            ; 00456514
    FADDP ST6,ST0                       ; 00456516
    FXCH ST2                            ; 00456518
    FMULP                               ; 0045651a
    FXCH ST4                            ; 0045651c
    FST float ptr [ESP + 0x38]          ; 0045651e
    FMUL float ptr [0x005d7aa7]         ; 00456522 | DAT_005d7aa7
    FXCH ST4                            ; 00456528
    FADDP ST3,ST0                       ; 0045652a
    FADDP                               ; 0045652c
    FLD float ptr [EDX + 0x20]          ; 0045652e
    FMUL ST0                            ; 00456531
    FXCH                                ; 00456533
    FMUL float ptr [0x005d7aa3]         ; 00456535 | DAT_005d7aa3
    FXCH                                ; 0045653b
    FSUBP ST2,ST0                       ; 0045653d
    FXCH ST2                            ; 0045653f
    FMULP                               ; 00456541
    FXCH                                ; 00456543
    FST float ptr [ESP + 0x48]          ; 00456545
    FMUL float ptr [ESP + 0x48]         ; 00456549
    FSUBRP                              ; 0045654d
    FLDZ                                ; 0045654f
    FXCH                                ; 00456551
    FSTP float ptr [ESP + 0x18]         ; 00456553
    FCOMP float ptr [ESP + 0x18]        ; 00456557
    FNSTSW AX                           ; 0045655b
    SAHF                                ; 0045655d
    JA 0x004565a0                       ; 0045655e
        ;   XREF to: 004565a0 (CONDITIONAL_JUMP)  ; LAB_004565a0
    FLD float ptr [ESP + 0x48]          ; 00456560
    FCHS                                ; 00456564
    FLD float ptr [ESP + 0x18]          ; 00456566
    FSQRT                               ; 0045656a
    FSUBP                               ; 0045656c
    FLD float ptr [ESP + 0x38]          ; 0045656e
    FMUL float ptr [0x005d7aab]         ; 00456572 | DAT_005d7aab
    FDIVP                               ; 00456578
    FLDZ                                ; 0045657a
    FXCH                                ; 0045657c
    FST float ptr [EDX + 0x4c]          ; 0045657e
    FSTP double ptr [ESP]               ; 00456581
    FCOMP double ptr [ESP]              ; 00456584
    FNSTSW AX                           ; 00456587
    SAHF                                ; 00456589
    JA 0x004565a0                       ; 0045658a
        ;   XREF to: 004565a0 (CONDITIONAL_JUMP)  ; LAB_004565a0
    FLD1                                ; 0045658c
    FCOMP double ptr [ESP]              ; 0045658e
    FNSTSW AX                           ; 00456591
    SAHF                                ; 00456593
    JC 0x004565a0                       ; 00456594
        ;   XREF to: 004565a0 (CONDITIONAL_JUMP)  ; LAB_004565a0
    FLD float ptr [EDX + 0x4c]          ; 00456596
    FCOMP float ptr [EDX]               ; 00456599
    FNSTSW AX                           ; 0045659b
    SAHF                                ; 0045659d
    JC 0x00456608                       ; 0045659e
        ;   XREF to: 00456608 (CONDITIONAL_JUMP)  ; LAB_00456608
    XOR EAX,EAX                         ; 004565a0
        ;   Label: LAB_004565a0
    MOV ESP,EBP                         ; 004565a2
    POP EBP                             ; 004565a4
    POP EBX                             ; 004565a5
    RET                                 ; 004565a6
    MOV BL,byte ptr [ESP + 0x4f]        ; 004565a7
        ;   Label: LAB_004565a7
    MOV AH,byte ptr [ESP + 0x53]        ; 004565ab
    XOR BL,0x80                         ; 004565af
    XOR AH,0x80                         ; 004565b2
    MOV byte ptr [ESP + 0x4f],BL        ; 004565b5
    MOV byte ptr [ESP + 0x53],AH        ; 004565b9
    JMP 0x004563d3                      ; 004565bd
        ;   XREF to: 004563d3 (UNCONDITIONAL_JUMP)  ; LAB_004563d3
    FLD float ptr [EDX + 0x58]          ; 004565c2
        ;   Label: LAB_004565c2
    FSUB float ptr [EDX + 0x40]         ; 004565c5
    FDIV float ptr [ESP + 0x1c]         ; 004565c8
    JMP 0x004564c0                      ; 004565cc
        ;   XREF to: 004564c0 (UNCONDITIONAL_JUMP)  ; LAB_004564c0
    FLD1                                ; 004565d1
        ;   Label: LAB_004565d1
    FCOMP double ptr [ESP + 0x8]        ; 004565d3
    FNSTSW AX                           ; 004565d7
    SAHF                                ; 004565d9
    JNC 0x004565ee                      ; 004565da
        ;   XREF to: 004565ee (CONDITIONAL_JUMP)  ; LAB_004565ee
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 004565dc
    FLD float ptr [EDX + 0x44]          ; 004565e3
    MOV EAX,dword ptr [EDX + 0x48]      ; 004565e6
    JMP 0x004564e6                      ; 004565e9
        ;   XREF to: 004564e6 (UNCONDITIONAL_JUMP)  ; LAB_004564e6
    FLD float ptr [ESP + 0x24]          ; 004565ee
        ;   Label: LAB_004565ee
    FLDZ                                ; 004565f2
    FCOMPP                              ; 004565f4
    FNSTSW AX                           ; 004565f6
    SAHF                                ; 004565f8
    JBE 0x00456601                      ; 004565f9
        ;   XREF to: 00456601 (CONDITIONAL_JUMP)  ; LAB_00456601
    XOR ECX,ECX                         ; 004565fb
    MOV dword ptr [ESP + 0x24],ECX      ; 004565fd
    MOV EAX,dword ptr [ESP + 0x24]      ; 00456601
        ;   Label: LAB_00456601
    MOV dword ptr [EDX + 0x4c],EAX      ; 00456605
    MOV EAX,0x1                         ; 00456608
        ;   Label: LAB_00456608
    MOV ESP,EBP                         ; 0045660d
    POP EBP                             ; 0045660f
    POP EBX                             ; 00456610
    RET                                 ; 00456611

