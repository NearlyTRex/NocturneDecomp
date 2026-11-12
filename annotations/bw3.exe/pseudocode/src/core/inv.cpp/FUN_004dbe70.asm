; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004dbe70(undefined4 param_1,CDemonActor *param_2,int param_3,int param_4,int param_5,float param_6,int param_7)
;
; Local Variables:
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
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x5c]:4  local_5c
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd770 at 004dd8c9
;
; Referenced Globals:
;   TerminatedCString s_CLightstaff_005c62cb
;   TerminatedCString s_CFirestaff_005c62d7
;   undefined4 DAT_005c62e2
;   TerminatedCString s_CKeyActor_005c62e7
;   TerminatedCString s_CExorcism_005c62f1
;   undefined4 DAT_005c62fb
;   TerminatedCString s_CBindEvil_005c6300
;   TerminatedCString s_CLightstaff_005c630a
;   TerminatedCString s_CFirestaff_005c6316
;   TerminatedCString s_CBurncross_005c6321
;   TerminatedCString s_CFirestaff_005c632c
;   TerminatedCString s_CHeal_005c6337
;   TerminatedCString s_CExorcism_005c633d
;   TerminatedCString s_CHolycross_005c6347
;   TerminatedCString s_CLightstaff_005c6352
;   ... and 33 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   core_inv.cpp_FUN_004d9d20
;   crt_string.c__strcmp_FUN_005a3d00
;   crt_string.c__stricmp_FUN_005a3260
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
;   engine_drender.cpp_FUN_0046d090
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbe70
        ;   Label: core_inv.cpp_FUN_004dbe70
    PUSH ESI                            ; 004dbe71
    PUSH EDI                            ; 004dbe72
    PUSH EBP                            ; 004dbe73
    MOV EBP,ESP                         ; 004dbe74
    SUB ESP,0xa4                        ; 004dbe76
    SUB EBP,0x66                        ; 004dbe7c
    MOV EBX,dword ptr [EBP + 0x7e]      ; 004dbe7f
    TEST EBX,EBX                        ; 004dbe82
    JZ 0x004dc3c8                       ; 004dbe84
        ;   XREF to: 004dc3c8 (CONDITIONAL_JUMP)  ; LAB_004dc3c8
    CMP dword ptr [0x005fba18],0x280    ; 004dbe8a | DAT_005fba18
    JLE 0x004dbefd                      ; 004dbe94
        ;   XREF to: 004dbefd (CONDITIONAL_JUMP)  ; LAB_004dbefd
    MOV EDX,dword ptr [EBP + 0x82]      ; 004dbe96
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dbe9c
    ADD EDX,EAX                         ; 004dbea3
    SHL EDX,0x7                         ; 004dbea5
    MOV ECX,dword ptr [0x005fba18]      ; 004dbea8 | DAT_005fba18
    MOV EAX,EDX                         ; 004dbeae
    SAR EDX,0x1f                        ; 004dbeb0
    IDIV ECX                            ; 004dbeb3
    MOV dword ptr [EBP + 0x82],EAX      ; 004dbeb5
    MOV EAX,dword ptr [EBP + 0x86]      ; 004dbebb
    SHL EAX,0x5                         ; 004dbec1
    MOV EDX,EAX                         ; 004dbec4
    SHL EAX,0x4                         ; 004dbec6
    SUB EAX,EDX                         ; 004dbec9
    MOV EDX,EAX                         ; 004dbecb
    MOV ESI,dword ptr [0x005fba1c]      ; 004dbecd | DAT_005fba1c
    SAR EDX,0x1f                        ; 004dbed3
    IDIV ESI                            ; 004dbed6
    MOV EDX,dword ptr [EBP + 0x8a]      ; 004dbed8
    MOV dword ptr [EBP + 0x86],EAX      ; 004dbede
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dbee4
    ADD EDX,EAX                         ; 004dbeeb
    SHL EDX,0x7                         ; 004dbeed
    MOV EAX,EDX                         ; 004dbef0
    SAR EDX,0x1f                        ; 004dbef2
    IDIV ECX                            ; 004dbef5
    MOV dword ptr [EBP + 0x8a],EAX      ; 004dbef7
    MOV EAX,[0x00603b28]                ; 004dbefd | g_CDemonSetPtr
        ;   Label: LAB_004dbefd
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004dbf02 | g_CDemonSetInstance.rendering_mode
    MOV dword ptr [EAX + 0x15ae88],0xffffb7d5 ; 004dbf0c | g_CDemonSetInstance.light_direction.x
    MOV dword ptr [EAX + 0x15ae8c],0xffffb7d5 ; 004dbf16 | g_CDemonSetInstance.light_direction.y
    MOV dword ptr [EAX + 0x15ae90],0x482b ; 004dbf20 | g_CDemonSetInstance.light_direction.z
    MOV dword ptr [EAX + 0x15ae94],0x7d00 ; 004dbf2a | g_CDemonSetInstance.ambient_base_quick
    MOV EAX,[0x01c5fad0]                ; 004dbf34 | DAT_01c5fad0
    MOV EDX,EAX                         ; 004dbf39
    SAR EDX,0x1f                        ; 004dbf3b
    SHL EDX,0x2                         ; 004dbf3e
    SBB EAX,EDX                         ; 004dbf41
    SAR EAX,0x2                         ; 004dbf43
    MOV EDX,dword ptr [0x01d70a38]      ; 004dbf46 | DAT_01d70a38
    ADD EDX,EAX                         ; 004dbf4c
    PUSH EDX                            ; 004dbf4e
    MOV dword ptr [0x01d70a38],EDX      ; 004dbf4f | DAT_01d70a38
    CALL engine_matrix.c_FUN_004e4d90   ; 004dbf55
        ;   XREF to: 004e4d90 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_FUN_004e4d90(int angle)
    ADD ESP,0x4                         ; 004dbf5a
    MOV ESI,dword ptr [0x01d70a38]      ; 004dbf5d | DAT_01d70a38
    PUSH ESI                            ; 004dbf63
    MOV EDI,EAX                         ; 004dbf64
    CALL engine_matrix.c_FUN_004e4dd0   ; 004dbf66
        ;   XREF to: 004e4dd0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4dd0()
    MOV EDX,0x482b                      ; 004dbf6b
    ADD ESP,0x4                         ; 004dbf70
    MOV ESI,EAX                         ; 004dbf73
    MOV EAX,EDI                         ; 004dbf75
    IMUL EDX                            ; 004dbf77
    SHRD EAX,EDX,0x10                   ; 004dbf79
    MOV EDX,dword ptr [0x00603b28]      ; 004dbf7d | g_CDemonSetPtr
    MOV dword ptr [EDX + 0x15ae88],EAX  ; 004dbf83 | g_CDemonSetInstance.light_direction.x
    MOV EDX,0x482b                      ; 004dbf89
    MOV EAX,ESI                         ; 004dbf8e
    MOV EDI,dword ptr [EBP + 0x8a]      ; 004dbf90
    IMUL EDX                            ; 004dbf96
    SHRD EAX,EDX,0x10                   ; 004dbf98
    PUSH EDI                            ; 004dbf9c
    MOV EDX,dword ptr [0x00603b28]      ; 004dbf9d | g_CDemonSetPtr
    PUSH EDI                            ; 004dbfa3
    MOV dword ptr [EDX + 0x15ae90],EAX  ; 004dbfa4 | g_CDemonSetInstance.light_direction.z
    MOV EDX,dword ptr [EBP + 0x86]      ; 004dbfaa
    PUSH EDX                            ; 004dbfb0
    MOV ECX,dword ptr [EBP + 0x82]      ; 004dbfb1
    PUSH ECX                            ; 004dbfb7
    MOV ESI,dword ptr [0x005f2afc]      ; 004dbfb8 | DAT_005f2afc
    PUSH ESI                            ; 004dbfbe | DAT_01bdd7e4
    CALL engine_drender.cpp_FUN_0046d2f0 ; 004dbfbf
        ;   XREF to: 0046d2f0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d2f0()
    ADD ESP,0x14                        ; 004dbfc4
    PUSH EBX                            ; 004dbfc7
    CALL core_inv.cpp_FUN_004d9d20      ; 004dbfc8
        ;   XREF to: 004d9d20 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9d20()
    ADD ESP,0x4                         ; 004dbfcd
    PUSH EAX                            ; 004dbfd0
    LEA EDI,[EBP + -0x3e]               ; 004dbfd1
    MOV dword ptr [EBP + 0x5e],EAX      ; 004dbfd4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004dbfd7
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004dbfdc
    MOV ESI,dword ptr [EAX + 0x350]     ; 004dbfe1
    MOVSD.REP ES:EDI,ESI                ; 004dbfe7
    FLD float ptr [EBP + -0x32]         ; 004dbfe9
    FLD float ptr [EBP + -0x2e]         ; 004dbfec
    FLD float ptr [EBP + -0x2a]         ; 004dbfef
    LEA EDI,[EBP + -0xe]                ; 004dbff2
    LEA ESI,[EBP + 0x3a]                ; 004dbff5
    FXCH ST2                            ; 004dbff8
    FSUB float ptr [EBP + -0x3e]        ; 004dbffa
    FXCH                                ; 004dbffd
    FSUB float ptr [EBP + -0x3a]        ; 004dbfff
    FXCH ST2                            ; 004dc002
    FSUB float ptr [EBP + -0x36]        ; 004dc004
    FXCH                                ; 004dc007
    FSTP float ptr [EBP + 0x3a]         ; 004dc009
    FXCH                                ; 004dc00c
    FSTP float ptr [EBP + 0x3e]         ; 004dc00e
    FSTP float ptr [EBP + 0x42]         ; 004dc011
    MOVSD ES:EDI,ESI                    ; 004dc014
    MOVSD ES:EDI,ESI                    ; 004dc015
    MOVSD ES:EDI,ESI                    ; 004dc016
    FLD float ptr [0x005c63a7]          ; 004dc017 | DAT_005c63a7
    FLD float ptr [EBP + -0xe]          ; 004dc01d
    FMUL ST1                            ; 004dc020
    FLD float ptr [EBP + -0xa]          ; 004dc022
    FMUL ST2                            ; 004dc025
    FLD float ptr [EBP + -0x6]          ; 004dc027
    FMULP ST3                           ; 004dc02a
    LEA EDI,[EBP + -0x1a]               ; 004dc02c
    LEA ESI,[EBP + 0x2e]                ; 004dc02f
    FXCH                                ; 004dc032
    FSTP float ptr [EBP + 0x2e]         ; 004dc034
    FSTP float ptr [EBP + 0x32]         ; 004dc037
    FSTP float ptr [EBP + 0x36]         ; 004dc03a
    MOVSD ES:EDI,ESI                    ; 004dc03d
    MOVSD ES:EDI,ESI                    ; 004dc03e
    MOVSD ES:EDI,ESI                    ; 004dc03f
    ADD ESP,0x4                         ; 004dc040
    FLD float ptr [EBP + -0x1a]         ; 004dc043
    FCOMP float ptr [EBP + -0x16]       ; 004dc046
    FNSTSW AX                           ; 004dc049
    SAHF                                ; 004dc04b
    JBE 0x004dc3d0                      ; 004dc04c
        ;   XREF to: 004dc3d0 (CONDITIONAL_JUMP)  ; LAB_004dc3d0
    FLD float ptr [EBP + -0x1a]         ; 004dc052
    FCOMP float ptr [EBP + -0x12]       ; 004dc055
    FNSTSW AX                           ; 004dc058
    SAHF                                ; 004dc05a
    JBE 0x004dc3d0                      ; 004dc05b
        ;   XREF to: 004dc3d0 (CONDITIONAL_JUMP)  ; LAB_004dc3d0
    MOV EAX,dword ptr [EBP + -0x1a]     ; 004dc061
    MOV dword ptr [EBP + 0x62],EAX      ; 004dc064
        ;   Label: LAB_004dc064
    PUSH 0x5c62cb                       ; 004dc067 | = "CLightstaff"
    PUSH EBX                            ; 004dc06c
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc06d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc072
    TEST EAX,EAX                        ; 004dc075
    JZ 0x004dc3eb                       ; 004dc077
        ;   XREF to: 004dc3eb (CONDITIONAL_JUMP)  ; LAB_004dc3eb
    FLD float ptr [EBP + 0x62]          ; 004dc07d
        ;   Label: LAB_004dc07d
    FLD ST0                             ; 004dc080
    FMUL double ptr [0x005c63af]        ; 004dc082 | DAT_005c63af
    FSTP ST1                            ; 004dc088
    FSTP float ptr [EBP + 0x62]         ; 004dc08a
    PUSH 0x5c62e2                       ; 004dc08d | DAT_005c62e2
        ;   Label: LAB_004dc08d
    PUSH EBX                            ; 004dc092
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc093
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc098
    TEST EAX,EAX                        ; 004dc09b
    JZ 0x004dc406                       ; 004dc09d
        ;   XREF to: 004dc406 (CONDITIONAL_JUMP)  ; LAB_004dc406
    FLD float ptr [EBP + 0x62]          ; 004dc0a3
        ;   Label: LAB_004dc0a3
    FLD ST0                             ; 004dc0a6
    FMUL double ptr [0x005c63b7]        ; 004dc0a8 | DAT_005c63b7
    FSTP ST1                            ; 004dc0ae
    FSTP float ptr [EBP + 0x62]         ; 004dc0b0
    FLD float ptr [EBP + 0x62]          ; 004dc0b3
        ;   Label: LAB_004dc0b3
    FCHS                                ; 004dc0b6
    FMUL double ptr [0x005c63b7]        ; 004dc0b8 | DAT_005c63b7
    FSTP float ptr [EBP + 0x5a]         ; 004dc0be
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004dc0c1
    MOV dword ptr [EBP + -0x1e],EAX     ; 004dc0c4
    LEA EAX,[EBP + -0x26]               ; 004dc0c7
    PUSH EAX                            ; 004dc0ca
    MOV EDX,dword ptr [0x005f2afc]      ; 004dc0cb | DAT_005f2afc
    XOR EDI,EDI                         ; 004dc0d1
    PUSH EDX                            ; 004dc0d3 | DAT_01bdd7e4
    MOV dword ptr [EBP + -0x26],EDI     ; 004dc0d4
    MOV dword ptr [EBP + -0x22],EDI     ; 004dc0d7
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 004dc0da
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004dc0df
    MOV ECX,dword ptr [0x005f2afc]      ; 004dc0e2 | DAT_005f2afc
    PUSH 0x42100000                     ; 004dc0e8
    PUSH ECX                            ; 004dc0ed | DAT_01bdd7e4
    CALL engine_drender.cpp_FUN_0046d090 ; 004dc0ee
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d090()
    ADD ESP,0x8                         ; 004dc0f3
    PUSH 0x2cfd900                      ; 004dc0f6 | DAT_02cfd900
    MOV ESI,dword ptr [0x005f2afc]      ; 004dc0fb | DAT_005f2afc
    PUSH ESI                            ; 004dc101 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 ; 004dc102
        ;   XREF to: 0046cc10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004dc107
    PUSH 0x2cfd900                      ; 004dc10a | DAT_02cfd900
    MOV EDI,dword ptr [0x005f2afc]      ; 004dc10f | DAT_005f2afc
    PUSH EDI                            ; 004dc115 | DAT_01bdd7e4
    LEA ESI,[EBP + -0x2]                ; 004dc116
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004dc119
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    FLD float ptr [EBP + -0x3e]         ; 004dc11e
    FLD float ptr [EBP + -0x3a]         ; 004dc121
    FLD float ptr [EBP + -0x36]         ; 004dc124
    LEA EDI,[EBP + 0x22]                ; 004dc127
    FXCH ST2                            ; 004dc12a
    FADD float ptr [EBP + -0x32]        ; 004dc12c
    FXCH                                ; 004dc12f
    FADD float ptr [EBP + -0x2e]        ; 004dc131
    FXCH ST2                            ; 004dc134
    FADD float ptr [EBP + -0x2a]        ; 004dc136
    FXCH                                ; 004dc139
    FSTP float ptr [EBP + -0x2]         ; 004dc13b
    FXCH                                ; 004dc13e
    FSTP float ptr [EBP + 0x2]          ; 004dc140
    FSTP float ptr [EBP + 0x6]          ; 004dc143
    MOVSD ES:EDI,ESI                    ; 004dc146
    MOVSD ES:EDI,ESI                    ; 004dc147
    MOVSD ES:EDI,ESI                    ; 004dc148
    FLD float ptr [0x005c63bf]          ; 004dc149 | DAT_005c63bf
    FLD float ptr [EBP + 0x22]          ; 004dc14f
    FMUL ST1                            ; 004dc152
    FLD float ptr [EBP + 0x26]          ; 004dc154
    FMUL ST2                            ; 004dc157
    FLD float ptr [EBP + 0x2a]          ; 004dc159
    FMULP ST3                           ; 004dc15c
    ADD ESP,0x8                         ; 004dc15e
    XOR EAX,EAX                         ; 004dc161
    PUSH 0x5c630a                       ; 004dc163 | = "CLightstaff"
    MOV [0x01c6e24c],EAX                ; 004dc168 | DAT_01c6e24c
    PUSH EBX                            ; 004dc16d
    LEA EDI,[EBP + 0x16]                ; 004dc16e
    LEA ESI,[EBP + 0xa]                 ; 004dc171
    FXCH                                ; 004dc174
    FSTP float ptr [EBP + 0xa]          ; 004dc176
    FSTP float ptr [EBP + 0xe]          ; 004dc179
    FSTP float ptr [EBP + 0x12]         ; 004dc17c
    MOVSD ES:EDI,ESI                    ; 004dc17f
    MOVSD ES:EDI,ESI                    ; 004dc180
    MOVSD ES:EDI,ESI                    ; 004dc181
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc182
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc187
    TEST EAX,EAX                        ; 004dc18a
    JZ 0x004dc463                       ; 004dc18c
        ;   XREF to: 004dc463 (CONDITIONAL_JUMP)  ; LAB_004dc463
    FLD float ptr [EBP + -0x2e]         ; 004dc192
        ;   Label: LAB_004dc192
    FMUL float ptr [0x005c63a7]         ; 004dc195 | DAT_005c63a7
    FSUBR float ptr [EBP + 0x1a]        ; 004dc19b
    FSTP float ptr [EBP + 0x1a]         ; 004dc19e
    PUSH 0x5c6321                       ; 004dc1a1 | = "CBurncross"
        ;   Label: LAB_004dc1a1
    PUSH EBX                            ; 004dc1a6
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc1a7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc1ac
    TEST EAX,EAX                        ; 004dc1af
    JZ 0x004dc47e                       ; 004dc1b1
        ;   XREF to: 004dc47e (CONDITIONAL_JUMP)  ; LAB_004dc47e
    XOR EDX,EDX                         ; 004dc1b7
        ;   Label: LAB_004dc1b7
    MOV dword ptr [EBP + 0x8e],EDX      ; 004dc1b9
    PUSH 0x5c6363                       ; 004dc1bf | = "CBoxActor"
        ;   Label: LAB_004dc1bf
    PUSH EBX                            ; 004dc1c4
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc1c5
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc1ca
    TEST EAX,EAX                        ; 004dc1cd
    JZ 0x004dc52e                       ; 004dc1cf
        ;   XREF to: 004dc52e (CONDITIONAL_JUMP)  ; LAB_004dc52e
    MOV EDI,dword ptr [0x007e17b4]      ; 004dc1d5 | g_CBoxActorClassInfo.name_hash
    PUSH EDI                            ; 004dc1db
    PUSH EBX                            ; 004dc1dc
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dc1dd
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004dc1e2
    PUSH 0x5c636d                       ; 004dc1e5 | = "journal.kfm"
    MOV ESI,EAX                         ; 004dc1ea
    ADD EAX,0x1d0                       ; 004dc1ec
    PUSH EAX                            ; 004dc1f1
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004dc1f2
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dc1f7
    TEST EAX,EAX                        ; 004dc1fa
    JNZ 0x004dc507                      ; 004dc1fc
        ;   XREF to: 004dc507 (CONDITIONAL_JUMP)  ; LAB_004dc507
    FLD float ptr [EBP + 0x46]          ; 004dc202
    FLD float ptr [EBP + 0x4a]          ; 004dc205
    FLD float ptr [EBP + 0x4e]          ; 004dc208
    FXCH ST2                            ; 004dc20b
    FADD float ptr [0x005c63c3]         ; 004dc20d | DAT_005c63c3
    FXCH                                ; 004dc213
    FLD float ptr [0x005c63c7]          ; 004dc215 | DAT_005c63c7
    FXCH                                ; 004dc21b
    FADD ST0,ST1                        ; 004dc21d
    FXCH ST3                            ; 004dc21f
    FADDP                               ; 004dc221
    FXCH ST2                            ; 004dc223
    FSTP float ptr [EBP + 0x4a]         ; 004dc225
    FXCH                                ; 004dc228
    FSTP float ptr [EBP + 0x4e]         ; 004dc22a
    FSTP float ptr [EBP + 0x46]         ; 004dc22d
    PUSH 0x5c6379                       ; 004dc230 | = "CBindEvil"
        ;   Label: LAB_004dc230
    PUSH EBX                            ; 004dc235
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc236
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc23b
    TEST EAX,EAX                        ; 004dc23e
    JZ 0x004dc256                       ; 004dc240
        ;   XREF to: 004dc256 (CONDITIONAL_JUMP)  ; LAB_004dc256
    FLD float ptr [EBP + 0x46]          ; 004dc242
    MOV EAX,0x3ec90fdb                  ; 004dc245
    FADD float ptr [0x005c63cb]         ; 004dc24a | DAT_005c63cb
    MOV dword ptr [EBP + 0x4a],EAX      ; 004dc250
    FSTP float ptr [EBP + 0x46]         ; 004dc253
    PUSH 0x5c6383                       ; 004dc256 | = "CExorcism"
        ;   Label: LAB_004dc256
    PUSH EBX                            ; 004dc25b
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc25c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc261
    TEST EAX,EAX                        ; 004dc264
    JZ 0x004dc274                       ; 004dc266
        ;   XREF to: 004dc274 (CONDITIONAL_JUMP)  ; LAB_004dc274
    FLD float ptr [EBP + 0x46]          ; 004dc268
    FADD float ptr [0x005c63c7]         ; 004dc26b | DAT_005c63c7
    FSTP float ptr [EBP + 0x46]         ; 004dc271
    PUSH 0x5c638d                       ; 004dc274 | = "CKeyActor"
        ;   Label: LAB_004dc274
    PUSH EBX                            ; 004dc279
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc27a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc27f
    TEST EAX,EAX                        ; 004dc282
    JZ 0x004dc292                       ; 004dc284
        ;   XREF to: 004dc292 (CONDITIONAL_JUMP)  ; LAB_004dc292
    FLD float ptr [EBP + 0x46]          ; 004dc286
    FADD float ptr [0x005c63c3]         ; 004dc289 | DAT_005c63c3
    FSTP float ptr [EBP + 0x46]         ; 004dc28f
    MOV EDX,dword ptr [0x01d72c08]      ; 004dc292 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_004dc292
    PUSH EDX                            ; 004dc298
    PUSH EBX                            ; 004dc299
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dc29a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004dc29f
    MOV EBX,EAX                         ; 004dc2a2
    TEST EAX,EAX                        ; 004dc2a4
    JZ 0x004dc30b                       ; 004dc2a6
        ;   XREF to: 004dc30b (CONDITIONAL_JUMP)  ; LAB_004dc30b
    PUSH 0x5c6397                       ; 004dc2a8 | = "axe1.kfm"
    ADD EAX,0x1d0                       ; 004dc2ad
    PUSH EAX                            ; 004dc2b2
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004dc2b3
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dc2b8
    TEST EAX,EAX                        ; 004dc2bb
    JNZ 0x004dc2d9                      ; 004dc2bd
        ;   XREF to: 004dc2d9 (CONDITIONAL_JUMP)  ; LAB_004dc2d9
    FLD float ptr [EBP + 0x4e]          ; 004dc2bf
    FLD float ptr [0x005c63cf]          ; 004dc2c2 | DAT_005c63cf
    FLD float ptr [EBP + 0x46]          ; 004dc2c8
    FADD ST0,ST1                        ; 004dc2cb
    FXCH ST2                            ; 004dc2cd
    FADDP                               ; 004dc2cf
    FXCH                                ; 004dc2d1
    FSTP float ptr [EBP + 0x46]         ; 004dc2d3
    FSTP float ptr [EBP + 0x4e]         ; 004dc2d6
    PUSH 0x5c63a0                       ; 004dc2d9 | = "ax.kfm"
        ;   Label: LAB_004dc2d9
    LEA EAX,[EBX + 0x1d0]               ; 004dc2de
    PUSH EAX                            ; 004dc2e4
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004dc2e5
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004dc2ea
    TEST EAX,EAX                        ; 004dc2ed
    JNZ 0x004dc30b                      ; 004dc2ef
        ;   XREF to: 004dc30b (CONDITIONAL_JUMP)  ; LAB_004dc30b
    FLD float ptr [EBP + 0x4e]          ; 004dc2f1
    FLD float ptr [0x005c63cf]          ; 004dc2f4 | DAT_005c63cf
    FLD float ptr [EBP + 0x46]          ; 004dc2fa
    FADD ST0,ST1                        ; 004dc2fd
    FXCH ST2                            ; 004dc2ff
    FADDP                               ; 004dc301
    FXCH                                ; 004dc303
    FSTP float ptr [EBP + 0x46]         ; 004dc305
    FSTP float ptr [EBP + 0x4e]         ; 004dc308
    PUSH 0x0                            ; 004dc30b
        ;   Label: LAB_004dc30b
    LEA EAX,[EBP + 0x46]                ; 004dc30d
    PUSH EAX                            ; 004dc310
    MOV ECX,dword ptr [0x005f2afc]      ; 004dc311 | DAT_005f2afc
    PUSH ECX                            ; 004dc317 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 004dc318
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004dc31d
    LEA EAX,[EBP + 0x16]                ; 004dc320
    PUSH EAX                            ; 004dc323
    PUSH 0x2cfd900                      ; 004dc324 | DAT_02cfd900
    MOV EBX,dword ptr [0x005f2afc]      ; 004dc329 | DAT_005f2afc
    PUSH EBX                            ; 004dc32f | DAT_01bdd7e4
    MOV ESI,dword ptr [EBP + 0x92]      ; 004dc330
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 004dc336
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004dc33b
    CMP ESI,0xfde8                      ; 004dc33e
    JGE 0x004dc542                      ; 004dc344
        ;   XREF to: 004dc542 (CONDITIONAL_JUMP)  ; LAB_004dc542
    PUSH ESI                            ; 004dc34a
    MOV EDX,dword ptr [0x005f2afc]      ; 004dc34b | DAT_005f2afc
    PUSH EDX                            ; 004dc351 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004dc352
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004dc357
    PUSH 0x1                            ; 004dc35a
    MOV ECX,dword ptr [0x005f2afc]      ; 004dc35c | DAT_005f2afc
    PUSH ECX                            ; 004dc362 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 004dc363
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 004dc368
    PUSH 0x2e7                          ; 004dc36b
    MOV EBX,dword ptr [EBP + 0x5e]      ; 004dc370
    PUSH 0x0                            ; 004dc373
    PUSH EBX                            ; 004dc375
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 004dc376
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004dc37b
    MOV ESI,dword ptr [0x005f2afc]      ; 004dc37e | DAT_005f2afc
    PUSH ESI                            ; 004dc384 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 004dc385
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004dc38a
    MOV EDI,dword ptr [0x005f2afc]      ; 004dc38d | DAT_005f2afc
        ;   Label: LAB_004dc38d
    PUSH EDI                            ; 004dc393 | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 004dc394
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004dc399
    MOV EAX,[0x005f2afc]                ; 004dc39c | DAT_005f2afc
    PUSH EAX                            ; 004dc3a1 | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 004dc3a2
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004dc3a7
    MOV EDX,dword ptr [0x005f2afc]      ; 004dc3aa | DAT_005f2afc
    PUSH EDX                            ; 004dc3b0 | DAT_01bdd7e4
    CALL engine_drender.cpp_popViewport_FUN_0046d320 ; 004dc3b1
        ;   XREF to: 0046d320 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_popViewport_FUN_0046d320()
    MOV EAX,[0x00603b28]                ; 004dc3b6 | g_CDemonSetPtr | g_CDemonSetInstance
    ADD ESP,0x4                         ; 004dc3bb
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004dc3be | g_CDemonSetInstance.rendering_mode
    LEA ESP,[EBP + 0x66]                ; 004dc3c8
        ;   Label: LAB_004dc3c8
    POP EBP                             ; 004dc3cb
    POP EDI                             ; 004dc3cc
    POP ESI                             ; 004dc3cd
    POP EBX                             ; 004dc3ce
    RET                                 ; 004dc3cf
    FLD float ptr [EBP + -0x16]         ; 004dc3d0
        ;   Label: LAB_004dc3d0
    FCOMP float ptr [EBP + -0x12]       ; 004dc3d3
    FNSTSW AX                           ; 004dc3d6
    SAHF                                ; 004dc3d8
    JBE 0x004dc3e3                      ; 004dc3d9
        ;   XREF to: 004dc3e3 (CONDITIONAL_JUMP)  ; LAB_004dc3e3
    MOV EAX,dword ptr [EBP + -0x16]     ; 004dc3db
    JMP 0x004dc064                      ; 004dc3de
        ;   XREF to: 004dc064 (UNCONDITIONAL_JUMP)  ; LAB_004dc064
    MOV EAX,dword ptr [EBP + -0x12]     ; 004dc3e3
        ;   Label: LAB_004dc3e3
    JMP 0x004dc064                      ; 004dc3e6
        ;   XREF to: 004dc064 (UNCONDITIONAL_JUMP)  ; LAB_004dc064
    PUSH 0x5c62d7                       ; 004dc3eb | = "CFirestaff"
        ;   Label: LAB_004dc3eb
    PUSH EBX                            ; 004dc3f0
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc3f1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc3f6
    TEST EAX,EAX                        ; 004dc3f9
    JNZ 0x004dc07d                      ; 004dc3fb
        ;   XREF to: 004dc07d (CONDITIONAL_JUMP)  ; LAB_004dc07d
    JMP 0x004dc08d                      ; 004dc401
        ;   XREF to: 004dc08d (UNCONDITIONAL_JUMP)  ; LAB_004dc08d
    PUSH 0x5c62e7                       ; 004dc406 | = "CKeyActor"
        ;   Label: LAB_004dc406
    PUSH EBX                            ; 004dc40b
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc40c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc411
    TEST EAX,EAX                        ; 004dc414
    JNZ 0x004dc0a3                      ; 004dc416
        ;   XREF to: 004dc0a3 (CONDITIONAL_JUMP)  ; LAB_004dc0a3
    PUSH 0x5c62f1                       ; 004dc41c | = "CExorcism"
    PUSH EBX                            ; 004dc421
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc422
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc427
    TEST EAX,EAX                        ; 004dc42a
    JNZ 0x004dc0a3                      ; 004dc42c
        ;   XREF to: 004dc0a3 (CONDITIONAL_JUMP)  ; LAB_004dc0a3
    PUSH 0x5c62fb                       ; 004dc432 | DAT_005c62fb
    PUSH EBX                            ; 004dc437
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc438
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc43d
    TEST EAX,EAX                        ; 004dc440
    JNZ 0x004dc0a3                      ; 004dc442
        ;   XREF to: 004dc0a3 (CONDITIONAL_JUMP)  ; LAB_004dc0a3
    PUSH 0x5c6300                       ; 004dc448 | = "CBindEvil"
    PUSH EBX                            ; 004dc44d
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc44e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc453
    TEST EAX,EAX                        ; 004dc456
    JNZ 0x004dc0a3                      ; 004dc458
        ;   XREF to: 004dc0a3 (CONDITIONAL_JUMP)  ; LAB_004dc0a3
    JMP 0x004dc0b3                      ; 004dc45e
        ;   XREF to: 004dc0b3 (UNCONDITIONAL_JUMP)  ; LAB_004dc0b3
    PUSH 0x5c6316                       ; 004dc463 | = "CFirestaff"
        ;   Label: LAB_004dc463
    PUSH EBX                            ; 004dc468
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc469
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc46e
    TEST EAX,EAX                        ; 004dc471
    JNZ 0x004dc192                      ; 004dc473
        ;   XREF to: 004dc192 (CONDITIONAL_JUMP)  ; LAB_004dc192
    JMP 0x004dc1a1                      ; 004dc479
        ;   XREF to: 004dc1a1 (UNCONDITIONAL_JUMP)  ; LAB_004dc1a1
    PUSH 0x5c632c                       ; 004dc47e | = "CFirestaff"
        ;   Label: LAB_004dc47e
    PUSH EBX                            ; 004dc483
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc484
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc489
    TEST EAX,EAX                        ; 004dc48c
    JNZ 0x004dc1b7                      ; 004dc48e
        ;   XREF to: 004dc1b7 (CONDITIONAL_JUMP)  ; LAB_004dc1b7
    PUSH 0x5c6337                       ; 004dc494 | = "CHeal"
    PUSH EBX                            ; 004dc499
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc49a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc49f
    TEST EAX,EAX                        ; 004dc4a2
    JNZ 0x004dc1b7                      ; 004dc4a4
        ;   XREF to: 004dc1b7 (CONDITIONAL_JUMP)  ; LAB_004dc1b7
    PUSH 0x5c633d                       ; 004dc4aa | = "CExorcism"
    PUSH EBX                            ; 004dc4af
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc4b0
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc4b5
    TEST EAX,EAX                        ; 004dc4b8
    JNZ 0x004dc1b7                      ; 004dc4ba
        ;   XREF to: 004dc1b7 (CONDITIONAL_JUMP)  ; LAB_004dc1b7
    PUSH 0x5c6347                       ; 004dc4c0 | = "CHolycross"
    PUSH EBX                            ; 004dc4c5
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc4c6
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc4cb
    TEST EAX,EAX                        ; 004dc4ce
    JNZ 0x004dc1b7                      ; 004dc4d0
        ;   XREF to: 004dc1b7 (CONDITIONAL_JUMP)  ; LAB_004dc1b7
    PUSH 0x5c6352                       ; 004dc4d6 | = "CLightstaff"
    PUSH EBX                            ; 004dc4db
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc4dc
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc4e1
    TEST EAX,EAX                        ; 004dc4e4
    JNZ 0x004dc1b7                      ; 004dc4e6
        ;   XREF to: 004dc1b7 (CONDITIONAL_JUMP)  ; LAB_004dc1b7
    PUSH 0x5c635e                       ; 004dc4ec | DAT_005c635e
    PUSH EBX                            ; 004dc4f1
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dc4f2
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc4f7
    TEST EAX,EAX                        ; 004dc4fa
    JNZ 0x004dc1b7                      ; 004dc4fc
        ;   XREF to: 004dc1b7 (CONDITIONAL_JUMP)  ; LAB_004dc1b7
    JMP 0x004dc1bf                      ; 004dc502
        ;   XREF to: 004dc1bf (UNCONDITIONAL_JUMP)  ; LAB_004dc1bf
    LEA EAX,[EBP + 0x46]                ; 004dc507
        ;   Label: LAB_004dc507
    LEA EDX,[ESI + 0x6d0]               ; 004dc50a
    CMP EAX,EDX                         ; 004dc510
    JZ 0x004dc230                       ; 004dc512
        ;   XREF to: 004dc230 (CONDITIONAL_JUMP)  ; LAB_004dc230
    MOV EAX,dword ptr [EDX]             ; 004dc518
    MOV dword ptr [EBP + 0x46],EAX      ; 004dc51a
    MOV EAX,dword ptr [EDX + 0x4]       ; 004dc51d
    MOV dword ptr [EBP + 0x4a],EAX      ; 004dc520
    MOV EAX,dword ptr [EDX + 0x8]       ; 004dc523
    MOV dword ptr [EBP + 0x4e],EAX      ; 004dc526
    JMP 0x004dc230                      ; 004dc529
        ;   XREF to: 004dc230 (UNCONDITIONAL_JUMP)  ; LAB_004dc230
    MOV dword ptr [EBP + 0x4e],EAX      ; 004dc52e
        ;   Label: LAB_004dc52e
    MOV dword ptr [EBP + 0x46],EAX      ; 004dc531
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004dc534
    MOV dword ptr [EBP + 0x4a],EAX      ; 004dc53a
    JMP 0x004dc230                      ; 004dc53d
        ;   XREF to: 004dc230 (UNCONDITIONAL_JUMP)  ; LAB_004dc230
    PUSH -0x1                           ; 004dc542
        ;   Label: LAB_004dc542
    MOV EDI,dword ptr [EBP + 0x5e]      ; 004dc544
    PUSH 0x0                            ; 004dc547
    PUSH EDI                            ; 004dc549
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 004dc54a
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004dc54f
    JMP 0x004dc38d                      ; 004dc552
        ;   XREF to: 004dc38d (UNCONDITIONAL_JUMP)  ; LAB_004dc38d

