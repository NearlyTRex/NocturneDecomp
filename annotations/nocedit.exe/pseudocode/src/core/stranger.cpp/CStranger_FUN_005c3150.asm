; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_stranger.cpp_CStranger_FUN_005c3150(CStranger * this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x22c]:1  local_22c
; undefined1       Stack[-0x1fc]:1  local_1fc
; undefined1       Stack[-0x1cc]:1  local_1cc
; undefined1       Stack[-0x19c]:1  local_19c
; undefined1       Stack[-0x16c]:1  local_16c
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   void* switchdataD_005c3128 = 005c3326
;   double DOUBLE_00653c74 = 0.990000000000000
;   double DOUBLE_00653c7c = 0.950000000000000
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CFireEffect g_CFireEffectInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032613a0
;   undefined4 DAT_03f6bacc
;   undefined4 DAT_03f6bb04
;   undefined4 DAT_03f6bb24
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_charactr.cpp_CCharacter_FUN_0042e840
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;   core_cloth.cpp_FUN_0043c070
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_fire.cpp_CFireEffect_FUN_004c7f80
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_stranger.cpp_CStranger_FUN_005c06b0
;   core_stranger.cpp_CStranger_FUN_005c51c0
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3150
        ;   Label: core_stranger.cpp_CStranger_FUN_005c3150
    PUSH ESI                            ; 005c3151
    PUSH EDI                            ; 005c3152
    PUSH EBP                            ; 005c3153
    MOV EBP,ESP                         ; 005c3154
    SUB ESP,0x21c                       ; 005c3156
    SUB EBP,0x7e                        ; 005c315c
    MOV EBX,dword ptr [EBP + 0x92]      ; 005c315f
    PUSH EBX                            ; 005c3165
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 005c3166
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005c316b
    TEST EAX,EAX                        ; 005c316e
    JZ 0x005c3547                       ; 005c3170
        ;   XREF to: 005c3547 (CONDITIONAL_JUMP)  ; LAB_005c3547
    MOV EAX,[0x03f6bb24]                ; 005c3176 | DAT_03f6bb24
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005c317b
    JNZ 0x005c354f                      ; 005c3183
        ;   XREF to: 005c354f (CONDITIONAL_JUMP)  ; LAB_005c354f
    PUSH 0x6                            ; 005c3189
        ;   Label: LAB_005c3189
    PUSH EBX                            ; 005c318b
    CALL core_charactr.cpp_CCharacter_FUN_0042e840 ; 005c318c
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_FUN_0042e840()
    MOV dword ptr [EBP + 0x7a],EAX      ; 005c3191
    ADD ESP,0x8                         ; 005c3194
    FLD float ptr [EBP + 0x7a]          ; 005c3197
    FCOMP double ptr [0x00653c74]       ; 005c319a | DOUBLE_00653c74
    FNSTSW AX                           ; 005c31a0
    SAHF                                ; 005c31a2
    JBE 0x005c32b4                      ; 005c31a3
        ;   XREF to: 005c32b4 (CONDITIONAL_JUMP)  ; LAB_005c32b4
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c31a9
    XOR ESI,ESI                         ; 005c31af
    TEST EAX,EAX                        ; 005c31b1
    JZ 0x005c31b8                       ; 005c31b3
        ;   XREF to: 005c31b8 (CONDITIONAL_JUMP)  ; LAB_005c31b8
    LEA ESI,[EAX + 0x20]                ; 005c31b5
    MOV EDX,dword ptr [EBX + 0x1fc2c]   ; 005c31b8
        ;   Label: LAB_005c31b8
    TEST EDX,EDX                        ; 005c31be
    JZ 0x005c31c5                       ; 005c31c0
        ;   XREF to: 005c31c5 (CONDITIONAL_JUMP)  ; LAB_005c31c5
    LEA ESI,[EDX + 0x20]                ; 005c31c2
    TEST ESI,ESI                        ; 005c31c5
        ;   Label: LAB_005c31c5
    JZ 0x005c32b4                       ; 005c31c7
        ;   XREF to: 005c32b4 (CONDITIONAL_JUMP)  ; LAB_005c32b4
    MOV ECX,dword ptr [0x006810c8]      ; 005c31cd | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005c31d3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005c31d4
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c31d9
    PUSH 0x1                            ; 005c31dc
    MOV EDI,dword ptr [0x006810c8]      ; 005c31de | g_CDemonSetPtr
    PUSH EDI                            ; 005c31e4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 005c31e5
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 005c31ea
    PUSH EBX                            ; 005c31ed
    MOV EAX,[0x006810c8]                ; 005c31ee | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 005c31f3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c31f4
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c31f9
    MOV EDX,dword ptr [EBX + 0x1fc2c]   ; 005c31fc
    PUSH EDX                            ; 005c3202
    MOV ECX,dword ptr [0x006810c8]      ; 005c3203 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005c3209 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c320a
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c320f
    MOV EDI,dword ptr [EBX + 0x24f8]    ; 005c3212
    PUSH EDI                            ; 005c3218
    MOV EAX,[0x006810c8]                ; 005c3219 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 005c321e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c321f
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c3224
    LEA EAX,[EBP + 0x1e]                ; 005c3227
    PUSH EAX                            ; 005c322a
    PUSH EBX                            ; 005c322b
    CALL core_stranger.cpp_CStranger_FUN_005c51c0 ; 005c322c
        ;   XREF to: 005c51c0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_CStranger_FUN_005c51c0()
    ADD ESP,0x8                         ; 005c3231
    PUSH EAX                            ; 005c3234
    LEA EAX,[EBP + 0x12]                ; 005c3235
    PUSH EAX                            ; 005c3238
    PUSH EBX                            ; 005c3239
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005c323a
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005c323f
    LEA EAX,[EBP + 0x12]                ; 005c3242
    PUSH EAX                            ; 005c3245
    PUSH ESI                            ; 005c3246
    MOV EDX,dword ptr [0x006810c8]      ; 005c3247 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 005c324d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800 ; 005c324e
        ;   XREF to: 00572800 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * direction)
    FLDZ                                ; 005c3253
    MOV dword ptr [EBP + 0x7a],EAX      ; 005c3255
    ADD ESP,0xc                         ; 005c3258
    MOV EAX,dword ptr [EBP + 0x7a]      ; 005c325b
    MOV dword ptr [EBP + 0x76],EAX      ; 005c325e
    FCOMP float ptr [EBP + 0x76]        ; 005c3261
    FNSTSW AX                           ; 005c3264
    SAHF                                ; 005c3266
    JBE 0x005c3270                      ; 005c3267
        ;   XREF to: 005c3270 (CONDITIONAL_JUMP)  ; LAB_005c3270
    MOV dword ptr [EBP + 0x76],0x41200000 ; 005c3269
    PUSH 0x0                            ; 005c3270
        ;   Label: LAB_005c3270
    PUSH 0x0                            ; 005c3272
    MOV EAX,[0x006810c8]                ; 005c3274 | g_CDemonSetPtr
    PUSH 0xff                           ; 005c3279
    ADD EAX,0x14d128                    ; 005c327e
    PUSH dword ptr [EBP + 0x76]         ; 005c3283
    PUSH EAX                            ; 005c3286 | DAT_032613a0
    PUSH 0x3f800000                     ; 005c3287
    LEA EAX,[EBP + 0x12]                ; 005c328c
    PUSH 0x3f800000                     ; 005c328f
    PUSH EAX                            ; 005c3294
    PUSH ESI                            ; 005c3295
    MOV ESI,dword ptr [0x0067a3d0]      ; 005c3296 | g_CFireEffectPtr
    PUSH ESI                            ; 005c329c | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c7f80 ; 005c329d
        ;   XREF to: 004c7f80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7f80(CFireEffect * this_ptr)
    ADD ESP,0x28                        ; 005c32a2
    MOV EDI,dword ptr [0x006810c8]      ; 005c32a5 | g_CDemonSetPtr
    PUSH EDI                            ; 005c32ab | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005c32ac
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c32b1
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c32b4
        ;   Label: LAB_005c32b4
    TEST EAX,EAX                        ; 005c32ba
    JZ 0x005c33d7                       ; 005c32bc
        ;   XREF to: 005c33d7 (CONDITIONAL_JUMP)  ; LAB_005c33d7
    CMP EAX,dword ptr [EBX + 0x24b4]    ; 005c32c2
    JZ 0x005c33d7                       ; 005c32c8
        ;   XREF to: 005c33d7 (CONDITIONAL_JUMP)  ; LAB_005c33d7
    CMP EAX,dword ptr [EBX + 0x24f8]    ; 005c32ce
    JZ 0x005c33d7                       ; 005c32d4
        ;   XREF to: 005c33d7 (CONDITIONAL_JUMP)  ; LAB_005c33d7
    MOV EAX,[0x03f6bb24]                ; 005c32da | DAT_03f6bb24
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005c32df
    JZ 0x005c33d7                       ; 005c32e7
        ;   XREF to: 005c33d7 (CONDITIONAL_JUMP)  ; LAB_005c33d7
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c32ed
    PUSH EAX                            ; 005c32f3
    MOV ESI,dword ptr [EAX + 0x154]     ; 005c32f4
    CALL dword ptr [ESI + 0x8]          ; 005c32fa
    ADD ESP,0x4                         ; 005c32fd
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c3300
    XOR ESI,ESI                         ; 005c3306
    TEST EAX,EAX                        ; 005c3308
    JZ 0x005c366c                       ; 005c330a
        ;   XREF to: 005c366c (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 005c3310
    CMP EAX,0x8                         ; 005c3316
    JA 0x005c366c                       ; 005c3319
        ;   XREF to: 005c366c (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x5c3128]  ; 005c331f | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 005c3326
        ;   Label: caseD_0
    PUSH EAX                            ; 005c332b
        ;   Label: LAB_005c332b
    PUSH EBX                            ; 005c332c
    CALL core_charactr.cpp_CCharacter_FUN_0042e840 ; 005c332d
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_FUN_0042e840()
    MOV dword ptr [EBP + 0x7a],EAX      ; 005c3332
    ADD ESP,0x8                         ; 005c3335
    FLD float ptr [EBP + 0x7a]          ; 005c3338
    FCOMP double ptr [0x00653c7c]       ; 005c333b | DOUBLE_00653c7c
    FNSTSW AX                           ; 005c3341
    SAHF                                ; 005c3343
    JBE 0x005c334b                      ; 005c3344
        ;   XREF to: 005c334b (CONDITIONAL_JUMP)  ; LAB_005c334b
    MOV ESI,0x1                         ; 005c3346
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c334b
        ;   Label: LAB_005c334b
    MOV EDI,dword ptr [EAX + 0x2e0]     ; 005c3351
    CMP EDI,0x1                         ; 005c3357
    JNZ 0x005c3673                      ; 005c335a
        ;   XREF to: 005c3673 (CONDITIONAL_JUMP)  ; LAB_005c3673
    CMP dword ptr [EBX + 0x2a8c],0x8    ; 005c3360
    JNZ 0x005c3673                      ; 005c3367
        ;   XREF to: 005c3673 (CONDITIONAL_JUMP)  ; LAB_005c3673
    MOV ESI,EDI                         ; 005c336d
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c336f
        ;   Label: LAB_005c336f
    PUSH EAX                            ; 005c3375
    MOV EDI,dword ptr [EAX + 0x154]     ; 005c3376
    CALL dword ptr [EDI + 0x104]        ; 005c337c
    ADD ESP,0x4                         ; 005c3382
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c3385
        ;   Label: LAB_005c3385
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005c338b
    JNZ 0x005c33cc                      ; 005c3392
        ;   XREF to: 005c33cc (CONDITIONAL_JUMP)  ; LAB_005c33cc
    PUSH 0x1                            ; 005c3394
    PUSH EBX                            ; 005c3396
    CALL core_stranger.cpp_CStranger_FUN_005c06b0 ; 005c3397
        ;   XREF to: 005c06b0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_CStranger_FUN_005c06b0()
    ADD ESP,0x8                         ; 005c339c
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c339f
    PUSH EAX                            ; 005c33a5
    MOV EDI,dword ptr [EAX + 0x154]     ; 005c33a6
    CALL dword ptr [EDI + 0x8]          ; 005c33ac
    ADD ESP,0x4                         ; 005c33af
    TEST ESI,ESI                        ; 005c33b2
    JZ 0x005c33cc                       ; 005c33b4
        ;   XREF to: 005c33cc (CONDITIONAL_JUMP)  ; LAB_005c33cc
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c33b6
    PUSH EAX                            ; 005c33bc
    MOV ESI,dword ptr [EAX + 0x154]     ; 005c33bd
    CALL dword ptr [ESI + 0x104]        ; 005c33c3
    ADD ESP,0x4                         ; 005c33c9
    PUSH 0x0                            ; 005c33cc
        ;   Label: LAB_005c33cc
    PUSH EBX                            ; 005c33ce
    CALL core_stranger.cpp_CStranger_FUN_005c06b0 ; 005c33cf
        ;   XREF to: 005c06b0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_CStranger_FUN_005c06b0()
    ADD ESP,0x8                         ; 005c33d4
    CMP dword ptr [EBX + 0x1fb98],0x0   ; 005c33d7
        ;   Label: LAB_005c33d7
    JZ 0x005c3508                       ; 005c33de
        ;   XREF to: 005c3508 (CONDITIONAL_JUMP)  ; LAB_005c3508
    MOV EAX,[0x03f6bb24]                ; 005c33e4 | DAT_03f6bb24
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005c33e9
    JZ 0x005c3508                       ; 005c33f1
        ;   XREF to: 005c3508 (CONDITIONAL_JUMP)  ; LAB_005c3508
    LEA EAX,[EBX + 0x1f738]             ; 005c33f7
    MOV EAX,dword ptr [EAX + 0x454]     ; 005c33fd
    MOV dword ptr [EBP + 0x72],EAX      ; 005c3403
    TEST EAX,EAX                        ; 005c3406
    JZ 0x005c3508                       ; 005c3408
        ;   XREF to: 005c3508 (CONDITIONAL_JUMP)  ; LAB_005c3508
    PUSH EBX                            ; 005c340e
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005c340f
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005c3414
    MOV EAX,dword ptr [EBX + 0x1fb98]   ; 005c3417
    LEA EDI,[EBX + 0xfd8]               ; 005c341d
    CMP EAX,0x2                         ; 005c3423
    JNZ 0x005c3680                      ; 005c3426
        ;   XREF to: 005c3680 (CONDITIONAL_JUMP)  ; LAB_005c3680
    MOV ESI,0xbe0fd3f6                  ; 005c342c
    XOR EAX,EAX                         ; 005c3431
    MOV EDX,0xc04507c8                  ; 005c3433
    MOV dword ptr [EBP + 0xe],EAX       ; 005c3438
    LEA EAX,[EBP + 0x6]                 ; 005c343b
    MOV ECX,0x3bc63091                  ; 005c343e
    PUSH EAX                            ; 005c3443
    MOV EAX,0x3f09a30a                  ; 005c3444
    MOV dword ptr [EBP + 0x6],ESI       ; 005c3449
    MOV dword ptr [EBP + 0x32],EAX      ; 005c344c
    LEA EAX,[EBP + 0x2a]                ; 005c344f
    MOV dword ptr [EBP + 0xa],EDX       ; 005c3452
    PUSH EAX                            ; 005c3455
    LEA EAX,[EBP + 0xfffffec2]          ; 005c3456
    MOV ESI,0x3e9135db                  ; 005c345c
    PUSH EAX                            ; 005c3461
    MOV dword ptr [EBP + 0x2a],ECX      ; 005c3462
    MOV dword ptr [EBP + 0x2e],ESI      ; 005c3465
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c3468
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x03f6bacc]      ; 005c346d | DAT_03f6bacc
    LEA EAX,[ESI*0x4 + 0x0]             ; 005c3473
    SUB EAX,ESI                         ; 005c347a
    SHL EAX,0x4                         ; 005c347c
    ADD ESP,0xc                         ; 005c347f
    ADD EDI,EAX                         ; 005c3482
    PUSH EDI                            ; 005c3484
    LEA EAX,[EBP + 0xfffffec2]          ; 005c3485
    PUSH EAX                            ; 005c348b
    LEA ESI,[EBP + -0x7e]               ; 005c348c
    LEA EDI,[EBP + -0x4e]               ; 005c348f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c3492
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    MOV ECX,0xc                         ; 005c3497
    LEA ESI,[EBP + -0x7e]               ; 005c349c
    ADD ESP,0x8                         ; 005c349f
        ;   Label: LAB_005c349f
    MOVSD.REP ES:EDI,ESI                ; 005c34a2
    LEA EAX,[EBP + 0x4e]                ; 005c34a4
    PUSH EAX                            ; 005c34a7
    LEA EAX,[EBP + -0x4e]               ; 005c34a8
    PUSH EAX                            ; 005c34ab
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005c34ac
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CVector3f * euler_out, CMatrix3x3f * matrix_ptr)
    ADD ESP,0x8                         ; 005c34b1
    LEA EAX,[EBP + 0x42]                ; 005c34b4
    PUSH EAX                            ; 005c34b7
    LEA EAX,[EBP + -0x4e]               ; 005c34b8
    PUSH EAX                            ; 005c34bb
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005c34bc
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_getTranslation_FUN_005f6110(CVector3f * output_vector, CMatrix3x4f * input_matrix)
    ADD ESP,0x8                         ; 005c34c1
    LEA EAX,[EBP + 0x42]                ; 005c34c4
    PUSH EAX                            ; 005c34c7
    LEA EAX,[EBP + 0x4e]                ; 005c34c8
    PUSH EAX                            ; 005c34cb
    MOV EDX,dword ptr [0x006703ec]      ; 005c34cc | g_CDemonRendererPtr
    PUSH EDX                            ; 005c34d2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005c34d3
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005c34d8
    MOV EAX,dword ptr [EBP + 0x72]      ; 005c34db
    PUSH -0x1                           ; 005c34de
    ADD EAX,0x158                       ; 005c34e0
    PUSH 0x0                            ; 005c34e5
    PUSH EAX                            ; 005c34e7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005c34e8
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005c34ed
    MOV ECX,dword ptr [0x006703ec]      ; 005c34f0 | g_CDemonRendererPtr
    PUSH ECX                            ; 005c34f6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005c34f7
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    ADD ESP,0x4                         ; 005c34fc
    PUSH EBX                            ; 005c34ff
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005c3500
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005c3505
    MOV EAX,[0x03f6bb24]                ; 005c3508 | DAT_03f6bb24
        ;   Label: LAB_005c3508
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005c350d
    JNZ 0x005c3542                      ; 005c3515
        ;   XREF to: 005c3542 (CONDITIONAL_JUMP)  ; LAB_005c3542
    MOV EDI,dword ptr [0x006703ec]      ; 005c3517 | g_CDemonRendererPtr
    PUSH EDI                            ; 005c351d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005c351e
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005c3523
    TEST EAX,EAX                        ; 005c3526
    JNZ 0x005c3542                      ; 005c3528
        ;   XREF to: 005c3542 (CONDITIONAL_JUMP)  ; LAB_005c3542
    CMP dword ptr [EBX + 0x2a94],0x0    ; 005c352a
    JLE 0x005c3542                      ; 005c3531
        ;   XREF to: 005c3542 (CONDITIONAL_JUMP)  ; LAB_005c3542
    ADD EBX,0x2a94                      ; 005c3533
    PUSH EBX                            ; 005c3539
    CALL core_cloth.cpp_FUN_0043c070    ; 005c353a
        ;   XREF to: 0043c070 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c070()
    ADD ESP,0x4                         ; 005c353f
    MOV EAX,0x1                         ; 005c3542
        ;   Label: LAB_005c3542
    LEA ESP,[EBP + 0x7e]                ; 005c3547
        ;   Label: LAB_005c3547
    POP EBP                             ; 005c354a
    POP EDI                             ; 005c354b
    POP ESI                             ; 005c354c
    POP EBX                             ; 005c354d
    RET                                 ; 005c354e
    PUSH EBX                            ; 005c354f
        ;   Label: LAB_005c354f
    MOV EDI,0x40490fdb                  ; 005c3550
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005c3555
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    LEA EAX,[EBP + 0x5a]                ; 005c355a
    MOV EDX,0x3f38263b                  ; 005c355d
    ADD ESP,0x4                         ; 005c3562
    XOR ECX,ECX                         ; 005c3565
    MOV dword ptr [EBP + 0x5e],EDI      ; 005c3567
    MOV dword ptr [EBP + 0x5a],ECX      ; 005c356a
    MOV dword ptr [EBP + 0x62],ECX      ; 005c356d
    PUSH EAX                            ; 005c3570
    LEA EAX,[EBP + -0x12]               ; 005c3571
    MOV dword ptr [EBP + -0x12],ECX     ; 005c3574
    PUSH EAX                            ; 005c3577
    LEA EAX,[EBP + 0xffffff22]          ; 005c3578
    MOV ECX,0x3e3d70a4                  ; 005c357e
    PUSH EAX                            ; 005c3583
    MOV dword ptr [EBP + -0xe],EDX      ; 005c3584
    MOV dword ptr [EBP + -0xa],ECX      ; 005c3587
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c358a
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x03f6bacc]      ; 005c358f | DAT_03f6bacc
    LEA EAX,[ESI*0x4 + 0x0]             ; 005c3595
    SUB EAX,ESI                         ; 005c359c
    MOV ESI,EAX                         ; 005c359e
    SHL ESI,0x4                         ; 005c35a0
    LEA EAX,[EBX + 0xfd8]               ; 005c35a3
    ADD ESP,0xc                         ; 005c35a9
    ADD EAX,ESI                         ; 005c35ac
    PUSH EAX                            ; 005c35ae
    LEA EAX,[EBP + 0xffffff22]          ; 005c35af
    PUSH EAX                            ; 005c35b5
    LEA ESI,[EBP + 0xfffffe62]          ; 005c35b6
    LEA EDI,[EBP + 0xffffff52]          ; 005c35bc
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c35c2
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    ADD ESP,0x8                         ; 005c35c7
    LEA EAX,[EBP + -0x1e]               ; 005c35ca
    MOV ECX,0xc                         ; 005c35cd
    PUSH EAX                            ; 005c35d2
    LEA EAX,[EBP + 0xffffff52]          ; 005c35d3
    LEA ESI,[EBP + 0xfffffe62]          ; 005c35d9
    PUSH EAX                            ; 005c35df
    MOVSD.REP ES:EDI,ESI                ; 005c35e0
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005c35e2
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_getTranslation_FUN_005f6110(CVector3f * output_vector, CMatrix3x4f * input_matrix)
    ADD ESP,0x8                         ; 005c35e7
    LEA EAX,[EBP + -0x6]                ; 005c35ea
    PUSH EAX                            ; 005c35ed
    LEA EAX,[EBP + 0xffffff52]          ; 005c35ee
    PUSH EAX                            ; 005c35f4
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005c35f5
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CVector3f * euler_out, CMatrix3x3f * matrix_ptr)
    ADD ESP,0x8                         ; 005c35fa
    LEA EAX,[EBP + -0x1e]               ; 005c35fd
    PUSH EAX                            ; 005c3600
    LEA EAX,[EBP + -0x6]                ; 005c3601
    PUSH EAX                            ; 005c3604
    MOV ESI,dword ptr [0x006703ec]      ; 005c3605 | g_CDemonRendererPtr
    PUSH ESI                            ; 005c360b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005c360c
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005c3611
    PUSH -0x1                           ; 005c3614
    LEA EAX,[EBX + 0x1fcd8]             ; 005c3616
    PUSH 0x0                            ; 005c361c
    PUSH EAX                            ; 005c361e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005c361f
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005c3624
    MOV EDI,dword ptr [0x006703ec]      ; 005c3627 | g_CDemonRendererPtr
    PUSH EDI                            ; 005c362d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005c362e
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    ADD ESP,0x4                         ; 005c3633
    PUSH EBX                            ; 005c3636
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005c3637
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005c363c
    JMP 0x005c3189                      ; 005c363f
        ;   XREF to: 005c3189 (UNCONDITIONAL_JUMP)  ; LAB_005c3189
    MOV EAX,0x4                         ; 005c3644
        ;   Label: caseD_1
    JMP 0x005c332b                      ; 005c3649
        ;   XREF to: 005c332b (UNCONDITIONAL_JUMP)  ; LAB_005c332b
    MOV EAX,0x7                         ; 005c364e
        ;   Label: caseD_4
    JMP 0x005c332b                      ; 005c3653
        ;   XREF to: 005c332b (UNCONDITIONAL_JUMP)  ; LAB_005c332b
    MOV EAX,0x5                         ; 005c3658
        ;   Label: caseD_2
    JMP 0x005c332b                      ; 005c365d
        ;   XREF to: 005c332b (UNCONDITIONAL_JUMP)  ; LAB_005c332b
    MOV EAX,0x8                         ; 005c3662
        ;   Label: caseD_7
    JMP 0x005c332b                      ; 005c3667
        ;   XREF to: 005c332b (UNCONDITIONAL_JUMP)  ; LAB_005c332b
    XOR EAX,EAX                         ; 005c366c
        ;   Label: caseD_3
    JMP 0x005c332b                      ; 005c366e
        ;   XREF to: 005c332b (UNCONDITIONAL_JUMP)  ; LAB_005c332b
    TEST ESI,ESI                        ; 005c3673
        ;   Label: LAB_005c3673
    JNZ 0x005c336f                      ; 005c3675
        ;   XREF to: 005c336f (CONDITIONAL_JUMP)  ; LAB_005c336f
    JMP 0x005c3385                      ; 005c367b
        ;   XREF to: 005c3385 (UNCONDITIONAL_JUMP)  ; LAB_005c3385
    MOV EDX,0x3f94bac7                  ; 005c3680
        ;   Label: LAB_005c3680
    MOV ECX,0x3d488e0e                  ; 005c3685
    MOV ESI,0x3ebc7410                  ; 005c368a
    LEA EAX,[EBP + 0x66]                ; 005c368f
    MOV dword ptr [EBP + 0x66],EDX      ; 005c3692
    MOV dword ptr [EBP + 0x6e],ECX      ; 005c3695
    PUSH EAX                            ; 005c3698
    MOV EAX,0x3f033b43                  ; 005c3699
    MOV dword ptr [EBP + 0x6a],ESI      ; 005c369e
    MOV dword ptr [EBP + 0x36],EAX      ; 005c36a1
    LEA EAX,[EBP + 0x36]                ; 005c36a4
    MOV EDX,0xbca5f882                  ; 005c36a7
    PUSH EAX                            ; 005c36ac
    LEA EAX,[EBP + 0xfffffe92]          ; 005c36ad
    MOV ECX,0x3e05d9a1                  ; 005c36b3
    PUSH EAX                            ; 005c36b8
    MOV dword ptr [EBP + 0x3a],EDX      ; 005c36b9
    MOV dword ptr [EBP + 0x3e],ECX      ; 005c36bc
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c36bf
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x03f6bb04]      ; 005c36c4 | DAT_03f6bb04
    LEA EAX,[ESI*0x4 + 0x0]             ; 005c36ca
    SUB EAX,ESI                         ; 005c36d1
    SHL EAX,0x4                         ; 005c36d3
    ADD ESP,0xc                         ; 005c36d6
    ADD EAX,EDI                         ; 005c36d9
    PUSH EAX                            ; 005c36db
    LEA EAX,[EBP + 0xfffffe92]          ; 005c36dc
    PUSH EAX                            ; 005c36e2
    LEA ESI,[EBP + 0xfffffef2]          ; 005c36e3
    LEA EDI,[EBP + -0x4e]               ; 005c36e9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c36ec
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    MOV ECX,0xc                         ; 005c36f1
    LEA ESI,[EBP + 0xfffffef2]          ; 005c36f6
    JMP 0x005c349f                      ; 005c36fc
        ;   XREF to: 005c349f (UNCONDITIONAL_JUMP)  ; LAB_005c349f

