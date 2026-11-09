; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_mini3d_cpp_FUN_00517660(float *param_1,int param_2,int param_3,int param_4)
;
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_005126d0 at 005128fb
;   engine_mini3d.cpp_FUN_005129d0 at 00512b5f
;   engine_mini3d.cpp_FUN_00512d4e at 00512d6f
;
; Referenced Globals:
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   undefined4 DAT_01c51d78
;   undefined4 DAT_01c51d7c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d224ec
;   undefined4 DAT_01d224f0
;   undefined4 DAT_01d224f4
;   undefined4 DAT_01d224f8
;   ... and 21 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c08d0
;   engine_mini3d.cpp_FUN_005145b0
;   engine_mini3d.cpp_FUN_00515ae0
;   engine_mini3d.cpp_FUN_00517520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517660
        ;   Label: engine_mini3d.cpp_FUN_00517660
    PUSH ESI                            ; 00517661
    PUSH EDI                            ; 00517662
    PUSH EBP                            ; 00517663
    SUB ESP,0x9c                        ; 00517664
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0051766a
    XOR EBP,EBP                         ; 00517671
    TEST EDX,EDX                        ; 00517673
    JLE 0x00517739                      ; 00517675
        ;   XREF to: 00517739 (CONDITIONAL_JUMP)  ; LAB_00517739
    FLD float ptr [0x01d22514]          ; 0051767b | DAT_01d22514
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00517681
    MOV ECX,dword ptr [EAX]             ; 00517688
        ;   Label: LAB_00517688
    MOV dword ptr [ESP + 0x70],ECX      ; 0051768a
    FLD float ptr [ESP + 0x70]          ; 0051768e
    FMUL float ptr [0x01d224ec]         ; 00517692 | DAT_01d224ec
    FLD float ptr [ESP + 0x70]          ; 00517698
    FMUL float ptr [0x01d224f0]         ; 0051769c | DAT_01d224f0
    MOV ECX,dword ptr [EAX + 0x4]       ; 005176a2
    FLD float ptr [ESP + 0x70]          ; 005176a5
    MOV dword ptr [ESP + 0x74],ECX      ; 005176a9
    FMUL float ptr [0x01d224f4]         ; 005176ad | DAT_01d224f4
    FLD float ptr [ESP + 0x74]          ; 005176b3
    FMUL float ptr [0x01d224f8]         ; 005176b7 | DAT_01d224f8
    FLD float ptr [ESP + 0x74]          ; 005176bd
    FMUL float ptr [0x01d224fc]         ; 005176c1 | DAT_01d224fc
    MOV ECX,dword ptr [EAX + 0x8]       ; 005176c7
    FLD float ptr [ESP + 0x74]          ; 005176ca
    MOV dword ptr [ESP + 0x78],ECX      ; 005176ce
    FXCH ST2                            ; 005176d2
    FADDP ST5,ST0                       ; 005176d4
    FXCH                                ; 005176d6
    FMUL float ptr [0x01d22500]         ; 005176d8 | DAT_01d22500
    FLD float ptr [ESP + 0x78]          ; 005176de
    FMUL float ptr [0x01d22504]         ; 005176e2 | DAT_01d22504
    FXCH ST2                            ; 005176e8
    FADDP ST4,ST0                       ; 005176ea
    FADDP ST2,ST0                       ; 005176ec
    FLD float ptr [ESP + 0x78]          ; 005176ee
    FMUL float ptr [0x01d22508]         ; 005176f2 | DAT_01d22508
    FLD float ptr [ESP + 0x78]          ; 005176f8
    FMUL float ptr [0x01d2250c]         ; 005176fc | DAT_01d2250c
    ADD EAX,0x40                        ; 00517702
    INC EBP                             ; 00517705
    FXCH ST2                            ; 00517706
    FADDP ST5,ST0                       ; 00517708
    FADDP ST3,ST0                       ; 0051770a
    FADDP                               ; 0051770c
    FXCH ST2                            ; 0051770e
    FADD float ptr [0x01d22510]         ; 00517710 | DAT_01d22510
    FXCH                                ; 00517716
    FADD ST0,ST3                        ; 00517718
    FXCH ST2                            ; 0051771a
    FADD float ptr [0x01d22518]         ; 0051771c | DAT_01d22518
    FXCH                                ; 00517722
    FSTP float ptr [EAX + -0x40]        ; 00517724
    FXCH                                ; 00517727
    FSTP float ptr [EAX + -0x3c]        ; 00517729
    FSTP float ptr [EAX + -0x38]        ; 0051772c
    CMP EBP,EDX                         ; 0051772f
    JL 0x00517688                       ; 00517731
        ;   XREF to: 00517688 (CONDITIONAL_JUMP)  ; LAB_00517688
    FSTP ST0                            ; 00517737
    CMP dword ptr [0x01d25f2c],0x0      ; 00517739 | DAT_01d25f2c
        ;   Label: LAB_00517739
    JZ 0x00517867                       ; 00517740
        ;   XREF to: 00517867 (CONDITIONAL_JUMP)  ; LAB_00517867
    XOR EBP,EBP                         ; 00517746
        ;   Label: LAB_00517746
    MOV EDX,dword ptr [ESP + 0xbc]      ; 00517748
    MOV dword ptr [ESP + 0x90],EBP      ; 0051774f
    MOV dword ptr [ESP + 0x98],EBP      ; 00517756
    TEST EDX,EDX                        ; 0051775d
    JLE 0x0051791c                      ; 0051775f
        ;   XREF to: 0051791c (CONDITIONAL_JUMP)  ; LAB_0051791c
    MOV dword ptr [ESP + 0x94],EBP      ; 00517765
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0051776c
        ;   Label: LAB_0051776c
    MOV ESI,dword ptr [ESP + 0x94]      ; 00517773
    MOV EDI,dword ptr [ESP + 0x94]      ; 0051777a
    ADD ECX,ESI                         ; 00517781
    MOV ESI,dword ptr [ESP + 0xb8]      ; 00517783
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0051778a
    ADD ESI,0x6                         ; 00517791
    MOV EAX,ESP                         ; 00517794
    ADD ESI,EDI                         ; 00517796
    XOR EDX,EDX                         ; 00517798
        ;   Label: LAB_00517798
    MOV DX,word ptr [ECX]               ; 0051779a
    SHL EDX,0x6                         ; 0051779d
    ADD EDX,EBX                         ; 005177a0
    ADD EAX,0x24                        ; 005177a2
    ADD ECX,0x2                         ; 005177a5
    MOV EDI,dword ptr [EDX]             ; 005177a8
    MOV dword ptr [EAX + -0x24],EDI     ; 005177aa
    MOV EDI,dword ptr [EDX + 0x4]       ; 005177ad
    MOV dword ptr [EAX + -0x20],EDI     ; 005177b0
    MOV EDI,dword ptr [EDX + 0x8]       ; 005177b3
    MOV dword ptr [EAX + -0x1c],EDI     ; 005177b6
    MOV EDI,dword ptr [EDX + 0x1c]      ; 005177b9
    MOV dword ptr [EAX + -0x8],EDI      ; 005177bc
    MOV EDI,dword ptr [EDX + 0x20]      ; 005177bf
    MOV dword ptr [EAX + -0x4],EDI      ; 005177c2
    MOV EDI,dword ptr [EDX + 0x24]      ; 005177c5
    MOV dword ptr [EAX + -0x18],EDI     ; 005177c8
    MOV EDI,dword ptr [EDX + 0x28]      ; 005177cb
    MOV dword ptr [EAX + -0x14],EDI     ; 005177ce
    MOV EDI,dword ptr [EDX + 0x2c]      ; 005177d1
    MOV dword ptr [EAX + -0x10],EDI     ; 005177d4
    MOV EDI,dword ptr [EDX + 0x30]      ; 005177d7
    MOV dword ptr [EAX + -0xc],EDI      ; 005177da
    CMP ECX,ESI                         ; 005177dd
    JNZ 0x00517798                      ; 005177df
        ;   XREF to: 00517798 (CONDITIONAL_JUMP)  ; LAB_00517798
    IMUL EDX,dword ptr [ESP + 0x98],0x24 ; 005177e1
    LEA EAX,[ESP + 0x6c]                ; 005177e9
    PUSH EAX                            ; 005177ed
    MOV EAX,[0x01d25f2c]                ; 005177ee | DAT_01d25f2c
    ADD EAX,EDX                         ; 005177f3
    PUSH EAX                            ; 005177f5
    PUSH 0x3                            ; 005177f6
    LEA EAX,[ESP + 0xc]                 ; 005177f8
    XOR ESI,ESI                         ; 005177fc
    PUSH EAX                            ; 005177fe
    MOV dword ptr [ESP + 0x7c],ESI      ; 005177ff
    CALL engine_mini3d.cpp_FUN_00517520 ; 00517803
        ;   XREF to: 00517520 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517520()
    ADD ESP,0x10                        ; 00517808
    CMP dword ptr [ESP + 0x6c],0x2      ; 0051780b
    JLE 0x005178ed                      ; 00517810
        ;   XREF to: 005178ed (CONDITIONAL_JUMP)  ; LAB_005178ed
    MOV ECX,dword ptr [ESP + 0x98]      ; 00517816
    MOV EBX,dword ptr [ESP + 0x98]      ; 0051781d
    MOV EDI,dword ptr [ESP + 0x98]      ; 00517824
    XOR EDX,EDX                         ; 0051782b
    ADD EBX,0x2                         ; 0051782d
    INC ECX                             ; 00517830
    ADD EBX,ESI                         ; 00517831
    ADD ECX,ESI                         ; 00517833
    LEA ESI,[EBP + EBP*0x1]             ; 00517835
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00517839
        ;   Label: LAB_00517839
    SUB EAX,0x2                         ; 0051783d
    CMP EDX,EAX                         ; 00517840
    JGE 0x005178e2                      ; 00517842
        ;   XREF to: 005178e2 (CONDITIONAL_JUMP)  ; LAB_005178e2
    MOV EAX,[0x01d25f30]                ; 00517848 | DAT_01d25f30
    ADD ESI,0x6                         ; 0051784d
    MOV word ptr [ESI + EAX*0x1 + -0x6],DI ; 00517850
    ADD EBP,0x3                         ; 00517855
    MOV word ptr [ESI + EAX*0x1 + -0x4],CX ; 00517858
    INC EDX                             ; 0051785d
    MOV word ptr [ESI + EAX*0x1 + -0x2],BX ; 0051785e
    INC EBX                             ; 00517863
    INC ECX                             ; 00517864
    JMP 0x00517839                      ; 00517865
        ;   XREF to: 00517839 (UNCONDITIONAL_JUMP)  ; LAB_00517839
    PUSH 0x57e40                        ; 00517867
        ;   Label: LAB_00517867
    CALL crt_unknown.c_FUN_005c08d0     ; 0051786c
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00517871
    MOV [0x01d25f2c],EAX                ; 00517874 | DAT_01d25f2c
    TEST EAX,EAX                        ; 00517879
    JNZ 0x005178a0                      ; 0051787b
        ;   XREF to: 005178a0 (CONDITIONAL_JUMP)  ; LAB_005178a0
    MOV ECX,0x5e8fab                    ; 0051787d
    MOV EBX,0x14e5                      ; 00517882
    PUSH 0x5e8fc0                       ; 00517887
    MOV dword ptr [0x01d1d400],ECX      ; 0051788c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00517892 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00517898
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051789d
    PUSH 0xea60                         ; 005178a0
        ;   Label: LAB_005178a0
    CALL crt_unknown.c_FUN_005c08d0     ; 005178a5
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005178aa
    MOV [0x01d25f30],EAX                ; 005178ad | DAT_01d25f30
    TEST EAX,EAX                        ; 005178b2
    JNZ 0x00517746                      ; 005178b4
        ;   XREF to: 00517746 (CONDITIONAL_JUMP)  ; LAB_00517746
    MOV ESI,0x5e8fea                    ; 005178ba
    MOV EDI,0x14e9                      ; 005178bf
    PUSH 0x5e8fff                       ; 005178c4
    MOV dword ptr [0x01d1d400],ESI      ; 005178c9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005178cf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005178d5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005178da
    JMP 0x00517746                      ; 005178dd
        ;   XREF to: 00517746 (UNCONDITIONAL_JUMP)  ; LAB_00517746
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005178e2
        ;   Label: LAB_005178e2
    ADD dword ptr [ESP + 0x98],EAX      ; 005178e6
    MOV ECX,dword ptr [ESP + 0x94]      ; 005178ed
        ;   Label: LAB_005178ed
    MOV EBX,dword ptr [ESP + 0x90]      ; 005178f4
    MOV ESI,dword ptr [ESP + 0xbc]      ; 005178fb
    ADD ECX,0x6                         ; 00517902
    INC EBX                             ; 00517905
    MOV dword ptr [ESP + 0x94],ECX      ; 00517906
    MOV dword ptr [ESP + 0x90],EBX      ; 0051790d
    CMP EBX,ESI                         ; 00517914
    JL 0x0051776c                       ; 00517916
        ;   XREF to: 0051776c (CONDITIONAL_JUMP)  ; LAB_0051776c
    MOV ECX,0x3                         ; 0051791c
        ;   Label: LAB_0051791c
    MOV EDX,EBP                         ; 00517921
    MOV EAX,EBP                         ; 00517923
    SAR EDX,0x1f                        ; 00517925
    IDIV ECX                            ; 00517928
    MOV EDI,dword ptr [0x01d22580]      ; 0051792a | DAT_01d22580
    MOV EBP,EAX                         ; 00517930
    MOV EAX,dword ptr [ESP + 0x98]      ; 00517932
    XOR EBX,EBX                         ; 00517939
    SHL EAX,0x6                         ; 0051793b
    TEST EDI,EDI                        ; 0051793e
    JNZ 0x00517a90                      ; 00517940
        ;   XREF to: 00517a90 (CONDITIONAL_JUMP)  ; LAB_00517a90
    CMP dword ptr [ESP + 0x98],0x0      ; 00517946
    JLE 0x00517a70                      ; 0051794e
        ;   XREF to: 00517a70 (CONDITIONAL_JUMP)  ; LAB_00517a70
    MOV dword ptr [ESP + 0x88],EAX      ; 00517954
    XOR ESI,ESI                         ; 0051795b
    FLD float ptr [0x01d22510]          ; 0051795d | DAT_01d22510
        ;   Label: LAB_0051795d
    FLD float ptr [0x01d22514]          ; 00517963 | DAT_01d22514
    MOV EAX,[0x01d25f2c]                ; 00517969 | DAT_01d25f2c
    FILD dword ptr [0x01c51d68]         ; 0051796e | DAT_01c51d68
    FXCH                                ; 00517974
    FSUBR float ptr [EDI + EAX*0x1 + 0x4] ; 00517976
    FXCH ST2                            ; 0051797a
    FSUBR float ptr [EDI + EAX*0x1]     ; 0051797c
    FXCH ST2                            ; 0051797f
    FSTP float ptr [EDI + EAX*0x1 + 0x4] ; 00517981
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 00517985
    FXCH                                ; 00517989
    FSTP float ptr [EDI + EAX*0x1]      ; 0051798b
    FILD dword ptr [0x01c51d5c]         ; 0051798e | DAT_01c51d5c
    FMUL float ptr [EDI + EAX*0x1]      ; 00517994
    FLD float ptr [0x01d22518]          ; 00517997 | DAT_01d22518
    MOV EDX,dword ptr [0x01d227e0]      ; 0051799d | DAT_01d227e0
    FSUBR float ptr [EDI + EAX*0x1 + 0x8] ; 005179a3
    FXCH                                ; 005179a7
    FADDP ST2,ST0                       ; 005179a9
    FSTP float ptr [EDI + EAX*0x1 + 0x8] ; 005179ab
    FILD dword ptr [0x01c51d74]         ; 005179af | DAT_01c51d74
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 005179b5
    ADD EDX,ESI                         ; 005179b9
    FADDP                               ; 005179bb
    FILD dword ptr [0x01c51d6c]         ; 005179bd | DAT_01c51d6c
    FXCH                                ; 005179c3
    FSTP float ptr [EDX]                ; 005179c5
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 005179c7
    FILD dword ptr [0x01c51d60]         ; 005179cb | DAT_01c51d60
    FMUL float ptr [EDI + EAX*0x1]      ; 005179d1
    FADDP                               ; 005179d4
    FILD dword ptr [0x01c51d78]         ; 005179d6 | DAT_01c51d78
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 005179dc
    FADDP                               ; 005179e0
    FILD dword ptr [0x01c51d70]         ; 005179e2 | DAT_01c51d70
    FXCH                                ; 005179e8
    FSTP float ptr [EDX + 0x4]          ; 005179ea
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 005179ed
    FILD dword ptr [0x01c51d64]         ; 005179f1 | DAT_01c51d64
    FMUL float ptr [EDI + EAX*0x1]      ; 005179f7
    FADDP                               ; 005179fa
    FILD dword ptr [0x01c51d7c]         ; 005179fc | DAT_01c51d7c
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 00517a02
    ADD EDI,0x24                        ; 00517a06
    PUSH EDX                            ; 00517a09
    FADDP                               ; 00517a0a
    ADD ESI,0x40                        ; 00517a0c
    FSTP float ptr [EDX + 0x8]          ; 00517a0f
    CALL engine_mini3d.cpp_FUN_005145b0 ; 00517a12
        ;   XREF to: 005145b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005145b0()
    MOV EDX,dword ptr [0x01d25f2c]      ; 00517a17 | DAT_01d25f2c
    MOV EAX,[0x01d227e0]                ; 00517a1d | DAT_01d227e0
    ADD ESP,0x4                         ; 00517a22
    FLD float ptr [EDX + EDI*0x1 + -0x8] ; 00517a25
    MOV ECX,dword ptr [ESP + 0x88]      ; 00517a29
    FSTP float ptr [ESI + EAX*0x1 + -0x24] ; 00517a30
    FLD float ptr [EDX + EDI*0x1 + -0x4] ; 00517a34
    FSTP float ptr [ESI + EAX*0x1 + -0x20] ; 00517a38
    FLD float ptr [EDX + EDI*0x1 + -0x18] ; 00517a3c
    FSTP float ptr [ESI + EAX*0x1 + -0x1c] ; 00517a40
    FLD float ptr [EDX + EDI*0x1 + -0x14] ; 00517a44
    FSTP float ptr [ESI + EAX*0x1 + -0x18] ; 00517a48
    FLD float ptr [EDX + EDI*0x1 + -0x10] ; 00517a4c
    FSTP float ptr [ESI + EAX*0x1 + -0x14] ; 00517a50
    FLD float ptr [EDX + EDI*0x1 + -0xc] ; 00517a54
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x30] ; 00517a58
    FSTP float ptr [ESI + EAX*0x1 + -0x10] ; 00517a5c
    OR EBX,EDX                          ; 00517a60
    CMP ESI,ECX                         ; 00517a62
    JL 0x0051795d                       ; 00517a64
        ;   XREF to: 0051795d (CONDITIONAL_JUMP)  ; LAB_0051795d
    LEA EAX,[EAX]                       ; 00517a6a
    MOV ESI,dword ptr [ESP + 0x98]      ; 00517a70
        ;   Label: LAB_00517a70
    CMP ESI,0x3                         ; 00517a77
    JL 0x00517a85                       ; 00517a7a
        ;   XREF to: 00517a85 (CONDITIONAL_JUMP)  ; LAB_00517a85
    CMP EBP,0x1                         ; 00517a7c
    JGE 0x00517b9e                      ; 00517a7f
        ;   XREF to: 00517b9e (CONDITIONAL_JUMP)  ; LAB_00517b9e
    ADD ESP,0x9c                        ; 00517a85
        ;   Label: LAB_00517a85
    POP EBP                             ; 00517a8b
    POP EDI                             ; 00517a8c
    POP ESI                             ; 00517a8d
    POP EBX                             ; 00517a8e
    RET                                 ; 00517a8f
    CMP dword ptr [ESP + 0x98],0x0      ; 00517a90
        ;   Label: LAB_00517a90
    JLE 0x00517a70                      ; 00517a98
        ;   XREF to: 00517a70 (CONDITIONAL_JUMP)  ; LAB_00517a70
    MOV dword ptr [ESP + 0x8c],EAX      ; 00517a9a
    XOR EDI,EDI                         ; 00517aa1
    XOR ESI,ESI                         ; 00517aa3
    MOV EAX,[0x01d25f2c]                ; 00517aa5 | DAT_01d25f2c
        ;   Label: LAB_00517aa5
    FLD float ptr [EDI + EAX*0x1 + 0x4] ; 00517aaa
    FSUB float ptr [0x01d22514]         ; 00517aae | DAT_01d22514
    FLD ST0                             ; 00517ab4
    FMUL float ptr [0x01d22590]         ; 00517ab6 | DAT_01d22590
    FLD float ptr [EDI + EAX*0x1]       ; 00517abc
    FSUB float ptr [0x01d22510]         ; 00517abf | DAT_01d22510
    FLD ST0                             ; 00517ac5
    FMUL float ptr [0x01d22588]         ; 00517ac7 | DAT_01d22588
    FLD ST1                             ; 00517acd
    FMUL float ptr [0x01d2258c]         ; 00517acf | DAT_01d2258c
    FXCH ST2                            ; 00517ad5
    FMUL float ptr [0x01d22584]         ; 00517ad7 | DAT_01d22584
    FLD ST4                             ; 00517add
    FMUL float ptr [0x01d22594]         ; 00517adf | DAT_01d22594
    FXCH ST5                            ; 00517ae5
    FMUL float ptr [0x01d22598]         ; 00517ae7 | DAT_01d22598
    FLD float ptr [EDI + EAX*0x1 + 0x8] ; 00517aed
    FSUB float ptr [0x01d22518]         ; 00517af1 | DAT_01d22518
    FXCH ST2                            ; 00517af7
    FADDP ST5,ST0                       ; 00517af9
    FXCH ST5                            ; 00517afb
    FADDP ST2,ST0                       ; 00517afd
    FLD ST0                             ; 00517aff
    FMUL float ptr [0x01d2259c]         ; 00517b01 | DAT_01d2259c
    FLD ST1                             ; 00517b07
    FMUL float ptr [0x01d225a0]         ; 00517b09 | DAT_01d225a0
    FXCH ST6                            ; 00517b0f
    FADDP ST4,ST0                       ; 00517b11
    MOV EAX,[0x01d227e0]                ; 00517b13 | DAT_01d227e0
    FXCH                                ; 00517b18
    FMUL float ptr [0x01d225a4]         ; 00517b1a | DAT_01d225a4
    ADD EAX,ESI                         ; 00517b20
    ADD EDI,0x24                        ; 00517b22
    PUSH EAX                            ; 00517b25
    ADD ESI,0x40                        ; 00517b26
    FXCH                                ; 00517b29
    FADDP ST4,ST0                       ; 00517b2b
    FXCH ST4                            ; 00517b2d
    FADDP                               ; 00517b2f
    FXCH ST3                            ; 00517b31
    FADDP                               ; 00517b33
    FXCH                                ; 00517b35
    FSTP float ptr [EAX]                ; 00517b37
    FXCH                                ; 00517b39
    FSTP float ptr [EAX + 0x4]          ; 00517b3b
    FSTP float ptr [EAX + 0x8]          ; 00517b3e
    CALL engine_mini3d.cpp_FUN_005145b0 ; 00517b41
        ;   XREF to: 005145b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005145b0()
    MOV EDX,dword ptr [0x01d25f2c]      ; 00517b46 | DAT_01d25f2c
    MOV EAX,[0x01d227e0]                ; 00517b4c | DAT_01d227e0
    ADD ESP,0x4                         ; 00517b51
    FLD float ptr [EDX + EDI*0x1 + -0x8] ; 00517b54
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00517b58
    FSTP float ptr [ESI + EAX*0x1 + -0x24] ; 00517b5f
    FLD float ptr [EDX + EDI*0x1 + -0x4] ; 00517b63
    FSTP float ptr [ESI + EAX*0x1 + -0x20] ; 00517b67
    FLD float ptr [EDX + EDI*0x1 + -0x18] ; 00517b6b
    FSTP float ptr [ESI + EAX*0x1 + -0x1c] ; 00517b6f
    FLD float ptr [EDX + EDI*0x1 + -0x14] ; 00517b73
    FSTP float ptr [ESI + EAX*0x1 + -0x18] ; 00517b77
    FLD float ptr [EDX + EDI*0x1 + -0x10] ; 00517b7b
    FSTP float ptr [ESI + EAX*0x1 + -0x14] ; 00517b7f
    FLD float ptr [EDX + EDI*0x1 + -0xc] ; 00517b83
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x30] ; 00517b87
    FSTP float ptr [ESI + EAX*0x1 + -0x10] ; 00517b8b
    OR EBX,EDX                          ; 00517b8f
    CMP ESI,ECX                         ; 00517b91
    JL 0x00517aa5                       ; 00517b93
        ;   XREF to: 00517aa5 (CONDITIONAL_JUMP)  ; LAB_00517aa5
    JMP 0x00517a70                      ; 00517b99
        ;   XREF to: 00517a70 (UNCONDITIONAL_JUMP)  ; LAB_00517a70
    PUSH EBX                            ; 00517b9e
        ;   Label: LAB_00517b9e
    PUSH EBP                            ; 00517b9f
    MOV EDI,dword ptr [0x01d25f30]      ; 00517ba0 | DAT_01d25f30
    PUSH EDI                            ; 00517ba6
    PUSH ESI                            ; 00517ba7
    MOV EAX,[0x01d227e0]                ; 00517ba8 | DAT_01d227e0
    PUSH EAX                            ; 00517bad
    CALL engine_mini3d.cpp_FUN_00515ae0 ; 00517bae
        ;   XREF to: 00515ae0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00515ae0()
    ADD ESP,0x14                        ; 00517bb3
    ADD ESP,0x9c                        ; 00517bb6
    POP EBP                             ; 00517bbc
    POP EDI                             ; 00517bbd
    POP ESI                             ; 00517bbe
    POP EBX                             ; 00517bbf
    RET                                 ; 00517bc0

