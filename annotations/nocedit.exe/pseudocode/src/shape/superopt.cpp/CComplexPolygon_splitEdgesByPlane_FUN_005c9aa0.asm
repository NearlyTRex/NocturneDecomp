; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0(CComplexPolygon *this_ptr,CVector3d *plane_normal,CVector3d *plane_point,SExpandedEdge *buf_a,SExpandedEdge *buf_b,int *count_a,int *count_b)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   plane_normal
; CVector3d *      Stack[0xc]:4   plane_point
; SExpandedEdge *  Stack[0x10]:4   buf_a
; SExpandedEdge *  Stack[0x14]:4   buf_b
; int *            Stack[0x18]:4   count_a
; int *            Stack[0x1c]:4   count_b
; Local Variables:
; double           Stack[-0x1e0]:8  local_1e0
; double           Stack[-0x1d8]:8  local_1d8
; double           Stack[-0x1d0]:8  local_1d0
; double           Stack[-0x1c8]:8  local_1c8
; double           Stack[-0x1c0]:8  local_1c0
; double           Stack[-0x1b8]:8  local_1b8
; double           Stack[-0x1b0]:8  local_1b0
; double           Stack[-0x1a8]:8  local_1a8
; double           Stack[-0x1a0]:8  local_1a0
; double           Stack[-0x198]:8  local_198
; double           Stack[-0x190]:8  local_190
; double           Stack[-0x188]:8  local_188
; double           Stack[-0x180]:8  local_180
; double           Stack[-0x178]:8  local_178
; double           Stack[-0x170]:8  local_170
; double           Stack[-0x168]:8  local_168
; double           Stack[-0x160]:8  local_160
; double           Stack[-0x158]:8  local_158
; double           Stack[-0x150]:8  local_150
; double           Stack[-0x148]:8  local_148
; double           Stack[-0x140]:8  local_140
; double           Stack[-0x138]:8  local_138
; double           Stack[-0x130]:8  local_130
; double           Stack[-0x128]:8  local_128
; double           Stack[-0x120]:8  local_120
; double           Stack[-0x118]:8  local_118
; double           Stack[-0x110]:8  local_110
; double           Stack[-0x108]:8  local_108
; double           Stack[-0x100]:8  local_100
; undefined4[4]    Stack[-0xf8]:16  local_f8
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; double           Stack[-0xe0]:8  local_e0
; double           Stack[-0xd8]:8  local_d8
; double           Stack[-0xd0]:8  local_d0
; double           Stack[-0xc8]:8  local_c8
; double           Stack[-0xc0]:8  local_c0
; double           Stack[-0xb8]:8  local_b8
; double           Stack[-0xb0]:8  local_b0
; double           Stack[-0xa8]:8  local_a8
; double           Stack[-0xa0]:8  local_a0
; double           Stack[-0x98]:8  local_98
; double           Stack[-0x90]:8  local_90
; double           Stack[-0x88]:8  local_88
; double           Stack[-0x80]:8  local_80
; double           Stack[-0x78]:8  local_78
; double           Stack[-0x70]:8  local_70
; double           Stack[-0x68]:8  local_68
; double           Stack[-0x60]:8  local_60
; double           Stack[-0x58]:8  local_58
; double *         Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; double *         Stack[-0x38]:4  local_38
; double *         Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; double *         Stack[-0x2c]:4  local_2c
; uint             Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; double *         Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[4]:
;   shape_superopt.cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70 at 005c8fcf
;   shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50 at 005c8cb0
;   shape_superopt.cpp_CComplexPolygon_splitByDimensions_FUN_005c9500 at 005c976c
;   shape_superopt.cpp_CComplexPolygon_splitToConvex_FUN_005c84c0 at 005c890d
;
; Referenced Globals:
;   double DOUBLE_00654242 = 1.00000000000000E-10
;   double DOUBLE_0065424a = -1.00000000000000E-10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9aa0
        ;   Label: shape_superopt.cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
    PUSH ESI                            ; 005c9aa1
    PUSH EDI                            ; 005c9aa2
    PUSH EBP                            ; 005c9aa3
    MOV EBP,ESP                         ; 005c9aa4
    SUB ESP,0x1cc                       ; 005c9aa6
    AND ESP,0xfffffff8                  ; 005c9aac
    MOV EBX,dword ptr [EBP + 0x28]      ; 005c9aaf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c9ab2
    XOR EDX,EDX                         ; 005c9ab5
    MOV ECX,dword ptr [EAX + 0x2c]      ; 005c9ab7
    MOV dword ptr [ESP + 0x1b8],EDX     ; 005c9aba
    TEST ECX,ECX                        ; 005c9ac1
    JBE 0x005c9c96                      ; 005c9ac3
        ;   XREF to: 005c9c96 (CONDITIONAL_JUMP)  ; LAB_005c9c96
    MOV dword ptr [ESP + 0x1c4],EDX     ; 005c9ac9
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c9ad0
        ;   Label: LAB_005c9ad0
    FLD double ptr [EAX]                ; 005c9ad3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c9ad5
    FMUL double ptr [EAX]               ; 005c9ad8
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c9ada
    FLD double ptr [EAX + 0x8]          ; 005c9add
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c9ae0
    FMUL double ptr [EAX + 0x8]         ; 005c9ae3
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c9ae6
    FLD double ptr [EAX + 0x10]         ; 005c9ae9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c9aec
    FMUL double ptr [EAX + 0x10]        ; 005c9aef
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c9af2
    MOV EDI,dword ptr [ESP + 0x1c4]     ; 005c9af5
    MOV ECX,0x6                         ; 005c9afc
    MOV EDX,dword ptr [EDX + 0x30]      ; 005c9b01
    LEA ESI,[ESP + 0x40]                ; 005c9b04
    ADD EDX,EDI                         ; 005c9b08
    LEA EDI,[ESP + 0x118]               ; 005c9b0a
    FXCH ST2                            ; 005c9b11
    FSTP double ptr [ESP + 0x40]        ; 005c9b13
    FSTP double ptr [ESP + 0x48]        ; 005c9b17
    FSTP double ptr [ESP + 0x50]        ; 005c9b1b
    MOVSD.REP ES:EDI,ESI                ; 005c9b1f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005c9b21
    LEA EAX,[EDX + 0x10]                ; 005c9b24
    FLD double ptr [ECX]                ; 005c9b27
    FMUL double ptr [EAX]               ; 005c9b29
    FLD double ptr [ECX + 0x8]          ; 005c9b2b
    FMUL double ptr [EAX + 0x8]         ; 005c9b2e
    FLD double ptr [ECX + 0x10]         ; 005c9b31
    FMUL double ptr [EAX + 0x10]        ; 005c9b34
    LEA EDI,[ESP + 0xb8]                ; 005c9b37
    LEA ESI,[ESP + 0x88]                ; 005c9b3e
    MOV ECX,0x6                         ; 005c9b45
    FXCH ST2                            ; 005c9b4a
    FSTP double ptr [ESP + 0x88]        ; 005c9b4c
    FSTP double ptr [ESP + 0x90]        ; 005c9b53
    FSTP double ptr [ESP + 0x98]        ; 005c9b5a
    MOVSD.REP ES:EDI,ESI                ; 005c9b61
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005c9b63
    LEA EAX,[EDX + 0x28]                ; 005c9b66
    FLD double ptr [ECX]                ; 005c9b69
    FMUL double ptr [EAX]               ; 005c9b6b
    FLD double ptr [ESP + 0x118]        ; 005c9b6d
    FADD double ptr [ESP + 0x120]       ; 005c9b74
    FLD double ptr [ECX + 0x8]          ; 005c9b7b
    FMUL double ptr [EAX + 0x8]         ; 005c9b7e
    FXCH                                ; 005c9b81
    FADD double ptr [ESP + 0x128]       ; 005c9b83
    FLD double ptr [ECX + 0x10]         ; 005c9b8a
    FMUL double ptr [EAX + 0x10]        ; 005c9b8d
    FXCH                                ; 005c9b90
    FCHS                                ; 005c9b92
    FLD double ptr [ESP + 0xb8]         ; 005c9b94
    LEA EDI,[ESP + 0x58]                ; 005c9b9b
    LEA ESI,[ESP + 0x100]               ; 005c9b9f
    FADD double ptr [ESP + 0xc0]        ; 005c9ba6
    MOV ECX,0x6                         ; 005c9bad
    FXCH ST4                            ; 005c9bb2
    FSTP double ptr [ESP + 0x100]       ; 005c9bb4
    FXCH ST2                            ; 005c9bbb
    FSTP double ptr [ESP + 0x108]       ; 005c9bbd
    FSTP double ptr [ESP + 0x110]       ; 005c9bc4
    MOVSD.REP ES:EDI,ESI                ; 005c9bcb
    FXCH                                ; 005c9bcd
    FADD double ptr [ESP + 0xc8]        ; 005c9bcf
    FLD double ptr [ESP + 0x58]         ; 005c9bd6
    FADD double ptr [ESP + 0x60]        ; 005c9bda
    FXCH                                ; 005c9bde
    FADD ST0,ST2                        ; 005c9be0
    FXCH                                ; 005c9be2
    FADD double ptr [ESP + 0x68]        ; 005c9be4
    FXCH                                ; 005c9be8
    FSTP double ptr [ESP + 0x8]         ; 005c9bea
    FADDP                               ; 005c9bee
    FLD double ptr [ESP + 0x8]          ; 005c9bf0
    FXCH                                ; 005c9bf4
    FSTP double ptr [ESP]               ; 005c9bf6
    FCOMP double ptr [0x00654242]       ; 005c9bf9 | DOUBLE_00654242
    FNSTSW AX                           ; 005c9bff
    SAHF                                ; 005c9c01
    JNC 0x005c9c1d                      ; 005c9c02
        ;   XREF to: 005c9c1d (CONDITIONAL_JUMP)  ; LAB_005c9c1d
    FLD double ptr [ESP + 0x8]          ; 005c9c04
    FCOMP double ptr [0x0065424a]       ; 005c9c08 | DOUBLE_0065424a
    FNSTSW AX                           ; 005c9c0e
    SAHF                                ; 005c9c10
    JBE 0x005c9c1d                      ; 005c9c11
        ;   XREF to: 005c9c1d (CONDITIONAL_JUMP)  ; LAB_005c9c1d
    XOR EAX,EAX                         ; 005c9c13
    MOV dword ptr [ESP + 0x8],EAX       ; 005c9c15
    MOV dword ptr [ESP + 0xc],EAX       ; 005c9c19
    FLD double ptr [ESP]                ; 005c9c1d
        ;   Label: LAB_005c9c1d
    FCOMP double ptr [0x00654242]       ; 005c9c20 | DOUBLE_00654242
    FNSTSW AX                           ; 005c9c26
    SAHF                                ; 005c9c28
    JNC 0x005c9c42                      ; 005c9c29
        ;   XREF to: 005c9c42 (CONDITIONAL_JUMP)  ; LAB_005c9c42
    FLD double ptr [ESP]                ; 005c9c2b
    FCOMP double ptr [0x0065424a]       ; 005c9c2e | DOUBLE_0065424a
    FNSTSW AX                           ; 005c9c34
    SAHF                                ; 005c9c36
    JBE 0x005c9c42                      ; 005c9c37
        ;   XREF to: 005c9c42 (CONDITIONAL_JUMP)  ; LAB_005c9c42
    XOR ESI,ESI                         ; 005c9c39
    MOV dword ptr [ESP],ESI             ; 005c9c3b
    MOV dword ptr [ESP + 0x4],ESI       ; 005c9c3e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c9c42
        ;   Label: LAB_005c9c42
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c9c46
    TEST EAX,0x7fffffff                 ; 005c9c4a
    JNZ 0x005c9c9d                      ; 005c9c4f
        ;   XREF to: 005c9c9d (CONDITIONAL_JUMP)  ; LAB_005c9c9d
    TEST ECX,ECX                        ; 005c9c51
    JNZ 0x005c9c9d                      ; 005c9c53
        ;   XREF to: 005c9c9d (CONDITIONAL_JUMP)  ; LAB_005c9c9d
    MOV ESI,dword ptr [ESP + 0x4]       ; 005c9c55
    MOV EDI,dword ptr [ESP]             ; 005c9c59
    TEST ESI,0x7fffffff                 ; 005c9c5c
    JNZ 0x005c9c9d                      ; 005c9c62
        ;   XREF to: 005c9c9d (CONDITIONAL_JUMP)  ; LAB_005c9c9d
    TEST EDI,EDI                        ; 005c9c64
    JNZ 0x005c9c9d                      ; 005c9c66
        ;   XREF to: 005c9c9d (CONDITIONAL_JUMP)  ; LAB_005c9c9d
    MOV ESI,dword ptr [ESP + 0x1c4]     ; 005c9c68
        ;   Label: LAB_005c9c68
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 005c9c6f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c9c76
    ADD ESI,0x60                        ; 005c9c79
    INC EDI                             ; 005c9c7c
    MOV ECX,dword ptr [EDX + 0x2c]      ; 005c9c7d
    MOV dword ptr [ESP + 0x1c4],ESI     ; 005c9c80
    MOV dword ptr [ESP + 0x1b8],EDI     ; 005c9c87
    CMP EDI,ECX                         ; 005c9c8e
    JC 0x005c9ad0                       ; 005c9c90
        ;   XREF to: 005c9ad0 (CONDITIONAL_JUMP)  ; LAB_005c9ad0
    MOV ESP,EBP                         ; 005c9c96
        ;   Label: LAB_005c9c96
    POP EBP                             ; 005c9c98
    POP EDI                             ; 005c9c99
    POP ESI                             ; 005c9c9a
    POP EBX                             ; 005c9c9b
    RET                                 ; 005c9c9c
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c9c9d
        ;   Label: LAB_005c9c9d
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c9ca1
    TEST EAX,0x7fffffff                 ; 005c9ca5
    JNZ 0x005c9f6e                      ; 005c9caa
        ;   XREF to: 005c9f6e (CONDITIONAL_JUMP)  ; LAB_005c9f6e
    TEST ECX,ECX                        ; 005c9cb0
    JNZ 0x005c9f6e                      ; 005c9cb2
        ;   XREF to: 005c9f6e (CONDITIONAL_JUMP)  ; LAB_005c9f6e
    XOR EAX,EAX                         ; 005c9cb8
    MOV ESI,dword ptr [ESP + 0x4]       ; 005c9cba
        ;   Label: LAB_005c9cba
    MOV EDI,dword ptr [ESP]             ; 005c9cbe
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005c9cc1
    TEST ESI,0x7fffffff                 ; 005c9cc8
    JNZ 0x005c9f8d                      ; 005c9cce
        ;   XREF to: 005c9f8d (CONDITIONAL_JUMP)  ; LAB_005c9f8d
    TEST EDI,EDI                        ; 005c9cd4
    JNZ 0x005c9f8d                      ; 005c9cd6
        ;   XREF to: 005c9f8d (CONDITIONAL_JUMP)  ; LAB_005c9f8d
    XOR EAX,EAX                         ; 005c9cdc
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005c9cde
        ;   Label: LAB_005c9cde
    FLD double ptr [ESP + 0x8]          ; 005c9ce5
    FLD double ptr [ESP]                ; 005c9ce9
    FSUB ST0,ST1                        ; 005c9cec
    FDIVP                               ; 005c9cee
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 005c9cf0
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005c9cf7
    LEA EAX,[EDX + 0x10]                ; 005c9cfe
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005c9d01
    LEA EAX,[EDX + 0x28]                ; 005c9d08
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005c9d0b
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005c9d12
    FLD double ptr [EAX]                ; 005c9d19
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005c9d1b
    FSUB double ptr [EAX]               ; 005c9d22
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005c9d24
    FLD double ptr [EAX + 0x8]          ; 005c9d2b
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005c9d2e
    MOV ECX,0x6                         ; 005c9d35
    FSUB double ptr [EAX + 0x8]         ; 005c9d3a
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005c9d3d
    LEA EDI,[ESP + 0x28]                ; 005c9d44
    LEA ESI,[ESP + 0x10]                ; 005c9d48
    FLD double ptr [EAX + 0x10]         ; 005c9d4c
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005c9d4f
    FXCH ST2                            ; 005c9d56
    FSTP double ptr [ESP + 0x10]        ; 005c9d58
    FXCH                                ; 005c9d5c
    FSUB double ptr [EAX + 0x10]        ; 005c9d5e
    FXCH                                ; 005c9d61
    FSTP double ptr [ESP + 0x18]        ; 005c9d63
    FSTP double ptr [ESP + 0x20]        ; 005c9d67
    MOVSD.REP ES:EDI,ESI                ; 005c9d6b
    FLD double ptr [ESP + 0x28]         ; 005c9d6d
    FMUL ST1                            ; 005c9d71
    FLD double ptr [ESP + 0x30]         ; 005c9d73
    FMUL ST2                            ; 005c9d77
    FLD double ptr [ESP + 0x38]         ; 005c9d79
    FMUL ST3                            ; 005c9d7d
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005c9d7f
    MOV ECX,0x6                         ; 005c9d86
    LEA EDI,[ESP + 0xa0]                ; 005c9d8b
    LEA ESI,[ESP + 0xd0]                ; 005c9d92
    FXCH ST2                            ; 005c9d99
    FSTP double ptr [ESP + 0xd0]        ; 005c9d9b
    FSTP double ptr [ESP + 0xd8]        ; 005c9da2
    FSTP double ptr [ESP + 0xe0]        ; 005c9da9
    MOVSD.REP ES:EDI,ESI                ; 005c9db0
    FLD double ptr [EAX]                ; 005c9db2
    FLD double ptr [EAX + 0x8]          ; 005c9db4
    FLD double ptr [EAX + 0x10]         ; 005c9db7
    MOV ECX,0x6                         ; 005c9dba
    LEA EDI,[ESP + 0xe8]                ; 005c9dbf
    LEA ESI,[ESP + 0x70]                ; 005c9dc6
    FXCH ST2                            ; 005c9dca
    FADD double ptr [ESP + 0xa0]        ; 005c9dcc
    FXCH                                ; 005c9dd3
    FADD double ptr [ESP + 0xa8]        ; 005c9dd5
    FXCH ST2                            ; 005c9ddc
    FADD double ptr [ESP + 0xb0]        ; 005c9dde
    FXCH                                ; 005c9de5
    FSTP double ptr [ESP + 0x70]        ; 005c9de7
    FXCH                                ; 005c9deb
    FSTP double ptr [ESP + 0x78]        ; 005c9ded
    FSTP double ptr [ESP + 0x80]        ; 005c9df1
    MOVSD.REP ES:EDI,ESI                ; 005c9df8
    LEA ECX,[EDX + 0x40]                ; 005c9dfa
    LEA EDI,[ESP + 0x180]               ; 005c9dfd
    LEA ESI,[ESP + 0x150]               ; 005c9e04
    FLD double ptr [ECX]                ; 005c9e0b
    LEA EAX,[EDX + 0x50]                ; 005c9e0d
    FLD double ptr [ECX + 0x8]          ; 005c9e10
    FXCH                                ; 005c9e13
    FSUB double ptr [EAX]               ; 005c9e15
    FXCH                                ; 005c9e17
    FSUB double ptr [EAX + 0x8]         ; 005c9e19
    FXCH                                ; 005c9e1c
    FSTP double ptr [ESP + 0x150]       ; 005c9e1e
    FSTP double ptr [ESP + 0x158]       ; 005c9e25
    JMP 0x00608ab4                      ; 005c9e2c
        ;   XREF to: 00608ab4 (UNCONDITIONAL_JUMP)  ; LAB_00608ab4
    FMUL ST1                            ; 005c9e37
        ;   Label: LAB_005c9e37
    FLD double ptr [ESP + 0x188]        ; 005c9e39
    FMULP ST2                           ; 005c9e40
    LEA EDI,[ESP + 0x140]               ; 005c9e42
    LEA ESI,[ESP + 0x170]               ; 005c9e49
    FSTP double ptr [ESP + 0x170]       ; 005c9e50
    FSTP double ptr [ESP + 0x178]       ; 005c9e57
    JMP 0x00608adc                      ; 005c9e5e
        ;   XREF to: 00608adc (UNCONDITIONAL_JUMP)  ; LAB_00608adc
    FLD double ptr [ECX + 0x8]          ; 005c9e64
        ;   Label: LAB_005c9e64
    LEA EDI,[ESP + 0x130]               ; 005c9e67
    LEA ESI,[ESP + 0x160]               ; 005c9e6e
    FXCH                                ; 005c9e75
    FADD double ptr [ESP + 0x140]       ; 005c9e77
    FXCH                                ; 005c9e7e
    FADD double ptr [ESP + 0x148]       ; 005c9e80
    FXCH                                ; 005c9e87
    FSTP double ptr [ESP + 0x160]       ; 005c9e89
    FSTP double ptr [ESP + 0x168]       ; 005c9e90
    JMP 0x00608aff                      ; 005c9e97
        ;   XREF to: 00608aff (UNCONDITIONAL_JUMP)  ; LAB_00608aff
    MOV dword ptr [ESP + 0x1a0],EAX     ; 005c9ea2
        ;   Label: LAB_005c9ea2
    CMP ESI,0x1                         ; 005c9ea9
    JZ 0x005c9fab                       ; 005c9eac
        ;   XREF to: 005c9fab (CONDITIONAL_JUMP)  ; LAB_005c9fab
    CMP dword ptr [ESP + 0x1bc],0x1     ; 005c9eb2
    JZ 0x005c9fab                       ; 005c9eba
        ;   XREF to: 005c9fab (CONDITIONAL_JUMP)  ; LAB_005c9fab
    IMUL EAX,dword ptr [EBX],0x60       ; 005c9ec0
    MOV EDI,dword ptr [EBP + 0x20]      ; 005c9ec3
    ADD EAX,EDI                         ; 005c9ec6
    MOV ESI,dword ptr [EDX]             ; 005c9ec8
    MOV dword ptr [EAX],ESI             ; 005c9eca
    MOV ESI,dword ptr [EDX + 0x4]       ; 005c9ecc
    MOV dword ptr [EAX + 0x4],ESI       ; 005c9ecf
    MOV ESI,dword ptr [EDX + 0x8]       ; 005c9ed2
    MOV dword ptr [EAX + 0x8],ESI       ; 005c9ed5
    MOV EDX,dword ptr [EDX + 0xc]       ; 005c9ed8
    MOV ESI,dword ptr [ESP + 0x1b4]     ; 005c9edb
    MOV dword ptr [EAX + 0xc],EDX       ; 005c9ee2
    LEA EDX,[EAX + 0x10]                ; 005c9ee5
    FLD double ptr [ESI]                ; 005c9ee8
    FSTP double ptr [EDX]               ; 005c9eea
    FLD double ptr [ESI + 0x8]          ; 005c9eec
    FSTP double ptr [EDX + 0x8]         ; 005c9eef
    FLD double ptr [ESI + 0x10]         ; 005c9ef2
    MOV ESI,dword ptr [ESP + 0x1c0]     ; 005c9ef5
    FSTP double ptr [EDX + 0x10]        ; 005c9efc
    LEA EDX,[EAX + 0x28]                ; 005c9eff
    FLD double ptr [ESI]                ; 005c9f02
    FSTP double ptr [EDX]               ; 005c9f04
    FLD double ptr [ESI + 0x8]          ; 005c9f06
    FSTP double ptr [EDX + 0x8]         ; 005c9f09
    FLD double ptr [ESI + 0x10]         ; 005c9f0c
    FSTP double ptr [EDX + 0x10]        ; 005c9f0f
    LEA EDX,[EAX + 0x40]                ; 005c9f12
    MOV ESI,dword ptr [ECX]             ; 005c9f15
    MOV dword ptr [EDX],ESI             ; 005c9f17
    MOV ESI,dword ptr [ECX + 0x4]       ; 005c9f19
    MOV dword ptr [EDX + 0x4],ESI       ; 005c9f1c
    MOV ESI,dword ptr [ECX + 0x8]       ; 005c9f1f
    MOV dword ptr [EDX + 0x8],ESI       ; 005c9f22
    MOV ESI,dword ptr [ECX + 0xc]       ; 005c9f25
    MOV dword ptr [EDX + 0xc],ESI       ; 005c9f28
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 005c9f2b
    MOV ECX,dword ptr [EDX]             ; 005c9f32
    MOV dword ptr [EAX + 0x50],ECX      ; 005c9f34
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c9f37
    MOV dword ptr [EAX + 0x54],ECX      ; 005c9f3a
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c9f3d
    MOV dword ptr [EAX + 0x58],ECX      ; 005c9f40
    MOV ECX,dword ptr [EDX + 0xc]       ; 005c9f43
    MOV dword ptr [EAX + 0x5c],ECX      ; 005c9f46
    IMUL EAX,dword ptr [EBX],0x60       ; 005c9f49
    ADD EAX,EDI                         ; 005c9f4c
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 005c9f4e
    MOV dword ptr [EAX + 0x8],EDX       ; 005c9f55
    IMUL EAX,dword ptr [EBX],0x60       ; 005c9f58
    ADD EAX,EDI                         ; 005c9f5b
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 005c9f5d
    MOV dword ptr [EAX + 0xc],EDX       ; 005c9f64
    INC dword ptr [EBX]                 ; 005c9f67
    JMP 0x005c9c68                      ; 005c9f69
        ;   XREF to: 005c9c68 (UNCONDITIONAL_JUMP)  ; LAB_005c9c68
    FLDZ                                ; 005c9f6e
        ;   Label: LAB_005c9f6e
    FCOMP double ptr [ESP + 0x8]        ; 005c9f70
    FNSTSW AX                           ; 005c9f74
    SAHF                                ; 005c9f76
    JBE 0x005c9f83                      ; 005c9f77
        ;   XREF to: 005c9f83 (CONDITIONAL_JUMP)  ; LAB_005c9f83
    MOV EAX,0xffffffff                  ; 005c9f79
    JMP 0x005c9cba                      ; 005c9f7e
        ;   XREF to: 005c9cba (UNCONDITIONAL_JUMP)  ; LAB_005c9cba
    MOV EAX,0x1                         ; 005c9f83
        ;   Label: LAB_005c9f83
    JMP 0x005c9cba                      ; 005c9f88
        ;   XREF to: 005c9cba (UNCONDITIONAL_JUMP)  ; LAB_005c9cba
    FLDZ                                ; 005c9f8d
        ;   Label: LAB_005c9f8d
    FCOMP double ptr [ESP]              ; 005c9f8f
    FNSTSW AX                           ; 005c9f92
    SAHF                                ; 005c9f94
    JBE 0x005c9fa1                      ; 005c9f95
        ;   XREF to: 005c9fa1 (CONDITIONAL_JUMP)  ; LAB_005c9fa1
    MOV EAX,0xffffffff                  ; 005c9f97
    JMP 0x005c9cde                      ; 005c9f9c
        ;   XREF to: 005c9cde (UNCONDITIONAL_JUMP)  ; LAB_005c9cde
    MOV EAX,0x1                         ; 005c9fa1
        ;   Label: LAB_005c9fa1
    JMP 0x005c9cde                      ; 005c9fa6
        ;   XREF to: 005c9cde (UNCONDITIONAL_JUMP)  ; LAB_005c9cde
    CMP dword ptr [ESP + 0x1a4],-0x1    ; 005c9fab
        ;   Label: LAB_005c9fab
    JZ 0x005ca06a                       ; 005c9fb3
        ;   XREF to: 005ca06a (CONDITIONAL_JUMP)  ; LAB_005ca06a
    CMP dword ptr [ESP + 0x1b0],-0x1    ; 005c9fb9
    JZ 0x005ca06a                       ; 005c9fc1
        ;   XREF to: 005ca06a (CONDITIONAL_JUMP)  ; LAB_005ca06a
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005c9fc7
    IMUL EAX,dword ptr [EAX],0x60       ; 005c9fca
    MOV EDI,dword ptr [EBP + 0x24]      ; 005c9fcd
    ADD EAX,EDI                         ; 005c9fd0
    MOV ECX,dword ptr [EDX]             ; 005c9fd2
    MOV dword ptr [EAX],ECX             ; 005c9fd4
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c9fd6
    MOV dword ptr [EAX + 0x4],ECX       ; 005c9fd9
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c9fdc
    MOV dword ptr [EAX + 0x8],ECX       ; 005c9fdf
    MOV ECX,dword ptr [EDX + 0xc]       ; 005c9fe2
    MOV dword ptr [EAX + 0xc],ECX       ; 005c9fe5
    LEA ECX,[EDX + 0x10]                ; 005c9fe8
    LEA ESI,[EAX + 0x10]                ; 005c9feb
    FLD double ptr [ECX]                ; 005c9fee
    FSTP double ptr [ESI]               ; 005c9ff0
    FLD double ptr [ECX + 0x8]          ; 005c9ff2
    FSTP double ptr [ESI + 0x8]         ; 005c9ff5
    FLD double ptr [ECX + 0x10]         ; 005c9ff8
    FSTP double ptr [ESI + 0x10]        ; 005c9ffb
    LEA ESI,[EDX + 0x28]                ; 005c9ffe
    LEA ECX,[EAX + 0x28]                ; 005ca001
    FLD double ptr [ESI]                ; 005ca004
    FSTP double ptr [ECX]               ; 005ca006
    FLD double ptr [ESI + 0x8]          ; 005ca008
    FSTP double ptr [ECX + 0x8]         ; 005ca00b
    FLD double ptr [ESI + 0x10]         ; 005ca00e
    LEA ESI,[EDX + 0x40]                ; 005ca011
    FSTP double ptr [ECX + 0x10]        ; 005ca014
    LEA ECX,[EAX + 0x40]                ; 005ca017
    FLD double ptr [ESI]                ; 005ca01a
    FSTP double ptr [ECX]               ; 005ca01c
    FLD double ptr [ESI + 0x8]          ; 005ca01e
    FSTP double ptr [ECX + 0x8]         ; 005ca021
    MOV ECX,dword ptr [EDX + 0x50]      ; 005ca024
    MOV dword ptr [EAX + 0x50],ECX      ; 005ca027
    MOV ECX,dword ptr [EDX + 0x54]      ; 005ca02a
    MOV dword ptr [EAX + 0x54],ECX      ; 005ca02d
    MOV ECX,dword ptr [EDX + 0x58]      ; 005ca030
    MOV dword ptr [EAX + 0x58],ECX      ; 005ca033
    MOV ECX,dword ptr [EDX + 0x5c]      ; 005ca036
    MOV dword ptr [EAX + 0x5c],ECX      ; 005ca039
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca03c
    IMUL EAX,dword ptr [EAX],0x60       ; 005ca03f
    ADD EAX,EDI                         ; 005ca042
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 005ca044
    MOV dword ptr [EAX + 0x8],EDX       ; 005ca04b
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca04e
    IMUL EAX,dword ptr [EAX],0x60       ; 005ca051
    ADD EAX,EDI                         ; 005ca054
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 005ca056
    MOV dword ptr [EAX + 0xc],EDX       ; 005ca05d
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca060
    INC dword ptr [EAX]                 ; 005ca063
    JMP 0x005c9c68                      ; 005ca065
        ;   XREF to: 005c9c68 (UNCONDITIONAL_JUMP)  ; LAB_005c9c68
    LEA EAX,[EDX + 0x50]                ; 005ca06a
        ;   Label: LAB_005ca06a
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005ca06d
    LEA EAX,[EDX + 0x40]                ; 005ca074
    MOV EDI,dword ptr [ESP + 0x1a4]     ; 005ca077
    LEA ESI,[EDX + 0x28]                ; 005ca07e
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005ca081
    LEA ECX,[EDX + 0x10]                ; 005ca088
    CMP EDI,-0x1                        ; 005ca08b
    JNZ 0x005ca300                      ; 005ca08e
        ;   XREF to: 005ca300 (CONDITIONAL_JUMP)  ; LAB_005ca300
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca094
    ADD EAX,dword ptr [EBP + 0x20]      ; 005ca097
    MOV EDI,dword ptr [EDX]             ; 005ca09a
    MOV dword ptr [EAX],EDI             ; 005ca09c
    MOV EDI,dword ptr [EDX + 0x4]       ; 005ca09e
    MOV dword ptr [EAX + 0x4],EDI       ; 005ca0a1
    MOV EDI,dword ptr [EDX + 0x8]       ; 005ca0a4
    MOV dword ptr [EAX + 0x8],EDI       ; 005ca0a7
    MOV EDI,dword ptr [EDX + 0xc]       ; 005ca0aa
    MOV dword ptr [EAX + 0xc],EDI       ; 005ca0ad
    LEA EDI,[EAX + 0x10]                ; 005ca0b0
    FLD double ptr [ECX]                ; 005ca0b3
    FSTP double ptr [EDI]               ; 005ca0b5
    FLD double ptr [ECX + 0x8]          ; 005ca0b7
    FSTP double ptr [EDI + 0x8]         ; 005ca0ba
    FLD double ptr [ECX + 0x10]         ; 005ca0bd
    FSTP double ptr [EDI + 0x10]        ; 005ca0c0
    LEA EDI,[EAX + 0x28]                ; 005ca0c3
    FLD double ptr [ESI]                ; 005ca0c6
    FSTP double ptr [EDI]               ; 005ca0c8
    FLD double ptr [ESI + 0x8]          ; 005ca0ca
    FSTP double ptr [EDI + 0x8]         ; 005ca0cd
    FLD double ptr [ESI + 0x10]         ; 005ca0d0
    FSTP double ptr [EDI + 0x10]        ; 005ca0d3
    LEA EDI,[EAX + 0x40]                ; 005ca0d6
    MOV dword ptr [ESP + 0x1c8],EDI     ; 005ca0d9
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 005ca0e0
    FLD double ptr [EDI]                ; 005ca0e7
    MOV EDI,dword ptr [ESP + 0x1c8]     ; 005ca0e9
    FSTP double ptr [EDI]               ; 005ca0f0
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 005ca0f2
    FLD double ptr [EDI + 0x8]          ; 005ca0f9
    MOV EDI,dword ptr [ESP + 0x1c8]     ; 005ca0fc
    FSTP double ptr [EDI + 0x8]         ; 005ca103
    MOV EDI,dword ptr [ESP + 0x1ac]     ; 005ca106
    FLD double ptr [EDI]                ; 005ca10d
    FSTP double ptr [EAX + 0x50]        ; 005ca10f
    FLD double ptr [EDI + 0x8]          ; 005ca112
    FSTP double ptr [EAX + 0x58]        ; 005ca115
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca118
    ADD EAX,dword ptr [EBP + 0x20]      ; 005ca11b
    LEA EDI,[EAX + 0x28]                ; 005ca11e
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005ca121
    MOV dword ptr [EDI],EAX             ; 005ca128
    MOV EAX,dword ptr [ESP + 0xec]      ; 005ca12a
    MOV dword ptr [EDI + 0x4],EAX       ; 005ca131
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005ca134
    MOV dword ptr [EDI + 0x8],EAX       ; 005ca13b
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ca13e
    MOV dword ptr [EDI + 0xc],EAX       ; 005ca145
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ca148
    MOV dword ptr [EDI + 0x10],EAX      ; 005ca14f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005ca152
    MOV dword ptr [EDI + 0x14],EAX      ; 005ca159
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca15c
    ADD EAX,dword ptr [EBP + 0x20]      ; 005ca15f
    LEA EDI,[EAX + 0x50]                ; 005ca162
    MOV EAX,dword ptr [ESP + 0x130]     ; 005ca165
    MOV dword ptr [EDI],EAX             ; 005ca16c
    MOV EAX,dword ptr [ESP + 0x134]     ; 005ca16e
    MOV dword ptr [EDI + 0x4],EAX       ; 005ca175
    MOV EAX,dword ptr [ESP + 0x138]     ; 005ca178
    MOV dword ptr [EDI + 0x8],EAX       ; 005ca17f
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005ca182
    MOV dword ptr [EDI + 0xc],EAX       ; 005ca189
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca18c
    ADD EAX,dword ptr [EBP + 0x20]      ; 005ca18f
    MOV dword ptr [EAX + 0x8],0xffffffff ; 005ca192
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca199
    ADD EAX,dword ptr [EBP + 0x20]      ; 005ca19c
    MOV dword ptr [EAX + 0xc],0x0       ; 005ca19f
    INC dword ptr [EBX]                 ; 005ca1a6
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca1a8
    MOV EDI,dword ptr [EAX]             ; 005ca1ab
    IMUL EAX,EDI,0x60                   ; 005ca1ad
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005ca1b0
    MOV EAX,dword ptr [EBP + 0x24]      ; 005ca1b7
    ADD EAX,dword ptr [ESP + 0x1c8]     ; 005ca1ba
    MOV EDI,dword ptr [EDX]             ; 005ca1c1
    MOV dword ptr [EAX],EDI             ; 005ca1c3
    MOV EDI,dword ptr [EDX + 0x4]       ; 005ca1c5
    MOV dword ptr [EAX + 0x4],EDI       ; 005ca1c8
    MOV EDI,dword ptr [EDX + 0x8]       ; 005ca1cb
    MOV dword ptr [EAX + 0x8],EDI       ; 005ca1ce
    MOV EDX,dword ptr [EDX + 0xc]       ; 005ca1d1
    MOV dword ptr [EAX + 0xc],EDX       ; 005ca1d4
    LEA EDX,[EAX + 0x10]                ; 005ca1d7
    MOV EDI,dword ptr [ECX]             ; 005ca1da
    MOV dword ptr [EDX],EDI             ; 005ca1dc
    MOV EDI,dword ptr [ECX + 0x4]       ; 005ca1de
    MOV dword ptr [EDX + 0x4],EDI       ; 005ca1e1
    MOV EDI,dword ptr [ECX + 0x8]       ; 005ca1e4
    MOV dword ptr [EDX + 0x8],EDI       ; 005ca1e7
    MOV EDI,dword ptr [ECX + 0xc]       ; 005ca1ea
    MOV dword ptr [EDX + 0xc],EDI       ; 005ca1ed
    MOV EDI,dword ptr [ECX + 0x10]      ; 005ca1f0
    MOV dword ptr [EDX + 0x10],EDI      ; 005ca1f3
    MOV EDI,dword ptr [ECX + 0x14]      ; 005ca1f6
    MOV dword ptr [EDX + 0x14],EDI      ; 005ca1f9
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 005ca1fc
    LEA EDX,[EAX + 0x28]                ; 005ca203
    MOV EDI,dword ptr [ESI]             ; 005ca206
    MOV dword ptr [EDX],EDI             ; 005ca208
    MOV EDI,dword ptr [ESI + 0x4]       ; 005ca20a
    MOV dword ptr [EDX + 0x4],EDI       ; 005ca20d
    MOV EDI,dword ptr [ESI + 0x8]       ; 005ca210
    MOV dword ptr [EDX + 0x8],EDI       ; 005ca213
    MOV EDI,dword ptr [ESI + 0xc]       ; 005ca216
    MOV dword ptr [EDX + 0xc],EDI       ; 005ca219
    MOV EDI,dword ptr [ESI + 0x10]      ; 005ca21c
    MOV dword ptr [EDX + 0x10],EDI      ; 005ca21f
    MOV EDI,dword ptr [ESI + 0x14]      ; 005ca222
    MOV dword ptr [EDX + 0x14],EDI      ; 005ca225
    LEA EDX,[EAX + 0x40]                ; 005ca228
    MOV ESI,dword ptr [ECX]             ; 005ca22b
    MOV dword ptr [EDX],ESI             ; 005ca22d
    MOV ESI,dword ptr [ECX + 0x4]       ; 005ca22f
    MOV dword ptr [EDX + 0x4],ESI       ; 005ca232
    MOV ESI,dword ptr [ECX + 0x8]       ; 005ca235
    MOV dword ptr [EDX + 0x8],ESI       ; 005ca238
    MOV ESI,dword ptr [ECX + 0xc]       ; 005ca23b
    MOV dword ptr [EDX + 0xc],ESI       ; 005ca23e
    MOV EDX,dword ptr [ESP + 0x1ac]     ; 005ca241
    MOV ECX,dword ptr [EDX]             ; 005ca248
    MOV dword ptr [EAX + 0x50],ECX      ; 005ca24a
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ca24d
    MOV dword ptr [EAX + 0x54],ECX      ; 005ca250
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ca253
    MOV dword ptr [EAX + 0x58],ECX      ; 005ca256
    MOV ECX,dword ptr [EDX + 0xc]       ; 005ca259
    MOV dword ptr [EAX + 0x5c],ECX      ; 005ca25c
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca25f
    IMUL EDX,dword ptr [EAX],0x60       ; 005ca262
    MOV ESI,dword ptr [EBP + 0x24]      ; 005ca265
    ADD EDX,ESI                         ; 005ca268
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005ca26a
    MOV dword ptr [EDX + 0x10],EAX      ; 005ca271
    MOV EAX,dword ptr [ESP + 0xec]      ; 005ca274
    MOV dword ptr [EDX + 0x14],EAX      ; 005ca27b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005ca27e
    MOV dword ptr [EDX + 0x18],EAX      ; 005ca285
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ca288
    MOV dword ptr [EDX + 0x1c],EAX      ; 005ca28f
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ca292
    MOV dword ptr [EDX + 0x20],EAX      ; 005ca299
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005ca29c
    MOV dword ptr [EDX + 0x24],EAX      ; 005ca2a3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca2a6
    IMUL EAX,dword ptr [EAX],0x60       ; 005ca2a9
    ADD EAX,ESI                         ; 005ca2ac
    LEA EDX,[EAX + 0x40]                ; 005ca2ae
    MOV EAX,dword ptr [ESP + 0x130]     ; 005ca2b1
    MOV dword ptr [EDX],EAX             ; 005ca2b8
    MOV EAX,dword ptr [ESP + 0x134]     ; 005ca2ba
    MOV dword ptr [EDX + 0x4],EAX       ; 005ca2c1
    MOV EAX,dword ptr [ESP + 0x138]     ; 005ca2c4
    MOV dword ptr [EDX + 0x8],EAX       ; 005ca2cb
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005ca2ce
    MOV dword ptr [EDX + 0xc],EAX       ; 005ca2d5
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca2d8
    IMUL EAX,dword ptr [EAX],0x60       ; 005ca2db
    ADD EAX,ESI                         ; 005ca2de
    MOV dword ptr [EAX + 0x8],0x0       ; 005ca2e0
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca2e7
    IMUL EAX,dword ptr [EAX],0x60       ; 005ca2ea
    ADD EAX,ESI                         ; 005ca2ed
    MOV dword ptr [EAX + 0xc],0x1       ; 005ca2ef
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca2f6
    INC dword ptr [EAX]                 ; 005ca2f9
    JMP 0x005c9c68                      ; 005ca2fb
        ;   XREF to: 005c9c68 (UNCONDITIONAL_JUMP)  ; LAB_005c9c68
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca300
        ;   Label: LAB_005ca300
    MOV EDI,dword ptr [EAX]             ; 005ca303
    IMUL EAX,EDI,0x60                   ; 005ca305
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005ca308
    MOV EAX,dword ptr [EBP + 0x24]      ; 005ca30f
    ADD EAX,dword ptr [ESP + 0x1c8]     ; 005ca312
    MOV EDI,dword ptr [EDX]             ; 005ca319
    MOV dword ptr [EAX],EDI             ; 005ca31b
    MOV EDI,dword ptr [EDX + 0x4]       ; 005ca31d
    MOV dword ptr [EAX + 0x4],EDI       ; 005ca320
    MOV EDI,dword ptr [EDX + 0x8]       ; 005ca323
    MOV dword ptr [EAX + 0x8],EDI       ; 005ca326
    MOV EDI,dword ptr [EDX + 0xc]       ; 005ca329
    MOV dword ptr [EAX + 0xc],EDI       ; 005ca32c
    LEA EDI,[EAX + 0x10]                ; 005ca32f
    FLD double ptr [ECX]                ; 005ca332
    FSTP double ptr [EDI]               ; 005ca334
    FLD double ptr [ECX + 0x8]          ; 005ca336
    FSTP double ptr [EDI + 0x8]         ; 005ca339
    FLD double ptr [ECX + 0x10]         ; 005ca33c
    FSTP double ptr [EDI + 0x10]        ; 005ca33f
    LEA EDI,[EAX + 0x28]                ; 005ca342
    FLD double ptr [ESI]                ; 005ca345
    FSTP double ptr [EDI]               ; 005ca347
    FLD double ptr [ESI + 0x8]          ; 005ca349
    FSTP double ptr [EDI + 0x8]         ; 005ca34c
    FLD double ptr [ESI + 0x10]         ; 005ca34f
    FSTP double ptr [EDI + 0x10]        ; 005ca352
    LEA EDI,[EAX + 0x40]                ; 005ca355
    MOV dword ptr [ESP + 0x1c8],EDI     ; 005ca358
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 005ca35f
    FLD double ptr [EDI]                ; 005ca366
    MOV EDI,dword ptr [ESP + 0x1c8]     ; 005ca368
    FSTP double ptr [EDI]               ; 005ca36f
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 005ca371
    FLD double ptr [EDI + 0x8]          ; 005ca378
    MOV EDI,dword ptr [ESP + 0x1c8]     ; 005ca37b
    FSTP double ptr [EDI + 0x8]         ; 005ca382
    MOV EDI,dword ptr [ESP + 0x1ac]     ; 005ca385
    FLD double ptr [EDI]                ; 005ca38c
    FSTP double ptr [EAX + 0x50]        ; 005ca38e
    FLD double ptr [EDI + 0x8]          ; 005ca391
    FSTP double ptr [EAX + 0x58]        ; 005ca394
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca397
    IMUL EAX,dword ptr [EAX],0x60       ; 005ca39a
    MOV EDI,dword ptr [EBP + 0x24]      ; 005ca39d
    ADD EDI,EAX                         ; 005ca3a0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005ca3a2
    MOV dword ptr [EDI + 0x28],EAX      ; 005ca3a9
    MOV EAX,dword ptr [ESP + 0xec]      ; 005ca3ac
    MOV dword ptr [EDI + 0x2c],EAX      ; 005ca3b3
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005ca3b6
    MOV dword ptr [EDI + 0x30],EAX      ; 005ca3bd
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ca3c0
    MOV dword ptr [EDI + 0x34],EAX      ; 005ca3c7
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ca3ca
    MOV dword ptr [EDI + 0x38],EAX      ; 005ca3d1
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005ca3d4
    MOV dword ptr [EDI + 0x3c],EAX      ; 005ca3db
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca3de
    IMUL EAX,dword ptr [EAX],0x60       ; 005ca3e1
    MOV EDI,dword ptr [EBP + 0x24]      ; 005ca3e4
    ADD EDI,EAX                         ; 005ca3e7
    MOV EAX,dword ptr [ESP + 0x130]     ; 005ca3e9
    MOV dword ptr [EDI + 0x50],EAX      ; 005ca3f0
    MOV EAX,dword ptr [ESP + 0x134]     ; 005ca3f3
    MOV dword ptr [EDI + 0x54],EAX      ; 005ca3fa
    MOV EAX,dword ptr [ESP + 0x138]     ; 005ca3fd
    MOV dword ptr [EDI + 0x58],EAX      ; 005ca404
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005ca407
    MOV dword ptr [EDI + 0x5c],EAX      ; 005ca40e
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca411
    MOV EDI,dword ptr [EAX]             ; 005ca414
    IMUL EAX,EDI,0x60                   ; 005ca416
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005ca419
    MOV EAX,dword ptr [EBP + 0x24]      ; 005ca420
    ADD EAX,dword ptr [ESP + 0x1c8]     ; 005ca423
    MOV dword ptr [EAX + 0x8],0x1       ; 005ca42a
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca431
    MOV EDI,dword ptr [EAX]             ; 005ca434
    IMUL EAX,EDI,0x60                   ; 005ca436
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005ca439
    MOV EAX,dword ptr [EBP + 0x24]      ; 005ca440
    ADD EAX,dword ptr [ESP + 0x1c8]     ; 005ca443
    MOV dword ptr [EAX + 0xc],0x0       ; 005ca44a
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005ca451
    INC dword ptr [EAX]                 ; 005ca454
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca456
    ADD EAX,dword ptr [EBP + 0x20]      ; 005ca459
    MOV EDI,dword ptr [EDX]             ; 005ca45c
    MOV dword ptr [EAX],EDI             ; 005ca45e
    MOV EDI,dword ptr [EDX + 0x4]       ; 005ca460
    MOV dword ptr [EAX + 0x4],EDI       ; 005ca463
    MOV EDI,dword ptr [EDX + 0x8]       ; 005ca466
    MOV dword ptr [EAX + 0x8],EDI       ; 005ca469
    MOV EDX,dword ptr [EDX + 0xc]       ; 005ca46c
    MOV dword ptr [EAX + 0xc],EDX       ; 005ca46f
    LEA EDX,[EAX + 0x10]                ; 005ca472
    MOV EDI,dword ptr [ECX]             ; 005ca475
    MOV dword ptr [EDX],EDI             ; 005ca477
    MOV EDI,dword ptr [ECX + 0x4]       ; 005ca479
    MOV dword ptr [EDX + 0x4],EDI       ; 005ca47c
    MOV EDI,dword ptr [ECX + 0x8]       ; 005ca47f
    MOV dword ptr [EDX + 0x8],EDI       ; 005ca482
    MOV EDI,dword ptr [ECX + 0xc]       ; 005ca485
    MOV dword ptr [EDX + 0xc],EDI       ; 005ca488
    MOV EDI,dword ptr [ECX + 0x10]      ; 005ca48b
    MOV dword ptr [EDX + 0x10],EDI      ; 005ca48e
    MOV EDI,dword ptr [ECX + 0x14]      ; 005ca491
    MOV dword ptr [EDX + 0x14],EDI      ; 005ca494
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 005ca497
    LEA EDX,[EAX + 0x28]                ; 005ca49e
    MOV EDI,dword ptr [ESI]             ; 005ca4a1
    MOV dword ptr [EDX],EDI             ; 005ca4a3
    MOV EDI,dword ptr [ESI + 0x4]       ; 005ca4a5
    MOV dword ptr [EDX + 0x4],EDI       ; 005ca4a8
    MOV EDI,dword ptr [ESI + 0x8]       ; 005ca4ab
    MOV dword ptr [EDX + 0x8],EDI       ; 005ca4ae
    MOV EDI,dword ptr [ESI + 0xc]       ; 005ca4b1
    MOV dword ptr [EDX + 0xc],EDI       ; 005ca4b4
    MOV EDI,dword ptr [ESI + 0x10]      ; 005ca4b7
    MOV dword ptr [EDX + 0x10],EDI      ; 005ca4ba
    MOV EDI,dword ptr [ESI + 0x14]      ; 005ca4bd
    MOV dword ptr [EDX + 0x14],EDI      ; 005ca4c0
    LEA EDX,[EAX + 0x40]                ; 005ca4c3
    MOV ESI,dword ptr [ECX]             ; 005ca4c6
    MOV dword ptr [EDX],ESI             ; 005ca4c8
    MOV ESI,dword ptr [ECX + 0x4]       ; 005ca4ca
    MOV dword ptr [EDX + 0x4],ESI       ; 005ca4cd
    MOV ESI,dword ptr [ECX + 0x8]       ; 005ca4d0
    MOV dword ptr [EDX + 0x8],ESI       ; 005ca4d3
    MOV ESI,dword ptr [ECX + 0xc]       ; 005ca4d6
    MOV dword ptr [EDX + 0xc],ESI       ; 005ca4d9
    MOV EDX,dword ptr [ESP + 0x1ac]     ; 005ca4dc
    MOV ECX,dword ptr [EDX]             ; 005ca4e3
    MOV dword ptr [EAX + 0x50],ECX      ; 005ca4e5
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ca4e8
    MOV dword ptr [EAX + 0x54],ECX      ; 005ca4eb
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ca4ee
    MOV dword ptr [EAX + 0x58],ECX      ; 005ca4f1
    MOV ECX,dword ptr [EDX + 0xc]       ; 005ca4f4
    MOV dword ptr [EAX + 0x5c],ECX      ; 005ca4f7
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca4fa
    MOV ECX,dword ptr [EBP + 0x20]      ; 005ca4fd
    ADD EAX,ECX                         ; 005ca500
    LEA EDX,[EAX + 0x10]                ; 005ca502
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005ca505
    MOV dword ptr [EDX],EAX             ; 005ca50c
    MOV EAX,dword ptr [ESP + 0xec]      ; 005ca50e
    MOV dword ptr [EDX + 0x4],EAX       ; 005ca515
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005ca518
    MOV dword ptr [EDX + 0x8],EAX       ; 005ca51f
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ca522
    MOV dword ptr [EDX + 0xc],EAX       ; 005ca529
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ca52c
    MOV dword ptr [EDX + 0x10],EAX      ; 005ca533
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005ca536
    MOV dword ptr [EDX + 0x14],EAX      ; 005ca53d
    IMUL EDX,dword ptr [EBX],0x60       ; 005ca540
    ADD EDX,ECX                         ; 005ca543
    ADD EDX,0x40                        ; 005ca545
    MOV EAX,dword ptr [ESP + 0x130]     ; 005ca548
    MOV dword ptr [EDX],EAX             ; 005ca54f
    MOV EAX,dword ptr [ESP + 0x134]     ; 005ca551
    MOV dword ptr [EDX + 0x4],EAX       ; 005ca558
    MOV EAX,dword ptr [ESP + 0x138]     ; 005ca55b
    MOV dword ptr [EDX + 0x8],EAX       ; 005ca562
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005ca565
    MOV dword ptr [EDX + 0xc],EAX       ; 005ca56c
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca56f
    ADD EAX,ECX                         ; 005ca572
    MOV dword ptr [EAX + 0x8],0x0       ; 005ca574
    IMUL EAX,dword ptr [EBX],0x60       ; 005ca57b
    ADD EAX,ECX                         ; 005ca57e
    MOV dword ptr [EAX + 0xc],0xffffffff ; 005ca580
    INC dword ptr [EBX]                 ; 005ca587
    JMP 0x005c9c68                      ; 005ca589
        ;   XREF to: 005c9c68 (UNCONDITIONAL_JUMP)  ; LAB_005c9c68
    MOV ECX,dword ptr [ESI]             ; 00608ab4
        ;   Label: LAB_00608ab4
    MOV dword ptr [EDI],ECX             ; 00608ab6
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608ab8
    MOV dword ptr [EDI + 0x4],ECX       ; 00608abb
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608abe
    MOV dword ptr [EDI + 0x8],ECX       ; 00608ac1
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608ac4
    MOV dword ptr [EDI + 0xc],ECX       ; 00608ac7
    ADD ESI,0x10                        ; 00608aca
    ADD EDI,0x10                        ; 00608acd
    FLD double ptr [ESP + 0x180]        ; 00608ad0
    JMP 0x005c9e37                      ; 00608ad7
        ;   XREF to: 005c9e37 (UNCONDITIONAL_JUMP)  ; LAB_005c9e37
    MOV ECX,dword ptr [ESI]             ; 00608adc
        ;   Label: LAB_00608adc
    MOV dword ptr [EDI],ECX             ; 00608ade
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608ae0
    MOV dword ptr [EDI + 0x4],ECX       ; 00608ae3
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608ae6
    MOV dword ptr [EDI + 0x8],ECX       ; 00608ae9
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608aec
    MOV dword ptr [EDI + 0xc],ECX       ; 00608aef
    ADD ESI,0x10                        ; 00608af2
    ADD EDI,0x10                        ; 00608af5
    FLD double ptr [ECX]                ; 00608af8
    JMP 0x005c9e64                      ; 00608afa
        ;   XREF to: 005c9e64 (UNCONDITIONAL_JUMP)  ; LAB_005c9e64
    MOV ECX,dword ptr [ESI]             ; 00608aff
        ;   Label: LAB_00608aff
    MOV dword ptr [EDI],ECX             ; 00608b01
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608b03
    MOV dword ptr [EDI + 0x4],ECX       ; 00608b06
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608b09
    MOV dword ptr [EDI + 0x8],ECX       ; 00608b0c
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608b0f
    MOV dword ptr [EDI + 0xc],ECX       ; 00608b12
    ADD ESI,0x10                        ; 00608b15
    ADD EDI,0x10                        ; 00608b18
    MOV ESI,dword ptr [ESP + 0x1a4]     ; 00608b1b
    JMP 0x005c9ea2                      ; 00608b22
        ;   XREF to: 005c9ea2 (UNCONDITIONAL_JUMP)  ; LAB_005c9ea2

