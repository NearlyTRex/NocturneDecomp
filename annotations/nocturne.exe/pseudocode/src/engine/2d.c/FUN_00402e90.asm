; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402e90(int param_1)
;
; Local Variables:
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
;   engine_2d.c_FUN_00403070 at 004030e6
;
; Referenced Globals:
;   float FLOAT_00577188 = 0.06666667
;   undefined4 DAT_006af634
;   uchar[768] g_SourcePaletteData
;   undefined4 g_SourcePaletteData+4
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_2d.c_findBestPaletteMatch_FUN_00401850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402e90
        ;   Label: engine_2d.c_FUN_00402e90
    PUSH ESI                            ; 00402e91
    PUSH EDI                            ; 00402e92
    PUSH EBP                            ; 00402e93
    SUB ESP,0x34                        ; 00402e94
    MOV EAX,dword ptr [ESP + 0x48]      ; 00402e97
    MOV [0x006af634],EAX                ; 00402e9b | DAT_006af634
    MOV EBX,EAX                         ; 00402ea0
    SHL EAX,0x2                         ; 00402ea2
    SUB EAX,EBX                         ; 00402ea5
    MOV EBP,0x1000                      ; 00402ea7
    MOV EBX,EAX                         ; 00402eac
    XOR EAX,EAX                         ; 00402eae
    XOR EDX,EDX                         ; 00402eb0
    MOV AL,byte ptr [EBX + 0x1c00648]   ; 00402eb2 | g_SourcePaletteData
    XOR EDI,EDI                         ; 00402eb8
    MOV dword ptr [ESP + 0x30],EAX      ; 00402eba
    XOR EAX,EAX                         ; 00402ebe
    MOV dword ptr [ESP + 0x18],EDX      ; 00402ec0
    MOV AL,byte ptr [EBX + 0x1c00649]   ; 00402ec4
    FILD word ptr [ESP + 0x30]          ; 00402eca
    MOV dword ptr [ESP + 0x30],EAX      ; 00402ece
    XOR EAX,EAX                         ; 00402ed2
    FSTP float ptr [ESP + 0x10]         ; 00402ed4
    MOV AL,byte ptr [EBX + 0x1c0064a]   ; 00402ed8
    FILD word ptr [ESP + 0x30]          ; 00402ede
    MOV dword ptr [ESP + 0x30],EAX      ; 00402ee2
    FSTP float ptr [ESP + 0x14]         ; 00402ee6
    FILD word ptr [ESP + 0x30]          ; 00402eea
    FSTP float ptr [ESP + 0xc]          ; 00402eee
    XOR EAX,EAX                         ; 00402ef2
        ;   Label: LAB_00402ef2
    MOV AL,byte ptr [EDI + 0x1c00648]   ; 00402ef4 | g_SourcePaletteData
    MOV dword ptr [ESP + 0x30],EAX      ; 00402efa
    FLD float ptr [ESP + 0x10]          ; 00402efe
    FILD word ptr [ESP + 0x30]          ; 00402f02
    FSTP float ptr [ESP + 0x2c]         ; 00402f06
    FSUB float ptr [ESP + 0x2c]         ; 00402f0a
    FLD float ptr [0x00577188]          ; 00402f0e | FLOAT_00577188
    FXCH                                ; 00402f14
    FMUL ST1                            ; 00402f16
    XOR EAX,EAX                         ; 00402f18
    FLD float ptr [ESP + 0x14]          ; 00402f1a
    MOV AL,byte ptr [EDI + 0x1c00649]   ; 00402f1e | g_SourcePaletteData+4
    FLD float ptr [ESP + 0xc]           ; 00402f24
    MOV dword ptr [ESP + 0x30],EAX      ; 00402f28
    XOR EAX,EAX                         ; 00402f2c
    FILD word ptr [ESP + 0x30]          ; 00402f2e
    MOV AL,byte ptr [EDI + 0x1c0064a]   ; 00402f32
    FSTP float ptr [ESP + 0x1c]         ; 00402f38
    MOV dword ptr [ESP + 0x30],EAX      ; 00402f3c
    FXCH                                ; 00402f40
    FSUB float ptr [ESP + 0x1c]         ; 00402f42
    FILD word ptr [ESP + 0x30]          ; 00402f46
    FSTP float ptr [ESP + 0x28]         ; 00402f4a
    FXCH                                ; 00402f4e
    FSUB float ptr [ESP + 0x28]         ; 00402f50
    FXCH                                ; 00402f54
    FMUL ST3                            ; 00402f56
    FXCH                                ; 00402f58
    FMULP ST3                           ; 00402f5a
    MOV BL,byte ptr [ESP + 0x18]        ; 00402f5c
    MOV ESI,EBP                         ; 00402f60
    FXCH                                ; 00402f62
    FSTP float ptr [ESP + 0x24]         ; 00402f64
    MOV EAX,dword ptr [ESP + 0x18]      ; 00402f68
    FSTP float ptr [ESP]                ; 00402f6c
    MOV byte ptr [EAX + 0x1bd1ea0],BL   ; 00402f6f
    LEA EBX,[EAX + 0x100]               ; 00402f75
    FSTP float ptr [ESP + 0x20]         ; 00402f7b
    FLD float ptr [ESP + 0x2c]          ; 00402f7f
        ;   Label: LAB_00402f7f
    FLD float ptr [ESP + 0x1c]          ; 00402f83
    PUSH 0xf5                           ; 00402f87
    FLD float ptr [ESP + 0x2c]          ; 00402f8c
    PUSH 0xa                            ; 00402f90
    FXCH ST2                            ; 00402f92
    FADD float ptr [ESP + 0x2c]         ; 00402f94
    FXCH                                ; 00402f98
    FADD float ptr [ESP + 0x8]          ; 00402f9a
    FXCH ST2                            ; 00402f9e
    FADD float ptr [ESP + 0x28]         ; 00402fa0
    FXCH                                ; 00402fa4
    FSTP float ptr [ESP + 0x34]         ; 00402fa6
    FXCH                                ; 00402faa
    FSTP float ptr [ESP + 0x24]         ; 00402fac
    FST float ptr [ESP + 0x30]          ; 00402fb0
    FLD float ptr [ESP + 0x24]          ; 00402fb4
    FLD float ptr [ESP + 0x34]          ; 00402fb8
    FXCH ST2                            ; 00402fbc
    CALL crt_math.c_round_FUN_00563a30  ; 00402fbe
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00402fc3
    CALL crt_math.c_round_FUN_00563a30  ; 00402fc5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00402fca
    FISTP dword ptr [ESP + 0xc]         ; 00402fcc
    FISTP dword ptr [ESP + 0x10]        ; 00402fd0
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402fd4
    MOV EAX,dword ptr [ESP + 0x10]      ; 00402fd8
    PUSH ECX                            ; 00402fdc
    CALL crt_math.c_round_FUN_00563a30  ; 00402fdd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EAX                            ; 00402fe2
    FISTP dword ptr [ESP + 0x18]        ; 00402fe3
    MOV EDX,dword ptr [ESP + 0x18]      ; 00402fe7
    PUSH EDX                            ; 00402feb
    ADD EBX,0x100                       ; 00402fec
    CALL engine_2d.c_findBestPaletteMatch_FUN_00401850 ; 00402ff2
        ;   XREF to: 00401850 (UNCONDITIONAL_CALL)  ; int engine_2d.c_findBestPaletteMatch_FUN_00401850(int red, int green, int blue, int start_index, ...)
    ADD ESP,0x14                        ; 00402ff7
    MOV byte ptr [EBX + 0x1bd1da0],AL   ; 00402ffa
    CMP EBX,ESI                         ; 00403000
    JNZ 0x00402f7f                      ; 00403002
        ;   XREF to: 00402f7f (CONDITIONAL_JUMP)  ; LAB_00402f7f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00403008
    ADD EDI,0x3                         ; 0040300c
    INC ECX                             ; 0040300f
    INC EBP                             ; 00403010
    MOV dword ptr [ESP + 0x18],ECX      ; 00403011
    CMP ECX,0x100                       ; 00403015
    JL 0x00402ef2                       ; 0040301b
        ;   XREF to: 00402ef2 (CONDITIONAL_JUMP)  ; LAB_00402ef2
    XOR ESI,ESI                         ; 00403021
    MOV dword ptr [ESP + 0x18],ESI      ; 00403023
    MOV EAX,dword ptr [ESP + 0x18]      ; 00403027
        ;   Label: LAB_00403027
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040302b
    MOV AL,byte ptr [EAX + 0x1bd1ea0]   ; 0040302f
    MOV byte ptr [EBX + 0x1bd1da0],AL   ; 00403035
    MOV AL,byte ptr [ESP + 0x48]        ; 0040303b
    LEA EDI,[EBX + 0x1]                 ; 0040303f
    MOV byte ptr [EBX + 0x1bd2da0],AL   ; 00403042
    MOV dword ptr [ESP + 0x18],EDI      ; 00403048
    MOV byte ptr [EBX + 0x1bd2ea0],AL   ; 0040304c
    CMP EDI,0x100                       ; 00403052
    JL 0x00403027                       ; 00403058
        ;   XREF to: 00403027 (CONDITIONAL_JUMP)  ; LAB_00403027
    ADD ESP,0x34                        ; 0040305a
    POP EBP                             ; 0040305d
    POP EDI                             ; 0040305e
    POP ESI                             ; 0040305f
    POP EBX                             ; 00403060
    RET                                 ; 00403061

