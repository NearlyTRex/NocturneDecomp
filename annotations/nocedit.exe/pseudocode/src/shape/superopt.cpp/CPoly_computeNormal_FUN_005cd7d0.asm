; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly *this_ptr)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x2f0]:8  local_2f0
; undefined8       Stack[-0x2e8]:8  local_2e8
; undefined8       Stack[-0x2e0]:8  local_2e0
; undefined8       Stack[-0x2d8]:8  local_2d8
; undefined8       Stack[-0x2d0]:8  local_2d0
; undefined8       Stack[-0x2c8]:8  local_2c8
; undefined8       Stack[-0x2c0]:8  local_2c0
; undefined8       Stack[-0x2b8]:8  local_2b8
; undefined8       Stack[-0x2b0]:8  local_2b0
; undefined8       Stack[-0x2a8]:8  local_2a8
; undefined8       Stack[-0x2a0]:8  local_2a0
; undefined8       Stack[-0x298]:8  local_298
; undefined8       Stack[-0x290]:8  local_290
; undefined8       Stack[-0x288]:8  local_288
; undefined8       Stack[-0x280]:8  local_280
; undefined8       Stack[-0x278]:8  local_278
; undefined8       Stack[-0x270]:8  local_270
; undefined8       Stack[-0x268]:8  local_268
; undefined8       Stack[-0x260]:8  local_260
; undefined8       Stack[-0x258]:8  local_258
; undefined8       Stack[-0x250]:8  local_250
; undefined8       Stack[-0x248]:8  local_248
; undefined8       Stack[-0x240]:8  local_240
; undefined8       Stack[-0x238]:8  local_238
; undefined8       Stack[-0x230]:8  local_230
; undefined8       Stack[-0x228]:8  local_228
; undefined8       Stack[-0x220]:8  local_220
; undefined8       Stack[-0x218]:8  local_218
; undefined8       Stack[-0x210]:8  local_210
; undefined8       Stack[-0x208]:8  local_208
; undefined8       Stack[-0x200]:8  local_200
; undefined8       Stack[-0x1f8]:8  local_1f8
; undefined8       Stack[-0x1f0]:8  local_1f0
; undefined8       Stack[-0x1e8]:8  local_1e8
; undefined8       Stack[-0x1e0]:8  local_1e0
; undefined8       Stack[-0x1d8]:8  local_1d8
; undefined8       Stack[-0x1d0]:8  local_1d0
; undefined8       Stack[-0x1c8]:8  local_1c8
; undefined8       Stack[-0x1c0]:8  local_1c0
; undefined8       Stack[-0x1b8]:8  local_1b8
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined8       Stack[-0x198]:8  local_198
; undefined8       Stack[-0x190]:8  local_190
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
; undefined8       Stack[-0x128]:8  local_128
; undefined8       Stack[-0x120]:8  local_120
; undefined8       Stack[-0x118]:8  local_118
; undefined8       Stack[-0x110]:8  local_110
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0 at 005d7add
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd7d0
        ;   Label: shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0
    PUSH ESI                            ; 005cd7d1
    PUSH EDI                            ; 005cd7d2
    PUSH EBP                            ; 005cd7d3
    MOV EBP,ESP                         ; 005cd7d4
    SUB ESP,0x2dc                       ; 005cd7d6
    AND ESP,0xfffffff8                  ; 005cd7dc
    MOV ECX,0x3ff00000                  ; 005cd7df
    MOV EAX,dword ptr [EBP + 0x14]      ; 005cd7e4
    XOR EDX,EDX                         ; 005cd7e7
    MOV dword ptr [ESP + 0x4],ECX       ; 005cd7e9
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cd7ed
    MOV ECX,dword ptr [EBP + 0x14]      ; 005cd7f0
    SHL EAX,0x3                         ; 005cd7f3
    MOV dword ptr [ESP],EDX             ; 005cd7f6
    MOV EDX,EAX                         ; 005cd7f9
    MOV ECX,dword ptr [ECX]             ; 005cd7fb
    SHL EAX,0x3                         ; 005cd7fd
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cd800
    SUB EAX,EDX                         ; 005cd803
    LEA EBX,[ECX + EAX*0x1]             ; 005cd805
    MOV EAX,dword ptr [EBP + 0x14]      ; 005cd808
    MOV EAX,dword ptr [EAX + 0x8]       ; 005cd80b
    SHL EAX,0x3                         ; 005cd80e
    MOV EDX,EAX                         ; 005cd811
    SHL EAX,0x3                         ; 005cd813
    SUB EAX,EDX                         ; 005cd816
    LEA EDX,[ECX + EAX*0x1]             ; 005cd818
    LEA EDI,[ESP + 0xa8]                ; 005cd81b
    FLD double ptr [EDX]                ; 005cd822
    FLD double ptr [EDX + 0x8]          ; 005cd824
    MOV EAX,dword ptr [EBP + 0x14]      ; 005cd827
    FLD double ptr [EDX + 0x10]         ; 005cd82a
    MOV EAX,dword ptr [EAX + 0xc]       ; 005cd82d
    FXCH ST2                            ; 005cd830
    FSUB double ptr [EBX]               ; 005cd832
    FXCH                                ; 005cd834
    FSUB double ptr [EBX + 0x8]         ; 005cd836
    SHL EAX,0x3                         ; 005cd839
    FXCH ST2                            ; 005cd83c
    FSUB double ptr [EBX + 0x10]        ; 005cd83e
    MOV ESI,EAX                         ; 005cd841
    SHL EAX,0x3                         ; 005cd843
    FXCH                                ; 005cd846
    FSTP double ptr [ESP + 0x198]       ; 005cd848
    SUB EAX,ESI                         ; 005cd84f
    FXCH                                ; 005cd851
    FSTP double ptr [ESP + 0x1a0]       ; 005cd853
    ADD ECX,EAX                         ; 005cd85a
    LEA ESI,[ESP + 0x198]               ; 005cd85c
    MOV dword ptr [ESP + 0x2d8],ECX     ; 005cd863
    MOV ECX,0x6                         ; 005cd86a
    FSTP double ptr [ESP + 0x1a8]       ; 005cd86f
    MOVSD.REP ES:EDI,ESI                ; 005cd876
    FLD double ptr [ESP + 0xb0]         ; 005cd878
    FMUL ST0                            ; 005cd87f
    FLD double ptr [ESP + 0xa8]         ; 005cd881
    FMUL ST0                            ; 005cd888
    FADDP                               ; 005cd88a
    FLD double ptr [ESP + 0xb8]         ; 005cd88c
    FMUL ST0                            ; 005cd893
    FADDP                               ; 005cd895
    FSQRT                               ; 005cd897
    FLD double ptr [ESP + 0xa8]         ; 005cd899
    FLD1                                ; 005cd8a0
    FDIVRP ST2,ST0                      ; 005cd8a2
    FMUL ST1                            ; 005cd8a4
    FLD double ptr [ESP + 0xb0]         ; 005cd8a6
    FMUL ST2                            ; 005cd8ad
    FLD double ptr [ESP + 0xb8]         ; 005cd8af
    FMULP ST3                           ; 005cd8b6
    MOV ECX,0x6                         ; 005cd8b8
    LEA EDI,[ESP + 0x168]               ; 005cd8bd
    LEA ESI,[ESP + 0x78]                ; 005cd8c4
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 005cd8c8
    FXCH                                ; 005cd8cf
    FSTP double ptr [ESP + 0x150]       ; 005cd8d1
    FSTP double ptr [ESP + 0x158]       ; 005cd8d8
    FSTP double ptr [ESP + 0x160]       ; 005cd8df
    FLD double ptr [EAX]                ; 005cd8e6
    FLD double ptr [EAX + 0x8]          ; 005cd8e8
    FLD double ptr [EAX + 0x10]         ; 005cd8eb
    FXCH ST2                            ; 005cd8ee
    FSUB double ptr [EDX]               ; 005cd8f0
    FXCH                                ; 005cd8f2
    FSUB double ptr [EDX + 0x8]         ; 005cd8f4
    FXCH ST2                            ; 005cd8f7
    FSUB double ptr [EDX + 0x10]        ; 005cd8f9
    FXCH                                ; 005cd8fc
    FSTP double ptr [ESP + 0x78]        ; 005cd8fe
    FXCH                                ; 005cd902
    FSTP double ptr [ESP + 0x80]        ; 005cd904
    FSTP double ptr [ESP + 0x88]        ; 005cd90b
    MOVSD.REP ES:EDI,ESI                ; 005cd912
    FLD double ptr [ESP + 0x170]        ; 005cd914
    FMUL ST0                            ; 005cd91b
    FLD double ptr [ESP + 0x168]        ; 005cd91d
    FMUL ST0                            ; 005cd924
    FADDP                               ; 005cd926
    FLD double ptr [ESP + 0x178]        ; 005cd928
    FMUL ST0                            ; 005cd92f
    FADDP                               ; 005cd931
    FSQRT                               ; 005cd933
    FLD double ptr [ESP + 0x168]        ; 005cd935
    FLD1                                ; 005cd93c
    FDIVRP ST2,ST0                      ; 005cd93e
    FMUL ST1                            ; 005cd940
    FLD double ptr [ESP + 0x170]        ; 005cd942
    FMUL ST2                            ; 005cd949
    FLD double ptr [ESP + 0x178]        ; 005cd94b
    FMULP ST3                           ; 005cd952
    FLD double ptr [ESP + 0x158]        ; 005cd954
    FXCH                                ; 005cd95b
    FSTP double ptr [ESP + 0x98]        ; 005cd95d
    FMUL double ptr [ESP + 0x98]        ; 005cd964
    FLD double ptr [ESP + 0x160]        ; 005cd96b
    FXCH ST3                            ; 005cd972
    FSTP double ptr [ESP + 0xa0]        ; 005cd974
    FXCH ST2                            ; 005cd97b
    FMUL double ptr [ESP + 0xa0]        ; 005cd97d
    FLD double ptr [ESP + 0x150]        ; 005cd984
    FXCH ST2                            ; 005cd98b
    FSTP double ptr [ESP + 0x90]        ; 005cd98d
    FXCH                                ; 005cd994
    FMUL double ptr [ESP + 0x90]        ; 005cd996
    FXCH                                ; 005cd99d
    FSTP double ptr [ESP + 0x28]        ; 005cd99f
    FADDP                               ; 005cd9a3
    FADD double ptr [ESP + 0x28]        ; 005cd9a5
    FLDZ                                ; 005cd9a9
    FXCH                                ; 005cd9ab
    FSTP double ptr [ESP + 0x50]        ; 005cd9ad
    FCOMP double ptr [ESP + 0x50]       ; 005cd9b1
    FNSTSW AX                           ; 005cd9b5
    SAHF                                ; 005cd9b7
    JBE 0x005cdef9                      ; 005cd9b8
        ;   XREF to: 005cdef9 (CONDITIONAL_JUMP)  ; LAB_005cdef9
    FLD double ptr [ESP + 0x50]         ; 005cd9be
    FCHS                                ; 005cd9c2
    FSTP double ptr [ESP + 0x18]        ; 005cd9c4
    FLD double ptr [ESP + 0x18]         ; 005cd9c8
        ;   Label: LAB_005cd9c8
    FCOMP double ptr [ESP]              ; 005cd9cc
    FNSTSW AX                           ; 005cd9cf
    SAHF                                ; 005cd9d1
    JNC 0x005cda99                      ; 005cd9d2
        ;   XREF to: 005cda99 (CONDITIONAL_JUMP)  ; LAB_005cda99
    FLD double ptr [ESP + 0x158]        ; 005cd9d8
    FMUL double ptr [ESP + 0xa0]        ; 005cd9df
    FLD double ptr [ESP + 0x160]        ; 005cd9e6
    FMUL double ptr [ESP + 0x90]        ; 005cd9ed
    FLD double ptr [ESP + 0x150]        ; 005cd9f4
    FMUL double ptr [ESP + 0x98]        ; 005cd9fb
    FLD double ptr [ESP + 0x160]        ; 005cda02
    FMUL double ptr [ESP + 0x98]        ; 005cda09
    FLD double ptr [ESP + 0x150]        ; 005cda10
    FMUL double ptr [ESP + 0xa0]        ; 005cda17
    MOV EAX,dword ptr [ESP + 0x18]      ; 005cda1e
    FLD double ptr [ESP + 0x158]        ; 005cda22
    FMUL double ptr [ESP + 0x90]        ; 005cda29
    MOV dword ptr [ESP],EAX             ; 005cda30
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005cda33
    MOV ECX,dword ptr [EBP + 0x14]      ; 005cda37
    MOV dword ptr [ESP + 0x4],EAX       ; 005cda3a
    FXCH ST2                            ; 005cda3e
    FSUBP ST5,ST0                       ; 005cda40
    FSUBP ST3,ST0                       ; 005cda42
    FSUBP                               ; 005cda44
    FXCH ST2                            ; 005cda46
    FSTP double ptr [ESP + 0x108]       ; 005cda48
    FSTP double ptr [ESP + 0x110]       ; 005cda4f
    MOV EAX,dword ptr [ESP + 0x108]     ; 005cda56
    FSTP double ptr [ESP + 0x118]       ; 005cda5d
    MOV dword ptr [ECX + 0x40],EAX      ; 005cda64
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005cda67
    MOV dword ptr [ECX + 0x44],EAX      ; 005cda6e
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cda71
    MOV dword ptr [ECX + 0x48],EAX      ; 005cda78
    MOV EAX,dword ptr [ESP + 0x114]     ; 005cda7b
    MOV dword ptr [ECX + 0x4c],EAX      ; 005cda82
    MOV EAX,dword ptr [ESP + 0x118]     ; 005cda85
    MOV dword ptr [ECX + 0x50],EAX      ; 005cda8c
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005cda8f
    MOV dword ptr [ECX + 0x54],EAX      ; 005cda96
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 005cda99
        ;   Label: LAB_005cda99
    MOV ECX,0x6                         ; 005cdaa0
    LEA EDI,[ESP + 0x180]               ; 005cdaa5
    LEA ESI,[ESP + 0x1e0]               ; 005cdaac
    FLD double ptr [EAX]                ; 005cdab3
    FLD double ptr [EAX + 0x8]          ; 005cdab5
    FLD double ptr [EAX + 0x10]         ; 005cdab8
    FXCH ST2                            ; 005cdabb
    FSUB double ptr [EDX]               ; 005cdabd
    FXCH                                ; 005cdabf
    FSUB double ptr [EDX + 0x8]         ; 005cdac1
    FXCH ST2                            ; 005cdac4
    FSUB double ptr [EDX + 0x10]        ; 005cdac6
    FXCH                                ; 005cdac9
    FSTP double ptr [ESP + 0x1e0]       ; 005cdacb
    FXCH                                ; 005cdad2
    FSTP double ptr [ESP + 0x1e8]       ; 005cdad4
    FSTP double ptr [ESP + 0x1f0]       ; 005cdadb
    MOVSD.REP ES:EDI,ESI                ; 005cdae2
    FLD double ptr [ESP + 0x188]        ; 005cdae4
    FMUL ST0                            ; 005cdaeb
    FLD double ptr [ESP + 0x180]        ; 005cdaed
    FMUL ST0                            ; 005cdaf4
    FADDP                               ; 005cdaf6
    FLD double ptr [ESP + 0x190]        ; 005cdaf8
    FMUL ST0                            ; 005cdaff
    FADDP                               ; 005cdb01
    FSQRT                               ; 005cdb03
    FLD double ptr [ESP + 0x180]        ; 005cdb05
    FLD1                                ; 005cdb0c
    FDIVRP ST2,ST0                      ; 005cdb0e
    FMUL ST1                            ; 005cdb10
    FLD double ptr [ESP + 0x188]        ; 005cdb12
    FMUL ST2                            ; 005cdb19
    FLD double ptr [ESP + 0x190]        ; 005cdb1b
    FMULP ST3                           ; 005cdb22
    MOV ECX,0x6                         ; 005cdb24
    LEA EDI,[ESP + 0xf0]                ; 005cdb29
    LEA ESI,[ESP + 0x120]               ; 005cdb30
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 005cdb37
    FXCH                                ; 005cdb3e
    FSTP double ptr [ESP + 0x1f8]       ; 005cdb40
    FSTP double ptr [ESP + 0x200]       ; 005cdb47
    FSTP double ptr [ESP + 0x208]       ; 005cdb4e
    FLD double ptr [EBX]                ; 005cdb55
    FLD double ptr [EBX + 0x8]          ; 005cdb57
    FLD double ptr [EBX + 0x10]         ; 005cdb5a
    FXCH ST2                            ; 005cdb5d
    FSUB double ptr [EAX]               ; 005cdb5f
    FXCH                                ; 005cdb61
    FSUB double ptr [EAX + 0x8]         ; 005cdb63
    FXCH ST2                            ; 005cdb66
    FSUB double ptr [EAX + 0x10]        ; 005cdb68
    FXCH                                ; 005cdb6b
    FSTP double ptr [ESP + 0x120]       ; 005cdb6d
    FXCH                                ; 005cdb74
    FSTP double ptr [ESP + 0x128]       ; 005cdb76
    FSTP double ptr [ESP + 0x130]       ; 005cdb7d
    MOVSD.REP ES:EDI,ESI                ; 005cdb84
    FLD double ptr [ESP + 0xf8]         ; 005cdb86
    FMUL ST0                            ; 005cdb8d
    FLD double ptr [ESP + 0xf0]         ; 005cdb8f
    FMUL ST0                            ; 005cdb96
    FADDP                               ; 005cdb98
    FLD double ptr [ESP + 0x100]        ; 005cdb9a
    FMUL ST0                            ; 005cdba1
    FADDP                               ; 005cdba3
    FSQRT                               ; 005cdba5
    FLD1                                ; 005cdba7
    FLD double ptr [ESP + 0xf0]         ; 005cdba9
    FXCH ST2                            ; 005cdbb0
    FSTP double ptr [ESP + 0x20]        ; 005cdbb2
    FDIV double ptr [ESP + 0x20]        ; 005cdbb6
    FXCH                                ; 005cdbba
    FMUL ST1                            ; 005cdbbc
    FLD double ptr [ESP + 0xf8]         ; 005cdbbe
    FMUL ST2                            ; 005cdbc5
    FLD double ptr [ESP + 0x100]        ; 005cdbc7
    FMULP ST3                           ; 005cdbce
    FLD double ptr [ESP + 0x200]        ; 005cdbd0
    FXCH                                ; 005cdbd7
    FSTP double ptr [ESP + 0x1d0]       ; 005cdbd9
    FMUL double ptr [ESP + 0x1d0]       ; 005cdbe0
    FLD double ptr [ESP + 0x208]        ; 005cdbe7
    FXCH ST3                            ; 005cdbee
    FSTP double ptr [ESP + 0x1d8]       ; 005cdbf0
    FXCH ST2                            ; 005cdbf7
    FMUL double ptr [ESP + 0x1d8]       ; 005cdbf9
    FLD double ptr [ESP + 0x1f8]        ; 005cdc00
    FXCH ST2                            ; 005cdc07
    FSTP double ptr [ESP + 0x1c8]       ; 005cdc09
    FXCH                                ; 005cdc10
    FMUL double ptr [ESP + 0x1c8]       ; 005cdc12
    FXCH                                ; 005cdc19
    FSTP double ptr [ESP + 0x30]        ; 005cdc1b
    FADDP                               ; 005cdc1f
    FADD double ptr [ESP + 0x30]        ; 005cdc21
    FLDZ                                ; 005cdc25
    FXCH                                ; 005cdc27
    FSTP double ptr [ESP + 0x10]        ; 005cdc29
    FCOMP double ptr [ESP + 0x10]       ; 005cdc2d
    FNSTSW AX                           ; 005cdc31
    SAHF                                ; 005cdc33
    JA 0x005cdf0e                       ; 005cdc34
        ;   XREF to: 005cdf0e (CONDITIONAL_JUMP)  ; LAB_005cdf0e
    MOV EAX,dword ptr [ESP + 0x10]      ; 005cdc3a
    MOV dword ptr [ESP + 0x8],EAX       ; 005cdc3e
    MOV EAX,dword ptr [ESP + 0x14]      ; 005cdc42
    MOV dword ptr [ESP + 0xc],EAX       ; 005cdc46
    FLD double ptr [ESP + 0x8]          ; 005cdc4a
        ;   Label: LAB_005cdc4a
    FCOMP double ptr [ESP]              ; 005cdc4e
    FNSTSW AX                           ; 005cdc51
    SAHF                                ; 005cdc53
    JNC 0x005cdd1b                      ; 005cdc54
        ;   XREF to: 005cdd1b (CONDITIONAL_JUMP)  ; LAB_005cdd1b
    FLD double ptr [ESP + 0x200]        ; 005cdc5a
    FMUL double ptr [ESP + 0x1d8]       ; 005cdc61
    FLD double ptr [ESP + 0x208]        ; 005cdc68
    FMUL double ptr [ESP + 0x1c8]       ; 005cdc6f
    FLD double ptr [ESP + 0x1f8]        ; 005cdc76
    FMUL double ptr [ESP + 0x1d0]       ; 005cdc7d
    FLD double ptr [ESP + 0x208]        ; 005cdc84
    FMUL double ptr [ESP + 0x1d0]       ; 005cdc8b
    FLD double ptr [ESP + 0x1f8]        ; 005cdc92
    FMUL double ptr [ESP + 0x1d8]       ; 005cdc99
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cdca0
    FLD double ptr [ESP + 0x200]        ; 005cdca4
    FMUL double ptr [ESP + 0x1c8]       ; 005cdcab
    MOV dword ptr [ESP],EAX             ; 005cdcb2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005cdcb5
    MOV ECX,dword ptr [EBP + 0x14]      ; 005cdcb9
    MOV dword ptr [ESP + 0x4],EAX       ; 005cdcbc
    FXCH ST2                            ; 005cdcc0
    FSUBP ST5,ST0                       ; 005cdcc2
    FSUBP ST3,ST0                       ; 005cdcc4
    FSUBP                               ; 005cdcc6
    FXCH ST2                            ; 005cdcc8
    FSTP double ptr [ESP + 0x240]       ; 005cdcca
    FSTP double ptr [ESP + 0x248]       ; 005cdcd1
    MOV EAX,dword ptr [ESP + 0x240]     ; 005cdcd8
    FSTP double ptr [ESP + 0x250]       ; 005cdcdf
    MOV dword ptr [ECX + 0x40],EAX      ; 005cdce6
    MOV EAX,dword ptr [ESP + 0x244]     ; 005cdce9
    MOV dword ptr [ECX + 0x44],EAX      ; 005cdcf0
    MOV EAX,dword ptr [ESP + 0x248]     ; 005cdcf3
    MOV dword ptr [ECX + 0x48],EAX      ; 005cdcfa
    MOV EAX,dword ptr [ESP + 0x24c]     ; 005cdcfd
    MOV dword ptr [ECX + 0x4c],EAX      ; 005cdd04
    MOV EAX,dword ptr [ESP + 0x250]     ; 005cdd07
    MOV dword ptr [ECX + 0x50],EAX      ; 005cdd0e
    MOV EAX,dword ptr [ESP + 0x254]     ; 005cdd11
    MOV dword ptr [ECX + 0x54],EAX      ; 005cdd18
    FLD double ptr [EBX]                ; 005cdd1b
        ;   Label: LAB_005cdd1b
    FLD double ptr [EBX + 0x8]          ; 005cdd1d
    FLD double ptr [EBX + 0x10]         ; 005cdd20
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 005cdd23
    MOV ECX,0x6                         ; 005cdd2a
    LEA EDI,[ESP + 0xc0]                ; 005cdd2f
    LEA ESI,[ESP + 0x1b0]               ; 005cdd36
    FXCH ST2                            ; 005cdd3d
    FSUB double ptr [EAX]               ; 005cdd3f
    FXCH                                ; 005cdd41
    FSUB double ptr [EAX + 0x8]         ; 005cdd43
    FXCH ST2                            ; 005cdd46
    FSUB double ptr [EAX + 0x10]        ; 005cdd48
    FXCH                                ; 005cdd4b
    FSTP double ptr [ESP + 0x1b0]       ; 005cdd4d
    FXCH                                ; 005cdd54
    FSTP double ptr [ESP + 0x1b8]       ; 005cdd56
    FSTP double ptr [ESP + 0x1c0]       ; 005cdd5d
    MOVSD.REP ES:EDI,ESI                ; 005cdd64
    FLD double ptr [ESP + 0xc8]         ; 005cdd66
    FMUL ST0                            ; 005cdd6d
    FLD double ptr [ESP + 0xc0]         ; 005cdd6f
    FMUL ST0                            ; 005cdd76
    FADDP                               ; 005cdd78
    FLD double ptr [ESP + 0xd0]         ; 005cdd7a
    FMUL ST0                            ; 005cdd81
    FADDP                               ; 005cdd83
    FSQRT                               ; 005cdd85
    FLD double ptr [ESP + 0xc0]         ; 005cdd87
    FLD1                                ; 005cdd8e
    FDIVRP ST2,ST0                      ; 005cdd90
    FMUL ST1                            ; 005cdd92
    FLD double ptr [ESP + 0xc8]         ; 005cdd94
    FMUL ST2                            ; 005cdd9b
    FLD double ptr [ESP + 0xd0]         ; 005cdd9d
    FMULP ST3                           ; 005cdda4
    MOV ECX,0x6                         ; 005cdda6
    LEA EDI,[ESP + 0x60]                ; 005cddab
    LEA ESI,[ESP + 0x210]               ; 005cddaf
    FXCH                                ; 005cddb6
    FSTP double ptr [ESP + 0xd8]        ; 005cddb8
    FSTP double ptr [ESP + 0xe0]        ; 005cddbf
    FSTP double ptr [ESP + 0xe8]        ; 005cddc6
    FLD double ptr [EDX]                ; 005cddcd
    FLD double ptr [EDX + 0x8]          ; 005cddcf
    FLD double ptr [EDX + 0x10]         ; 005cddd2
    FXCH ST2                            ; 005cddd5
    FSUB double ptr [EBX]               ; 005cddd7
    FXCH                                ; 005cddd9
    FSUB double ptr [EBX + 0x8]         ; 005cdddb
    FXCH ST2                            ; 005cddde
    FSUB double ptr [EBX + 0x10]        ; 005cdde0
    FXCH                                ; 005cdde3
    FSTP double ptr [ESP + 0x210]       ; 005cdde5
    FXCH                                ; 005cddec
    FSTP double ptr [ESP + 0x218]       ; 005cddee
    FSTP double ptr [ESP + 0x220]       ; 005cddf5
    MOVSD.REP ES:EDI,ESI                ; 005cddfc
    FLD double ptr [ESP + 0x68]         ; 005cddfe
    FMUL ST0                            ; 005cde02
    FLD double ptr [ESP + 0x60]         ; 005cde04
    FMUL ST0                            ; 005cde08
    FADDP                               ; 005cde0a
    FLD double ptr [ESP + 0x70]         ; 005cde0c
    FMUL ST0                            ; 005cde10
    FADDP                               ; 005cde12
    FSQRT                               ; 005cde14
    FLD1                                ; 005cde16
    FLD double ptr [ESP + 0x60]         ; 005cde18
    FXCH ST2                            ; 005cde1c
    FSTP double ptr [ESP + 0x38]        ; 005cde1e
    FDIV double ptr [ESP + 0x38]        ; 005cde22
    FXCH                                ; 005cde26
    FMUL ST1                            ; 005cde28
    FLD double ptr [ESP + 0x68]         ; 005cde2a
    FMUL ST2                            ; 005cde2e
    FLD double ptr [ESP + 0x70]         ; 005cde30
    FMULP ST3                           ; 005cde34
    FLD double ptr [ESP + 0xe0]         ; 005cde36
    FXCH                                ; 005cde3d
    FSTP double ptr [ESP + 0x230]       ; 005cde3f
    FMUL double ptr [ESP + 0x230]       ; 005cde46
    FLD double ptr [ESP + 0xe8]         ; 005cde4d
    FXCH ST3                            ; 005cde54
    FSTP double ptr [ESP + 0x238]       ; 005cde56
    FXCH ST2                            ; 005cde5d
    FMUL double ptr [ESP + 0x238]       ; 005cde5f
    FLD double ptr [ESP + 0xd8]         ; 005cde66
    FXCH ST2                            ; 005cde6d
    FSTP double ptr [ESP + 0x228]       ; 005cde6f
    FXCH                                ; 005cde76
    FMUL double ptr [ESP + 0x228]       ; 005cde78
    FXCH                                ; 005cde7f
    FSTP double ptr [ESP + 0x40]        ; 005cde81
    FADDP                               ; 005cde85
    FADD double ptr [ESP + 0x40]        ; 005cde87
    FLDZ                                ; 005cde8b
    FXCH                                ; 005cde8d
    FSTP double ptr [ESP + 0x58]        ; 005cde8f
    FCOMP double ptr [ESP + 0x58]       ; 005cde93
    FNSTSW AX                           ; 005cde97
    SAHF                                ; 005cde99
    JA 0x005cdf1d                       ; 005cde9a
        ;   XREF to: 005cdf1d (CONDITIONAL_JUMP)  ; LAB_005cdf1d
    MOV EAX,dword ptr [ESP + 0x58]      ; 005cdea0
    MOV dword ptr [ESP + 0x48],EAX      ; 005cdea4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005cdea8
    MOV dword ptr [ESP + 0x4c],EAX      ; 005cdeac
    FLD double ptr [ESP + 0x48]         ; 005cdeb0
        ;   Label: LAB_005cdeb0
    FCOMP double ptr [ESP]              ; 005cdeb4
    FNSTSW AX                           ; 005cdeb7
    SAHF                                ; 005cdeb9
    JC 0x005cdf29                       ; 005cdeba
        ;   XREF to: 005cdf29 (CONDITIONAL_JUMP)  ; LAB_005cdf29
    MOV EDX,dword ptr [EBP + 0x14]      ; 005cdebc
        ;   Label: LAB_005cdebc
    FLD double ptr [EDX + 0x48]         ; 005cdebf
    FMUL ST0                            ; 005cdec2
    FLD double ptr [EDX + 0x40]         ; 005cdec4
    FMUL ST0                            ; 005cdec7
    FADDP                               ; 005cdec9
    FLD double ptr [EDX + 0x50]         ; 005cdecb
    FMUL ST0                            ; 005cdece
    FADDP                               ; 005cded0
    FSQRT                               ; 005cded2
    FLD double ptr [EDX + 0x40]         ; 005cded4
    FLD1                                ; 005cded7
    FDIVRP ST2,ST0                      ; 005cded9
    FMUL ST1                            ; 005cdedb
    FLD double ptr [EDX + 0x48]         ; 005cdedd
    FMUL ST2                            ; 005cdee0
    FLD double ptr [EDX + 0x50]         ; 005cdee2
    FMULP ST3                           ; 005cdee5
    FXCH                                ; 005cdee7
    FSTP double ptr [EDX + 0x40]        ; 005cdee9
    FSTP double ptr [EDX + 0x48]        ; 005cdeec
    FSTP double ptr [EDX + 0x50]        ; 005cdeef
    MOV ESP,EBP                         ; 005cdef2
    POP EBP                             ; 005cdef4
    POP EDI                             ; 005cdef5
    POP ESI                             ; 005cdef6
    POP EBX                             ; 005cdef7
    RET                                 ; 005cdef8
    MOV EAX,dword ptr [ESP + 0x50]      ; 005cdef9
        ;   Label: LAB_005cdef9
    MOV dword ptr [ESP + 0x18],EAX      ; 005cdefd
    MOV EAX,dword ptr [ESP + 0x54]      ; 005cdf01
    MOV dword ptr [ESP + 0x1c],EAX      ; 005cdf05
    JMP 0x005cd9c8                      ; 005cdf09
        ;   XREF to: 005cd9c8 (UNCONDITIONAL_JUMP)  ; LAB_005cd9c8
    FLD double ptr [ESP + 0x10]         ; 005cdf0e
        ;   Label: LAB_005cdf0e
    FCHS                                ; 005cdf12
    FSTP double ptr [ESP + 0x8]         ; 005cdf14
    JMP 0x005cdc4a                      ; 005cdf18
        ;   XREF to: 005cdc4a (UNCONDITIONAL_JUMP)  ; LAB_005cdc4a
    FLD double ptr [ESP + 0x58]         ; 005cdf1d
        ;   Label: LAB_005cdf1d
    FCHS                                ; 005cdf21
    FSTP double ptr [ESP + 0x48]        ; 005cdf23
    JMP 0x005cdeb0                      ; 005cdf27
        ;   XREF to: 005cdeb0 (UNCONDITIONAL_JUMP)  ; LAB_005cdeb0
    FLD double ptr [ESP + 0xe0]         ; 005cdf29
        ;   Label: LAB_005cdf29
    FMUL double ptr [ESP + 0x238]       ; 005cdf30
    FLD double ptr [ESP + 0xe8]         ; 005cdf37
    FMUL double ptr [ESP + 0x228]       ; 005cdf3e
    FLD double ptr [ESP + 0xd8]         ; 005cdf45
    FMUL double ptr [ESP + 0x230]       ; 005cdf4c
    FLD double ptr [ESP + 0xe8]         ; 005cdf53
    FMUL double ptr [ESP + 0x230]       ; 005cdf5a
    FLD double ptr [ESP + 0xd8]         ; 005cdf61
    FMUL double ptr [ESP + 0x238]       ; 005cdf68
    FLD double ptr [ESP + 0xe0]         ; 005cdf6f
    FMUL double ptr [ESP + 0x228]       ; 005cdf76
    MOV EDX,dword ptr [EBP + 0x14]      ; 005cdf7d
    FXCH ST2                            ; 005cdf80
    FSUBP ST5,ST0                       ; 005cdf82
    FSUBP ST3,ST0                       ; 005cdf84
    FSUBP                               ; 005cdf86
    FXCH ST2                            ; 005cdf88
    FSTP double ptr [ESP + 0x138]       ; 005cdf8a
    FSTP double ptr [ESP + 0x140]       ; 005cdf91
    MOV EAX,dword ptr [ESP + 0x138]     ; 005cdf98
    FSTP double ptr [ESP + 0x148]       ; 005cdf9f
    MOV dword ptr [EDX + 0x40],EAX      ; 005cdfa6
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005cdfa9
    MOV dword ptr [EDX + 0x44],EAX      ; 005cdfb0
    MOV EAX,dword ptr [ESP + 0x140]     ; 005cdfb3
    MOV dword ptr [EDX + 0x48],EAX      ; 005cdfba
    MOV EAX,dword ptr [ESP + 0x144]     ; 005cdfbd
    MOV dword ptr [EDX + 0x4c],EAX      ; 005cdfc4
    MOV EAX,dword ptr [ESP + 0x148]     ; 005cdfc7
    MOV dword ptr [EDX + 0x50],EAX      ; 005cdfce
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005cdfd1
    MOV dword ptr [EDX + 0x54],EAX      ; 005cdfd8
    JMP 0x005cdebc                      ; 005cdfdb
        ;   XREF to: 005cdebc (UNCONDITIONAL_JUMP)  ; LAB_005cdebc

