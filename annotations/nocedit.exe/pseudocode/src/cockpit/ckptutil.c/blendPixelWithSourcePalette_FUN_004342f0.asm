; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0(int x, int y, float blend_factor, int palette_index)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; float            Stack[0xc]:4   blend_factor
; int              Stack[0x10]:4   palette_index
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAA_FUN_00433c90 at 00433e64
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1024] g_ScreenBufferArray
;   int g_RedBitPosition
;   int g_RedBitCount
;   int g_GreenBitPosition
;   int g_GreenBitCount
;   int g_BlueBitPosition
;   int g_BlueBitCount
;   char[768] g_SourcePaletteData
;   undefined4 CHAR_ARRAY_02d01f49
;   undefined4 CHAR_ARRAY_02d01f4a
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004342f0
        ;   Label: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
    PUSH ESI                            ; 004342f1
    PUSH EDI                            ; 004342f2
    PUSH EBP                            ; 004342f3
    MOV EBP,ESP                         ; 004342f4
    SUB ESP,0x2c                        ; 004342f6
    AND ESP,0xfffffff8                  ; 004342f9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004342fc
    MOV ESI,dword ptr [EBP + 0x18]      ; 004342ff
    CMP EDX,dword ptr [0x02d02558]      ; 00434302 | int g_ClipLeft
    JL 0x004344f5                       ; 00434308 | LAB_004344f5
        ;   XREF to: 004344f5 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x02d02560]      ; 0043430e | int g_ClipRight
    JG 0x004344f5                       ; 00434314 | LAB_004344f5
        ;   XREF to: 004344f5 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d0255c]      ; 0043431a | int g_ClipTop
    JL 0x004344f5                       ; 00434320 | LAB_004344f5
        ;   XREF to: 004344f5 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02564]      ; 00434326 | int g_ClipBottom
    JG 0x004344f5                       ; 0043432c | LAB_004344f5
        ;   XREF to: 004344f5 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0067939c]      ; 00434332 | int g_BitsPerPixel
    CMP ECX,0x8                         ; 00434338
    JZ 0x004344f5                       ; 0043433b | LAB_004344f5
        ;   XREF to: 004344f5 (CONDITIONAL_JUMP)
    LEA EAX,[ESI*0x4 + 0x0]             ; 00434341
    CMP ECX,0x10                        ; 00434348
    JZ 0x004344fc                       ; 0043434b | LAB_004344fc
        ;   XREF to: 004344fc (CONDITIONAL_JUMP)
    LEA EBX,[EDX*0x4 + 0x0]             ; 00434351
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00434358 | void *[1024] g_ScreenBufferArray
    ADD EBX,EAX                         ; 0043435e
    MOV CL,byte ptr [0x02d01f24]        ; 00434360 | int g_RedBitPosition
    MOV EAX,dword ptr [EBX]             ; 00434366
    SHR EAX,CL                          ; 00434368
    MOV CL,byte ptr [0x02d01f2c]        ; 0043436a | int g_RedBitCount
    SHL EAX,CL                          ; 00434370
    XOR EDI,EDI                         ; 00434372
    AND EAX,0xff                        ; 00434374
    MOV dword ptr [ESP + 0x18],EDI      ; 00434379
    MOV dword ptr [ESP + 0x14],EAX      ; 0043437d
    MOV CL,byte ptr [0x02d01f30]        ; 00434381 | int g_GreenBitPosition
    FILD qword ptr [ESP + 0x14]         ; 00434387
    MOV EAX,dword ptr [EBX]             ; 0043438b
    FLD float ptr [EBP + 0x1c]          ; 0043438d
    FXCH                                ; 00434390
    FMUL ST1                            ; 00434392
    SHR EAX,CL                          ; 00434394
    MOV CL,byte ptr [0x02d01f38]        ; 00434396 | int g_GreenBitCount
    SHL EAX,CL                          ; 0043439c
    AND EAX,0xff                        ; 0043439e
    MOV dword ptr [ESP + 0x18],EDI      ; 004343a3
    MOV dword ptr [ESP + 0x14],EAX      ; 004343a7
    MOV CL,byte ptr [0x02d01f3c]        ; 004343ab | int g_BlueBitPosition
    FILD qword ptr [ESP + 0x14]         ; 004343b1
    MOV EAX,dword ptr [EBX]             ; 004343b5
    FMUL ST2                            ; 004343b7
    SHR EAX,CL                          ; 004343b9
    MOV CL,byte ptr [0x02d01f44]        ; 004343bb | int g_BlueBitCount
    SHL EAX,CL                          ; 004343c1
    AND EAX,0xff                        ; 004343c3
    MOV dword ptr [ESP + 0x18],EDI      ; 004343c8
    MOV dword ptr [ESP + 0x14],EAX      ; 004343cc
    FILD qword ptr [ESP + 0x14]         ; 004343d0
    FMULP ST3                           ; 004343d4
        ;   Label: LAB_004343d4
    FXCH                                ; 004343d6
    FSTP float ptr [ESP]                ; 004343d8
    FSTP float ptr [ESP + 0x4]          ; 004343db
    FSTP float ptr [ESP + 0x8]          ; 004343df
    MOV ECX,dword ptr [EBP + 0x20]      ; 004343e3
    LEA EAX,[ECX*0x4 + 0x0]             ; 004343e6
    SUB EAX,ECX                         ; 004343ed
    MOV ECX,EAX                         ; 004343ef
    XOR EAX,EAX                         ; 004343f1
    MOV AL,byte ptr [ECX + 0x2d01f48]   ; 004343f3 | char[768] g_SourcePaletteData
    MOV dword ptr [ESP + 0x28],EAX      ; 004343f9
    FILD word ptr [ESP + 0x28]          ; 004343fd
    FLD float ptr [EBP + 0x1c]          ; 00434401
    XOR EAX,EAX                         ; 00434404
    FLD1                                ; 00434406
    MOV AL,byte ptr [ECX + 0x2d01f49]   ; 00434408 | CHAR_ARRAY_02d01f49
    FSUBRP                              ; 0043440e
    MOV dword ptr [ESP + 0x28],EAX      ; 00434410
    FXCH                                ; 00434414
    FMUL ST1                            ; 00434416
    FILD word ptr [ESP + 0x28]          ; 00434418
    XOR EAX,EAX                         ; 0043441c
    FMUL ST2                            ; 0043441e
    MOV AL,byte ptr [ECX + 0x2d01f4a]   ; 00434420 | CHAR_ARRAY_02d01f4a
    MOV dword ptr [ESP + 0x28],EAX      ; 00434426
    FILD word ptr [ESP + 0x28]          ; 0043442a
    FMULP ST3                           ; 0043442e
    FLD float ptr [ESP]                 ; 00434430
    FLD float ptr [ESP + 0x4]           ; 00434433
    MOV CL,byte ptr [0x02d01f2c]        ; 00434437 | int g_RedBitCount
    FXCH ST3                            ; 0043443d
    FADD ST0,ST1                        ; 0043443f
    FXCH ST2                            ; 00434441
    FADD ST0,ST3                        ; 00434443
    FXCH ST2                            ; 00434445
    FSTP ST1                            ; 00434447
    FXCH                                ; 00434449
    FSTP ST2                            ; 0043444b
    FLD float ptr [ESP + 0x8]           ; 0043444d
    FXCH                                ; 00434451
    FSTP float ptr [ESP]                ; 00434453
    FXCH                                ; 00434456
    FST float ptr [ESP + 0x4]           ; 00434458
    FLD float ptr [ESP]                 ; 0043445c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0043445f | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 00434464
    CALL crt_math.c_round_FUN_005fe6b0  ; 00434466 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST3                            ; 0043446b
    FADD ST0,ST2                        ; 0043446d
    FXCH                                ; 0043446f
    FISTP qword ptr [ESP + 0xc]         ; 00434471
    FXCH ST2                            ; 00434475
    FISTP qword ptr [ESP + 0x14]        ; 00434477
    FXCH                                ; 0043447b
    FSTP ST1                            ; 0043447d
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043447f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00434483
    FST float ptr [ESP + 0x8]           ; 00434487
    SHR EDI,CL                          ; 0043448b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0043448d | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    MOV CL,byte ptr [0x02d01f38]        ; 00434492 | int g_GreenBitCount
    FISTP qword ptr [ESP + 0x14]        ; 00434498
    SHR EAX,CL                          ; 0043449c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043449e
    MOV dword ptr [ESP + 0x24],ECX      ; 004344a2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004344a6
    MOV CL,byte ptr [0x02d01f44]        ; 004344aa | int g_BlueBitCount
    SHR EBX,CL                          ; 004344b0
    MOV ECX,dword ptr [0x0067939c]      ; 004344b2 | int g_BitsPerPixel
    SHL ESI,0x2                         ; 004344b8
    CMP ECX,0x10                        ; 004344bb
    JNZ 0x00434586                      ; 004344be | LAB_00434586
        ;   XREF to: 00434586 (CONDITIONAL_JUMP)
    ADD EDX,EDX                         ; 004344c4
    MOV CL,byte ptr [0x02d01f24]        ; 004344c6 | int g_RedBitPosition
    MOV dword ptr [ESP + 0x24],EDX      ; 004344cc
    SHL EDI,CL                          ; 004344d0
    MOV CL,byte ptr [0x02d01f30]        ; 004344d2 | int g_GreenBitPosition
    MOV EDX,dword ptr [ESI + 0x2cf6a9c] ; 004344d8 | void *[1024] g_ScreenBufferArray
    MOV ESI,dword ptr [ESP + 0x24]      ; 004344de
    SHL EAX,CL                          ; 004344e2
    MOV CL,byte ptr [0x02d01f3c]        ; 004344e4 | int g_BlueBitPosition
    OR EAX,EDI                          ; 004344ea
    SHL EBX,CL                          ; 004344ec
    ADD EDX,ESI                         ; 004344ee
    OR EAX,EBX                          ; 004344f0
    MOV word ptr [EDX],AX               ; 004344f2
    MOV ESP,EBP                         ; 004344f5
        ;   Label: LAB_004344f5
    POP EBP                             ; 004344f7
    POP EDI                             ; 004344f8
    POP ESI                             ; 004344f9
    POP EBX                             ; 004344fa
    RET                                 ; 004344fb
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 004344fc | void *[1024] g_ScreenBufferArray
        ;   Label: LAB_004344fc
    MOV AX,word ptr [EAX + EDX*0x2]     ; 00434502
    AND EAX,0xffff                      ; 00434506
    MOV CL,byte ptr [0x02d01f24]        ; 0043450b | int g_RedBitPosition
    MOV EBX,EAX                         ; 00434511
    SHR EBX,CL                          ; 00434513
    MOV CL,byte ptr [0x02d01f2c]        ; 00434515 | int g_RedBitCount
    SHL EBX,CL                          ; 0043451b
    XOR EDI,EDI                         ; 0043451d
    AND EBX,0xff                        ; 0043451f
    MOV dword ptr [ESP + 0x18],EDI      ; 00434525
    MOV dword ptr [ESP + 0x14],EBX      ; 00434529
    MOV CL,byte ptr [0x02d01f30]        ; 0043452d | int g_GreenBitPosition
    FILD qword ptr [ESP + 0x14]         ; 00434533
    MOV EBX,EAX                         ; 00434537
    FLD float ptr [EBP + 0x1c]          ; 00434539
    FXCH                                ; 0043453c
    FMUL ST1                            ; 0043453e
    SHR EBX,CL                          ; 00434540
    MOV CL,byte ptr [0x02d01f38]        ; 00434542 | int g_GreenBitCount
    SHL EBX,CL                          ; 00434548
    MOV ECX,EBX                         ; 0043454a
    AND ECX,0xff                        ; 0043454c
    MOV dword ptr [ESP + 0x10],EDI      ; 00434552
    MOV dword ptr [ESP + 0xc],ECX       ; 00434556
    FILD qword ptr [ESP + 0xc]          ; 0043455a
    MOV CL,byte ptr [0x02d01f3c]        ; 0043455e | int g_BlueBitPosition
    FMUL ST2                            ; 00434564
    SHR EAX,CL                          ; 00434566
    MOV CL,byte ptr [0x02d01f44]        ; 00434568 | int g_BlueBitCount
    SHL EAX,CL                          ; 0043456e
    AND EAX,0xff                        ; 00434570
    MOV dword ptr [ESP + 0x10],EDI      ; 00434575
    MOV dword ptr [ESP + 0xc],EAX       ; 00434579
    FILD qword ptr [ESP + 0xc]          ; 0043457d
    JMP 0x004343d4                      ; 00434581 | LAB_004343d4
        ;   XREF to: 004343d4 (UNCONDITIONAL_JUMP)
    SHL EDX,0x2                         ; 00434586
        ;   Label: LAB_00434586
    MOV ECX,dword ptr [ESI + 0x2cf6a9c] ; 00434589 | void *[1024] g_ScreenBufferArray
    ADD EDX,ECX                         ; 0043458f
    MOV CL,byte ptr [0x02d01f24]        ; 00434591 | int g_RedBitPosition
    SHL EDI,CL                          ; 00434597
    MOV CL,byte ptr [0x02d01f30]        ; 00434599 | int g_GreenBitPosition
    SHL EAX,CL                          ; 0043459f
    MOV CL,byte ptr [0x02d01f3c]        ; 004345a1 | int g_BlueBitPosition
    OR EDI,EAX                          ; 004345a7
    SHL EBX,CL                          ; 004345a9
    OR EDI,EBX                          ; 004345ab
    MOV dword ptr [EDX],EDI             ; 004345ad
    MOV ESP,EBP                         ; 004345af
    POP EBP                             ; 004345b1
    POP EDI                             ; 004345b2
    POP ESI                             ; 004345b3
    POP EBX                             ; 004345b4
    RET                                 ; 004345b5

