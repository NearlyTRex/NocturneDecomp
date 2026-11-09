; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dcamera_cpp_FUN_0044a090(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a090
        ;   Label: core_dcamera.cpp_FUN_0044a090
    PUSH EDI                            ; 0044a091
    PUSH EBP                            ; 0044a092
    MOV EBP,ESP                         ; 0044a093
    SUB ESP,0x28                        ; 0044a095
    AND ESP,0xfffffff8                  ; 0044a098
    MOV dword ptr [ESP + 0x20],ESI      ; 0044a09b
    MOV EDX,0x10000                     ; 0044a09f
    MOV EBX,dword ptr [EBP + 0x10]      ; 0044a0a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044a0a7
    MOV ESI,dword ptr [EBP + 0x10]      ; 0044a0aa
    MOV dword ptr [ESP + 0x8],EDX       ; 0044a0ad
    SHL EAX,0x10                        ; 0044a0b1
    MOV ECX,dword ptr [ESI + 0x1c8]     ; 0044a0b4
    MOV EBX,dword ptr [EBX + 0x1c0]     ; 0044a0ba
    SUB EAX,ECX                         ; 0044a0c0
    IMUL EDX                            ; 0044a0c2
    IDIV EBX                            ; 0044a0c4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a0c6
    MOV dword ptr [ESP],EAX             ; 0044a0ca
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044a0cd
    MOV EDI,dword ptr [ESI + 0x1cc]     ; 0044a0d0
    SHL EAX,0x10                        ; 0044a0d6
    MOV EBX,dword ptr [ESI + 0x1c4]     ; 0044a0d9
    SUB EAX,EDI                         ; 0044a0df
    LEA EDI,[ESI + 0x19c]               ; 0044a0e1
    IMUL EDX                            ; 0044a0e7
    IDIV EBX                            ; 0044a0e9
    MOV ESI,ESP                         ; 0044a0eb
    MOV dword ptr [ESP + 0x4],EAX       ; 0044a0ed
    MOV EAX,dword ptr [ESI]             ; 0044a0f1
    IMUL dword ptr [EDI]                ; 0044a0f3
    MOV EBX,EAX                         ; 0044a0f5
    MOV ECX,EDX                         ; 0044a0f7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a0f9
    IMUL dword ptr [EDI + 0xc]          ; 0044a0fc
    ADD EBX,EAX                         ; 0044a0ff
    ADC ECX,EDX                         ; 0044a101
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a103
    IMUL dword ptr [EDI + 0x18]         ; 0044a106
    ADD EAX,EBX                         ; 0044a109
    ADC EDX,ECX                         ; 0044a10b
    SHRD EAX,EDX,0x10                   ; 0044a10d
    MOV EDI,dword ptr [EBP + 0x10]      ; 0044a111
    MOV dword ptr [ESP + 0x24],EAX      ; 0044a114
    MOV ESI,ESP                         ; 0044a118
    FILD dword ptr [ESP + 0x24]         ; 0044a11a
    ADD EDI,0x1a0                       ; 0044a11e
    FSTP float ptr [ESP + 0xc]          ; 0044a124
    MOV EAX,dword ptr [ESI]             ; 0044a128
    IMUL dword ptr [EDI]                ; 0044a12a
    MOV EBX,EAX                         ; 0044a12c
    MOV ECX,EDX                         ; 0044a12e
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a130
    IMUL dword ptr [EDI + 0xc]          ; 0044a133
    ADD EBX,EAX                         ; 0044a136
    ADC ECX,EDX                         ; 0044a138
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a13a
    IMUL dword ptr [EDI + 0x18]         ; 0044a13d
    ADD EAX,EBX                         ; 0044a140
    ADC EDX,ECX                         ; 0044a142
    SHRD EAX,EDX,0x10                   ; 0044a144
    MOV EDI,dword ptr [EBP + 0x10]      ; 0044a148
    MOV dword ptr [ESP + 0x24],EAX      ; 0044a14b
    MOV ESI,ESP                         ; 0044a14f
    FILD dword ptr [ESP + 0x24]         ; 0044a151
    ADD EDI,0x1a4                       ; 0044a155
    FSTP float ptr [ESP + 0x10]         ; 0044a15b
    MOV EAX,dword ptr [ESI]             ; 0044a15f
    IMUL dword ptr [EDI]                ; 0044a161
    MOV EBX,EAX                         ; 0044a163
    MOV ECX,EDX                         ; 0044a165
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a167
    IMUL dword ptr [EDI + 0xc]          ; 0044a16a
    ADD EBX,EAX                         ; 0044a16d
    ADC ECX,EDX                         ; 0044a16f
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a171
    IMUL dword ptr [EDI + 0x18]         ; 0044a174
    ADD EAX,EBX                         ; 0044a177
    ADC EDX,ECX                         ; 0044a179
    SHRD EAX,EDX,0x10                   ; 0044a17b
    FLD float ptr [ESP + 0x10]          ; 0044a17f
    FMUL ST0                            ; 0044a183
    MOV dword ptr [ESP + 0x24],EAX      ; 0044a185
    FLD float ptr [ESP + 0xc]           ; 0044a189
    FMUL ST0                            ; 0044a18d
    FILD dword ptr [ESP + 0x24]         ; 0044a18f
    FXCH                                ; 0044a193
    FADDP ST2,ST0                       ; 0044a195
    FST float ptr [ESP + 0x14]          ; 0044a197
    FMUL float ptr [ESP + 0x14]         ; 0044a19b
    FADDP                               ; 0044a19f
    FSQRT                               ; 0044a1a1
    FLDZ                                ; 0044a1a3
    FXCH                                ; 0044a1a5
    FSTP float ptr [ESP + 0x1c]         ; 0044a1a7
    FCOMP float ptr [ESP + 0x1c]        ; 0044a1ab
    FNSTSW AX                           ; 0044a1af
    SAHF                                ; 0044a1b1
    JNC 0x0044a1f3                      ; 0044a1b2
        ;   XREF to: 0044a1f3 (CONDITIONAL_JUMP)  ; LAB_0044a1f3
    FLD1                                ; 0044a1b4
    FLD float ptr [ESP + 0xc]           ; 0044a1b6
    FXCH                                ; 0044a1ba
    FDIV float ptr [ESP + 0x1c]         ; 0044a1bc
    FXCH                                ; 0044a1c0
    FMUL ST1                            ; 0044a1c2
    FLD float ptr [ESP + 0x10]          ; 0044a1c4
    FMUL ST2                            ; 0044a1c8
    FLD float ptr [ESP + 0x14]          ; 0044a1ca
    FMULP ST3                           ; 0044a1ce
    FXCH                                ; 0044a1d0
    FSTP float ptr [ESP + 0xc]          ; 0044a1d2
    FSTP float ptr [ESP + 0x10]         ; 0044a1d6
    FSTP float ptr [ESP + 0x14]         ; 0044a1da
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044a1de
        ;   Label: LAB_0044a1de
    LEA ESI,[ESP + 0xc]                 ; 0044a1e2
    MOVSD ES:EDI,ESI                    ; 0044a1e6
    MOVSD ES:EDI,ESI                    ; 0044a1e7
    MOVSD ES:EDI,ESI                    ; 0044a1e8
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044a1e9
    MOV ESP,EBP                         ; 0044a1ed
    POP EBP                             ; 0044a1ef
    POP EDI                             ; 0044a1f0
    POP EBX                             ; 0044a1f1
    RET                                 ; 0044a1f2
    XOR EAX,EAX                         ; 0044a1f3
        ;   Label: LAB_0044a1f3
    MOV dword ptr [ESP + 0x10],EAX      ; 0044a1f5
    MOV dword ptr [ESP + 0xc],EAX       ; 0044a1f9
    MOV dword ptr [ESP + 0x14],EAX      ; 0044a1fd
    JMP 0x0044a1de                      ; 0044a201
        ;   XREF to: 0044a1de (UNCONDITIONAL_JUMP)  ; LAB_0044a1de

