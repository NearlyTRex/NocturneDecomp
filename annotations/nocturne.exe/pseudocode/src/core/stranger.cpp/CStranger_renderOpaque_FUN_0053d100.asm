; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_renderOpaque_FUN_0053d100(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x22c]:1  local_22c
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_0053d0d8 = 0053d2d6
;   double DOUBLE_00595c97 = 0.990000000000000
;   double DOUBLE_00595c9f = 0.950000000000000
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.collision_normal.x
;   undefined4 DAT_02dc9f50
;   undefined4 DAT_02dc9f88
;   undefined4 DAT_02dc9fa8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;   core_cloth.cpp_CClothList_reset_FUN_00438320
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_fire.cpp_CFireEffect_createLaserPath_FUN_0048b440
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_0050fdd0
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_stranger.cpp_CStranger_getThrowDirection_FUN_0053f260
;   core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d100
        ;   Label: core_stranger.cpp_CStranger_renderOpaque_FUN_0053d100
    PUSH ESI                            ; 0053d101
    PUSH EDI                            ; 0053d102
    PUSH EBP                            ; 0053d103
    MOV EBP,ESP                         ; 0053d104
    SUB ESP,0x21c                       ; 0053d106
    SUB EBP,0x7e                        ; 0053d10c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053d10f
    PUSH EBX                            ; 0053d115
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 0053d116
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0053d11b
    TEST EAX,EAX                        ; 0053d11e
    JZ 0x0053d4f7                       ; 0053d120
        ;   XREF to: 0053d4f7 (CONDITIONAL_JUMP)  ; LAB_0053d4f7
    MOV EAX,[0x02dc9fa8]                ; 0053d126 | DAT_02dc9fa8
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 0053d12b
    JNZ 0x0053d4ff                      ; 0053d133
        ;   XREF to: 0053d4ff (CONDITIONAL_JUMP)  ; LAB_0053d4ff
    PUSH 0x6                            ; 0053d139
        ;   Label: LAB_0053d139
    PUSH EBX                            ; 0053d13b
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053d13c
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 0053d141
    ADD ESP,0x8                         ; 0053d144
    FLD float ptr [EBP + 0x7a]          ; 0053d147
    FCOMP double ptr [0x00595c97]       ; 0053d14a | DOUBLE_00595c97
    FNSTSW AX                           ; 0053d150
    SAHF                                ; 0053d152
    JBE 0x0053d264                      ; 0053d153
        ;   XREF to: 0053d264 (CONDITIONAL_JUMP)  ; LAB_0053d264
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053d159
    XOR ESI,ESI                         ; 0053d15f
    TEST EAX,EAX                        ; 0053d161
    JZ 0x0053d168                       ; 0053d163
        ;   XREF to: 0053d168 (CONDITIONAL_JUMP)  ; LAB_0053d168
    LEA ESI,[EAX + 0x20]                ; 0053d165
    MOV EDX,dword ptr [EBX + 0x1fa94]   ; 0053d168
        ;   Label: LAB_0053d168
    TEST EDX,EDX                        ; 0053d16e
    JZ 0x0053d175                       ; 0053d170
        ;   XREF to: 0053d175 (CONDITIONAL_JUMP)  ; LAB_0053d175
    LEA ESI,[EDX + 0x20]                ; 0053d172
    TEST ESI,ESI                        ; 0053d175
        ;   Label: LAB_0053d175
    JZ 0x0053d264                       ; 0053d177
        ;   XREF to: 0053d264 (CONDITIONAL_JUMP)  ; LAB_0053d264
    MOV ECX,dword ptr [0x005be368]      ; 0053d17d | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0053d183 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0053d184
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053d189
    PUSH 0x1                            ; 0053d18c
    MOV EDI,dword ptr [0x005be368]      ; 0053d18e | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 0053d194 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 0053d195
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0053d19a
    PUSH EBX                            ; 0053d19d
    MOV EAX,[0x005be368]                ; 0053d19e | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0053d1a3 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0053d1a4
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053d1a9
    MOV EDX,dword ptr [EBX + 0x1fa94]   ; 0053d1ac
    PUSH EDX                            ; 0053d1b2
    MOV ECX,dword ptr [0x005be368]      ; 0053d1b3 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0053d1b9 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0053d1ba
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053d1bf
    MOV EDI,dword ptr [EBX + 0x24f0]    ; 0053d1c2
    PUSH EDI                            ; 0053d1c8
    MOV EAX,[0x005be368]                ; 0053d1c9 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0053d1ce | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0053d1cf
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053d1d4
    LEA EAX,[EBP + 0x1e]                ; 0053d1d7
    PUSH EAX                            ; 0053d1da
    PUSH EBX                            ; 0053d1db
    CALL core_stranger.cpp_CStranger_getThrowDirection_FUN_0053f260 ; 0053d1dc
        ;   XREF to: 0053f260 (UNCONDITIONAL_CALL)  ; CVector3f * core_stranger.cpp_CStranger_getThrowDirection_FUN_0053f260(CStranger * this_ptr, CVector3f * out_direction)
    ADD ESP,0x8                         ; 0053d1e1
    PUSH EAX                            ; 0053d1e4
    LEA EAX,[EBP + 0x12]                ; 0053d1e5
    PUSH EAX                            ; 0053d1e8
    PUSH EBX                            ; 0053d1e9
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0053d1ea
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0053d1ef
    LEA EAX,[EBP + 0x12]                ; 0053d1f2
    PUSH EAX                            ; 0053d1f5
    PUSH ESI                            ; 0053d1f6
    MOV EDX,dword ptr [0x005be368]      ; 0053d1f7 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 0053d1fd | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_0050fdd0 ; 0053d1fe
        ;   XREF to: 0050fdd0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_0050fdd0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * direction)
    FLDZ                                ; 0053d203
    MOV dword ptr [EBP + 0x7a],EAX      ; 0053d205
    ADD ESP,0xc                         ; 0053d208
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0053d20b
    MOV dword ptr [EBP + 0x76],EAX      ; 0053d20e
    FCOMP float ptr [EBP + 0x76]        ; 0053d211
    FNSTSW AX                           ; 0053d214
    SAHF                                ; 0053d216
    JBE 0x0053d220                      ; 0053d217
        ;   XREF to: 0053d220 (CONDITIONAL_JUMP)  ; LAB_0053d220
    MOV dword ptr [EBP + 0x76],0x41200000 ; 0053d219
    PUSH 0x0                            ; 0053d220
        ;   Label: LAB_0053d220
    PUSH 0x0                            ; 0053d222
    MOV EAX,[0x005be368]                ; 0053d224 | g_CDemonSet_PTR_005be368
    PUSH 0xff                           ; 0053d229
    ADD EAX,0x14cd40                    ; 0053d22e
    PUSH dword ptr [EBP + 0x76]         ; 0053d233
    PUSH EAX                            ; 0053d236 | g_CDemonSet_01e57284.collision_normal.x
    PUSH 0x3f800000                     ; 0053d237
    LEA EAX,[EBP + 0x12]                ; 0053d23c
    PUSH 0x3f800000                     ; 0053d23f
    PUSH EAX                            ; 0053d244
    PUSH ESI                            ; 0053d245
    MOV ESI,dword ptr [0x005b80f0]      ; 0053d246 | g_CFireEffect_PTR_005b80f0
    PUSH ESI                            ; 0053d24c
    CALL core_fire.cpp_CFireEffect_createLaserPath_FUN_0048b440 ; 0053d24d
        ;   XREF to: 0048b440 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserPath_FUN_0048b440(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * velocity, float beam_width, ...)
    ADD ESP,0x28                        ; 0053d252
    MOV EDI,dword ptr [0x005be368]      ; 0053d255 | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 0053d25b | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0053d25c
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053d261
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053d264
        ;   Label: LAB_0053d264
    TEST EAX,EAX                        ; 0053d26a
    JZ 0x0053d387                       ; 0053d26c
        ;   XREF to: 0053d387 (CONDITIONAL_JUMP)  ; LAB_0053d387
    CMP EAX,dword ptr [EBX + 0x24ac]    ; 0053d272
    JZ 0x0053d387                       ; 0053d278
        ;   XREF to: 0053d387 (CONDITIONAL_JUMP)  ; LAB_0053d387
    CMP EAX,dword ptr [EBX + 0x24f0]    ; 0053d27e
    JZ 0x0053d387                       ; 0053d284
        ;   XREF to: 0053d387 (CONDITIONAL_JUMP)  ; LAB_0053d387
    MOV EAX,[0x02dc9fa8]                ; 0053d28a | DAT_02dc9fa8
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 0053d28f
    JZ 0x0053d387                       ; 0053d297
        ;   XREF to: 0053d387 (CONDITIONAL_JUMP)  ; LAB_0053d387
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053d29d
    PUSH EAX                            ; 0053d2a3
    MOV ESI,dword ptr [EAX + 0x14c]     ; 0053d2a4
    CALL dword ptr [ESI + 0x8]          ; 0053d2aa
    ADD ESP,0x4                         ; 0053d2ad
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053d2b0
    XOR ESI,ESI                         ; 0053d2b6
    TEST EAX,EAX                        ; 0053d2b8
    JZ 0x0053d61c                       ; 0053d2ba
        ;   XREF to: 0053d61c (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 0053d2c0
    CMP EAX,0x8                         ; 0053d2c6
    JA 0x0053d61c                       ; 0053d2c9
        ;   XREF to: 0053d61c (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x53d0d8]  ; 0053d2cf | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0053d2d6
        ;   Label: caseD_0
    PUSH EAX                            ; 0053d2db
        ;   Label: LAB_0053d2db
    PUSH EBX                            ; 0053d2dc
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053d2dd
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 0053d2e2
    ADD ESP,0x8                         ; 0053d2e5
    FLD float ptr [EBP + 0x7a]          ; 0053d2e8
    FCOMP double ptr [0x00595c9f]       ; 0053d2eb | DOUBLE_00595c9f
    FNSTSW AX                           ; 0053d2f1
    SAHF                                ; 0053d2f3
    JBE 0x0053d2fb                      ; 0053d2f4
        ;   XREF to: 0053d2fb (CONDITIONAL_JUMP)  ; LAB_0053d2fb
    MOV ESI,0x1                         ; 0053d2f6
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053d2fb
        ;   Label: LAB_0053d2fb
    MOV EDI,dword ptr [EAX + 0x2d8]     ; 0053d301
    CMP EDI,0x1                         ; 0053d307
    JNZ 0x0053d623                      ; 0053d30a
        ;   XREF to: 0053d623 (CONDITIONAL_JUMP)  ; LAB_0053d623
    CMP dword ptr [EBX + 0x2a84],0x8    ; 0053d310
    JNZ 0x0053d623                      ; 0053d317
        ;   XREF to: 0053d623 (CONDITIONAL_JUMP)  ; LAB_0053d623
    MOV ESI,EDI                         ; 0053d31d
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053d31f
        ;   Label: LAB_0053d31f
    PUSH EAX                            ; 0053d325
    MOV EDI,dword ptr [EAX + 0x14c]     ; 0053d326
    CALL dword ptr [EDI + 0xe8]         ; 0053d32c
    ADD ESP,0x4                         ; 0053d332
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053d335
        ;   Label: LAB_0053d335
    CMP dword ptr [EAX + 0x2d8],0x0     ; 0053d33b
    JNZ 0x0053d37c                      ; 0053d342
        ;   XREF to: 0053d37c (CONDITIONAL_JUMP)  ; LAB_0053d37c
    PUSH 0x1                            ; 0053d344
    PUSH EBX                            ; 0053d346
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660 ; 0053d347
        ;   XREF to: 0053a660 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0053d34c
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053d34f
    PUSH EAX                            ; 0053d355
    MOV EDI,dword ptr [EAX + 0x14c]     ; 0053d356
    CALL dword ptr [EDI + 0x8]          ; 0053d35c
    ADD ESP,0x4                         ; 0053d35f
    TEST ESI,ESI                        ; 0053d362
    JZ 0x0053d37c                       ; 0053d364
        ;   XREF to: 0053d37c (CONDITIONAL_JUMP)  ; LAB_0053d37c
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0053d366
    PUSH EAX                            ; 0053d36c
    MOV ESI,dword ptr [EAX + 0x14c]     ; 0053d36d
    CALL dword ptr [ESI + 0xe8]         ; 0053d373
    ADD ESP,0x4                         ; 0053d379
    PUSH 0x0                            ; 0053d37c
        ;   Label: LAB_0053d37c
    PUSH EBX                            ; 0053d37e
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660 ; 0053d37f
        ;   XREF to: 0053a660 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0053d384
    CMP dword ptr [EBX + 0x1fa00],0x0   ; 0053d387
        ;   Label: LAB_0053d387
    JZ 0x0053d4b8                       ; 0053d38e
        ;   XREF to: 0053d4b8 (CONDITIONAL_JUMP)  ; LAB_0053d4b8
    MOV EAX,[0x02dc9fa8]                ; 0053d394 | DAT_02dc9fa8
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 0053d399
    JZ 0x0053d4b8                       ; 0053d3a1
        ;   XREF to: 0053d4b8 (CONDITIONAL_JUMP)  ; LAB_0053d4b8
    LEA EAX,[EBX + 0x1f5a0]             ; 0053d3a7
    MOV EAX,dword ptr [EAX + 0x454]     ; 0053d3ad
    MOV dword ptr [EBP + 0x72],EAX      ; 0053d3b3
    TEST EAX,EAX                        ; 0053d3b6
    JZ 0x0053d4b8                       ; 0053d3b8
        ;   XREF to: 0053d4b8 (CONDITIONAL_JUMP)  ; LAB_0053d4b8
    PUSH EBX                            ; 0053d3be
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0053d3bf
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053d3c4
    MOV EAX,dword ptr [EBX + 0x1fa00]   ; 0053d3c7
    LEA EDI,[EBX + 0xfd0]               ; 0053d3cd
    CMP EAX,0x2                         ; 0053d3d3
    JNZ 0x0053d630                      ; 0053d3d6
        ;   XREF to: 0053d630 (CONDITIONAL_JUMP)  ; LAB_0053d630
    MOV ESI,0xbe0fd3f6                  ; 0053d3dc
    XOR EAX,EAX                         ; 0053d3e1
    MOV EDX,0xc04507c8                  ; 0053d3e3
    MOV dword ptr [EBP + 0xe],EAX       ; 0053d3e8
    LEA EAX,[EBP + 0x6]                 ; 0053d3eb
    MOV ECX,0x3bc63091                  ; 0053d3ee
    PUSH EAX                            ; 0053d3f3
    MOV EAX,0x3f09a30a                  ; 0053d3f4
    MOV dword ptr [EBP + 0x6],ESI       ; 0053d3f9
    MOV dword ptr [EBP + 0x32],EAX      ; 0053d3fc
    LEA EAX,[EBP + 0x2a]                ; 0053d3ff
    MOV dword ptr [EBP + 0xa],EDX       ; 0053d402
    PUSH EAX                            ; 0053d405
    LEA EAX,[EBP + 0xfffffec2]          ; 0053d406
    MOV ESI,0x3e9135db                  ; 0053d40c
    PUSH EAX                            ; 0053d411
    MOV dword ptr [EBP + 0x2a],ECX      ; 0053d412
    MOV dword ptr [EBP + 0x2e],ESI      ; 0053d415
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053d418
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x02dc9f50]      ; 0053d41d | DAT_02dc9f50
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053d423
    SUB EAX,ESI                         ; 0053d42a
    SHL EAX,0x4                         ; 0053d42c
    ADD ESP,0xc                         ; 0053d42f
    ADD EDI,EAX                         ; 0053d432
    PUSH EDI                            ; 0053d434
    LEA EAX,[EBP + 0xfffffec2]          ; 0053d435
    PUSH EAX                            ; 0053d43b
    LEA ESI,[EBP + -0x7e]               ; 0053d43c
    LEA EDI,[EBP + -0x4e]               ; 0053d43f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053d442
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0053d447
    LEA ESI,[EBP + -0x7e]               ; 0053d44c
    ADD ESP,0x8                         ; 0053d44f
        ;   Label: LAB_0053d44f
    MOVSD.REP ES:EDI,ESI                ; 0053d452
    LEA EAX,[EBP + 0x4e]                ; 0053d454
    PUSH EAX                            ; 0053d457
    LEA EAX,[EBP + -0x4e]               ; 0053d458
    PUSH EAX                            ; 0053d45b
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0053d45c
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0053d461
    LEA EAX,[EBP + 0x42]                ; 0053d464
    PUSH EAX                            ; 0053d467
    LEA EAX,[EBP + -0x4e]               ; 0053d468
    PUSH EAX                            ; 0053d46b
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 0053d46c
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0053d471
    LEA EAX,[EBP + 0x42]                ; 0053d474
    PUSH EAX                            ; 0053d477
    LEA EAX,[EBP + 0x4e]                ; 0053d478
    PUSH EAX                            ; 0053d47b
    MOV EDX,dword ptr [0x005ae704]      ; 0053d47c | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0053d482 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0053d483
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0053d488
    MOV EAX,dword ptr [EBP + 0x72]      ; 0053d48b
    PUSH -0x1                           ; 0053d48e
    ADD EAX,0x150                       ; 0053d490
    PUSH 0x0                            ; 0053d495
    PUSH EAX                            ; 0053d497
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0053d498
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0053d49d
    MOV ECX,dword ptr [0x005ae704]      ; 0053d4a0 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0053d4a6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0053d4a7
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053d4ac
    PUSH EBX                            ; 0053d4af
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0053d4b0
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053d4b5
    MOV EAX,[0x02dc9fa8]                ; 0053d4b8 | DAT_02dc9fa8
        ;   Label: LAB_0053d4b8
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 0053d4bd
    JNZ 0x0053d4f2                      ; 0053d4c5
        ;   XREF to: 0053d4f2 (CONDITIONAL_JUMP)  ; LAB_0053d4f2
    MOV EDI,dword ptr [0x005ae704]      ; 0053d4c7 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 0053d4cd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0053d4ce
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053d4d3
    TEST EAX,EAX                        ; 0053d4d6
    JNZ 0x0053d4f2                      ; 0053d4d8
        ;   XREF to: 0053d4f2 (CONDITIONAL_JUMP)  ; LAB_0053d4f2
    CMP dword ptr [EBX + 0x2a8c],0x0    ; 0053d4da
    JLE 0x0053d4f2                      ; 0053d4e1
        ;   XREF to: 0053d4f2 (CONDITIONAL_JUMP)  ; LAB_0053d4f2
    ADD EBX,0x2a8c                      ; 0053d4e3
    PUSH EBX                            ; 0053d4e9
    CALL core_cloth.cpp_CClothList_reset_FUN_00438320 ; 0053d4ea
        ;   XREF to: 00438320 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_00438320(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0053d4ef
    MOV EAX,0x1                         ; 0053d4f2
        ;   Label: LAB_0053d4f2
    LEA ESP,[EBP + 0x7e]                ; 0053d4f7
        ;   Label: LAB_0053d4f7
    POP EBP                             ; 0053d4fa
    POP EDI                             ; 0053d4fb
    POP ESI                             ; 0053d4fc
    POP EBX                             ; 0053d4fd
    RET                                 ; 0053d4fe
    PUSH EBX                            ; 0053d4ff
        ;   Label: LAB_0053d4ff
    MOV EDI,0x40490fdb                  ; 0053d500
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0053d505
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    LEA EAX,[EBP + 0x5a]                ; 0053d50a
    MOV EDX,0x3f38263b                  ; 0053d50d
    ADD ESP,0x4                         ; 0053d512
    XOR ECX,ECX                         ; 0053d515
    MOV dword ptr [EBP + 0x5e],EDI      ; 0053d517
    MOV dword ptr [EBP + 0x5a],ECX      ; 0053d51a
    MOV dword ptr [EBP + 0x62],ECX      ; 0053d51d
    PUSH EAX                            ; 0053d520
    LEA EAX,[EBP + -0x12]               ; 0053d521
    MOV dword ptr [EBP + -0x12],ECX     ; 0053d524
    PUSH EAX                            ; 0053d527
    LEA EAX,[EBP + 0xffffff22]          ; 0053d528
    MOV ECX,0x3e3d70a4                  ; 0053d52e
    PUSH EAX                            ; 0053d533
    MOV dword ptr [EBP + -0xe],EDX      ; 0053d534
    MOV dword ptr [EBP + -0xa],ECX      ; 0053d537
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053d53a
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x02dc9f50]      ; 0053d53f | DAT_02dc9f50
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053d545
    SUB EAX,ESI                         ; 0053d54c
    MOV ESI,EAX                         ; 0053d54e
    SHL ESI,0x4                         ; 0053d550
    LEA EAX,[EBX + 0xfd0]               ; 0053d553
    ADD ESP,0xc                         ; 0053d559
    ADD EAX,ESI                         ; 0053d55c
    PUSH EAX                            ; 0053d55e
    LEA EAX,[EBP + 0xffffff22]          ; 0053d55f
    PUSH EAX                            ; 0053d565
    LEA ESI,[EBP + 0xfffffe62]          ; 0053d566
    LEA EDI,[EBP + 0xffffff52]          ; 0053d56c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053d572
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0053d577
    LEA EAX,[EBP + -0x1e]               ; 0053d57a
    MOV ECX,0xc                         ; 0053d57d
    PUSH EAX                            ; 0053d582
    LEA EAX,[EBP + 0xffffff52]          ; 0053d583
    LEA ESI,[EBP + 0xfffffe62]          ; 0053d589
    PUSH EAX                            ; 0053d58f
    MOVSD.REP ES:EDI,ESI                ; 0053d590
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 0053d592
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0053d597
    LEA EAX,[EBP + -0x6]                ; 0053d59a
    PUSH EAX                            ; 0053d59d
    LEA EAX,[EBP + 0xffffff52]          ; 0053d59e
    PUSH EAX                            ; 0053d5a4
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0053d5a5
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0053d5aa
    LEA EAX,[EBP + -0x1e]               ; 0053d5ad
    PUSH EAX                            ; 0053d5b0
    LEA EAX,[EBP + -0x6]                ; 0053d5b1
    PUSH EAX                            ; 0053d5b4
    MOV ESI,dword ptr [0x005ae704]      ; 0053d5b5 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0053d5bb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0053d5bc
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0053d5c1
    PUSH -0x1                           ; 0053d5c4
    LEA EAX,[EBX + 0x1fb40]             ; 0053d5c6
    PUSH 0x0                            ; 0053d5cc
    PUSH EAX                            ; 0053d5ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0053d5cf
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0053d5d4
    MOV EDI,dword ptr [0x005ae704]      ; 0053d5d7 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 0053d5dd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0053d5de
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053d5e3
    PUSH EBX                            ; 0053d5e6
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0053d5e7
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053d5ec
    JMP 0x0053d139                      ; 0053d5ef
        ;   XREF to: 0053d139 (UNCONDITIONAL_JUMP)  ; LAB_0053d139
    MOV EAX,0x4                         ; 0053d5f4
        ;   Label: caseD_1
    JMP 0x0053d2db                      ; 0053d5f9
        ;   XREF to: 0053d2db (UNCONDITIONAL_JUMP)  ; LAB_0053d2db
    MOV EAX,0x7                         ; 0053d5fe
        ;   Label: caseD_4
    JMP 0x0053d2db                      ; 0053d603
        ;   XREF to: 0053d2db (UNCONDITIONAL_JUMP)  ; LAB_0053d2db
    MOV EAX,0x5                         ; 0053d608
        ;   Label: caseD_2
    JMP 0x0053d2db                      ; 0053d60d
        ;   XREF to: 0053d2db (UNCONDITIONAL_JUMP)  ; LAB_0053d2db
    MOV EAX,0x8                         ; 0053d612
        ;   Label: caseD_7
    JMP 0x0053d2db                      ; 0053d617
        ;   XREF to: 0053d2db (UNCONDITIONAL_JUMP)  ; LAB_0053d2db
    XOR EAX,EAX                         ; 0053d61c
        ;   Label: caseD_3
    JMP 0x0053d2db                      ; 0053d61e
        ;   XREF to: 0053d2db (UNCONDITIONAL_JUMP)  ; LAB_0053d2db
    TEST ESI,ESI                        ; 0053d623
        ;   Label: LAB_0053d623
    JNZ 0x0053d31f                      ; 0053d625
        ;   XREF to: 0053d31f (CONDITIONAL_JUMP)  ; LAB_0053d31f
    JMP 0x0053d335                      ; 0053d62b
        ;   XREF to: 0053d335 (UNCONDITIONAL_JUMP)  ; LAB_0053d335
    MOV EDX,0x3f94bac7                  ; 0053d630
        ;   Label: LAB_0053d630
    MOV ECX,0x3d488e0e                  ; 0053d635
    MOV ESI,0x3ebc7410                  ; 0053d63a
    LEA EAX,[EBP + 0x66]                ; 0053d63f
    MOV dword ptr [EBP + 0x66],EDX      ; 0053d642
    MOV dword ptr [EBP + 0x6e],ECX      ; 0053d645
    PUSH EAX                            ; 0053d648
    MOV EAX,0x3f033b43                  ; 0053d649
    MOV dword ptr [EBP + 0x6a],ESI      ; 0053d64e
    MOV dword ptr [EBP + 0x36],EAX      ; 0053d651
    LEA EAX,[EBP + 0x36]                ; 0053d654
    MOV EDX,0xbca5f882                  ; 0053d657
    PUSH EAX                            ; 0053d65c
    LEA EAX,[EBP + 0xfffffe92]          ; 0053d65d
    MOV ECX,0x3e05d9a1                  ; 0053d663
    PUSH EAX                            ; 0053d668
    MOV dword ptr [EBP + 0x3a],EDX      ; 0053d669
    MOV dword ptr [EBP + 0x3e],ECX      ; 0053d66c
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053d66f
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x02dc9f88]      ; 0053d674 | DAT_02dc9f88
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053d67a
    SUB EAX,ESI                         ; 0053d681
    SHL EAX,0x4                         ; 0053d683
    ADD ESP,0xc                         ; 0053d686
    ADD EAX,EDI                         ; 0053d689
    PUSH EAX                            ; 0053d68b
    LEA EAX,[EBP + 0xfffffe92]          ; 0053d68c
    PUSH EAX                            ; 0053d692
    LEA ESI,[EBP + 0xfffffef2]          ; 0053d693
    LEA EDI,[EBP + -0x4e]               ; 0053d699
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053d69c
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0053d6a1
    LEA ESI,[EBP + 0xfffffef2]          ; 0053d6a6
    JMP 0x0053d44f                      ; 0053d6ac
        ;   XREF to: 0053d44f (UNCONDITIONAL_JUMP)  ; LAB_0053d44f

