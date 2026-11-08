; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00490150(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_00490430 at 00490459
;   FUN_004904d0 at 00490736
;
; Referenced Globals:
;   undefined4 DAT_005dbbcc
;   undefined4 DAT_005dbbd0
;   undefined4 DAT_005dbbd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490150
        ;   Label: FUN_00490150
    PUSH EBP                            ; 00490151
    MOV EBP,ESP                         ; 00490152
    SUB ESP,0x58                        ; 00490154
    AND ESP,0xfffffff8                  ; 00490157
    MOV EDX,dword ptr [EBP + 0xc]       ; 0049015a
    FLD float ptr [EDX + 0x44]          ; 0049015d
    FLD float ptr [EDX + 0x48]          ; 00490160
    FSUB float ptr [EDX + 0x40]         ; 00490163
    FXCH                                ; 00490166
    FSUB float ptr [EDX + 0x3c]         ; 00490168
    FXCH                                ; 0049016b
    FST float ptr [ESP + 0x1c]          ; 0049016d
    FCHS                                ; 00490171
    FST float ptr [ESP + 0x50]          ; 00490173
    FMUL float ptr [ESP + 0x50]         ; 00490177
    FXCH                                ; 0049017b
    FST float ptr [ESP + 0x20]          ; 0049017d
    FMUL float ptr [ESP + 0x20]         ; 00490181
    FADDP                               ; 00490185
    FLDZ                                ; 00490187
    FXCH                                ; 00490189
    FSTP double ptr [ESP + 0x10]        ; 0049018b
    FCOMP double ptr [ESP + 0x10]       ; 0049018f
    FNSTSW AX                           ; 00490193
    SAHF                                ; 00490195
    JNC 0x004903b0                      ; 00490196
        ;   XREF to: 004903b0 (CONDITIONAL_JUMP)  ; LAB_004903b0
    FLD double ptr [ESP + 0x10]         ; 0049019c
    FSQRT                               ; 004901a0
    FLD float ptr [ESP + 0x50]          ; 004901a2
    FLD1                                ; 004901a6
    FDIVRP ST2,ST0                      ; 004901a8
    FMUL ST1                            ; 004901aa
    FLD float ptr [EDX + 0x10]          ; 004901ac
    FSUB float ptr [EDX + 0x3c]         ; 004901af
    FXCH                                ; 004901b2
    FSTP float ptr [ESP + 0x50]         ; 004901b4
    FMUL float ptr [ESP + 0x50]         ; 004901b8
    FLD float ptr [ESP + 0x20]          ; 004901bc
    FMULP ST2                           ; 004901c0
    FLD float ptr [EDX + 0x14]          ; 004901c2
    FSUB float ptr [EDX + 0x40]         ; 004901c5
    FXCH ST2                            ; 004901c8
    FSTP float ptr [ESP + 0x4c]         ; 004901ca
    FXCH                                ; 004901ce
    FMUL float ptr [ESP + 0x4c]         ; 004901d0
    FADDP                               ; 004901d4
    FLDZ                                ; 004901d6
    FCOMPP                              ; 004901d8
    FNSTSW AX                           ; 004901da
    SAHF                                ; 004901dc
    JC 0x004903b7                       ; 004901dd
        ;   XREF to: 004903b7 (CONDITIONAL_JUMP)  ; LAB_004903b7
    FLD float ptr [EDX + 0x18]          ; 004901e3
        ;   Label: LAB_004901e3
    FMUL float ptr [ESP + 0x50]         ; 004901e6
    FLD float ptr [EDX + 0x1c]          ; 004901ea
    FMUL float ptr [ESP + 0x4c]         ; 004901ed
    FADDP                               ; 004901f1
    FST float ptr [ESP + 0x28]          ; 004901f3
    FLDZ                                ; 004901f7
    FCOMPP                              ; 004901f9
    FNSTSW AX                           ; 004901fb
    SAHF                                ; 004901fd
    JNC 0x004903b0                      ; 004901fe
        ;   XREF to: 004903b0 (CONDITIONAL_JUMP)  ; LAB_004903b0
    FLD float ptr [ESP + 0x50]          ; 00490204
    FLD float ptr [EDX + 0x3c]          ; 00490208
    FMUL ST1                            ; 0049020b
    FLD float ptr [EDX + 0x10]          ; 0049020d
    FMULP ST2                           ; 00490210
    FLD float ptr [ESP + 0x4c]          ; 00490212
    FLD float ptr [EDX + 0x40]          ; 00490216
    FMUL ST1                            ; 00490219
    FLD float ptr [EDX + 0x14]          ; 0049021b
    FMULP ST2                           ; 0049021e
    FADDP ST2,ST0                       ; 00490220
    FADDP ST2,ST0                       ; 00490222
    FSTP float ptr [ESP + 0x40]         ; 00490224
    FCOMP float ptr [ESP + 0x40]        ; 00490228
    FNSTSW AX                           ; 0049022c
    SAHF                                ; 0049022e
    JA 0x004903b0                       ; 0049022f
        ;   XREF to: 004903b0 (CONDITIONAL_JUMP)  ; LAB_004903b0
    FLD float ptr [ESP + 0x50]          ; 00490235
    FLD ST0                             ; 00490239
    FMUL float ptr [EDX + 0x20]         ; 0049023b
    FLD float ptr [ESP + 0x4c]          ; 0049023e
    FLD ST0                             ; 00490242
    FMUL float ptr [EDX + 0x20]         ; 00490244
    FXCH ST2                            ; 00490247
    FADD float ptr [EDX + 0x10]         ; 00490249
    FXCH ST2                            ; 0049024c
    FADD float ptr [EDX + 0x14]         ; 0049024e
    FXCH ST2                            ; 00490251
    FST float ptr [ESP + 0x3c]          ; 00490253
    FMULP ST3                           ; 00490257
    FXCH                                ; 00490259
    FST float ptr [ESP + 0x44]          ; 0049025b
    FMULP                               ; 0049025f
    FADDP                               ; 00490261
    FSUBR float ptr [ESP + 0x40]        ; 00490263
    FST float ptr [ESP + 0x24]          ; 00490267
    FCOMP float ptr [ESP + 0x28]        ; 0049026b
    FNSTSW AX                           ; 0049026f
    SAHF                                ; 00490271
    JA 0x004903b0                       ; 00490272
        ;   XREF to: 004903b0 (CONDITIONAL_JUMP)  ; LAB_004903b0
    FLD float ptr [ESP + 0x24]          ; 00490278
    FDIV float ptr [ESP + 0x28]         ; 0049027c
    FST float ptr [ESP + 0x24]          ; 00490280
    FCOMP float ptr [EDX]               ; 00490284
    FNSTSW AX                           ; 00490286
    SAHF                                ; 00490288
    JNC 0x004903b0                      ; 00490289
        ;   XREF to: 004903b0 (CONDITIONAL_JUMP)  ; LAB_004903b0
    FLD float ptr [ESP + 0x20]          ; 0049028f
    FABS                                ; 00490293
    FLD float ptr [ESP + 0x1c]          ; 00490295
    FABS                                ; 00490299
    FLD float ptr [ESP + 0x24]          ; 0049029b
    FLD float ptr [EDX + 0x18]          ; 0049029f
    FMUL ST1                            ; 004902a2
    FLD float ptr [EDX + 0x1c]          ; 004902a4
    FMULP ST2                           ; 004902a7
    FADD float ptr [ESP + 0x3c]         ; 004902a9
    FXCH                                ; 004902ad
    FADD float ptr [ESP + 0x44]         ; 004902af
    FXCH                                ; 004902b3
    FSTP float ptr [EDX + 0x54]         ; 004902b5
    FSTP float ptr [EDX + 0x58]         ; 004902b8
    FCOMPP                              ; 004902bb
    FNSTSW AX                           ; 004902bd
    SAHF                                ; 004902bf
    JNC 0x004903d2                      ; 004902c0
        ;   XREF to: 004903d2 (CONDITIONAL_JUMP)  ; LAB_004903d2
    FLD float ptr [EDX + 0x54]          ; 004902c6
    FSUB float ptr [EDX + 0x3c]         ; 004902c9
    FDIV float ptr [ESP + 0x20]         ; 004902cc
    FSTP float ptr [EDX + 0x50]         ; 004902d0
        ;   Label: LAB_004902d0
    FLDZ                                ; 004902d3
    FLD float ptr [EDX + 0x50]          ; 004902d5
    FSTP double ptr [ESP + 0x8]         ; 004902d8
    FCOMP double ptr [ESP + 0x8]        ; 004902dc
    FNSTSW AX                           ; 004902e0
    SAHF                                ; 004902e2
    JBE 0x004903e1                      ; 004902e3
        ;   XREF to: 004903e1 (CONDITIONAL_JUMP)  ; LAB_004903e1
    MOV dword ptr [EDX + 0x50],0x0      ; 004902e9
    FLD float ptr [EDX + 0x3c]          ; 004902f0
    MOV EAX,dword ptr [EDX + 0x40]      ; 004902f3
    MOV dword ptr [EDX + 0x58],EAX      ; 004902f6
        ;   Label: LAB_004902f6
    FSTP float ptr [EDX + 0x54]         ; 004902f9
    FLD float ptr [EDX + 0x18]          ; 004902fc
    FMUL ST0                            ; 004902ff
    FLD float ptr [EDX + 0x18]          ; 00490301
    FLD float ptr [EDX + 0x54]          ; 00490304
    FSUB float ptr [EDX + 0x10]         ; 00490307
    FXCH                                ; 0049030a
    FMUL ST1                            ; 0049030c
    FLD float ptr [EDX + 0x1c]          ; 0049030e
    FMUL ST0                            ; 00490311
    FLD ST2                             ; 00490313
    FMULP ST3                           ; 00490315
    FLD float ptr [EDX + 0x58]          ; 00490317
    FSUB float ptr [EDX + 0x14]         ; 0049031a
    FLD float ptr [EDX + 0x1c]          ; 0049031d
    FMUL ST1                            ; 00490320
    FLD ST1                             ; 00490322
    FXCH ST3                            ; 00490324
    FADDP ST6,ST0                       ; 00490326
    FXCH ST2                            ; 00490328
    FMULP                               ; 0049032a
    FXCH ST4                            ; 0049032c
    FST float ptr [ESP + 0x38]          ; 0049032e
    FMUL float ptr [0x005dbbd0]         ; 00490332 | DAT_005dbbd0
    FXCH ST4                            ; 00490338
    FADDP ST3,ST0                       ; 0049033a
    FADDP                               ; 0049033c
    FLD float ptr [EDX + 0x20]          ; 0049033e
    FMUL ST0                            ; 00490341
    FXCH                                ; 00490343
    FMUL float ptr [0x005dbbcc]         ; 00490345 | DAT_005dbbcc
    FXCH                                ; 0049034b
    FSUBP ST2,ST0                       ; 0049034d
    FXCH ST2                            ; 0049034f
    FMULP                               ; 00490351
    FXCH                                ; 00490353
    FST float ptr [ESP + 0x48]          ; 00490355
    FMUL float ptr [ESP + 0x48]         ; 00490359
    FSUBRP                              ; 0049035d
    FLDZ                                ; 0049035f
    FXCH                                ; 00490361
    FSTP float ptr [ESP + 0x18]         ; 00490363
    FCOMP float ptr [ESP + 0x18]        ; 00490367
    FNSTSW AX                           ; 0049036b
    SAHF                                ; 0049036d
    JA 0x004903b0                       ; 0049036e
        ;   XREF to: 004903b0 (CONDITIONAL_JUMP)  ; LAB_004903b0
    FLD float ptr [ESP + 0x48]          ; 00490370
    FCHS                                ; 00490374
    FLD float ptr [ESP + 0x18]          ; 00490376
    FSQRT                               ; 0049037a
    FSUBP                               ; 0049037c
    FLD float ptr [ESP + 0x38]          ; 0049037e
    FMUL float ptr [0x005dbbd4]         ; 00490382 | DAT_005dbbd4
    FDIVP                               ; 00490388
    FLDZ                                ; 0049038a
    FXCH                                ; 0049038c
    FST float ptr [EDX + 0x4c]          ; 0049038e
    FSTP double ptr [ESP]               ; 00490391
    FCOMP double ptr [ESP]              ; 00490394
    FNSTSW AX                           ; 00490397
    SAHF                                ; 00490399
    JA 0x004903b0                       ; 0049039a
        ;   XREF to: 004903b0 (CONDITIONAL_JUMP)  ; LAB_004903b0
    FLD1                                ; 0049039c
    FCOMP double ptr [ESP]              ; 0049039e
    FNSTSW AX                           ; 004903a1
    SAHF                                ; 004903a3
    JC 0x004903b0                       ; 004903a4
        ;   XREF to: 004903b0 (CONDITIONAL_JUMP)  ; LAB_004903b0
    FLD float ptr [EDX + 0x4c]          ; 004903a6
    FCOMP float ptr [EDX]               ; 004903a9
    FNSTSW AX                           ; 004903ab
    SAHF                                ; 004903ad
    JC 0x00490418                       ; 004903ae
        ;   XREF to: 00490418 (CONDITIONAL_JUMP)  ; LAB_00490418
    XOR EAX,EAX                         ; 004903b0
        ;   Label: LAB_004903b0
    MOV ESP,EBP                         ; 004903b2
    POP EBP                             ; 004903b4
    POP EBX                             ; 004903b5
    RET                                 ; 004903b6
    MOV BL,byte ptr [ESP + 0x4f]        ; 004903b7
        ;   Label: LAB_004903b7
    MOV AH,byte ptr [ESP + 0x53]        ; 004903bb
    XOR BL,0x80                         ; 004903bf
    XOR AH,0x80                         ; 004903c2
    MOV byte ptr [ESP + 0x4f],BL        ; 004903c5
    MOV byte ptr [ESP + 0x53],AH        ; 004903c9
    JMP 0x004901e3                      ; 004903cd
        ;   XREF to: 004901e3 (UNCONDITIONAL_JUMP)  ; LAB_004901e3
    FLD float ptr [EDX + 0x58]          ; 004903d2
        ;   Label: LAB_004903d2
    FSUB float ptr [EDX + 0x40]         ; 004903d5
    FDIV float ptr [ESP + 0x1c]         ; 004903d8
    JMP 0x004902d0                      ; 004903dc
        ;   XREF to: 004902d0 (UNCONDITIONAL_JUMP)  ; LAB_004902d0
    FLD1                                ; 004903e1
        ;   Label: LAB_004903e1
    FCOMP double ptr [ESP + 0x8]        ; 004903e3
    FNSTSW AX                           ; 004903e7
    SAHF                                ; 004903e9
    JNC 0x004903fe                      ; 004903ea
        ;   XREF to: 004903fe (CONDITIONAL_JUMP)  ; LAB_004903fe
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 004903ec
    FLD float ptr [EDX + 0x44]          ; 004903f3
    MOV EAX,dword ptr [EDX + 0x48]      ; 004903f6
    JMP 0x004902f6                      ; 004903f9
        ;   XREF to: 004902f6 (UNCONDITIONAL_JUMP)  ; LAB_004902f6
    FLD float ptr [ESP + 0x24]          ; 004903fe
        ;   Label: LAB_004903fe
    FLDZ                                ; 00490402
    FCOMPP                              ; 00490404
    FNSTSW AX                           ; 00490406
    SAHF                                ; 00490408
    JBE 0x00490411                      ; 00490409
        ;   XREF to: 00490411 (CONDITIONAL_JUMP)  ; LAB_00490411
    XOR ECX,ECX                         ; 0049040b
    MOV dword ptr [ESP + 0x24],ECX      ; 0049040d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00490411
        ;   Label: LAB_00490411
    MOV dword ptr [EDX + 0x4c],EAX      ; 00490415
    MOV EAX,0x1                         ; 00490418
        ;   Label: LAB_00490418
    MOV ESP,EBP                         ; 0049041d
    POP EBP                             ; 0049041f
    POP EBX                             ; 00490420
    RET                                 ; 00490421

