; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CPoly_scale_FUN_005cc7c0(CPoly *this_ptr,CVector3d *scale,CVector3d *pivot)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   scale
; CVector3d *      Stack[0xc]:4   pivot
; Local Variables:
; double           Stack[-0x210]:8  local_210
; double           Stack[-0x208]:8  local_208
; double           Stack[-0x200]:8  local_200
; double           Stack[-0x1f8]:8  local_1f8
; double           Stack[-0x1f0]:8  local_1f0
; double           Stack[-0x1e8]:8  local_1e8
; double           Stack[-0x1e0]:8  local_1e0
; double           Stack[-0x1d8]:8  local_1d8
; double           Stack[-0x1d0]:8  local_1d0
; undefined4[4]    Stack[-0x1c8]:16  local_1c8
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  uStack_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  uStack_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  uStack_19c
; double           Stack[-0x198]:8  local_198
; double           Stack[-0x190]:8  local_190
; double           Stack[-0x188]:8  local_188
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  uStack_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  uStack_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  uStack_16c
; double           Stack[-0x168]:8  local_168
; double           Stack[-0x160]:8  local_160
; double           Stack[-0x158]:8  local_158
; undefined4[4]    Stack[-0x150]:16  local_150
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; double           Stack[-0x138]:8  local_138
; double           Stack[-0x130]:8  local_130
; double           Stack[-0x128]:8  local_128
; double           Stack[-0x120]:8  local_120
; double           Stack[-0x118]:8  local_118
; double           Stack[-0x110]:8  local_110
; double           Stack[-0x108]:8  local_108
; double           Stack[-0x100]:8  local_100
; double           Stack[-0xf8]:8  local_f8
; double           Stack[-0xf0]:8  local_f0
; double           Stack[-0xe8]:8  local_e8
; double           Stack[-0xe0]:8  local_e0
; double           Stack[-0xd8]:8  local_d8
; double           Stack[-0xd0]:8  local_d0
; double           Stack[-0xc8]:8  local_c8
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  uStack_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  uStack_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  uStack_ac
; double           Stack[-0xa8]:8  local_a8
; double           Stack[-0xa0]:8  local_a0
; double           Stack[-0x98]:8  local_98
; undefined4[4]    Stack[-0x90]:16  local_90
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; double           Stack[-0x78]:8  local_78
; double           Stack[-0x70]:8  local_70
; double           Stack[-0x68]:8  local_68
; double           Stack[-0x60]:8  local_60
; double           Stack[-0x58]:8  local_58
; double           Stack[-0x50]:8  local_50
; double           Stack[-0x48]:8  local_48
; double           Stack[-0x40]:8  local_40
; double           Stack[-0x38]:8  local_38
; double           Stack[-0x30]:8  local_30
; double           Stack[-0x28]:8  local_28
; double           Stack[-0x20]:8  local_20
; CVert *          Stack[-0x18]:4  local_18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc7c0
        ;   Label: shape_superopt.cpp_CPoly_scale_FUN_005cc7c0
    PUSH ESI                            ; 005cc7c1
    PUSH EDI                            ; 005cc7c2
    PUSH EBP                            ; 005cc7c3
    MOV EBP,ESP                         ; 005cc7c4
    SUB ESP,0x1fc                       ; 005cc7c6
    AND ESP,0xfffffff8                  ; 005cc7cc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005cc7cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005cc7d2
    MOV EAX,dword ptr [EAX]             ; 005cc7d5
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cc7d7
    MOV dword ptr [ESP + 0x1f8],EAX     ; 005cc7da
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc7e1
    MOV EAX,dword ptr [EAX]             ; 005cc7e4
    MOV dword ptr [ESP + 0x150],EAX     ; 005cc7e6
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc7ed
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cc7f0
    MOV dword ptr [ESP + 0x154],EAX     ; 005cc7f3
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc7fa
    MOV EAX,dword ptr [EAX + 0x8]       ; 005cc7fd
    MOV dword ptr [ESP + 0x158],EAX     ; 005cc800
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc807
    MOV EAX,dword ptr [EAX + 0xc]       ; 005cc80a
    MOV dword ptr [ESP + 0x15c],EAX     ; 005cc80d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc814
    MOV EAX,dword ptr [EAX + 0x10]      ; 005cc817
    MOV dword ptr [ESP + 0x160],EAX     ; 005cc81a
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc821
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cc824
    MOV dword ptr [ESP + 0x164],EAX     ; 005cc827
    MOV EAX,dword ptr [EBP + 0x14]      ; 005cc82e
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cc831
    SHL EAX,0x3                         ; 005cc834
    MOV EBX,EAX                         ; 005cc837
    SHL EAX,0x3                         ; 005cc839
    SUB EAX,EBX                         ; 005cc83c
    MOV EBX,dword ptr [ESP + 0x1f8]     ; 005cc83e
    MOV ECX,0x6                         ; 005cc845
    ADD EBX,EAX                         ; 005cc84a
    MOV EDI,ESP                         ; 005cc84c
    LEA ESI,[ESP + 0x108]               ; 005cc84e
    FLD double ptr [EBX]                ; 005cc855
    FLD double ptr [EBX + 0x8]          ; 005cc857
    FLD double ptr [EBX + 0x10]         ; 005cc85a
    FXCH ST2                            ; 005cc85d
    FSUB double ptr [EDX]               ; 005cc85f
    FXCH                                ; 005cc861
    FSUB double ptr [EDX + 0x8]         ; 005cc863
    FXCH ST2                            ; 005cc866
    FSUB double ptr [EDX + 0x10]        ; 005cc868
    FXCH                                ; 005cc86b
    FSTP double ptr [ESP + 0x108]       ; 005cc86d
    FXCH                                ; 005cc874
    FSTP double ptr [ESP + 0x110]       ; 005cc876
    FSTP double ptr [ESP + 0x118]       ; 005cc87d
    MOVSD.REP ES:EDI,ESI                ; 005cc884
    FLD double ptr [ESP]                ; 005cc886
    FMUL double ptr [ESP + 0x150]       ; 005cc889
    FLD double ptr [ESP + 0x8]          ; 005cc890
    FMUL double ptr [ESP + 0x158]       ; 005cc894
    FLD double ptr [ESP + 0x10]         ; 005cc89b
    FMUL double ptr [ESP + 0x160]       ; 005cc89f
    MOV ECX,0x6                         ; 005cc8a6
    LEA EDI,[ESP + 0x168]               ; 005cc8ab
    LEA ESI,[ESP + 0x1b0]               ; 005cc8b2
    FXCH ST2                            ; 005cc8b9
    FSTP double ptr [ESP + 0x1b0]       ; 005cc8bb
    FSTP double ptr [ESP + 0x1b8]       ; 005cc8c2
    FSTP double ptr [ESP + 0x1c0]       ; 005cc8c9
    MOVSD.REP ES:EDI,ESI                ; 005cc8d0
    FLD double ptr [ESP + 0x168]        ; 005cc8d2
    FLD double ptr [ESP + 0x170]        ; 005cc8d9
    FLD double ptr [ESP + 0x178]        ; 005cc8e0
    MOV ECX,0x6                         ; 005cc8e7
    LEA EDI,[ESP + 0x180]               ; 005cc8ec
    LEA ESI,[ESP + 0x120]               ; 005cc8f3
    FXCH ST2                            ; 005cc8fa
    FADD double ptr [EDX]               ; 005cc8fc
    FXCH                                ; 005cc8fe
    FADD double ptr [EDX + 0x8]         ; 005cc900
    FXCH ST2                            ; 005cc903
    FADD double ptr [EDX + 0x10]        ; 005cc905
    FXCH                                ; 005cc908
    FSTP double ptr [ESP + 0x120]       ; 005cc90a
    FXCH                                ; 005cc911
    FSTP double ptr [ESP + 0x128]       ; 005cc913
    FSTP double ptr [ESP + 0x130]       ; 005cc91a
    MOVSD.REP ES:EDI,ESI                ; 005cc921
    MOV EAX,dword ptr [ESP + 0x180]     ; 005cc923
    MOV dword ptr [EBX],EAX             ; 005cc92a
    MOV EAX,dword ptr [ESP + 0x184]     ; 005cc92c
    MOV dword ptr [EBX + 0x4],EAX       ; 005cc933
    MOV EAX,dword ptr [ESP + 0x188]     ; 005cc936
    MOV dword ptr [EBX + 0x8],EAX       ; 005cc93d
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005cc940
    MOV dword ptr [EBX + 0xc],EAX       ; 005cc947
    MOV EAX,dword ptr [ESP + 0x190]     ; 005cc94a
    MOV dword ptr [EBX + 0x10],EAX      ; 005cc951
    MOV EAX,dword ptr [ESP + 0x194]     ; 005cc954
    MOV dword ptr [EBX + 0x14],EAX      ; 005cc95b
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc95e
    MOV EAX,dword ptr [EAX]             ; 005cc961
    MOV dword ptr [ESP + 0x90],EAX      ; 005cc963
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc96a
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cc96d
    MOV dword ptr [ESP + 0x94],EAX      ; 005cc970
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc977
    MOV EAX,dword ptr [EAX + 0x8]       ; 005cc97a
    MOV dword ptr [ESP + 0x98],EAX      ; 005cc97d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc984
    MOV EAX,dword ptr [EAX + 0xc]       ; 005cc987
    MOV dword ptr [ESP + 0x9c],EAX      ; 005cc98a
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc991
    MOV EAX,dword ptr [EAX + 0x10]      ; 005cc994
    MOV dword ptr [ESP + 0xa0],EAX      ; 005cc997
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cc99e
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cc9a1
    MOV dword ptr [ESP + 0xa4],EAX      ; 005cc9a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005cc9ab
    MOV EAX,dword ptr [EAX + 0x8]       ; 005cc9ae
    SHL EAX,0x3                         ; 005cc9b1
    MOV EBX,EAX                         ; 005cc9b4
    SHL EAX,0x3                         ; 005cc9b6
    SUB EAX,EBX                         ; 005cc9b9
    MOV EBX,dword ptr [ESP + 0x1f8]     ; 005cc9bb
    MOV ECX,0x6                         ; 005cc9c2
    ADD EBX,EAX                         ; 005cc9c7
    LEA EDI,[ESP + 0x198]               ; 005cc9c9
    LEA ESI,[ESP + 0xa8]                ; 005cc9d0
    FLD double ptr [EBX]                ; 005cc9d7
    FLD double ptr [EBX + 0x8]          ; 005cc9d9
    FLD double ptr [EBX + 0x10]         ; 005cc9dc
    FXCH ST2                            ; 005cc9df
    FSUB double ptr [EDX]               ; 005cc9e1
    FXCH                                ; 005cc9e3
    FSUB double ptr [EDX + 0x8]         ; 005cc9e5
    FXCH ST2                            ; 005cc9e8
    FSUB double ptr [EDX + 0x10]        ; 005cc9ea
    FXCH                                ; 005cc9ed
    FSTP double ptr [ESP + 0xa8]        ; 005cc9ef
    FXCH                                ; 005cc9f6
    FSTP double ptr [ESP + 0xb0]        ; 005cc9f8
    FSTP double ptr [ESP + 0xb8]        ; 005cc9ff
    MOVSD.REP ES:EDI,ESI                ; 005cca06
    FLD double ptr [ESP + 0x198]        ; 005cca08
    FMUL double ptr [ESP + 0x90]        ; 005cca0f
    FLD double ptr [ESP + 0x1a0]        ; 005cca16
    FMUL double ptr [ESP + 0x98]        ; 005cca1d
    FLD double ptr [ESP + 0x1a8]        ; 005cca24
    FMUL double ptr [ESP + 0xa0]        ; 005cca2b
    MOV ECX,0x6                         ; 005cca32
    LEA EDI,[ESP + 0x138]               ; 005cca37
    LEA ESI,[ESP + 0xd8]                ; 005cca3e
    FXCH ST2                            ; 005cca45
    FSTP double ptr [ESP + 0xd8]        ; 005cca47
    FSTP double ptr [ESP + 0xe0]        ; 005cca4e
    FSTP double ptr [ESP + 0xe8]        ; 005cca55
    MOVSD.REP ES:EDI,ESI                ; 005cca5c
    FLD double ptr [ESP + 0x138]        ; 005cca5e
    FLD double ptr [ESP + 0x140]        ; 005cca65
    FLD double ptr [ESP + 0x148]        ; 005cca6c
    MOV ECX,0x6                         ; 005cca73
    LEA EDI,[ESP + 0xc0]                ; 005cca78
    LEA ESI,[ESP + 0x1c8]               ; 005cca7f
    FXCH ST2                            ; 005cca86
    FADD double ptr [EDX]               ; 005cca88
    FXCH                                ; 005cca8a
    FADD double ptr [EDX + 0x8]         ; 005cca8c
    FXCH ST2                            ; 005cca8f
    FADD double ptr [EDX + 0x10]        ; 005cca91
    FXCH                                ; 005cca94
    FSTP double ptr [ESP + 0x1c8]       ; 005cca96
    FXCH                                ; 005cca9d
    FSTP double ptr [ESP + 0x1d0]       ; 005cca9f
    FSTP double ptr [ESP + 0x1d8]       ; 005ccaa6
    MOVSD.REP ES:EDI,ESI                ; 005ccaad
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005ccaaf
    MOV dword ptr [EBX],EAX             ; 005ccab6
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005ccab8
    MOV dword ptr [EBX + 0x4],EAX       ; 005ccabf
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005ccac2
    MOV dword ptr [EBX + 0x8],EAX       ; 005ccac9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005ccacc
    MOV dword ptr [EBX + 0xc],EAX       ; 005ccad3
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005ccad6
    MOV dword ptr [EBX + 0x10],EAX      ; 005ccadd
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005ccae0
    MOV dword ptr [EBX + 0x14],EAX      ; 005ccae7
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ccaea
    MOV EAX,dword ptr [EAX]             ; 005ccaed
    MOV dword ptr [ESP + 0x60],EAX      ; 005ccaef
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ccaf3
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ccaf6
    MOV dword ptr [ESP + 0x64],EAX      ; 005ccaf9
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ccafd
    MOV EAX,dword ptr [EAX + 0x8]       ; 005ccb00
    MOV dword ptr [ESP + 0x68],EAX      ; 005ccb03
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ccb07
    MOV EAX,dword ptr [EAX + 0xc]       ; 005ccb0a
    MOV dword ptr [ESP + 0x6c],EAX      ; 005ccb0d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ccb11
    MOV EAX,dword ptr [EAX + 0x10]      ; 005ccb14
    MOV dword ptr [ESP + 0x70],EAX      ; 005ccb17
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ccb1b
    MOV EAX,dword ptr [EAX + 0x14]      ; 005ccb1e
    MOV dword ptr [ESP + 0x74],EAX      ; 005ccb21
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ccb25
    MOV EAX,dword ptr [EAX + 0xc]       ; 005ccb28
    SHL EAX,0x3                         ; 005ccb2b
    MOV EBX,EAX                         ; 005ccb2e
    SHL EAX,0x3                         ; 005ccb30
    SUB EAX,EBX                         ; 005ccb33
    MOV EBX,dword ptr [ESP + 0x1f8]     ; 005ccb35
    MOV ECX,0x6                         ; 005ccb3c
    ADD EBX,EAX                         ; 005ccb41
    LEA EDI,[ESP + 0x1e0]               ; 005ccb43
    LEA ESI,[ESP + 0x18]                ; 005ccb4a
    FLD double ptr [EBX]                ; 005ccb4e
    FLD double ptr [EBX + 0x8]          ; 005ccb50
    FLD double ptr [EBX + 0x10]         ; 005ccb53
    FXCH ST2                            ; 005ccb56
    FSUB double ptr [EDX]               ; 005ccb58
    FXCH                                ; 005ccb5a
    FSUB double ptr [EDX + 0x8]         ; 005ccb5c
    FXCH ST2                            ; 005ccb5f
    FSUB double ptr [EDX + 0x10]        ; 005ccb61
    FXCH                                ; 005ccb64
    FSTP double ptr [ESP + 0x18]        ; 005ccb66
    FXCH                                ; 005ccb6a
    FSTP double ptr [ESP + 0x20]        ; 005ccb6c
    FSTP double ptr [ESP + 0x28]        ; 005ccb70
    MOVSD.REP ES:EDI,ESI                ; 005ccb74
    FLD double ptr [ESP + 0x1e0]        ; 005ccb76
    FMUL double ptr [ESP + 0x60]        ; 005ccb7d
    FLD double ptr [ESP + 0x1e8]        ; 005ccb81
    FMUL double ptr [ESP + 0x68]        ; 005ccb88
    FLD double ptr [ESP + 0x1f0]        ; 005ccb8c
    FMUL double ptr [ESP + 0x70]        ; 005ccb93
    MOV ECX,0x6                         ; 005ccb97
    LEA EDI,[ESP + 0xf0]                ; 005ccb9c
    LEA ESI,[ESP + 0x30]                ; 005ccba3
    FXCH ST2                            ; 005ccba7
    FSTP double ptr [ESP + 0x30]        ; 005ccba9
    FSTP double ptr [ESP + 0x38]        ; 005ccbad
    FSTP double ptr [ESP + 0x40]        ; 005ccbb1
    MOVSD.REP ES:EDI,ESI                ; 005ccbb5
    FLD double ptr [ESP + 0xf0]         ; 005ccbb7
    FLD double ptr [ESP + 0xf8]         ; 005ccbbe
    FLD double ptr [ESP + 0x100]        ; 005ccbc5
    MOV ECX,0x6                         ; 005ccbcc
    LEA EDI,[ESP + 0x48]                ; 005ccbd1
    LEA ESI,[ESP + 0x78]                ; 005ccbd5
    FXCH ST2                            ; 005ccbd9
    FADD double ptr [EDX]               ; 005ccbdb
    FXCH                                ; 005ccbdd
    FADD double ptr [EDX + 0x8]         ; 005ccbdf
    FXCH ST2                            ; 005ccbe2
    FADD double ptr [EDX + 0x10]        ; 005ccbe4
    FXCH                                ; 005ccbe7
    FSTP double ptr [ESP + 0x78]        ; 005ccbe9
    FXCH                                ; 005ccbed
    FSTP double ptr [ESP + 0x80]        ; 005ccbef
    FSTP double ptr [ESP + 0x88]        ; 005ccbf6
    MOVSD.REP ES:EDI,ESI                ; 005ccbfd
    MOV EAX,dword ptr [ESP + 0x48]      ; 005ccbff
    MOV dword ptr [EBX],EAX             ; 005ccc03
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005ccc05
    MOV dword ptr [EBX + 0x4],EAX       ; 005ccc09
    MOV EAX,dword ptr [ESP + 0x50]      ; 005ccc0c
    MOV dword ptr [EBX + 0x8],EAX       ; 005ccc10
    MOV EAX,dword ptr [ESP + 0x54]      ; 005ccc13
    MOV dword ptr [EBX + 0xc],EAX       ; 005ccc17
    MOV EAX,dword ptr [ESP + 0x58]      ; 005ccc1a
    MOV dword ptr [EBX + 0x10],EAX      ; 005ccc1e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005ccc21
    MOV dword ptr [EBX + 0x14],EAX      ; 005ccc25
    MOV ESP,EBP                         ; 005ccc28
    POP EBP                             ; 005ccc2a
    POP EDI                             ; 005ccc2b
    POP ESI                             ; 005ccc2c
    POP EBX                             ; 005ccc2d
    RET                                 ; 005ccc2e

