; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_xform.cpp_normalizeMatrix_FUN_005f51e0(CMatrix3x4f * matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f51e0
        ;   Label: core_xform.cpp_normalizeMatrix_FUN_005f51e0
    PUSH ESI                            ; 005f51e1
    PUSH EDI                            ; 005f51e2
    PUSH EBP                            ; 005f51e3
    MOV EBP,ESP                         ; 005f51e4
    SUB ESP,0x30                        ; 005f51e6
    AND ESP,0xfffffff8                  ; 005f51e9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005f51ec
    FLD float ptr [EDX + 0x4]           ; 005f51ef
    FMUL ST0                            ; 005f51f2
    FLD float ptr [EDX]                 ; 005f51f4
    FMUL ST0                            ; 005f51f6
    FADDP                               ; 005f51f8
    FLD float ptr [EDX + 0x8]           ; 005f51fa
    FMUL ST0                            ; 005f51fd
    FADDP                               ; 005f51ff
    FLDZ                                ; 005f5201
    FXCH                                ; 005f5203
    FSTP double ptr [ESP]               ; 005f5205
    FCOMP double ptr [ESP]              ; 005f5208
    FNSTSW AX                           ; 005f520b
    SAHF                                ; 005f520d
    JNC 0x005f5262                      ; 005f520e
        ;   XREF to: 005f5262 (CONDITIONAL_JUMP)  ; LAB_005f5262
    MOV ECX,dword ptr [ESP + 0x4]       ; 005f5210
    MOV EBX,dword ptr [ESP]             ; 005f5214
    CMP ECX,0x3ff00000                  ; 005f5217
    JNZ 0x005f5223                      ; 005f521d
        ;   XREF to: 005f5223 (CONDITIONAL_JUMP)  ; LAB_005f5223
    TEST EBX,EBX                        ; 005f521f
    JZ 0x005f5262                       ; 005f5221
        ;   XREF to: 005f5262 (CONDITIONAL_JUMP)  ; LAB_005f5262
    FLD double ptr [ESP]                ; 005f5223
        ;   Label: LAB_005f5223
    FSQRT                               ; 005f5226
    FLD1                                ; 005f5228
    FDIVRP                              ; 005f522a
    FLD float ptr [EDX]                 ; 005f522c
    FLD ST0                             ; 005f522e
    FXCH ST2                            ; 005f5230
    FSTP double ptr [ESP]               ; 005f5232
    FXCH                                ; 005f5235
    FMUL double ptr [ESP]               ; 005f5237
    FLD float ptr [EDX + 0x4]           ; 005f523a
    FLD ST0                             ; 005f523d
    FMUL double ptr [ESP]               ; 005f523f
    FLD float ptr [EDX + 0x8]           ; 005f5242
    FLD ST0                             ; 005f5245
    FMUL double ptr [ESP]               ; 005f5247
    FXCH ST4                            ; 005f524a
    FSTP ST5                            ; 005f524c
    FXCH                                ; 005f524e
    FSTP ST2                            ; 005f5250
    FXCH ST2                            ; 005f5252
    FSTP ST2                            ; 005f5254
    FXCH ST2                            ; 005f5256
    FSTP float ptr [EDX]                ; 005f5258
    FXCH                                ; 005f525a
    FSTP float ptr [EDX + 0x4]          ; 005f525c
    FSTP float ptr [EDX + 0x8]          ; 005f525f
    FLD float ptr [EDX + 0x10]          ; 005f5262
        ;   Label: LAB_005f5262
    FMUL ST0                            ; 005f5265
    FLD float ptr [EDX + 0x14]          ; 005f5267
    FMUL ST0                            ; 005f526a
    FADDP                               ; 005f526c
    FLD float ptr [EDX + 0x18]          ; 005f526e
    FMUL ST0                            ; 005f5271
    FADDP                               ; 005f5273
    FLDZ                                ; 005f5275
    FXCH                                ; 005f5277
    FSTP double ptr [ESP + 0x10]        ; 005f5279
    FCOMP double ptr [ESP + 0x10]       ; 005f527d
    FNSTSW AX                           ; 005f5281
    SAHF                                ; 005f5283
    JNC 0x005f52e0                      ; 005f5284
        ;   XREF to: 005f52e0 (CONDITIONAL_JUMP)  ; LAB_005f52e0
    MOV ESI,dword ptr [ESP + 0x14]      ; 005f5286
    MOV EDI,dword ptr [ESP + 0x10]      ; 005f528a
    CMP ESI,0x3ff00000                  ; 005f528e
    JNZ 0x005f529a                      ; 005f5294
        ;   XREF to: 005f529a (CONDITIONAL_JUMP)  ; LAB_005f529a
    TEST EDI,EDI                        ; 005f5296
    JZ 0x005f52e0                       ; 005f5298
        ;   XREF to: 005f52e0 (CONDITIONAL_JUMP)  ; LAB_005f52e0
    FLD double ptr [ESP + 0x10]         ; 005f529a
        ;   Label: LAB_005f529a
    FSQRT                               ; 005f529e
    FLD1                                ; 005f52a0
    FDIVRP                              ; 005f52a2
    FLD float ptr [EDX + 0x10]          ; 005f52a4
    FLD ST0                             ; 005f52a7
    FXCH ST2                            ; 005f52a9
    FSTP double ptr [ESP + 0x10]        ; 005f52ab
    FXCH                                ; 005f52af
    FMUL double ptr [ESP + 0x10]        ; 005f52b1
    FLD float ptr [EDX + 0x14]          ; 005f52b5
    FLD ST0                             ; 005f52b8
    FMUL double ptr [ESP + 0x10]        ; 005f52ba
    FLD float ptr [EDX + 0x18]          ; 005f52be
    FLD ST0                             ; 005f52c1
    FMUL double ptr [ESP + 0x10]        ; 005f52c3
    FXCH ST4                            ; 005f52c7
    FSTP ST5                            ; 005f52c9
    FXCH                                ; 005f52cb
    FSTP ST2                            ; 005f52cd
    FXCH ST2                            ; 005f52cf
    FSTP ST2                            ; 005f52d1
    FXCH ST2                            ; 005f52d3
    FSTP float ptr [EDX + 0x10]         ; 005f52d5
    FXCH                                ; 005f52d8
    FSTP float ptr [EDX + 0x14]         ; 005f52da
    FSTP float ptr [EDX + 0x18]         ; 005f52dd
    FLD float ptr [EDX + 0x20]          ; 005f52e0
        ;   Label: LAB_005f52e0
    FMUL ST0                            ; 005f52e3
    FLD float ptr [EDX + 0x24]          ; 005f52e5
    FMUL ST0                            ; 005f52e8
    FADDP                               ; 005f52ea
    FLD float ptr [EDX + 0x28]          ; 005f52ec
    FMUL ST0                            ; 005f52ef
    FADDP                               ; 005f52f1
    FLDZ                                ; 005f52f3
    FXCH                                ; 005f52f5
    FSTP double ptr [ESP + 0x8]         ; 005f52f7
    FCOMP double ptr [ESP + 0x8]        ; 005f52fb
    FNSTSW AX                           ; 005f52ff
    SAHF                                ; 005f5301
    JNC 0x005f5317                      ; 005f5302
        ;   XREF to: 005f5317 (CONDITIONAL_JUMP)  ; LAB_005f5317
    MOV EAX,dword ptr [ESP + 0xc]       ; 005f5304
    MOV ECX,dword ptr [ESP + 0x8]       ; 005f5308
    CMP EAX,0x3ff00000                  ; 005f530c
    JNZ 0x005f531e                      ; 005f5311
        ;   XREF to: 005f531e (CONDITIONAL_JUMP)  ; LAB_005f531e
    TEST ECX,ECX                        ; 005f5313
    JNZ 0x005f531e                      ; 005f5315
        ;   XREF to: 005f531e (CONDITIONAL_JUMP)  ; LAB_005f531e
    MOV ESP,EBP                         ; 005f5317
        ;   Label: LAB_005f5317
    POP EBP                             ; 005f5319
    POP EDI                             ; 005f531a
    POP ESI                             ; 005f531b
    POP EBX                             ; 005f531c
    RET                                 ; 005f531d
    FLD double ptr [ESP + 0x8]          ; 005f531e
        ;   Label: LAB_005f531e
    FSQRT                               ; 005f5322
    FLD1                                ; 005f5324
    FDIVRP                              ; 005f5326
    FLD float ptr [EDX + 0x20]          ; 005f5328
    FLD ST0                             ; 005f532b
    FXCH ST2                            ; 005f532d
    FSTP double ptr [ESP + 0x8]         ; 005f532f
    FXCH                                ; 005f5333
    FMUL double ptr [ESP + 0x8]         ; 005f5335
    FLD float ptr [EDX + 0x24]          ; 005f5339
    FLD ST0                             ; 005f533c
    FMUL double ptr [ESP + 0x8]         ; 005f533e
    FLD float ptr [EDX + 0x28]          ; 005f5342
    FLD ST0                             ; 005f5345
    FMUL double ptr [ESP + 0x8]         ; 005f5347
    FXCH ST4                            ; 005f534b
    FSTP ST5                            ; 005f534d
    FXCH                                ; 005f534f
    FSTP ST2                            ; 005f5351
    FXCH ST2                            ; 005f5353
    FSTP ST2                            ; 005f5355
    FXCH ST2                            ; 005f5357
    FSTP float ptr [EDX + 0x20]         ; 005f5359
    FXCH                                ; 005f535c
    FSTP float ptr [EDX + 0x24]         ; 005f535e
    FSTP float ptr [EDX + 0x28]         ; 005f5361
    MOV ESP,EBP                         ; 005f5364
    POP EBP                             ; 005f5366
    POP EDI                             ; 005f5367
    POP ESI                             ; 005f5368
    POP EBX                             ; 005f5369
    RET                                 ; 005f536a

