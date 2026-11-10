; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dcube_cpp_FUN_004560f0(undefined4 *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dcube.cpp_FUN_00458210 at 0045824a
;   core_dcube.cpp_triangleCylinderCollision_FUN_00456cd0 at 00456f0f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004560f0
        ;   Label: core_dcube.cpp_FUN_004560f0
    PUSH EBP                            ; 004560f1
    MOV EBP,ESP                         ; 004560f2
    SUB ESP,0x3c                        ; 004560f4
    AND ESP,0xfffffff8                  ; 004560f7
    MOV EDX,dword ptr [EBP + 0xc]       ; 004560fa
    MOV EBX,dword ptr [EBP + 0x10]      ; 004560fd
    MOV ECX,dword ptr [EBP + 0x14]      ; 00456100
    FLD float ptr [EDX + 0x10]          ; 00456103
    FMUL float ptr [ECX + 0x4]          ; 00456106
    FLD float ptr [EDX + 0xc]           ; 00456109
    FMUL float ptr [ECX]                ; 0045610c
    FADDP                               ; 0045610e
    FLD float ptr [EDX + 0x14]          ; 00456110
    FMUL float ptr [ECX + 0x8]          ; 00456113
    FADDP                               ; 00456116
    FST float ptr [ESP + 0xc]           ; 00456118
    FLDZ                                ; 0045611c
    FCOMPP                              ; 0045611e
    FNSTSW AX                           ; 00456120
    SAHF                                ; 00456122
    JNC 0x00456285                      ; 00456123
        ;   XREF to: 00456285 (CONDITIONAL_JUMP)  ; LAB_00456285
    FLD float ptr [EDX + 0xc]           ; 00456129
    FMUL float ptr [EBX]                ; 0045612c
    FADD float ptr [EDX + 0x18]         ; 0045612e
    FLD float ptr [EDX + 0x10]          ; 00456131
    FMUL float ptr [EBX + 0x4]          ; 00456134
    FADDP                               ; 00456137
    FLD float ptr [EDX + 0x14]          ; 00456139
    FMUL float ptr [EBX + 0x8]          ; 0045613c
    FADDP                               ; 0045613f
    FCHS                                ; 00456141
    FST float ptr [ESP + 0x4]           ; 00456143
    FLDZ                                ; 00456147
    FCOMPP                              ; 00456149
    FNSTSW AX                           ; 0045614b
    SAHF                                ; 0045614d
    JA 0x00456285                       ; 0045614e
        ;   XREF to: 00456285 (CONDITIONAL_JUMP)  ; LAB_00456285
    FLD float ptr [ESP + 0x4]           ; 00456154
    FCOMP float ptr [ESP + 0xc]         ; 00456158
    FNSTSW AX                           ; 0045615c
    SAHF                                ; 0045615e
    JA 0x00456285                       ; 0045615f
        ;   XREF to: 00456285 (CONDITIONAL_JUMP)  ; LAB_00456285
    FLD float ptr [ESP + 0x4]           ; 00456165
    FDIV float ptr [ESP + 0xc]          ; 00456169
    FST float ptr [ESP + 0x4]           ; 0045616d
    FMUL float ptr [ECX]                ; 00456171
    FLD float ptr [ESP + 0x4]           ; 00456173
    FMUL float ptr [ECX + 0x4]          ; 00456177
    FLD float ptr [ESP + 0x4]           ; 0045617a
    FMUL float ptr [ECX + 0x8]          ; 0045617e
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00456181
    FXCH ST2                            ; 00456184
    FADD float ptr [EBX]                ; 00456186
    FXCH                                ; 00456188
    FADD float ptr [EBX + 0x4]          ; 0045618a
    FXCH ST2                            ; 0045618d
    FADD float ptr [EBX + 0x8]          ; 0045618f
    FXCH                                ; 00456192
    FSTP float ptr [ESP + 0x10]         ; 00456194
    FXCH                                ; 00456198
    FSTP float ptr [ESP + 0x14]         ; 0045619a
    FSTP float ptr [ESP + 0x18]         ; 0045619e
    CMP EAX,0x1                         ; 004561a2
    JNC 0x0045632d                      ; 004561a5
        ;   XREF to: 0045632d (CONDITIONAL_JUMP)  ; LAB_0045632d
    TEST EAX,EAX                        ; 004561ab
    JNZ 0x00456207                      ; 004561ad
        ;   XREF to: 00456207 (CONDITIONAL_JUMP)  ; LAB_00456207
    FLD float ptr [ESP + 0x14]          ; 004561af
    MOV ECX,dword ptr [EDX + 0x4]       ; 004561b3
    FLD float ptr [ESP + 0x18]          ; 004561b6
    MOV EAX,dword ptr [EDX]             ; 004561ba
    FLD float ptr [ECX + 0x4]           ; 004561bc
    MOV EDX,dword ptr [EDX + 0x8]       ; 004561bf
    FLD float ptr [ECX + 0x8]           ; 004561c2
    FLD float ptr [EDX + 0x4]           ; 004561c5
    FLD float ptr [EDX + 0x8]           ; 004561c8
    FXCH ST5                            ; 004561cb
    FSUB float ptr [EAX + 0x4]          ; 004561cd
    FXCH ST4                            ; 004561d0
    FSUB float ptr [EAX + 0x8]          ; 004561d2
    FXCH ST4                            ; 004561d5
    FSTP float ptr [ESP + 0x28]         ; 004561d7
    FXCH ST3                            ; 004561db
    FSTP float ptr [ESP + 0x20]         ; 004561dd
    FXCH                                ; 004561e1
    FSUB float ptr [EAX + 0x4]          ; 004561e3
    FXCH                                ; 004561e6
    FSUB float ptr [EAX + 0x8]          ; 004561e8
    FXCH                                ; 004561eb
    FSTP float ptr [ESP + 0x2c]         ; 004561ed
    FSTP float ptr [ESP + 0x1c]         ; 004561f1
    FSUB float ptr [EAX + 0x4]          ; 004561f5
    FXCH                                ; 004561f8
        ;   Label: LAB_004561f8
    FSUB float ptr [EAX + 0x8]          ; 004561fa
    FXCH                                ; 004561fd
        ;   Label: LAB_004561fd
    FSTP float ptr [ESP + 0x30]         ; 004561ff
    FSTP float ptr [ESP + 0x24]         ; 00456203
    FLD float ptr [ESP + 0x24]          ; 00456207
        ;   Label: LAB_00456207
    FLD float ptr [ESP + 0x2c]          ; 0045620b
    FMUL ST1                            ; 0045620f
    FLD float ptr [ESP + 0x30]          ; 00456211
    FLD float ptr [ESP + 0x1c]          ; 00456215
    FMUL ST1                            ; 00456219
    FSUBP ST2,ST0                       ; 0045621b
    FLD1                                ; 0045621d
    FDIVRP ST2,ST0                      ; 0045621f
    FLD float ptr [ESP + 0x28]          ; 00456221
    FMULP ST3                           ; 00456225
    FMUL float ptr [ESP + 0x20]         ; 00456227
    FSUBP ST2,ST0                       ; 0045622b
    FSTP float ptr [ESP + 0x38]         ; 0045622d
    FMUL float ptr [ESP + 0x38]         ; 00456231
    FST float ptr [ESP + 0x8]           ; 00456235
    FLDZ                                ; 00456239
    FCOMPP                              ; 0045623b
    FNSTSW AX                           ; 0045623d
    SAHF                                ; 0045623f
    JA 0x00456285                       ; 00456240
        ;   XREF to: 00456285 (CONDITIONAL_JUMP)  ; LAB_00456285
    FLD float ptr [ESP + 0x2c]          ; 00456242
    FMUL float ptr [ESP + 0x20]         ; 00456246
    FLD float ptr [ESP + 0x1c]          ; 0045624a
    FMUL float ptr [ESP + 0x28]         ; 0045624e
    FSUBP                               ; 00456252
    FMUL float ptr [ESP + 0x38]         ; 00456254
    FST float ptr [ESP]                 ; 00456258
    FLDZ                                ; 0045625b
    FCOMPP                              ; 0045625d
    FNSTSW AX                           ; 0045625f
    SAHF                                ; 00456261
    JA 0x00456285                       ; 00456262
        ;   XREF to: 00456285 (CONDITIONAL_JUMP)  ; LAB_00456285
    FLD float ptr [ESP + 0x8]           ; 00456264
    FADD float ptr [ESP]                ; 00456268
    FLD1                                ; 0045626b
    FCOMPP                              ; 0045626d
    FNSTSW AX                           ; 0045626f
    SAHF                                ; 00456271
    JC 0x00456285                       ; 00456272
        ;   XREF to: 00456285 (CONDITIONAL_JUMP)  ; LAB_00456285
    MOV EAX,dword ptr [ESP + 0x4]       ; 00456274
    MOV dword ptr [ESP + 0x34],EAX      ; 00456278
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045627c
    MOV ESP,EBP                         ; 00456280
    POP EBP                             ; 00456282
    POP EBX                             ; 00456283
    RET                                 ; 00456284
    MOV dword ptr [ESP + 0x34],0xbf800000 ; 00456285
        ;   Label: LAB_00456285
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045628d
    MOV ESP,EBP                         ; 00456291
    POP EBP                             ; 00456293
    POP EBX                             ; 00456294
    RET                                 ; 00456295
    FLD float ptr [ESP + 0x10]          ; 00456296
        ;   Label: LAB_00456296
    MOV ECX,dword ptr [EDX + 0x4]       ; 0045629a
    FLD float ptr [ESP + 0x18]          ; 0045629d
    MOV EAX,dword ptr [EDX]             ; 004562a1
    FLD float ptr [ECX]                 ; 004562a3
    MOV EDX,dword ptr [EDX + 0x8]       ; 004562a5
    FLD float ptr [ECX + 0x8]           ; 004562a8
    FLD float ptr [EDX]                 ; 004562ab
    FLD float ptr [EDX + 0x8]           ; 004562ad
    FXCH ST5                            ; 004562b0
    FSUB float ptr [EAX]                ; 004562b2
    FXCH ST4                            ; 004562b4
    FSUB float ptr [EAX + 0x8]          ; 004562b6
    FXCH ST4                            ; 004562b9
    FSTP float ptr [ESP + 0x28]         ; 004562bb
    FXCH ST3                            ; 004562bf
    FSTP float ptr [ESP + 0x20]         ; 004562c1
    FXCH                                ; 004562c5
    FSUB float ptr [EAX]                ; 004562c7
    FXCH                                ; 004562c9
    FSUB float ptr [EAX + 0x8]          ; 004562cb
    FXCH                                ; 004562ce
    FSTP float ptr [ESP + 0x2c]         ; 004562d0
    FSTP float ptr [ESP + 0x1c]         ; 004562d4
    FSUB float ptr [EAX]                ; 004562d8
    JMP 0x004561f8                      ; 004562da
        ;   XREF to: 004561f8 (UNCONDITIONAL_JUMP)  ; LAB_004561f8
    FLD float ptr [ESP + 0x10]          ; 004562df
        ;   Label: LAB_004562df
    MOV ECX,dword ptr [EDX + 0x4]       ; 004562e3
    FLD float ptr [ESP + 0x14]          ; 004562e6
    MOV EAX,dword ptr [EDX]             ; 004562ea
    FLD float ptr [ECX]                 ; 004562ec
    MOV EDX,dword ptr [EDX + 0x8]       ; 004562ee
    FLD float ptr [ECX + 0x4]           ; 004562f1
    FLD float ptr [EDX]                 ; 004562f4
    FLD float ptr [EDX + 0x4]           ; 004562f6
    FXCH ST5                            ; 004562f9
    FSUB float ptr [EAX]                ; 004562fb
    FXCH ST4                            ; 004562fd
    FSUB float ptr [EAX + 0x4]          ; 004562ff
    FXCH ST4                            ; 00456302
    FSTP float ptr [ESP + 0x28]         ; 00456304
    FXCH ST3                            ; 00456308
    FSTP float ptr [ESP + 0x20]         ; 0045630a
    FXCH                                ; 0045630e
    FSUB float ptr [EAX]                ; 00456310
    FXCH                                ; 00456312
    FSUB float ptr [EAX + 0x4]          ; 00456314
    FXCH                                ; 00456317
    FSTP float ptr [ESP + 0x2c]         ; 00456319
    FSTP float ptr [ESP + 0x1c]         ; 0045631d
    FSUB float ptr [EAX]                ; 00456321
    FXCH                                ; 00456323
    FSUB float ptr [EAX + 0x4]          ; 00456325
    JMP 0x004561fd                      ; 00456328
        ;   XREF to: 004561fd (UNCONDITIONAL_JUMP)  ; LAB_004561fd
    JBE 0x00456296                      ; 0045632d
        ;   XREF to: 00456296 (CONDITIONAL_JUMP)  ; LAB_00456296
        ;   Label: LAB_0045632d
    CMP EAX,0x2                         ; 00456333
    JZ 0x004562df                       ; 00456336
        ;   XREF to: 004562df (CONDITIONAL_JUMP)  ; LAB_004562df
    JMP 0x00456207                      ; 00456338
        ;   XREF to: 00456207 (UNCONDITIONAL_JUMP)  ; LAB_00456207

