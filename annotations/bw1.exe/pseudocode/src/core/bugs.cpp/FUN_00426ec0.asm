; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_00426ec0(CBugs *param_1,SBug *param_2,float param_3)
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
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004263d0 at 0042654c
;
; Referenced Globals:
;   undefined4 DAT_005d5158
;   undefined4 DAT_005d5160
;   undefined4 DAT_005fd218
;   undefined4 DAT_005fd22c
;
; Called Functions:
;   core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830
;   core_bugs.cpp_FUN_00426870
;   core_dirmat.cpp_FUN_0045f840
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_transformVector3x4InPlace_FUN_005b5100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426ec0
        ;   Label: core_bugs.cpp_FUN_00426ec0
    PUSH ESI                            ; 00426ec1
    PUSH EDI                            ; 00426ec2
    PUSH EBP                            ; 00426ec3
    MOV EBP,ESP                         ; 00426ec4
    SUB ESP,0x190                       ; 00426ec6
    AND ESP,0xfffffff8                  ; 00426ecc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00426ecf
    MOV dword ptr [ESP],EAX             ; 00426ed2
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426ed5
    CMP dword ptr [EAX + 0x2c],0x0      ; 00426ed8
    JL 0x004276b9                       ; 00426edc
        ;   XREF to: 004276b9 (CONDITIONAL_JUMP)  ; LAB_004276b9
    FLD float ptr [EAX + 0x38]          ; 00426ee2
    FLDZ                                ; 00426ee5
    FCOMPP                              ; 00426ee7
    FNSTSW AX                           ; 00426ee9
    SAHF                                ; 00426eeb
    JNC 0x00427752                      ; 00426eec
        ;   XREF to: 00427752 (CONDITIONAL_JUMP)  ; LAB_00427752
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426ef2
    FLD float ptr [0x005fd22c]          ; 00426ef5 | DAT_005fd22c
    FDIV float ptr [EAX + 0x38]         ; 00426efb
    MOV ESI,dword ptr [EBP + 0x14]      ; 00426efe
    XOR EBX,EBX                         ; 00426f01
    FSTP float ptr [ESP + 0x8]          ; 00426f03
    FLD float ptr [ESP]                 ; 00426f07
        ;   Label: LAB_00426f07
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426f0a
    FMUL float ptr [ESP + 0x8]          ; 00426f0d
    MOV EAX,dword ptr [EAX + 0x34]      ; 00426f11
    MOV dword ptr [ESP + 0x4],EAX       ; 00426f14
    FADD float ptr [ESP + 0x4]          ; 00426f18
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426f1c
    FST float ptr [EAX + 0x34]          ; 00426f1f
    FLD1                                ; 00426f22
    FCOMPP                              ; 00426f24
    FNSTSW AX                           ; 00426f26
    SAHF                                ; 00426f28
    JBE 0x00427771                      ; 00426f29
        ;   XREF to: 00427771 (CONDITIONAL_JUMP)  ; LAB_00427771
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426f2f
        ;   Label: LAB_00426f2f
    FLD float ptr [EAX + 0x34]          ; 00426f32
    FLDZ                                ; 00426f35
    FCOMPP                              ; 00426f37
    FNSTSW AX                           ; 00426f39
    SAHF                                ; 00426f3b
    JBE 0x00426f48                      ; 00426f3c
        ;   XREF to: 00426f48 (CONDITIONAL_JUMP)  ; LAB_00426f48
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426f3e
    MOV dword ptr [EAX + 0x34],0x0      ; 00426f41
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426f48
        ;   Label: LAB_00426f48
    FLD float ptr [EAX + 0x34]          ; 00426f4b
    FLD1                                ; 00426f4e
    FCOMPP                              ; 00426f50
    FNSTSW AX                           ; 00426f52
    SAHF                                ; 00426f54
    JNC 0x00426f61                      ; 00426f55
        ;   XREF to: 00426f61 (CONDITIONAL_JUMP)  ; LAB_00426f61
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426f57
    MOV dword ptr [EAX + 0x34],0x3f800000 ; 00426f5a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00426f61
        ;   Label: LAB_00426f61
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00426f64
    LEA EAX,[EDX*0x4 + 0x0]             ; 00426f67
    MOV EBX,dword ptr [EBP + 0x14]      ; 00426f6e
    SUB EAX,EDX                         ; 00426f71
    MOV EBX,dword ptr [EBX + 0x12ea8]   ; 00426f73
    LEA EDX,[EAX*0x4 + 0x0]             ; 00426f79
    MOV EAX,dword ptr [EBX + 0x2324]    ; 00426f80
    LEA EBX,[ESP + 0x64]                ; 00426f86
    ADD EAX,EDX                         ; 00426f8a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00426f8c
    FILD dword ptr [EAX]                ; 00426f8f
    FMUL float ptr [0x005fd218]         ; 00426f91 | DAT_005fd218
    FSTP float ptr [EBX]                ; 00426f97
    FILD dword ptr [EAX + 0x4]          ; 00426f99
    FMUL float ptr [0x005fd218]         ; 00426f9c | DAT_005fd218
    FSTP float ptr [EBX + 0x4]          ; 00426fa2
    FILD dword ptr [EAX + 0x8]          ; 00426fa5
    FMUL float ptr [0x005fd218]         ; 00426fa8 | DAT_005fd218
    FSTP float ptr [EBX + 0x8]          ; 00426fae
    MOV EDX,dword ptr [EDX + 0x30]      ; 00426fb1
    LEA EAX,[EDX*0x4 + 0x0]             ; 00426fb4
    MOV EBX,dword ptr [EBP + 0x14]      ; 00426fbb
    SUB EAX,EDX                         ; 00426fbe
    MOV EBX,dword ptr [EBX + 0x12ea8]   ; 00426fc0
    LEA EDX,[EAX*0x4 + 0x0]             ; 00426fc6
    MOV EAX,dword ptr [EBX + 0x2324]    ; 00426fcd
    LEA EBX,[ESP + 0xb8]                ; 00426fd3
    ADD EAX,EDX                         ; 00426fda
    FILD dword ptr [EAX]                ; 00426fdc
    FMUL float ptr [0x005fd218]         ; 00426fde | DAT_005fd218
    FSTP float ptr [EBX]                ; 00426fe4
    FILD dword ptr [EAX + 0x4]          ; 00426fe6
    FMUL float ptr [0x005fd218]         ; 00426fe9 | DAT_005fd218
    FSTP float ptr [EBX + 0x4]          ; 00426fef
    FILD dword ptr [EAX + 0x8]          ; 00426ff2
    FMUL float ptr [0x005fd218]         ; 00426ff5 | DAT_005fd218
    FSTP float ptr [EBX + 0x8]          ; 00426ffb
    MOV EAX,dword ptr [EBP + 0x18]      ; 00426ffe
    FLD float ptr [ESP + 0xb8]          ; 00427001
    FMUL float ptr [EAX + 0x34]         ; 00427008
    FLD float ptr [ESP + 0xbc]          ; 0042700b
    FMUL float ptr [EAX + 0x34]         ; 00427012
    FLD float ptr [ESP + 0xc0]          ; 00427015
    FMUL float ptr [EAX + 0x34]         ; 0042701c
    LEA EDI,[ESP + 0xc4]                ; 0042701f
    LEA ESI,[ESP + 0x4c]                ; 00427026
    FXCH ST2                            ; 0042702a
    FSTP float ptr [ESP + 0x4c]         ; 0042702c
    FSTP float ptr [ESP + 0x50]         ; 00427030
    FSTP float ptr [ESP + 0x54]         ; 00427034
    MOVSD ES:EDI,ESI                    ; 00427038
    MOVSD ES:EDI,ESI                    ; 00427039
    MOVSD ES:EDI,ESI                    ; 0042703a
    FLD1                                ; 0042703b
    FSUB float ptr [EAX + 0x34]         ; 0042703d
    FLD float ptr [ESP + 0x64]          ; 00427040
    FXCH                                ; 00427044
    FSTP float ptr [ESP + 0x188]        ; 00427046
    FMUL float ptr [ESP + 0x188]        ; 0042704d
    FLD float ptr [ESP + 0x68]          ; 00427054
    FMUL float ptr [ESP + 0x188]        ; 00427058
    FLD float ptr [ESP + 0x6c]          ; 0042705f
    FMUL float ptr [ESP + 0x188]        ; 00427063
    LEA EDI,[ESP + 0x118]               ; 0042706a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427071
    LEA ESI,[ESP + 0xa0]                ; 00427074
    ADD EAX,0x12eac                     ; 0042707b
    FXCH ST2                            ; 00427080
    FSTP float ptr [ESP + 0xa0]         ; 00427082
    FSTP float ptr [ESP + 0xa4]         ; 00427089
    FSTP float ptr [ESP + 0xa8]         ; 00427090
    MOVSD ES:EDI,ESI                    ; 00427097
    MOVSD ES:EDI,ESI                    ; 00427098
    MOVSD ES:EDI,ESI                    ; 00427099
    PUSH EAX                            ; 0042709a
    FLD float ptr [ESP + 0x11c]         ; 0042709b
    FLD float ptr [ESP + 0x120]         ; 004270a2
    FLD float ptr [ESP + 0x124]         ; 004270a9
    LEA EAX,[ESP + 0x104]               ; 004270b0
    LEA EDI,[ESP + 0x104]               ; 004270b7
    LEA ESI,[ESP + 0x158]               ; 004270be
    FXCH ST2                            ; 004270c5
    FADD float ptr [ESP + 0xc8]         ; 004270c7
    FXCH                                ; 004270ce
    FADD float ptr [ESP + 0xcc]         ; 004270d0
    FXCH ST2                            ; 004270d7
    FADD float ptr [ESP + 0xd0]         ; 004270d9
    FXCH                                ; 004270e0
    FSTP float ptr [ESP + 0x158]        ; 004270e2
    FXCH                                ; 004270e9
    FSTP float ptr [ESP + 0x15c]        ; 004270eb
    FSTP float ptr [ESP + 0x160]        ; 004270f2
    MOVSD ES:EDI,ESI                    ; 004270f9
    MOVSD ES:EDI,ESI                    ; 004270fa
    MOVSD ES:EDI,ESI                    ; 004270fb
    PUSH EAX                            ; 004270fc
    LEA ESI,[ESP + 0x168]               ; 004270fd
    LEA EDI,[ESP + 0x9c]                ; 00427104
    CALL core_xform.cpp_FUN_005b5080    ; 0042710b
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 00427110
    LEA ESI,[ESP + 0x160]               ; 00427113
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042711a
    LEA EAX,[ESP + 0x94]                ; 0042711d
    ADD EBX,0x8                         ; 00427124
    MOVSD ES:EDI,ESI                    ; 00427127
    MOVSD ES:EDI,ESI                    ; 00427128
    MOVSD ES:EDI,ESI                    ; 00427129
    CMP EBX,EAX                         ; 0042712a
    JZ 0x0042714b                       ; 0042712c
        ;   XREF to: 0042714b (CONDITIONAL_JUMP)  ; LAB_0042714b
    MOV EAX,dword ptr [ESP + 0x94]      ; 0042712e
    MOV dword ptr [EBX],EAX             ; 00427135
    MOV EAX,dword ptr [ESP + 0x98]      ; 00427137
    MOV dword ptr [EBX + 0x4],EAX       ; 0042713e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00427141
    MOV dword ptr [EBX + 0x8],EAX       ; 00427148
    FLD float ptr [ESP + 0xb8]          ; 0042714b
        ;   Label: LAB_0042714b
    FLD float ptr [ESP + 0xbc]          ; 00427152
    FLD float ptr [ESP + 0xc0]          ; 00427159
    LEA EDI,[ESP + 0x34]                ; 00427160
    LEA ESI,[ESP + 0x148]               ; 00427164
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042716b
    FXCH ST2                            ; 0042716e
    FSUB float ptr [ESP + 0x64]         ; 00427170
    FXCH                                ; 00427174
    FSUB float ptr [ESP + 0x68]         ; 00427176
    FXCH ST2                            ; 0042717a
    FSUB float ptr [ESP + 0x6c]         ; 0042717c
    FXCH                                ; 00427180
    FSTP float ptr [ESP + 0x148]        ; 00427182
    FXCH                                ; 00427189
    FSTP float ptr [ESP + 0x14c]        ; 0042718b
    FSTP float ptr [ESP + 0x150]        ; 00427192
    MOVSD ES:EDI,ESI                    ; 00427199
    MOVSD ES:EDI,ESI                    ; 0042719a
    MOVSD ES:EDI,ESI                    ; 0042719b
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0042719c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042719f
    ADD EAX,EDX                         ; 004271a6
    MOV EDX,dword ptr [EBP + 0x14]      ; 004271a8
    MOV EDX,dword ptr [EDX + EAX*0x8 + 0x12ee8] ; 004271ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 004271b2
    MOV EDI,dword ptr [EAX + 0x12ea8]   ; 004271b5
    LEA ESI,[EDX*0x8 + 0x0]             ; 004271bb
    PUSH EDI                            ; 004271c2
    MOV EBX,dword ptr [EAX + 0x12edc]   ; 004271c3
    ADD ESI,EDX                         ; 004271c9
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 004271cb
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESI,ESI                         ; 004271d0
    MOV EDX,dword ptr [EAX + EBX*0x4 + 0x7c] ; 004271d2
    ADD ESP,0x4                         ; 004271d6
    ADD EDX,ESI                         ; 004271d9
    XOR EBX,EBX                         ; 004271db
    MOV EAX,dword ptr [EBP + 0x14]      ; 004271dd
    MOV BX,word ptr [EDX]               ; 004271e0
    MOV ESI,dword ptr [EAX + 0x12ea8]   ; 004271e3
    LEA EAX,[EBX*0x4 + 0x0]             ; 004271e9
    SUB EAX,EBX                         ; 004271f0
    LEA EBX,[EAX*0x4 + 0x0]             ; 004271f2
    MOV EAX,dword ptr [ESI + 0x2324]    ; 004271f9
    ADD EAX,EBX                         ; 004271ff
    LEA EBX,[ESP + 0x64]                ; 00427201
    FILD dword ptr [EAX]                ; 00427205
    FMUL float ptr [0x005fd218]         ; 00427207 | DAT_005fd218
    FSTP float ptr [EBX]                ; 0042720d
    FILD dword ptr [EAX + 0x4]          ; 0042720f
    FMUL float ptr [0x005fd218]         ; 00427212 | DAT_005fd218
    FSTP float ptr [EBX + 0x4]          ; 00427218
    FILD dword ptr [EAX + 0x8]          ; 0042721b
    FMUL float ptr [0x005fd218]         ; 0042721e | DAT_005fd218
    FSTP float ptr [EBX + 0x8]          ; 00427224
    XOR EBX,EBX                         ; 00427227
    MOV BX,word ptr [EDX + 0x2]         ; 00427229
    LEA EAX,[EBX*0x4 + 0x0]             ; 0042722d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00427234
    SUB EAX,EBX                         ; 00427237
    MOV ESI,dword ptr [ESI + 0x12ea8]   ; 00427239
    SHL EAX,0x2                         ; 0042723f
    MOV EBX,dword ptr [ESI + 0x2324]    ; 00427242
    ADD EAX,EBX                         ; 00427248
    LEA EBX,[ESP + 0xb8]                ; 0042724a
    FILD dword ptr [EAX]                ; 00427251
    FMUL float ptr [0x005fd218]         ; 00427253 | DAT_005fd218
    FSTP float ptr [EBX]                ; 00427259
    FILD dword ptr [EAX + 0x4]          ; 0042725b
    FMUL float ptr [0x005fd218]         ; 0042725e | DAT_005fd218
    FSTP float ptr [EBX + 0x4]          ; 00427264
    FILD dword ptr [EAX + 0x8]          ; 00427267
    FMUL float ptr [0x005fd218]         ; 0042726a | DAT_005fd218
    FSTP float ptr [EBX + 0x8]          ; 00427270
    MOV EBX,dword ptr [EBP + 0x14]      ; 00427273
    MOV DX,word ptr [EDX + 0x4]         ; 00427276
    MOV EBX,dword ptr [EBX + 0x12ea8]   ; 0042727a
    AND EDX,0xffff                      ; 00427280
    LEA EAX,[EDX*0x4 + 0x0]             ; 00427286
    SUB EAX,EDX                         ; 0042728d
    LEA EDI,[ESP + 0x124]               ; 0042728f
    SHL EAX,0x2                         ; 00427296
    MOV EDX,dword ptr [EBX + 0x2324]    ; 00427299
    LEA EBX,[ESP + 0xdc]                ; 0042729f
    ADD EAX,EDX                         ; 004272a6
    LEA ESI,[ESP + 0x13c]               ; 004272a8
    FILD dword ptr [EAX]                ; 004272af
    FMUL float ptr [0x005fd218]         ; 004272b1 | DAT_005fd218
    FSTP float ptr [EBX]                ; 004272b7
    FILD dword ptr [EAX + 0x4]          ; 004272b9
    FMUL float ptr [0x005fd218]         ; 004272bc | DAT_005fd218
    FSTP float ptr [EBX + 0x4]          ; 004272c2
    FILD dword ptr [EAX + 0x8]          ; 004272c5
    FMUL float ptr [0x005fd218]         ; 004272c8 | DAT_005fd218
    FSTP float ptr [EBX + 0x8]          ; 004272ce
    FLD float ptr [ESP + 0xb8]          ; 004272d1
    FLD float ptr [ESP + 0xbc]          ; 004272d8
    FLD float ptr [ESP + 0xc0]          ; 004272df
    FLD float ptr [ESP + 0xdc]          ; 004272e6
    FLD float ptr [ESP + 0xe0]          ; 004272ed
    FLD float ptr [ESP + 0xe4]          ; 004272f4
    FXCH ST5                            ; 004272fb
    FSUB float ptr [ESP + 0x64]         ; 004272fd
    FXCH ST4                            ; 00427301
    FSUB float ptr [ESP + 0x68]         ; 00427303
    FXCH ST3                            ; 00427307
    FSUB float ptr [ESP + 0x6c]         ; 00427309
    FXCH ST2                            ; 0042730d
    FSUB float ptr [ESP + 0xb8]         ; 0042730f
    FXCH                                ; 00427316
    FSUB float ptr [ESP + 0xbc]         ; 00427318
    FXCH ST5                            ; 0042731f
    FSUB float ptr [ESP + 0xc0]         ; 00427321
    FXCH ST4                            ; 00427328
    FSTP float ptr [ESP + 0x13c]        ; 0042732a
    FXCH ST2                            ; 00427331
    FSTP float ptr [ESP + 0x140]        ; 00427333
    FSTP float ptr [ESP + 0x144]        ; 0042733a
    FSTP float ptr [ESP + 0x58]         ; 00427341
    MOVSD ES:EDI,ESI                    ; 00427345
    MOVSD ES:EDI,ESI                    ; 00427346
    MOVSD ES:EDI,ESI                    ; 00427347
    FXCH                                ; 00427348
    FSTP float ptr [ESP + 0x5c]         ; 0042734a
    LEA EDI,[ESP + 0xe8]                ; 0042734e
    LEA ESI,[ESP + 0x58]                ; 00427355
    FSTP float ptr [ESP + 0x60]         ; 00427359
    MOVSD ES:EDI,ESI                    ; 0042735d
    MOVSD ES:EDI,ESI                    ; 0042735e
    MOVSD ES:EDI,ESI                    ; 0042735f
    FLD float ptr [ESP + 0x128]         ; 00427360
    FMUL float ptr [ESP + 0xf0]         ; 00427367
    FLD float ptr [ESP + 0x12c]         ; 0042736e
    FMUL float ptr [ESP + 0xe8]         ; 00427375
    FLD float ptr [ESP + 0x124]         ; 0042737c
    FMUL float ptr [ESP + 0xec]         ; 00427383
    FLD float ptr [ESP + 0x12c]         ; 0042738a
    FMUL float ptr [ESP + 0xec]         ; 00427391
    FLD float ptr [ESP + 0x124]         ; 00427398
    FMUL float ptr [ESP + 0xf0]         ; 0042739f
    FLD float ptr [ESP + 0x128]         ; 004273a6
    FMUL float ptr [ESP + 0xe8]         ; 004273ad
    LEA EDI,[ESP + 0xf4]                ; 004273b4
    LEA ESI,[ESP + 0xd0]                ; 004273bb
    FXCH ST2                            ; 004273c2
    FSUBP ST5,ST0                       ; 004273c4
    FSUBP ST3,ST0                       ; 004273c6
    FSUBP                               ; 004273c8
    FXCH ST2                            ; 004273ca
    FSTP float ptr [ESP + 0xd0]         ; 004273cc
    FSTP float ptr [ESP + 0xd4]         ; 004273d3
    FSTP float ptr [ESP + 0xd8]         ; 004273da
    MOVSD ES:EDI,ESI                    ; 004273e1
    MOVSD ES:EDI,ESI                    ; 004273e2
    MOVSD ES:EDI,ESI                    ; 004273e3
    FLD float ptr [ESP + 0xf8]          ; 004273e4
    FMUL float ptr [ESP + 0x3c]         ; 004273eb
    FLD float ptr [ESP + 0xfc]          ; 004273ef
    FMUL float ptr [ESP + 0x34]         ; 004273f6
    FLD float ptr [ESP + 0xf4]          ; 004273fa
    FMUL float ptr [ESP + 0x38]         ; 00427401
    FLD float ptr [ESP + 0xfc]          ; 00427405
    FMUL float ptr [ESP + 0x38]         ; 0042740c
    FLD float ptr [ESP + 0xf4]          ; 00427410
    FMUL float ptr [ESP + 0x3c]         ; 00427417
    FLD float ptr [ESP + 0xf8]          ; 0042741b
    FMUL float ptr [ESP + 0x34]         ; 00427422
    LEA EDI,[ESP + 0x70]                ; 00427426
    LEA ESI,[ESP + 0x10c]               ; 0042742a
    FXCH ST2                            ; 00427431
    FSUBP ST5,ST0                       ; 00427433
    FSUBP ST3,ST0                       ; 00427435
    FSUBP                               ; 00427437
    FXCH ST2                            ; 00427439
    FSTP float ptr [ESP + 0x10c]        ; 0042743b
    FSTP float ptr [ESP + 0x110]        ; 00427442
    FSTP float ptr [ESP + 0x114]        ; 00427449
    MOVSD ES:EDI,ESI                    ; 00427450
    MOVSD ES:EDI,ESI                    ; 00427451
    MOVSD ES:EDI,ESI                    ; 00427452
    FLD float ptr [ESP + 0x38]          ; 00427453
    FMUL float ptr [ESP + 0x78]         ; 00427457
    FLD float ptr [ESP + 0x3c]          ; 0042745b
    FMUL float ptr [ESP + 0x70]         ; 0042745f
    FLD float ptr [ESP + 0x34]          ; 00427463
    FMUL float ptr [ESP + 0x74]         ; 00427467
    FLD float ptr [ESP + 0x3c]          ; 0042746b
    FMUL float ptr [ESP + 0x74]         ; 0042746f
    FLD float ptr [ESP + 0x34]          ; 00427473
    FMUL float ptr [ESP + 0x78]         ; 00427477
    FLD float ptr [ESP + 0x38]          ; 0042747b
    FMUL float ptr [ESP + 0x70]         ; 0042747f
    LEA EDI,[ESP + 0x130]               ; 00427483
    LEA ESI,[ESP + 0x88]                ; 0042748a
    LEA EAX,[ESP + 0x130]               ; 00427491
    LEA EDX,[ESP + 0xf4]                ; 00427498
    FXCH ST2                            ; 0042749f
    FSUBP ST5,ST0                       ; 004274a1
    FSUBP ST3,ST0                       ; 004274a3
    FSUBP                               ; 004274a5
    FXCH                                ; 004274a7
    FSTP float ptr [ESP + 0x8c]         ; 004274a9
    FSTP float ptr [ESP + 0x90]         ; 004274b0
    FSTP float ptr [ESP + 0x88]         ; 004274b7
    MOVSD ES:EDI,ESI                    ; 004274be
    MOVSD ES:EDI,ESI                    ; 004274bf
    MOVSD ES:EDI,ESI                    ; 004274c0
    CMP EDX,EAX                         ; 004274c1
    JZ 0x004274ef                       ; 004274c3
        ;   XREF to: 004274ef (CONDITIONAL_JUMP)  ; LAB_004274ef
    MOV EAX,dword ptr [ESP + 0x130]     ; 004274c5
    MOV dword ptr [ESP + 0xf4],EAX      ; 004274cc
    MOV EAX,dword ptr [ESP + 0x134]     ; 004274d3
    MOV dword ptr [ESP + 0xf8],EAX      ; 004274da
    MOV EAX,dword ptr [ESP + 0x138]     ; 004274e1
    MOV dword ptr [ESP + 0xfc],EAX      ; 004274e8
    FLD float ptr [ESP + 0xf8]          ; 004274ef
        ;   Label: LAB_004274ef
    FMUL ST0                            ; 004274f6
    FLD float ptr [ESP + 0xf4]          ; 004274f8
    FMUL ST0                            ; 004274ff
    FADDP                               ; 00427501
    FLD float ptr [ESP + 0xfc]          ; 00427503
    FMUL ST0                            ; 0042750a
    FADDP                               ; 0042750c
    FSQRT                               ; 0042750e
    FLDZ                                ; 00427510
    FXCH                                ; 00427512
    FSTP float ptr [ESP + 0x184]        ; 00427514
    FCOMP float ptr [ESP + 0x184]       ; 0042751b
    FNSTSW AX                           ; 00427522
    SAHF                                ; 00427524
    JNC 0x004277c5                      ; 00427525
        ;   XREF to: 004277c5 (CONDITIONAL_JUMP)  ; LAB_004277c5
    FLD1                                ; 0042752b
    FLD float ptr [ESP + 0xf4]          ; 0042752d
    FXCH                                ; 00427534
    FDIV float ptr [ESP + 0x184]        ; 00427536
    FXCH                                ; 0042753d
    FMUL ST1                            ; 0042753f
    FLD float ptr [ESP + 0xf8]          ; 00427541
    FMUL ST2                            ; 00427548
    FLD float ptr [ESP + 0xfc]          ; 0042754a
    FMULP ST3                           ; 00427551
    FXCH                                ; 00427553
    FSTP float ptr [ESP + 0xf4]         ; 00427555
    FSTP float ptr [ESP + 0xf8]         ; 0042755c
    FSTP float ptr [ESP + 0xfc]         ; 00427563
    FLD float ptr [ESP + 0x74]          ; 0042756a
        ;   Label: LAB_0042756a
    FMUL ST0                            ; 0042756e
    FLD float ptr [ESP + 0x70]          ; 00427570
    FMUL ST0                            ; 00427574
    FADDP                               ; 00427576
    FLD float ptr [ESP + 0x78]          ; 00427578
    FMUL ST0                            ; 0042757c
    FADDP                               ; 0042757e
    FSQRT                               ; 00427580
    FLDZ                                ; 00427582
    FXCH                                ; 00427584
    FSTP float ptr [ESP + 0x17c]        ; 00427586
    FCOMP float ptr [ESP + 0x17c]       ; 0042758d
    FNSTSW AX                           ; 00427594
    SAHF                                ; 00427596
    JNC 0x004277e1                      ; 00427597
        ;   XREF to: 004277e1 (CONDITIONAL_JUMP)  ; LAB_004277e1
    FLD1                                ; 0042759d
    FLD float ptr [ESP + 0x70]          ; 0042759f
    FXCH                                ; 004275a3
    FDIV float ptr [ESP + 0x17c]        ; 004275a5
    FXCH                                ; 004275ac
    FMUL ST1                            ; 004275ae
    FLD float ptr [ESP + 0x74]          ; 004275b0
    FMUL ST2                            ; 004275b4
    FLD float ptr [ESP + 0x78]          ; 004275b6
    FMULP ST3                           ; 004275ba
    FXCH                                ; 004275bc
    FSTP float ptr [ESP + 0x70]         ; 004275be
    FSTP float ptr [ESP + 0x74]         ; 004275c2
    FSTP float ptr [ESP + 0x78]         ; 004275c6
    FLD float ptr [ESP + 0x38]          ; 004275ca
        ;   Label: LAB_004275ca
    FMUL ST0                            ; 004275ce
    FLD float ptr [ESP + 0x34]          ; 004275d0
    FMUL ST0                            ; 004275d4
    FADDP                               ; 004275d6
    FLD float ptr [ESP + 0x3c]          ; 004275d8
    FMUL ST0                            ; 004275dc
    FADDP                               ; 004275de
    FSQRT                               ; 004275e0
    FLDZ                                ; 004275e2
    FXCH                                ; 004275e4
    FSTP float ptr [ESP + 0x180]        ; 004275e6
    FCOMP float ptr [ESP + 0x180]       ; 004275ed
    FNSTSW AX                           ; 004275f4
    SAHF                                ; 004275f6
    JNC 0x004277f4                      ; 004275f7
        ;   XREF to: 004277f4 (CONDITIONAL_JUMP)  ; LAB_004277f4
    FLD1                                ; 004275fd
    FLD float ptr [ESP + 0x34]          ; 004275ff
    FXCH                                ; 00427603
    FDIV float ptr [ESP + 0x180]        ; 00427605
    FXCH                                ; 0042760c
    FMUL ST1                            ; 0042760e
    FLD float ptr [ESP + 0x38]          ; 00427610
    FMUL ST2                            ; 00427614
    FLD float ptr [ESP + 0x3c]          ; 00427616
    FMULP ST3                           ; 0042761a
    FXCH                                ; 0042761c
    FSTP float ptr [ESP + 0x34]         ; 0042761e
    FSTP float ptr [ESP + 0x38]         ; 00427622
    FSTP float ptr [ESP + 0x3c]         ; 00427626
    MOV EAX,dword ptr [ESP + 0x70]      ; 0042762a
        ;   Label: LAB_0042762a
    MOV dword ptr [ESP + 0xc],EAX       ; 0042762e
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00427632
    MOV dword ptr [ESP + 0x10],EAX      ; 00427639
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042763d
    MOV dword ptr [ESP + 0x14],EAX      ; 00427641
    MOV EAX,dword ptr [ESP + 0x74]      ; 00427645
    MOV dword ptr [ESP + 0x18],EAX      ; 00427649
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0042764d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00427654
    MOV EAX,dword ptr [ESP + 0x38]      ; 00427658
    MOV dword ptr [ESP + 0x20],EAX      ; 0042765c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00427660
    MOV dword ptr [ESP + 0x24],EAX      ; 00427664
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00427668
    MOV dword ptr [ESP + 0x28],EAX      ; 0042766f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00427673
    MOV dword ptr [ESP + 0x2c],EAX      ; 00427677
    LEA EAX,[ESP + 0xc]                 ; 0042767b
    PUSH EAX                            ; 0042767f
    LEA ESI,[ESP + 0xb0]                ; 00427680
    LEA EDI,[ESP + 0x80]                ; 00427687
    CALL core_dirmat.cpp_FUN_0045f840   ; 0042768e
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f840()
    ADD ESP,0x4                         ; 00427693
    LEA ESI,[ESP + 0xac]                ; 00427696
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042769d
    LEA EAX,[ESP + 0x7c]                ; 004276a0
    ADD EBX,0x14                        ; 004276a4
    MOVSD ES:EDI,ESI                    ; 004276a7
    MOVSD ES:EDI,ESI                    ; 004276a8
    MOVSD ES:EDI,ESI                    ; 004276a9
    CMP EBX,EAX                         ; 004276aa
    JNZ 0x00427807                      ; 004276ac
        ;   XREF to: 00427807 (CONDITIONAL_JUMP)  ; LAB_00427807
    MOV ESP,EBP                         ; 004276b2
        ;   Label: LAB_004276b2
    POP EBP                             ; 004276b4
    POP EDI                             ; 004276b5
    POP ESI                             ; 004276b6
    POP EBX                             ; 004276b7
    RET                                 ; 004276b8
    MOV EDX,dword ptr [EAX + 0x30]      ; 004276b9
        ;   Label: LAB_004276b9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004276bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004276c3
    SUB EAX,EDX                         ; 004276c6
    MOV EBX,dword ptr [EBX + 0x12ea8]   ; 004276c8
    LEA EDX,[EAX*0x4 + 0x0]             ; 004276ce
    MOV EAX,dword ptr [EBX + 0x2324]    ; 004276d5
    LEA EBX,[ESP + 0x40]                ; 004276db
    ADD EAX,EDX                         ; 004276df
    FILD dword ptr [EAX]                ; 004276e1
    FMUL float ptr [0x005fd218]         ; 004276e3 | DAT_005fd218
    FSTP float ptr [EBX]                ; 004276e9
    FILD dword ptr [EAX + 0x4]          ; 004276eb
    FMUL float ptr [0x005fd218]         ; 004276ee | DAT_005fd218
    FSTP float ptr [EBX + 0x4]          ; 004276f4
    FILD dword ptr [EAX + 0x8]          ; 004276f7
    FMUL float ptr [0x005fd218]         ; 004276fa | DAT_005fd218
    FSTP float ptr [EBX + 0x8]          ; 00427700
    MOV EAX,dword ptr [EBP + 0x14]      ; 00427703
    ADD EAX,0x12eac                     ; 00427706
    PUSH EAX                            ; 0042770b
    LEA EAX,[ESP + 0x44]                ; 0042770c
    PUSH EAX                            ; 00427710
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_005b5100 ; 00427711
        ;   XREF to: 005b5100 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_005b5100()
    ADD ESP,0x8                         ; 00427716
    LEA EAX,[ESP + 0x40]                ; 00427719
    PUSH EAX                            ; 0042771d
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042771e
    PUSH dword ptr [ESP + 0x4]          ; 00427721
    PUSH ESI                            ; 00427725
    MOV EDI,dword ptr [EBP + 0x14]      ; 00427726
    PUSH EDI                            ; 00427729
    CALL core_bugs.cpp_FUN_00426870     ; 0042772a
        ;   XREF to: 00426870 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00426870()
    ADD ESP,0x10                        ; 0042772f
    TEST EAX,EAX                        ; 00427732
    JZ 0x004276b2                       ; 00427734
        ;   XREF to: 004276b2 (CONDITIONAL_JUMP)  ; LAB_004276b2
    PUSH ESI                            ; 0042773a
    PUSH EDI                            ; 0042773b
    CALL core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830 ; 0042773c
        ;   XREF to: 00427830 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 00427741
    MOV dword ptr [ESI + 0x34],0x0      ; 00427744
    MOV ESP,EBP                         ; 0042774b
    POP EBP                             ; 0042774d
    POP EDI                             ; 0042774e
    POP ESI                             ; 0042774f
    POP EBX                             ; 00427750
    RET                                 ; 00427751
    MOV ECX,dword ptr [EBP + 0x18]      ; 00427752
        ;   Label: LAB_00427752
    PUSH ECX                            ; 00427755
    MOV EBX,dword ptr [EBP + 0x14]      ; 00427756
    PUSH EBX                            ; 00427759
    CALL core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830 ; 0042775a
        ;   XREF to: 00427830 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 0042775f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00427762
    MOV dword ptr [EAX + 0x34],0x0      ; 00427765
    JMP 0x00426f61                      ; 0042776c
        ;   XREF to: 00426f61 (UNCONDITIONAL_JUMP)  ; LAB_00426f61
    MOV ECX,dword ptr [EBP + 0x18]      ; 00427771
        ;   Label: LAB_00427771
    PUSH ECX                            ; 00427774
    PUSH ESI                            ; 00427775
    CALL core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830 ; 00427776
        ;   XREF to: 00427830 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830(CBugs * this_ptr, SBug * bug_data)
    ADD ESP,0x8                         ; 0042777b
    FLD float ptr [ESP + 0x4]           ; 0042777e
    FLD1                                ; 00427782
    FSUBRP                              ; 00427784
    FDIV float ptr [ESP + 0x8]          ; 00427786
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042778a
    FLD float ptr [EAX + 0x34]          ; 0042778d
    FADD float ptr [0x005d5158]         ; 00427790 | DAT_005d5158
    FLD float ptr [ESP]                 ; 00427796
    FXCH ST2                            ; 00427799
    FSUBR ST0,ST2                       ; 0042779b
    FXCH                                ; 0042779d
    FSTP float ptr [EAX + 0x34]         ; 0042779f
    FSTP ST1                            ; 004277a2
    FST float ptr [ESP]                 ; 004277a4
    FCOMP double ptr [0x005d5160]       ; 004277a7 | DAT_005d5160
    FNSTSW AX                           ; 004277ad
    SAHF                                ; 004277af
    JC 0x00426f2f                       ; 004277b0
        ;   XREF to: 00426f2f (CONDITIONAL_JUMP)  ; LAB_00426f2f
    INC EBX                             ; 004277b6
    CMP EBX,0x3                         ; 004277b7
    JL 0x00426f07                       ; 004277ba
        ;   XREF to: 00426f07 (CONDITIONAL_JUMP)  ; LAB_00426f07
    JMP 0x00426f2f                      ; 004277c0
        ;   XREF to: 00426f2f (UNCONDITIONAL_JUMP)  ; LAB_00426f2f
    XOR EAX,EAX                         ; 004277c5
        ;   Label: LAB_004277c5
    MOV dword ptr [ESP + 0xf8],EAX      ; 004277c7
    MOV dword ptr [ESP + 0xf4],EAX      ; 004277ce
    MOV dword ptr [ESP + 0xfc],EAX      ; 004277d5
    JMP 0x0042756a                      ; 004277dc
        ;   XREF to: 0042756a (UNCONDITIONAL_JUMP)  ; LAB_0042756a
    XOR EBX,EBX                         ; 004277e1
        ;   Label: LAB_004277e1
    MOV dword ptr [ESP + 0x74],EBX      ; 004277e3
    MOV dword ptr [ESP + 0x70],EBX      ; 004277e7
    MOV dword ptr [ESP + 0x78],EBX      ; 004277eb
    JMP 0x004275ca                      ; 004277ef
        ;   XREF to: 004275ca (UNCONDITIONAL_JUMP)  ; LAB_004275ca
    XOR EAX,EAX                         ; 004277f4
        ;   Label: LAB_004277f4
    MOV dword ptr [ESP + 0x38],EAX      ; 004277f6
    MOV dword ptr [ESP + 0x34],EAX      ; 004277fa
    MOV dword ptr [ESP + 0x3c],EAX      ; 004277fe
    JMP 0x0042762a                      ; 00427802
        ;   XREF to: 0042762a (UNCONDITIONAL_JUMP)  ; LAB_0042762a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00427807
        ;   Label: LAB_00427807
    MOV dword ptr [EBX],EAX             ; 0042780b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042780d
    MOV dword ptr [EBX + 0x4],EAX       ; 00427814
    MOV EAX,dword ptr [ESP + 0x84]      ; 00427817
    MOV dword ptr [EBX + 0x8],EAX       ; 0042781e
    MOV ESP,EBP                         ; 00427821
    POP EBP                             ; 00427823
    POP EDI                             ; 00427824
    POP ESI                             ; 00427825
    POP EBX                             ; 00427826
    RET                                 ; 00427827

