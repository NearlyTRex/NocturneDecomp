; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005124f0(void)
;
;
; XREF[12]:
;   engine_mini3d.cpp_FUN_005126d0 at 0051270d
;   engine_mini3d.cpp_FUN_00512940 at 00512964
;   engine_mini3d.cpp_FUN_005129d0 at 00512a0d
;   engine_mini3d.cpp_FUN_00512bce at 00512bf4
;   engine_mini3d.cpp_FUN_00512c60 at 00512cb0
;   engine_mini3d.cpp_FUN_00512de0 at 00512e29
;   engine_mini3d.cpp_FUN_00513220 at 00513220
;   engine_mini3d.cpp_FUN_00513480 at 0051348d
;   engine_mini3d.cpp_FUN_00513730 at 0051373a
;   engine_mini3d.cpp_FUN_005137b0 at 005137b0
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d2252c
;   undefined4 DAT_01d22530
;   undefined4 DAT_01d22534
;   undefined4 DAT_01d22538
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d24ffc
;   undefined4 DAT_01d2adbc
;   undefined4 DAT_01d2adc0
;   undefined4 DAT_01d2adc4
;   undefined4 DAT_01d2adc8
;   undefined4 DAT_01d2adcc
;   undefined4 DAT_01d2add0
;   undefined4 DAT_01d2add4
;   undefined4 DAT_01d2add8
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005124f0
        ;   Label: engine_mini3d.cpp_FUN_005124f0
    SUB ESP,0x4                         ; 005124f1
    CMP dword ptr [0x01d24ffc],0x0      ; 005124f4 | DAT_01d24ffc
    JZ 0x0051263b                       ; 005124fb
        ;   XREF to: 0051263b (CONDITIONAL_JUMP)  ; LAB_0051263b
    PUSH EDI                            ; 00512501
    MOV EAX,[0x01d2257c]                ; 00512502 | DAT_01d2257c
    FLD float ptr [0x01d22534]          ; 00512507 | DAT_01d22534
    FLD float ptr [EAX]                 ; 0051250d
    FMUL ST1                            ; 0051250f
    FLD float ptr [0x01d22538]          ; 00512511 | DAT_01d22538
    FLD float ptr [EAX + 0x4]           ; 00512517
    FMUL ST1                            ; 0051251a
    FLD float ptr [EAX + 0xc]           ; 0051251c
    FMUL ST4                            ; 0051251f
    FLD float ptr [EAX + 0x10]          ; 00512521
    FMUL ST3                            ; 00512524
    FLD float ptr [EAX + 0x18]          ; 00512526
    FMULP ST6                           ; 00512529
    FLD float ptr [EAX + 0x1c]          ; 0051252b
    FMULP ST4                           ; 0051252e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00512530
    MOV dword ptr [0x01d2adc4],EDX      ; 00512533 | DAT_01d2adc4
    FLD float ptr [EAX + 0x28]          ; 00512539
    FXCH ST2                            ; 0051253c
    FSTP float ptr [0x01d2adcc]         ; 0051253e | DAT_01d2adcc
    FXCH                                ; 00512544
    FMUL float ptr [0x01d2adcc]         ; 00512546 | DAT_01d2adcc
    FXCH ST4                            ; 0051254c
    FSTP float ptr [0x01d2adbc]         ; 0051254e | DAT_01d2adbc
    FLD float ptr [EAX + 0x24]          ; 00512554
    FCHS                                ; 00512557
    FLD ST0                             ; 00512559
    FMUL float ptr [0x01d2adbc]         ; 0051255b | DAT_01d2adbc
    FXCH ST3                            ; 00512561
    FSTP float ptr [0x01d2adc0]         ; 00512563 | DAT_01d2adc0
    FLD ST0                             ; 00512569
    FMUL float ptr [0x01d2adc0]         ; 0051256b | DAT_01d2adc0
    FXCH                                ; 00512571
    FMUL float ptr [0x01d2adc4]         ; 00512573 | DAT_01d2adc4
    FXCH ST2                            ; 00512579
    FSTP float ptr [0x01d2add0]         ; 0051257b | DAT_01d2add0
    MOV EDX,dword ptr [EAX + 0x14]      ; 00512581
    MOV dword ptr [0x01d2add4],EDX      ; 00512584 | DAT_01d2add4
    FLD float ptr [EAX + 0x28]          ; 0051258a
    FMUL float ptr [0x01d2add0]         ; 0051258d | DAT_01d2add0
    FXCH ST6                            ; 00512593
    FSTP float ptr [0x01d2addc]         ; 00512595 | DAT_01d2addc
    FLD float ptr [EAX + 0x28]          ; 0051259b
    FXCH ST3                            ; 0051259e
    FSUBRP ST5,ST0                      ; 005125a0
    FXCH ST2                            ; 005125a2
    FMUL float ptr [0x01d2add4]         ; 005125a4 | DAT_01d2add4
    FLD float ptr [EAX + 0x2c]          ; 005125aa
    FMUL float ptr [0x01d2addc]         ; 005125ad | DAT_01d2addc
    FXCH ST6                            ; 005125b3
    FSUBP ST3,ST0                       ; 005125b5
    FXCH ST3                            ; 005125b7
    FSTP float ptr [0x01d2ade0]         ; 005125b9 | DAT_01d2ade0
    FLD float ptr [EAX + 0x2c]          ; 005125bf
    FMUL float ptr [0x01d2ade0]         ; 005125c2 | DAT_01d2ade0
    FLD float ptr [EAX + 0x20]          ; 005125c8
    FXCH ST4                            ; 005125cb
    FSUBP ST2,ST0                       ; 005125cd
    FXCH ST3                            ; 005125cf
    FSTP float ptr [0x01d2ade4]         ; 005125d1 | DAT_01d2ade4
    FLD float ptr [EAX + 0x2c]          ; 005125d7
    FMUL float ptr [0x01d2ade4]         ; 005125da | DAT_01d2ade4
    MOV EDI,0x3f800000                  ; 005125e0
    XOR ECX,ECX                         ; 005125e5
    MOV EBP,dword ptr [0x02c83454]      ; 005125e7 | DAT_02c83454
    MOV dword ptr [0x01d2adc8],ECX      ; 005125ed | DAT_01d2adc8
    MOV dword ptr [0x01d2add8],ECX      ; 005125f3 | DAT_01d2add8
    MOV dword ptr [0x01d2ade8],ECX      ; 005125f9 | DAT_01d2ade8
    FXCH ST5                            ; 005125ff
    FSUBP ST4,ST0                       ; 00512601
    MOV dword ptr [0x01d2adf8],EDI      ; 00512603 | DAT_01d2adf8
    FXCH ST3                            ; 00512609
    FSTP float ptr [0x01d2adec]         ; 0051260b | DAT_01d2adec
    FSUBRP                              ; 00512611
    FXCH ST2                            ; 00512613
    FSUBP                               ; 00512615
    FXCH                                ; 00512617
    FSTP float ptr [0x01d2adf0]         ; 00512619 | DAT_01d2adf0
    FSTP float ptr [0x01d2adf4]         ; 0051261f | DAT_01d2adf4
    TEST EBP,EBP                        ; 00512625
    JZ 0x00512632                       ; 00512627
        ;   XREF to: 00512632 (CONDITIONAL_JUMP)  ; LAB_00512632
    CMP dword ptr [0x01c50948],0x0      ; 00512629 | DAT_01c50948
    JNZ 0x00512640                      ; 00512630
        ;   XREF to: 00512640 (CONDITIONAL_JUMP)  ; LAB_00512640
    XOR EDX,EDX                         ; 00512632
        ;   Label: LAB_00512632
    MOV dword ptr [0x01d24ffc],EDX      ; 00512634 | DAT_01d24ffc
    POP EDI                             ; 0051263a
    ADD ESP,0x4                         ; 0051263b
        ;   Label: LAB_0051263b
    POP EBP                             ; 0051263e
    RET                                 ; 0051263f
    PUSH dword ptr [0x01d22530]         ; 00512640 | DAT_01d22530
        ;   Label: LAB_00512640
    PUSH dword ptr [0x01d2252c]         ; 00512646 | DAT_01d2252c
    PUSH 0x1d2adbc                      ; 0051264c | DAT_01d2adbc
    CALL dword ptr [0x02c83454]         ; 00512651 | DAT_02c83454
    ADD ESP,0xc                         ; 00512657
    XOR EDX,EDX                         ; 0051265a
    MOV dword ptr [0x01d24ffc],EDX      ; 0051265c | DAT_01d24ffc
    POP EDI                             ; 00512662
    ADD ESP,0x4                         ; 00512663
    POP EBP                             ; 00512666
    RET                                 ; 00512667

