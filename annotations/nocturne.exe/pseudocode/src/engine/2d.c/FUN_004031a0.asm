; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_004031a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
;
; XREF[1]:
;   engine_2d.c_FUN_00403460 at 00403495
;
; Referenced Globals:
;   float FLOAT_005771f4 = 0.0625
;   float FLOAT_005771f8 = 255
;   undefined4 DAT_01c00648
;   undefined4 DAT_01c0064c
;   undefined4 DAT_01c0064d
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_2d.c_findBestPaletteMatch_FUN_00401850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004031a0
        ;   Label: engine_2d.c_FUN_004031a0
    PUSH ESI                            ; 004031a1
    PUSH EDI                            ; 004031a2
    PUSH EBP                            ; 004031a3
    SUB ESP,0x4c                        ; 004031a4
    MOV EBX,dword ptr [ESP + 0x60]      ; 004031a7
    LEA EAX,[EBX*0x4 + 0x0]             ; 004031ab
    SUB EAX,EBX                         ; 004031b2
    MOV EBP,0x1000                      ; 004031b4
    MOV EBX,EAX                         ; 004031b9
    XOR EAX,EAX                         ; 004031bb
    XOR EDX,EDX                         ; 004031bd
    MOV AL,byte ptr [EBX + 0x1c00648]   ; 004031bf | DAT_01c00648
    XOR EDI,EDI                         ; 004031c5
    MOV dword ptr [ESP + 0x48],EAX      ; 004031c7
    XOR EAX,EAX                         ; 004031cb
    MOV dword ptr [ESP + 0x44],EDX      ; 004031cd
    MOV AL,byte ptr [EBX + 0x1c00649]   ; 004031d1
    FILD word ptr [ESP + 0x48]          ; 004031d7
    MOV dword ptr [ESP + 0x48],EAX      ; 004031db
    XOR EAX,EAX                         ; 004031df
    FSTP float ptr [ESP + 0x10]         ; 004031e1
    MOV AL,byte ptr [EBX + 0x1c0064a]   ; 004031e5
    FILD word ptr [ESP + 0x48]          ; 004031eb
    MOV dword ptr [ESP + 0x48],EAX      ; 004031ef
    FSTP float ptr [ESP + 0x14]         ; 004031f3
    FILD word ptr [ESP + 0x48]          ; 004031f7
    FSTP float ptr [ESP + 0x18]         ; 004031fb
    XOR EAX,EAX                         ; 004031ff
        ;   Label: LAB_004031ff
    MOV AL,byte ptr [EDI + 0x1c00648]   ; 00403201 | DAT_01c00648
    MOV dword ptr [ESP + 0x48],EAX      ; 00403207
    FILD word ptr [ESP + 0x48]          ; 0040320b
    FSTP float ptr [ESP + 0x40]         ; 0040320f
    XOR EAX,EAX                         ; 00403213
    FLD float ptr [ESP + 0x40]          ; 00403215
    MOV AL,byte ptr [EDI + 0x1c00649]   ; 00403219 | DAT_01c0064c
    FSUB float ptr [ESP + 0x10]         ; 0040321f
    MOV dword ptr [ESP + 0x48],EAX      ; 00403223
    FLD float ptr [0x005771f4]          ; 00403227 | FLOAT_005771f4
    FXCH                                ; 0040322d
    FMUL ST1                            ; 0040322f
    FILD word ptr [ESP + 0x48]          ; 00403231
    XOR EAX,EAX                         ; 00403235
    FSTP float ptr [ESP + 0x3c]         ; 00403237
    MOV AL,byte ptr [EDI + 0x1c0064a]   ; 0040323b | DAT_01c0064d
    FLD float ptr [ESP + 0x3c]          ; 00403241
    MOV dword ptr [ESP + 0x48],EAX      ; 00403245
    FSUB float ptr [ESP + 0x14]         ; 00403249
    FILD word ptr [ESP + 0x48]          ; 0040324d
    FST float ptr [ESP + 0x38]          ; 00403251
    FSUB float ptr [ESP + 0x18]         ; 00403255
    FXCH                                ; 00403259
    FMUL ST3                            ; 0040325b
    FXCH                                ; 0040325d
    FMULP ST3                           ; 0040325f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00403261
    XOR ECX,ECX                         ; 00403265
    MOV ESI,EBP                         ; 00403267
    MOV dword ptr [ESP + 0x40],ECX      ; 00403269
    FXCH                                ; 0040326d
    FSTP float ptr [ESP + 0x24]         ; 0040326f
    MOV dword ptr [ESP + 0x3c],ECX      ; 00403273
    FSTP float ptr [ESP + 0x20]         ; 00403277
    MOV dword ptr [ESP + 0x38],ECX      ; 0040327b
    FSTP float ptr [ESP]                ; 0040327f
    FLD float ptr [ESP + 0x40]          ; 00403282
        ;   Label: LAB_00403282
    FLD float ptr [ESP + 0x3c]          ; 00403286
    FLD float ptr [ESP + 0x38]          ; 0040328a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040328e
    FXCH ST2                            ; 00403292
    FADD float ptr [ESP + 0x24]         ; 00403294
    FXCH                                ; 00403298
    FADD float ptr [ESP + 0x20]         ; 0040329a
    FXCH ST2                            ; 0040329e
    FADD float ptr [ESP]                ; 004032a0
    FXCH ST2                            ; 004032a3
    FSTP float ptr [ESP + 0x3c]         ; 004032a5
    FXCH                                ; 004032a9
    FSTP float ptr [ESP + 0x38]         ; 004032ab
    FSTP float ptr [ESP + 0x40]         ; 004032af
    CMP EAX,0x9                         ; 004032b3
    JLE 0x0040344a                      ; 004032b6
        ;   XREF to: 0040344a (CONDITIONAL_JUMP)  ; LAB_0040344a
    CMP EAX,0xf6                        ; 004032bc
    JGE 0x0040344a                      ; 004032c1
        ;   XREF to: 0040344a (CONDITIONAL_JUMP)  ; LAB_0040344a
    FLD float ptr [ESP + 0x38]          ; 004032c7
    FLD float ptr [ESP + 0x3c]          ; 004032cb
    FLD float ptr [ESP + 0x40]          ; 004032cf
    PUSH 0xf5                           ; 004032d3
    FXCH ST2                            ; 004032d8
    CALL crt_math.c_round_FUN_00563a30  ; 004032da
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004032df
    CALL crt_math.c_round_FUN_00563a30  ; 004032e1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004032e6
    FISTP dword ptr [ESP + 0x10]        ; 004032e8
    FISTP dword ptr [ESP + 0xc]         ; 004032ec
    PUSH 0xa                            ; 004032f0
    MOV ECX,dword ptr [ESP + 0x14]      ; 004032f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004032f6
    PUSH ECX                            ; 004032fa
    CALL crt_math.c_round_FUN_00563a30  ; 004032fb
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EAX                            ; 00403300
    FISTP dword ptr [ESP + 0x18]        ; 00403301
    MOV EDX,dword ptr [ESP + 0x18]      ; 00403305
    PUSH EDX                            ; 00403309
    CALL engine_2d.c_findBestPaletteMatch_FUN_00401850 ; 0040330a
        ;   XREF to: 00401850 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_findBestPaletteMatch_FUN_00401850()
    ADD ESP,0x14                        ; 0040330f
    MOV byte ptr [EBX + 0x1bf5620],AL   ; 00403312
        ;   Label: LAB_00403312
    ADD EBX,0x100                       ; 00403318
    CMP EBX,ESI                         ; 0040331e
    JNZ 0x00403282                      ; 00403320
        ;   XREF to: 00403282 (CONDITIONAL_JUMP)  ; LAB_00403282
    XOR EAX,EAX                         ; 00403326
    MOV AL,byte ptr [EDI + 0x1c00648]   ; 00403328 | DAT_01c00648
    MOV dword ptr [ESP + 0x48],EAX      ; 0040332e
    FLD float ptr [0x005771f8]          ; 00403332 | FLOAT_005771f8
    FLD ST0                             ; 00403338
    FILD word ptr [ESP + 0x48]          ; 0040333a
    FSTP float ptr [ESP + 0x1c]         ; 0040333e
    FSUB float ptr [ESP + 0x1c]         ; 00403342
    XOR EAX,EAX                         ; 00403346
    FLD float ptr [0x005771f4]          ; 00403348 | FLOAT_005771f4
    FXCH                                ; 0040334e
    FMUL ST1                            ; 00403350
    MOV AL,byte ptr [EDI + 0x1c00649]   ; 00403352
    FLD ST2                             ; 00403358
    MOV dword ptr [ESP + 0x48],EAX      ; 0040335a
    XOR EAX,EAX                         ; 0040335e
    FILD word ptr [ESP + 0x48]          ; 00403360
    MOV AL,byte ptr [EDI + 0x1c0064a]   ; 00403364
    FSTP float ptr [ESP + 0x34]         ; 0040336a
    MOV dword ptr [ESP + 0x48],EAX      ; 0040336e
    FSUB float ptr [ESP + 0x34]         ; 00403372
    FILD word ptr [ESP + 0x48]          ; 00403376
    FSTP float ptr [ESP + 0x30]         ; 0040337a
    FXCH ST3                            ; 0040337e
    FSUB float ptr [ESP + 0x30]         ; 00403380
    FXCH ST3                            ; 00403384
    FMUL ST2                            ; 00403386
    FXCH ST3                            ; 00403388
    FMULP ST2                           ; 0040338a
    MOV EBX,dword ptr [ESP + 0x44]      ; 0040338c
    MOV ESI,EBP                         ; 00403390
    FSTP float ptr [ESP + 0x2c]         ; 00403392
    FXCH                                ; 00403396
    FSTP float ptr [ESP + 0x28]         ; 00403398
    FSTP float ptr [ESP + 0x4]          ; 0040339c
    FLD float ptr [ESP + 0x1c]          ; 004033a0
        ;   Label: LAB_004033a0
    FLD float ptr [ESP + 0x34]          ; 004033a4
    PUSH 0xf5                           ; 004033a8
    FLD float ptr [ESP + 0x34]          ; 004033ad
    PUSH 0xa                            ; 004033b1
    FXCH ST2                            ; 004033b3
    FADD float ptr [ESP + 0x34]         ; 004033b5
    FXCH                                ; 004033b9
    FADD float ptr [ESP + 0x30]         ; 004033bb
    FXCH ST2                            ; 004033bf
    FADD float ptr [ESP + 0xc]          ; 004033c1
    FXCH                                ; 004033c5
    FSTP float ptr [ESP + 0x24]         ; 004033c7
    FXCH                                ; 004033cb
    FSTP float ptr [ESP + 0x3c]         ; 004033cd
    FST float ptr [ESP + 0x38]          ; 004033d1
    FLD float ptr [ESP + 0x3c]          ; 004033d5
    FLD float ptr [ESP + 0x24]          ; 004033d9
    FXCH ST2                            ; 004033dd
    CALL crt_math.c_round_FUN_00563a30  ; 004033df
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004033e4
    CALL crt_math.c_round_FUN_00563a30  ; 004033e6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004033eb
    FISTP dword ptr [ESP + 0x10]        ; 004033ed
    FISTP dword ptr [ESP + 0x14]        ; 004033f1
    MOV ECX,dword ptr [ESP + 0x10]      ; 004033f5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004033f9
    PUSH ECX                            ; 004033fd
    CALL crt_math.c_round_FUN_00563a30  ; 004033fe
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EAX                            ; 00403403
    FISTP dword ptr [ESP + 0x1c]        ; 00403404
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00403408
    PUSH EDX                            ; 0040340c
    ADD EBX,0x100                       ; 0040340d
    CALL engine_2d.c_findBestPaletteMatch_FUN_00401850 ; 00403413
        ;   XREF to: 00401850 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_findBestPaletteMatch_FUN_00401850()
    ADD ESP,0x14                        ; 00403418
    MOV byte ptr [EBX + 0x1bf6520],AL   ; 0040341b
    CMP EBX,ESI                         ; 00403421
    JNZ 0x004033a0                      ; 00403423
        ;   XREF to: 004033a0 (CONDITIONAL_JUMP)  ; LAB_004033a0
    MOV ECX,dword ptr [ESP + 0x44]      ; 00403429
    ADD EDI,0x3                         ; 0040342d
    INC ECX                             ; 00403430
    INC EBP                             ; 00403431
    MOV dword ptr [ESP + 0x44],ECX      ; 00403432
    CMP ECX,0x100                       ; 00403436
    JL 0x004031ff                       ; 0040343c
        ;   XREF to: 004031ff (CONDITIONAL_JUMP)  ; LAB_004031ff
    ADD ESP,0x4c                        ; 00403442
    POP EBP                             ; 00403445
    POP EDI                             ; 00403446
    POP ESI                             ; 00403447
    POP EBX                             ; 00403448
    RET                                 ; 00403449
    MOV AL,byte ptr [ESP + 0x44]        ; 0040344a
        ;   Label: LAB_0040344a
    JMP 0x00403312                      ; 0040344e
        ;   XREF to: 00403312 (UNCONDITIONAL_JUMP)  ; LAB_00403312

