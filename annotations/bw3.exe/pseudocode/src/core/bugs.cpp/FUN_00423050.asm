; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00423050(CBugs *param_1,SBug *param_2,float param_3)
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
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570 at 004226e2
;
; Referenced Globals:
;   undefined4 DAT_005b7891
;   undefined4 DAT_005b7899
;   undefined4 DAT_005dcbb8
;   undefined4 DAT_005dcbcc
;
; Called Functions:
;   core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004239c0
;   core_bugs.cpp_FUN_00422a00
;   core_dirmat.cpp_FUN_0045b9b0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_xform.cpp_FUN_00583260
;   core_xform.cpp_transformVector3x4InPlace_FUN_005832e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423050
        ;   Label: core_bugs.cpp_FUN_00423050
    PUSH ESI                            ; 00423051
    PUSH EDI                            ; 00423052
    PUSH EBP                            ; 00423053
    MOV EBP,ESP                         ; 00423054
    SUB ESP,0x190                       ; 00423056
    AND ESP,0xfffffff8                  ; 0042305c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042305f
    MOV dword ptr [ESP],EAX             ; 00423062
    MOV EAX,dword ptr [EBP + 0x18]      ; 00423065
    CMP dword ptr [EAX + 0x2c],0x0      ; 00423068
    JL 0x00423849                       ; 0042306c
        ;   XREF to: 00423849 (CONDITIONAL_JUMP)  ; LAB_00423849
    FLD float ptr [EAX + 0x38]          ; 00423072
    FLDZ                                ; 00423075
    FCOMPP                              ; 00423077
    FNSTSW AX                           ; 00423079
    SAHF                                ; 0042307b
    JNC 0x004238e2                      ; 0042307c
        ;   XREF to: 004238e2 (CONDITIONAL_JUMP)  ; LAB_004238e2
    MOV EAX,dword ptr [EBP + 0x18]      ; 00423082
    FLD float ptr [0x005dcbcc]          ; 00423085 | DAT_005dcbcc
    FDIV float ptr [EAX + 0x38]         ; 0042308b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042308e
    XOR EBX,EBX                         ; 00423091
    FSTP float ptr [ESP + 0x8]          ; 00423093
    FLD float ptr [ESP]                 ; 00423097
        ;   Label: LAB_00423097
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042309a
    FMUL float ptr [ESP + 0x8]          ; 0042309d
    MOV EAX,dword ptr [EAX + 0x34]      ; 004230a1
    MOV dword ptr [ESP + 0x4],EAX       ; 004230a4
    FADD float ptr [ESP + 0x4]          ; 004230a8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004230ac
    FST float ptr [EAX + 0x34]          ; 004230af
    FLD1                                ; 004230b2
    FCOMPP                              ; 004230b4
    FNSTSW AX                           ; 004230b6
    SAHF                                ; 004230b8
    JBE 0x00423901                      ; 004230b9
        ;   XREF to: 00423901 (CONDITIONAL_JUMP)  ; LAB_00423901
    MOV EAX,dword ptr [EBP + 0x18]      ; 004230bf
        ;   Label: LAB_004230bf
    FLD float ptr [EAX + 0x34]          ; 004230c2
    FLDZ                                ; 004230c5
    FCOMPP                              ; 004230c7
    FNSTSW AX                           ; 004230c9
    SAHF                                ; 004230cb
    JBE 0x004230d8                      ; 004230cc
        ;   XREF to: 004230d8 (CONDITIONAL_JUMP)  ; LAB_004230d8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004230ce
    MOV dword ptr [EAX + 0x34],0x0      ; 004230d1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004230d8
        ;   Label: LAB_004230d8
    FLD float ptr [EAX + 0x34]          ; 004230db
    FLD1                                ; 004230de
    FCOMPP                              ; 004230e0
    FNSTSW AX                           ; 004230e2
    SAHF                                ; 004230e4
    JNC 0x004230f1                      ; 004230e5
        ;   XREF to: 004230f1 (CONDITIONAL_JUMP)  ; LAB_004230f1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004230e7
    MOV dword ptr [EAX + 0x34],0x3f800000 ; 004230ea
    MOV EDX,dword ptr [EBP + 0x18]      ; 004230f1
        ;   Label: LAB_004230f1
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004230f4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004230f7
    MOV EBX,dword ptr [EBP + 0x14]      ; 004230fe
    SUB EAX,EDX                         ; 00423101
    MOV EBX,dword ptr [EBX + 0x13820]   ; 00423103
    LEA EDX,[EAX*0x4 + 0x0]             ; 00423109
    MOV EAX,dword ptr [EBX + 0x2324]    ; 00423110
    LEA EBX,[ESP + 0x64]                ; 00423116
    ADD EAX,EDX                         ; 0042311a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0042311c
    FILD dword ptr [EAX]                ; 0042311f
    FMUL float ptr [0x005dcbb8]         ; 00423121 | DAT_005dcbb8
    FSTP float ptr [EBX]                ; 00423127
    FILD dword ptr [EAX + 0x4]          ; 00423129
    FMUL float ptr [0x005dcbb8]         ; 0042312c | DAT_005dcbb8
    FSTP float ptr [EBX + 0x4]          ; 00423132
    FILD dword ptr [EAX + 0x8]          ; 00423135
    FMUL float ptr [0x005dcbb8]         ; 00423138 | DAT_005dcbb8
    FSTP float ptr [EBX + 0x8]          ; 0042313e
    MOV EDX,dword ptr [EDX + 0x30]      ; 00423141
    LEA EAX,[EDX*0x4 + 0x0]             ; 00423144
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042314b
    SUB EAX,EDX                         ; 0042314e
    MOV EBX,dword ptr [EBX + 0x13820]   ; 00423150
    LEA EDX,[EAX*0x4 + 0x0]             ; 00423156
    MOV EAX,dword ptr [EBX + 0x2324]    ; 0042315d
    LEA EBX,[ESP + 0xb8]                ; 00423163
    ADD EAX,EDX                         ; 0042316a
    FILD dword ptr [EAX]                ; 0042316c
    FMUL float ptr [0x005dcbb8]         ; 0042316e | DAT_005dcbb8
    FSTP float ptr [EBX]                ; 00423174
    FILD dword ptr [EAX + 0x4]          ; 00423176
    FMUL float ptr [0x005dcbb8]         ; 00423179 | DAT_005dcbb8
    FSTP float ptr [EBX + 0x4]          ; 0042317f
    FILD dword ptr [EAX + 0x8]          ; 00423182
    FMUL float ptr [0x005dcbb8]         ; 00423185 | DAT_005dcbb8
    FSTP float ptr [EBX + 0x8]          ; 0042318b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042318e
    FLD float ptr [ESP + 0xb8]          ; 00423191
    FMUL float ptr [EAX + 0x34]         ; 00423198
    FLD float ptr [ESP + 0xbc]          ; 0042319b
    FMUL float ptr [EAX + 0x34]         ; 004231a2
    FLD float ptr [ESP + 0xc0]          ; 004231a5
    FMUL float ptr [EAX + 0x34]         ; 004231ac
    LEA EDI,[ESP + 0xc4]                ; 004231af
    LEA ESI,[ESP + 0x4c]                ; 004231b6
    FXCH ST2                            ; 004231ba
    FSTP float ptr [ESP + 0x4c]         ; 004231bc
    FSTP float ptr [ESP + 0x50]         ; 004231c0
    FSTP float ptr [ESP + 0x54]         ; 004231c4
    MOVSD ES:EDI,ESI                    ; 004231c8
    MOVSD ES:EDI,ESI                    ; 004231c9
    MOVSD ES:EDI,ESI                    ; 004231ca
    FLD1                                ; 004231cb
    FSUB float ptr [EAX + 0x34]         ; 004231cd
    FLD float ptr [ESP + 0x64]          ; 004231d0
    FXCH                                ; 004231d4
    FSTP float ptr [ESP + 0x188]        ; 004231d6
    FMUL float ptr [ESP + 0x188]        ; 004231dd
    FLD float ptr [ESP + 0x68]          ; 004231e4
    FMUL float ptr [ESP + 0x188]        ; 004231e8
    FLD float ptr [ESP + 0x6c]          ; 004231ef
    FMUL float ptr [ESP + 0x188]        ; 004231f3
    LEA EDI,[ESP + 0x118]               ; 004231fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 00423201
    LEA ESI,[ESP + 0xa0]                ; 00423204
    ADD EAX,0x13824                     ; 0042320b
    FXCH ST2                            ; 00423210
    FSTP float ptr [ESP + 0xa0]         ; 00423212
    FSTP float ptr [ESP + 0xa4]         ; 00423219
    FSTP float ptr [ESP + 0xa8]         ; 00423220
    MOVSD ES:EDI,ESI                    ; 00423227
    MOVSD ES:EDI,ESI                    ; 00423228
    MOVSD ES:EDI,ESI                    ; 00423229
    PUSH EAX                            ; 0042322a
    FLD float ptr [ESP + 0x11c]         ; 0042322b
    FLD float ptr [ESP + 0x120]         ; 00423232
    FLD float ptr [ESP + 0x124]         ; 00423239
    LEA EAX,[ESP + 0x104]               ; 00423240
    LEA EDI,[ESP + 0x104]               ; 00423247
    LEA ESI,[ESP + 0x158]               ; 0042324e
    FXCH ST2                            ; 00423255
    FADD float ptr [ESP + 0xc8]         ; 00423257
    FXCH                                ; 0042325e
    FADD float ptr [ESP + 0xcc]         ; 00423260
    FXCH ST2                            ; 00423267
    FADD float ptr [ESP + 0xd0]         ; 00423269
    FXCH                                ; 00423270
    FSTP float ptr [ESP + 0x158]        ; 00423272
    FXCH                                ; 00423279
    FSTP float ptr [ESP + 0x15c]        ; 0042327b
    FSTP float ptr [ESP + 0x160]        ; 00423282
    MOVSD ES:EDI,ESI                    ; 00423289
    MOVSD ES:EDI,ESI                    ; 0042328a
    MOVSD ES:EDI,ESI                    ; 0042328b
    PUSH EAX                            ; 0042328c
    LEA ESI,[ESP + 0x168]               ; 0042328d
    LEA EDI,[ESP + 0x9c]                ; 00423294
    CALL core_xform.cpp_FUN_00583260    ; 0042329b
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 004232a0
    LEA ESI,[ESP + 0x160]               ; 004232a3
    MOV EBX,dword ptr [EBP + 0x18]      ; 004232aa
    LEA EAX,[ESP + 0x94]                ; 004232ad
    ADD EBX,0x8                         ; 004232b4
    MOVSD ES:EDI,ESI                    ; 004232b7
    MOVSD ES:EDI,ESI                    ; 004232b8
    MOVSD ES:EDI,ESI                    ; 004232b9
    CMP EBX,EAX                         ; 004232ba
    JZ 0x004232db                       ; 004232bc
        ;   XREF to: 004232db (CONDITIONAL_JUMP)  ; LAB_004232db
    MOV EAX,dword ptr [ESP + 0x94]      ; 004232be
    MOV dword ptr [EBX],EAX             ; 004232c5
    MOV EAX,dword ptr [ESP + 0x98]      ; 004232c7
    MOV dword ptr [EBX + 0x4],EAX       ; 004232ce
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004232d1
    MOV dword ptr [EBX + 0x8],EAX       ; 004232d8
    FLD float ptr [ESP + 0xb8]          ; 004232db
        ;   Label: LAB_004232db
    FLD float ptr [ESP + 0xbc]          ; 004232e2
    FLD float ptr [ESP + 0xc0]          ; 004232e9
    LEA EDI,[ESP + 0x34]                ; 004232f0
    LEA ESI,[ESP + 0x148]               ; 004232f4
    MOV EAX,dword ptr [EBP + 0x18]      ; 004232fb
    FXCH ST2                            ; 004232fe
    FSUB float ptr [ESP + 0x64]         ; 00423300
    FXCH                                ; 00423304
    FSUB float ptr [ESP + 0x68]         ; 00423306
    FXCH ST2                            ; 0042330a
    FSUB float ptr [ESP + 0x6c]         ; 0042330c
    FXCH                                ; 00423310
    FSTP float ptr [ESP + 0x148]        ; 00423312
    FXCH                                ; 00423319
    FSTP float ptr [ESP + 0x14c]        ; 0042331b
    FSTP float ptr [ESP + 0x150]        ; 00423322
    MOVSD ES:EDI,ESI                    ; 00423329
    MOVSD ES:EDI,ESI                    ; 0042332a
    MOVSD ES:EDI,ESI                    ; 0042332b
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0042332c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042332f
    ADD EAX,EDX                         ; 00423336
    MOV EDX,dword ptr [EBP + 0x14]      ; 00423338
    MOV EDX,dword ptr [EDX + EAX*0x8 + 0x13860] ; 0042333b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00423342
    MOV EDI,dword ptr [EAX + 0x13820]   ; 00423345
    LEA ESI,[EDX*0x8 + 0x0]             ; 0042334b
    PUSH EDI                            ; 00423352
    MOV EBX,dword ptr [EAX + 0x13854]   ; 00423353
    ADD ESI,EDX                         ; 00423359
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0042335b
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESI,ESI                         ; 00423360
    MOV EDX,dword ptr [EAX + EBX*0x4 + 0x7c] ; 00423362
    ADD ESP,0x4                         ; 00423366
    ADD EDX,ESI                         ; 00423369
    XOR EBX,EBX                         ; 0042336b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042336d
    MOV BX,word ptr [EDX]               ; 00423370
    MOV ESI,dword ptr [EAX + 0x13820]   ; 00423373
    LEA EAX,[EBX*0x4 + 0x0]             ; 00423379
    SUB EAX,EBX                         ; 00423380
    LEA EBX,[EAX*0x4 + 0x0]             ; 00423382
    MOV EAX,dword ptr [ESI + 0x2324]    ; 00423389
    ADD EAX,EBX                         ; 0042338f
    LEA EBX,[ESP + 0x64]                ; 00423391
    FILD dword ptr [EAX]                ; 00423395
    FMUL float ptr [0x005dcbb8]         ; 00423397 | DAT_005dcbb8
    FSTP float ptr [EBX]                ; 0042339d
    FILD dword ptr [EAX + 0x4]          ; 0042339f
    FMUL float ptr [0x005dcbb8]         ; 004233a2 | DAT_005dcbb8
    FSTP float ptr [EBX + 0x4]          ; 004233a8
    FILD dword ptr [EAX + 0x8]          ; 004233ab
    FMUL float ptr [0x005dcbb8]         ; 004233ae | DAT_005dcbb8
    FSTP float ptr [EBX + 0x8]          ; 004233b4
    XOR EBX,EBX                         ; 004233b7
    MOV BX,word ptr [EDX + 0x2]         ; 004233b9
    LEA EAX,[EBX*0x4 + 0x0]             ; 004233bd
    MOV ESI,dword ptr [EBP + 0x14]      ; 004233c4
    SUB EAX,EBX                         ; 004233c7
    MOV ESI,dword ptr [ESI + 0x13820]   ; 004233c9
    SHL EAX,0x2                         ; 004233cf
    MOV EBX,dword ptr [ESI + 0x2324]    ; 004233d2
    ADD EAX,EBX                         ; 004233d8
    LEA EBX,[ESP + 0xb8]                ; 004233da
    FILD dword ptr [EAX]                ; 004233e1
    FMUL float ptr [0x005dcbb8]         ; 004233e3 | DAT_005dcbb8
    FSTP float ptr [EBX]                ; 004233e9
    FILD dword ptr [EAX + 0x4]          ; 004233eb
    FMUL float ptr [0x005dcbb8]         ; 004233ee | DAT_005dcbb8
    FSTP float ptr [EBX + 0x4]          ; 004233f4
    FILD dword ptr [EAX + 0x8]          ; 004233f7
    FMUL float ptr [0x005dcbb8]         ; 004233fa | DAT_005dcbb8
    FSTP float ptr [EBX + 0x8]          ; 00423400
    MOV EBX,dword ptr [EBP + 0x14]      ; 00423403
    MOV DX,word ptr [EDX + 0x4]         ; 00423406
    MOV EBX,dword ptr [EBX + 0x13820]   ; 0042340a
    AND EDX,0xffff                      ; 00423410
    LEA EAX,[EDX*0x4 + 0x0]             ; 00423416
    SUB EAX,EDX                         ; 0042341d
    LEA EDI,[ESP + 0x124]               ; 0042341f
    SHL EAX,0x2                         ; 00423426
    MOV EDX,dword ptr [EBX + 0x2324]    ; 00423429
    LEA EBX,[ESP + 0xdc]                ; 0042342f
    ADD EAX,EDX                         ; 00423436
    LEA ESI,[ESP + 0x13c]               ; 00423438
    FILD dword ptr [EAX]                ; 0042343f
    FMUL float ptr [0x005dcbb8]         ; 00423441 | DAT_005dcbb8
    FSTP float ptr [EBX]                ; 00423447
    FILD dword ptr [EAX + 0x4]          ; 00423449
    FMUL float ptr [0x005dcbb8]         ; 0042344c | DAT_005dcbb8
    FSTP float ptr [EBX + 0x4]          ; 00423452
    FILD dword ptr [EAX + 0x8]          ; 00423455
    FMUL float ptr [0x005dcbb8]         ; 00423458 | DAT_005dcbb8
    FSTP float ptr [EBX + 0x8]          ; 0042345e
    FLD float ptr [ESP + 0xb8]          ; 00423461
    FLD float ptr [ESP + 0xbc]          ; 00423468
    FLD float ptr [ESP + 0xc0]          ; 0042346f
    FLD float ptr [ESP + 0xdc]          ; 00423476
    FLD float ptr [ESP + 0xe0]          ; 0042347d
    FLD float ptr [ESP + 0xe4]          ; 00423484
    FXCH ST5                            ; 0042348b
    FSUB float ptr [ESP + 0x64]         ; 0042348d
    FXCH ST4                            ; 00423491
    FSUB float ptr [ESP + 0x68]         ; 00423493
    FXCH ST3                            ; 00423497
    FSUB float ptr [ESP + 0x6c]         ; 00423499
    FXCH ST2                            ; 0042349d
    FSUB float ptr [ESP + 0xb8]         ; 0042349f
    FXCH                                ; 004234a6
    FSUB float ptr [ESP + 0xbc]         ; 004234a8
    FXCH ST5                            ; 004234af
    FSUB float ptr [ESP + 0xc0]         ; 004234b1
    FXCH ST4                            ; 004234b8
    FSTP float ptr [ESP + 0x13c]        ; 004234ba
    FXCH ST2                            ; 004234c1
    FSTP float ptr [ESP + 0x140]        ; 004234c3
    FSTP float ptr [ESP + 0x144]        ; 004234ca
    FSTP float ptr [ESP + 0x58]         ; 004234d1
    MOVSD ES:EDI,ESI                    ; 004234d5
    MOVSD ES:EDI,ESI                    ; 004234d6
    MOVSD ES:EDI,ESI                    ; 004234d7
    FXCH                                ; 004234d8
    FSTP float ptr [ESP + 0x5c]         ; 004234da
    LEA EDI,[ESP + 0xe8]                ; 004234de
    LEA ESI,[ESP + 0x58]                ; 004234e5
    FSTP float ptr [ESP + 0x60]         ; 004234e9
    MOVSD ES:EDI,ESI                    ; 004234ed
    MOVSD ES:EDI,ESI                    ; 004234ee
    MOVSD ES:EDI,ESI                    ; 004234ef
    FLD float ptr [ESP + 0x128]         ; 004234f0
    FMUL float ptr [ESP + 0xf0]         ; 004234f7
    FLD float ptr [ESP + 0x12c]         ; 004234fe
    FMUL float ptr [ESP + 0xe8]         ; 00423505
    FLD float ptr [ESP + 0x124]         ; 0042350c
    FMUL float ptr [ESP + 0xec]         ; 00423513
    FLD float ptr [ESP + 0x12c]         ; 0042351a
    FMUL float ptr [ESP + 0xec]         ; 00423521
    FLD float ptr [ESP + 0x124]         ; 00423528
    FMUL float ptr [ESP + 0xf0]         ; 0042352f
    FLD float ptr [ESP + 0x128]         ; 00423536
    FMUL float ptr [ESP + 0xe8]         ; 0042353d
    LEA EDI,[ESP + 0xf4]                ; 00423544
    LEA ESI,[ESP + 0xd0]                ; 0042354b
    FXCH ST2                            ; 00423552
    FSUBP ST5,ST0                       ; 00423554
    FSUBP ST3,ST0                       ; 00423556
    FSUBP                               ; 00423558
    FXCH ST2                            ; 0042355a
    FSTP float ptr [ESP + 0xd0]         ; 0042355c
    FSTP float ptr [ESP + 0xd4]         ; 00423563
    FSTP float ptr [ESP + 0xd8]         ; 0042356a
    MOVSD ES:EDI,ESI                    ; 00423571
    MOVSD ES:EDI,ESI                    ; 00423572
    MOVSD ES:EDI,ESI                    ; 00423573
    FLD float ptr [ESP + 0xf8]          ; 00423574
    FMUL float ptr [ESP + 0x3c]         ; 0042357b
    FLD float ptr [ESP + 0xfc]          ; 0042357f
    FMUL float ptr [ESP + 0x34]         ; 00423586
    FLD float ptr [ESP + 0xf4]          ; 0042358a
    FMUL float ptr [ESP + 0x38]         ; 00423591
    FLD float ptr [ESP + 0xfc]          ; 00423595
    FMUL float ptr [ESP + 0x38]         ; 0042359c
    FLD float ptr [ESP + 0xf4]          ; 004235a0
    FMUL float ptr [ESP + 0x3c]         ; 004235a7
    FLD float ptr [ESP + 0xf8]          ; 004235ab
    FMUL float ptr [ESP + 0x34]         ; 004235b2
    LEA EDI,[ESP + 0x70]                ; 004235b6
    LEA ESI,[ESP + 0x10c]               ; 004235ba
    FXCH ST2                            ; 004235c1
    FSUBP ST5,ST0                       ; 004235c3
    FSUBP ST3,ST0                       ; 004235c5
    FSUBP                               ; 004235c7
    FXCH ST2                            ; 004235c9
    FSTP float ptr [ESP + 0x10c]        ; 004235cb
    FSTP float ptr [ESP + 0x110]        ; 004235d2
    FSTP float ptr [ESP + 0x114]        ; 004235d9
    MOVSD ES:EDI,ESI                    ; 004235e0
    MOVSD ES:EDI,ESI                    ; 004235e1
    MOVSD ES:EDI,ESI                    ; 004235e2
    FLD float ptr [ESP + 0x38]          ; 004235e3
    FMUL float ptr [ESP + 0x78]         ; 004235e7
    FLD float ptr [ESP + 0x3c]          ; 004235eb
    FMUL float ptr [ESP + 0x70]         ; 004235ef
    FLD float ptr [ESP + 0x34]          ; 004235f3
    FMUL float ptr [ESP + 0x74]         ; 004235f7
    FLD float ptr [ESP + 0x3c]          ; 004235fb
    FMUL float ptr [ESP + 0x74]         ; 004235ff
    FLD float ptr [ESP + 0x34]          ; 00423603
    FMUL float ptr [ESP + 0x78]         ; 00423607
    FLD float ptr [ESP + 0x38]          ; 0042360b
    FMUL float ptr [ESP + 0x70]         ; 0042360f
    LEA EDI,[ESP + 0x130]               ; 00423613
    LEA ESI,[ESP + 0x88]                ; 0042361a
    LEA EAX,[ESP + 0x130]               ; 00423621
    LEA EDX,[ESP + 0xf4]                ; 00423628
    FXCH ST2                            ; 0042362f
    FSUBP ST5,ST0                       ; 00423631
    FSUBP ST3,ST0                       ; 00423633
    FSUBP                               ; 00423635
    FXCH                                ; 00423637
    FSTP float ptr [ESP + 0x8c]         ; 00423639
    FSTP float ptr [ESP + 0x90]         ; 00423640
    FSTP float ptr [ESP + 0x88]         ; 00423647
    MOVSD ES:EDI,ESI                    ; 0042364e
    MOVSD ES:EDI,ESI                    ; 0042364f
    MOVSD ES:EDI,ESI                    ; 00423650
    CMP EDX,EAX                         ; 00423651
    JZ 0x0042367f                       ; 00423653
        ;   XREF to: 0042367f (CONDITIONAL_JUMP)  ; LAB_0042367f
    MOV EAX,dword ptr [ESP + 0x130]     ; 00423655
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042365c
    MOV EAX,dword ptr [ESP + 0x134]     ; 00423663
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042366a
    MOV EAX,dword ptr [ESP + 0x138]     ; 00423671
    MOV dword ptr [ESP + 0xfc],EAX      ; 00423678
    FLD float ptr [ESP + 0xf8]          ; 0042367f
        ;   Label: LAB_0042367f
    FMUL ST0                            ; 00423686
    FLD float ptr [ESP + 0xf4]          ; 00423688
    FMUL ST0                            ; 0042368f
    FADDP                               ; 00423691
    FLD float ptr [ESP + 0xfc]          ; 00423693
    FMUL ST0                            ; 0042369a
    FADDP                               ; 0042369c
    FSQRT                               ; 0042369e
    FLDZ                                ; 004236a0
    FXCH                                ; 004236a2
    FSTP float ptr [ESP + 0x184]        ; 004236a4
    FCOMP float ptr [ESP + 0x184]       ; 004236ab
    FNSTSW AX                           ; 004236b2
    SAHF                                ; 004236b4
    JNC 0x00423955                      ; 004236b5
        ;   XREF to: 00423955 (CONDITIONAL_JUMP)  ; LAB_00423955
    FLD1                                ; 004236bb
    FLD float ptr [ESP + 0xf4]          ; 004236bd
    FXCH                                ; 004236c4
    FDIV float ptr [ESP + 0x184]        ; 004236c6
    FXCH                                ; 004236cd
    FMUL ST1                            ; 004236cf
    FLD float ptr [ESP + 0xf8]          ; 004236d1
    FMUL ST2                            ; 004236d8
    FLD float ptr [ESP + 0xfc]          ; 004236da
    FMULP ST3                           ; 004236e1
    FXCH                                ; 004236e3
    FSTP float ptr [ESP + 0xf4]         ; 004236e5
    FSTP float ptr [ESP + 0xf8]         ; 004236ec
    FSTP float ptr [ESP + 0xfc]         ; 004236f3
    FLD float ptr [ESP + 0x74]          ; 004236fa
        ;   Label: LAB_004236fa
    FMUL ST0                            ; 004236fe
    FLD float ptr [ESP + 0x70]          ; 00423700
    FMUL ST0                            ; 00423704
    FADDP                               ; 00423706
    FLD float ptr [ESP + 0x78]          ; 00423708
    FMUL ST0                            ; 0042370c
    FADDP                               ; 0042370e
    FSQRT                               ; 00423710
    FLDZ                                ; 00423712
    FXCH                                ; 00423714
    FSTP float ptr [ESP + 0x17c]        ; 00423716
    FCOMP float ptr [ESP + 0x17c]       ; 0042371d
    FNSTSW AX                           ; 00423724
    SAHF                                ; 00423726
    JNC 0x00423971                      ; 00423727
        ;   XREF to: 00423971 (CONDITIONAL_JUMP)  ; LAB_00423971
    FLD1                                ; 0042372d
    FLD float ptr [ESP + 0x70]          ; 0042372f
    FXCH                                ; 00423733
    FDIV float ptr [ESP + 0x17c]        ; 00423735
    FXCH                                ; 0042373c
    FMUL ST1                            ; 0042373e
    FLD float ptr [ESP + 0x74]          ; 00423740
    FMUL ST2                            ; 00423744
    FLD float ptr [ESP + 0x78]          ; 00423746
    FMULP ST3                           ; 0042374a
    FXCH                                ; 0042374c
    FSTP float ptr [ESP + 0x70]         ; 0042374e
    FSTP float ptr [ESP + 0x74]         ; 00423752
    FSTP float ptr [ESP + 0x78]         ; 00423756
    FLD float ptr [ESP + 0x38]          ; 0042375a
        ;   Label: LAB_0042375a
    FMUL ST0                            ; 0042375e
    FLD float ptr [ESP + 0x34]          ; 00423760
    FMUL ST0                            ; 00423764
    FADDP                               ; 00423766
    FLD float ptr [ESP + 0x3c]          ; 00423768
    FMUL ST0                            ; 0042376c
    FADDP                               ; 0042376e
    FSQRT                               ; 00423770
    FLDZ                                ; 00423772
    FXCH                                ; 00423774
    FSTP float ptr [ESP + 0x180]        ; 00423776
    FCOMP float ptr [ESP + 0x180]       ; 0042377d
    FNSTSW AX                           ; 00423784
    SAHF                                ; 00423786
    JNC 0x00423984                      ; 00423787
        ;   XREF to: 00423984 (CONDITIONAL_JUMP)  ; LAB_00423984
    FLD1                                ; 0042378d
    FLD float ptr [ESP + 0x34]          ; 0042378f
    FXCH                                ; 00423793
    FDIV float ptr [ESP + 0x180]        ; 00423795
    FXCH                                ; 0042379c
    FMUL ST1                            ; 0042379e
    FLD float ptr [ESP + 0x38]          ; 004237a0
    FMUL ST2                            ; 004237a4
    FLD float ptr [ESP + 0x3c]          ; 004237a6
    FMULP ST3                           ; 004237aa
    FXCH                                ; 004237ac
    FSTP float ptr [ESP + 0x34]         ; 004237ae
    FSTP float ptr [ESP + 0x38]         ; 004237b2
    FSTP float ptr [ESP + 0x3c]         ; 004237b6
    MOV EAX,dword ptr [ESP + 0x70]      ; 004237ba
        ;   Label: LAB_004237ba
    MOV dword ptr [ESP + 0xc],EAX       ; 004237be
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004237c2
    MOV dword ptr [ESP + 0x10],EAX      ; 004237c9
    MOV EAX,dword ptr [ESP + 0x34]      ; 004237cd
    MOV dword ptr [ESP + 0x14],EAX      ; 004237d1
    MOV EAX,dword ptr [ESP + 0x74]      ; 004237d5
    MOV dword ptr [ESP + 0x18],EAX      ; 004237d9
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004237dd
    MOV dword ptr [ESP + 0x1c],EAX      ; 004237e4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004237e8
    MOV dword ptr [ESP + 0x20],EAX      ; 004237ec
    MOV EAX,dword ptr [ESP + 0x78]      ; 004237f0
    MOV dword ptr [ESP + 0x24],EAX      ; 004237f4
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004237f8
    MOV dword ptr [ESP + 0x28],EAX      ; 004237ff
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00423803
    MOV dword ptr [ESP + 0x2c],EAX      ; 00423807
    LEA EAX,[ESP + 0xc]                 ; 0042380b
    PUSH EAX                            ; 0042380f
    LEA ESI,[ESP + 0xb0]                ; 00423810
    LEA EDI,[ESP + 0x80]                ; 00423817
    CALL core_dirmat.cpp_FUN_0045b9b0   ; 0042381e
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b9b0()
    ADD ESP,0x4                         ; 00423823
    LEA ESI,[ESP + 0xac]                ; 00423826
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042382d
    LEA EAX,[ESP + 0x7c]                ; 00423830
    ADD EBX,0x14                        ; 00423834
    MOVSD ES:EDI,ESI                    ; 00423837
    MOVSD ES:EDI,ESI                    ; 00423838
    MOVSD ES:EDI,ESI                    ; 00423839
    CMP EBX,EAX                         ; 0042383a
    JNZ 0x00423997                      ; 0042383c
        ;   XREF to: 00423997 (CONDITIONAL_JUMP)  ; LAB_00423997
    MOV ESP,EBP                         ; 00423842
        ;   Label: LAB_00423842
    POP EBP                             ; 00423844
    POP EDI                             ; 00423845
    POP ESI                             ; 00423846
    POP EBX                             ; 00423847
    RET                                 ; 00423848
    MOV EDX,dword ptr [EAX + 0x30]      ; 00423849
        ;   Label: LAB_00423849
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042384c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00423853
    SUB EAX,EDX                         ; 00423856
    MOV EBX,dword ptr [EBX + 0x13820]   ; 00423858
    LEA EDX,[EAX*0x4 + 0x0]             ; 0042385e
    MOV EAX,dword ptr [EBX + 0x2324]    ; 00423865
    LEA EBX,[ESP + 0x40]                ; 0042386b
    ADD EAX,EDX                         ; 0042386f
    FILD dword ptr [EAX]                ; 00423871
    FMUL float ptr [0x005dcbb8]         ; 00423873 | DAT_005dcbb8
    FSTP float ptr [EBX]                ; 00423879
    FILD dword ptr [EAX + 0x4]          ; 0042387b
    FMUL float ptr [0x005dcbb8]         ; 0042387e | DAT_005dcbb8
    FSTP float ptr [EBX + 0x4]          ; 00423884
    FILD dword ptr [EAX + 0x8]          ; 00423887
    FMUL float ptr [0x005dcbb8]         ; 0042388a | DAT_005dcbb8
    FSTP float ptr [EBX + 0x8]          ; 00423890
    MOV EAX,dword ptr [EBP + 0x14]      ; 00423893
    ADD EAX,0x13824                     ; 00423896
    PUSH EAX                            ; 0042389b
    LEA EAX,[ESP + 0x44]                ; 0042389c
    PUSH EAX                            ; 004238a0
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005832e0 ; 004238a1
        ;   XREF to: 005832e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_005832e0()
    ADD ESP,0x8                         ; 004238a6
    LEA EAX,[ESP + 0x40]                ; 004238a9
    PUSH EAX                            ; 004238ad
    MOV ESI,dword ptr [EBP + 0x18]      ; 004238ae
    PUSH dword ptr [ESP + 0x4]          ; 004238b1
    PUSH ESI                            ; 004238b5
    MOV EDI,dword ptr [EBP + 0x14]      ; 004238b6
    PUSH EDI                            ; 004238b9
    CALL core_bugs.cpp_FUN_00422a00     ; 004238ba
        ;   XREF to: 00422a00 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00422a00()
    ADD ESP,0x10                        ; 004238bf
    TEST EAX,EAX                        ; 004238c2
    JZ 0x00423842                       ; 004238c4
        ;   XREF to: 00423842 (CONDITIONAL_JUMP)  ; LAB_00423842
    PUSH ESI                            ; 004238ca
    PUSH EDI                            ; 004238cb
    CALL core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004239c0 ; 004238cc
        ;   XREF to: 004239c0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004239c0(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 004238d1
    MOV dword ptr [ESI + 0x34],0x0      ; 004238d4
    MOV ESP,EBP                         ; 004238db
    POP EBP                             ; 004238dd
    POP EDI                             ; 004238de
    POP ESI                             ; 004238df
    POP EBX                             ; 004238e0
    RET                                 ; 004238e1
    MOV ECX,dword ptr [EBP + 0x18]      ; 004238e2
        ;   Label: LAB_004238e2
    PUSH ECX                            ; 004238e5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004238e6
    PUSH EBX                            ; 004238e9
    CALL core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004239c0 ; 004238ea
        ;   XREF to: 004239c0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004239c0(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 004238ef
    MOV EAX,dword ptr [EBP + 0x18]      ; 004238f2
    MOV dword ptr [EAX + 0x34],0x0      ; 004238f5
    JMP 0x004230f1                      ; 004238fc
        ;   XREF to: 004230f1 (UNCONDITIONAL_JUMP)  ; LAB_004230f1
    MOV ECX,dword ptr [EBP + 0x18]      ; 00423901
        ;   Label: LAB_00423901
    PUSH ECX                            ; 00423904
    PUSH ESI                            ; 00423905
    CALL core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004239c0 ; 00423906
        ;   XREF to: 004239c0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004239c0(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 0042390b
    FLD float ptr [ESP + 0x4]           ; 0042390e
    FLD1                                ; 00423912
    FSUBRP                              ; 00423914
    FDIV float ptr [ESP + 0x8]          ; 00423916
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042391a
    FLD float ptr [EAX + 0x34]          ; 0042391d
    FADD float ptr [0x005b7891]         ; 00423920 | DAT_005b7891
    FLD float ptr [ESP]                 ; 00423926
    FXCH ST2                            ; 00423929
    FSUBR ST0,ST2                       ; 0042392b
    FXCH                                ; 0042392d
    FSTP float ptr [EAX + 0x34]         ; 0042392f
    FSTP ST1                            ; 00423932
    FST float ptr [ESP]                 ; 00423934
    FCOMP double ptr [0x005b7899]       ; 00423937 | DAT_005b7899
    FNSTSW AX                           ; 0042393d
    SAHF                                ; 0042393f
    JC 0x004230bf                       ; 00423940
        ;   XREF to: 004230bf (CONDITIONAL_JUMP)  ; LAB_004230bf
    INC EBX                             ; 00423946
    CMP EBX,0x3                         ; 00423947
    JL 0x00423097                       ; 0042394a
        ;   XREF to: 00423097 (CONDITIONAL_JUMP)  ; LAB_00423097
    JMP 0x004230bf                      ; 00423950
        ;   XREF to: 004230bf (UNCONDITIONAL_JUMP)  ; LAB_004230bf
    XOR EAX,EAX                         ; 00423955
        ;   Label: LAB_00423955
    MOV dword ptr [ESP + 0xf8],EAX      ; 00423957
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042395e
    MOV dword ptr [ESP + 0xfc],EAX      ; 00423965
    JMP 0x004236fa                      ; 0042396c
        ;   XREF to: 004236fa (UNCONDITIONAL_JUMP)  ; LAB_004236fa
    XOR EBX,EBX                         ; 00423971
        ;   Label: LAB_00423971
    MOV dword ptr [ESP + 0x74],EBX      ; 00423973
    MOV dword ptr [ESP + 0x70],EBX      ; 00423977
    MOV dword ptr [ESP + 0x78],EBX      ; 0042397b
    JMP 0x0042375a                      ; 0042397f
        ;   XREF to: 0042375a (UNCONDITIONAL_JUMP)  ; LAB_0042375a
    XOR EAX,EAX                         ; 00423984
        ;   Label: LAB_00423984
    MOV dword ptr [ESP + 0x38],EAX      ; 00423986
    MOV dword ptr [ESP + 0x34],EAX      ; 0042398a
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042398e
    JMP 0x004237ba                      ; 00423992
        ;   XREF to: 004237ba (UNCONDITIONAL_JUMP)  ; LAB_004237ba
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00423997
        ;   Label: LAB_00423997
    MOV dword ptr [EBX],EAX             ; 0042399b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042399d
    MOV dword ptr [EBX + 0x4],EAX       ; 004239a4
    MOV EAX,dword ptr [ESP + 0x84]      ; 004239a7
    MOV dword ptr [EBX + 0x8],EAX       ; 004239ae
    MOV ESP,EBP                         ; 004239b1
    POP EBP                             ; 004239b3
    POP EDI                             ; 004239b4
    POP ESI                             ; 004239b5
    POP EBX                             ; 004239b6
    RET                                 ; 004239b7

