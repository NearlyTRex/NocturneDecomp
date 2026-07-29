; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   fov_or_radius
; int              Stack[0xc]:4   render_mode
; Local Variables:
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined        Stack[-0x150]:1  local_150
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
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
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507d0e
;
; Referenced Globals:
;   double DOUBLE_0057e24e = 0.00390625
;   double DOUBLE_0057e256 = 5.59510608945921E-315
;   double DOUBLE_0057e25e = 256
;   undefined4 DAT_005ae700
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b7b734
;   undefined4 DAT_01b7b738
;   undefined4 DAT_01b7b73c
;   undefined4 DAT_01b7b740
;   undefined4 DAT_01b7b744
;   undefined4 DAT_01b7b748
;   undefined4 DAT_01cc5118
;   undefined4 DAT_01cc511c
;   undefined4 DAT_01cc5120
;   undefined4 DAT_01cc5124
;   ... and 6 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
;   engine_drender.cpp_FUN_00460d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469ce0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
    PUSH ESI                            ; 00469ce1
    PUSH EDI                            ; 00469ce2
    PUSH EBP                            ; 00469ce3
    MOV EBP,ESP                         ; 00469ce4
    SUB ESP,0x19c                       ; 00469ce6
    AND ESP,0xfffffff8                  ; 00469cec
    MOV EBX,dword ptr [EBP + 0x14]      ; 00469cef
    CMP dword ptr [0x01b7b748],0x0      ; 00469cf2 | DAT_01b7b748
    JZ 0x00469d05                       ; 00469cf9
        ;   XREF to: 00469d05 (CONDITIONAL_JUMP)  ; LAB_00469d05
    CMP dword ptr [EBP + 0x1c],0x0      ; 00469cfb
    JNZ 0x0046a61f                      ; 00469cff
        ;   XREF to: 0046a61f (CONDITIONAL_JUMP)  ; LAB_0046a61f
    XOR ESI,ESI                         ; 00469d05
        ;   Label: LAB_00469d05
    MOV dword ptr [0x01b7b734],ESI      ; 00469d07 | DAT_01b7b734
    MOV dword ptr [0x01b7b738],ESI      ; 00469d0d | DAT_01b7b738
    MOV dword ptr [0x01b7b73c],ESI      ; 00469d13 | DAT_01b7b73c
    MOV dword ptr [0x01b7b740],ESI      ; 00469d19 | DAT_01b7b740
    MOV dword ptr [0x01b7b744],ESI      ; 00469d1f | DAT_01b7b744
    MOV ESI,dword ptr [0x005ae700]      ; 00469d25 | DAT_005ae700
    PUSH ESI                            ; 00469d2b | DAT_01b4d738
    LEA ESI,[ESP + 0x64]                ; 00469d2c
    LEA EDI,[ESP + 0x7c]                ; 00469d30
    CALL engine_drender.cpp_FUN_00460d10 ; 00469d34
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d10()
    LEA ESI,[ESP + 0x64]                ; 00469d39
    ADD ESP,0x4                         ; 00469d3d
    MOVSD ES:EDI,ESI                    ; 00469d40
    MOVSD ES:EDI,ESI                    ; 00469d41
    MOVSD ES:EDI,ESI                    ; 00469d42
    MOV EAX,dword ptr [ESP + 0x78]      ; 00469d43
    MOV dword ptr [ESP + 0x190],EAX     ; 00469d47
    FILD dword ptr [ESP + 0x190]        ; 00469d4e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00469d55
    FLD double ptr [0x0057e24e]         ; 00469d59 | DOUBLE_0057e24e
    FXCH                                ; 00469d5f
    FMUL ST1                            ; 00469d61
    MOV dword ptr [ESP + 0x190],EAX     ; 00469d63
    MOV EAX,dword ptr [ESP + 0x80]      ; 00469d6a
    FILD dword ptr [ESP + 0x190]        ; 00469d71
    MOV dword ptr [ESP + 0x190],EAX     ; 00469d78
    FMUL ST2                            ; 00469d7f
    FILD dword ptr [ESP + 0x190]        ; 00469d81
    FMULP ST3                           ; 00469d88
    FXCH                                ; 00469d8a
    FST float ptr [ESP + 0x54]          ; 00469d8c
    FXCH                                ; 00469d90
    FSTP float ptr [ESP + 0x58]         ; 00469d92
    FXCH                                ; 00469d96
    FSTP float ptr [ESP + 0x5c]         ; 00469d98
    FSUB float ptr [EBX + 0x10]         ; 00469d9c
    FDIV float ptr [EBX + 0x28]         ; 00469d9f
    FLD float ptr [ESP + 0x58]          ; 00469da2
    FXCH                                ; 00469da6
    CALL crt_math.c_round_FUN_00563a30  ; 00469da8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x78]        ; 00469dad
    FSUB float ptr [EBX + 0x14]         ; 00469db1
    FDIV float ptr [EBX + 0x2c]         ; 00469db4
    FLD float ptr [ESP + 0x5c]          ; 00469db7
    FXCH                                ; 00469dbb
    CALL crt_math.c_round_FUN_00563a30  ; 00469dbd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 00469dc2
    FSUB float ptr [EBX + 0x18]         ; 00469dc6
    FDIV float ptr [EBX + 0x30]         ; 00469dc9
    FLD float ptr [EBP + 0x18]          ; 00469dcc
    FMUL float ptr [0x0057e256]         ; 00469dcf | DOUBLE_0057e256
    CALL crt_math.c_round_FUN_00563a30  ; 00469dd5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x6c]        ; 00469dda
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00469dde
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469de2
    MOV dword ptr [ESP + 0x70],EAX      ; 00469de6
    MOV dword ptr [ESP + 0x74],EAX      ; 00469dea
    MOV EAX,[0x01cc5118]                ; 00469dee | DAT_01cc5118
    CALL crt_math.c_round_FUN_00563a30  ; 00469df3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x80]        ; 00469df8
    IMUL EDX                            ; 00469dff
    SHRD EAX,EDX,0x10                   ; 00469e01
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469e05
    MOV ECX,EAX                         ; 00469e09
    MOV EAX,[0x01cc5124]                ; 00469e0b | DAT_01cc5124
    IMUL EDX                            ; 00469e10
    SHRD EAX,EDX,0x10                   ; 00469e12
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469e16
    ADD ECX,EAX                         ; 00469e1a
    MOV EAX,[0x01cc5130]                ; 00469e1c | DAT_01cc5130
    IMUL EDX                            ; 00469e21
    SHRD EAX,EDX,0x10                   ; 00469e23
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469e27
    ADD ECX,EAX                         ; 00469e2b
    MOV EAX,[0x01cc511c]                ; 00469e2d | DAT_01cc511c
    MOV dword ptr [ESP + 0x18],ECX      ; 00469e32
    IMUL EDX                            ; 00469e36
    SHRD EAX,EDX,0x10                   ; 00469e38
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469e3c
    MOV ECX,EAX                         ; 00469e40
    MOV EAX,[0x01cc5128]                ; 00469e42 | DAT_01cc5128
    IMUL EDX                            ; 00469e47
    SHRD EAX,EDX,0x10                   ; 00469e49
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469e4d
    ADD ECX,EAX                         ; 00469e51
    MOV EAX,[0x01cc5134]                ; 00469e53 | DAT_01cc5134
    IMUL EDX                            ; 00469e58
    SHRD EAX,EDX,0x10                   ; 00469e5a
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469e5e
    ADD ECX,EAX                         ; 00469e62
    MOV EAX,[0x01cc5120]                ; 00469e64 | DAT_01cc5120
    MOV dword ptr [ESP + 0x1c],ECX      ; 00469e69
    IMUL EDX                            ; 00469e6d
    SHRD EAX,EDX,0x10                   ; 00469e6f
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469e73
    MOV ECX,EAX                         ; 00469e77
    MOV EAX,[0x01cc512c]                ; 00469e79 | DAT_01cc512c
    IMUL EDX                            ; 00469e7e
    SHRD EAX,EDX,0x10                   ; 00469e80
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00469e84
    ADD ECX,EAX                         ; 00469e88
    MOV EAX,[0x01cc5138]                ; 00469e8a | DAT_01cc5138
    IMUL EDX                            ; 00469e8f
    SHRD EAX,EDX,0x10                   ; 00469e91
    ADD ECX,EAX                         ; 00469e95
    MOV dword ptr [ESP + 0x20],ECX      ; 00469e97
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00469e9b
    NEG EDI                             ; 00469e9f
    MOV EAX,[0x01cc5118]                ; 00469ea1 | DAT_01cc5118
    MOV EDX,EDI                         ; 00469ea6
    IMUL EDX                            ; 00469ea8
    SHRD EAX,EDX,0x10                   ; 00469eaa
    MOV EDX,dword ptr [ESP + 0x70]      ; 00469eae
    MOV ECX,EAX                         ; 00469eb2
    MOV EAX,[0x01cc5124]                ; 00469eb4 | DAT_01cc5124
    IMUL EDX                            ; 00469eb9
    SHRD EAX,EDX,0x10                   ; 00469ebb
    MOV EDX,dword ptr [ESP + 0x74]      ; 00469ebf
    ADD ECX,EAX                         ; 00469ec3
    MOV EAX,[0x01cc5130]                ; 00469ec5 | DAT_01cc5130
    IMUL EDX                            ; 00469eca
    SHRD EAX,EDX,0x10                   ; 00469ecc
    MOV EDX,EDI                         ; 00469ed0
    ADD ECX,EAX                         ; 00469ed2
    MOV EAX,[0x01cc511c]                ; 00469ed4 | DAT_01cc511c
    MOV dword ptr [ESP + 0x24],ECX      ; 00469ed9
    IMUL EDX                            ; 00469edd
    SHRD EAX,EDX,0x10                   ; 00469edf
    MOV EDX,dword ptr [ESP + 0x70]      ; 00469ee3
    MOV ECX,EAX                         ; 00469ee7
    MOV EAX,[0x01cc5128]                ; 00469ee9 | DAT_01cc5128
    IMUL EDX                            ; 00469eee
    SHRD EAX,EDX,0x10                   ; 00469ef0
    MOV EDX,dword ptr [ESP + 0x74]      ; 00469ef4
    ADD ECX,EAX                         ; 00469ef8
    MOV EAX,[0x01cc5134]                ; 00469efa | DAT_01cc5134
    IMUL EDX                            ; 00469eff
    SHRD EAX,EDX,0x10                   ; 00469f01
    MOV EDX,EDI                         ; 00469f05
    ADD ECX,EAX                         ; 00469f07
    MOV EAX,[0x01cc5120]                ; 00469f09 | DAT_01cc5120
    MOV dword ptr [ESP + 0x28],ECX      ; 00469f0e
    IMUL EDX                            ; 00469f12
    SHRD EAX,EDX,0x10                   ; 00469f14
    MOV EDX,dword ptr [ESP + 0x70]      ; 00469f18
    MOV ECX,EAX                         ; 00469f1c
    MOV EAX,[0x01cc512c]                ; 00469f1e | DAT_01cc512c
    IMUL EDX                            ; 00469f23
    SHRD EAX,EDX,0x10                   ; 00469f25
    MOV EDX,dword ptr [ESP + 0x74]      ; 00469f29
    ADD ECX,EAX                         ; 00469f2d
    MOV EAX,[0x01cc5138]                ; 00469f2f | DAT_01cc5138
    IMUL EDX                            ; 00469f34
    SHRD EAX,EDX,0x10                   ; 00469f36
    ADD ECX,EAX                         ; 00469f3a
    MOV EAX,dword ptr [ESP + 0x70]      ; 00469f3c
    NEG EAX                             ; 00469f40
    MOV EDX,EDI                         ; 00469f42
    MOV dword ptr [ESP + 0x70],EAX      ; 00469f44
    MOV EAX,[0x01cc5118]                ; 00469f48 | DAT_01cc5118
    MOV dword ptr [ESP + 0x2c],ECX      ; 00469f4d
    IMUL EDX                            ; 00469f51
    SHRD EAX,EDX,0x10                   ; 00469f53
    MOV EDX,dword ptr [ESP + 0x70]      ; 00469f57
    MOV ECX,EAX                         ; 00469f5b
    MOV EAX,[0x01cc5124]                ; 00469f5d | DAT_01cc5124
    IMUL EDX                            ; 00469f62
    SHRD EAX,EDX,0x10                   ; 00469f64
    MOV EDX,dword ptr [ESP + 0x74]      ; 00469f68
    ADD ECX,EAX                         ; 00469f6c
    MOV EAX,[0x01cc5130]                ; 00469f6e | DAT_01cc5130
    IMUL EDX                            ; 00469f73
    SHRD EAX,EDX,0x10                   ; 00469f75
    ADD ECX,EAX                         ; 00469f79
    MOV dword ptr [ESP + 0x6c],EDI      ; 00469f7b
    MOV dword ptr [ESP + 0x30],ECX      ; 00469f7f
    MOV EAX,[0x01cc511c]                ; 00469f83 | DAT_01cc511c
    MOV EDX,EDI                         ; 00469f88
    IMUL EDX                            ; 00469f8a
    SHRD EAX,EDX,0x10                   ; 00469f8c
    MOV EDX,dword ptr [ESP + 0x70]      ; 00469f90
    MOV ECX,EAX                         ; 00469f94
    MOV EAX,[0x01cc5128]                ; 00469f96 | DAT_01cc5128
    IMUL EDX                            ; 00469f9b
    SHRD EAX,EDX,0x10                   ; 00469f9d
    MOV EDX,dword ptr [ESP + 0x74]      ; 00469fa1
    ADD ECX,EAX                         ; 00469fa5
    MOV EAX,[0x01cc5134]                ; 00469fa7 | DAT_01cc5134
    IMUL EDX                            ; 00469fac
    SHRD EAX,EDX,0x10                   ; 00469fae
    MOV EDX,EDI                         ; 00469fb2
    ADD ECX,EAX                         ; 00469fb4
    MOV EAX,[0x01cc5120]                ; 00469fb6 | DAT_01cc5120
    MOV dword ptr [ESP + 0x34],ECX      ; 00469fbb
    IMUL EDX                            ; 00469fbf
    SHRD EAX,EDX,0x10                   ; 00469fc1
    MOV EDX,dword ptr [ESP + 0x70]      ; 00469fc5
    MOV ECX,EAX                         ; 00469fc9
    MOV EAX,[0x01cc512c]                ; 00469fcb | DAT_01cc512c
    IMUL EDX                            ; 00469fd0
    SHRD EAX,EDX,0x10                   ; 00469fd2
    MOV EDX,dword ptr [ESP + 0x74]      ; 00469fd6
    ADD ECX,EAX                         ; 00469fda
    MOV EAX,[0x01cc5138]                ; 00469fdc | DAT_01cc5138
    IMUL EDX                            ; 00469fe1
    SHRD EAX,EDX,0x10                   ; 00469fe3
    MOV EDX,EDI                         ; 00469fe7
    ADD ECX,EAX                         ; 00469fe9
    MOV EAX,[0x01cc5118]                ; 00469feb | DAT_01cc5118
    NEG EDX                             ; 00469ff0
    MOV dword ptr [ESP + 0x38],ECX      ; 00469ff2
    MOV dword ptr [ESP + 0x6c],EDX      ; 00469ff6
    IMUL EDX                            ; 00469ffa
    SHRD EAX,EDX,0x10                   ; 00469ffc
    MOV EDX,dword ptr [ESP + 0x70]      ; 0046a000
    MOV ECX,EAX                         ; 0046a004
    MOV EAX,[0x01cc5124]                ; 0046a006 | DAT_01cc5124
    IMUL EDX                            ; 0046a00b
    SHRD EAX,EDX,0x10                   ; 0046a00d
    MOV EDX,dword ptr [ESP + 0x74]      ; 0046a011
    ADD ECX,EAX                         ; 0046a015
    MOV EAX,[0x01cc5130]                ; 0046a017 | DAT_01cc5130
    IMUL EDX                            ; 0046a01c
    SHRD EAX,EDX,0x10                   ; 0046a01e
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0046a022
    ADD ECX,EAX                         ; 0046a026
    MOV EAX,[0x01cc511c]                ; 0046a028 | DAT_01cc511c
    MOV dword ptr [ESP + 0x3c],ECX      ; 0046a02d
    IMUL EDX                            ; 0046a031
    SHRD EAX,EDX,0x10                   ; 0046a033
    MOV EDX,dword ptr [ESP + 0x70]      ; 0046a037
    MOV ECX,EAX                         ; 0046a03b
    MOV EAX,[0x01cc5128]                ; 0046a03d | DAT_01cc5128
    IMUL EDX                            ; 0046a042
    SHRD EAX,EDX,0x10                   ; 0046a044
    MOV EDX,dword ptr [ESP + 0x74]      ; 0046a048
    ADD ECX,EAX                         ; 0046a04c
    MOV EAX,[0x01cc5134]                ; 0046a04e | DAT_01cc5134
    IMUL EDX                            ; 0046a053
    SHRD EAX,EDX,0x10                   ; 0046a055
    ADD ECX,EAX                         ; 0046a059
    MOV dword ptr [ESP + 0x40],ECX      ; 0046a05b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0046a05f
    MOV EAX,[0x01cc5120]                ; 0046a063 | DAT_01cc5120
    IMUL EDX                            ; 0046a068
    SHRD EAX,EDX,0x10                   ; 0046a06a
    MOV EDX,dword ptr [ESP + 0x70]      ; 0046a06e
    MOV ECX,EAX                         ; 0046a072
    MOV EAX,[0x01cc512c]                ; 0046a074 | DAT_01cc512c
    IMUL EDX                            ; 0046a079
    SHRD EAX,EDX,0x10                   ; 0046a07b
    MOV EDX,dword ptr [ESP + 0x74]      ; 0046a07f
    ADD ECX,EAX                         ; 0046a083
    MOV EAX,[0x01cc5138]                ; 0046a085 | DAT_01cc5138
    IMUL EDX                            ; 0046a08a
    SHRD EAX,EDX,0x10                   ; 0046a08c
    ADD ECX,EAX                         ; 0046a090
    MOV dword ptr [ESP + 0x44],ECX      ; 0046a092
    XOR ECX,ECX                         ; 0046a096
    MOV dword ptr [ESP + 0x48],ECX      ; 0046a098
    MOV dword ptr [ESP + 0x4c],ECX      ; 0046a09c
    MOV dword ptr [ESP + 0x50],ECX      ; 0046a0a0
    FLD double ptr [0x0057e25e]         ; 0046a0a4 | DOUBLE_0057e25e
    FLD float ptr [EBX + 0x28]          ; 0046a0aa
    FMUL ST1                            ; 0046a0ad
    FLD float ptr [EBX + 0x2c]          ; 0046a0af
    FMUL ST2                            ; 0046a0b2
    MOV EAX,0x3e7                       ; 0046a0b4
    FLD float ptr [EBX + 0x30]          ; 0046a0b9
    FMULP ST3                           ; 0046a0bc
    MOV dword ptr [ESP + 0xa8],EAX      ; 0046a0be
    MOV dword ptr [ESP + 0xac],EAX      ; 0046a0c5
    MOV ESI,EAX                         ; 0046a0cc
    MOV dword ptr [ESP + 0xb0],EAX      ; 0046a0ce
    MOV ECX,0xfffffc19                  ; 0046a0d5
    XOR ESI,EAX                         ; 0046a0da
    MOV EDX,ECX                         ; 0046a0dc
    MOV EDI,ECX                         ; 0046a0de
    FXCH                                ; 0046a0e0
    FSTP double ptr [ESP + 0x10]        ; 0046a0e2
    FSTP double ptr [ESP + 0x8]         ; 0046a0e6
    FSTP double ptr [ESP]               ; 0046a0ea
    FILD dword ptr [ESP + ESI*0x1 + 0x18] ; 0046a0ed
        ;   Label: LAB_0046a0ed
    FDIV double ptr [ESP + 0x10]        ; 0046a0f1
    FILD dword ptr [ESP + ESI*0x1 + 0x1c] ; 0046a0f5
    FDIV double ptr [ESP + 0x8]         ; 0046a0f9
    FILD dword ptr [ESP + ESI*0x1 + 0x20] ; 0046a0fd
    FDIV double ptr [ESP]               ; 0046a101
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046a104
    MOV dword ptr [ESP + 0x190],EAX     ; 0046a108
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046a10f
    MOV dword ptr [ESP + 0x194],EAX     ; 0046a113
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046a11a
    MOV dword ptr [ESP + 0x198],EAX     ; 0046a121
    FILD dword ptr [ESP + 0x190]        ; 0046a128
    FILD dword ptr [ESP + 0x194]        ; 0046a12f
    FILD dword ptr [ESP + 0x198]        ; 0046a136
    FXCH ST2                            ; 0046a13d
    FADDP ST5,ST0                       ; 0046a13f
    FADDP ST3,ST0                       ; 0046a141
    FADDP                               ; 0046a143
    FXCH ST2                            ; 0046a145
    CALL crt_math.c_round_FUN_00563a30  ; 0046a147
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0046a14c
    CALL crt_math.c_round_FUN_00563a30  ; 0046a14e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 0046a153
    CALL crt_math.c_round_FUN_00563a30  ; 0046a155
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0046a15a
    FISTP dword ptr [ESP + 0x9c]        ; 0046a15c
    FXCH                                ; 0046a163
    FISTP dword ptr [ESP + 0xa0]        ; 0046a165
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0046a16c
    FISTP dword ptr [ESP + 0xa4]        ; 0046a173
    CMP EAX,dword ptr [ESP + 0xa8]      ; 0046a17a
    JGE 0x0046a18a                      ; 0046a181
        ;   XREF to: 0046a18a (CONDITIONAL_JUMP)  ; LAB_0046a18a
    MOV dword ptr [ESP + 0xa8],EAX      ; 0046a183
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0046a18a
        ;   Label: LAB_0046a18a
    CMP EAX,dword ptr [ESP + 0xac]      ; 0046a191
    JGE 0x0046a1a1                      ; 0046a198
        ;   XREF to: 0046a1a1 (CONDITIONAL_JUMP)  ; LAB_0046a1a1
    MOV dword ptr [ESP + 0xac],EAX      ; 0046a19a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0046a1a1
        ;   Label: LAB_0046a1a1
    CMP EAX,dword ptr [ESP + 0xb0]      ; 0046a1a8
    JGE 0x0046a1b8                      ; 0046a1af
        ;   XREF to: 0046a1b8 (CONDITIONAL_JUMP)  ; LAB_0046a1b8
    MOV dword ptr [ESP + 0xb0],EAX      ; 0046a1b1
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0046a1b8
        ;   Label: LAB_0046a1b8
    CMP ECX,EAX                         ; 0046a1bf
    JGE 0x0046a1c5                      ; 0046a1c1
        ;   XREF to: 0046a1c5 (CONDITIONAL_JUMP)  ; LAB_0046a1c5
    MOV ECX,EAX                         ; 0046a1c3
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0046a1c5
        ;   Label: LAB_0046a1c5
    CMP EDX,EAX                         ; 0046a1cc
    JGE 0x0046a1d2                      ; 0046a1ce
        ;   XREF to: 0046a1d2 (CONDITIONAL_JUMP)  ; LAB_0046a1d2
    MOV EDX,EAX                         ; 0046a1d0
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0046a1d2
        ;   Label: LAB_0046a1d2
    CMP EDI,EAX                         ; 0046a1d9
    JGE 0x0046a1df                      ; 0046a1db
        ;   XREF to: 0046a1df (CONDITIONAL_JUMP)  ; LAB_0046a1df
    MOV EDI,EAX                         ; 0046a1dd
    ADD ESI,0xc                         ; 0046a1df
        ;   Label: LAB_0046a1df
    CMP ESI,0x3c                        ; 0046a1e2
    JNZ 0x0046a0ed                      ; 0046a1e5
        ;   XREF to: 0046a0ed (CONDITIONAL_JUMP)  ; LAB_0046a0ed
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0046a1eb
    INC ECX                             ; 0046a1f2
    MOV dword ptr [EBX + 0x54],EAX      ; 0046a1f3
    INC EDX                             ; 0046a1f6
    MOV dword ptr [EBX + 0x60],ECX      ; 0046a1f7
    INC EDI                             ; 0046a1fa
    MOV dword ptr [EBX + 0x64],EDX      ; 0046a1fb
    MOV dword ptr [EBX + 0x68],EDI      ; 0046a1fe
    MOV EAX,dword ptr [ESP + 0xac]      ; 0046a201
    MOV dword ptr [EBX + 0x58],EAX      ; 0046a208
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0046a20b
    MOV EDX,dword ptr [EBX + 0x54]      ; 0046a212
    MOV dword ptr [EBX + 0x5c],EAX      ; 0046a215
    TEST EDX,EDX                        ; 0046a218
    JL 0x0046a62f                       ; 0046a21a
        ;   XREF to: 0046a62f (CONDITIONAL_JUMP)  ; LAB_0046a62f
    CMP dword ptr [EBX + 0x58],0x0      ; 0046a220
        ;   Label: LAB_0046a220
    JL 0x0046a63b                       ; 0046a224
        ;   XREF to: 0046a63b (CONDITIONAL_JUMP)  ; LAB_0046a63b
    CMP dword ptr [EBX + 0x5c],0x0      ; 0046a22a
        ;   Label: LAB_0046a22a
    JL 0x0046a647                       ; 0046a22e
        ;   XREF to: 0046a647 (CONDITIONAL_JUMP)  ; LAB_0046a647
    MOV EDI,dword ptr [EBX + 0x40]      ; 0046a234
        ;   Label: LAB_0046a234
    CMP EDI,dword ptr [EBX + 0x60]      ; 0046a237
    JG 0x0046a242                       ; 0046a23a
        ;   XREF to: 0046a242 (CONDITIONAL_JUMP)  ; LAB_0046a242
    LEA EAX,[EDI + -0x1]                ; 0046a23c
    MOV dword ptr [EBX + 0x60],EAX      ; 0046a23f
    MOV EDX,dword ptr [EBX + 0x44]      ; 0046a242
        ;   Label: LAB_0046a242
    CMP EDX,dword ptr [EBX + 0x64]      ; 0046a245
    JG 0x0046a250                       ; 0046a248
        ;   XREF to: 0046a250 (CONDITIONAL_JUMP)  ; LAB_0046a250
    LEA EAX,[EDX + -0x1]                ; 0046a24a
    MOV dword ptr [EBX + 0x64],EAX      ; 0046a24d
    MOV ECX,dword ptr [EBX + 0x48]      ; 0046a250
        ;   Label: LAB_0046a250
    CMP ECX,dword ptr [EBX + 0x68]      ; 0046a253
    JG 0x0046a25e                       ; 0046a256
        ;   XREF to: 0046a25e (CONDITIONAL_JUMP)  ; LAB_0046a25e
    LEA EAX,[ECX + -0x1]                ; 0046a258
    MOV dword ptr [EBX + 0x68],EAX      ; 0046a25b
    PUSH 0x1bc9950                      ; 0046a25e
        ;   Label: LAB_0046a25e
    MOV EDI,dword ptr [0x005ae700]      ; 0046a263 | DAT_005ae700
    XOR ESI,ESI                         ; 0046a269
    PUSH EDI                            ; 0046a26b | DAT_01b4d738
    MOV dword ptr [0x01e52ef8],ESI      ; 0046a26c | DAT_01e52ef8
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0 ; 0046a272
        ;   XREF to: 004609d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(CDemonRenderer * this_ptr, CVector3f * input_point)
    ADD ESP,0x8                         ; 0046a277
    PUSH 0xff                           ; 0046a27a
    PUSH 0xff                           ; 0046a27f
    PUSH 0xff                           ; 0046a284
    MOV EAX,[0x005ae700]                ; 0046a289 | DAT_005ae700
    PUSH EAX                            ; 0046a28e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20 ; 0046a28f
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EDX,dword ptr [EBX]             ; 0046a294
    ADD ESP,0x10                        ; 0046a296
    CMP EDX,0x4                         ; 0046a299
    JLE 0x0046a653                      ; 0046a29c
        ;   XREF to: 0046a653 (CONDITIONAL_JUMP)  ; LAB_0046a653
    MOV dword ptr [EBX],0x1             ; 0046a2a2
        ;   Label: LAB_0046a2a2
    MOV EAX,[0x01cc5130]                ; 0046a2a8 | DAT_01cc5130
        ;   Label: LAB_0046a2a8
    CDQ                                 ; 0046a2ad
    XOR EAX,EDX                         ; 0046a2ae
    SUB EAX,EDX                         ; 0046a2b0
    MOV ECX,EAX                         ; 0046a2b2
    MOV dword ptr [ESP + 0xb4],EAX      ; 0046a2b4
    MOV EAX,[0x01cc5134]                ; 0046a2bb | DAT_01cc5134
    CDQ                                 ; 0046a2c0
    XOR EAX,EDX                         ; 0046a2c1
    SUB EAX,EDX                         ; 0046a2c3
    MOV ESI,EAX                         ; 0046a2c5
    MOV EDI,EAX                         ; 0046a2c7
    MOV EAX,[0x01cc5138]                ; 0046a2c9 | DAT_01cc5138
    CDQ                                 ; 0046a2ce
    XOR EAX,EDX                         ; 0046a2cf
    SUB EAX,EDX                         ; 0046a2d1
    MOV EDX,EAX                         ; 0046a2d3
    CMP ECX,ESI                         ; 0046a2d5
    JL 0x0046a660                       ; 0046a2d7
        ;   XREF to: 0046a660 (CONDITIONAL_JUMP)  ; LAB_0046a660
    CMP ECX,EAX                         ; 0046a2dd
    JL 0x0046a660                       ; 0046a2df
        ;   XREF to: 0046a660 (CONDITIONAL_JUMP)  ; LAB_0046a660
    MOV EDI,dword ptr [ESP + 0x78]      ; 0046a2e5
    CMP EDI,dword ptr [EBX + 0x60]      ; 0046a2e9
    JG 0x0046a476                       ; 0046a2ec
        ;   XREF to: 0046a476 (CONDITIONAL_JUMP)  ; LAB_0046a476
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046a2f2
    DEC EAX                             ; 0046a2f9
    MOV dword ptr [ESP + 0x138],EAX     ; 0046a2fa
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046a301
    DEC EAX                             ; 0046a305
    MOV dword ptr [ESP + 0x13c],EAX     ; 0046a306
    MOV EAX,EDI                         ; 0046a30d
    NEG EAX                             ; 0046a30f
    ADD EAX,EDI                         ; 0046a311
    MOV dword ptr [ESP + 0x158],EAX     ; 0046a313
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046a31a
        ;   Label: LAB_0046a31a
    MOV ECX,dword ptr [EBX + 0x64]      ; 0046a31e
    MOV dword ptr [ESP + 0x18c],EAX     ; 0046a321
    CMP EAX,ECX                         ; 0046a328
    JG 0x0046a3b9                       ; 0046a32a
        ;   XREF to: 0046a3b9 (CONDITIONAL_JUMP)  ; LAB_0046a3b9
    MOV EAX,dword ptr [ESP + 0x158]     ; 0046a330
    MOV dword ptr [ESP + 0xb8],EAX      ; 0046a337
    MOV dword ptr [ESP + 0xbc],EAX      ; 0046a33e
    MOV ESI,dword ptr [ESP + 0x80]      ; 0046a345
        ;   Label: LAB_0046a345
    CMP ESI,dword ptr [EBX + 0x68]      ; 0046a34c
    JG 0x0046a374                       ; 0046a34f
        ;   XREF to: 0046a374 (CONDITIONAL_JUMP)  ; LAB_0046a374
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0046a351
        ;   Label: LAB_0046a351
    PUSH ECX                            ; 0046a358
    PUSH ESI                            ; 0046a359
    MOV EAX,dword ptr [ESP + 0x194]     ; 0046a35a
    PUSH EAX                            ; 0046a361
    PUSH EDI                            ; 0046a362
    PUSH EBX                            ; 0046a363
    INC ESI                             ; 0046a364
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a365
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0046a36a
    ADD ESP,0x14                        ; 0046a36d
    CMP ESI,EDX                         ; 0046a370
    JLE 0x0046a351                      ; 0046a372
        ;   XREF to: 0046a351 (CONDITIONAL_JUMP)  ; LAB_0046a351
    MOV ESI,dword ptr [ESP + 0x138]     ; 0046a374
        ;   Label: LAB_0046a374
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0046a37b
    JL 0x0046a3a3                       ; 0046a37e
        ;   XREF to: 0046a3a3 (CONDITIONAL_JUMP)  ; LAB_0046a3a3
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0046a380
        ;   Label: LAB_0046a380
    PUSH EAX                            ; 0046a387
    PUSH ESI                            ; 0046a388
    MOV EDX,dword ptr [ESP + 0x194]     ; 0046a389
    PUSH EDX                            ; 0046a390
    PUSH EDI                            ; 0046a391
    PUSH EBX                            ; 0046a392
    DEC ESI                             ; 0046a393
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a394
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0046a399
    ADD ESP,0x14                        ; 0046a39c
    CMP ESI,ECX                         ; 0046a39f
    JGE 0x0046a380                      ; 0046a3a1
        ;   XREF to: 0046a380 (CONDITIONAL_JUMP)  ; LAB_0046a380
    MOV ESI,dword ptr [ESP + 0x18c]     ; 0046a3a3
        ;   Label: LAB_0046a3a3
    INC ESI                             ; 0046a3aa
    MOV EDX,dword ptr [EBX + 0x64]      ; 0046a3ab
    MOV dword ptr [ESP + 0x18c],ESI     ; 0046a3ae
    CMP ESI,EDX                         ; 0046a3b5
    JLE 0x0046a345                      ; 0046a3b7
        ;   XREF to: 0046a345 (CONDITIONAL_JUMP)  ; LAB_0046a345
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0046a3b9
        ;   Label: LAB_0046a3b9
    MOV ECX,dword ptr [EBX + 0x58]      ; 0046a3c0
    MOV dword ptr [ESP + 0x188],EAX     ; 0046a3c3
    CMP EAX,ECX                         ; 0046a3ca
    JL 0x0046a45b                       ; 0046a3cc
        ;   XREF to: 0046a45b (CONDITIONAL_JUMP)  ; LAB_0046a45b
    MOV EAX,dword ptr [ESP + 0x158]     ; 0046a3d2
    MOV dword ptr [ESP + 0xc0],EAX      ; 0046a3d9
    MOV dword ptr [ESP + 0xc4],EAX      ; 0046a3e0
    MOV ESI,dword ptr [ESP + 0x80]      ; 0046a3e7
        ;   Label: LAB_0046a3e7
    CMP ESI,dword ptr [EBX + 0x68]      ; 0046a3ee
    JG 0x0046a416                       ; 0046a3f1
        ;   XREF to: 0046a416 (CONDITIONAL_JUMP)  ; LAB_0046a416
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0046a3f3
        ;   Label: LAB_0046a3f3
    PUSH EAX                            ; 0046a3fa
    PUSH ESI                            ; 0046a3fb
    MOV EDX,dword ptr [ESP + 0x190]     ; 0046a3fc
    PUSH EDX                            ; 0046a403
    PUSH EDI                            ; 0046a404
    PUSH EBX                            ; 0046a405
    INC ESI                             ; 0046a406
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a407
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0046a40c
    ADD ESP,0x14                        ; 0046a40f
    CMP ESI,ECX                         ; 0046a412
    JLE 0x0046a3f3                      ; 0046a414
        ;   XREF to: 0046a3f3 (CONDITIONAL_JUMP)  ; LAB_0046a3f3
    MOV ESI,dword ptr [ESP + 0x138]     ; 0046a416
        ;   Label: LAB_0046a416
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0046a41d
    JL 0x0046a445                       ; 0046a420
        ;   XREF to: 0046a445 (CONDITIONAL_JUMP)  ; LAB_0046a445
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0046a422
        ;   Label: LAB_0046a422
    PUSH ECX                            ; 0046a429
    PUSH ESI                            ; 0046a42a
    MOV EAX,dword ptr [ESP + 0x190]     ; 0046a42b
    PUSH EAX                            ; 0046a432
    PUSH EDI                            ; 0046a433
    PUSH EBX                            ; 0046a434
    DEC ESI                             ; 0046a435
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a436
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0046a43b
    ADD ESP,0x14                        ; 0046a43e
    CMP ESI,EDX                         ; 0046a441
    JGE 0x0046a422                      ; 0046a443
        ;   XREF to: 0046a422 (CONDITIONAL_JUMP)  ; LAB_0046a422
    MOV ESI,dword ptr [ESP + 0x188]     ; 0046a445
        ;   Label: LAB_0046a445
    DEC ESI                             ; 0046a44c
    MOV EDX,dword ptr [EBX + 0x58]      ; 0046a44d
    MOV dword ptr [ESP + 0x188],ESI     ; 0046a450
    CMP ESI,EDX                         ; 0046a457
    JGE 0x0046a3e7                      ; 0046a459
        ;   XREF to: 0046a3e7 (CONDITIONAL_JUMP)  ; LAB_0046a3e7
    MOV ECX,dword ptr [ESP + 0x158]     ; 0046a45b
        ;   Label: LAB_0046a45b
    INC EDI                             ; 0046a462
    INC ECX                             ; 0046a463
    MOV ESI,dword ptr [EBX + 0x60]      ; 0046a464
    MOV dword ptr [ESP + 0x158],ECX     ; 0046a467
    CMP EDI,ESI                         ; 0046a46e
    JLE 0x0046a31a                      ; 0046a470
        ;   XREF to: 0046a31a (CONDITIONAL_JUMP)  ; LAB_0046a31a
    MOV EDI,dword ptr [ESP + 0x78]      ; 0046a476
        ;   Label: LAB_0046a476
    MOV EAX,dword ptr [EBX + 0x54]      ; 0046a47a
    DEC EDI                             ; 0046a47d
    CMP EDI,EAX                         ; 0046a47e
    JL 0x0046a60e                       ; 0046a480
        ;   XREF to: 0046a60e (CONDITIONAL_JUMP)  ; LAB_0046a60e
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046a486
    DEC EAX                             ; 0046a48d
    MOV dword ptr [ESP + 0x140],EAX     ; 0046a48e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046a495
    DEC EAX                             ; 0046a499
    MOV dword ptr [ESP + 0x144],EAX     ; 0046a49a
    MOV EAX,EDI                         ; 0046a4a1
    MOV EDX,dword ptr [ESP + 0x78]      ; 0046a4a3
    NEG EAX                             ; 0046a4a7
    ADD EAX,EDX                         ; 0046a4a9
    MOV dword ptr [ESP + 0x15c],EAX     ; 0046a4ab
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046a4b2
        ;   Label: LAB_0046a4b2
    MOV ECX,dword ptr [EBX + 0x64]      ; 0046a4b6
    MOV dword ptr [ESP + 0x184],EAX     ; 0046a4b9
    CMP EAX,ECX                         ; 0046a4c0
    JG 0x0046a551                       ; 0046a4c2
        ;   XREF to: 0046a551 (CONDITIONAL_JUMP)  ; LAB_0046a551
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0046a4c8
    MOV dword ptr [ESP + 0xc8],EAX      ; 0046a4cf
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046a4d6
    MOV ESI,dword ptr [ESP + 0x80]      ; 0046a4dd
        ;   Label: LAB_0046a4dd
    CMP ESI,dword ptr [EBX + 0x68]      ; 0046a4e4
    JG 0x0046a50c                       ; 0046a4e7
        ;   XREF to: 0046a50c (CONDITIONAL_JUMP)  ; LAB_0046a50c
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0046a4e9
        ;   Label: LAB_0046a4e9
    PUSH ECX                            ; 0046a4f0
    PUSH ESI                            ; 0046a4f1
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0046a4f2
    PUSH EAX                            ; 0046a4f9
    PUSH EDI                            ; 0046a4fa
    PUSH EBX                            ; 0046a4fb
    INC ESI                             ; 0046a4fc
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a4fd
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0046a502
    ADD ESP,0x14                        ; 0046a505
    CMP ESI,EDX                         ; 0046a508
    JLE 0x0046a4e9                      ; 0046a50a
        ;   XREF to: 0046a4e9 (CONDITIONAL_JUMP)  ; LAB_0046a4e9
    MOV ESI,dword ptr [ESP + 0x140]     ; 0046a50c
        ;   Label: LAB_0046a50c
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0046a513
    JL 0x0046a53b                       ; 0046a516
        ;   XREF to: 0046a53b (CONDITIONAL_JUMP)  ; LAB_0046a53b
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0046a518
        ;   Label: LAB_0046a518
    PUSH EAX                            ; 0046a51f
    PUSH ESI                            ; 0046a520
    MOV EDX,dword ptr [ESP + 0x18c]     ; 0046a521
    PUSH EDX                            ; 0046a528
    PUSH EDI                            ; 0046a529
    PUSH EBX                            ; 0046a52a
    DEC ESI                             ; 0046a52b
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a52c
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0046a531
    ADD ESP,0x14                        ; 0046a534
    CMP ESI,ECX                         ; 0046a537
    JGE 0x0046a518                      ; 0046a539
        ;   XREF to: 0046a518 (CONDITIONAL_JUMP)  ; LAB_0046a518
    MOV ESI,dword ptr [ESP + 0x184]     ; 0046a53b
        ;   Label: LAB_0046a53b
    INC ESI                             ; 0046a542
    MOV EDX,dword ptr [EBX + 0x64]      ; 0046a543
    MOV dword ptr [ESP + 0x184],ESI     ; 0046a546
    CMP ESI,EDX                         ; 0046a54d
    JLE 0x0046a4dd                      ; 0046a54f
        ;   XREF to: 0046a4dd (CONDITIONAL_JUMP)  ; LAB_0046a4dd
    MOV EAX,dword ptr [ESP + 0x144]     ; 0046a551
        ;   Label: LAB_0046a551
    MOV ECX,dword ptr [EBX + 0x58]      ; 0046a558
    MOV dword ptr [ESP + 0x180],EAX     ; 0046a55b
    CMP EAX,ECX                         ; 0046a562
    JL 0x0046a5f3                       ; 0046a564
        ;   XREF to: 0046a5f3 (CONDITIONAL_JUMP)  ; LAB_0046a5f3
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0046a56a
    MOV dword ptr [ESP + 0xd0],EAX      ; 0046a571
    MOV dword ptr [ESP + 0xd4],EAX      ; 0046a578
    MOV ESI,dword ptr [ESP + 0x80]      ; 0046a57f
        ;   Label: LAB_0046a57f
    CMP ESI,dword ptr [EBX + 0x68]      ; 0046a586
    JG 0x0046a5ae                       ; 0046a589
        ;   XREF to: 0046a5ae (CONDITIONAL_JUMP)  ; LAB_0046a5ae
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0046a58b
        ;   Label: LAB_0046a58b
    PUSH EAX                            ; 0046a592
    PUSH ESI                            ; 0046a593
    MOV EDX,dword ptr [ESP + 0x188]     ; 0046a594
    PUSH EDX                            ; 0046a59b
    PUSH EDI                            ; 0046a59c
    PUSH EBX                            ; 0046a59d
    INC ESI                             ; 0046a59e
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a59f
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0046a5a4
    ADD ESP,0x14                        ; 0046a5a7
    CMP ESI,ECX                         ; 0046a5aa
    JLE 0x0046a58b                      ; 0046a5ac
        ;   XREF to: 0046a58b (CONDITIONAL_JUMP)  ; LAB_0046a58b
    MOV ESI,dword ptr [ESP + 0x140]     ; 0046a5ae
        ;   Label: LAB_0046a5ae
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0046a5b5
    JL 0x0046a5dd                       ; 0046a5b8
        ;   XREF to: 0046a5dd (CONDITIONAL_JUMP)  ; LAB_0046a5dd
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0046a5ba
        ;   Label: LAB_0046a5ba
    PUSH ECX                            ; 0046a5c1
    PUSH ESI                            ; 0046a5c2
    MOV EAX,dword ptr [ESP + 0x188]     ; 0046a5c3
    PUSH EAX                            ; 0046a5ca
    PUSH EDI                            ; 0046a5cb
    PUSH EBX                            ; 0046a5cc
    DEC ESI                             ; 0046a5cd
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a5ce
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0046a5d3
    ADD ESP,0x14                        ; 0046a5d6
    CMP ESI,EDX                         ; 0046a5d9
    JGE 0x0046a5ba                      ; 0046a5db
        ;   XREF to: 0046a5ba (CONDITIONAL_JUMP)  ; LAB_0046a5ba
    MOV ESI,dword ptr [ESP + 0x180]     ; 0046a5dd
        ;   Label: LAB_0046a5dd
    DEC ESI                             ; 0046a5e4
    MOV EDX,dword ptr [EBX + 0x58]      ; 0046a5e5
    MOV dword ptr [ESP + 0x180],ESI     ; 0046a5e8
    CMP ESI,EDX                         ; 0046a5ef
    JGE 0x0046a57f                      ; 0046a5f1
        ;   XREF to: 0046a57f (CONDITIONAL_JUMP)  ; LAB_0046a57f
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0046a5f3
        ;   Label: LAB_0046a5f3
    DEC EDI                             ; 0046a5fa
    INC ECX                             ; 0046a5fb
    MOV ESI,dword ptr [EBX + 0x54]      ; 0046a5fc
    MOV dword ptr [ESP + 0x15c],ECX     ; 0046a5ff
    CMP EDI,ESI                         ; 0046a606
    JGE 0x0046a4b2                      ; 0046a608
        ;   XREF to: 0046a4b2 (CONDITIONAL_JUMP)  ; LAB_0046a4b2
    MOV dword ptr [0x01b7b748],0x1      ; 0046a60e | DAT_01b7b748
        ;   Label: LAB_0046a60e
    MOV ESP,EBP                         ; 0046a618
    POP EBP                             ; 0046a61a
    POP EDI                             ; 0046a61b
    POP ESI                             ; 0046a61c
    POP EBX                             ; 0046a61d
    RET                                 ; 0046a61e
    PUSH EBX                            ; 0046a61f
        ;   Label: LAB_0046a61f
    CALL core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70 ; 0046a620
        ;   XREF to: 0046af70 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0046a625
    MOV ESP,EBP                         ; 0046a628
    POP EBP                             ; 0046a62a
    POP EDI                             ; 0046a62b
    POP ESI                             ; 0046a62c
    POP EBX                             ; 0046a62d
    RET                                 ; 0046a62e
    MOV dword ptr [EBX + 0x54],0x0      ; 0046a62f
        ;   Label: LAB_0046a62f
    JMP 0x0046a220                      ; 0046a636
        ;   XREF to: 0046a220 (UNCONDITIONAL_JUMP)  ; LAB_0046a220
    MOV dword ptr [EBX + 0x58],0x0      ; 0046a63b
        ;   Label: LAB_0046a63b
    JMP 0x0046a22a                      ; 0046a642
        ;   XREF to: 0046a22a (UNCONDITIONAL_JUMP)  ; LAB_0046a22a
    MOV dword ptr [EBX + 0x5c],0x0      ; 0046a647
        ;   Label: LAB_0046a647
    JMP 0x0046a234                      ; 0046a64e
        ;   XREF to: 0046a234 (UNCONDITIONAL_JUMP)  ; LAB_0046a234
    TEST EDX,EDX                        ; 0046a653
        ;   Label: LAB_0046a653
    JGE 0x0046a2a8                      ; 0046a655
        ;   XREF to: 0046a2a8 (CONDITIONAL_JUMP)  ; LAB_0046a2a8
    JMP 0x0046a2a2                      ; 0046a65b
        ;   XREF to: 0046a2a2 (UNCONDITIONAL_JUMP)  ; LAB_0046a2a2
    CMP EDI,dword ptr [ESP + 0xb4]      ; 0046a660
        ;   Label: LAB_0046a660
    JL 0x0046a9a9                       ; 0046a667
        ;   XREF to: 0046a9a9 (CONDITIONAL_JUMP)  ; LAB_0046a9a9
    CMP EDI,EDX                         ; 0046a66d
    JL 0x0046a9a9                       ; 0046a66f
        ;   XREF to: 0046a9a9 (CONDITIONAL_JUMP)  ; LAB_0046a9a9
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0046a675
    CMP EDI,dword ptr [EBX + 0x64]      ; 0046a679
    JG 0x0046a806                       ; 0046a67c
        ;   XREF to: 0046a806 (CONDITIONAL_JUMP)  ; LAB_0046a806
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046a682
    DEC EAX                             ; 0046a689
    MOV dword ptr [ESP + 0x128],EAX     ; 0046a68a
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046a691
    DEC EAX                             ; 0046a695
    MOV dword ptr [ESP + 0x12c],EAX     ; 0046a696
    MOV EAX,EDI                         ; 0046a69d
    NEG EAX                             ; 0046a69f
    ADD EAX,EDI                         ; 0046a6a1
    MOV dword ptr [ESP + 0x150],EAX     ; 0046a6a3
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046a6aa
        ;   Label: LAB_0046a6aa
    MOV ECX,dword ptr [EBX + 0x60]      ; 0046a6ae
    MOV dword ptr [ESP + 0x16c],EAX     ; 0046a6b1
    CMP EAX,ECX                         ; 0046a6b8
    JG 0x0046a749                       ; 0046a6ba
        ;   XREF to: 0046a749 (CONDITIONAL_JUMP)  ; LAB_0046a749
    MOV EAX,dword ptr [ESP + 0x150]     ; 0046a6c0
    MOV dword ptr [ESP + 0xd8],EAX      ; 0046a6c7
    MOV dword ptr [ESP + 0xdc],EAX      ; 0046a6ce
    MOV ESI,dword ptr [ESP + 0x80]      ; 0046a6d5
        ;   Label: LAB_0046a6d5
    CMP ESI,dword ptr [EBX + 0x68]      ; 0046a6dc
    JG 0x0046a704                       ; 0046a6df
        ;   XREF to: 0046a704 (CONDITIONAL_JUMP)  ; LAB_0046a704
    MOV ECX,dword ptr [ESP + 0xd8]      ; 0046a6e1
        ;   Label: LAB_0046a6e1
    PUSH ECX                            ; 0046a6e8
    PUSH ESI                            ; 0046a6e9
    PUSH EDI                            ; 0046a6ea
    MOV EAX,dword ptr [ESP + 0x178]     ; 0046a6eb
    PUSH EAX                            ; 0046a6f2
    PUSH EBX                            ; 0046a6f3
    INC ESI                             ; 0046a6f4
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a6f5
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0046a6fa
    ADD ESP,0x14                        ; 0046a6fd
    CMP ESI,EDX                         ; 0046a700
    JLE 0x0046a6e1                      ; 0046a702
        ;   XREF to: 0046a6e1 (CONDITIONAL_JUMP)  ; LAB_0046a6e1
    MOV ESI,dword ptr [ESP + 0x128]     ; 0046a704
        ;   Label: LAB_0046a704
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0046a70b
    JL 0x0046a733                       ; 0046a70e
        ;   XREF to: 0046a733 (CONDITIONAL_JUMP)  ; LAB_0046a733
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0046a710
        ;   Label: LAB_0046a710
    PUSH EAX                            ; 0046a717
    PUSH ESI                            ; 0046a718
    PUSH EDI                            ; 0046a719
    MOV EDX,dword ptr [ESP + 0x178]     ; 0046a71a
    PUSH EDX                            ; 0046a721
    PUSH EBX                            ; 0046a722
    DEC ESI                             ; 0046a723
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a724
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0046a729
    ADD ESP,0x14                        ; 0046a72c
    CMP ESI,ECX                         ; 0046a72f
    JGE 0x0046a710                      ; 0046a731
        ;   XREF to: 0046a710 (CONDITIONAL_JUMP)  ; LAB_0046a710
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0046a733
        ;   Label: LAB_0046a733
    INC ESI                             ; 0046a73a
    MOV EDX,dword ptr [EBX + 0x60]      ; 0046a73b
    MOV dword ptr [ESP + 0x16c],ESI     ; 0046a73e
    CMP ESI,EDX                         ; 0046a745
    JLE 0x0046a6d5                      ; 0046a747
        ;   XREF to: 0046a6d5 (CONDITIONAL_JUMP)  ; LAB_0046a6d5
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0046a749
        ;   Label: LAB_0046a749
    MOV ECX,dword ptr [EBX + 0x54]      ; 0046a750
    MOV dword ptr [ESP + 0x168],EAX     ; 0046a753
    CMP EAX,ECX                         ; 0046a75a
    JL 0x0046a7eb                       ; 0046a75c
        ;   XREF to: 0046a7eb (CONDITIONAL_JUMP)  ; LAB_0046a7eb
    MOV EAX,dword ptr [ESP + 0x150]     ; 0046a762
    MOV dword ptr [ESP + 0xe0],EAX      ; 0046a769
    MOV dword ptr [ESP + 0xe4],EAX      ; 0046a770
    MOV ESI,dword ptr [ESP + 0x80]      ; 0046a777
        ;   Label: LAB_0046a777
    CMP ESI,dword ptr [EBX + 0x68]      ; 0046a77e
    JG 0x0046a7a6                       ; 0046a781
        ;   XREF to: 0046a7a6 (CONDITIONAL_JUMP)  ; LAB_0046a7a6
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0046a783
        ;   Label: LAB_0046a783
    PUSH EAX                            ; 0046a78a
    PUSH ESI                            ; 0046a78b
    PUSH EDI                            ; 0046a78c
    MOV EDX,dword ptr [ESP + 0x174]     ; 0046a78d
    PUSH EDX                            ; 0046a794
    PUSH EBX                            ; 0046a795
    INC ESI                             ; 0046a796
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a797
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0046a79c
    ADD ESP,0x14                        ; 0046a79f
    CMP ESI,ECX                         ; 0046a7a2
    JLE 0x0046a783                      ; 0046a7a4
        ;   XREF to: 0046a783 (CONDITIONAL_JUMP)  ; LAB_0046a783
    MOV ESI,dword ptr [ESP + 0x128]     ; 0046a7a6
        ;   Label: LAB_0046a7a6
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0046a7ad
    JL 0x0046a7d5                       ; 0046a7b0
        ;   XREF to: 0046a7d5 (CONDITIONAL_JUMP)  ; LAB_0046a7d5
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0046a7b2
        ;   Label: LAB_0046a7b2
    PUSH ECX                            ; 0046a7b9
    PUSH ESI                            ; 0046a7ba
    PUSH EDI                            ; 0046a7bb
    MOV EAX,dword ptr [ESP + 0x174]     ; 0046a7bc
    PUSH EAX                            ; 0046a7c3
    PUSH EBX                            ; 0046a7c4
    DEC ESI                             ; 0046a7c5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a7c6
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0046a7cb
    ADD ESP,0x14                        ; 0046a7ce
    CMP ESI,EDX                         ; 0046a7d1
    JGE 0x0046a7b2                      ; 0046a7d3
        ;   XREF to: 0046a7b2 (CONDITIONAL_JUMP)  ; LAB_0046a7b2
    MOV ESI,dword ptr [ESP + 0x168]     ; 0046a7d5
        ;   Label: LAB_0046a7d5
    DEC ESI                             ; 0046a7dc
    MOV EDX,dword ptr [EBX + 0x54]      ; 0046a7dd
    MOV dword ptr [ESP + 0x168],ESI     ; 0046a7e0
    CMP ESI,EDX                         ; 0046a7e7
    JGE 0x0046a777                      ; 0046a7e9
        ;   XREF to: 0046a777 (CONDITIONAL_JUMP)  ; LAB_0046a777
    MOV ECX,dword ptr [ESP + 0x150]     ; 0046a7eb
        ;   Label: LAB_0046a7eb
    INC EDI                             ; 0046a7f2
    INC ECX                             ; 0046a7f3
    MOV ESI,dword ptr [EBX + 0x64]      ; 0046a7f4
    MOV dword ptr [ESP + 0x150],ECX     ; 0046a7f7
    CMP EDI,ESI                         ; 0046a7fe
    JLE 0x0046a6aa                      ; 0046a800
        ;   XREF to: 0046a6aa (CONDITIONAL_JUMP)  ; LAB_0046a6aa
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0046a806
        ;   Label: LAB_0046a806
    MOV EAX,dword ptr [EBX + 0x58]      ; 0046a80a
    DEC EDI                             ; 0046a80d
    CMP EDI,EAX                         ; 0046a80e
    JL 0x0046a60e                       ; 0046a810
        ;   XREF to: 0046a60e (CONDITIONAL_JUMP)  ; LAB_0046a60e
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046a816
    DEC EAX                             ; 0046a81d
    MOV dword ptr [ESP + 0x130],EAX     ; 0046a81e
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046a825
    DEC EAX                             ; 0046a829
    MOV dword ptr [ESP + 0x134],EAX     ; 0046a82a
    MOV EAX,EDI                         ; 0046a831
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0046a833
    NEG EAX                             ; 0046a837
    ADD EAX,EDX                         ; 0046a839
    MOV dword ptr [ESP + 0x154],EAX     ; 0046a83b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046a842
        ;   Label: LAB_0046a842
    MOV ECX,dword ptr [EBX + 0x60]      ; 0046a846
    MOV dword ptr [ESP + 0x164],EAX     ; 0046a849
    CMP EAX,ECX                         ; 0046a850
    JLE 0x0046a992                      ; 0046a852
        ;   XREF to: 0046a992 (CONDITIONAL_JUMP)  ; LAB_0046a992
    MOV EAX,dword ptr [ESP + 0x134]     ; 0046a858
        ;   Label: LAB_0046a858
    MOV ECX,dword ptr [EBX + 0x54]      ; 0046a85f
    MOV dword ptr [ESP + 0x160],EAX     ; 0046a862
    CMP EAX,ECX                         ; 0046a869
    JL 0x0046a8fa                       ; 0046a86b
        ;   XREF to: 0046a8fa (CONDITIONAL_JUMP)  ; LAB_0046a8fa
    MOV EAX,dword ptr [ESP + 0x154]     ; 0046a871
    MOV dword ptr [ESP + 0xf0],EAX      ; 0046a878
    MOV dword ptr [ESP + 0xf4],EAX      ; 0046a87f
    MOV ESI,dword ptr [ESP + 0x80]      ; 0046a886
        ;   Label: LAB_0046a886
    CMP ESI,dword ptr [EBX + 0x68]      ; 0046a88d
    JG 0x0046a8b5                       ; 0046a890
        ;   XREF to: 0046a8b5 (CONDITIONAL_JUMP)  ; LAB_0046a8b5
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0046a892
        ;   Label: LAB_0046a892
    PUSH EAX                            ; 0046a899
    PUSH ESI                            ; 0046a89a
    PUSH EDI                            ; 0046a89b
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0046a89c
    PUSH EDX                            ; 0046a8a3
    PUSH EBX                            ; 0046a8a4
    INC ESI                             ; 0046a8a5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a8a6
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0046a8ab
    ADD ESP,0x14                        ; 0046a8ae
    CMP ESI,ECX                         ; 0046a8b1
    JLE 0x0046a892                      ; 0046a8b3
        ;   XREF to: 0046a892 (CONDITIONAL_JUMP)  ; LAB_0046a892
    MOV ESI,dword ptr [ESP + 0x130]     ; 0046a8b5
        ;   Label: LAB_0046a8b5
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0046a8bc
    JL 0x0046a8e4                       ; 0046a8bf
        ;   XREF to: 0046a8e4 (CONDITIONAL_JUMP)  ; LAB_0046a8e4
    MOV ECX,dword ptr [ESP + 0xf4]      ; 0046a8c1
        ;   Label: LAB_0046a8c1
    PUSH ECX                            ; 0046a8c8
    PUSH ESI                            ; 0046a8c9
    PUSH EDI                            ; 0046a8ca
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0046a8cb
    PUSH EAX                            ; 0046a8d2
    PUSH EBX                            ; 0046a8d3
    DEC ESI                             ; 0046a8d4
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a8d5
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0046a8da
    ADD ESP,0x14                        ; 0046a8dd
    CMP ESI,EDX                         ; 0046a8e0
    JGE 0x0046a8c1                      ; 0046a8e2
        ;   XREF to: 0046a8c1 (CONDITIONAL_JUMP)  ; LAB_0046a8c1
    MOV ESI,dword ptr [ESP + 0x160]     ; 0046a8e4
        ;   Label: LAB_0046a8e4
    DEC ESI                             ; 0046a8eb
    MOV EDX,dword ptr [EBX + 0x54]      ; 0046a8ec
    MOV dword ptr [ESP + 0x160],ESI     ; 0046a8ef
    CMP ESI,EDX                         ; 0046a8f6
    JGE 0x0046a886                      ; 0046a8f8
        ;   XREF to: 0046a886 (CONDITIONAL_JUMP)  ; LAB_0046a886
    MOV ECX,dword ptr [ESP + 0x154]     ; 0046a8fa
        ;   Label: LAB_0046a8fa
    DEC EDI                             ; 0046a901
    INC ECX                             ; 0046a902
    MOV ESI,dword ptr [EBX + 0x58]      ; 0046a903
    MOV dword ptr [ESP + 0x154],ECX     ; 0046a906
    CMP EDI,ESI                         ; 0046a90d
    JL 0x0046a60e                       ; 0046a90f
        ;   XREF to: 0046a60e (CONDITIONAL_JUMP)  ; LAB_0046a60e
    JMP 0x0046a842                      ; 0046a915
        ;   XREF to: 0046a842 (UNCONDITIONAL_JUMP)  ; LAB_0046a842
    MOV ESI,dword ptr [ESP + 0x164]     ; 0046a91a
        ;   Label: LAB_0046a91a
    INC ESI                             ; 0046a921
    MOV EDX,dword ptr [EBX + 0x60]      ; 0046a922
    MOV dword ptr [ESP + 0x164],ESI     ; 0046a925
    CMP ESI,EDX                         ; 0046a92c
    JG 0x0046a858                       ; 0046a92e
        ;   XREF to: 0046a858 (CONDITIONAL_JUMP)  ; LAB_0046a858
    MOV ESI,dword ptr [ESP + 0x80]      ; 0046a934
        ;   Label: LAB_0046a934
    CMP ESI,dword ptr [EBX + 0x68]      ; 0046a93b
    JG 0x0046a963                       ; 0046a93e
        ;   XREF to: 0046a963 (CONDITIONAL_JUMP)  ; LAB_0046a963
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0046a940
        ;   Label: LAB_0046a940
    PUSH ECX                            ; 0046a947
    PUSH ESI                            ; 0046a948
    PUSH EDI                            ; 0046a949
    MOV EAX,dword ptr [ESP + 0x170]     ; 0046a94a
    PUSH EAX                            ; 0046a951
    PUSH EBX                            ; 0046a952
    INC ESI                             ; 0046a953
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a954
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0046a959
    ADD ESP,0x14                        ; 0046a95c
    CMP ESI,EDX                         ; 0046a95f
    JLE 0x0046a940                      ; 0046a961
        ;   XREF to: 0046a940 (CONDITIONAL_JUMP)  ; LAB_0046a940
    MOV ESI,dword ptr [ESP + 0x130]     ; 0046a963
        ;   Label: LAB_0046a963
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0046a96a
    JL 0x0046a91a                       ; 0046a96d
        ;   XREF to: 0046a91a (CONDITIONAL_JUMP)  ; LAB_0046a91a
        ;   Label: LAB_0046a96d
    MOV EAX,dword ptr [ESP + 0xec]      ; 0046a96f
    PUSH EAX                            ; 0046a976
    PUSH ESI                            ; 0046a977
    PUSH EDI                            ; 0046a978
    MOV EDX,dword ptr [ESP + 0x170]     ; 0046a979
    PUSH EDX                            ; 0046a980
    PUSH EBX                            ; 0046a981
    DEC ESI                             ; 0046a982
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046a983
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0046a988
    ADD ESP,0x14                        ; 0046a98b
    CMP ESI,ECX                         ; 0046a98e
    JMP 0x0046a96d                      ; 0046a990
        ;   XREF to: 0046a96d (UNCONDITIONAL_JUMP)  ; LAB_0046a96d
    MOV EAX,dword ptr [ESP + 0x154]     ; 0046a992
        ;   Label: LAB_0046a992
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046a999
    MOV dword ptr [ESP + 0xec],EAX      ; 0046a9a0
    JMP 0x0046a934                      ; 0046a9a7
        ;   XREF to: 0046a934 (UNCONDITIONAL_JUMP)  ; LAB_0046a934
    MOV EDI,dword ptr [ESP + 0x80]      ; 0046a9a9
        ;   Label: LAB_0046a9a9
    CMP EDI,dword ptr [EBX + 0x68]      ; 0046a9b0
    JG 0x0046ab34                       ; 0046a9b3
        ;   XREF to: 0046ab34 (CONDITIONAL_JUMP)  ; LAB_0046ab34
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046a9b9
    DEC EAX                             ; 0046a9bd
    MOV dword ptr [ESP + 0x118],EAX     ; 0046a9be
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046a9c5
    DEC EAX                             ; 0046a9c9
    MOV dword ptr [ESP + 0x11c],EAX     ; 0046a9ca
    MOV EAX,EDI                         ; 0046a9d1
    NEG EAX                             ; 0046a9d3
    ADD EAX,EDI                         ; 0046a9d5
    MOV dword ptr [ESP + 0x148],EAX     ; 0046a9d7
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046a9de
        ;   Label: LAB_0046a9de
    MOV EDX,dword ptr [EBX + 0x60]      ; 0046a9e2
    MOV dword ptr [ESP + 0x17c],EAX     ; 0046a9e5
    CMP EAX,EDX                         ; 0046a9ec
    JG 0x0046aa7a                       ; 0046a9ee
        ;   XREF to: 0046aa7a (CONDITIONAL_JUMP)  ; LAB_0046aa7a
    MOV EAX,dword ptr [ESP + 0x148]     ; 0046a9f4
    MOV dword ptr [ESP + 0xf8],EAX      ; 0046a9fb
    MOV dword ptr [ESP + 0xfc],EAX      ; 0046aa02
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0046aa09
        ;   Label: LAB_0046aa09
    CMP ESI,dword ptr [EBX + 0x64]      ; 0046aa0d
    JG 0x0046aa35                       ; 0046aa10
        ;   XREF to: 0046aa35 (CONDITIONAL_JUMP)  ; LAB_0046aa35
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0046aa12
        ;   Label: LAB_0046aa12
    PUSH EAX                            ; 0046aa19
    PUSH EDI                            ; 0046aa1a
    PUSH ESI                            ; 0046aa1b
    MOV EDX,dword ptr [ESP + 0x188]     ; 0046aa1c
    PUSH EDX                            ; 0046aa23
    PUSH EBX                            ; 0046aa24
    INC ESI                             ; 0046aa25
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046aa26
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 0046aa2b
    ADD ESP,0x14                        ; 0046aa2e
    CMP ESI,ECX                         ; 0046aa31
    JLE 0x0046aa12                      ; 0046aa33
        ;   XREF to: 0046aa12 (CONDITIONAL_JUMP)  ; LAB_0046aa12
    MOV ESI,dword ptr [ESP + 0x118]     ; 0046aa35
        ;   Label: LAB_0046aa35
    CMP ESI,dword ptr [EBX + 0x58]      ; 0046aa3c
    JL 0x0046aa64                       ; 0046aa3f
        ;   XREF to: 0046aa64 (CONDITIONAL_JUMP)  ; LAB_0046aa64
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0046aa41
        ;   Label: LAB_0046aa41
    PUSH ECX                            ; 0046aa48
    PUSH EDI                            ; 0046aa49
    PUSH ESI                            ; 0046aa4a
    MOV EAX,dword ptr [ESP + 0x188]     ; 0046aa4b
    PUSH EAX                            ; 0046aa52
    PUSH EBX                            ; 0046aa53
    DEC ESI                             ; 0046aa54
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046aa55
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 0046aa5a
    ADD ESP,0x14                        ; 0046aa5d
    CMP ESI,EDX                         ; 0046aa60
    JGE 0x0046aa41                      ; 0046aa62
        ;   XREF to: 0046aa41 (CONDITIONAL_JUMP)  ; LAB_0046aa41
    MOV ECX,dword ptr [ESP + 0x17c]     ; 0046aa64
        ;   Label: LAB_0046aa64
    INC ECX                             ; 0046aa6b
    MOV ESI,dword ptr [EBX + 0x60]      ; 0046aa6c
    MOV dword ptr [ESP + 0x17c],ECX     ; 0046aa6f
    CMP ECX,ESI                         ; 0046aa76
    JLE 0x0046aa09                      ; 0046aa78
        ;   XREF to: 0046aa09 (CONDITIONAL_JUMP)  ; LAB_0046aa09
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0046aa7a
        ;   Label: LAB_0046aa7a
    MOV EDX,dword ptr [EBX + 0x54]      ; 0046aa81
    MOV dword ptr [ESP + 0x178],EAX     ; 0046aa84
    CMP EAX,EDX                         ; 0046aa8b
    JL 0x0046ab19                       ; 0046aa8d
        ;   XREF to: 0046ab19 (CONDITIONAL_JUMP)  ; LAB_0046ab19
    MOV EAX,dword ptr [ESP + 0x148]     ; 0046aa93
    MOV dword ptr [ESP + 0x100],EAX     ; 0046aa9a
    MOV dword ptr [ESP + 0x104],EAX     ; 0046aaa1
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0046aaa8
        ;   Label: LAB_0046aaa8
    CMP ESI,dword ptr [EBX + 0x64]      ; 0046aaac
    JG 0x0046aad4                       ; 0046aaaf
        ;   XREF to: 0046aad4 (CONDITIONAL_JUMP)  ; LAB_0046aad4
    MOV ECX,dword ptr [ESP + 0x100]     ; 0046aab1
        ;   Label: LAB_0046aab1
    PUSH ECX                            ; 0046aab8
    PUSH EDI                            ; 0046aab9
    PUSH ESI                            ; 0046aaba
    MOV EAX,dword ptr [ESP + 0x184]     ; 0046aabb
    PUSH EAX                            ; 0046aac2
    PUSH EBX                            ; 0046aac3
    INC ESI                             ; 0046aac4
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046aac5
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 0046aaca
    ADD ESP,0x14                        ; 0046aacd
    CMP ESI,EDX                         ; 0046aad0
    JLE 0x0046aab1                      ; 0046aad2
        ;   XREF to: 0046aab1 (CONDITIONAL_JUMP)  ; LAB_0046aab1
    MOV ESI,dword ptr [ESP + 0x118]     ; 0046aad4
        ;   Label: LAB_0046aad4
    CMP ESI,dword ptr [EBX + 0x58]      ; 0046aadb
    JL 0x0046ab03                       ; 0046aade
        ;   XREF to: 0046ab03 (CONDITIONAL_JUMP)  ; LAB_0046ab03
    MOV EAX,dword ptr [ESP + 0x104]     ; 0046aae0
        ;   Label: LAB_0046aae0
    PUSH EAX                            ; 0046aae7
    PUSH EDI                            ; 0046aae8
    PUSH ESI                            ; 0046aae9
    MOV EDX,dword ptr [ESP + 0x184]     ; 0046aaea
    PUSH EDX                            ; 0046aaf1
    PUSH EBX                            ; 0046aaf2
    DEC ESI                             ; 0046aaf3
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046aaf4
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 0046aaf9
    ADD ESP,0x14                        ; 0046aafc
    CMP ESI,ECX                         ; 0046aaff
    JGE 0x0046aae0                      ; 0046ab01
        ;   XREF to: 0046aae0 (CONDITIONAL_JUMP)  ; LAB_0046aae0
    MOV ECX,dword ptr [ESP + 0x178]     ; 0046ab03
        ;   Label: LAB_0046ab03
    DEC ECX                             ; 0046ab0a
    MOV ESI,dword ptr [EBX + 0x54]      ; 0046ab0b
    MOV dword ptr [ESP + 0x178],ECX     ; 0046ab0e
    CMP ECX,ESI                         ; 0046ab15
    JGE 0x0046aaa8                      ; 0046ab17
        ;   XREF to: 0046aaa8 (CONDITIONAL_JUMP)  ; LAB_0046aaa8
    MOV EAX,dword ptr [ESP + 0x148]     ; 0046ab19
        ;   Label: LAB_0046ab19
    INC EDI                             ; 0046ab20
    INC EAX                             ; 0046ab21
    MOV EDX,dword ptr [EBX + 0x68]      ; 0046ab22
    MOV dword ptr [ESP + 0x148],EAX     ; 0046ab25
    CMP EDI,EDX                         ; 0046ab2c
    JLE 0x0046a9de                      ; 0046ab2e
        ;   XREF to: 0046a9de (CONDITIONAL_JUMP)  ; LAB_0046a9de
    MOV EDI,dword ptr [ESP + 0x80]      ; 0046ab34
        ;   Label: LAB_0046ab34
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0046ab3b
    DEC EDI                             ; 0046ab3e
    CMP EDI,ECX                         ; 0046ab3f
    JL 0x0046a60e                       ; 0046ab41
        ;   XREF to: 0046a60e (CONDITIONAL_JUMP)  ; LAB_0046a60e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046ab47
    DEC EAX                             ; 0046ab4b
    MOV dword ptr [ESP + 0x120],EAX     ; 0046ab4c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046ab53
    DEC EAX                             ; 0046ab57
    MOV dword ptr [ESP + 0x124],EAX     ; 0046ab58
    MOV EAX,EDI                         ; 0046ab5f
    MOV EDX,dword ptr [ESP + 0x80]      ; 0046ab61
    NEG EAX                             ; 0046ab68
    ADD EAX,EDX                         ; 0046ab6a
    MOV dword ptr [ESP + 0x14c],EAX     ; 0046ab6c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046ab73
        ;   Label: LAB_0046ab73
    MOV ECX,dword ptr [EBX + 0x60]      ; 0046ab77
    MOV dword ptr [ESP + 0x174],EAX     ; 0046ab7a
    CMP EAX,ECX                         ; 0046ab81
    JLE 0x0046acbd                      ; 0046ab83
        ;   XREF to: 0046acbd (CONDITIONAL_JUMP)  ; LAB_0046acbd
    MOV EAX,dword ptr [ESP + 0x124]     ; 0046ab89
        ;   Label: LAB_0046ab89
    MOV ECX,dword ptr [EBX + 0x54]      ; 0046ab90
    MOV dword ptr [ESP + 0x170],EAX     ; 0046ab93
    CMP EAX,ECX                         ; 0046ab9a
    JL 0x0046ac28                       ; 0046ab9c
        ;   XREF to: 0046ac28 (CONDITIONAL_JUMP)  ; LAB_0046ac28
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0046aba2
    MOV dword ptr [ESP + 0x110],EAX     ; 0046aba9
    MOV dword ptr [ESP + 0x114],EAX     ; 0046abb0
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0046abb7
        ;   Label: LAB_0046abb7
    CMP ESI,dword ptr [EBX + 0x64]      ; 0046abbb
    JG 0x0046abe3                       ; 0046abbe
        ;   XREF to: 0046abe3 (CONDITIONAL_JUMP)  ; LAB_0046abe3
    MOV EAX,dword ptr [ESP + 0x110]     ; 0046abc0
        ;   Label: LAB_0046abc0
    PUSH EAX                            ; 0046abc7
    PUSH EDI                            ; 0046abc8
    PUSH ESI                            ; 0046abc9
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0046abca
    PUSH EDX                            ; 0046abd1
    PUSH EBX                            ; 0046abd2
    INC ESI                             ; 0046abd3
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046abd4
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 0046abd9
    ADD ESP,0x14                        ; 0046abdc
    CMP ESI,ECX                         ; 0046abdf
    JLE 0x0046abc0                      ; 0046abe1
        ;   XREF to: 0046abc0 (CONDITIONAL_JUMP)  ; LAB_0046abc0
    MOV ESI,dword ptr [ESP + 0x120]     ; 0046abe3
        ;   Label: LAB_0046abe3
    CMP ESI,dword ptr [EBX + 0x58]      ; 0046abea
    JL 0x0046ac12                       ; 0046abed
        ;   XREF to: 0046ac12 (CONDITIONAL_JUMP)  ; LAB_0046ac12
    MOV ECX,dword ptr [ESP + 0x114]     ; 0046abef
        ;   Label: LAB_0046abef
    PUSH ECX                            ; 0046abf6
    PUSH EDI                            ; 0046abf7
    PUSH ESI                            ; 0046abf8
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0046abf9
    PUSH EAX                            ; 0046ac00
    PUSH EBX                            ; 0046ac01
    DEC ESI                             ; 0046ac02
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046ac03
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 0046ac08
    ADD ESP,0x14                        ; 0046ac0b
    CMP ESI,EDX                         ; 0046ac0e
    JGE 0x0046abef                      ; 0046ac10
        ;   XREF to: 0046abef (CONDITIONAL_JUMP)  ; LAB_0046abef
    MOV ESI,dword ptr [ESP + 0x170]     ; 0046ac12
        ;   Label: LAB_0046ac12
    DEC ESI                             ; 0046ac19
    MOV EDX,dword ptr [EBX + 0x54]      ; 0046ac1a
    MOV dword ptr [ESP + 0x170],ESI     ; 0046ac1d
    CMP ESI,EDX                         ; 0046ac24
    JGE 0x0046abb7                      ; 0046ac26
        ;   XREF to: 0046abb7 (CONDITIONAL_JUMP)  ; LAB_0046abb7
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0046ac28
        ;   Label: LAB_0046ac28
    DEC EDI                             ; 0046ac2f
    INC ESI                             ; 0046ac30
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0046ac31
    MOV dword ptr [ESP + 0x14c],ESI     ; 0046ac34
    CMP EDI,EAX                         ; 0046ac3b
    JL 0x0046a60e                       ; 0046ac3d
        ;   XREF to: 0046a60e (CONDITIONAL_JUMP)  ; LAB_0046a60e
    JMP 0x0046ab73                      ; 0046ac43
        ;   XREF to: 0046ab73 (UNCONDITIONAL_JUMP)  ; LAB_0046ab73
    MOV ESI,dword ptr [ESP + 0x174]     ; 0046ac48
        ;   Label: LAB_0046ac48
    INC ESI                             ; 0046ac4f
    MOV EDX,dword ptr [EBX + 0x60]      ; 0046ac50
    MOV dword ptr [ESP + 0x174],ESI     ; 0046ac53
    CMP ESI,EDX                         ; 0046ac5a
    JG 0x0046ab89                       ; 0046ac5c
        ;   XREF to: 0046ab89 (CONDITIONAL_JUMP)  ; LAB_0046ab89
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0046ac62
        ;   Label: LAB_0046ac62
    CMP ESI,dword ptr [EBX + 0x64]      ; 0046ac66
    JG 0x0046ac8e                       ; 0046ac69
        ;   XREF to: 0046ac8e (CONDITIONAL_JUMP)  ; LAB_0046ac8e
    MOV ECX,dword ptr [ESP + 0x108]     ; 0046ac6b
        ;   Label: LAB_0046ac6b
    PUSH ECX                            ; 0046ac72
    PUSH EDI                            ; 0046ac73
    PUSH ESI                            ; 0046ac74
    MOV EAX,dword ptr [ESP + 0x180]     ; 0046ac75
    PUSH EAX                            ; 0046ac7c
    PUSH EBX                            ; 0046ac7d
    INC ESI                             ; 0046ac7e
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046ac7f
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 0046ac84
    ADD ESP,0x14                        ; 0046ac87
    CMP ESI,EDX                         ; 0046ac8a
    JLE 0x0046ac6b                      ; 0046ac8c
        ;   XREF to: 0046ac6b (CONDITIONAL_JUMP)  ; LAB_0046ac6b
    MOV ESI,dword ptr [ESP + 0x120]     ; 0046ac8e
        ;   Label: LAB_0046ac8e
    CMP ESI,dword ptr [EBX + 0x58]      ; 0046ac95
    JL 0x0046ac48                       ; 0046ac98
        ;   XREF to: 0046ac48 (CONDITIONAL_JUMP)  ; LAB_0046ac48
        ;   Label: LAB_0046ac98
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0046ac9a
    PUSH EAX                            ; 0046aca1
    PUSH EDI                            ; 0046aca2
    PUSH ESI                            ; 0046aca3
    MOV EDX,dword ptr [ESP + 0x180]     ; 0046aca4
    PUSH EDX                            ; 0046acab
    PUSH EBX                            ; 0046acac
    DEC ESI                             ; 0046acad
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 ; 0046acae
        ;   XREF to: 00469390 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 0046acb3
    ADD ESP,0x14                        ; 0046acb6
    CMP ESI,ECX                         ; 0046acb9
    JMP 0x0046ac98                      ; 0046acbb
        ;   XREF to: 0046ac98 (UNCONDITIONAL_JUMP)  ; LAB_0046ac98
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0046acbd
        ;   Label: LAB_0046acbd
    MOV dword ptr [ESP + 0x108],EAX     ; 0046acc4
    MOV dword ptr [ESP + 0x10c],EAX     ; 0046accb
    JMP 0x0046ac62                      ; 0046acd2
        ;   XREF to: 0046ac62 (UNCONDITIONAL_JUMP)  ; LAB_0046ac62

