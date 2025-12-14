; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CPoly_isValid_FUN_005d1ff0(CPoly * this_ptr)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
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
;
; Referenced Globals:
;   double DOUBLE_0065431a = 0.999999990000000
;   double DOUBLE_00654322 = 1.00000001000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d1ff0
        ;   Label: shape_superopt.cpp_CPoly_isValid_FUN_005d1ff0
    PUSH ESI                            ; 005d1ff1
    PUSH EDI                            ; 005d1ff2
    PUSH EBP                            ; 005d1ff3
    MOV EBP,ESP                         ; 005d1ff4
    SUB ESP,0xd8                        ; 005d1ff6
    AND ESP,0xfffffff8                  ; 005d1ffc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d1fff
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d2002
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d2005
    CMP EAX,EDX                         ; 005d2008
    JZ 0x005d21c1                       ; 005d200a
        ;   XREF to: 005d21c1 (CONDITIONAL_JUMP)  ; LAB_005d21c1
    MOV ECX,dword ptr [EBX + 0xc]       ; 005d2010
    CMP EAX,ECX                         ; 005d2013
    JZ 0x005d21c1                       ; 005d2015
        ;   XREF to: 005d21c1 (CONDITIONAL_JUMP)  ; LAB_005d21c1
    CMP EDX,ECX                         ; 005d201b
    JZ 0x005d21c1                       ; 005d201d
        ;   XREF to: 005d21c1 (CONDITIONAL_JUMP)  ; LAB_005d21c1
    LEA ESI,[EAX*0x8 + 0x0]             ; 005d2023
    MOV EAX,ESI                         ; 005d202a
    SHL ESI,0x3                         ; 005d202c
    SUB ESI,EAX                         ; 005d202f
    LEA EAX,[ECX*0x8 + 0x0]             ; 005d2031
    MOV EDX,dword ptr [EBX]             ; 005d2038
    MOV ECX,EAX                         ; 005d203a
    SHL EAX,0x3                         ; 005d203c
    MOV EDX,dword ptr [EDX + 0x4]       ; 005d203f
    SUB EAX,ECX                         ; 005d2042
    LEA EDI,[ESP + 0x98]                ; 005d2044
    FLD double ptr [EDX + EAX*0x1]      ; 005d204b
    FLD double ptr [EDX + EAX*0x1 + 0x8] ; 005d204e
    FLD double ptr [EDX + EAX*0x1 + 0x10] ; 005d2052
    MOV ECX,0x6                         ; 005d2056
    FXCH ST2                            ; 005d205b
    FSUB double ptr [EDX + ESI*0x1]     ; 005d205d
    FXCH                                ; 005d2060
    FSUB double ptr [EDX + ESI*0x1 + 0x8] ; 005d2062
    FXCH ST2                            ; 005d2066
    FSUB double ptr [EDX + ESI*0x1 + 0x10] ; 005d2068
    FXCH                                ; 005d206c
    FSTP double ptr [ESP + 0x80]        ; 005d206e
    FXCH                                ; 005d2075
    FSTP double ptr [ESP + 0x88]        ; 005d2077
    LEA ESI,[ESP + 0x80]                ; 005d207e
    FSTP double ptr [ESP + 0x90]        ; 005d2085
    MOVSD.REP ES:EDI,ESI                ; 005d208c
    FLD double ptr [ESP + 0xa0]         ; 005d208e
    FMUL ST0                            ; 005d2095
    FLD double ptr [ESP + 0x98]         ; 005d2097
    FMUL ST0                            ; 005d209e
    FADDP                               ; 005d20a0
    FLD double ptr [ESP + 0xa8]         ; 005d20a2
    FMUL ST0                            ; 005d20a9
    FADDP                               ; 005d20ab
    FSQRT                               ; 005d20ad
    FLD double ptr [ESP + 0x98]         ; 005d20af
    FLD1                                ; 005d20b6
    FDIVRP ST2,ST0                      ; 005d20b8
    FMUL ST1                            ; 005d20ba
    FLD double ptr [ESP + 0xa0]         ; 005d20bc
    FMUL ST2                            ; 005d20c3
    FLD double ptr [ESP + 0xa8]         ; 005d20c5
    FMULP ST3                           ; 005d20cc
    FXCH                                ; 005d20ce
    FSTP double ptr [ESP + 0x38]        ; 005d20d0
    FSTP double ptr [ESP + 0x40]        ; 005d20d4
    FSTP double ptr [ESP + 0x48]        ; 005d20d8
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d20dc
    SHL EAX,0x3                         ; 005d20df
    MOV ECX,EAX                         ; 005d20e2
    SHL EAX,0x3                         ; 005d20e4
    SUB EAX,ECX                         ; 005d20e7
    LEA ECX,[EDX + EAX*0x1]             ; 005d20e9
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d20ec
    SHL EAX,0x3                         ; 005d20ef
    MOV ESI,EAX                         ; 005d20f2
    SHL EAX,0x3                         ; 005d20f4
    SUB EAX,ESI                         ; 005d20f7
    LEA EDI,[ESP + 0x68]                ; 005d20f9
    FLD double ptr [EDX + EAX*0x1]      ; 005d20fd
    FLD double ptr [EDX + EAX*0x1 + 0x8] ; 005d2100
    FLD double ptr [EDX + EAX*0x1 + 0x10] ; 005d2104
    LEA ESI,[ESP + 0x20]                ; 005d2108
    FXCH ST2                            ; 005d210c
    FSUB double ptr [ECX]               ; 005d210e
    FXCH                                ; 005d2110
    FSUB double ptr [ECX + 0x8]         ; 005d2112
    FXCH ST2                            ; 005d2115
    FSUB double ptr [ECX + 0x10]        ; 005d2117
    FXCH                                ; 005d211a
    FSTP double ptr [ESP + 0x20]        ; 005d211c
    FXCH                                ; 005d2120
    FSTP double ptr [ESP + 0x28]        ; 005d2122
    MOV ECX,0x6                         ; 005d2126
    FSTP double ptr [ESP + 0x30]        ; 005d212b
    MOVSD.REP ES:EDI,ESI                ; 005d212f
    FLD double ptr [ESP + 0x70]         ; 005d2131
    FMUL ST0                            ; 005d2135
    FLD double ptr [ESP + 0x68]         ; 005d2137
    FMUL ST0                            ; 005d213b
    FADDP                               ; 005d213d
    FLD double ptr [ESP + 0x78]         ; 005d213f
    FMUL ST0                            ; 005d2143
    FADDP                               ; 005d2145
    FSQRT                               ; 005d2147
    FLD double ptr [ESP + 0x68]         ; 005d2149
    FLD1                                ; 005d214d
    FDIVRP ST2,ST0                      ; 005d214f
    FMUL ST1                            ; 005d2151
    FLD double ptr [ESP + 0x70]         ; 005d2153
    FMUL ST2                            ; 005d2157
    FLD double ptr [ESP + 0x78]         ; 005d2159
    FMULP ST3                           ; 005d215d
    FLD double ptr [ESP + 0x40]         ; 005d215f
    FXCH                                ; 005d2163
    FSTP double ptr [ESP + 0x58]        ; 005d2165
    FMUL double ptr [ESP + 0x58]        ; 005d2169
    FLD double ptr [ESP + 0x48]         ; 005d216d
    FXCH ST3                            ; 005d2171
    FSTP double ptr [ESP + 0x60]        ; 005d2173
    FXCH ST2                            ; 005d2177
    FMUL double ptr [ESP + 0x60]        ; 005d2179
    FLD double ptr [ESP + 0x38]         ; 005d217d
    FXCH ST2                            ; 005d2181
    FSTP double ptr [ESP + 0x50]        ; 005d2183
    FXCH                                ; 005d2187
    FMUL double ptr [ESP + 0x50]        ; 005d2189
    FXCH                                ; 005d218d
    FSTP double ptr [ESP]               ; 005d218f
    FADDP                               ; 005d2192
    FADD double ptr [ESP]               ; 005d2194
    FLDZ                                ; 005d2197
    FXCH                                ; 005d2199
    FSTP double ptr [ESP + 0x10]        ; 005d219b
    FCOMP double ptr [ESP + 0x10]       ; 005d219f
    FNSTSW AX                           ; 005d21a3
    SAHF                                ; 005d21a5
    JBE 0x005d21ca                      ; 005d21a6
        ;   XREF to: 005d21ca (CONDITIONAL_JUMP)  ; LAB_005d21ca
    FLD double ptr [ESP + 0x10]         ; 005d21a8
    FCHS                                ; 005d21ac
    FSTP double ptr [ESP + 0x8]         ; 005d21ae
    FLD double ptr [ESP + 0x8]          ; 005d21b2
        ;   Label: LAB_005d21b2
    FCOMP double ptr [0x0065431a]       ; 005d21b6 | DOUBLE_0065431a
    FNSTSW AX                           ; 005d21bc
    SAHF                                ; 005d21be
    JBE 0x005d21dc                      ; 005d21bf
        ;   XREF to: 005d21dc (CONDITIONAL_JUMP)  ; LAB_005d21dc
    XOR EAX,EAX                         ; 005d21c1
        ;   Label: LAB_005d21c1
    MOV ESP,EBP                         ; 005d21c3
    POP EBP                             ; 005d21c5
    POP EDI                             ; 005d21c6
    POP ESI                             ; 005d21c7
    POP EBX                             ; 005d21c8
    RET                                 ; 005d21c9
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d21ca
        ;   Label: LAB_005d21ca
    MOV dword ptr [ESP + 0x8],EAX       ; 005d21ce
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d21d2
    MOV dword ptr [ESP + 0xc],EAX       ; 005d21d6
    JMP 0x005d21b2                      ; 005d21da
        ;   XREF to: 005d21b2 (UNCONDITIONAL_JUMP)  ; LAB_005d21b2
    PUSH EBX                            ; 005d21dc
        ;   Label: LAB_005d21dc
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d21dd
    CALL dword ptr [EAX + 0x44]         ; 005d21e0
    FLD double ptr [EBX + 0x48]         ; 005d21e3
    FMUL ST0                            ; 005d21e6
    FLD double ptr [EBX + 0x40]         ; 005d21e8
    FMUL ST0                            ; 005d21eb
    FADDP                               ; 005d21ed
    FLD double ptr [EBX + 0x50]         ; 005d21ef
    FMUL ST0                            ; 005d21f2
    FADDP                               ; 005d21f4
    FSQRT                               ; 005d21f6
    ADD ESP,0x4                         ; 005d21f8
    FST double ptr [ESP + 0x18]         ; 005d21fb
    FCOMP double ptr [0x0065431a]       ; 005d21ff | DOUBLE_0065431a
    FNSTSW AX                           ; 005d2205
    SAHF                                ; 005d2207
    JC 0x005d21c1                       ; 005d2208
        ;   XREF to: 005d21c1 (CONDITIONAL_JUMP)  ; LAB_005d21c1
    FLD double ptr [ESP + 0x18]         ; 005d220a
    FCOMP double ptr [0x00654322]       ; 005d220e | DOUBLE_00654322
    FNSTSW AX                           ; 005d2214
    SAHF                                ; 005d2216
    JA 0x005d21c1                       ; 005d2217
        ;   XREF to: 005d21c1 (CONDITIONAL_JUMP)  ; LAB_005d21c1
    MOV EAX,0x1                         ; 005d2219
    MOV ESP,EBP                         ; 005d221e
    POP EBP                             ; 005d2220
    POP EDI                             ; 005d2221
    POP ESI                             ; 005d2222
    POP EBX                             ; 005d2223
    RET                                 ; 005d2224

