; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_FUN_0043d9b0(CCloth *this_ptr,SClothVertex *vertex)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; SClothVertex *   Stack[0x8]:4   vertex
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
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
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
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
; undefined        Stack[-0xc0]:1  local_c0
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
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
;   core_cloth.cpp_FUN_0043e2a0 at 0043f0b7
;
; Referenced Globals:
;   undefined4 DAT_005b9120
;   undefined4 DAT_01d1a0a4
;   undefined4 DAT_01d1a0a8
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d9b0
        ;   Label: core_cloth.cpp_FUN_0043d9b0
    PUSH ESI                            ; 0043d9b1
    PUSH EDI                            ; 0043d9b2
    PUSH EBP                            ; 0043d9b3
    MOV EBP,ESP                         ; 0043d9b4
    SUB ESP,0x1d0                       ; 0043d9b6
    AND ESP,0xfffffff8                  ; 0043d9bc
    MOV EBX,dword ptr [EBP + 0x18]      ; 0043d9bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d9c2
    FLD float ptr [EBX + 0x4]           ; 0043d9c5
    FCOMP float ptr [EAX + 0x3ab04]     ; 0043d9c8
    FNSTSW AX                           ; 0043d9ce
    SAHF                                ; 0043d9d0
    JC 0x0043e211                       ; 0043d9d1
        ;   XREF to: 0043e211 (CONDITIONAL_JUMP)  ; LAB_0043e211
    XOR EDX,EDX                         ; 0043d9d7
        ;   Label: LAB_0043d9d7
    MOV ECX,dword ptr [EBX + 0x30]      ; 0043d9d9
    MOV dword ptr [ESP + 0x1a4],EDX     ; 0043d9dc
    TEST ECX,ECX                        ; 0043d9e3
    JLE 0x0043ddec                      ; 0043d9e5
        ;   XREF to: 0043ddec (CONDITIONAL_JUMP)  ; LAB_0043ddec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d9eb
    MOV ECX,dword ptr [EBP + 0x14]      ; 0043d9ee
    ADD EAX,0x37b28                     ; 0043d9f1
    LEA EDX,[EBX + 0x24]                ; 0043d9f6
    MOV dword ptr [ESP + 0x188],EAX     ; 0043d9f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043da00
    ADD ECX,0x3ab00                     ; 0043da03
    ADD EAX,0x398                       ; 0043da09
    MOV dword ptr [ESP + 0x1ac],EBX     ; 0043da0e
    MOV dword ptr [ESP + 0x19c],EAX     ; 0043da15
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0043da1c
        ;   Label: LAB_0043da1c
    IMUL EAX,dword ptr [EAX + 0x34],0x11c ; 0043da23
    FLD float ptr [EBX]                 ; 0043da2a
    FLD float ptr [EBX + 0x4]           ; 0043da2c
    MOV EDI,dword ptr [ESP + 0x19c]     ; 0043da2f
    FLD float ptr [EBX + 0x8]           ; 0043da36
    ADD EAX,EDI                         ; 0043da39
    LEA ESI,[ESP + 0x138]               ; 0043da3b
    LEA EDI,[ESP + 0x60]                ; 0043da42
    FXCH ST2                            ; 0043da46
    FSUB float ptr [EAX]                ; 0043da48
    FXCH                                ; 0043da4a
    FSUB float ptr [EAX + 0x4]          ; 0043da4c
    FXCH ST2                            ; 0043da4f
    FSUB float ptr [EAX + 0x8]          ; 0043da51
    FXCH                                ; 0043da54
    FSTP float ptr [ESP + 0x138]        ; 0043da56
    FXCH                                ; 0043da5d
    FSTP float ptr [ESP + 0x13c]        ; 0043da5f
    FSTP float ptr [ESP + 0x140]        ; 0043da66
    MOVSD ES:EDI,ESI                    ; 0043da6d
    MOVSD ES:EDI,ESI                    ; 0043da6e
    MOVSD ES:EDI,ESI                    ; 0043da6f
    LEA EAX,[ESP + 0x48]                ; 0043da70
    LEA ESI,[ESP + 0x60]                ; 0043da74
    CMP EAX,ESI                         ; 0043da78
    JZ 0x0043da94                       ; 0043da7a
        ;   XREF to: 0043da94 (CONDITIONAL_JUMP)  ; LAB_0043da94
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043da7c
    MOV dword ptr [ESP + 0x48],EAX      ; 0043da80
    MOV EAX,dword ptr [ESP + 0x64]      ; 0043da84
    MOV dword ptr [ESP + 0x4c],EAX      ; 0043da88
    MOV EAX,dword ptr [ESP + 0x68]      ; 0043da8c
    MOV dword ptr [ESP + 0x50],EAX      ; 0043da90
    FLD float ptr [ESP + 0x4c]          ; 0043da94
        ;   Label: LAB_0043da94
    FMUL ST0                            ; 0043da98
    FLD float ptr [ESP + 0x48]          ; 0043da9a
    FMUL ST0                            ; 0043da9e
    FADDP                               ; 0043daa0
    FLD float ptr [ESP + 0x50]          ; 0043daa2
    FMUL ST0                            ; 0043daa6
    FADDP                               ; 0043daa8
    FSTP float ptr [ESP + 0x198]        ; 0043daaa
    MOV EAX,dword ptr [ESP + 0x198]     ; 0043dab1
    MOV ESI,dword ptr [0x01d1a0a4]      ; 0043dab8 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0043dabe
    ADD EAX,ESI                         ; 0043dac0
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0043dac2
    MOV dword ptr [ESP + 0x194],EAX     ; 0043dac9
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0043dad0
    MOV EAX,dword ptr [EAX + 0x78]      ; 0043dad7
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0043dada
    FLD float ptr [ESP + 0x1b0]         ; 0043dae1
    FCOMP float ptr [ESP + 0x1b4]       ; 0043dae8
    FNSTSW AX                           ; 0043daef
    SAHF                                ; 0043daf1
    JBE 0x0043dc2c                      ; 0043daf2
        ;   XREF to: 0043dc2c (CONDITIONAL_JUMP)  ; LAB_0043dc2c
    FLD float ptr [ESP + 0x1b0]         ; 0043daf8
    FLD ST0                             ; 0043daff
    FSUB float ptr [ESP + 0x1b4]        ; 0043db01
    FLD float ptr [ESP + 0x48]          ; 0043db08
    FXCH                                ; 0043db0c
    FSTP float ptr [ESP + 0x1c4]        ; 0043db0e
    FMUL float ptr [ESP + 0x1c4]        ; 0043db15
    FLD float ptr [ESP + 0x4c]          ; 0043db1c
    FMUL float ptr [ESP + 0x1c4]        ; 0043db20
    FLD float ptr [ESP + 0x50]          ; 0043db27
    FMUL float ptr [ESP + 0x1c4]        ; 0043db2b
    LEA EDI,[ESP + 0xe4]                ; 0043db32
    LEA ESI,[ESP + 0xa8]                ; 0043db39
    FXCH ST2                            ; 0043db40
    FSTP float ptr [ESP + 0xa8]         ; 0043db42
    FSTP float ptr [ESP + 0xac]         ; 0043db49
    FSTP float ptr [ESP + 0xb0]         ; 0043db50
    MOVSD ES:EDI,ESI                    ; 0043db57
    MOVSD ES:EDI,ESI                    ; 0043db58
    MOVSD ES:EDI,ESI                    ; 0043db59
    FLD1                                ; 0043db5a
    FLD float ptr [ESP + 0xe4]          ; 0043db5c
    FXCH                                ; 0043db63
    FDIVRP ST2,ST0                      ; 0043db65
    FMUL ST1                            ; 0043db67
    FLD float ptr [ESP + 0xe8]          ; 0043db69
    FMUL ST2                            ; 0043db70
    FLD float ptr [ESP + 0xec]          ; 0043db72
    FMULP ST3                           ; 0043db79
    LEA EDI,[ESP + 0x150]               ; 0043db7b
    LEA ESI,[ESP + 0xcc]                ; 0043db82
    FXCH                                ; 0043db89
    FSTP float ptr [ESP + 0xcc]         ; 0043db8b
    FSTP float ptr [ESP + 0xd0]         ; 0043db92
    FSTP float ptr [ESP + 0xd4]         ; 0043db99
    MOVSD ES:EDI,ESI                    ; 0043dba0
    MOVSD ES:EDI,ESI                    ; 0043dba1
    MOVSD ES:EDI,ESI                    ; 0043dba2
    FLD float ptr [ESP + 0x150]         ; 0043dba3
    FLD float ptr [EBX]                 ; 0043dbaa
    FLD float ptr [EBX + 0x4]           ; 0043dbac
    FLD float ptr [EBX + 0x8]           ; 0043dbaf
    FXCH ST2                            ; 0043dbb2
    FSUB float ptr [ESP + 0x150]        ; 0043dbb4
    FXCH                                ; 0043dbbb
    FSUB float ptr [ESP + 0x154]        ; 0043dbbd
    FXCH ST2                            ; 0043dbc4
    FSUB float ptr [ESP + 0x158]        ; 0043dbc6
    FXCH                                ; 0043dbcd
    FSTP float ptr [EBX]                ; 0043dbcf
    FXCH                                ; 0043dbd1
    FSTP float ptr [EBX + 0x4]          ; 0043dbd3
    FSTP float ptr [EBX + 0x8]          ; 0043dbd6
    FMUL float ptr [ECX]                ; 0043dbd9
    FLD float ptr [ESP + 0x154]         ; 0043dbdb
    FMUL float ptr [ECX]                ; 0043dbe2
    FLD float ptr [ESP + 0x158]         ; 0043dbe4
    FMUL float ptr [ECX]                ; 0043dbeb
    LEA EDI,[ESP + 0x18]                ; 0043dbed
    LEA ESI,[ESP + 0xc]                 ; 0043dbf1
    FXCH ST2                            ; 0043dbf5
    FSTP float ptr [ESP + 0xc]          ; 0043dbf7
    FSTP float ptr [ESP + 0x10]         ; 0043dbfb
    FSTP float ptr [ESP + 0x14]         ; 0043dbff
    MOVSD ES:EDI,ESI                    ; 0043dc03
    MOVSD ES:EDI,ESI                    ; 0043dc04
    MOVSD ES:EDI,ESI                    ; 0043dc05
    FLD float ptr [EDX]                 ; 0043dc06
    FLD float ptr [EDX + 0x4]           ; 0043dc08
    FLD float ptr [EDX + 0x8]           ; 0043dc0b
    FXCH ST2                            ; 0043dc0e
    FSUB float ptr [ESP + 0x18]         ; 0043dc10
    FXCH                                ; 0043dc14
    FSUB float ptr [ESP + 0x1c]         ; 0043dc16
    FXCH ST2                            ; 0043dc1a
    FSUB float ptr [ESP + 0x20]         ; 0043dc1c
    FXCH                                ; 0043dc20
    FSTP float ptr [EDX]                ; 0043dc22
    FXCH                                ; 0043dc24
    FSTP float ptr [EDX + 0x4]          ; 0043dc26
    FSTP float ptr [EDX + 0x8]          ; 0043dc29
    FLD float ptr [ESP + 0x194]         ; 0043dc2c
        ;   Label: LAB_0043dc2c
    FCOMP float ptr [ESP + 0x1b4]       ; 0043dc33
    FNSTSW AX                           ; 0043dc3a
    SAHF                                ; 0043dc3c
    JNC 0x0043ddc1                      ; 0043dc3d
        ;   XREF to: 0043ddc1 (CONDITIONAL_JUMP)  ; LAB_0043ddc1
    FLD float ptr [ESP + 0x194]         ; 0043dc43
    FLD float ptr [ESP + 0x1b4]         ; 0043dc4a
    FSUB ST0,ST1                        ; 0043dc51
    FLD float ptr [ESP + 0x48]          ; 0043dc53
    FXCH                                ; 0043dc57
    FSTP float ptr [ESP + 0x1cc]        ; 0043dc59
    FMUL float ptr [ESP + 0x1cc]        ; 0043dc60
    FLD float ptr [ESP + 0x4c]          ; 0043dc67
    FMUL float ptr [ESP + 0x1cc]        ; 0043dc6b
    FLD float ptr [ESP + 0x50]          ; 0043dc72
    FMUL float ptr [ESP + 0x1cc]        ; 0043dc76
    LEA EDI,[ESP + 0x9c]                ; 0043dc7d
    LEA ESI,[ESP + 0x24]                ; 0043dc84
    FXCH ST2                            ; 0043dc88
    FSTP float ptr [ESP + 0x24]         ; 0043dc8a
    FSTP float ptr [ESP + 0x28]         ; 0043dc8e
    FSTP float ptr [ESP + 0x2c]         ; 0043dc92
    MOVSD ES:EDI,ESI                    ; 0043dc96
    MOVSD ES:EDI,ESI                    ; 0043dc97
    MOVSD ES:EDI,ESI                    ; 0043dc98
    FLD1                                ; 0043dc99
    FLD float ptr [ESP + 0x9c]          ; 0043dc9b
    FXCH                                ; 0043dca2
    FDIVRP ST2,ST0                      ; 0043dca4
    FMUL ST1                            ; 0043dca6
    FLD float ptr [ESP + 0xa0]          ; 0043dca8
    FMUL ST2                            ; 0043dcaf
    FLD float ptr [ESP + 0xa4]          ; 0043dcb1
    FMULP ST3                           ; 0043dcb8
    LEA EDI,[ESP + 0x3c]                ; 0043dcba
    LEA ESI,[ESP + 0xfc]                ; 0043dcbe
    FXCH                                ; 0043dcc5
    FSTP float ptr [ESP + 0xfc]         ; 0043dcc7
    FSTP float ptr [ESP + 0x100]        ; 0043dcce
    FSTP float ptr [ESP + 0x104]        ; 0043dcd5
    MOVSD ES:EDI,ESI                    ; 0043dcdc
    MOVSD ES:EDI,ESI                    ; 0043dcdd
    MOVSD ES:EDI,ESI                    ; 0043dcde
    MOV EAX,dword ptr [ESP + 0x188]     ; 0043dcdf
    FLD float ptr [ESP + 0x3c]          ; 0043dce6
    FMUL float ptr [EAX]                ; 0043dcea
    FLD float ptr [ESP + 0x40]          ; 0043dcec
    FMUL float ptr [EAX]                ; 0043dcf0
    FLD float ptr [ESP + 0x44]          ; 0043dcf2
    FMUL float ptr [EAX]                ; 0043dcf6
    LEA EDI,[ESP + 0x144]               ; 0043dcf8
    LEA ESI,[ESP + 0x84]                ; 0043dcff
    FXCH ST2                            ; 0043dd06
    FSTP float ptr [ESP + 0x84]         ; 0043dd08
    FSTP float ptr [ESP + 0x88]         ; 0043dd0f
    FSTP float ptr [ESP + 0x8c]         ; 0043dd16
    MOVSD ES:EDI,ESI                    ; 0043dd1d
    MOVSD ES:EDI,ESI                    ; 0043dd1e
    MOVSD ES:EDI,ESI                    ; 0043dd1f
    FLD float ptr [ESP + 0x144]         ; 0043dd20
    FLD float ptr [EBX]                 ; 0043dd27
    FLD float ptr [EBX + 0x4]           ; 0043dd29
    FLD float ptr [EBX + 0x8]           ; 0043dd2c
    FXCH ST2                            ; 0043dd2f
    FADD float ptr [ESP + 0x144]        ; 0043dd31
    FXCH                                ; 0043dd38
    FADD float ptr [ESP + 0x148]        ; 0043dd3a
    FXCH ST2                            ; 0043dd41
    FADD float ptr [ESP + 0x14c]        ; 0043dd43
    FXCH                                ; 0043dd4a
    FSTP float ptr [EBX]                ; 0043dd4c
    FXCH                                ; 0043dd4e
    FSTP float ptr [EBX + 0x4]          ; 0043dd50
    FSTP float ptr [EBX + 0x8]          ; 0043dd53
    FMUL float ptr [ECX]                ; 0043dd56
    FLD float ptr [ESP + 0x148]         ; 0043dd58
    FMUL float ptr [ECX]                ; 0043dd5f
    FLD float ptr [ESP + 0x14c]         ; 0043dd61
    FMUL float ptr [ECX]                ; 0043dd68
    LEA EDI,[ESP + 0xd8]                ; 0043dd6a
    LEA ESI,[ESP + 0x114]               ; 0043dd71
    FXCH ST2                            ; 0043dd78
    FSTP float ptr [ESP + 0x114]        ; 0043dd7a
    FSTP float ptr [ESP + 0x118]        ; 0043dd81
    FSTP float ptr [ESP + 0x11c]        ; 0043dd88
    MOVSD ES:EDI,ESI                    ; 0043dd8f
    MOVSD ES:EDI,ESI                    ; 0043dd90
    MOVSD ES:EDI,ESI                    ; 0043dd91
    FLD float ptr [EDX]                 ; 0043dd92
    FLD float ptr [EDX + 0x4]           ; 0043dd94
    FLD float ptr [EDX + 0x8]           ; 0043dd97
    FXCH ST2                            ; 0043dd9a
    FADD float ptr [ESP + 0xd8]         ; 0043dd9c
    FXCH                                ; 0043dda3
    FADD float ptr [ESP + 0xdc]         ; 0043dda5
    FXCH ST2                            ; 0043ddac
    FADD float ptr [ESP + 0xe0]         ; 0043ddae
    FXCH                                ; 0043ddb5
    FSTP float ptr [EDX]                ; 0043ddb7
    FXCH                                ; 0043ddb9
    FSTP float ptr [EDX + 0x4]          ; 0043ddbb
    FSTP float ptr [EDX + 0x8]          ; 0043ddbe
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 0043ddc1
        ;   Label: LAB_0043ddc1
    MOV EDI,dword ptr [ESP + 0x1a4]     ; 0043ddc8
    ADD ESI,0x4                         ; 0043ddcf
    INC EDI                             ; 0043ddd2
    MOV dword ptr [ESP + 0x1ac],ESI     ; 0043ddd3
    MOV ESI,dword ptr [EBX + 0x30]      ; 0043ddda
    MOV dword ptr [ESP + 0x1a4],EDI     ; 0043dddd
    CMP EDI,ESI                         ; 0043dde4
    JL 0x0043da1c                       ; 0043dde6
        ;   XREF to: 0043da1c (CONDITIONAL_JUMP)  ; LAB_0043da1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ddec
        ;   Label: LAB_0043ddec
    XOR EDI,EDI                         ; 0043ddef
    MOV EDX,dword ptr [EAX + 0x37b4c]   ; 0043ddf1
    MOV dword ptr [ESP + 0x1a8],EDI     ; 0043ddf7
    TEST EDX,EDX                        ; 0043ddfe
    JLE 0x0043e20a                      ; 0043de00
        ;   XREF to: 0043e20a (CONDITIONAL_JUMP)  ; LAB_0043e20a
    ADD EAX,0x3ab00                     ; 0043de06
    MOV dword ptr [ESP + 0x18c],EAX     ; 0043de0b
    LEA EAX,[EBX + 0x24]                ; 0043de12
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0043de15
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043de1c
    ADD EAX,0x37b50                     ; 0043de1f
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0043de24
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043de2b
    ADD EAX,0x37bf0                     ; 0043de2e
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0043de33
    IMUL EAX,dword ptr [ESP + 0x1a8],0xac ; 0043de3a
        ;   Label: LAB_0043de3a
    FLD float ptr [EBX]                 ; 0043de45
    FLD float ptr [EBX + 0x4]           ; 0043de47
    FLD float ptr [EBX + 0x8]           ; 0043de4a
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 0043de4d
    LEA EDI,[ESP + 0xf0]                ; 0043de54
    LEA ESI,[ESP + 0xc0]                ; 0043de5b
    ADD EDX,EAX                         ; 0043de62
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0043de64
    MOV dword ptr [ESP + 0x1c0],EDX     ; 0043de6b
    LEA EDX,[ESP + 0x12c]               ; 0043de72
    FXCH ST2                            ; 0043de79
    FSUB float ptr [EAX]                ; 0043de7b
    FXCH                                ; 0043de7d
    FSUB float ptr [EAX + 0x4]          ; 0043de7f
    FXCH ST2                            ; 0043de82
    FSUB float ptr [EAX + 0x8]          ; 0043de84
    FXCH                                ; 0043de87
    FSTP float ptr [ESP + 0xc0]         ; 0043de89
    FXCH                                ; 0043de90
    FSTP float ptr [ESP + 0xc4]         ; 0043de92
    FSTP float ptr [ESP + 0xc8]         ; 0043de99
    LEA EAX,[ESP + 0xf0]                ; 0043dea0
    MOVSD ES:EDI,ESI                    ; 0043dea7
    MOVSD ES:EDI,ESI                    ; 0043dea8
    MOVSD ES:EDI,ESI                    ; 0043dea9
    CMP EDX,EAX                         ; 0043deaa
    JNZ 0x0043e233                      ; 0043deac
        ;   XREF to: 0043e233 (CONDITIONAL_JUMP)  ; LAB_0043e233
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0043deb2
        ;   Label: LAB_0043deb2
    FLD float ptr [ESP + 0x130]         ; 0043deb9
    FMUL float ptr [EAX + 0x8c]         ; 0043dec0
    FLD float ptr [ESP + 0x12c]         ; 0043dec6
    FMUL float ptr [EAX + 0x80]         ; 0043decd
    FADDP                               ; 0043ded3
    FLD float ptr [ESP + 0x134]         ; 0043ded5
    FMUL float ptr [EAX + 0x98]         ; 0043dedc
    FADDP                               ; 0043dee2
    FST float ptr [ESP + 0x8]           ; 0043dee4
    FLDZ                                ; 0043dee8
    FCOMPP                              ; 0043deea
    FNSTSW AX                           ; 0043deec
    SAHF                                ; 0043deee
    JA 0x0043e1d6                       ; 0043deef
        ;   XREF to: 0043e1d6 (CONDITIONAL_JUMP)  ; LAB_0043e1d6
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0043def5
    FLD float ptr [ESP + 0x8]           ; 0043defc
    FCOMP float ptr [EAX + 0x44]        ; 0043df00
    FNSTSW AX                           ; 0043df03
    SAHF                                ; 0043df05
    JA 0x0043e1d6                       ; 0043df06
        ;   XREF to: 0043e1d6 (CONDITIONAL_JUMP)  ; LAB_0043e1d6
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0043df0c
    FLD float ptr [ESP + 0x130]         ; 0043df13
    FMUL float ptr [EAX + 0x84]         ; 0043df1a
    FLD float ptr [ESP + 0x130]         ; 0043df20
    FMUL float ptr [EAX + 0x88]         ; 0043df27
    FLD float ptr [ESP + 0x12c]         ; 0043df2d
    FMUL float ptr [EAX + 0x78]         ; 0043df34
    FLD float ptr [ESP + 0x12c]         ; 0043df37
    FMUL float ptr [EAX + 0x7c]         ; 0043df3e
    FXCH                                ; 0043df41
    FADDP ST3,ST0                       ; 0043df43
    FADDP                               ; 0043df45
    FLD float ptr [ESP + 0x134]         ; 0043df47
    FMUL float ptr [EAX + 0x90]         ; 0043df4e
    FLD float ptr [ESP + 0x134]         ; 0043df54
    FXCH                                ; 0043df5b
    FADDP ST3,ST0                       ; 0043df5d
    FMUL float ptr [EAX + 0x94]         ; 0043df5f
    FXCH ST2                            ; 0043df65
    FST float ptr [ESP]                 ; 0043df67
    FMUL float ptr [EAX + 0x38]         ; 0043df6a
    FXCH ST2                            ; 0043df6d
    FADDP                               ; 0043df6f
    FLD ST1                             ; 0043df71
    FMULP ST2                           ; 0043df73
    FST float ptr [ESP + 0x4]           ; 0043df75
    FMUL float ptr [EAX + 0x3c]         ; 0043df79
    FMUL ST0                            ; 0043df7c
    FADDP                               ; 0043df7e
    FSTP float ptr [ESP + 0x170]        ; 0043df80
    MOV EAX,dword ptr [ESP + 0x170]     ; 0043df87
    MOV EDI,dword ptr [0x01d1a0a4]      ; 0043df8e | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0043df94
    ADD EAX,EDI                         ; 0043df96
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0043df98
    FLD float ptr [ESP + 0x1c8]         ; 0043df9f
    FLD1                                ; 0043dfa6
    FCOMPP                              ; 0043dfa8
    FNSTSW AX                           ; 0043dfaa
    SAHF                                ; 0043dfac
    JBE 0x0043e1d6                      ; 0043dfad
        ;   XREF to: 0043e1d6 (CONDITIONAL_JUMP)  ; LAB_0043e1d6
    FLD float ptr [ESP + 0x4]           ; 0043dfb3
    MOV EAX,dword ptr [ESP]             ; 0043dfb7
    FMUL float ptr [ESP + 0x4]          ; 0043dfba
    MOV dword ptr [ESP + 0x30],EAX      ; 0043dfbe
    FLD float ptr [ESP]                 ; 0043dfc2
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043dfc5
    FMUL float ptr [ESP]                ; 0043dfc9
    MOV dword ptr [ESP + 0x34],EAX      ; 0043dfcc
    XOR EAX,EAX                         ; 0043dfd0
    FADDP                               ; 0043dfd2
    MOV dword ptr [ESP + 0x38],EAX      ; 0043dfd4
    FSTP float ptr [ESP + 0x178]        ; 0043dfd8
    MOV EAX,dword ptr [ESP + 0x178]     ; 0043dfdf
    MOV EDX,dword ptr [0x01d1a0a8]      ; 0043dfe6 | DAT_01d1a0a8
    SAR EAX,0x1                         ; 0043dfec
    SUB EDX,EAX                         ; 0043dfee
    MOV dword ptr [ESP + 0x17c],EDX     ; 0043dff0
    FLD float ptr [ESP]                 ; 0043dff7
    FMUL float ptr [ESP + 0x17c]        ; 0043dffa
    FLD float ptr [ESP + 0x4]           ; 0043e001
    FMUL float ptr [ESP + 0x17c]        ; 0043e005
    FLDZ                                ; 0043e00c
    FMUL float ptr [ESP + 0x17c]        ; 0043e00e
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0043e015
    FXCH ST2                            ; 0043e01c
    FSTP float ptr [ESP + 0x30]         ; 0043e01e
    FSTP float ptr [ESP + 0x34]         ; 0043e022
    FSTP float ptr [ESP + 0x38]         ; 0043e026
    FLD double ptr [0x005b9120]         ; 0043e02a | DAT_005b9120
    FLD float ptr [EAX + 0x14]          ; 0043e030
    FMUL ST1                            ; 0043e033
    FMUL float ptr [ESP + 0x30]         ; 0043e035
    FSTP float ptr [ESP + 0x30]         ; 0043e039
    FMUL float ptr [EAX + 0x18]         ; 0043e03d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043e040
    FLD float ptr [ESP + 0x34]          ; 0043e044
    FXCH                                ; 0043e048
    FMUL ST1                            ; 0043e04a
    MOV dword ptr [ESP + 0x38],EAX      ; 0043e04c
    LEA EAX,[ESP + 0x30]                ; 0043e050
    LEA ESI,[ESP + 0x120]               ; 0043e054
    PUSH EAX                            ; 0043e05b
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0043e05c
    LEA EDI,[ESP + 0x160]               ; 0043e063
    ADD EAX,0x78                        ; 0043e06a
    FSTP ST1                            ; 0043e06d
    PUSH EAX                            ; 0043e06f
    FSTP float ptr [ESP + 0x3c]         ; 0043e070
    CALL core_dirmat.cpp_FUN_0045b800   ; 0043e074
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 0043e079
    LEA ESI,[ESP + 0x120]               ; 0043e07c
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0043e083
    MOVSD ES:EDI,ESI                    ; 0043e08a
    MOVSD ES:EDI,ESI                    ; 0043e08b
    MOVSD ES:EDI,ESI                    ; 0043e08c
    LEA EDX,[ESP + 0x54]                ; 0043e08d
    FLD float ptr [EAX + 0xa4]          ; 0043e091
    FLD float ptr [EAX + 0xa8]          ; 0043e097
    FLD float ptr [EAX + 0xa0]          ; 0043e09d
    LEA EDI,[ESP + 0x54]                ; 0043e0a3
    LEA ESI,[ESP + 0x6c]                ; 0043e0a7
    LEA EAX,[ESP + 0x30]                ; 0043e0ab
    FADD float ptr [ESP + 0x15c]        ; 0043e0af
    FXCH ST2                            ; 0043e0b6
    FADD float ptr [ESP + 0x160]        ; 0043e0b8
    FXCH                                ; 0043e0bf
    FADD float ptr [ESP + 0x164]        ; 0043e0c1
    FXCH ST2                            ; 0043e0c8
    FSTP float ptr [ESP + 0x6c]         ; 0043e0ca
    FSTP float ptr [ESP + 0x70]         ; 0043e0ce
    FSTP float ptr [ESP + 0x74]         ; 0043e0d2
    MOVSD ES:EDI,ESI                    ; 0043e0d6
    MOVSD ES:EDI,ESI                    ; 0043e0d7
    MOVSD ES:EDI,ESI                    ; 0043e0d8
    CMP EAX,EDX                         ; 0043e0d9
    JZ 0x0043e0f5                       ; 0043e0db
        ;   XREF to: 0043e0f5 (CONDITIONAL_JUMP)  ; LAB_0043e0f5
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043e0dd
    MOV dword ptr [ESP + 0x30],EAX      ; 0043e0e1
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043e0e5
    MOV dword ptr [ESP + 0x34],EAX      ; 0043e0e9
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0043e0ed
    MOV dword ptr [ESP + 0x38],EAX      ; 0043e0f1
    FLD float ptr [ESP + 0x30]          ; 0043e0f5
        ;   Label: LAB_0043e0f5
    FLD float ptr [ESP + 0x34]          ; 0043e0f9
    FLD float ptr [ESP + 0x38]          ; 0043e0fd
    LEA EDI,[ESP + 0x108]               ; 0043e101
    LEA ESI,[ESP + 0xb4]                ; 0043e108
    LEA EAX,[ESP + 0x30]                ; 0043e10f
    FXCH ST2                            ; 0043e113
    FSUB float ptr [EBX]                ; 0043e115
    FXCH                                ; 0043e117
    FSUB float ptr [EBX + 0x4]          ; 0043e119
    FXCH ST2                            ; 0043e11c
    FSUB float ptr [EBX + 0x8]          ; 0043e11e
    FXCH ST2                            ; 0043e121
    FSTP float ptr [ESP + 0xb8]         ; 0043e123
    FXCH                                ; 0043e12a
    FSTP float ptr [ESP + 0xbc]         ; 0043e12c
    FSTP float ptr [ESP + 0xb4]         ; 0043e133
    MOVSD ES:EDI,ESI                    ; 0043e13a
    MOVSD ES:EDI,ESI                    ; 0043e13b
    MOVSD ES:EDI,ESI                    ; 0043e13c
    CMP EBX,EAX                         ; 0043e13d
    JZ 0x0043e155                       ; 0043e13f
        ;   XREF to: 0043e155 (CONDITIONAL_JUMP)  ; LAB_0043e155
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043e141
    MOV dword ptr [EBX],EAX             ; 0043e145
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043e147
    MOV dword ptr [EBX + 0x4],EAX       ; 0043e14b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043e14e
    MOV dword ptr [EBX + 0x8],EAX       ; 0043e152
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0043e155
        ;   Label: LAB_0043e155
    FLD float ptr [ESP + 0x108]         ; 0043e15c
    FMUL float ptr [EAX]                ; 0043e163
    FLD float ptr [ESP + 0x10c]         ; 0043e165
    FMUL float ptr [EAX]                ; 0043e16c
    FLD float ptr [ESP + 0x110]         ; 0043e16e
    FMUL float ptr [EAX]                ; 0043e175
    LEA EDI,[ESP + 0x78]                ; 0043e177
    LEA ESI,[ESP + 0x90]                ; 0043e17b
    FXCH ST2                            ; 0043e182
    FSTP float ptr [ESP + 0x90]         ; 0043e184
    FSTP float ptr [ESP + 0x94]         ; 0043e18b
    FSTP float ptr [ESP + 0x98]         ; 0043e192
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0043e199
    MOVSD ES:EDI,ESI                    ; 0043e1a0
    MOVSD ES:EDI,ESI                    ; 0043e1a1
    MOVSD ES:EDI,ESI                    ; 0043e1a2
    FLD float ptr [EAX]                 ; 0043e1a3
    FLD float ptr [EAX + 0x4]           ; 0043e1a5
    FLD float ptr [EAX + 0x8]           ; 0043e1a8
    FXCH ST2                            ; 0043e1ab
    FADD float ptr [ESP + 0x78]         ; 0043e1ad
    FXCH                                ; 0043e1b1
    FADD float ptr [ESP + 0x7c]         ; 0043e1b3
    FXCH ST2                            ; 0043e1b7
    FADD float ptr [ESP + 0x80]         ; 0043e1b9
    FXCH                                ; 0043e1c0
    FSTP float ptr [EAX]                ; 0043e1c2
    FXCH                                ; 0043e1c4
    FSTP float ptr [EAX + 0x4]          ; 0043e1c6
    FSTP float ptr [EAX + 0x8]          ; 0043e1c9
    MOV dword ptr [EBX + 0xb8],0x1      ; 0043e1cc
    MOV EDI,dword ptr [ESP + 0x1b8]     ; 0043e1d6
        ;   Label: LAB_0043e1d6
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0043e1dd
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043e1e4
    ADD EDI,0xac                        ; 0043e1e7
    INC EAX                             ; 0043e1ed
    MOV ECX,dword ptr [EDX + 0x37b4c]   ; 0043e1ee
    MOV dword ptr [ESP + 0x1b8],EDI     ; 0043e1f4
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0043e1fb
    CMP EAX,ECX                         ; 0043e202
    JL 0x0043de3a                       ; 0043e204
        ;   XREF to: 0043de3a (CONDITIONAL_JUMP)  ; LAB_0043de3a
    MOV ESP,EBP                         ; 0043e20a
        ;   Label: LAB_0043e20a
    POP EBP                             ; 0043e20c
    POP EDI                             ; 0043e20d
    POP ESI                             ; 0043e20e
    POP EBX                             ; 0043e20f
    RET                                 ; 0043e210
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043e211
        ;   Label: LAB_0043e211
    MOV dword ptr [EBX + 0x28],0x0      ; 0043e214
    MOV EDX,dword ptr [EAX + 0x3ab04]   ; 0043e21b
    MOV dword ptr [EBX + 0x4],EDX       ; 0043e221
    MOV dword ptr [EBX + 0xbc],0x1      ; 0043e224
    JMP 0x0043d9d7                      ; 0043e22e
        ;   XREF to: 0043d9d7 (UNCONDITIONAL_JUMP)  ; LAB_0043d9d7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0043e233
        ;   Label: LAB_0043e233
    MOV dword ptr [ESP + 0x12c],EAX     ; 0043e23a
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0043e241
    MOV dword ptr [ESP + 0x130],EAX     ; 0043e248
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0043e24f
    MOV dword ptr [ESP + 0x134],EAX     ; 0043e256
    JMP 0x0043deb2                      ; 0043e25d
        ;   XREF to: 0043deb2 (UNCONDITIONAL_JUMP)  ; LAB_0043deb2

