; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00420e90(CBugs *param_1,SBug *param_2,float param_3)
;
; Local Variables:
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
; undefined        Stack[-0xf4]:1  local_f4
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
; undefined        Stack[-0xa0]:1  local_a0
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
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_bugs.cpp_FUN_004203a0 at 0042051c
;
; Referenced Globals:
;   undefined4 DAT_005cca69
;   undefined4 DAT_005cca71
;   undefined4 DAT_005f3e18
;   undefined4 DAT_005f3e2c
;
; Called Functions:
;   core_bugs.cpp_FUN_00420840
;   core_bugs.cpp_FUN_00421800
;   core_dirmat.cpp_FUN_004496e0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_transformVector3x4InPlace_FUN_005915b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420e90
        ;   Label: core_bugs.cpp_FUN_00420e90
    PUSH ESI                            ; 00420e91
    PUSH EDI                            ; 00420e92
    PUSH EBP                            ; 00420e93
    MOV EBP,ESP                         ; 00420e94
    SUB ESP,0x190                       ; 00420e96
    AND ESP,0xfffffff8                  ; 00420e9c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00420e9f
    MOV dword ptr [ESP],EAX             ; 00420ea2
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420ea5
    CMP dword ptr [EAX + 0x2c],0x0      ; 00420ea8
    JL 0x00421689                       ; 00420eac
        ;   XREF to: 00421689 (CONDITIONAL_JUMP)  ; LAB_00421689
    FLD float ptr [EAX + 0x38]          ; 00420eb2
    FLDZ                                ; 00420eb5
    FCOMPP                              ; 00420eb7
    FNSTSW AX                           ; 00420eb9
    SAHF                                ; 00420ebb
    JNC 0x00421722                      ; 00420ebc
        ;   XREF to: 00421722 (CONDITIONAL_JUMP)  ; LAB_00421722
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420ec2
    FLD float ptr [0x005f3e2c]          ; 00420ec5 | DAT_005f3e2c
    FDIV float ptr [EAX + 0x38]         ; 00420ecb
    MOV ESI,dword ptr [EBP + 0x14]      ; 00420ece
    XOR EBX,EBX                         ; 00420ed1
    FSTP float ptr [ESP + 0x8]          ; 00420ed3
    FLD float ptr [ESP]                 ; 00420ed7
        ;   Label: LAB_00420ed7
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420eda
    FMUL float ptr [ESP + 0x8]          ; 00420edd
    MOV EAX,dword ptr [EAX + 0x34]      ; 00420ee1
    MOV dword ptr [ESP + 0x4],EAX       ; 00420ee4
    FADD float ptr [ESP + 0x4]          ; 00420ee8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420eec
    FST float ptr [EAX + 0x34]          ; 00420eef
    FLD1                                ; 00420ef2
    FCOMPP                              ; 00420ef4
    FNSTSW AX                           ; 00420ef6
    SAHF                                ; 00420ef8
    JBE 0x00421741                      ; 00420ef9
        ;   XREF to: 00421741 (CONDITIONAL_JUMP)  ; LAB_00421741
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420eff
        ;   Label: LAB_00420eff
    FLD float ptr [EAX + 0x34]          ; 00420f02
    FLDZ                                ; 00420f05
    FCOMPP                              ; 00420f07
    FNSTSW AX                           ; 00420f09
    SAHF                                ; 00420f0b
    JBE 0x00420f18                      ; 00420f0c
        ;   XREF to: 00420f18 (CONDITIONAL_JUMP)  ; LAB_00420f18
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420f0e
    MOV dword ptr [EAX + 0x34],0x0      ; 00420f11
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420f18
        ;   Label: LAB_00420f18
    FLD float ptr [EAX + 0x34]          ; 00420f1b
    FLD1                                ; 00420f1e
    FCOMPP                              ; 00420f20
    FNSTSW AX                           ; 00420f22
    SAHF                                ; 00420f24
    JNC 0x00420f31                      ; 00420f25
        ;   XREF to: 00420f31 (CONDITIONAL_JUMP)  ; LAB_00420f31
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420f27
    MOV dword ptr [EAX + 0x34],0x3f800000 ; 00420f2a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00420f31
        ;   Label: LAB_00420f31
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00420f34
    LEA EAX,[EDX*0x4 + 0x0]             ; 00420f37
    MOV EBX,dword ptr [EBP + 0x14]      ; 00420f3e
    SUB EAX,EDX                         ; 00420f41
    MOV EBX,dword ptr [EBX + 0x17738]   ; 00420f43
    LEA EDX,[EAX*0x4 + 0x0]             ; 00420f49
    MOV EAX,dword ptr [EBX + 0x2234]    ; 00420f50
    LEA EBX,[ESP + 0x64]                ; 00420f56
    ADD EAX,EDX                         ; 00420f5a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00420f5c
    FILD dword ptr [EAX]                ; 00420f5f
    FMUL float ptr [0x005f3e18]         ; 00420f61 | DAT_005f3e18
    FSTP float ptr [EBX]                ; 00420f67
    FILD dword ptr [EAX + 0x4]          ; 00420f69
    FMUL float ptr [0x005f3e18]         ; 00420f6c | DAT_005f3e18
    FSTP float ptr [EBX + 0x4]          ; 00420f72
    FILD dword ptr [EAX + 0x8]          ; 00420f75
    FMUL float ptr [0x005f3e18]         ; 00420f78 | DAT_005f3e18
    FSTP float ptr [EBX + 0x8]          ; 00420f7e
    MOV EDX,dword ptr [EDX + 0x30]      ; 00420f81
    LEA EAX,[EDX*0x4 + 0x0]             ; 00420f84
    MOV EBX,dword ptr [EBP + 0x14]      ; 00420f8b
    SUB EAX,EDX                         ; 00420f8e
    MOV EBX,dword ptr [EBX + 0x17738]   ; 00420f90
    LEA EDX,[EAX*0x4 + 0x0]             ; 00420f96
    MOV EAX,dword ptr [EBX + 0x2234]    ; 00420f9d
    LEA EBX,[ESP + 0xb8]                ; 00420fa3
    ADD EAX,EDX                         ; 00420faa
    FILD dword ptr [EAX]                ; 00420fac
    FMUL float ptr [0x005f3e18]         ; 00420fae | DAT_005f3e18
    FSTP float ptr [EBX]                ; 00420fb4
    FILD dword ptr [EAX + 0x4]          ; 00420fb6
    FMUL float ptr [0x005f3e18]         ; 00420fb9 | DAT_005f3e18
    FSTP float ptr [EBX + 0x4]          ; 00420fbf
    FILD dword ptr [EAX + 0x8]          ; 00420fc2
    FMUL float ptr [0x005f3e18]         ; 00420fc5 | DAT_005f3e18
    FSTP float ptr [EBX + 0x8]          ; 00420fcb
    MOV EAX,dword ptr [EBP + 0x18]      ; 00420fce
    FLD float ptr [ESP + 0xb8]          ; 00420fd1
    FMUL float ptr [EAX + 0x34]         ; 00420fd8
    FLD float ptr [ESP + 0xbc]          ; 00420fdb
    FMUL float ptr [EAX + 0x34]         ; 00420fe2
    FLD float ptr [ESP + 0xc0]          ; 00420fe5
    FMUL float ptr [EAX + 0x34]         ; 00420fec
    LEA EDI,[ESP + 0xc4]                ; 00420fef
    LEA ESI,[ESP + 0x4c]                ; 00420ff6
    FXCH ST2                            ; 00420ffa
    FSTP float ptr [ESP + 0x4c]         ; 00420ffc
    FSTP float ptr [ESP + 0x50]         ; 00421000
    FSTP float ptr [ESP + 0x54]         ; 00421004
    MOVSD ES:EDI,ESI                    ; 00421008
    MOVSD ES:EDI,ESI                    ; 00421009
    MOVSD ES:EDI,ESI                    ; 0042100a
    FLD1                                ; 0042100b
    FSUB float ptr [EAX + 0x34]         ; 0042100d
    FLD float ptr [ESP + 0x64]          ; 00421010
    FXCH                                ; 00421014
    FSTP float ptr [ESP + 0x188]        ; 00421016
    FMUL float ptr [ESP + 0x188]        ; 0042101d
    FLD float ptr [ESP + 0x68]          ; 00421024
    FMUL float ptr [ESP + 0x188]        ; 00421028
    FLD float ptr [ESP + 0x6c]          ; 0042102f
    FMUL float ptr [ESP + 0x188]        ; 00421033
    LEA EDI,[ESP + 0x118]               ; 0042103a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00421041
    LEA ESI,[ESP + 0xa0]                ; 00421044
    ADD EAX,0x1773c                     ; 0042104b
    FXCH ST2                            ; 00421050
    FSTP float ptr [ESP + 0xa0]         ; 00421052
    FSTP float ptr [ESP + 0xa4]         ; 00421059
    FSTP float ptr [ESP + 0xa8]         ; 00421060
    MOVSD ES:EDI,ESI                    ; 00421067
    MOVSD ES:EDI,ESI                    ; 00421068
    MOVSD ES:EDI,ESI                    ; 00421069
    PUSH EAX                            ; 0042106a
    FLD float ptr [ESP + 0x11c]         ; 0042106b
    FLD float ptr [ESP + 0x120]         ; 00421072
    FLD float ptr [ESP + 0x124]         ; 00421079
    LEA EAX,[ESP + 0x104]               ; 00421080
    LEA EDI,[ESP + 0x104]               ; 00421087
    LEA ESI,[ESP + 0x158]               ; 0042108e
    FXCH ST2                            ; 00421095
    FADD float ptr [ESP + 0xc8]         ; 00421097
    FXCH                                ; 0042109e
    FADD float ptr [ESP + 0xcc]         ; 004210a0
    FXCH ST2                            ; 004210a7
    FADD float ptr [ESP + 0xd0]         ; 004210a9
    FXCH                                ; 004210b0
    FSTP float ptr [ESP + 0x158]        ; 004210b2
    FXCH                                ; 004210b9
    FSTP float ptr [ESP + 0x15c]        ; 004210bb
    FSTP float ptr [ESP + 0x160]        ; 004210c2
    MOVSD ES:EDI,ESI                    ; 004210c9
    MOVSD ES:EDI,ESI                    ; 004210ca
    MOVSD ES:EDI,ESI                    ; 004210cb
    PUSH EAX                            ; 004210cc
    LEA ESI,[ESP + 0x168]               ; 004210cd
    LEA EDI,[ESP + 0x9c]                ; 004210d4
    CALL core_xform.cpp_FUN_00591530    ; 004210db
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004210e0
    LEA ESI,[ESP + 0x160]               ; 004210e3
    MOV EBX,dword ptr [EBP + 0x18]      ; 004210ea
    LEA EAX,[ESP + 0x94]                ; 004210ed
    ADD EBX,0x8                         ; 004210f4
    MOVSD ES:EDI,ESI                    ; 004210f7
    MOVSD ES:EDI,ESI                    ; 004210f8
    MOVSD ES:EDI,ESI                    ; 004210f9
    CMP EBX,EAX                         ; 004210fa
    JZ 0x0042111b                       ; 004210fc
        ;   XREF to: 0042111b (CONDITIONAL_JUMP)  ; LAB_0042111b
    MOV EAX,dword ptr [ESP + 0x94]      ; 004210fe
    MOV dword ptr [EBX],EAX             ; 00421105
    MOV EAX,dword ptr [ESP + 0x98]      ; 00421107
    MOV dword ptr [EBX + 0x4],EAX       ; 0042110e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00421111
    MOV dword ptr [EBX + 0x8],EAX       ; 00421118
    FLD float ptr [ESP + 0xb8]          ; 0042111b
        ;   Label: LAB_0042111b
    FLD float ptr [ESP + 0xbc]          ; 00421122
    FLD float ptr [ESP + 0xc0]          ; 00421129
    LEA EDI,[ESP + 0x34]                ; 00421130
    LEA ESI,[ESP + 0x148]               ; 00421134
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042113b
    FXCH ST2                            ; 0042113e
    FSUB float ptr [ESP + 0x64]         ; 00421140
    FXCH                                ; 00421144
    FSUB float ptr [ESP + 0x68]         ; 00421146
    FXCH ST2                            ; 0042114a
    FSUB float ptr [ESP + 0x6c]         ; 0042114c
    FXCH                                ; 00421150
    FSTP float ptr [ESP + 0x148]        ; 00421152
    FXCH                                ; 00421159
    FSTP float ptr [ESP + 0x14c]        ; 0042115b
    FSTP float ptr [ESP + 0x150]        ; 00421162
    MOVSD ES:EDI,ESI                    ; 00421169
    MOVSD ES:EDI,ESI                    ; 0042116a
    MOVSD ES:EDI,ESI                    ; 0042116b
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0042116c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042116f
    ADD EAX,EDX                         ; 00421176
    MOV EDX,dword ptr [EBP + 0x14]      ; 00421178
    MOV EDX,dword ptr [EDX + EAX*0x8 + 0x17778] ; 0042117b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00421182
    MOV EDI,dword ptr [EAX + 0x17738]   ; 00421185
    LEA ESI,[EDX*0x8 + 0x0]             ; 0042118b
    PUSH EDI                            ; 00421192
    MOV EBX,dword ptr [EAX + 0x1776c]   ; 00421193
    ADD ESI,EDX                         ; 00421199
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0042119b
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESI,ESI                         ; 004211a0
    MOV EDX,dword ptr [EAX + EBX*0x4 + 0x7c] ; 004211a2
    ADD ESP,0x4                         ; 004211a6
    ADD EDX,ESI                         ; 004211a9
    XOR EBX,EBX                         ; 004211ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 004211ad
    MOV BX,word ptr [EDX]               ; 004211b0
    MOV ESI,dword ptr [EAX + 0x17738]   ; 004211b3
    LEA EAX,[EBX*0x4 + 0x0]             ; 004211b9
    SUB EAX,EBX                         ; 004211c0
    LEA EBX,[EAX*0x4 + 0x0]             ; 004211c2
    MOV EAX,dword ptr [ESI + 0x2234]    ; 004211c9
    ADD EAX,EBX                         ; 004211cf
    LEA EBX,[ESP + 0x64]                ; 004211d1
    FILD dword ptr [EAX]                ; 004211d5
    FMUL float ptr [0x005f3e18]         ; 004211d7 | DAT_005f3e18
    FSTP float ptr [EBX]                ; 004211dd
    FILD dword ptr [EAX + 0x4]          ; 004211df
    FMUL float ptr [0x005f3e18]         ; 004211e2 | DAT_005f3e18
    FSTP float ptr [EBX + 0x4]          ; 004211e8
    FILD dword ptr [EAX + 0x8]          ; 004211eb
    FMUL float ptr [0x005f3e18]         ; 004211ee | DAT_005f3e18
    FSTP float ptr [EBX + 0x8]          ; 004211f4
    XOR EBX,EBX                         ; 004211f7
    MOV BX,word ptr [EDX + 0x2]         ; 004211f9
    LEA EAX,[EBX*0x4 + 0x0]             ; 004211fd
    MOV ESI,dword ptr [EBP + 0x14]      ; 00421204
    SUB EAX,EBX                         ; 00421207
    MOV ESI,dword ptr [ESI + 0x17738]   ; 00421209
    SHL EAX,0x2                         ; 0042120f
    MOV EBX,dword ptr [ESI + 0x2234]    ; 00421212
    ADD EAX,EBX                         ; 00421218
    LEA EBX,[ESP + 0xb8]                ; 0042121a
    FILD dword ptr [EAX]                ; 00421221
    FMUL float ptr [0x005f3e18]         ; 00421223 | DAT_005f3e18
    FSTP float ptr [EBX]                ; 00421229
    FILD dword ptr [EAX + 0x4]          ; 0042122b
    FMUL float ptr [0x005f3e18]         ; 0042122e | DAT_005f3e18
    FSTP float ptr [EBX + 0x4]          ; 00421234
    FILD dword ptr [EAX + 0x8]          ; 00421237
    FMUL float ptr [0x005f3e18]         ; 0042123a | DAT_005f3e18
    FSTP float ptr [EBX + 0x8]          ; 00421240
    MOV EBX,dword ptr [EBP + 0x14]      ; 00421243
    MOV DX,word ptr [EDX + 0x4]         ; 00421246
    MOV EBX,dword ptr [EBX + 0x17738]   ; 0042124a
    AND EDX,0xffff                      ; 00421250
    LEA EAX,[EDX*0x4 + 0x0]             ; 00421256
    SUB EAX,EDX                         ; 0042125d
    LEA EDI,[ESP + 0x124]               ; 0042125f
    SHL EAX,0x2                         ; 00421266
    MOV EDX,dword ptr [EBX + 0x2234]    ; 00421269
    LEA EBX,[ESP + 0xdc]                ; 0042126f
    ADD EAX,EDX                         ; 00421276
    LEA ESI,[ESP + 0x13c]               ; 00421278
    FILD dword ptr [EAX]                ; 0042127f
    FMUL float ptr [0x005f3e18]         ; 00421281 | DAT_005f3e18
    FSTP float ptr [EBX]                ; 00421287
    FILD dword ptr [EAX + 0x4]          ; 00421289
    FMUL float ptr [0x005f3e18]         ; 0042128c | DAT_005f3e18
    FSTP float ptr [EBX + 0x4]          ; 00421292
    FILD dword ptr [EAX + 0x8]          ; 00421295
    FMUL float ptr [0x005f3e18]         ; 00421298 | DAT_005f3e18
    FSTP float ptr [EBX + 0x8]          ; 0042129e
    FLD float ptr [ESP + 0xb8]          ; 004212a1
    FLD float ptr [ESP + 0xbc]          ; 004212a8
    FLD float ptr [ESP + 0xc0]          ; 004212af
    FLD float ptr [ESP + 0xdc]          ; 004212b6
    FLD float ptr [ESP + 0xe0]          ; 004212bd
    FLD float ptr [ESP + 0xe4]          ; 004212c4
    FXCH ST5                            ; 004212cb
    FSUB float ptr [ESP + 0x64]         ; 004212cd
    FXCH ST4                            ; 004212d1
    FSUB float ptr [ESP + 0x68]         ; 004212d3
    FXCH ST3                            ; 004212d7
    FSUB float ptr [ESP + 0x6c]         ; 004212d9
    FXCH ST2                            ; 004212dd
    FSUB float ptr [ESP + 0xb8]         ; 004212df
    FXCH                                ; 004212e6
    FSUB float ptr [ESP + 0xbc]         ; 004212e8
    FXCH ST5                            ; 004212ef
    FSUB float ptr [ESP + 0xc0]         ; 004212f1
    FXCH ST4                            ; 004212f8
    FSTP float ptr [ESP + 0x13c]        ; 004212fa
    FXCH ST2                            ; 00421301
    FSTP float ptr [ESP + 0x140]        ; 00421303
    FSTP float ptr [ESP + 0x144]        ; 0042130a
    FSTP float ptr [ESP + 0x58]         ; 00421311
    MOVSD ES:EDI,ESI                    ; 00421315
    MOVSD ES:EDI,ESI                    ; 00421316
    MOVSD ES:EDI,ESI                    ; 00421317
    FXCH                                ; 00421318
    FSTP float ptr [ESP + 0x5c]         ; 0042131a
    LEA EDI,[ESP + 0xe8]                ; 0042131e
    LEA ESI,[ESP + 0x58]                ; 00421325
    FSTP float ptr [ESP + 0x60]         ; 00421329
    MOVSD ES:EDI,ESI                    ; 0042132d
    MOVSD ES:EDI,ESI                    ; 0042132e
    MOVSD ES:EDI,ESI                    ; 0042132f
    FLD float ptr [ESP + 0x128]         ; 00421330
    FMUL float ptr [ESP + 0xf0]         ; 00421337
    FLD float ptr [ESP + 0x12c]         ; 0042133e
    FMUL float ptr [ESP + 0xe8]         ; 00421345
    FLD float ptr [ESP + 0x124]         ; 0042134c
    FMUL float ptr [ESP + 0xec]         ; 00421353
    FLD float ptr [ESP + 0x12c]         ; 0042135a
    FMUL float ptr [ESP + 0xec]         ; 00421361
    FLD float ptr [ESP + 0x124]         ; 00421368
    FMUL float ptr [ESP + 0xf0]         ; 0042136f
    FLD float ptr [ESP + 0x128]         ; 00421376
    FMUL float ptr [ESP + 0xe8]         ; 0042137d
    LEA EDI,[ESP + 0xf4]                ; 00421384
    LEA ESI,[ESP + 0xd0]                ; 0042138b
    FXCH ST2                            ; 00421392
    FSUBP ST5,ST0                       ; 00421394
    FSUBP ST3,ST0                       ; 00421396
    FSUBP                               ; 00421398
    FXCH ST2                            ; 0042139a
    FSTP float ptr [ESP + 0xd0]         ; 0042139c
    FSTP float ptr [ESP + 0xd4]         ; 004213a3
    FSTP float ptr [ESP + 0xd8]         ; 004213aa
    MOVSD ES:EDI,ESI                    ; 004213b1
    MOVSD ES:EDI,ESI                    ; 004213b2
    MOVSD ES:EDI,ESI                    ; 004213b3
    FLD float ptr [ESP + 0xf8]          ; 004213b4
    FMUL float ptr [ESP + 0x3c]         ; 004213bb
    FLD float ptr [ESP + 0xfc]          ; 004213bf
    FMUL float ptr [ESP + 0x34]         ; 004213c6
    FLD float ptr [ESP + 0xf4]          ; 004213ca
    FMUL float ptr [ESP + 0x38]         ; 004213d1
    FLD float ptr [ESP + 0xfc]          ; 004213d5
    FMUL float ptr [ESP + 0x38]         ; 004213dc
    FLD float ptr [ESP + 0xf4]          ; 004213e0
    FMUL float ptr [ESP + 0x3c]         ; 004213e7
    FLD float ptr [ESP + 0xf8]          ; 004213eb
    FMUL float ptr [ESP + 0x34]         ; 004213f2
    LEA EDI,[ESP + 0x70]                ; 004213f6
    LEA ESI,[ESP + 0x10c]               ; 004213fa
    FXCH ST2                            ; 00421401
    FSUBP ST5,ST0                       ; 00421403
    FSUBP ST3,ST0                       ; 00421405
    FSUBP                               ; 00421407
    FXCH ST2                            ; 00421409
    FSTP float ptr [ESP + 0x10c]        ; 0042140b
    FSTP float ptr [ESP + 0x110]        ; 00421412
    FSTP float ptr [ESP + 0x114]        ; 00421419
    MOVSD ES:EDI,ESI                    ; 00421420
    MOVSD ES:EDI,ESI                    ; 00421421
    MOVSD ES:EDI,ESI                    ; 00421422
    FLD float ptr [ESP + 0x38]          ; 00421423
    FMUL float ptr [ESP + 0x78]         ; 00421427
    FLD float ptr [ESP + 0x3c]          ; 0042142b
    FMUL float ptr [ESP + 0x70]         ; 0042142f
    FLD float ptr [ESP + 0x34]          ; 00421433
    FMUL float ptr [ESP + 0x74]         ; 00421437
    FLD float ptr [ESP + 0x3c]          ; 0042143b
    FMUL float ptr [ESP + 0x74]         ; 0042143f
    FLD float ptr [ESP + 0x34]          ; 00421443
    FMUL float ptr [ESP + 0x78]         ; 00421447
    FLD float ptr [ESP + 0x38]          ; 0042144b
    FMUL float ptr [ESP + 0x70]         ; 0042144f
    LEA EDI,[ESP + 0x130]               ; 00421453
    LEA ESI,[ESP + 0x88]                ; 0042145a
    LEA EAX,[ESP + 0x130]               ; 00421461
    LEA EDX,[ESP + 0xf4]                ; 00421468
    FXCH ST2                            ; 0042146f
    FSUBP ST5,ST0                       ; 00421471
    FSUBP ST3,ST0                       ; 00421473
    FSUBP                               ; 00421475
    FXCH                                ; 00421477
    FSTP float ptr [ESP + 0x8c]         ; 00421479
    FSTP float ptr [ESP + 0x90]         ; 00421480
    FSTP float ptr [ESP + 0x88]         ; 00421487
    MOVSD ES:EDI,ESI                    ; 0042148e
    MOVSD ES:EDI,ESI                    ; 0042148f
    MOVSD ES:EDI,ESI                    ; 00421490
    CMP EDX,EAX                         ; 00421491
    JZ 0x004214bf                       ; 00421493
        ;   XREF to: 004214bf (CONDITIONAL_JUMP)  ; LAB_004214bf
    MOV EAX,dword ptr [ESP + 0x130]     ; 00421495
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042149c
    MOV EAX,dword ptr [ESP + 0x134]     ; 004214a3
    MOV dword ptr [ESP + 0xf8],EAX      ; 004214aa
    MOV EAX,dword ptr [ESP + 0x138]     ; 004214b1
    MOV dword ptr [ESP + 0xfc],EAX      ; 004214b8
    FLD float ptr [ESP + 0xf8]          ; 004214bf
        ;   Label: LAB_004214bf
    FMUL ST0                            ; 004214c6
    FLD float ptr [ESP + 0xf4]          ; 004214c8
    FMUL ST0                            ; 004214cf
    FADDP                               ; 004214d1
    FLD float ptr [ESP + 0xfc]          ; 004214d3
    FMUL ST0                            ; 004214da
    FADDP                               ; 004214dc
    FSQRT                               ; 004214de
    FLDZ                                ; 004214e0
    FXCH                                ; 004214e2
    FSTP float ptr [ESP + 0x184]        ; 004214e4
    FCOMP float ptr [ESP + 0x184]       ; 004214eb
    FNSTSW AX                           ; 004214f2
    SAHF                                ; 004214f4
    JNC 0x00421795                      ; 004214f5
        ;   XREF to: 00421795 (CONDITIONAL_JUMP)  ; LAB_00421795
    FLD1                                ; 004214fb
    FLD float ptr [ESP + 0xf4]          ; 004214fd
    FXCH                                ; 00421504
    FDIV float ptr [ESP + 0x184]        ; 00421506
    FXCH                                ; 0042150d
    FMUL ST1                            ; 0042150f
    FLD float ptr [ESP + 0xf8]          ; 00421511
    FMUL ST2                            ; 00421518
    FLD float ptr [ESP + 0xfc]          ; 0042151a
    FMULP ST3                           ; 00421521
    FXCH                                ; 00421523
    FSTP float ptr [ESP + 0xf4]         ; 00421525
    FSTP float ptr [ESP + 0xf8]         ; 0042152c
    FSTP float ptr [ESP + 0xfc]         ; 00421533
    FLD float ptr [ESP + 0x74]          ; 0042153a
        ;   Label: LAB_0042153a
    FMUL ST0                            ; 0042153e
    FLD float ptr [ESP + 0x70]          ; 00421540
    FMUL ST0                            ; 00421544
    FADDP                               ; 00421546
    FLD float ptr [ESP + 0x78]          ; 00421548
    FMUL ST0                            ; 0042154c
    FADDP                               ; 0042154e
    FSQRT                               ; 00421550
    FLDZ                                ; 00421552
    FXCH                                ; 00421554
    FSTP float ptr [ESP + 0x17c]        ; 00421556
    FCOMP float ptr [ESP + 0x17c]       ; 0042155d
    FNSTSW AX                           ; 00421564
    SAHF                                ; 00421566
    JNC 0x004217b1                      ; 00421567
        ;   XREF to: 004217b1 (CONDITIONAL_JUMP)  ; LAB_004217b1
    FLD1                                ; 0042156d
    FLD float ptr [ESP + 0x70]          ; 0042156f
    FXCH                                ; 00421573
    FDIV float ptr [ESP + 0x17c]        ; 00421575
    FXCH                                ; 0042157c
    FMUL ST1                            ; 0042157e
    FLD float ptr [ESP + 0x74]          ; 00421580
    FMUL ST2                            ; 00421584
    FLD float ptr [ESP + 0x78]          ; 00421586
    FMULP ST3                           ; 0042158a
    FXCH                                ; 0042158c
    FSTP float ptr [ESP + 0x70]         ; 0042158e
    FSTP float ptr [ESP + 0x74]         ; 00421592
    FSTP float ptr [ESP + 0x78]         ; 00421596
    FLD float ptr [ESP + 0x38]          ; 0042159a
        ;   Label: LAB_0042159a
    FMUL ST0                            ; 0042159e
    FLD float ptr [ESP + 0x34]          ; 004215a0
    FMUL ST0                            ; 004215a4
    FADDP                               ; 004215a6
    FLD float ptr [ESP + 0x3c]          ; 004215a8
    FMUL ST0                            ; 004215ac
    FADDP                               ; 004215ae
    FSQRT                               ; 004215b0
    FLDZ                                ; 004215b2
    FXCH                                ; 004215b4
    FSTP float ptr [ESP + 0x180]        ; 004215b6
    FCOMP float ptr [ESP + 0x180]       ; 004215bd
    FNSTSW AX                           ; 004215c4
    SAHF                                ; 004215c6
    JNC 0x004217c4                      ; 004215c7
        ;   XREF to: 004217c4 (CONDITIONAL_JUMP)  ; LAB_004217c4
    FLD1                                ; 004215cd
    FLD float ptr [ESP + 0x34]          ; 004215cf
    FXCH                                ; 004215d3
    FDIV float ptr [ESP + 0x180]        ; 004215d5
    FXCH                                ; 004215dc
    FMUL ST1                            ; 004215de
    FLD float ptr [ESP + 0x38]          ; 004215e0
    FMUL ST2                            ; 004215e4
    FLD float ptr [ESP + 0x3c]          ; 004215e6
    FMULP ST3                           ; 004215ea
    FXCH                                ; 004215ec
    FSTP float ptr [ESP + 0x34]         ; 004215ee
    FSTP float ptr [ESP + 0x38]         ; 004215f2
    FSTP float ptr [ESP + 0x3c]         ; 004215f6
    MOV EAX,dword ptr [ESP + 0x70]      ; 004215fa
        ;   Label: LAB_004215fa
    MOV dword ptr [ESP + 0xc],EAX       ; 004215fe
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00421602
    MOV dword ptr [ESP + 0x10],EAX      ; 00421609
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042160d
    MOV dword ptr [ESP + 0x14],EAX      ; 00421611
    MOV EAX,dword ptr [ESP + 0x74]      ; 00421615
    MOV dword ptr [ESP + 0x18],EAX      ; 00421619
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0042161d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00421624
    MOV EAX,dword ptr [ESP + 0x38]      ; 00421628
    MOV dword ptr [ESP + 0x20],EAX      ; 0042162c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00421630
    MOV dword ptr [ESP + 0x24],EAX      ; 00421634
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00421638
    MOV dword ptr [ESP + 0x28],EAX      ; 0042163f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00421643
    MOV dword ptr [ESP + 0x2c],EAX      ; 00421647
    LEA EAX,[ESP + 0xc]                 ; 0042164b
    PUSH EAX                            ; 0042164f
    LEA ESI,[ESP + 0xb0]                ; 00421650
    LEA EDI,[ESP + 0x80]                ; 00421657
    CALL core_dirmat.cpp_FUN_004496e0   ; 0042165e
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    ADD ESP,0x4                         ; 00421663
    LEA ESI,[ESP + 0xac]                ; 00421666
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042166d
    LEA EAX,[ESP + 0x7c]                ; 00421670
    ADD EBX,0x14                        ; 00421674
    MOVSD ES:EDI,ESI                    ; 00421677
    MOVSD ES:EDI,ESI                    ; 00421678
    MOVSD ES:EDI,ESI                    ; 00421679
    CMP EBX,EAX                         ; 0042167a
    JNZ 0x004217d7                      ; 0042167c
        ;   XREF to: 004217d7 (CONDITIONAL_JUMP)  ; LAB_004217d7
    MOV ESP,EBP                         ; 00421682
        ;   Label: LAB_00421682
    POP EBP                             ; 00421684
    POP EDI                             ; 00421685
    POP ESI                             ; 00421686
    POP EBX                             ; 00421687
    RET                                 ; 00421688
    MOV EDX,dword ptr [EAX + 0x30]      ; 00421689
        ;   Label: LAB_00421689
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042168c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00421693
    SUB EAX,EDX                         ; 00421696
    MOV EBX,dword ptr [EBX + 0x17738]   ; 00421698
    LEA EDX,[EAX*0x4 + 0x0]             ; 0042169e
    MOV EAX,dword ptr [EBX + 0x2234]    ; 004216a5
    LEA EBX,[ESP + 0x40]                ; 004216ab
    ADD EAX,EDX                         ; 004216af
    FILD dword ptr [EAX]                ; 004216b1
    FMUL float ptr [0x005f3e18]         ; 004216b3 | DAT_005f3e18
    FSTP float ptr [EBX]                ; 004216b9
    FILD dword ptr [EAX + 0x4]          ; 004216bb
    FMUL float ptr [0x005f3e18]         ; 004216be | DAT_005f3e18
    FSTP float ptr [EBX + 0x4]          ; 004216c4
    FILD dword ptr [EAX + 0x8]          ; 004216c7
    FMUL float ptr [0x005f3e18]         ; 004216ca | DAT_005f3e18
    FSTP float ptr [EBX + 0x8]          ; 004216d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004216d3
    ADD EAX,0x1773c                     ; 004216d6
    PUSH EAX                            ; 004216db
    LEA EAX,[ESP + 0x44]                ; 004216dc
    PUSH EAX                            ; 004216e0
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005915b0 ; 004216e1
        ;   XREF to: 005915b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_005915b0()
    ADD ESP,0x8                         ; 004216e6
    LEA EAX,[ESP + 0x40]                ; 004216e9
    PUSH EAX                            ; 004216ed
    MOV ESI,dword ptr [EBP + 0x18]      ; 004216ee
    PUSH dword ptr [ESP + 0x4]          ; 004216f1
    PUSH ESI                            ; 004216f5
    MOV EDI,dword ptr [EBP + 0x14]      ; 004216f6
    PUSH EDI                            ; 004216f9
    CALL core_bugs.cpp_FUN_00420840     ; 004216fa
        ;   XREF to: 00420840 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00420840()
    ADD ESP,0x10                        ; 004216ff
    TEST EAX,EAX                        ; 00421702
    JZ 0x00421682                       ; 00421704
        ;   XREF to: 00421682 (CONDITIONAL_JUMP)  ; LAB_00421682
    PUSH ESI                            ; 0042170a
    PUSH EDI                            ; 0042170b
    CALL core_bugs.cpp_FUN_00421800     ; 0042170c
        ;   XREF to: 00421800 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00421800(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 00421711
    MOV dword ptr [ESI + 0x34],0x0      ; 00421714
    MOV ESP,EBP                         ; 0042171b
    POP EBP                             ; 0042171d
    POP EDI                             ; 0042171e
    POP ESI                             ; 0042171f
    POP EBX                             ; 00421720
    RET                                 ; 00421721
    MOV ECX,dword ptr [EBP + 0x18]      ; 00421722
        ;   Label: LAB_00421722
    PUSH ECX                            ; 00421725
    MOV EBX,dword ptr [EBP + 0x14]      ; 00421726
    PUSH EBX                            ; 00421729
    CALL core_bugs.cpp_FUN_00421800     ; 0042172a
        ;   XREF to: 00421800 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00421800(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 0042172f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00421732
    MOV dword ptr [EAX + 0x34],0x0      ; 00421735
    JMP 0x00420f31                      ; 0042173c
        ;   XREF to: 00420f31 (UNCONDITIONAL_JUMP)  ; LAB_00420f31
    MOV ECX,dword ptr [EBP + 0x18]      ; 00421741
        ;   Label: LAB_00421741
    PUSH ECX                            ; 00421744
    PUSH ESI                            ; 00421745
    CALL core_bugs.cpp_FUN_00421800     ; 00421746
        ;   XREF to: 00421800 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00421800(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 0042174b
    FLD float ptr [ESP + 0x4]           ; 0042174e
    FLD1                                ; 00421752
    FSUBRP                              ; 00421754
    FDIV float ptr [ESP + 0x8]          ; 00421756
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042175a
    FLD float ptr [EAX + 0x34]          ; 0042175d
    FADD float ptr [0x005cca69]         ; 00421760 | DAT_005cca69
    FLD float ptr [ESP]                 ; 00421766
    FXCH ST2                            ; 00421769
    FSUBR ST0,ST2                       ; 0042176b
    FXCH                                ; 0042176d
    FSTP float ptr [EAX + 0x34]         ; 0042176f
    FSTP ST1                            ; 00421772
    FST float ptr [ESP]                 ; 00421774
    FCOMP double ptr [0x005cca71]       ; 00421777 | DAT_005cca71
    FNSTSW AX                           ; 0042177d
    SAHF                                ; 0042177f
    JC 0x00420eff                       ; 00421780
        ;   XREF to: 00420eff (CONDITIONAL_JUMP)  ; LAB_00420eff
    INC EBX                             ; 00421786
    CMP EBX,0x3                         ; 00421787
    JL 0x00420ed7                       ; 0042178a
        ;   XREF to: 00420ed7 (CONDITIONAL_JUMP)  ; LAB_00420ed7
    JMP 0x00420eff                      ; 00421790
        ;   XREF to: 00420eff (UNCONDITIONAL_JUMP)  ; LAB_00420eff
    XOR EAX,EAX                         ; 00421795
        ;   Label: LAB_00421795
    MOV dword ptr [ESP + 0xf8],EAX      ; 00421797
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042179e
    MOV dword ptr [ESP + 0xfc],EAX      ; 004217a5
    JMP 0x0042153a                      ; 004217ac
        ;   XREF to: 0042153a (UNCONDITIONAL_JUMP)  ; LAB_0042153a
    XOR EBX,EBX                         ; 004217b1
        ;   Label: LAB_004217b1
    MOV dword ptr [ESP + 0x74],EBX      ; 004217b3
    MOV dword ptr [ESP + 0x70],EBX      ; 004217b7
    MOV dword ptr [ESP + 0x78],EBX      ; 004217bb
    JMP 0x0042159a                      ; 004217bf
        ;   XREF to: 0042159a (UNCONDITIONAL_JUMP)  ; LAB_0042159a
    XOR EAX,EAX                         ; 004217c4
        ;   Label: LAB_004217c4
    MOV dword ptr [ESP + 0x38],EAX      ; 004217c6
    MOV dword ptr [ESP + 0x34],EAX      ; 004217ca
    MOV dword ptr [ESP + 0x3c],EAX      ; 004217ce
    JMP 0x004215fa                      ; 004217d2
        ;   XREF to: 004215fa (UNCONDITIONAL_JUMP)  ; LAB_004215fa
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004217d7
        ;   Label: LAB_004217d7
    MOV dword ptr [EBX],EAX             ; 004217db
    MOV EAX,dword ptr [ESP + 0x80]      ; 004217dd
    MOV dword ptr [EBX + 0x4],EAX       ; 004217e4
    MOV EAX,dword ptr [ESP + 0x84]      ; 004217e7
    MOV dword ptr [EBX + 0x8],EAX       ; 004217ee
    MOV ESP,EBP                         ; 004217f1
    POP EBP                             ; 004217f3
    POP EDI                             ; 004217f4
    POP ESI                             ; 004217f5
    POP EBX                             ; 004217f6
    RET                                 ; 004217f7

