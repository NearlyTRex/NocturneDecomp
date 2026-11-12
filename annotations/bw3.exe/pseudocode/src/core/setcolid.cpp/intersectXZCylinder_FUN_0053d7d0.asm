; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setcolid_cpp_intersectXZCylinder_FUN_0053d7d0(float *param_1,float param_2,float param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005d0ad6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d7d0
        ;   Label: core_setcolid.cpp_intersectXZCylinder_FUN_0053d7d0
    PUSH EBP                            ; 0053d7d1
    MOV EBP,ESP                         ; 0053d7d2
    SUB ESP,0xc0                        ; 0053d7d4
    AND ESP,0xfffffff8                  ; 0053d7da
    MOV EDX,dword ptr [EBP + 0xc]       ; 0053d7dd
    MOV ECX,dword ptr [EBP + 0x18]      ; 0053d7e0
    FLD float ptr [EDX + 0x24]          ; 0053d7e3
    FCOMP float ptr [ECX + 0x14]        ; 0053d7e6
    FNSTSW AX                           ; 0053d7e9
    SAHF                                ; 0053d7eb
    JBE 0x0053d87c                      ; 0053d7ec
        ;   XREF to: 0053d87c (CONDITIONAL_JUMP)  ; LAB_0053d87c
    FLD float ptr [EDX + 0x28]          ; 0053d7f2
    FCOMP float ptr [ECX + 0x18]        ; 0053d7f5
    FNSTSW AX                           ; 0053d7f8
    SAHF                                ; 0053d7fa
    JNC 0x0053d87c                      ; 0053d7fb
        ;   XREF to: 0053d87c (CONDITIONAL_JUMP)  ; LAB_0053d87c
    FLD float ptr [EBP + 0x10]          ; 0053d801
    FSUB float ptr [EDX + 0x10]         ; 0053d804
    FST double ptr [ESP + 0x78]         ; 0053d807
    FMUL double ptr [ESP + 0x78]        ; 0053d80b
    FLD float ptr [ECX + 0x1c]          ; 0053d80f
    FLD float ptr [EBP + 0x14]          ; 0053d812
    FSUB float ptr [EDX + 0x14]         ; 0053d815
    FXCH                                ; 0053d818
    FADD float ptr [EDX + 0x20]         ; 0053d81a
    FXCH                                ; 0053d81d
    FST double ptr [ESP + 0x30]         ; 0053d81f
    FMUL double ptr [ESP + 0x30]        ; 0053d823
    FXCH                                ; 0053d827
    FST double ptr [ESP + 0x48]         ; 0053d829
    FMUL double ptr [ESP + 0x48]        ; 0053d82d
    FXCH                                ; 0053d831
    FADDP ST2,ST0                       ; 0053d833
    FSTP double ptr [ESP + 0x58]        ; 0053d835
    FST double ptr [ESP + 0x20]         ; 0053d839
    FCOMP double ptr [ESP + 0x58]       ; 0053d83d
    FNSTSW AX                           ; 0053d841
    SAHF                                ; 0053d843
    JNC 0x0053d8b2                      ; 0053d844
        ;   XREF to: 0053d8b2 (CONDITIONAL_JUMP)  ; LAB_0053d8b2
    FLD double ptr [ESP + 0x20]         ; 0053d846
    FSQRT                               ; 0053d84a
    FSUB double ptr [ESP + 0x48]        ; 0053d84c
    FST double ptr [ESP + 0x70]         ; 0053d850
    FCOMP double ptr [0x005d0ad6]       ; 0053d854 | DAT_005d0ad6
    FNSTSW AX                           ; 0053d85a
    SAHF                                ; 0053d85c
    JBE 0x0053d871                      ; 0053d85d
        ;   XREF to: 0053d871 (CONDITIONAL_JUMP)  ; LAB_0053d871
    MOV ECX,0xd2f1a9fc                  ; 0053d85f
    MOV EBX,0xbf50624d                  ; 0053d864
    MOV dword ptr [ESP + 0x70],ECX      ; 0053d869
    MOV dword ptr [ESP + 0x74],EBX      ; 0053d86d
    FLD float ptr [EDX]                 ; 0053d871
        ;   Label: LAB_0053d871
    FCOMP double ptr [ESP + 0x70]       ; 0053d873
    FNSTSW AX                           ; 0053d877
    SAHF                                ; 0053d879
    JA 0x0053d883                       ; 0053d87a
        ;   XREF to: 0053d883 (CONDITIONAL_JUMP)  ; LAB_0053d883
    XOR EAX,EAX                         ; 0053d87c
        ;   Label: LAB_0053d87c
    MOV ESP,EBP                         ; 0053d87e
    POP EBP                             ; 0053d880
    POP EBX                             ; 0053d881
    RET                                 ; 0053d882
    FLD double ptr [ESP + 0x70]         ; 0053d883
        ;   Label: LAB_0053d883
    FLD double ptr [ESP + 0x78]         ; 0053d887
    FLD double ptr [ESP + 0x30]         ; 0053d88b
    MOV EAX,0x1                         ; 0053d88f
    FXCH                                ; 0053d894
    FCHS                                ; 0053d896
    MOV dword ptr [EDX + 0x8],0x0       ; 0053d898
    FXCH                                ; 0053d89f
    FCHS                                ; 0053d8a1
    FXCH ST2                            ; 0053d8a3
    FSTP float ptr [EDX]                ; 0053d8a5
    FSTP float ptr [EDX + 0x4]          ; 0053d8a7
    FSTP float ptr [EDX + 0xc]          ; 0053d8aa
    MOV ESP,EBP                         ; 0053d8ad
    POP EBP                             ; 0053d8af
    POP EBX                             ; 0053d8b0
    RET                                 ; 0053d8b1
    FLD double ptr [ESP + 0x78]         ; 0053d8b2
        ;   Label: LAB_0053d8b2
    FLD float ptr [EDX + 0x34]          ; 0053d8b6
    FSTP double ptr [ESP + 0x38]        ; 0053d8b9
    FMUL double ptr [ESP + 0x38]        ; 0053d8bd
    FLD float ptr [EDX + 0x38]          ; 0053d8c1
    FSTP double ptr [ESP + 0x68]        ; 0053d8c4
    FLD double ptr [ESP + 0x30]         ; 0053d8c8
    FMUL double ptr [ESP + 0x68]        ; 0053d8cc
    FADDP                               ; 0053d8d0
    FLDZ                                ; 0053d8d2
    FXCH                                ; 0053d8d4
    FSTP double ptr [ESP + 0x60]        ; 0053d8d6
    FCOMP double ptr [ESP + 0x60]       ; 0053d8da
    FNSTSW AX                           ; 0053d8de
    SAHF                                ; 0053d8e0
    JNC 0x0053d87c                      ; 0053d8e1
        ;   XREF to: 0053d87c (CONDITIONAL_JUMP)  ; LAB_0053d87c
    FLD double ptr [ESP + 0x60]         ; 0053d8e3
    FLD double ptr [ESP + 0x38]         ; 0053d8e7
    FMUL ST1                            ; 0053d8eb
    FLD double ptr [ESP + 0x68]         ; 0053d8ed
    FMULP ST2                           ; 0053d8f1
    FLD float ptr [EDX + 0x10]          ; 0053d8f3
    FSTP double ptr [ESP + 0x10]        ; 0053d8f6
    FADD double ptr [ESP + 0x10]        ; 0053d8fa
    FLD float ptr [EBP + 0x10]          ; 0053d8fe
    FXCH                                ; 0053d901
    FSTP double ptr [ESP + 0x18]        ; 0053d903
    FSUB double ptr [ESP + 0x18]        ; 0053d907
    FMUL ST0                            ; 0053d90b
    FLD float ptr [EDX + 0x14]          ; 0053d90d
    FSTP double ptr [ESP + 0x8]         ; 0053d910
    FXCH                                ; 0053d914
    FADD double ptr [ESP + 0x8]         ; 0053d916
    FLD float ptr [EBP + 0x14]          ; 0053d91a
    FXCH                                ; 0053d91d
    FSTP double ptr [ESP]               ; 0053d91f
    FSUB double ptr [ESP]               ; 0053d922
    FMUL ST0                            ; 0053d925
    FADDP                               ; 0053d927
    FST double ptr [ESP + 0x28]         ; 0053d929
    FCOMP double ptr [ESP + 0x58]       ; 0053d92d
    FNSTSW AX                           ; 0053d931
    SAHF                                ; 0053d933
    JNC 0x0053d87c                      ; 0053d934
        ;   XREF to: 0053d87c (CONDITIONAL_JUMP)  ; LAB_0053d87c
    FLD float ptr [EDX + 0x18]          ; 0053d93a
    FST double ptr [ESP + 0x40]         ; 0053d93d
    FABS                                ; 0053d941
    FLD double ptr [ESP + 0x58]         ; 0053d943
    FSUB double ptr [ESP + 0x28]        ; 0053d947
    FSQRT                               ; 0053d94b
    FLD float ptr [EDX + 0x1c]          ; 0053d94d
    FST double ptr [ESP + 0x80]         ; 0053d950
    FABS                                ; 0053d957
    FLD double ptr [ESP + 0x38]         ; 0053d959
    FMUL ST2                            ; 0053d95d
    FLD double ptr [ESP + 0x68]         ; 0053d95f
    FMULP ST3                           ; 0053d963
    FLD double ptr [ESP]                ; 0053d965
    FLD double ptr [ESP + 0x18]         ; 0053d968
    FSUBRP ST2,ST0                      ; 0053d96c
    FSUBRP ST3,ST0                      ; 0053d96e
    FSTP double ptr [ESP + 0x90]        ; 0053d970
    FXCH                                ; 0053d977
    FSTP double ptr [ESP + 0x50]        ; 0053d979
    FCOMPP                              ; 0053d97d
    FNSTSW AX                           ; 0053d97f
    SAHF                                ; 0053d981
    JNC 0x0053d9d3                      ; 0053d982
        ;   XREF to: 0053d9d3 (CONDITIONAL_JUMP)  ; LAB_0053d9d3
    FLD double ptr [ESP + 0x90]         ; 0053d984
    FSUB double ptr [ESP + 0x10]        ; 0053d98b
    FDIV double ptr [ESP + 0x40]        ; 0053d98f
    FSTP double ptr [ESP + 0x88]        ; 0053d993
        ;   Label: LAB_0053d993
    FLDZ                                ; 0053d99a
    FCOMP double ptr [ESP + 0x88]       ; 0053d99c
    FNSTSW AX                           ; 0053d9a3
    SAHF                                ; 0053d9a5
    JA 0x0053d87c                       ; 0053d9a6
        ;   XREF to: 0053d87c (CONDITIONAL_JUMP)  ; LAB_0053d87c
    FLD float ptr [EDX]                 ; 0053d9ac
    FCOMP double ptr [ESP + 0x88]       ; 0053d9ae
    FNSTSW AX                           ; 0053d9b5
    SAHF                                ; 0053d9b7
    JBE 0x0053d87c                      ; 0053d9b8
        ;   XREF to: 0053d87c (CONDITIONAL_JUMP)  ; LAB_0053d87c
    FLD1                                ; 0053d9be
    FCOMP double ptr [ESP + 0x88]       ; 0053d9c0
    FNSTSW AX                           ; 0053d9c7
    SAHF                                ; 0053d9c9
    JNC 0x0053d9e4                      ; 0053d9ca
        ;   XREF to: 0053d9e4 (CONDITIONAL_JUMP)  ; LAB_0053d9e4
    XOR EAX,EAX                         ; 0053d9cc
    MOV ESP,EBP                         ; 0053d9ce
    POP EBP                             ; 0053d9d0
    POP EBX                             ; 0053d9d1
    RET                                 ; 0053d9d2
    FLD double ptr [ESP + 0x50]         ; 0053d9d3
        ;   Label: LAB_0053d9d3
    FSUB double ptr [ESP + 0x8]         ; 0053d9d7
    FDIV double ptr [ESP + 0x80]        ; 0053d9db
    JMP 0x0053d993                      ; 0053d9e2
        ;   XREF to: 0053d993 (UNCONDITIONAL_JUMP)  ; LAB_0053d993
    FLD double ptr [ESP + 0x88]         ; 0053d9e4
        ;   Label: LAB_0053d9e4
    FLD float ptr [EBP + 0x10]          ; 0053d9eb
    FLD float ptr [EBP + 0x14]          ; 0053d9ee
    MOV dword ptr [EDX + 0x8],0x0       ; 0053d9f1
    MOV EAX,0x1                         ; 0053d9f8
    FXCH ST2                            ; 0053d9fd
    FSTP float ptr [EDX]                ; 0053d9ff
    FSUBR double ptr [ESP + 0x90]       ; 0053da01
    FXCH                                ; 0053da08
    FSUBR double ptr [ESP + 0x50]       ; 0053da0a
    FXCH                                ; 0053da0e
    FSTP float ptr [EDX + 0x4]          ; 0053da10
    FSTP float ptr [EDX + 0xc]          ; 0053da13
    MOV ESP,EBP                         ; 0053da16
    POP EBP                             ; 0053da18
    POP EBX                             ; 0053da19
    RET                                 ; 0053da1a

