; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel *this_ptr,CVector3f *output_normal,int frame_index,int poly_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_normal
; int              Stack[0xc]:4   frame_index
; int              Stack[0x10]:4   poly_index
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b7ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c080
        ;   Label: core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
    PUSH ESI                            ; 0047c081
    PUSH EDI                            ; 0047c082
    PUSH EBP                            ; 0047c083
    MOV EBP,ESP                         ; 0047c084
    SUB ESP,0x28                        ; 0047c086
    AND ESP,0xfffffff8                  ; 0047c089
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047c08c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0047c08f
    MOV EBX,dword ptr [EBP + 0x20]      ; 0047c092
    LEA ECX,[EBX*0x8 + 0x0]             ; 0047c095
    ADD ECX,EBX                         ; 0047c09c
    MOV ESI,dword ptr [EAX + 0x114]     ; 0047c09e
    SHL ECX,0x3                         ; 0047c0a4
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0047c0a7
    ADD ESI,ECX                         ; 0047c0aa
    IMUL EBX,dword ptr [EAX + 0x104]    ; 0047c0ac
    LEA ECX,[EBX*0x4 + 0x0]             ; 0047c0b3
    SUB ECX,EBX                         ; 0047c0ba
    SHL ECX,0x2                         ; 0047c0bc
    MOV EBX,dword ptr [EAX + 0x10c]     ; 0047c0bf
    ADD EBX,ECX                         ; 0047c0c5
    MOV ECX,dword ptr [ESI + 0x24]      ; 0047c0c7
    LEA EAX,[ECX*0x4 + 0x0]             ; 0047c0ca
    SUB EAX,ECX                         ; 0047c0d1
    SHL EAX,0x2                         ; 0047c0d3
    LEA ECX,[EAX + EBX*0x1]             ; 0047c0d6
    MOV EAX,dword ptr [ESI + 0x18]      ; 0047c0d9
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047c0dc
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047c0e0
    SHL EAX,0x2                         ; 0047c0e4
    SUB EAX,EDI                         ; 0047c0e7
    MOV EDI,dword ptr [ECX]             ; 0047c0e9
    MOV dword ptr [ESP + 0x1c],EDI      ; 0047c0eb
    MOV EDI,dword ptr [EBX + EAX*0x4]   ; 0047c0ef
    SUB dword ptr [ESP + 0x1c],EDI      ; 0047c0f2
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047c0f6
    MOV dword ptr [ESP + 0x1c],EDI      ; 0047c0fa
    MOV EDI,dword ptr [ECX + 0x4]       ; 0047c0fe
    MOV dword ptr [ESP + 0x20],EDI      ; 0047c101
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x4] ; 0047c105
    SUB dword ptr [ESP + 0x20],EDI      ; 0047c109
    MOV EDI,dword ptr [ESP + 0x20]      ; 0047c10d
    MOV ESI,dword ptr [ESI + 0x30]      ; 0047c111
    MOV dword ptr [ESP + 0x20],EDI      ; 0047c114
    MOV EDI,dword ptr [ECX + 0x8]       ; 0047c118
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 0047c11b
    SUB EDI,EAX                         ; 0047c11f
    LEA EAX,[ESI*0x4 + 0x0]             ; 0047c121
    SUB EAX,ESI                         ; 0047c128
    SHL EAX,0x2                         ; 0047c12a
    ADD EBX,EAX                         ; 0047c12d
    MOV ESI,dword ptr [ECX]             ; 0047c12f
    MOV EAX,dword ptr [EBX]             ; 0047c131
    MOV dword ptr [ESP + 0x24],EDI      ; 0047c133
    SUB EAX,ESI                         ; 0047c137
    FILD dword ptr [ESP + 0x24]         ; 0047c139
    MOV dword ptr [ESP + 0x24],EAX      ; 0047c13d
    MOV EDI,dword ptr [ECX + 0x4]       ; 0047c141
    FILD dword ptr [ESP + 0x24]         ; 0047c144
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047c148
    FLD ST0                             ; 0047c14b
    SUB EAX,EDI                         ; 0047c14d
    FXCH ST2                            ; 0047c14f
    FSTP float ptr [ESP + 0x8]          ; 0047c151
    FXCH                                ; 0047c155
    FMUL float ptr [ESP + 0x8]          ; 0047c157
    MOV dword ptr [ESP + 0x24],EAX      ; 0047c15b
    FILD dword ptr [ESP + 0x1c]         ; 0047c15f
    FLD ST0                             ; 0047c163
    FILD dword ptr [ESP + 0x24]         ; 0047c165
    FSTP float ptr [ESP + 0x10]         ; 0047c169
    FMUL float ptr [ESP + 0x10]         ; 0047c16d
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047c171
    MOV EBX,dword ptr [ECX + 0x8]       ; 0047c174
    FILD dword ptr [ESP + 0x20]         ; 0047c177
    SUB EAX,EBX                         ; 0047c17b
    FXCH ST4                            ; 0047c17d
    FMUL ST4                            ; 0047c17f
    MOV dword ptr [ESP + 0x24],EAX      ; 0047c181
    FILD dword ptr [ESP + 0x24]         ; 0047c185
    FXCH ST5                            ; 0047c189
    FMUL ST5                            ; 0047c18b
    FXCH ST3                            ; 0047c18d
    FMULP ST5                           ; 0047c18f
    FLD float ptr [ESP + 0x10]          ; 0047c191
    FXCH ST5                            ; 0047c195
    FSUBP ST4,ST0                       ; 0047c197
    FXCH ST4                            ; 0047c199
    FMUL float ptr [ESP + 0x8]          ; 0047c19b
    FXCH ST3                            ; 0047c19f
    FST float ptr [EDX + 0x4]           ; 0047c1a1
    FXCH ST3                            ; 0047c1a4
    FSUBP ST2,ST0                       ; 0047c1a6
    FXCH ST2                            ; 0047c1a8
    FMUL float ptr [EDX + 0x4]          ; 0047c1aa
    FXCH                                ; 0047c1ad
    FST float ptr [EDX]                 ; 0047c1af
    FMUL float ptr [EDX]                ; 0047c1b1
    FXCH ST3                            ; 0047c1b3
    FSUBP ST2,ST0                       ; 0047c1b5
    FADDP ST2,ST0                       ; 0047c1b7
    FST float ptr [EDX + 0x8]           ; 0047c1b9
    FMUL float ptr [EDX + 0x8]          ; 0047c1bc
    FADDP                               ; 0047c1bf
    FSQRT                               ; 0047c1c1
    FST float ptr [ESP]                 ; 0047c1c3
    FLDZ                                ; 0047c1c6
    FCOMPP                              ; 0047c1c8
    FNSTSW AX                           ; 0047c1ca
    SAHF                                ; 0047c1cc
    JNC 0x0047c1f9                      ; 0047c1cd
        ;   XREF to: 0047c1f9 (CONDITIONAL_JUMP)  ; LAB_0047c1f9
    FLD1                                ; 0047c1cf
    FLD float ptr [EDX]                 ; 0047c1d1
    FXCH                                ; 0047c1d3
    FDIV float ptr [ESP]                ; 0047c1d5
    FXCH                                ; 0047c1d8
    FMUL ST1                            ; 0047c1da
    FLD float ptr [EDX + 0x4]           ; 0047c1dc
    FMUL ST2                            ; 0047c1df
    FLD float ptr [EDX + 0x8]           ; 0047c1e1
    FMULP ST3                           ; 0047c1e4
    FXCH                                ; 0047c1e6
    FSTP float ptr [EDX]                ; 0047c1e8
    FSTP float ptr [EDX + 0x4]          ; 0047c1ea
    FSTP float ptr [EDX + 0x8]          ; 0047c1ed
    MOV EAX,EDX                         ; 0047c1f0
    MOV ESP,EBP                         ; 0047c1f2
    POP EBP                             ; 0047c1f4
    POP EDI                             ; 0047c1f5
    POP ESI                             ; 0047c1f6
    POP EBX                             ; 0047c1f7
    RET                                 ; 0047c1f8
    MOV dword ptr [EDX + 0x8],0x0       ; 0047c1f9
        ;   Label: LAB_0047c1f9
    MOV EAX,dword ptr [EDX + 0x8]       ; 0047c200
    MOV dword ptr [EDX + 0x4],EAX       ; 0047c203
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047c206
    MOV dword ptr [EDX],EAX             ; 0047c209
    MOV EAX,EDX                         ; 0047c20b
    MOV ESP,EBP                         ; 0047c20d
    POP EBP                             ; 0047c20f
    POP EDI                             ; 0047c210
    POP ESI                             ; 0047c211
    POP EBX                             ; 0047c212
    RET                                 ; 0047c213

