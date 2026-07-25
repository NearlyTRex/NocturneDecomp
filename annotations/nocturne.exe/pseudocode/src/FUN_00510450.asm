; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00510450(float *param_1,float param_2,float param_3,int param_4)
;
; Local Variables:
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
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
;
; Referenced Globals:
;   double DOUBLE_00590a25 = -0.00100000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510450
        ;   Label: FUN_00510450
    PUSH EBP                            ; 00510451
    MOV EBP,ESP                         ; 00510452
    SUB ESP,0xc0                        ; 00510454
    AND ESP,0xfffffff8                  ; 0051045a
    MOV EDX,dword ptr [EBP + 0xc]       ; 0051045d
    MOV ECX,dword ptr [EBP + 0x18]      ; 00510460
    FLD float ptr [EDX + 0x24]          ; 00510463
    FCOMP float ptr [ECX + 0x14]        ; 00510466
    FNSTSW AX                           ; 00510469
    SAHF                                ; 0051046b
    JBE 0x005104fc                      ; 0051046c
        ;   XREF to: 005104fc (CONDITIONAL_JUMP)  ; LAB_005104fc
    FLD float ptr [EDX + 0x28]          ; 00510472
    FCOMP float ptr [ECX + 0x18]        ; 00510475
    FNSTSW AX                           ; 00510478
    SAHF                                ; 0051047a
    JNC 0x005104fc                      ; 0051047b
        ;   XREF to: 005104fc (CONDITIONAL_JUMP)  ; LAB_005104fc
    FLD float ptr [EBP + 0x10]          ; 00510481
    FSUB float ptr [EDX + 0x10]         ; 00510484
    FST double ptr [ESP + 0x78]         ; 00510487
    FMUL double ptr [ESP + 0x78]        ; 0051048b
    FLD float ptr [ECX + 0x1c]          ; 0051048f
    FLD float ptr [EBP + 0x14]          ; 00510492
    FSUB float ptr [EDX + 0x14]         ; 00510495
    FXCH                                ; 00510498
    FADD float ptr [EDX + 0x20]         ; 0051049a
    FXCH                                ; 0051049d
    FST double ptr [ESP + 0x30]         ; 0051049f
    FMUL double ptr [ESP + 0x30]        ; 005104a3
    FXCH                                ; 005104a7
    FST double ptr [ESP + 0x48]         ; 005104a9
    FMUL double ptr [ESP + 0x48]        ; 005104ad
    FXCH                                ; 005104b1
    FADDP ST2,ST0                       ; 005104b3
    FSTP double ptr [ESP + 0x58]        ; 005104b5
    FST double ptr [ESP + 0x20]         ; 005104b9
    FCOMP double ptr [ESP + 0x58]       ; 005104bd
    FNSTSW AX                           ; 005104c1
    SAHF                                ; 005104c3
    JNC 0x00510532                      ; 005104c4
        ;   XREF to: 00510532 (CONDITIONAL_JUMP)  ; LAB_00510532
    FLD double ptr [ESP + 0x20]         ; 005104c6
    FSQRT                               ; 005104ca
    FSUB double ptr [ESP + 0x48]        ; 005104cc
    FST double ptr [ESP + 0x70]         ; 005104d0
    FCOMP double ptr [0x00590a25]       ; 005104d4 | DOUBLE_00590a25
    FNSTSW AX                           ; 005104da
    SAHF                                ; 005104dc
    JBE 0x005104f1                      ; 005104dd
        ;   XREF to: 005104f1 (CONDITIONAL_JUMP)  ; LAB_005104f1
    MOV ECX,0xd2f1a9fc                  ; 005104df
    MOV EBX,0xbf50624d                  ; 005104e4
    MOV dword ptr [ESP + 0x70],ECX      ; 005104e9
    MOV dword ptr [ESP + 0x74],EBX      ; 005104ed
    FLD float ptr [EDX]                 ; 005104f1
        ;   Label: LAB_005104f1
    FCOMP double ptr [ESP + 0x70]       ; 005104f3
    FNSTSW AX                           ; 005104f7
    SAHF                                ; 005104f9
    JA 0x00510503                       ; 005104fa
        ;   XREF to: 00510503 (CONDITIONAL_JUMP)  ; LAB_00510503
    XOR EAX,EAX                         ; 005104fc
        ;   Label: LAB_005104fc
    MOV ESP,EBP                         ; 005104fe
    POP EBP                             ; 00510500
    POP EBX                             ; 00510501
    RET                                 ; 00510502
    FLD double ptr [ESP + 0x70]         ; 00510503
        ;   Label: LAB_00510503
    FLD double ptr [ESP + 0x78]         ; 00510507
    FLD double ptr [ESP + 0x30]         ; 0051050b
    MOV EAX,0x1                         ; 0051050f
    FXCH                                ; 00510514
    FCHS                                ; 00510516
    MOV dword ptr [EDX + 0x8],0x0       ; 00510518
    FXCH                                ; 0051051f
    FCHS                                ; 00510521
    FXCH ST2                            ; 00510523
    FSTP float ptr [EDX]                ; 00510525
    FSTP float ptr [EDX + 0x4]          ; 00510527
    FSTP float ptr [EDX + 0xc]          ; 0051052a
    MOV ESP,EBP                         ; 0051052d
    POP EBP                             ; 0051052f
    POP EBX                             ; 00510530
    RET                                 ; 00510531
    FLD double ptr [ESP + 0x78]         ; 00510532
        ;   Label: LAB_00510532
    FLD float ptr [EDX + 0x34]          ; 00510536
    FSTP double ptr [ESP + 0x38]        ; 00510539
    FMUL double ptr [ESP + 0x38]        ; 0051053d
    FLD float ptr [EDX + 0x38]          ; 00510541
    FSTP double ptr [ESP + 0x68]        ; 00510544
    FLD double ptr [ESP + 0x30]         ; 00510548
    FMUL double ptr [ESP + 0x68]        ; 0051054c
    FADDP                               ; 00510550
    FLDZ                                ; 00510552
    FXCH                                ; 00510554
    FSTP double ptr [ESP + 0x60]        ; 00510556
    FCOMP double ptr [ESP + 0x60]       ; 0051055a
    FNSTSW AX                           ; 0051055e
    SAHF                                ; 00510560
    JNC 0x005104fc                      ; 00510561
        ;   XREF to: 005104fc (CONDITIONAL_JUMP)  ; LAB_005104fc
    FLD double ptr [ESP + 0x60]         ; 00510563
    FLD double ptr [ESP + 0x38]         ; 00510567
    FMUL ST1                            ; 0051056b
    FLD double ptr [ESP + 0x68]         ; 0051056d
    FMULP ST2                           ; 00510571
    FLD float ptr [EDX + 0x10]          ; 00510573
    FSTP double ptr [ESP + 0x10]        ; 00510576
    FADD double ptr [ESP + 0x10]        ; 0051057a
    FLD float ptr [EBP + 0x10]          ; 0051057e
    FXCH                                ; 00510581
    FSTP double ptr [ESP + 0x18]        ; 00510583
    FSUB double ptr [ESP + 0x18]        ; 00510587
    FMUL ST0                            ; 0051058b
    FLD float ptr [EDX + 0x14]          ; 0051058d
    FSTP double ptr [ESP + 0x8]         ; 00510590
    FXCH                                ; 00510594
    FADD double ptr [ESP + 0x8]         ; 00510596
    FLD float ptr [EBP + 0x14]          ; 0051059a
    FXCH                                ; 0051059d
    FSTP double ptr [ESP]               ; 0051059f
    FSUB double ptr [ESP]               ; 005105a2
    FMUL ST0                            ; 005105a5
    FADDP                               ; 005105a7
    FST double ptr [ESP + 0x28]         ; 005105a9
    FCOMP double ptr [ESP + 0x58]       ; 005105ad
    FNSTSW AX                           ; 005105b1
    SAHF                                ; 005105b3
    JNC 0x005104fc                      ; 005105b4
        ;   XREF to: 005104fc (CONDITIONAL_JUMP)  ; LAB_005104fc
    FLD float ptr [EDX + 0x18]          ; 005105ba
    FST double ptr [ESP + 0x40]         ; 005105bd
    FABS                                ; 005105c1
    FLD double ptr [ESP + 0x58]         ; 005105c3
    FSUB double ptr [ESP + 0x28]        ; 005105c7
    FSQRT                               ; 005105cb
    FLD float ptr [EDX + 0x1c]          ; 005105cd
    FST double ptr [ESP + 0x80]         ; 005105d0
    FABS                                ; 005105d7
    FLD double ptr [ESP + 0x38]         ; 005105d9
    FMUL ST2                            ; 005105dd
    FLD double ptr [ESP + 0x68]         ; 005105df
    FMULP ST3                           ; 005105e3
    FLD double ptr [ESP]                ; 005105e5
    FLD double ptr [ESP + 0x18]         ; 005105e8
    FSUBRP ST2,ST0                      ; 005105ec
    FSUBRP ST3,ST0                      ; 005105ee
    FSTP double ptr [ESP + 0x90]        ; 005105f0
    FXCH                                ; 005105f7
    FSTP double ptr [ESP + 0x50]        ; 005105f9
    FCOMPP                              ; 005105fd
    FNSTSW AX                           ; 005105ff
    SAHF                                ; 00510601
    JNC 0x00510653                      ; 00510602
        ;   XREF to: 00510653 (CONDITIONAL_JUMP)  ; LAB_00510653
    FLD double ptr [ESP + 0x90]         ; 00510604
    FSUB double ptr [ESP + 0x10]        ; 0051060b
    FDIV double ptr [ESP + 0x40]        ; 0051060f
    FSTP double ptr [ESP + 0x88]        ; 00510613
        ;   Label: LAB_00510613
    FLDZ                                ; 0051061a
    FCOMP double ptr [ESP + 0x88]       ; 0051061c
    FNSTSW AX                           ; 00510623
    SAHF                                ; 00510625
    JA 0x005104fc                       ; 00510626
        ;   XREF to: 005104fc (CONDITIONAL_JUMP)  ; LAB_005104fc
    FLD float ptr [EDX]                 ; 0051062c
    FCOMP double ptr [ESP + 0x88]       ; 0051062e
    FNSTSW AX                           ; 00510635
    SAHF                                ; 00510637
    JBE 0x005104fc                      ; 00510638
        ;   XREF to: 005104fc (CONDITIONAL_JUMP)  ; LAB_005104fc
    FLD1                                ; 0051063e
    FCOMP double ptr [ESP + 0x88]       ; 00510640
    FNSTSW AX                           ; 00510647
    SAHF                                ; 00510649
    JNC 0x00510664                      ; 0051064a
        ;   XREF to: 00510664 (CONDITIONAL_JUMP)  ; LAB_00510664
    XOR EAX,EAX                         ; 0051064c
    MOV ESP,EBP                         ; 0051064e
    POP EBP                             ; 00510650
    POP EBX                             ; 00510651
    RET                                 ; 00510652
    FLD double ptr [ESP + 0x50]         ; 00510653
        ;   Label: LAB_00510653
    FSUB double ptr [ESP + 0x8]         ; 00510657
    FDIV double ptr [ESP + 0x80]        ; 0051065b
    JMP 0x00510613                      ; 00510662
        ;   XREF to: 00510613 (UNCONDITIONAL_JUMP)  ; LAB_00510613
    FLD double ptr [ESP + 0x88]         ; 00510664
        ;   Label: LAB_00510664
    FLD float ptr [EBP + 0x10]          ; 0051066b
    FLD float ptr [EBP + 0x14]          ; 0051066e
    MOV dword ptr [EDX + 0x8],0x0       ; 00510671
    MOV EAX,0x1                         ; 00510678
    FXCH ST2                            ; 0051067d
    FSTP float ptr [EDX]                ; 0051067f
    FSUBR double ptr [ESP + 0x90]       ; 00510681
    FXCH                                ; 00510688
    FSUBR double ptr [ESP + 0x50]       ; 0051068a
    FXCH                                ; 0051068e
    FSTP float ptr [EDX + 0x4]          ; 00510690
    FSTP float ptr [EDX + 0xc]          ; 00510693
    MOV ESP,EBP                         ; 00510696
    POP EBP                             ; 00510698
    POP EBX                             ; 00510699
    RET                                 ; 0051069a

