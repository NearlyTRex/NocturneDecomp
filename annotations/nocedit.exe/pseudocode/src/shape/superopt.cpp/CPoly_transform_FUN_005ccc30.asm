; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CPoly_transform_FUN_005ccc30(CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CMatrix3x3d *    Stack[0x8]:4   matrix
; CVector3d *      Stack[0xc]:4   pivot
; Local Variables:
; undefined8       Stack[-0x1d0]:8  local_1d0
; undefined8       Stack[-0x1c8]:8  local_1c8
; undefined8       Stack[-0x1c0]:8  local_1c0
; undefined8       Stack[-0x1b8]:8  local_1b8
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined8       Stack[-0x188]:8  local_188
; undefined8       Stack[-0x180]:8  local_180
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined8       Stack[-0x168]:8  local_168
; undefined8       Stack[-0x160]:8  local_160
; undefined8       Stack[-0x158]:8  local_158
; undefined8       Stack[-0x150]:8  local_150
; undefined8       Stack[-0x148]:8  local_148
; undefined8       Stack[-0x140]:8  local_140
; undefined8       Stack[-0x138]:8  local_138
; undefined8       Stack[-0x130]:8  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined8       Stack[-0x110]:8  local_110
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ccc30
        ;   Label: shape_superopt.cpp_CPoly_transform_FUN_005ccc30
    PUSH ESI                            ; 005ccc31
    PUSH EDI                            ; 005ccc32
    PUSH EBP                            ; 005ccc33
    MOV EBP,ESP                         ; 005ccc34
    SUB ESP,0x1bc                       ; 005ccc36
    AND ESP,0xfffffff8                  ; 005ccc3c
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ccc3f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005ccc42
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ccc45
    MOV EAX,dword ptr [EAX]             ; 005ccc48
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ccc4a
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005ccc4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ccc54
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ccc57
    SHL EAX,0x3                         ; 005ccc5a
    MOV ECX,EAX                         ; 005ccc5d
    SHL EAX,0x3                         ; 005ccc5f
    SUB EAX,ECX                         ; 005ccc62
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 005ccc64
    ADD ECX,EAX                         ; 005ccc6b
    LEA EDI,[ESP + 0x78]                ; 005ccc6d
    LEA ESI,[ESP + 0x168]               ; 005ccc71
    FLD double ptr [ECX + 0x8]          ; 005ccc78
    FLD double ptr [ECX + 0x10]         ; 005ccc7b
    FLD double ptr [ECX]                ; 005ccc7e
    MOV dword ptr [ESP + 0x1b8],ECX     ; 005ccc80
    MOV ECX,0x6                         ; 005ccc87
    FSUB double ptr [EBX]               ; 005ccc8c
    FXCH ST2                            ; 005ccc8e
    FSUB double ptr [EBX + 0x8]         ; 005ccc90
    FXCH                                ; 005ccc93
    FSUB double ptr [EBX + 0x10]        ; 005ccc95
    FXCH ST2                            ; 005ccc98
    FSTP double ptr [ESP + 0x168]       ; 005ccc9a
    FSTP double ptr [ESP + 0x170]       ; 005ccca1
    FSTP double ptr [ESP + 0x178]       ; 005ccca8
    MOVSD.REP ES:EDI,ESI                ; 005cccaf
    FLD double ptr [EDX + 0x8]          ; 005cccb1
    FMUL double ptr [ESP + 0x80]        ; 005cccb4
    FLD double ptr [EDX + 0x20]         ; 005cccbb
    FMUL double ptr [ESP + 0x80]        ; 005cccbe
    FLD double ptr [EDX + 0x38]         ; 005cccc5
    FMUL double ptr [ESP + 0x80]        ; 005cccc8
    FLD double ptr [EDX]                ; 005ccccf
    FMUL double ptr [ESP + 0x78]        ; 005cccd1
    FLD double ptr [EDX + 0x18]         ; 005cccd5
    FMUL double ptr [ESP + 0x78]        ; 005cccd8
    FLD double ptr [EDX + 0x30]         ; 005cccdc
    FXCH ST2                            ; 005cccdf
    FADDP ST5,ST0                       ; 005ccce1
    FXCH                                ; 005ccce3
    FMUL double ptr [ESP + 0x78]        ; 005ccce5
    FLD double ptr [EDX + 0x10]         ; 005ccce9
    FMUL double ptr [ESP + 0x88]        ; 005cccec
    FXCH ST2                            ; 005cccf3
    FADDP ST4,ST0                       ; 005cccf5
    FADDP ST2,ST0                       ; 005cccf7
    FLD double ptr [EDX + 0x28]         ; 005cccf9
    FMUL double ptr [ESP + 0x88]        ; 005cccfc
    FLD double ptr [EDX + 0x40]         ; 005ccd03
    FMUL double ptr [ESP + 0x88]        ; 005ccd06
    MOV ECX,0x6                         ; 005ccd0d
    LEA EDI,[ESP + 0x90]                ; 005ccd12
    LEA ESI,[ESP + 0x138]               ; 005ccd19
    FXCH ST2                            ; 005ccd20
    FADDP ST5,ST0                       ; 005ccd22
    FADDP ST3,ST0                       ; 005ccd24
    FADDP                               ; 005ccd26
    FXCH ST2                            ; 005ccd28
    FSTP double ptr [ESP + 0x138]       ; 005ccd2a
    FSTP double ptr [ESP + 0x140]       ; 005ccd31
    FSTP double ptr [ESP + 0x148]       ; 005ccd38
    MOVSD.REP ES:EDI,ESI                ; 005ccd3f
    FLD double ptr [ESP + 0x90]         ; 005ccd41
    FLD double ptr [ESP + 0x98]         ; 005ccd48
    FLD double ptr [ESP + 0xa0]         ; 005ccd4f
    MOV ECX,0x6                         ; 005ccd56
    LEA EDI,[ESP + 0xa8]                ; 005ccd5b
    LEA ESI,[ESP + 0x180]               ; 005ccd62
    FXCH ST2                            ; 005ccd69
    FADD double ptr [EBX]               ; 005ccd6b
    FXCH                                ; 005ccd6d
    FADD double ptr [EBX + 0x8]         ; 005ccd6f
    FXCH ST2                            ; 005ccd72
    FADD double ptr [EBX + 0x10]        ; 005ccd74
    FXCH                                ; 005ccd77
    FSTP double ptr [ESP + 0x180]       ; 005ccd79
    FXCH                                ; 005ccd80
    FSTP double ptr [ESP + 0x188]       ; 005ccd82
    FSTP double ptr [ESP + 0x190]       ; 005ccd89
    MOVSD.REP ES:EDI,ESI                ; 005ccd90
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 005ccd92
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005ccd99
    MOV dword ptr [ECX],EAX             ; 005ccda0
    MOV EAX,dword ptr [ESP + 0xac]      ; 005ccda2
    MOV dword ptr [ECX + 0x4],EAX       ; 005ccda9
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005ccdac
    MOV dword ptr [ECX + 0x8],EAX       ; 005ccdb3
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005ccdb6
    MOV dword ptr [ECX + 0xc],EAX       ; 005ccdbd
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005ccdc0
    MOV dword ptr [ECX + 0x10],EAX      ; 005ccdc7
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005ccdca
    MOV dword ptr [ECX + 0x14],EAX      ; 005ccdd1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ccdd4
    MOV EAX,dword ptr [EAX + 0x8]       ; 005ccdd7
    SHL EAX,0x3                         ; 005ccdda
    MOV ECX,EAX                         ; 005ccddd
    SHL EAX,0x3                         ; 005ccddf
    SUB EAX,ECX                         ; 005ccde2
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 005ccde4
    ADD ECX,EAX                         ; 005ccdeb
    LEA EDI,[ESP + 0x120]               ; 005ccded
    LEA ESI,[ESP + 0x18]                ; 005ccdf4
    FLD double ptr [ECX + 0x8]          ; 005ccdf8
    FLD double ptr [ECX + 0x10]         ; 005ccdfb
    FLD double ptr [ECX]                ; 005ccdfe
    MOV dword ptr [ESP + 0x1b8],ECX     ; 005cce00
    MOV ECX,0x6                         ; 005cce07
    FSUB double ptr [EBX]               ; 005cce0c
    FXCH ST2                            ; 005cce0e
    FSUB double ptr [EBX + 0x8]         ; 005cce10
    FXCH                                ; 005cce13
    FSUB double ptr [EBX + 0x10]        ; 005cce15
    FXCH ST2                            ; 005cce18
    FSTP double ptr [ESP + 0x18]        ; 005cce1a
    FSTP double ptr [ESP + 0x20]        ; 005cce1e
    FSTP double ptr [ESP + 0x28]        ; 005cce22
    MOVSD.REP ES:EDI,ESI                ; 005cce26
    FLD double ptr [EDX + 0x8]          ; 005cce28
    FMUL double ptr [ESP + 0x128]       ; 005cce2b
    FLD double ptr [EDX + 0x20]         ; 005cce32
    FMUL double ptr [ESP + 0x128]       ; 005cce35
    FLD double ptr [EDX + 0x38]         ; 005cce3c
    FMUL double ptr [ESP + 0x128]       ; 005cce3f
    FLD double ptr [EDX]                ; 005cce46
    FMUL double ptr [ESP + 0x120]       ; 005cce48
    FLD double ptr [EDX + 0x18]         ; 005cce4f
    FMUL double ptr [ESP + 0x120]       ; 005cce52
    FLD double ptr [EDX + 0x30]         ; 005cce59
    FXCH ST2                            ; 005cce5c
    FADDP ST5,ST0                       ; 005cce5e
    FXCH                                ; 005cce60
    FMUL double ptr [ESP + 0x120]       ; 005cce62
    FLD double ptr [EDX + 0x10]         ; 005cce69
    FMUL double ptr [ESP + 0x130]       ; 005cce6c
    FXCH ST2                            ; 005cce73
    FADDP ST4,ST0                       ; 005cce75
    FADDP ST2,ST0                       ; 005cce77
    FLD double ptr [EDX + 0x28]         ; 005cce79
    FMUL double ptr [ESP + 0x130]       ; 005cce7c
    FLD double ptr [EDX + 0x40]         ; 005cce83
    FMUL double ptr [ESP + 0x130]       ; 005cce86
    MOV ECX,0x6                         ; 005cce8d
    LEA EDI,[ESP + 0xc0]                ; 005cce92
    MOV ESI,ESP                         ; 005cce99
    FXCH ST2                            ; 005cce9b
    FADDP ST5,ST0                       ; 005cce9d
    FADDP ST3,ST0                       ; 005cce9f
    FADDP                               ; 005ccea1
    FXCH ST2                            ; 005ccea3
    FSTP double ptr [ESP]               ; 005ccea5
    FSTP double ptr [ESP + 0x8]         ; 005ccea8
    FSTP double ptr [ESP + 0x10]        ; 005cceac
    MOVSD.REP ES:EDI,ESI                ; 005cceb0
    FLD double ptr [ESP + 0xc0]         ; 005cceb2
    FLD double ptr [ESP + 0xc8]         ; 005cceb9
    FLD double ptr [ESP + 0xd0]         ; 005ccec0
    MOV ECX,0x6                         ; 005ccec7
    LEA EDI,[ESP + 0xf0]                ; 005ccecc
    LEA ESI,[ESP + 0x108]               ; 005cced3
    FXCH ST2                            ; 005cceda
    FADD double ptr [EBX]               ; 005ccedc
    FXCH                                ; 005ccede
    FADD double ptr [EBX + 0x8]         ; 005ccee0
    FXCH ST2                            ; 005ccee3
    FADD double ptr [EBX + 0x10]        ; 005ccee5
    FXCH                                ; 005ccee8
    FSTP double ptr [ESP + 0x108]       ; 005cceea
    FXCH                                ; 005ccef1
    FSTP double ptr [ESP + 0x110]       ; 005ccef3
    FSTP double ptr [ESP + 0x118]       ; 005ccefa
    MOVSD.REP ES:EDI,ESI                ; 005ccf01
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 005ccf03
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005ccf0a
    MOV dword ptr [ECX],EAX             ; 005ccf11
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ccf13
    MOV dword ptr [ECX + 0x4],EAX       ; 005ccf1a
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ccf1d
    MOV dword ptr [ECX + 0x8],EAX       ; 005ccf24
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005ccf27
    MOV dword ptr [ECX + 0xc],EAX       ; 005ccf2e
    MOV EAX,dword ptr [ESP + 0x100]     ; 005ccf31
    MOV dword ptr [ECX + 0x10],EAX      ; 005ccf38
    MOV EAX,dword ptr [ESP + 0x104]     ; 005ccf3b
    MOV dword ptr [ECX + 0x14],EAX      ; 005ccf42
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ccf45
    MOV EAX,dword ptr [EAX + 0xc]       ; 005ccf48
    SHL EAX,0x3                         ; 005ccf4b
    MOV ECX,EAX                         ; 005ccf4e
    SHL EAX,0x3                         ; 005ccf50
    SUB EAX,ECX                         ; 005ccf53
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 005ccf55
    ADD ECX,EAX                         ; 005ccf5c
    LEA EDI,[ESP + 0x150]               ; 005ccf5e
    LEA ESI,[ESP + 0x60]                ; 005ccf65
    FLD double ptr [ECX + 0x8]          ; 005ccf69
    FLD double ptr [ECX + 0x10]         ; 005ccf6c
    FLD double ptr [ECX]                ; 005ccf6f
    MOV dword ptr [ESP + 0x1b4],ECX     ; 005ccf71
    MOV ECX,0x6                         ; 005ccf78
    FSUB double ptr [EBX]               ; 005ccf7d
    FXCH ST2                            ; 005ccf7f
    FSUB double ptr [EBX + 0x8]         ; 005ccf81
    FXCH                                ; 005ccf84
    FSUB double ptr [EBX + 0x10]        ; 005ccf86
    FXCH ST2                            ; 005ccf89
    FSTP double ptr [ESP + 0x60]        ; 005ccf8b
    FSTP double ptr [ESP + 0x68]        ; 005ccf8f
    FSTP double ptr [ESP + 0x70]        ; 005ccf93
    MOVSD.REP ES:EDI,ESI                ; 005ccf97
    FLD double ptr [EDX + 0x8]          ; 005ccf99
    FMUL double ptr [ESP + 0x158]       ; 005ccf9c
    FLD double ptr [EDX + 0x20]         ; 005ccfa3
    FMUL double ptr [ESP + 0x158]       ; 005ccfa6
    FLD double ptr [EDX + 0x38]         ; 005ccfad
    FMUL double ptr [ESP + 0x158]       ; 005ccfb0
    FLD double ptr [EDX]                ; 005ccfb7
    FMUL double ptr [ESP + 0x150]       ; 005ccfb9
    FLD double ptr [EDX + 0x18]         ; 005ccfc0
    FMUL double ptr [ESP + 0x150]       ; 005ccfc3
    FLD double ptr [EDX + 0x30]         ; 005ccfca
    FXCH ST2                            ; 005ccfcd
    FADDP ST5,ST0                       ; 005ccfcf
    FXCH                                ; 005ccfd1
    FMUL double ptr [ESP + 0x150]       ; 005ccfd3
    FLD double ptr [EDX + 0x10]         ; 005ccfda
    FMUL double ptr [ESP + 0x160]       ; 005ccfdd
    FXCH ST2                            ; 005ccfe4
    FADDP ST4,ST0                       ; 005ccfe6
    FADDP ST2,ST0                       ; 005ccfe8
    FLD double ptr [EDX + 0x28]         ; 005ccfea
    FMUL double ptr [ESP + 0x160]       ; 005ccfed
    FLD double ptr [EDX + 0x40]         ; 005ccff4
    FMUL double ptr [ESP + 0x160]       ; 005ccff7
    MOV ECX,0x6                         ; 005ccffe
    LEA EDI,[ESP + 0x48]                ; 005cd003
    LEA ESI,[ESP + 0xd8]                ; 005cd007
    FXCH ST2                            ; 005cd00e
    FADDP ST5,ST0                       ; 005cd010
    FADDP ST3,ST0                       ; 005cd012
    FADDP                               ; 005cd014
    FXCH ST2                            ; 005cd016
    FSTP double ptr [ESP + 0xd8]        ; 005cd018
    FSTP double ptr [ESP + 0xe0]        ; 005cd01f
    FSTP double ptr [ESP + 0xe8]        ; 005cd026
    MOVSD.REP ES:EDI,ESI                ; 005cd02d
    FLD double ptr [ESP + 0x48]         ; 005cd02f
    FLD double ptr [ESP + 0x50]         ; 005cd033
    FLD double ptr [ESP + 0x58]         ; 005cd037
    MOV ECX,0x6                         ; 005cd03b
    LEA EDI,[ESP + 0x30]                ; 005cd040
    LEA ESI,[ESP + 0x198]               ; 005cd044
    FXCH ST2                            ; 005cd04b
    FADD double ptr [EBX]               ; 005cd04d
    FXCH                                ; 005cd04f
    FADD double ptr [EBX + 0x8]         ; 005cd051
    FXCH ST2                            ; 005cd054
    FADD double ptr [EBX + 0x10]        ; 005cd056
    FXCH                                ; 005cd059
    FSTP double ptr [ESP + 0x198]       ; 005cd05b
    FXCH                                ; 005cd062
    FSTP double ptr [ESP + 0x1a0]       ; 005cd064
    FSTP double ptr [ESP + 0x1a8]       ; 005cd06b
    MOVSD.REP ES:EDI,ESI                ; 005cd072
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 005cd074
    MOV EAX,dword ptr [ESP + 0x30]      ; 005cd07b
    MOV dword ptr [EDX],EAX             ; 005cd07f
    MOV EAX,dword ptr [ESP + 0x34]      ; 005cd081
    MOV dword ptr [EDX + 0x4],EAX       ; 005cd085
    MOV EAX,dword ptr [ESP + 0x38]      ; 005cd088
    MOV dword ptr [EDX + 0x8],EAX       ; 005cd08c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005cd08f
    MOV dword ptr [EDX + 0xc],EAX       ; 005cd093
    MOV EAX,dword ptr [ESP + 0x40]      ; 005cd096
    MOV dword ptr [EDX + 0x10],EAX      ; 005cd09a
    MOV EAX,dword ptr [ESP + 0x44]      ; 005cd09d
    MOV dword ptr [EDX + 0x14],EAX      ; 005cd0a1
    MOV ESP,EBP                         ; 005cd0a4
    POP EBP                             ; 005cd0a6
    POP EDI                             ; 005cd0a7
    POP ESI                             ; 005cd0a8
    POP EBX                             ; 005cd0a9
    RET                                 ; 005cd0aa

