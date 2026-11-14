; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_lightVertex_FUN_004f4f50(float *vertex,float *out_color)
;
; Parameters:
; float *          Stack[0x4]:4   vertex
; float *          Stack[0x8]:4   out_color
;
; XREF[3]:
;   engine_mini3d.cpp_convertVertexD3DL_FUN_004f5c50 at 004f5c7b
;   engine_mini3d.cpp_convertVertexL_FUN_004f5d50 at 004f5d6f
;   engine_mini3d.cpp_polyList_FUN_004f3920 at 004f3b10
;
; Referenced Globals:
;   undefined4 DAT_01caf5b4
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d098e4
;   undefined4 DAT_01d098f0
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0c3a0
;   undefined4 DAT_01d12118
;   undefined4 DAT_01d1211c
;   undefined4 DAT_01d12120
;   undefined4 DAT_01d12128
;   undefined4 DAT_01d1212c
;   undefined4 DAT_01d12130
;   undefined4 DAT_01d12138
;   undefined4 DAT_01d1213c
;   undefined4 DAT_01d12140
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4f50
        ;   Label: engine_mini3d.cpp_lightVertex_FUN_004f4f50
    PUSH ESI                            ; 004f4f51
    PUSH EDI                            ; 004f4f52
    PUSH EBP                            ; 004f4f53
    MOV EBP,ESP                         ; 004f4f54
    SUB ESP,0x68                        ; 004f4f56
    AND ESP,0xfffffff8                  ; 004f4f59
    MOV ESI,dword ptr [0x01d0c3a0]      ; 004f4f5c | DAT_01d0c3a0
    MOV ECX,dword ptr [EBP + 0x14]      ; 004f4f62
    MOV EDI,dword ptr [EBP + 0x18]      ; 004f4f65
    FLDZ                                ; 004f4f68
    FCOMP float ptr [0x01d098e4]        ; 004f4f6a | DAT_01d098e4
    FNSTSW AX                           ; 004f4f70
    SAHF                                ; 004f4f72
    JC 0x004f514c                       ; 004f4f73
        ;   XREF to: 004f514c (CONDITIONAL_JUMP)  ; LAB_004f514c
    XOR EDX,EDX                         ; 004f4f79
        ;   Label: LAB_004f4f79
    MOV dword ptr [ESP],EDX             ; 004f4f7b
    XOR EBX,EBX                         ; 004f4f7e
        ;   Label: LAB_004f4f7e
    MOV dword ptr [ESP + 0x30],EBX      ; 004f4f80
    MOV dword ptr [ESP + 0x34],EBX      ; 004f4f84
    MOV dword ptr [ESP + 0x2c],EBX      ; 004f4f88
    TEST ESI,ESI                        ; 004f4f8c
    JLE 0x004f50cf                      ; 004f4f8e
        ;   XREF to: 004f50cf (CONDITIONAL_JUMP)  ; LAB_004f50cf
    FLD float ptr [ECX + 0x4]           ; 004f4f94
    FMUL float ptr [0x01d12128]         ; 004f4f97 | DAT_01d12128
    FLD float ptr [ECX + 0x4]           ; 004f4f9d
    FMUL float ptr [0x01d1212c]         ; 004f4fa0 | DAT_01d1212c
    FLD float ptr [ECX + 0x4]           ; 004f4fa6
    FMUL float ptr [0x01d12130]         ; 004f4fa9 | DAT_01d12130
    FLD float ptr [ECX]                 ; 004f4faf
    FMUL float ptr [0x01d12118]         ; 004f4fb1 | DAT_01d12118
    FLD float ptr [ECX]                 ; 004f4fb7
    FMUL float ptr [0x01d1211c]         ; 004f4fb9 | DAT_01d1211c
    FLD float ptr [ECX]                 ; 004f4fbf
    FXCH ST2                            ; 004f4fc1
    FADDP ST5,ST0                       ; 004f4fc3
    FXCH                                ; 004f4fc5
    FMUL float ptr [0x01d12120]         ; 004f4fc7 | DAT_01d12120
    FLD float ptr [ECX + 0x8]           ; 004f4fcd
    FMUL float ptr [0x01d12138]         ; 004f4fd0 | DAT_01d12138
    FXCH ST2                            ; 004f4fd6
    FADDP ST4,ST0                       ; 004f4fd8
    FADDP ST2,ST0                       ; 004f4fda
    FLD float ptr [ECX + 0x8]           ; 004f4fdc
    FMUL float ptr [0x01d1213c]         ; 004f4fdf | DAT_01d1213c
    FLD float ptr [ECX + 0x8]           ; 004f4fe5
    FMUL float ptr [0x01d12140]         ; 004f4fe8 | DAT_01d12140
    MOV EDX,0x1d0c3a4                   ; 004f4fee
    FXCH ST2                            ; 004f4ff3
    FADDP ST5,ST0                       ; 004f4ff5
    FADDP ST3,ST0                       ; 004f4ff7
    FADDP                               ; 004f4ff9
    FXCH ST2                            ; 004f4ffb
    FADD float ptr [0x01d12148]         ; 004f4ffd | DAT_01d12148
    FXCH                                ; 004f5003
    FADD float ptr [0x01d1214c]         ; 004f5005 | DAT_01d1214c
    FXCH ST2                            ; 004f500b
    FADD float ptr [0x01d12150]         ; 004f500d | DAT_01d12150
    FXCH ST2                            ; 004f5013
    FSTP float ptr [ESP + 0x28]         ; 004f5015
    FXCH                                ; 004f5019
    FSTP float ptr [ESP + 0x20]         ; 004f501b
    FSTP float ptr [ESP + 0x24]         ; 004f501f
    JLE 0x004f50cf                      ; 004f5023
        ;   XREF to: 004f50cf (CONDITIONAL_JUMP)  ; LAB_004f50cf
    CMP byte ptr [EBX + 0x1d0d280],0x0  ; 004f5029
        ;   Label: LAB_004f5029
    JZ 0x004f50c3                       ; 004f5030
        ;   XREF to: 004f50c3 (CONDITIONAL_JUMP)  ; LAB_004f50c3
    FLD float ptr [ECX + 0x10]          ; 004f5036
    FMUL float ptr [0x01d12128]         ; 004f5039 | DAT_01d12128
    FLD float ptr [ECX + 0xc]           ; 004f503f
    FMUL float ptr [0x01d1211c]         ; 004f5042 | DAT_01d1211c
    FLD float ptr [ECX + 0xc]           ; 004f5048
    FMUL float ptr [0x01d12120]         ; 004f504b | DAT_01d12120
    FLD float ptr [ECX + 0xc]           ; 004f5051
    FMUL float ptr [0x01d12118]         ; 004f5054 | DAT_01d12118
    FLD float ptr [ECX + 0x10]          ; 004f505a
    FMUL float ptr [0x01d1212c]         ; 004f505d | DAT_01d1212c
    FLD float ptr [ECX + 0x10]          ; 004f5063
    FMUL float ptr [0x01d12130]         ; 004f5066 | DAT_01d12130
    FXCH ST2                            ; 004f506c
    FADDP ST5,ST0                       ; 004f506e
    FADDP ST3,ST0                       ; 004f5070
    FLD float ptr [ECX + 0x14]          ; 004f5072
    FMUL float ptr [0x01d12138]         ; 004f5075 | DAT_01d12138
    FLD float ptr [ECX + 0x14]          ; 004f507b
    FMUL float ptr [0x01d1213c]         ; 004f507e | DAT_01d1213c
    FXCH                                ; 004f5084
    FADDP ST5,ST0                       ; 004f5086
    FXCH ST4                            ; 004f5088
    FMUL float ptr [EDX + 0x14]         ; 004f508a
    FXCH                                ; 004f508d
    FADDP ST2,ST0                       ; 004f508f
    FXCH ST3                            ; 004f5091
    FADDP ST2,ST0                       ; 004f5093
    FXCH                                ; 004f5095
    FMUL float ptr [EDX + 0x20]         ; 004f5097
    FLD float ptr [ECX + 0x14]          ; 004f509a
    FMUL float ptr [0x01d12140]         ; 004f509d | DAT_01d12140
    FXCH                                ; 004f50a3
    FADDP ST3,ST0                       ; 004f50a5
    FADDP                               ; 004f50a7
    FMUL float ptr [EDX + 0x2c]         ; 004f50a9
    FADDP                               ; 004f50ac
    FLDZ                                ; 004f50ae
    FXCH                                ; 004f50b0
    FSTP float ptr [ESP + 0x4c]         ; 004f50b2
    FCOMP float ptr [ESP + 0x4c]        ; 004f50b6
    FNSTSW AX                           ; 004f50ba
    SAHF                                ; 004f50bc
    JA 0x004f51ce                       ; 004f50bd
        ;   XREF to: 004f51ce (CONDITIONAL_JUMP)  ; LAB_004f51ce
    INC EBX                             ; 004f50c3
        ;   Label: LAB_004f50c3
    ADD EDX,0x4c                        ; 004f50c4
    CMP EBX,ESI                         ; 004f50c7
    JL 0x004f5029                       ; 004f50c9
        ;   XREF to: 004f5029 (CONDITIONAL_JUMP)  ; LAB_004f5029
    FLD float ptr [0x01d098e4]          ; 004f50cf | DAT_01d098e4
        ;   Label: LAB_004f50cf
    FLD ST0                             ; 004f50d5
    FMUL float ptr [ESP]                ; 004f50d7
    FLD float ptr [ESP + 0x34]          ; 004f50da
    FMULP ST2                           ; 004f50de
    FSTP float ptr [ESP + 0x1c]         ; 004f50e0
    FADD float ptr [ESP + 0x1c]         ; 004f50e4
    FSTP float ptr [EDI]                ; 004f50e8
    CMP dword ptr [EDI],0x3f800000      ; 004f50ea
    JLE 0x004f50f8                      ; 004f50f0
        ;   XREF to: 004f50f8 (CONDITIONAL_JUMP)  ; LAB_004f50f8
    MOV dword ptr [EDI],0x3f800000      ; 004f50f2
    FLD float ptr [ESP + 0x30]          ; 004f50f8
        ;   Label: LAB_004f50f8
    FMUL float ptr [0x01d098e4]         ; 004f50fc | DAT_01d098e4
    FADD float ptr [ESP + 0x1c]         ; 004f5102
    FSTP float ptr [EDI + 0x4]          ; 004f5106
    CMP dword ptr [EDI + 0x4],0x3f800000 ; 004f5109
    JLE 0x004f5119                      ; 004f5110
        ;   XREF to: 004f5119 (CONDITIONAL_JUMP)  ; LAB_004f5119
    MOV dword ptr [EDI + 0x4],0x3f800000 ; 004f5112
    FLD float ptr [ESP + 0x2c]          ; 004f5119
        ;   Label: LAB_004f5119
    FMUL float ptr [0x01d098e4]         ; 004f511d | DAT_01d098e4
    FADD float ptr [ESP + 0x1c]         ; 004f5123
    FSTP float ptr [EDI + 0x8]          ; 004f5127
    CMP dword ptr [EDI + 0x8],0x3f800000 ; 004f512a
    JG 0x004f5358                       ; 004f5131
        ;   XREF to: 004f5358 (CONDITIONAL_JUMP)  ; LAB_004f5358
    MOV EAX,[0x01d09860]                ; 004f5137 | DAT_01d09860
        ;   Label: LAB_004f5137
    MOV dword ptr [EDI + 0xc],EAX       ; 004f513c
    MOV dword ptr [0x01d0c3a0],ESI      ; 004f513f | DAT_01d0c3a0
    MOV ESP,EBP                         ; 004f5145
    POP EBP                             ; 004f5147
    POP EDI                             ; 004f5148
    POP ESI                             ; 004f5149
    POP EBX                             ; 004f514a
    RET                                 ; 004f514b
    MOV EAX,[0x01d09918]                ; 004f514c | DAT_01d09918
        ;   Label: LAB_004f514c
    FLD float ptr [ECX + 0xc]           ; 004f5151
    FMUL float ptr [EAX + 0x30]         ; 004f5154
    FLD float ptr [ECX + 0x10]          ; 004f5157
    FMUL float ptr [EAX + 0x34]         ; 004f515a
    FADDP                               ; 004f515d
    FLD float ptr [ECX + 0x14]          ; 004f515f
    FMUL float ptr [EAX + 0x38]         ; 004f5162
    FADDP                               ; 004f5165
    FSTP float ptr [ESP]                ; 004f5167
    XOR byte ptr [ESP + 0x3],0x80       ; 004f516a
    FLDZ                                ; 004f516f
    FCOMP float ptr [ESP]               ; 004f5171
    FNSTSW AX                           ; 004f5174
    SAHF                                ; 004f5176
    JBE 0x004f51a3                      ; 004f5177
        ;   XREF to: 004f51a3 (CONDITIONAL_JUMP)  ; LAB_004f51a3
    XOR EDX,EDX                         ; 004f5179
    MOV dword ptr [ESP],EDX             ; 004f517b
    FLD1                                ; 004f517e
        ;   Label: LAB_004f517e
    FLD float ptr [0x01d098f0]          ; 004f5180 | DAT_01d098f0
    FXCH                                ; 004f5186
    FSUB ST0,ST1                        ; 004f5188
    FMUL float ptr [ESP]                ; 004f518a
    FADDP                               ; 004f518d
    FLDZ                                ; 004f518f
    FXCH                                ; 004f5191
    FSTP float ptr [ESP]                ; 004f5193
    FCOMP float ptr [ESP]               ; 004f5196
    FNSTSW AX                           ; 004f5199
    SAHF                                ; 004f519b
    JBE 0x004f51b5                      ; 004f519c
        ;   XREF to: 004f51b5 (CONDITIONAL_JUMP)  ; LAB_004f51b5
    JMP 0x004f4f79                      ; 004f519e
        ;   XREF to: 004f4f79 (UNCONDITIONAL_JUMP)  ; LAB_004f4f79
    CMP dword ptr [ESP],0x3f800000      ; 004f51a3
        ;   Label: LAB_004f51a3
    JLE 0x004f517e                      ; 004f51aa
        ;   XREF to: 004f517e (CONDITIONAL_JUMP)  ; LAB_004f517e
    MOV dword ptr [ESP],0x3f800000      ; 004f51ac
    JMP 0x004f517e                      ; 004f51b3
        ;   XREF to: 004f517e (UNCONDITIONAL_JUMP)  ; LAB_004f517e
    CMP dword ptr [ESP],0x3f800000      ; 004f51b5
        ;   Label: LAB_004f51b5
    JLE 0x004f4f7e                      ; 004f51bc
        ;   XREF to: 004f4f7e (CONDITIONAL_JUMP)  ; LAB_004f4f7e
    MOV dword ptr [ESP],0x3f800000      ; 004f51c2
    JMP 0x004f4f7e                      ; 004f51c9
        ;   XREF to: 004f4f7e (UNCONDITIONAL_JUMP)  ; LAB_004f4f7e
    FLD float ptr [ESP + 0x28]          ; 004f51ce
        ;   Label: LAB_004f51ce
    FLD float ptr [ESP + 0x24]          ; 004f51d2
    FSUB float ptr [EDX]                ; 004f51d6
    FXCH                                ; 004f51d8
    FSUB float ptr [EDX + 0x4]          ; 004f51da
    FXCH                                ; 004f51dd
    FST float ptr [ESP + 0x40]          ; 004f51df
    FMUL float ptr [EDX + 0x14]         ; 004f51e3
    FXCH                                ; 004f51e6
    FST float ptr [ESP + 0x44]          ; 004f51e8
    FMUL float ptr [EDX + 0x20]         ; 004f51ec
    FLD float ptr [ESP + 0x20]          ; 004f51ef
    FSUB float ptr [EDX + 0x8]          ; 004f51f3
    FXCH                                ; 004f51f6
    FADDP ST2,ST0                       ; 004f51f8
    FST float ptr [ESP + 0x48]          ; 004f51fa
    FMUL float ptr [EDX + 0x2c]         ; 004f51fe
    MOV AH,byte ptr [ESP + 0x4f]        ; 004f5201
    FLDZ                                ; 004f5205
    XOR AH,0x80                         ; 004f5207
    FXCH                                ; 004f520a
    FADDP ST2,ST0                       ; 004f520c
    MOV byte ptr [ESP + 0x4f],AH        ; 004f520e
    FXCH                                ; 004f5212
    FSTP float ptr [ESP + 0x58]         ; 004f5214
    FCOMP float ptr [ESP + 0x58]        ; 004f5218
    FNSTSW AX                           ; 004f521c
    SAHF                                ; 004f521e
    JNC 0x004f50c3                      ; 004f521f
        ;   XREF to: 004f50c3 (CONDITIONAL_JUMP)  ; LAB_004f50c3
    FLD float ptr [ESP + 0x58]          ; 004f5225
    FCOMP float ptr [EDX + 0x34]        ; 004f5229
    FNSTSW AX                           ; 004f522c
    SAHF                                ; 004f522e
    JNC 0x004f50c3                      ; 004f522f
        ;   XREF to: 004f50c3 (CONDITIONAL_JUMP)  ; LAB_004f50c3
    FLD float ptr [ESP + 0x40]          ; 004f5235
    FMUL float ptr [EDX + 0xc]          ; 004f5239
    FLD float ptr [ESP + 0x44]          ; 004f523c
    FMUL float ptr [EDX + 0x18]         ; 004f5240
    FADDP                               ; 004f5243
    FLD float ptr [ESP + 0x48]          ; 004f5245
    FMUL float ptr [EDX + 0x24]         ; 004f5249
    FADDP                               ; 004f524c
    FST float ptr [ESP + 0x50]          ; 004f524e
    FCOMP float ptr [ESP + 0x58]        ; 004f5252
    FNSTSW AX                           ; 004f5256
    SAHF                                ; 004f5258
    JNC 0x004f50c3                      ; 004f5259
        ;   XREF to: 004f50c3 (CONDITIONAL_JUMP)  ; LAB_004f50c3
    FLD float ptr [ESP + 0x50]          ; 004f525f
    FLD float ptr [ESP + 0x58]          ; 004f5263
    FCHS                                ; 004f5267
    FSTP float ptr [ESP + 0x38]         ; 004f5269
    FCOMP float ptr [ESP + 0x38]        ; 004f526d
    FNSTSW AX                           ; 004f5271
    SAHF                                ; 004f5273
    JBE 0x004f50c3                      ; 004f5274
        ;   XREF to: 004f50c3 (CONDITIONAL_JUMP)  ; LAB_004f50c3
    FLD float ptr [ESP + 0x40]          ; 004f527a
    FMUL float ptr [EDX + 0x10]         ; 004f527e
    FLD float ptr [ESP + 0x44]          ; 004f5281
    FMUL float ptr [EDX + 0x1c]         ; 004f5285
    FADDP                               ; 004f5288
    FLD float ptr [ESP + 0x48]          ; 004f528a
    FMUL float ptr [EDX + 0x28]         ; 004f528e
    FADDP                               ; 004f5291
    FST float ptr [ESP + 0x54]          ; 004f5293
    FCOMP float ptr [ESP + 0x58]        ; 004f5297
    FNSTSW AX                           ; 004f529b
    SAHF                                ; 004f529d
    JNC 0x004f50c3                      ; 004f529e
        ;   XREF to: 004f50c3 (CONDITIONAL_JUMP)  ; LAB_004f50c3
    FLD float ptr [ESP + 0x54]          ; 004f52a4
    FCOMP float ptr [ESP + 0x38]        ; 004f52a8
    FNSTSW AX                           ; 004f52ac
    SAHF                                ; 004f52ae
    JBE 0x004f50c3                      ; 004f52af
        ;   XREF to: 004f50c3 (CONDITIONAL_JUMP)  ; LAB_004f50c3
    FLD1                                ; 004f52b5
    FLD float ptr [ESP + 0x50]          ; 004f52b7
    FXCH                                ; 004f52bb
    FDIV float ptr [ESP + 0x58]         ; 004f52bd
    FXCH                                ; 004f52c1
    FMUL ST1                            ; 004f52c3
    FLD float ptr [ESP + 0x54]          ; 004f52c5
    FMULP ST2                           ; 004f52c9
    FST float ptr [ESP + 0x50]          ; 004f52cb
    FMUL float ptr [ESP + 0x50]         ; 004f52cf
    FXCH                                ; 004f52d3
    FST float ptr [ESP + 0x54]          ; 004f52d5
    FMUL float ptr [ESP + 0x54]         ; 004f52d9
    FADDP                               ; 004f52dd
    FSTP float ptr [ESP + 0x3c]         ; 004f52df
    CMP dword ptr [ESP + 0x3c],0x3f800000 ; 004f52e3
    JGE 0x004f50c3                      ; 004f52eb
        ;   XREF to: 004f50c3 (CONDITIONAL_JUMP)  ; LAB_004f50c3
    FLD float ptr [ESP + 0x58]          ; 004f52f1
    FDIV float ptr [EDX + 0x34]         ; 004f52f5
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f52f8
    SAR EAX,0x1                         ; 004f52fc
    FLD1                                ; 004f52fe
    FSUBRP                              ; 004f5300
    ADD EAX,dword ptr [0x01caf5b4]      ; 004f5302 | DAT_01caf5b4
    FLD float ptr [0x01d098e4]          ; 004f5308 | DAT_01d098e4
    FMUL float ptr [ESP + 0x4c]         ; 004f530e
    MOV dword ptr [ESP + 0x18],EAX      ; 004f5312
    FLD1                                ; 004f5316
    FSUB float ptr [ESP + 0x18]         ; 004f5318
    FXCH                                ; 004f531c
    FMULP ST2                           ; 004f531e
    FMULP                               ; 004f5320
    FLD float ptr [EDX + 0x40]          ; 004f5322
    FMUL ST1                            ; 004f5325
    FLD float ptr [EDX + 0x44]          ; 004f5327
    FMUL ST2                            ; 004f532a
    FLD float ptr [EDX + 0x48]          ; 004f532c
    FMULP ST3                           ; 004f532f
    FXCH                                ; 004f5331
    FADD float ptr [ESP + 0x2c]         ; 004f5333
    FXCH                                ; 004f5337
    FADD float ptr [ESP + 0x30]         ; 004f5339
    FXCH ST2                            ; 004f533d
    FADD float ptr [ESP + 0x34]         ; 004f533f
    FXCH                                ; 004f5343
    FSTP float ptr [ESP + 0x2c]         ; 004f5345
    FXCH                                ; 004f5349
    FSTP float ptr [ESP + 0x30]         ; 004f534b
    FSTP float ptr [ESP + 0x34]         ; 004f534f
    JMP 0x004f50c3                      ; 004f5353
        ;   XREF to: 004f50c3 (UNCONDITIONAL_JUMP)  ; LAB_004f50c3
    MOV dword ptr [EDI + 0x8],0x3f800000 ; 004f5358
        ;   Label: LAB_004f5358
    JMP 0x004f5137                      ; 004f535f
        ;   XREF to: 004f5137 (UNCONDITIONAL_JUMP)  ; LAB_004f5137

