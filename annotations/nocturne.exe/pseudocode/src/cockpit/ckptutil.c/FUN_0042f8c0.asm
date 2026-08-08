; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042f8c0(int param_1,int param_2,float param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined8       Stack[-0x54]:8  local_54
; undefined1[16]   Stack[-0x4c]:16  local_4c
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_0042f330 at 0042f4b3
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   uchar[32768] g_ColorCubeLookup
;   uint[256] g_Hardware32BitPalette
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_RedDitherShift
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_GreenDitherShift
;   _BIT_INTEGER32 g_BlueBitPosition
;   _BIT_INTEGER32 g_BlueDitherShift
;   uchar[768] g_SourcePaletteData
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f8c0
        ;   Label: cockpit_ckptutil.c_FUN_0042f8c0
    PUSH ESI                            ; 0042f8c1
    PUSH EDI                            ; 0042f8c2
    PUSH EBP                            ; 0042f8c3
    MOV EBP,ESP                         ; 0042f8c4
    SUB ESP,0x44                        ; 0042f8c6
    AND ESP,0xfffffff8                  ; 0042f8c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f8cc
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042f8cf
    CMP EAX,dword ptr [0x01c00c58]      ; 0042f8d2 | g_ClipLeft
    JL 0x0042fb14                       ; 0042f8d8
        ;   XREF to: 0042fb14 (CONDITIONAL_JUMP)  ; LAB_0042fb14
    CMP EAX,dword ptr [0x01c00c60]      ; 0042f8de | g_ClipRight
    JG 0x0042fb14                       ; 0042f8e4
        ;   XREF to: 0042fb14 (CONDITIONAL_JUMP)  ; LAB_0042fb14
    CMP ESI,dword ptr [0x01c00c5c]      ; 0042f8ea | g_ClipTop
    JL 0x0042fb14                       ; 0042f8f0
        ;   XREF to: 0042fb14 (CONDITIONAL_JUMP)  ; LAB_0042fb14
    CMP ESI,dword ptr [0x01c00c64]      ; 0042f8f6 | g_ClipBottom
    JG 0x0042fb14                       ; 0042f8fc
        ;   XREF to: 0042fb14 (CONDITIONAL_JUMP)  ; LAB_0042fb14
    MOV EDX,dword ptr [0x005b7624]      ; 0042f902 | g_BitsPerPixel
    LEA ECX,[ESI*0x4 + 0x0]             ; 0042f908
    CMP EDX,0x8                         ; 0042f90f
    JZ 0x0042fb1b                       ; 0042f912
        ;   XREF to: 0042fb1b (CONDITIONAL_JUMP)  ; LAB_0042fb1b
    CMP EDX,0x10                        ; 0042f918
    JZ 0x0042fc32                       ; 0042f91b
        ;   XREF to: 0042fc32 (CONDITIONAL_JUMP)  ; LAB_0042fc32
    LEA EDX,[EAX*0x4 + 0x0]             ; 0042f921
    MOV EBX,dword ptr [ECX + 0x1bd2fa0] ; 0042f928 | g_ScreenBufferArray
    ADD EBX,EDX                         ; 0042f92e
    MOV CL,byte ptr [0x01c00624]        ; 0042f930 | g_RedBitPosition
    MOV EDX,dword ptr [EBX]             ; 0042f936
    SHR EDX,CL                          ; 0042f938
    XOR EDI,EDI                         ; 0042f93a
    AND EDX,0xff                        ; 0042f93c
    MOV dword ptr [ESP + 0x24],EDI      ; 0042f942
    MOV dword ptr [ESP + 0x20],EDX      ; 0042f946
    MOV CL,byte ptr [0x01c00630]        ; 0042f94a | g_GreenBitPosition
    FILD qword ptr [ESP + 0x20]         ; 0042f950
    MOV EDX,dword ptr [EBX]             ; 0042f954
    FLD float ptr [EBP + 0x1c]          ; 0042f956
    FXCH                                ; 0042f959
    FMUL ST1                            ; 0042f95b
    SHR EDX,CL                          ; 0042f95d
    AND EDX,0xff                        ; 0042f95f
    MOV dword ptr [ESP + 0x24],EDI      ; 0042f965
    MOV dword ptr [ESP + 0x20],EDX      ; 0042f969
    MOV CL,byte ptr [0x01c0063c]        ; 0042f96d | g_BlueBitPosition
    FILD qword ptr [ESP + 0x20]         ; 0042f973
    MOV EDX,dword ptr [EBX]             ; 0042f977
    FMUL ST2                            ; 0042f979
    SHR EDX,CL                          ; 0042f97b
    AND EDX,0xff                        ; 0042f97d
        ;   Label: LAB_0042f97d
    MOV dword ptr [ESP + 0x24],EDI      ; 0042f983
    MOV dword ptr [ESP + 0x20],EDX      ; 0042f987
    FILD qword ptr [ESP + 0x20]         ; 0042f98b
    FMULP ST3                           ; 0042f98f
    FXCH                                ; 0042f991
    FSTP float ptr [ESP + 0xc]          ; 0042f993
    FSTP float ptr [ESP]                ; 0042f997
    FSTP float ptr [ESP + 0x4]          ; 0042f99a
    CMP dword ptr [0x005b7624],0x10     ; 0042f99e | g_BitsPerPixel
    JNZ 0x0042fcac                      ; 0042f9a5
        ;   XREF to: 0042fcac (CONDITIONAL_JUMP)  ; LAB_0042fcac
    MOV EDX,dword ptr [EBP + 0x20]      ; 0042f9ab
    MOV DX,word ptr [EDX*0x2 + 0x1c00424] ; 0042f9ae
    AND EDX,0xffff                      ; 0042f9b6
    MOV CL,byte ptr [0x01c00624]        ; 0042f9bc | g_RedBitPosition
    MOV EBX,EDX                         ; 0042f9c2
    SHR EBX,CL                          ; 0042f9c4
    MOV CL,byte ptr [0x01c0062c]        ; 0042f9c6 | g_RedDitherShift
    SHL EBX,CL                          ; 0042f9cc
    AND EBX,0xff                        ; 0042f9ce
    MOV CL,byte ptr [0x01c00630]        ; 0042f9d4 | g_GreenBitPosition
    MOV dword ptr [ESP + 0x8],EBX       ; 0042f9da
    MOV EBX,EDX                         ; 0042f9de
    SHR EBX,CL                          ; 0042f9e0
    MOV CL,byte ptr [0x01c00638]        ; 0042f9e2 | g_GreenDitherShift
    SHL EBX,CL                          ; 0042f9e8
    MOV CL,byte ptr [0x01c0063c]        ; 0042f9ea | g_BlueBitPosition
    SHR EDX,CL                          ; 0042f9f0
    MOV CL,byte ptr [0x01c00644]        ; 0042f9f2 | g_BlueDitherShift
    SHL EDX,CL                          ; 0042f9f8
    MOV ECX,EDX                         ; 0042f9fa
        ;   Label: LAB_0042f9fa
    AND EBX,0xff                        ; 0042f9fc
    AND ECX,0xff                        ; 0042fa02
    FLD float ptr [EBP + 0x1c]          ; 0042fa08
    XOR EDI,EDI                         ; 0042fa0b
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042fa0d
    MOV dword ptr [ESP + 0x24],EDI      ; 0042fa11
    MOV dword ptr [ESP + 0x20],EDX      ; 0042fa15
    FLD1                                ; 0042fa19
    FILD qword ptr [ESP + 0x20]         ; 0042fa1b
    FXCH                                ; 0042fa1f
    FSUBRP ST2,ST0                      ; 0042fa21
    FMUL ST1                            ; 0042fa23
    MOV dword ptr [ESP + 0x20],EBX      ; 0042fa25
    MOV dword ptr [ESP + 0x10],ECX      ; 0042fa29
    MOV dword ptr [ESP + 0x24],EDI      ; 0042fa2d
    MOV dword ptr [ESP + 0x14],EDI      ; 0042fa31
    FILD qword ptr [ESP + 0x20]         ; 0042fa35
    FMUL ST2                            ; 0042fa39
    FILD qword ptr [ESP + 0x10]         ; 0042fa3b
    LEA EDX,[ESI*0x4 + 0x0]             ; 0042fa3f
    FMULP ST3                           ; 0042fa46
    MOV ESI,dword ptr [0x005b7624]      ; 0042fa48 | g_BitsPerPixel
    FLD float ptr [ESP + 0xc]           ; 0042fa4e
    FLD float ptr [ESP]                 ; 0042fa52
    FLD float ptr [ESP + 0x4]           ; 0042fa55
    FXCH ST4                            ; 0042fa59
    FADD ST0,ST2                        ; 0042fa5b
    FXCH ST3                            ; 0042fa5d
    FADD ST0,ST1                        ; 0042fa5f
    FXCH ST5                            ; 0042fa61
    FADD ST0,ST4                        ; 0042fa63
    FXCH ST3                            ; 0042fa65
    FSTP ST2                            ; 0042fa67
    FXCH ST4                            ; 0042fa69
    FSTP ST4                            ; 0042fa6b
    FXCH                                ; 0042fa6d
    FSTP ST2                            ; 0042fa6f
    FSTP float ptr [ESP + 0xc]          ; 0042fa71
    FXCH                                ; 0042fa75
    FSTP float ptr [ESP]                ; 0042fa77
    FSTP float ptr [ESP + 0x4]          ; 0042fa7a
    CMP ESI,0x10                        ; 0042fa7e
    JNZ 0x0042fceb                      ; 0042fa81
        ;   XREF to: 0042fceb (CONDITIONAL_JUMP)  ; LAB_0042fceb
    FLD float ptr [ESP + 0xc]           ; 0042fa87
    FLD float ptr [ESP]                 ; 0042fa8b
    FLD float ptr [ESP + 0x4]           ; 0042fa8e
    MOV CL,byte ptr [0x01c0062c]        ; 0042fa92 | g_RedDitherShift
    FXCH ST2                            ; 0042fa98
    CALL crt_math.c_round_FUN_00563a30  ; 0042fa9a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0042fa9f
    CALL crt_math.c_round_FUN_00563a30  ; 0042faa1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 0042faa6
    CALL crt_math.c_round_FUN_00563a30  ; 0042faa8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0042faad
    FISTP qword ptr [ESP + 0x18]        ; 0042faaf
    FXCH                                ; 0042fab3
    FISTP qword ptr [ESP + 0x10]        ; 0042fab5
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042fab9
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042fabd
    SHR EBX,CL                          ; 0042fac1
    MOV CL,byte ptr [0x01c00638]        ; 0042fac3 | g_GreenDitherShift
    FISTP qword ptr [ESP + 0x10]        ; 0042fac9
    SHR ESI,CL                          ; 0042facd
    MOV CL,byte ptr [0x01c00644]        ; 0042facf | g_BlueDitherShift
    MOV dword ptr [ESP + 0x28],ESI      ; 0042fad5
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042fad9
    ADD EAX,EAX                         ; 0042fadd
    SHR ESI,CL                          ; 0042fadf
    MOV CL,byte ptr [0x01c00624]        ; 0042fae1 | g_RedBitPosition
    MOV dword ptr [ESP + 0x2c],ESI      ; 0042fae7
    MOV ESI,dword ptr [EDX + 0x1bd2fa0] ; 0042faeb | g_ScreenBufferArray
    SHL EBX,CL                          ; 0042faf1
    MOV CL,byte ptr [0x01c00630]        ; 0042faf3 | g_GreenBitPosition
    ADD ESI,EAX                         ; 0042faf9
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042fafb
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042faff
    SHL EAX,CL                          ; 0042fb03
    MOV CL,byte ptr [0x01c0063c]        ; 0042fb05 | g_BlueBitPosition
    OR EAX,EBX                          ; 0042fb0b
    SHL EDX,CL                          ; 0042fb0d
    OR EAX,EDX                          ; 0042fb0f
    MOV word ptr [ESI],AX               ; 0042fb11
    MOV ESP,EBP                         ; 0042fb14
        ;   Label: LAB_0042fb14
    POP EBP                             ; 0042fb16
    POP EDI                             ; 0042fb17
    POP ESI                             ; 0042fb18
    POP EBX                             ; 0042fb19
    RET                                 ; 0042fb1a
    MOV EBX,dword ptr [ECX + 0x1bd2fa0] ; 0042fb1b | g_ScreenBufferArray
        ;   Label: LAB_0042fb1b
    ADD EBX,EAX                         ; 0042fb21
    XOR EAX,EAX                         ; 0042fb23
    MOV AL,byte ptr [EBX]               ; 0042fb25
    LEA ECX,[EAX*0x4 + 0x0]             ; 0042fb27
    SUB ECX,EAX                         ; 0042fb2e
    XOR EAX,EAX                         ; 0042fb30
    MOV AL,byte ptr [ECX + 0x1c00648]   ; 0042fb32 | g_SourcePaletteData
    MOV dword ptr [ESP + 0x34],EAX      ; 0042fb38
    FILD word ptr [ESP + 0x34]          ; 0042fb3c
    XOR EAX,EAX                         ; 0042fb40
    FLD float ptr [EBP + 0x1c]          ; 0042fb42
    FXCH                                ; 0042fb45
    FMUL ST1                            ; 0042fb47
    MOV AL,byte ptr [ECX + 0x1c00649]   ; 0042fb49
    MOV dword ptr [ESP + 0x38],EAX      ; 0042fb4f
    XOR EAX,EAX                         ; 0042fb53
    MOV AL,byte ptr [ECX + 0x1c0064a]   ; 0042fb55
    MOV dword ptr [ESP + 0x34],EAX      ; 0042fb5b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042fb5f
    LEA ECX,[EAX*0x4 + 0x0]             ; 0042fb62
    SUB ECX,EAX                         ; 0042fb69
    XOR EAX,EAX                         ; 0042fb6b
    MOV AL,byte ptr [ECX + 0x1c00648]   ; 0042fb6d | g_SourcePaletteData
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042fb73
    XOR EAX,EAX                         ; 0042fb77
    FILD word ptr [ESP + 0x3c]          ; 0042fb79
    MOV AL,byte ptr [ECX + 0x1c00649]   ; 0042fb7d
    FLD ST2                             ; 0042fb83
    FLD1                                ; 0042fb85
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042fb87
    FSUBRP                              ; 0042fb8b
    XOR EAX,EAX                         ; 0042fb8d
    FXCH                                ; 0042fb8f
    FMUL ST1                            ; 0042fb91
    MOV AL,byte ptr [ECX + 0x1c0064a]   ; 0042fb93
    FLD ST2                             ; 0042fb99
    FXCH                                ; 0042fb9b
    FADD ST0,ST1                        ; 0042fb9d
    MOV dword ptr [ESP + 0x40],EAX      ; 0042fb9f
    FSTP ST1                            ; 0042fba3
    FSTP ST2                            ; 0042fba5
    FXCH                                ; 0042fba7
    CALL crt_math.c_round_FUN_00563a30  ; 0042fba9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x30]        ; 0042fbae
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042fbb2
    MOV EDX,EAX                         ; 0042fbb6
    SAR EDX,0x1f                        ; 0042fbb8
    SHL EDX,0x3                         ; 0042fbbb
    SBB EAX,EDX                         ; 0042fbbe
    SAR EAX,0x3                         ; 0042fbc0
    FILD word ptr [ESP + 0x3c]          ; 0042fbc3
    FMUL ST1                            ; 0042fbc7
    FILD word ptr [ESP + 0x38]          ; 0042fbc9
    FMUL ST3                            ; 0042fbcd
    FADD ST1,ST0                        ; 0042fbcf
    FXCH                                ; 0042fbd1
    FSTP ST1                            ; 0042fbd3
    CALL crt_math.c_round_FUN_00563a30  ; 0042fbd5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x30]        ; 0042fbda
    MOV ECX,EAX                         ; 0042fbde
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042fbe0
    MOV EDX,EAX                         ; 0042fbe4
    SAR EDX,0x1f                        ; 0042fbe6
    SHL EDX,0x3                         ; 0042fbe9
    SBB EAX,EDX                         ; 0042fbec
    SAR EAX,0x3                         ; 0042fbee
    FILD word ptr [ESP + 0x40]          ; 0042fbf1
    FMULP                               ; 0042fbf5
    FILD word ptr [ESP + 0x34]          ; 0042fbf7
    FMULP ST2                           ; 0042fbfb
    FADDP                               ; 0042fbfd
    CALL crt_math.c_round_FUN_00563a30  ; 0042fbff
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    SHL ECX,0xa                         ; 0042fc04
    SHL EAX,0x5                         ; 0042fc07
    FISTP dword ptr [ESP + 0x30]        ; 0042fc0a
    ADD ECX,EAX                         ; 0042fc0e
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042fc10
    MOV EDX,EAX                         ; 0042fc14
    SAR EDX,0x1f                        ; 0042fc16
    SHL EDX,0x3                         ; 0042fc19
    SBB EAX,EDX                         ; 0042fc1c
    SAR EAX,0x3                         ; 0042fc1e
    ADD EAX,ECX                         ; 0042fc21
    MOV CL,byte ptr [EAX + 0x1bf7720]   ; 0042fc23 | g_ColorCubeLookup
    MOV byte ptr [EBX],CL               ; 0042fc29
    MOV ESP,EBP                         ; 0042fc2b
    POP EBP                             ; 0042fc2d
    POP EDI                             ; 0042fc2e
    POP ESI                             ; 0042fc2f
    POP EBX                             ; 0042fc30
    RET                                 ; 0042fc31
    MOV ECX,dword ptr [ECX + 0x1bd2fa0] ; 0042fc32 | g_ScreenBufferArray
        ;   Label: LAB_0042fc32
    MOV DX,word ptr [ECX + EAX*0x2]     ; 0042fc38
    AND EDX,0xffff                      ; 0042fc3c
    MOV CL,byte ptr [0x01c00624]        ; 0042fc42 | g_RedBitPosition
    MOV EBX,EDX                         ; 0042fc48
    SHR EBX,CL                          ; 0042fc4a
    MOV CL,byte ptr [0x01c0062c]        ; 0042fc4c | g_RedDitherShift
    SHL EBX,CL                          ; 0042fc52
    XOR EDI,EDI                         ; 0042fc54
    AND EBX,0xff                        ; 0042fc56
    MOV dword ptr [ESP + 0x24],EDI      ; 0042fc5c
    MOV dword ptr [ESP + 0x20],EBX      ; 0042fc60
    MOV CL,byte ptr [0x01c00630]        ; 0042fc64 | g_GreenBitPosition
    FILD qword ptr [ESP + 0x20]         ; 0042fc6a
    MOV EBX,EDX                         ; 0042fc6e
    FLD float ptr [EBP + 0x1c]          ; 0042fc70
    FXCH                                ; 0042fc73
    FMUL ST1                            ; 0042fc75
    SHR EBX,CL                          ; 0042fc77
    MOV CL,byte ptr [0x01c00638]        ; 0042fc79 | g_GreenDitherShift
    SHL EBX,CL                          ; 0042fc7f
    MOV ECX,EBX                         ; 0042fc81
    AND ECX,0xff                        ; 0042fc83
    MOV dword ptr [ESP + 0x24],EDI      ; 0042fc89
    MOV dword ptr [ESP + 0x20],ECX      ; 0042fc8d
    FILD qword ptr [ESP + 0x20]         ; 0042fc91
    MOV CL,byte ptr [0x01c0063c]        ; 0042fc95 | g_BlueBitPosition
    FMUL ST2                            ; 0042fc9b
    SHR EDX,CL                          ; 0042fc9d
    MOV CL,byte ptr [0x01c00644]        ; 0042fc9f | g_BlueDitherShift
    SHL EDX,CL                          ; 0042fca5
    JMP 0x0042f97d                      ; 0042fca7
        ;   XREF to: 0042f97d (UNCONDITIONAL_JUMP)  ; LAB_0042f97d
    MOV EDX,dword ptr [EBP + 0x20]      ; 0042fcac
        ;   Label: LAB_0042fcac
    MOV CL,byte ptr [0x01c00624]        ; 0042fcaf | g_RedBitPosition
    MOV EBX,dword ptr [EDX*0x4 + 0x1c00024] ; 0042fcb5 | g_Hardware32BitPalette
    SHR EBX,CL                          ; 0042fcbc
    AND EBX,0xff                        ; 0042fcbe
    MOV CL,byte ptr [0x01c00630]        ; 0042fcc4 | g_GreenBitPosition
    MOV dword ptr [ESP + 0x8],EBX       ; 0042fcca
    MOV EBX,dword ptr [EDX*0x4 + 0x1c00024] ; 0042fcce | g_Hardware32BitPalette
    MOV EDX,dword ptr [EDX*0x4 + 0x1c00024] ; 0042fcd5 | g_Hardware32BitPalette
    SHR EBX,CL                          ; 0042fcdc
    MOV CL,byte ptr [0x01c0063c]        ; 0042fcde | g_BlueBitPosition
    SHR EDX,CL                          ; 0042fce4
    JMP 0x0042f9fa                      ; 0042fce6
        ;   XREF to: 0042f9fa (UNCONDITIONAL_JUMP)  ; LAB_0042f9fa
    FLD float ptr [ESP + 0xc]           ; 0042fceb
        ;   Label: LAB_0042fceb
    FLD float ptr [ESP]                 ; 0042fcef
    FLD float ptr [ESP + 0x4]           ; 0042fcf2
    FXCH ST2                            ; 0042fcf6
    CALL crt_math.c_round_FUN_00563a30  ; 0042fcf8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0042fcfd
    CALL crt_math.c_round_FUN_00563a30  ; 0042fcff
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 0042fd04
    CALL crt_math.c_round_FUN_00563a30  ; 0042fd06
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    LEA ECX,[EAX*0x4 + 0x0]             ; 0042fd0b
    FXCH                                ; 0042fd12
    FISTP qword ptr [ESP + 0x10]        ; 0042fd14
    FXCH                                ; 0042fd18
    FISTP qword ptr [ESP + 0x20]        ; 0042fd1a
    FISTP qword ptr [ESP + 0x18]        ; 0042fd1e
    MOV EAX,dword ptr [EDX + 0x1bd2fa0] ; 0042fd22 | g_ScreenBufferArray
    MOV EDI,dword ptr [ESP + 0x20]      ; 0042fd28
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042fd2c
    LEA EDX,[EAX + ECX*0x1]             ; 0042fd30
    MOV CL,byte ptr [0x01c00624]        ; 0042fd33 | g_RedBitPosition
    MOV EAX,EDI                         ; 0042fd39
    SHL ESI,CL                          ; 0042fd3b
    MOV CL,byte ptr [0x01c00630]        ; 0042fd3d | g_GreenBitPosition
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042fd43
    SHL EAX,CL                          ; 0042fd47
    MOV CL,byte ptr [0x01c0063c]        ; 0042fd49 | g_BlueBitPosition
    OR EAX,ESI                          ; 0042fd4f
    SHL EBX,CL                          ; 0042fd51
    OR EAX,EBX                          ; 0042fd53
    MOV dword ptr [EDX],EAX             ; 0042fd55
    MOV ESP,EBP                         ; 0042fd57
    POP EBP                             ; 0042fd59
    POP EDI                             ; 0042fd5a
    POP ESI                             ; 0042fd5b
    POP EBX                             ; 0042fd5c
    RET                                 ; 0042fd5d

