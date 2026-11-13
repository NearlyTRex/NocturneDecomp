; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_lightVertex_FUN_00513ca0(float *vertex,float *out_color)
;
; Parameters:
; float *          Stack[0x4]:4   vertex
; float *          Stack[0x8]:4   out_color
;
; XREF[3]:
;   engine_mini3d.cpp_convertVertexD3DL_FUN_005149a0 at 005149cb
;   engine_mini3d.cpp_convertVertexL_FUN_00514aa0 at 00514abf
;   engine_mini3d.cpp_polyList_FUN_005126d0 at 005128a0
;
; Referenced Globals:
;   undefined4 DAT_01cc804c
;   undefined4 DAT_01d224c0
;   undefined4 DAT_01d22548
;   undefined4 DAT_01d22554
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d25004
;   undefined4 DAT_01d2ad78
;   undefined4 DAT_01d2ad7c
;   undefined4 DAT_01d2ad80
;   undefined4 DAT_01d2ad88
;   undefined4 DAT_01d2ad8c
;   undefined4 DAT_01d2ad90
;   undefined4 DAT_01d2ad98
;   undefined4 DAT_01d2ad9c
;   undefined4 DAT_01d2ada0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513ca0
        ;   Label: engine_mini3d.cpp_lightVertex_FUN_00513ca0
    PUSH ESI                            ; 00513ca1
    PUSH EDI                            ; 00513ca2
    PUSH EBP                            ; 00513ca3
    MOV EBP,ESP                         ; 00513ca4
    SUB ESP,0x68                        ; 00513ca6
    AND ESP,0xfffffff8                  ; 00513ca9
    MOV ESI,dword ptr [0x01d25004]      ; 00513cac | DAT_01d25004
    MOV ECX,dword ptr [EBP + 0x14]      ; 00513cb2
    MOV EDI,dword ptr [EBP + 0x18]      ; 00513cb5
    FLDZ                                ; 00513cb8
    FCOMP float ptr [0x01d22548]        ; 00513cba | DAT_01d22548
    FNSTSW AX                           ; 00513cc0
    SAHF                                ; 00513cc2
    JC 0x00513e9c                       ; 00513cc3
        ;   XREF to: 00513e9c (CONDITIONAL_JUMP)  ; LAB_00513e9c
    XOR EDX,EDX                         ; 00513cc9
        ;   Label: LAB_00513cc9
    MOV dword ptr [ESP],EDX             ; 00513ccb
    XOR EBX,EBX                         ; 00513cce
        ;   Label: LAB_00513cce
    MOV dword ptr [ESP + 0x30],EBX      ; 00513cd0
    MOV dword ptr [ESP + 0x34],EBX      ; 00513cd4
    MOV dword ptr [ESP + 0x2c],EBX      ; 00513cd8
    TEST ESI,ESI                        ; 00513cdc
    JLE 0x00513e1f                      ; 00513cde
        ;   XREF to: 00513e1f (CONDITIONAL_JUMP)  ; LAB_00513e1f
    FLD float ptr [ECX + 0x4]           ; 00513ce4
    FMUL float ptr [0x01d2ad88]         ; 00513ce7 | DAT_01d2ad88
    FLD float ptr [ECX + 0x4]           ; 00513ced
    FMUL float ptr [0x01d2ad8c]         ; 00513cf0 | DAT_01d2ad8c
    FLD float ptr [ECX + 0x4]           ; 00513cf6
    FMUL float ptr [0x01d2ad90]         ; 00513cf9 | DAT_01d2ad90
    FLD float ptr [ECX]                 ; 00513cff
    FMUL float ptr [0x01d2ad78]         ; 00513d01 | DAT_01d2ad78
    FLD float ptr [ECX]                 ; 00513d07
    FMUL float ptr [0x01d2ad7c]         ; 00513d09 | DAT_01d2ad7c
    FLD float ptr [ECX]                 ; 00513d0f
    FXCH ST2                            ; 00513d11
    FADDP ST5,ST0                       ; 00513d13
    FXCH                                ; 00513d15
    FMUL float ptr [0x01d2ad80]         ; 00513d17 | DAT_01d2ad80
    FLD float ptr [ECX + 0x8]           ; 00513d1d
    FMUL float ptr [0x01d2ad98]         ; 00513d20 | DAT_01d2ad98
    FXCH ST2                            ; 00513d26
    FADDP ST4,ST0                       ; 00513d28
    FADDP ST2,ST0                       ; 00513d2a
    FLD float ptr [ECX + 0x8]           ; 00513d2c
    FMUL float ptr [0x01d2ad9c]         ; 00513d2f | DAT_01d2ad9c
    FLD float ptr [ECX + 0x8]           ; 00513d35
    FMUL float ptr [0x01d2ada0]         ; 00513d38 | DAT_01d2ada0
    MOV EDX,0x1d25008                   ; 00513d3e
    FXCH ST2                            ; 00513d43
    FADDP ST5,ST0                       ; 00513d45
    FADDP ST3,ST0                       ; 00513d47
    FADDP                               ; 00513d49
    FXCH ST2                            ; 00513d4b
    FADD float ptr [0x01d2ada8]         ; 00513d4d | DAT_01d2ada8
    FXCH                                ; 00513d53
    FADD float ptr [0x01d2adac]         ; 00513d55 | DAT_01d2adac
    FXCH ST2                            ; 00513d5b
    FADD float ptr [0x01d2adb0]         ; 00513d5d | DAT_01d2adb0
    FXCH ST2                            ; 00513d63
    FSTP float ptr [ESP + 0x28]         ; 00513d65
    FXCH                                ; 00513d69
    FSTP float ptr [ESP + 0x20]         ; 00513d6b
    FSTP float ptr [ESP + 0x24]         ; 00513d6f
    JLE 0x00513e1f                      ; 00513d73
        ;   XREF to: 00513e1f (CONDITIONAL_JUMP)  ; LAB_00513e1f
    CMP byte ptr [EBX + 0x1d25ee0],0x0  ; 00513d79
        ;   Label: LAB_00513d79
    JZ 0x00513e13                       ; 00513d80
        ;   XREF to: 00513e13 (CONDITIONAL_JUMP)  ; LAB_00513e13
    FLD float ptr [ECX + 0x10]          ; 00513d86
    FMUL float ptr [0x01d2ad88]         ; 00513d89 | DAT_01d2ad88
    FLD float ptr [ECX + 0xc]           ; 00513d8f
    FMUL float ptr [0x01d2ad7c]         ; 00513d92 | DAT_01d2ad7c
    FLD float ptr [ECX + 0xc]           ; 00513d98
    FMUL float ptr [0x01d2ad80]         ; 00513d9b | DAT_01d2ad80
    FLD float ptr [ECX + 0xc]           ; 00513da1
    FMUL float ptr [0x01d2ad78]         ; 00513da4 | DAT_01d2ad78
    FLD float ptr [ECX + 0x10]          ; 00513daa
    FMUL float ptr [0x01d2ad8c]         ; 00513dad | DAT_01d2ad8c
    FLD float ptr [ECX + 0x10]          ; 00513db3
    FMUL float ptr [0x01d2ad90]         ; 00513db6 | DAT_01d2ad90
    FXCH ST2                            ; 00513dbc
    FADDP ST5,ST0                       ; 00513dbe
    FADDP ST3,ST0                       ; 00513dc0
    FLD float ptr [ECX + 0x14]          ; 00513dc2
    FMUL float ptr [0x01d2ad98]         ; 00513dc5 | DAT_01d2ad98
    FLD float ptr [ECX + 0x14]          ; 00513dcb
    FMUL float ptr [0x01d2ad9c]         ; 00513dce | DAT_01d2ad9c
    FXCH                                ; 00513dd4
    FADDP ST5,ST0                       ; 00513dd6
    FXCH ST4                            ; 00513dd8
    FMUL float ptr [EDX + 0x14]         ; 00513dda
    FXCH                                ; 00513ddd
    FADDP ST2,ST0                       ; 00513ddf
    FXCH ST3                            ; 00513de1
    FADDP ST2,ST0                       ; 00513de3
    FXCH                                ; 00513de5
    FMUL float ptr [EDX + 0x20]         ; 00513de7
    FLD float ptr [ECX + 0x14]          ; 00513dea
    FMUL float ptr [0x01d2ada0]         ; 00513ded | DAT_01d2ada0
    FXCH                                ; 00513df3
    FADDP ST3,ST0                       ; 00513df5
    FADDP                               ; 00513df7
    FMUL float ptr [EDX + 0x2c]         ; 00513df9
    FADDP                               ; 00513dfc
    FLDZ                                ; 00513dfe
    FXCH                                ; 00513e00
    FSTP float ptr [ESP + 0x4c]         ; 00513e02
    FCOMP float ptr [ESP + 0x4c]        ; 00513e06
    FNSTSW AX                           ; 00513e0a
    SAHF                                ; 00513e0c
    JA 0x00513f1e                       ; 00513e0d
        ;   XREF to: 00513f1e (CONDITIONAL_JUMP)  ; LAB_00513f1e
    INC EBX                             ; 00513e13
        ;   Label: LAB_00513e13
    ADD EDX,0x4c                        ; 00513e14
    CMP EBX,ESI                         ; 00513e17
    JL 0x00513d79                       ; 00513e19
        ;   XREF to: 00513d79 (CONDITIONAL_JUMP)  ; LAB_00513d79
    FLD float ptr [0x01d22548]          ; 00513e1f | DAT_01d22548
        ;   Label: LAB_00513e1f
    FLD ST0                             ; 00513e25
    FMUL float ptr [ESP]                ; 00513e27
    FLD float ptr [ESP + 0x34]          ; 00513e2a
    FMULP ST2                           ; 00513e2e
    FSTP float ptr [ESP + 0x1c]         ; 00513e30
    FADD float ptr [ESP + 0x1c]         ; 00513e34
    FSTP float ptr [EDI]                ; 00513e38
    CMP dword ptr [EDI],0x3f800000      ; 00513e3a
    JLE 0x00513e48                      ; 00513e40
        ;   XREF to: 00513e48 (CONDITIONAL_JUMP)  ; LAB_00513e48
    MOV dword ptr [EDI],0x3f800000      ; 00513e42
    FLD float ptr [ESP + 0x30]          ; 00513e48
        ;   Label: LAB_00513e48
    FMUL float ptr [0x01d22548]         ; 00513e4c | DAT_01d22548
    FADD float ptr [ESP + 0x1c]         ; 00513e52
    FSTP float ptr [EDI + 0x4]          ; 00513e56
    CMP dword ptr [EDI + 0x4],0x3f800000 ; 00513e59
    JLE 0x00513e69                      ; 00513e60
        ;   XREF to: 00513e69 (CONDITIONAL_JUMP)  ; LAB_00513e69
    MOV dword ptr [EDI + 0x4],0x3f800000 ; 00513e62
    FLD float ptr [ESP + 0x2c]          ; 00513e69
        ;   Label: LAB_00513e69
    FMUL float ptr [0x01d22548]         ; 00513e6d | DAT_01d22548
    FADD float ptr [ESP + 0x1c]         ; 00513e73
    FSTP float ptr [EDI + 0x8]          ; 00513e77
    CMP dword ptr [EDI + 0x8],0x3f800000 ; 00513e7a
    JG 0x005140a8                       ; 00513e81
        ;   XREF to: 005140a8 (CONDITIONAL_JUMP)  ; LAB_005140a8
    MOV EAX,[0x01d224c0]                ; 00513e87 | DAT_01d224c0
        ;   Label: LAB_00513e87
    MOV dword ptr [EDI + 0xc],EAX       ; 00513e8c
    MOV dword ptr [0x01d25004],ESI      ; 00513e8f | DAT_01d25004
    MOV ESP,EBP                         ; 00513e95
    POP EBP                             ; 00513e97
    POP EDI                             ; 00513e98
    POP ESI                             ; 00513e99
    POP EBX                             ; 00513e9a
    RET                                 ; 00513e9b
    MOV EAX,[0x01d2257c]                ; 00513e9c | DAT_01d2257c
        ;   Label: LAB_00513e9c
    FLD float ptr [ECX + 0xc]           ; 00513ea1
    FMUL float ptr [EAX + 0x30]         ; 00513ea4
    FLD float ptr [ECX + 0x10]          ; 00513ea7
    FMUL float ptr [EAX + 0x34]         ; 00513eaa
    FADDP                               ; 00513ead
    FLD float ptr [ECX + 0x14]          ; 00513eaf
    FMUL float ptr [EAX + 0x38]         ; 00513eb2
    FADDP                               ; 00513eb5
    FSTP float ptr [ESP]                ; 00513eb7
    XOR byte ptr [ESP + 0x3],0x80       ; 00513eba
    FLDZ                                ; 00513ebf
    FCOMP float ptr [ESP]               ; 00513ec1
    FNSTSW AX                           ; 00513ec4
    SAHF                                ; 00513ec6
    JBE 0x00513ef3                      ; 00513ec7
        ;   XREF to: 00513ef3 (CONDITIONAL_JUMP)  ; LAB_00513ef3
    XOR EDX,EDX                         ; 00513ec9
    MOV dword ptr [ESP],EDX             ; 00513ecb
    FLD1                                ; 00513ece
        ;   Label: LAB_00513ece
    FLD float ptr [0x01d22554]          ; 00513ed0 | DAT_01d22554
    FXCH                                ; 00513ed6
    FSUB ST0,ST1                        ; 00513ed8
    FMUL float ptr [ESP]                ; 00513eda
    FADDP                               ; 00513edd
    FLDZ                                ; 00513edf
    FXCH                                ; 00513ee1
    FSTP float ptr [ESP]                ; 00513ee3
    FCOMP float ptr [ESP]               ; 00513ee6
    FNSTSW AX                           ; 00513ee9
    SAHF                                ; 00513eeb
    JBE 0x00513f05                      ; 00513eec
        ;   XREF to: 00513f05 (CONDITIONAL_JUMP)  ; LAB_00513f05
    JMP 0x00513cc9                      ; 00513eee
        ;   XREF to: 00513cc9 (UNCONDITIONAL_JUMP)  ; LAB_00513cc9
    CMP dword ptr [ESP],0x3f800000      ; 00513ef3
        ;   Label: LAB_00513ef3
    JLE 0x00513ece                      ; 00513efa
        ;   XREF to: 00513ece (CONDITIONAL_JUMP)  ; LAB_00513ece
    MOV dword ptr [ESP],0x3f800000      ; 00513efc
    JMP 0x00513ece                      ; 00513f03
        ;   XREF to: 00513ece (UNCONDITIONAL_JUMP)  ; LAB_00513ece
    CMP dword ptr [ESP],0x3f800000      ; 00513f05
        ;   Label: LAB_00513f05
    JLE 0x00513cce                      ; 00513f0c
        ;   XREF to: 00513cce (CONDITIONAL_JUMP)  ; LAB_00513cce
    MOV dword ptr [ESP],0x3f800000      ; 00513f12
    JMP 0x00513cce                      ; 00513f19
        ;   XREF to: 00513cce (UNCONDITIONAL_JUMP)  ; LAB_00513cce
    FLD float ptr [ESP + 0x28]          ; 00513f1e
        ;   Label: LAB_00513f1e
    FLD float ptr [ESP + 0x24]          ; 00513f22
    FSUB float ptr [EDX]                ; 00513f26
    FXCH                                ; 00513f28
    FSUB float ptr [EDX + 0x4]          ; 00513f2a
    FXCH                                ; 00513f2d
    FST float ptr [ESP + 0x40]          ; 00513f2f
    FMUL float ptr [EDX + 0x14]         ; 00513f33
    FXCH                                ; 00513f36
    FST float ptr [ESP + 0x44]          ; 00513f38
    FMUL float ptr [EDX + 0x20]         ; 00513f3c
    FLD float ptr [ESP + 0x20]          ; 00513f3f
    FSUB float ptr [EDX + 0x8]          ; 00513f43
    FXCH                                ; 00513f46
    FADDP ST2,ST0                       ; 00513f48
    FST float ptr [ESP + 0x48]          ; 00513f4a
    FMUL float ptr [EDX + 0x2c]         ; 00513f4e
    MOV AH,byte ptr [ESP + 0x4f]        ; 00513f51
    FLDZ                                ; 00513f55
    XOR AH,0x80                         ; 00513f57
    FXCH                                ; 00513f5a
    FADDP ST2,ST0                       ; 00513f5c
    MOV byte ptr [ESP + 0x4f],AH        ; 00513f5e
    FXCH                                ; 00513f62
    FSTP float ptr [ESP + 0x58]         ; 00513f64
    FCOMP float ptr [ESP + 0x58]        ; 00513f68
    FNSTSW AX                           ; 00513f6c
    SAHF                                ; 00513f6e
    JNC 0x00513e13                      ; 00513f6f
        ;   XREF to: 00513e13 (CONDITIONAL_JUMP)  ; LAB_00513e13
    FLD float ptr [ESP + 0x58]          ; 00513f75
    FCOMP float ptr [EDX + 0x34]        ; 00513f79
    FNSTSW AX                           ; 00513f7c
    SAHF                                ; 00513f7e
    JNC 0x00513e13                      ; 00513f7f
        ;   XREF to: 00513e13 (CONDITIONAL_JUMP)  ; LAB_00513e13
    FLD float ptr [ESP + 0x40]          ; 00513f85
    FMUL float ptr [EDX + 0xc]          ; 00513f89
    FLD float ptr [ESP + 0x44]          ; 00513f8c
    FMUL float ptr [EDX + 0x18]         ; 00513f90
    FADDP                               ; 00513f93
    FLD float ptr [ESP + 0x48]          ; 00513f95
    FMUL float ptr [EDX + 0x24]         ; 00513f99
    FADDP                               ; 00513f9c
    FST float ptr [ESP + 0x50]          ; 00513f9e
    FCOMP float ptr [ESP + 0x58]        ; 00513fa2
    FNSTSW AX                           ; 00513fa6
    SAHF                                ; 00513fa8
    JNC 0x00513e13                      ; 00513fa9
        ;   XREF to: 00513e13 (CONDITIONAL_JUMP)  ; LAB_00513e13
    FLD float ptr [ESP + 0x50]          ; 00513faf
    FLD float ptr [ESP + 0x58]          ; 00513fb3
    FCHS                                ; 00513fb7
    FSTP float ptr [ESP + 0x38]         ; 00513fb9
    FCOMP float ptr [ESP + 0x38]        ; 00513fbd
    FNSTSW AX                           ; 00513fc1
    SAHF                                ; 00513fc3
    JBE 0x00513e13                      ; 00513fc4
        ;   XREF to: 00513e13 (CONDITIONAL_JUMP)  ; LAB_00513e13
    FLD float ptr [ESP + 0x40]          ; 00513fca
    FMUL float ptr [EDX + 0x10]         ; 00513fce
    FLD float ptr [ESP + 0x44]          ; 00513fd1
    FMUL float ptr [EDX + 0x1c]         ; 00513fd5
    FADDP                               ; 00513fd8
    FLD float ptr [ESP + 0x48]          ; 00513fda
    FMUL float ptr [EDX + 0x28]         ; 00513fde
    FADDP                               ; 00513fe1
    FST float ptr [ESP + 0x54]          ; 00513fe3
    FCOMP float ptr [ESP + 0x58]        ; 00513fe7
    FNSTSW AX                           ; 00513feb
    SAHF                                ; 00513fed
    JNC 0x00513e13                      ; 00513fee
        ;   XREF to: 00513e13 (CONDITIONAL_JUMP)  ; LAB_00513e13
    FLD float ptr [ESP + 0x54]          ; 00513ff4
    FCOMP float ptr [ESP + 0x38]        ; 00513ff8
    FNSTSW AX                           ; 00513ffc
    SAHF                                ; 00513ffe
    JBE 0x00513e13                      ; 00513fff
        ;   XREF to: 00513e13 (CONDITIONAL_JUMP)  ; LAB_00513e13
    FLD1                                ; 00514005
    FLD float ptr [ESP + 0x50]          ; 00514007
    FXCH                                ; 0051400b
    FDIV float ptr [ESP + 0x58]         ; 0051400d
    FXCH                                ; 00514011
    FMUL ST1                            ; 00514013
    FLD float ptr [ESP + 0x54]          ; 00514015
    FMULP ST2                           ; 00514019
    FST float ptr [ESP + 0x50]          ; 0051401b
    FMUL float ptr [ESP + 0x50]         ; 0051401f
    FXCH                                ; 00514023
    FST float ptr [ESP + 0x54]          ; 00514025
    FMUL float ptr [ESP + 0x54]         ; 00514029
    FADDP                               ; 0051402d
    FSTP float ptr [ESP + 0x3c]         ; 0051402f
    CMP dword ptr [ESP + 0x3c],0x3f800000 ; 00514033
    JGE 0x00513e13                      ; 0051403b
        ;   XREF to: 00513e13 (CONDITIONAL_JUMP)  ; LAB_00513e13
    FLD float ptr [ESP + 0x58]          ; 00514041
    FDIV float ptr [EDX + 0x34]         ; 00514045
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00514048
    SAR EAX,0x1                         ; 0051404c
    FLD1                                ; 0051404e
    FSUBRP                              ; 00514050
    ADD EAX,dword ptr [0x01cc804c]      ; 00514052 | DAT_01cc804c
    FLD float ptr [0x01d22548]          ; 00514058 | DAT_01d22548
    FMUL float ptr [ESP + 0x4c]         ; 0051405e
    MOV dword ptr [ESP + 0x18],EAX      ; 00514062
    FLD1                                ; 00514066
    FSUB float ptr [ESP + 0x18]         ; 00514068
    FXCH                                ; 0051406c
    FMULP ST2                           ; 0051406e
    FMULP                               ; 00514070
    FLD float ptr [EDX + 0x40]          ; 00514072
    FMUL ST1                            ; 00514075
    FLD float ptr [EDX + 0x44]          ; 00514077
    FMUL ST2                            ; 0051407a
    FLD float ptr [EDX + 0x48]          ; 0051407c
    FMULP ST3                           ; 0051407f
    FXCH                                ; 00514081
    FADD float ptr [ESP + 0x2c]         ; 00514083
    FXCH                                ; 00514087
    FADD float ptr [ESP + 0x30]         ; 00514089
    FXCH ST2                            ; 0051408d
    FADD float ptr [ESP + 0x34]         ; 0051408f
    FXCH                                ; 00514093
    FSTP float ptr [ESP + 0x2c]         ; 00514095
    FXCH                                ; 00514099
    FSTP float ptr [ESP + 0x30]         ; 0051409b
    FSTP float ptr [ESP + 0x34]         ; 0051409f
    JMP 0x00513e13                      ; 005140a3
        ;   XREF to: 00513e13 (UNCONDITIONAL_JUMP)  ; LAB_00513e13
    MOV dword ptr [EDI + 0x8],0x3f800000 ; 005140a8
        ;   Label: LAB_005140a8
    JMP 0x00513e87                      ; 005140af
        ;   XREF to: 00513e87 (UNCONDITIONAL_JUMP)  ; LAB_00513e87

