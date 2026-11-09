; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3740(void)
;
;
; XREF[12]:
;   engine_mini3d.cpp_FUN_004f3920 at 004f3978
;   engine_mini3d.cpp_FUN_004f3bb0 at 004f3bd4
;   engine_mini3d.cpp_FUN_004f3c40 at 004f3c9c
;   engine_mini3d.cpp_FUN_004f3e60 at 004f3e84
;   engine_mini3d.cpp_FUN_004f3ef0 at 004f3f4d
;   engine_mini3d.cpp_FUN_004f40a0 at 004f40e9
;   engine_mini3d.cpp_FUN_004f44d0 at 004f44d0
;   engine_mini3d.cpp_FUN_004f4730 at 004f473d
;   engine_mini3d.cpp_FUN_004f49e0 at 004f49ea
;   engine_mini3d.cpp_FUN_004f4a60 at 004f4a60
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d098cc
;   undefined4 DAT_01d098d0
;   undefined4 DAT_01d098d4
;   undefined4 DAT_01d098d8
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0c398
;   undefined4 DAT_01d167ac
;   undefined4 DAT_01d167b0
;   undefined4 DAT_01d167b4
;   undefined4 DAT_01d167b8
;   undefined4 DAT_01d167bc
;   undefined4 DAT_01d167c0
;   undefined4 DAT_01d167c4
;   undefined4 DAT_01d167c8
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004f3740
        ;   Label: engine_mini3d.cpp_FUN_004f3740
    SUB ESP,0x4                         ; 004f3741
    CMP dword ptr [0x01d0c398],0x0      ; 004f3744 | DAT_01d0c398
    JZ 0x004f388b                       ; 004f374b
        ;   XREF to: 004f388b (CONDITIONAL_JUMP)  ; LAB_004f388b
    PUSH EDI                            ; 004f3751
    MOV EAX,[0x01d09918]                ; 004f3752 | DAT_01d09918
    FLD float ptr [0x01d098d4]          ; 004f3757 | DAT_01d098d4
    FLD float ptr [EAX]                 ; 004f375d
    FMUL ST1                            ; 004f375f
    FLD float ptr [0x01d098d8]          ; 004f3761 | DAT_01d098d8
    FLD float ptr [EAX + 0x4]           ; 004f3767
    FMUL ST1                            ; 004f376a
    FLD float ptr [EAX + 0xc]           ; 004f376c
    FMUL ST4                            ; 004f376f
    FLD float ptr [EAX + 0x10]          ; 004f3771
    FMUL ST3                            ; 004f3774
    FLD float ptr [EAX + 0x18]          ; 004f3776
    FMULP ST6                           ; 004f3779
    FLD float ptr [EAX + 0x1c]          ; 004f377b
    FMULP ST4                           ; 004f377e
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f3780
    MOV dword ptr [0x01d167b4],EDX      ; 004f3783 | DAT_01d167b4
    FLD float ptr [EAX + 0x28]          ; 004f3789
    FXCH ST2                            ; 004f378c
    FSTP float ptr [0x01d167bc]         ; 004f378e | DAT_01d167bc
    FXCH                                ; 004f3794
    FMUL float ptr [0x01d167bc]         ; 004f3796 | DAT_01d167bc
    FXCH ST4                            ; 004f379c
    FSTP float ptr [0x01d167ac]         ; 004f379e | DAT_01d167ac
    FLD float ptr [EAX + 0x24]          ; 004f37a4
    FCHS                                ; 004f37a7
    FLD ST0                             ; 004f37a9
    FMUL float ptr [0x01d167ac]         ; 004f37ab | DAT_01d167ac
    FXCH ST3                            ; 004f37b1
    FSTP float ptr [0x01d167b0]         ; 004f37b3 | DAT_01d167b0
    FLD ST0                             ; 004f37b9
    FMUL float ptr [0x01d167b0]         ; 004f37bb | DAT_01d167b0
    FXCH                                ; 004f37c1
    FMUL float ptr [0x01d167b4]         ; 004f37c3 | DAT_01d167b4
    FXCH ST2                            ; 004f37c9
    FSTP float ptr [0x01d167c0]         ; 004f37cb | DAT_01d167c0
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f37d1
    MOV dword ptr [0x01d167c4],EDX      ; 004f37d4 | DAT_01d167c4
    FLD float ptr [EAX + 0x28]          ; 004f37da
    FMUL float ptr [0x01d167c0]         ; 004f37dd | DAT_01d167c0
    FXCH ST6                            ; 004f37e3
    FSTP float ptr [0x01d167cc]         ; 004f37e5 | DAT_01d167cc
    FLD float ptr [EAX + 0x28]          ; 004f37eb
    FXCH ST3                            ; 004f37ee
    FSUBRP ST5,ST0                      ; 004f37f0
    FXCH ST2                            ; 004f37f2
    FMUL float ptr [0x01d167c4]         ; 004f37f4 | DAT_01d167c4
    FLD float ptr [EAX + 0x2c]          ; 004f37fa
    FMUL float ptr [0x01d167cc]         ; 004f37fd | DAT_01d167cc
    FXCH ST6                            ; 004f3803
    FSUBP ST3,ST0                       ; 004f3805
    FXCH ST3                            ; 004f3807
    FSTP float ptr [0x01d167d0]         ; 004f3809 | DAT_01d167d0
    FLD float ptr [EAX + 0x2c]          ; 004f380f
    FMUL float ptr [0x01d167d0]         ; 004f3812 | DAT_01d167d0
    FLD float ptr [EAX + 0x20]          ; 004f3818
    FXCH ST4                            ; 004f381b
    FSUBP ST2,ST0                       ; 004f381d
    FXCH ST3                            ; 004f381f
    FSTP float ptr [0x01d167d4]         ; 004f3821 | DAT_01d167d4
    FLD float ptr [EAX + 0x2c]          ; 004f3827
    FMUL float ptr [0x01d167d4]         ; 004f382a | DAT_01d167d4
    MOV EDI,0x3f800000                  ; 004f3830
    XOR ECX,ECX                         ; 004f3835
    MOV EBP,dword ptr [0x0264bc84]      ; 004f3837 | DAT_0264bc84
    MOV dword ptr [0x01d167b8],ECX      ; 004f383d | DAT_01d167b8
    MOV dword ptr [0x01d167c8],ECX      ; 004f3843 | DAT_01d167c8
    MOV dword ptr [0x01d167d8],ECX      ; 004f3849 | DAT_01d167d8
    FXCH ST5                            ; 004f384f
    FSUBP ST4,ST0                       ; 004f3851
    MOV dword ptr [0x01d167e8],EDI      ; 004f3853 | DAT_01d167e8
    FXCH ST3                            ; 004f3859
    FSTP float ptr [0x01d167dc]         ; 004f385b | DAT_01d167dc
    FSUBRP                              ; 004f3861
    FXCH ST2                            ; 004f3863
    FSUBP                               ; 004f3865
    FXCH                                ; 004f3867
    FSTP float ptr [0x01d167e0]         ; 004f3869 | DAT_01d167e0
    FSTP float ptr [0x01d167e4]         ; 004f386f | DAT_01d167e4
    TEST EBP,EBP                        ; 004f3875
    JZ 0x004f3882                       ; 004f3877
        ;   XREF to: 004f3882 (CONDITIONAL_JUMP)  ; LAB_004f3882
    CMP dword ptr [0x01c37788],0x0      ; 004f3879 | DAT_01c37788
    JNZ 0x004f3890                      ; 004f3880
        ;   XREF to: 004f3890 (CONDITIONAL_JUMP)  ; LAB_004f3890
    XOR EDX,EDX                         ; 004f3882
        ;   Label: LAB_004f3882
    MOV dword ptr [0x01d0c398],EDX      ; 004f3884 | DAT_01d0c398
    POP EDI                             ; 004f388a
    ADD ESP,0x4                         ; 004f388b
        ;   Label: LAB_004f388b
    POP EBP                             ; 004f388e
    RET                                 ; 004f388f
    PUSH dword ptr [0x01d098d0]         ; 004f3890 | DAT_01d098d0
        ;   Label: LAB_004f3890
    PUSH dword ptr [0x01d098cc]         ; 004f3896 | DAT_01d098cc
    PUSH 0x1d167ac                      ; 004f389c | DAT_01d167ac
    CALL dword ptr [0x0264bc84]         ; 004f38a1 | DAT_0264bc84
    ADD ESP,0xc                         ; 004f38a7
    XOR EDX,EDX                         ; 004f38aa
    MOV dword ptr [0x01d0c398],EDX      ; 004f38ac | DAT_01d0c398
    POP EDI                             ; 004f38b2
    ADD ESP,0x4                         ; 004f38b3
    POP EBP                             ; 004f38b6
    RET                                 ; 004f38b7

