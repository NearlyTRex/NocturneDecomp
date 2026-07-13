; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0050fdd0(undefined4 param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0053d100 at 0053d1fe
;
; Referenced Globals:
;   undefined4 DAT_00590a1d
;   undefined4 DAT_00590a21
;
; Called Functions:
;   FUN_0050fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fdd0
        ;   Label: FUN_0050fdd0
    PUSH ESI                            ; 0050fdd1
    PUSH EBP                            ; 0050fdd2
    MOV EBP,ESP                         ; 0050fdd3
    SUB ESP,0x7c                        ; 0050fdd5
    AND ESP,0xfffffff8                  ; 0050fdd8
    MOV ESI,dword ptr [EBP + 0x10]      ; 0050fddb
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050fdde
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050fde1
    MOV EAX,dword ptr [EBX]             ; 0050fde4
    MOV dword ptr [ESP + 0x18],EAX      ; 0050fde6
    LEA EAX,[EBX + 0x4]                 ; 0050fdea
    MOV EAX,dword ptr [EAX]             ; 0050fded
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050fdef
    LEA EAX,[EBX + 0x8]                 ; 0050fdf3
    MOV EAX,dword ptr [EAX]             ; 0050fdf6
    MOV dword ptr [ESP + 0x20],EAX      ; 0050fdf8
    MOV EAX,dword ptr [EDX]             ; 0050fdfc
    MOV dword ptr [ESP + 0x30],EAX      ; 0050fdfe
    LEA EAX,[EDX + 0x4]                 ; 0050fe02
    MOV EAX,dword ptr [EAX]             ; 0050fe05
    MOV dword ptr [ESP + 0x34],EAX      ; 0050fe07
    LEA EAX,[EDX + 0x8]                 ; 0050fe0b
    MOV ECX,0xc2000000                  ; 0050fe0e
    XOR EBX,EBX                         ; 0050fe13
    MOV EAX,dword ptr [EAX]             ; 0050fe15
    XOR EDX,EDX                         ; 0050fe17
    MOV dword ptr [ESP + 0x38],EAX      ; 0050fe19
    MOV dword ptr [ESP + 0x3c],EDX      ; 0050fe1d
    MOV dword ptr [ESP + 0x40],ECX      ; 0050fe21
    MOV dword ptr [ESP + 0x44],EDX      ; 0050fe25
    MOV dword ptr [ESP + 0x74],EDX      ; 0050fe29
    FLD float ptr [0x00590a1d]          ; 0050fe2d | DAT_00590a1d
        ;   Label: LAB_0050fe2d
    FLD float ptr [ESP + 0x3c]          ; 0050fe33
    FMUL ST1                            ; 0050fe37
    FLD float ptr [ESP + 0x40]          ; 0050fe39
    FMUL ST2                            ; 0050fe3d
    FLD float ptr [ESP + 0x44]          ; 0050fe3f
    FMULP ST3                           ; 0050fe43
    FLD float ptr [0x00590a21]          ; 0050fe45 | DAT_00590a21
    FLD float ptr [ESP + 0x30]          ; 0050fe4b
    FMUL ST1                            ; 0050fe4f
    FLD float ptr [ESP + 0x34]          ; 0050fe51
    FMUL ST2                            ; 0050fe55
    FLD float ptr [ESP + 0x38]          ; 0050fe57
    FMULP ST3                           ; 0050fe5b
    MOV EAX,0x3dcccccd                  ; 0050fe5d
    FLD float ptr [ESP + 0x18]          ; 0050fe62
    MOV dword ptr [ESP + 0x78],EAX      ; 0050fe66
    FXCH ST5                            ; 0050fe6a
    FSTP float ptr [ESP + 0x24]         ; 0050fe6c
    FLD float ptr [ESP + 0x1c]          ; 0050fe70
    FXCH ST4                            ; 0050fe74
    FSTP float ptr [ESP + 0x28]         ; 0050fe76
    FLD float ptr [ESP + 0x20]          ; 0050fe7a
    FXCH ST6                            ; 0050fe7e
    FSTP float ptr [ESP + 0x2c]         ; 0050fe80
    FXCH                                ; 0050fe84
    FSTP float ptr [ESP + 0x54]         ; 0050fe86
    FSTP float ptr [ESP + 0x58]         ; 0050fe8a
    FSTP float ptr [ESP + 0x5c]         ; 0050fe8e
    LEA EAX,[ESP + 0x60]                ; 0050fe92
    FXCH                                ; 0050fe96
    FADD float ptr [ESP + 0x54]         ; 0050fe98
    FXCH                                ; 0050fe9c
    FADD float ptr [ESP + 0x58]         ; 0050fe9e
    FXCH ST2                            ; 0050fea2
    FADD float ptr [ESP + 0x5c]         ; 0050fea4
    PUSH EAX                            ; 0050fea8
    FXCH                                ; 0050fea9
    FSTP float ptr [ESP + 0x10]         ; 0050feab
    FXCH                                ; 0050feaf
    FSTP float ptr [ESP + 0x14]         ; 0050feb1
    FSTP float ptr [ESP + 0x18]         ; 0050feb5
    FLD float ptr [ESP + 0x10]          ; 0050feb9
    FLD float ptr [ESP + 0x14]          ; 0050febd
    LEA EAX,[ESP + 0x1c]                ; 0050fec1
    FLD float ptr [ESP + 0x18]          ; 0050fec5
    PUSH EAX                            ; 0050fec9
    FXCH ST2                            ; 0050feca
    FADD float ptr [ESP + 0x2c]         ; 0050fecc
    FXCH                                ; 0050fed0
    FADD float ptr [ESP + 0x30]         ; 0050fed2
    FXCH ST2                            ; 0050fed6
    FADD float ptr [ESP + 0x34]         ; 0050fed8
    FXCH                                ; 0050fedc
    FSTP float ptr [ESP + 0x68]         ; 0050fede
    FXCH                                ; 0050fee2
    FSTP float ptr [ESP + 0x6c]         ; 0050fee4
    PUSH ESI                            ; 0050fee8
    FSTP float ptr [ESP + 0x74]         ; 0050fee9
    CALL FUN_0050fb00                   ; 0050feed
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fb00()
    MOV dword ptr [ESP + 0x7c],EAX      ; 0050fef2
    FLD float ptr [ESP + 0x7c]          ; 0050fef6
    ADD ESP,0xc                         ; 0050fefa
    FLDZ                                ; 0050fefd
    FXCH                                ; 0050feff
    FST float ptr [ESP + 0x8]           ; 0050ff01
    FSTP double ptr [ESP]               ; 0050ff05
    FCOMP double ptr [ESP]              ; 0050ff08
    FNSTSW AX                           ; 0050ff0b
    SAHF                                ; 0050ff0d
    JA 0x0050ff1e                       ; 0050ff0e
        ;   XREF to: 0050ff1e (CONDITIONAL_JUMP)  ; LAB_0050ff1e
    FLD1                                ; 0050ff10
    FCOMP double ptr [ESP]              ; 0050ff12
    FNSTSW AX                           ; 0050ff15
    SAHF                                ; 0050ff17
    JNC 0x0050ffc2                      ; 0050ff18
        ;   XREF to: 0050ffc2 (CONDITIONAL_JUMP)  ; LAB_0050ffc2
    LEA EDX,[ESP + 0x18]                ; 0050ff1e
        ;   Label: LAB_0050ff1e
    LEA EAX,[ESP + 0x60]                ; 0050ff22
    CMP EDX,EAX                         ; 0050ff26
    JZ 0x0050ff42                       ; 0050ff28
        ;   XREF to: 0050ff42 (CONDITIONAL_JUMP)  ; LAB_0050ff42
    MOV EAX,dword ptr [ESP + 0x60]      ; 0050ff2a
    MOV dword ptr [ESP + 0x18],EAX      ; 0050ff2e
    MOV EAX,dword ptr [ESP + 0x64]      ; 0050ff32
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050ff36
    MOV EAX,dword ptr [ESP + 0x68]      ; 0050ff3a
    MOV dword ptr [ESP + 0x20],EAX      ; 0050ff3e
    FLD float ptr [ESP + 0x3c]          ; 0050ff42
        ;   Label: LAB_0050ff42
    FMUL float ptr [ESP + 0x78]         ; 0050ff46
    FLD float ptr [ESP + 0x40]          ; 0050ff4a
    FMUL float ptr [ESP + 0x78]         ; 0050ff4e
    FLD float ptr [ESP + 0x44]          ; 0050ff52
    FMUL float ptr [ESP + 0x78]         ; 0050ff56
    FLD float ptr [ESP + 0x30]          ; 0050ff5a
    FLD float ptr [ESP + 0x34]          ; 0050ff5e
    FLD float ptr [ESP + 0x38]          ; 0050ff62
    FLD float ptr [ESP + 0x74]          ; 0050ff66
    INC EBX                             ; 0050ff6a
    FADD float ptr [ESP + 0x78]         ; 0050ff6b
    FXCH ST6                            ; 0050ff6f
    FSTP float ptr [ESP + 0x48]         ; 0050ff71
    FXCH ST4                            ; 0050ff75
    FSTP float ptr [ESP + 0x4c]         ; 0050ff77
    FXCH ST2                            ; 0050ff7b
    FSTP float ptr [ESP + 0x50]         ; 0050ff7d
    FXCH ST3                            ; 0050ff81
    FSTP float ptr [ESP + 0x74]         ; 0050ff83
    FXCH ST2                            ; 0050ff87
    FADD float ptr [ESP + 0x48]         ; 0050ff89
    FXCH ST2                            ; 0050ff8d
    FADD float ptr [ESP + 0x4c]         ; 0050ff8f
    FXCH                                ; 0050ff93
    FADD float ptr [ESP + 0x50]         ; 0050ff95
    FXCH ST2                            ; 0050ff99
    FSTP float ptr [ESP + 0x30]         ; 0050ff9b
    FSTP float ptr [ESP + 0x34]         ; 0050ff9f
    FSTP float ptr [ESP + 0x38]         ; 0050ffa3
    CMP EBX,0x64                        ; 0050ffa7
    JL 0x0050fe2d                       ; 0050ffaa
        ;   XREF to: 0050fe2d (CONDITIONAL_JUMP)  ; LAB_0050fe2d
    MOV dword ptr [ESP + 0x6c],0xbf800000 ; 0050ffb0
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0050ffb8
    MOV ESP,EBP                         ; 0050ffbc
    POP EBP                             ; 0050ffbe
    POP ESI                             ; 0050ffbf
    POP EBX                             ; 0050ffc0
    RET                                 ; 0050ffc1
    FLD float ptr [ESP + 0x8]           ; 0050ffc2
        ;   Label: LAB_0050ffc2
    FMUL float ptr [0x00590a21]         ; 0050ffc6 | DAT_00590a21
    FADD float ptr [ESP + 0x74]         ; 0050ffcc
    FSTP float ptr [ESP + 0x6c]         ; 0050ffd0
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0050ffd4
    MOV ESP,EBP                         ; 0050ffd8
    POP EBP                             ; 0050ffda
    POP ESI                             ; 0050ffdb
    POP EBX                             ; 0050ffdc
    RET                                 ; 0050ffdd

