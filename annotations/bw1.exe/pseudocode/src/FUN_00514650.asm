; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00514650(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d224ec
;   undefined4 DAT_01d224f0
;   undefined4 DAT_01d224f4
;   undefined4 DAT_01d224f8
;   undefined4 DAT_01d224fc
;   undefined4 DAT_01d22500
;   undefined4 DAT_01d22504
;   undefined4 DAT_01d22508
;   undefined4 DAT_01d2250c
;   undefined4 DAT_01d22510
;   undefined4 DAT_01d22514
;   undefined4 DAT_01d22518
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d22580
;   undefined4 DAT_01d2ad78
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00514650
        ;   Label: FUN_00514650
    SUB ESP,0x10                        ; 00514651
    MOV EDX,dword ptr [0x01d22580]      ; 00514654 | DAT_01d22580
    TEST EDX,EDX                        ; 0051465a
    JZ 0x00514904                       ; 0051465c
        ;   XREF to: 00514904 (CONDITIONAL_JUMP)  ; LAB_00514904
    MOV EAX,[0x01d2257c]                ; 00514662 | DAT_01d2257c
    FLD float ptr [EAX + 0x4]           ; 00514667
    FMUL float ptr [0x01d224f8]         ; 0051466a | DAT_01d224f8
    FLD float ptr [EAX + 0x4]           ; 00514670
    FMUL float ptr [0x01d224fc]         ; 00514673 | DAT_01d224fc
    FLD float ptr [EAX + 0x4]           ; 00514679
    FMUL float ptr [0x01d22500]         ; 0051467c | DAT_01d22500
    FLD float ptr [EAX + 0xc]           ; 00514682
    FMUL float ptr [0x01d224ec]         ; 00514685 | DAT_01d224ec
    FLD float ptr [EAX]                 ; 0051468b
    FMUL float ptr [0x01d224ec]         ; 0051468d | DAT_01d224ec
    FLD float ptr [EAX + 0xc]           ; 00514693
    FXCH                                ; 00514696
    FADDP ST5,ST0                       ; 00514698
    FMUL float ptr [0x01d224f0]         ; 0051469a | DAT_01d224f0
    FLD float ptr [EAX + 0x8]           ; 005146a0
    FMUL float ptr [0x01d22504]         ; 005146a3 | DAT_01d22504
    FLD float ptr [EAX]                 ; 005146a9
    FXCH                                ; 005146ab
    FADDP ST6,ST0                       ; 005146ad
    FMUL float ptr [0x01d224f0]         ; 005146af | DAT_01d224f0
    FXCH ST5                            ; 005146b5
    FSTP float ptr [0x01d2ad78]         ; 005146b7 | DAT_01d2ad78
    FLD float ptr [EAX + 0xc]           ; 005146bd
    FXCH ST5                            ; 005146c0
    FADDP ST4,ST0                       ; 005146c2
    FXCH ST4                            ; 005146c4
    FMUL float ptr [0x01d224f4]         ; 005146c6 | DAT_01d224f4
    FLD float ptr [EAX + 0x8]           ; 005146cc
    FMUL float ptr [0x01d22508]         ; 005146cf | DAT_01d22508
    FLD float ptr [EAX]                 ; 005146d5
    FXCH                                ; 005146d7
    FADDP ST5,ST0                       ; 005146d9
    FMUL float ptr [0x01d224f4]         ; 005146db | DAT_01d224f4
    FXCH ST4                            ; 005146e1
    FSTP float ptr [0x01d2ad7c]         ; 005146e3 | DAT_01d2ad7c
    FLD float ptr [EAX + 0x18]          ; 005146e9
    FXCH ST4                            ; 005146ec
    FADDP ST3,ST0                       ; 005146ee
    FXCH ST3                            ; 005146f0
    FMUL float ptr [0x01d224ec]         ; 005146f2 | DAT_01d224ec
    FLD float ptr [EAX + 0x8]           ; 005146f8
    FMUL float ptr [0x01d2250c]         ; 005146fb | DAT_01d2250c
    FLD float ptr [EAX + 0x10]          ; 00514701
    FXCH                                ; 00514704
    FADDP ST4,ST0                       ; 00514706
    FMUL float ptr [0x01d224f8]         ; 00514708 | DAT_01d224f8
    FXCH ST3                            ; 0051470e
    FSTP float ptr [0x01d2ad80]         ; 00514710 | DAT_01d2ad80
    FLD float ptr [EAX + 0x18]          ; 00514716
    FXCH ST3                            ; 00514719
    FADDP ST2,ST0                       ; 0051471b
    FXCH ST2                            ; 0051471d
    FMUL float ptr [0x01d224f0]         ; 0051471f | DAT_01d224f0
    FLD float ptr [EAX + 0x14]          ; 00514725
    FMUL float ptr [0x01d22504]         ; 00514728 | DAT_01d22504
    FLD float ptr [EAX + 0x10]          ; 0051472e
    FXCH                                ; 00514731
    FADDP ST3,ST0                       ; 00514733
    FMUL float ptr [0x01d224fc]         ; 00514735 | DAT_01d224fc
    FXCH ST2                            ; 0051473b
    FSTP float ptr [0x01d2ad88]         ; 0051473d | DAT_01d2ad88
    FLD float ptr [EAX + 0x18]          ; 00514743
    FMUL float ptr [0x01d224f4]         ; 00514746 | DAT_01d224f4
    FXCH ST2                            ; 0051474c
    FADDP ST5,ST0                       ; 0051474e
    XOR ECX,ECX                         ; 00514750
    FLD float ptr [EAX + 0x14]          ; 00514752
    FMUL float ptr [0x01d22508]         ; 00514755 | DAT_01d22508
    FLD float ptr [EAX + 0x10]          ; 0051475b
    FXCH                                ; 0051475e
    FADDP ST6,ST0                       ; 00514760
    FMUL float ptr [0x01d22500]         ; 00514762 | DAT_01d22500
    FXCH ST5                            ; 00514768
    FSTP float ptr [0x01d2ad8c]         ; 0051476a | DAT_01d2ad8c
    FLD float ptr [EAX + 0x28]          ; 00514770
    FMUL float ptr [EAX + 0xc]          ; 00514773
    FXCH ST5                            ; 00514776
    FADDP ST4,ST0                       ; 00514778
    MOV dword ptr [0x01d2ad84],ECX      ; 0051477a | DAT_01d2ad84
    FLD float ptr [EAX + 0x14]          ; 00514780
    FMUL float ptr [0x01d2250c]         ; 00514783 | DAT_01d2250c
    FLD float ptr [EAX + 0x1c]          ; 00514789
    FXCH                                ; 0051478c
    FADDP ST5,ST0                       ; 0051478e
    FMUL float ptr [0x01d224f8]         ; 00514790 | DAT_01d224f8
    FXCH ST4                            ; 00514796
    FSTP float ptr [0x01d2ad90]         ; 00514798 | DAT_01d2ad90
    FLD float ptr [EAX + 0x1c]          ; 0051479e
    FMUL float ptr [0x01d224fc]         ; 005147a1 | DAT_01d224fc
    FLD float ptr [EAX + 0x1c]          ; 005147a7
    FXCH ST5                            ; 005147aa
    FADDP ST4,ST0                       ; 005147ac
    FXCH ST4                            ; 005147ae
    FMUL float ptr [0x01d22500]         ; 005147b0 | DAT_01d22500
    FLD float ptr [EAX + 0x20]          ; 005147b6
    FMUL float ptr [0x01d22504]         ; 005147b9 | DAT_01d22504
    FXCH ST5                            ; 005147bf
    FADDP ST2,ST0                       ; 005147c1
    FLD float ptr [EAX + 0x24]          ; 005147c3
    FCHS                                ; 005147c6
    FST float ptr [ESP + 0x4]           ; 005147c8
    FMUL float ptr [EAX]                ; 005147cc
    FXCH                                ; 005147ce
    FADDP ST3,ST0                       ; 005147d0
    FXCH ST4                            ; 005147d2
    FADDP ST3,ST0                       ; 005147d4
    FLD float ptr [EAX + 0x20]          ; 005147d6
    FMUL float ptr [0x01d22508]         ; 005147d9 | DAT_01d22508
    FLD float ptr [EAX + 0x20]          ; 005147df
    FMUL float ptr [0x01d2250c]         ; 005147e2 | DAT_01d2250c
    FXCH ST5                            ; 005147e8
    FSUBRP ST6,ST0                      ; 005147ea
    MOV dword ptr [0x01d2ad94],ECX      ; 005147ec | DAT_01d2ad94
    FLD float ptr [EAX + 0x2c]          ; 005147f2
    FMUL float ptr [EAX + 0x18]         ; 005147f5
    MOV dword ptr [0x01d2ada4],ECX      ; 005147f8 | DAT_01d2ada4
    FXCH                                ; 005147fe
    FADDP ST2,ST0                       ; 00514800
    FXCH ST4                            ; 00514802
    FADDP ST2,ST0                       ; 00514804
    FXCH ST2                            ; 00514806
    FSTP float ptr [0x01d2ad98]         ; 00514808 | DAT_01d2ad98
    FXCH                                ; 0051480e
    FSTP float ptr [0x01d2ad9c]         ; 00514810 | DAT_01d2ad9c
    FXCH                                ; 00514816
    FSUBP ST2,ST0                       ; 00514818
    FSTP float ptr [0x01d2ada0]         ; 0051481a | DAT_01d2ada0
    FSTP float ptr [ESP + 0xc]          ; 00514820
    PUSH EDI                            ; 00514824
    FLD float ptr [ESP + 0x10]          ; 00514825
    FLD ST0                             ; 00514829
    FMUL float ptr [0x01d224ec]         ; 0051482b | DAT_01d224ec
    FLD ST1                             ; 00514831
    FMUL float ptr [0x01d224f0]         ; 00514833 | DAT_01d224f0
    FXCH ST2                            ; 00514839
    FMUL float ptr [0x01d224f4]         ; 0051483b | DAT_01d224f4
    FLD float ptr [ESP + 0x8]           ; 00514841
    FLD ST0                             ; 00514845
    FMUL float ptr [EAX + 0x4]          ; 00514847
    FXCH                                ; 0051484a
    FMUL float ptr [EAX + 0x8]          ; 0051484c
    FLD float ptr [EAX + 0x28]          ; 0051484f
    FMUL float ptr [EAX + 0x10]         ; 00514852
    FLD float ptr [EAX + 0x28]          ; 00514855
    FMUL float ptr [EAX + 0x14]         ; 00514858
    FXCH                                ; 0051485b
    FSUBP ST3,ST0                       ; 0051485d
    FSUBP                               ; 0051485f
    FLD float ptr [EAX + 0x2c]          ; 00514861
    FMUL float ptr [EAX + 0x1c]         ; 00514864
    FLD float ptr [EAX + 0x2c]          ; 00514867
    FMUL float ptr [EAX + 0x20]         ; 0051486a
    FXCH                                ; 0051486d
    FSUBP ST3,ST0                       ; 0051486f
    FXCH ST2                            ; 00514871
    FST float ptr [ESP + 0xc]           ; 00514873
    FMUL float ptr [0x01d224f8]         ; 00514877 | DAT_01d224f8
    FLD float ptr [ESP + 0xc]           ; 0051487d
    FMUL float ptr [0x01d224fc]         ; 00514881 | DAT_01d224fc
    FXCH ST3                            ; 00514887
    FSUBP ST2,ST0                       ; 00514889
    FLD float ptr [ESP + 0xc]           ; 0051488b
    FMUL float ptr [0x01d22500]         ; 0051488f | DAT_01d22500
    FXCH                                ; 00514895
    FADDP ST5,ST0                       ; 00514897
    FXCH ST2                            ; 00514899
    FADDP ST5,ST0                       ; 0051489b
    FLD ST0                             ; 0051489d
    FMUL float ptr [0x01d22504]         ; 0051489f | DAT_01d22504
    FLD ST1                             ; 005148a5
    FMUL float ptr [0x01d22508]         ; 005148a7 | DAT_01d22508
    FXCH ST3                            ; 005148ad
    FADDP ST4,ST0                       ; 005148af
    MOV EDI,0x3f800000                  ; 005148b1
    FXCH                                ; 005148b6
    FMUL float ptr [0x01d2250c]         ; 005148b8 | DAT_01d2250c
    MOV dword ptr [0x01d2adb4],EDI      ; 005148be | DAT_01d2adb4
    FXCH                                ; 005148c4
    FADDP ST4,ST0                       ; 005148c6
    FXCH                                ; 005148c8
    FADDP ST4,ST0                       ; 005148ca
    FADDP                               ; 005148cc
    FLD float ptr [0x01d22510]          ; 005148ce | DAT_01d22510
    FLD float ptr [0x01d22514]          ; 005148d4 | DAT_01d22514
    FLD float ptr [0x01d22518]          ; 005148da | DAT_01d22518
    FXCH ST2                            ; 005148e0
    FADDP ST4,ST0                       ; 005148e2
    FADDP ST4,ST0                       ; 005148e4
    FADDP                               ; 005148e6
    FXCH                                ; 005148e8
    FSTP float ptr [0x01d2ada8]         ; 005148ea | DAT_01d2ada8
    FXCH                                ; 005148f0
    FSTP float ptr [0x01d2adac]         ; 005148f2 | DAT_01d2adac
    FSTP float ptr [0x01d2adb0]         ; 005148f8 | DAT_01d2adb0
    POP EDI                             ; 005148fe
    ADD ESP,0x10                        ; 005148ff
    POP EBP                             ; 00514902
    RET                                 ; 00514903
    FLD float ptr [0x01d22510]          ; 00514904 | DAT_01d22510
        ;   Label: LAB_00514904
    FLD float ptr [0x01d22514]          ; 0051490a | DAT_01d22514
    FLD float ptr [0x01d22518]          ; 00514910 | DAT_01d22518
    MOV EBP,0x3f800000                  ; 00514916
    MOV EAX,[0x01d2257c]                ; 0051491b | DAT_01d2257c
    MOV dword ptr [0x01d2ad7c],EDX      ; 00514920 | DAT_01d2ad7c
    MOV dword ptr [0x01d2ad80],EDX      ; 00514926 | DAT_01d2ad80
    MOV dword ptr [0x01d2ad84],EDX      ; 0051492c | DAT_01d2ad84
    MOV dword ptr [0x01d2ad88],EDX      ; 00514932 | DAT_01d2ad88
    MOV dword ptr [0x01d2ad90],EDX      ; 00514938 | DAT_01d2ad90
    MOV dword ptr [0x01d2ad94],EDX      ; 0051493e | DAT_01d2ad94
    MOV dword ptr [0x01d2ad98],EDX      ; 00514944 | DAT_01d2ad98
    MOV dword ptr [0x01d2ad9c],EDX      ; 0051494a | DAT_01d2ad9c
    MOV dword ptr [0x01d2ada4],EDX      ; 00514950 | DAT_01d2ada4
    MOV dword ptr [0x01d2ad78],EBP      ; 00514956 | DAT_01d2ad78
    MOV dword ptr [0x01d2ad8c],EBP      ; 0051495c | DAT_01d2ad8c
    MOV dword ptr [0x01d2ada0],EBP      ; 00514962 | DAT_01d2ada0
    MOV dword ptr [0x01d2adb4],EBP      ; 00514968 | DAT_01d2adb4
    FXCH ST2                            ; 0051496e
    FSUB float ptr [EAX + 0x24]         ; 00514970
    FXCH                                ; 00514973
    FSUB float ptr [EAX + 0x28]         ; 00514975
    FXCH ST2                            ; 00514978
    FSUB float ptr [EAX + 0x2c]         ; 0051497a
    FXCH                                ; 0051497d
    FSTP float ptr [0x01d2ada8]         ; 0051497f | DAT_01d2ada8
    FXCH                                ; 00514985
    FSTP float ptr [0x01d2adac]         ; 00514987 | DAT_01d2adac
    FSTP float ptr [0x01d2adb0]         ; 0051498d | DAT_01d2adb0
    ADD ESP,0x10                        ; 00514993
    POP EBP                             ; 00514996
    RET                                 ; 00514997

