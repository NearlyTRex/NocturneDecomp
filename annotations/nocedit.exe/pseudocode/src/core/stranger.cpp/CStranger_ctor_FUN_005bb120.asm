; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005bb120(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_factoryFunc_FUN_005bb0e0 at 005bb0fd
;
; Referenced Globals:
;   TerminatedCString s_stranger_dfm_006531c9
;   TerminatedCString s_gat_kfm_006531d6
;   TerminatedCString s_draw_stand2holsters_006531de
;   TerminatedCString s_draw_holsters2aimPistols_006531f2
;   TerminatedCString s_draw_stand2coatPocket_0065320b
;   TerminatedCString s_draw_coatPocket2aimShotg_00653221
;   TerminatedCString s_draw_coatPocket2aimFlame_0065323c
;   TerminatedCString s_draw_holsters2CoatPocket_0065325c
;   TerminatedCString s_draw_stand2TossAim_00653275
;   TerminatedCString s_draw_tossAim2Stand_00653288
;   TerminatedCString s_draw_shotGunRecoil_0065329b
;   TerminatedCString s_draw_coatPocket2aimTommy_006532ae
;   TerminatedCString s_draw_tommyRecoil_006532c7
;   TerminatedCString s_draw_stand2spearhold_006532d8
;   TerminatedCString s_draw_spearStab_006532ed
;   ... and 7 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
;   core_cloth.cpp_CClothList_add_FUN_0043c0f0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_hero.cpp_CHero_ctor_FUN_004f2340
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb120
        ;   Label: core_stranger.cpp_CStranger_ctor_FUN_005bb120
    PUSH EBP                            ; 005bb121
    MOV EBP,ESP                         ; 005bb122
    MOV EBX,dword ptr [EBP + 0xc]       ; 005bb124
    PUSH EBX                            ; 005bb127
    CALL core_hero.cpp_CHero_ctor_FUN_004f2340 ; 005bb128
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004f2340(CHero * this_ptr)
    ADD ESP,0x4                         ; 005bb12d
    ADD EAX,0x1fcd8                     ; 005bb130
    PUSH EAX                            ; 005bb135
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005bb136
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xfffe0328]          ; 005bb13b
    MOV dword ptr [EBX + 0x154],0x663784 ; 005bb141 | g_CStrangerVTable
    MOV dword ptr [EBX + 0x1fbd4],0x0   ; 005bb14b
    MOV dword ptr [EBX + 0x1fbd8],0x0   ; 005bb155
    MOV dword ptr [EBX + 0x1fbdc],0x0   ; 005bb15f
    MOV dword ptr [EBX + 0x1fbe0],0xbf060a92 ; 005bb169
    MOV dword ptr [EBX + 0x1fc00],0x0   ; 005bb173
    MOV dword ptr [EBX + 0x1fbf8],0x0   ; 005bb17d
    MOV dword ptr [EBX + 0x1fbf0],0x0   ; 005bb187
    MOV dword ptr [EBX + 0x1fbe8],0x0   ; 005bb191
    MOV dword ptr [EBX + 0x1fbfc],0x0   ; 005bb19b
    MOV dword ptr [EBX + 0x1fc04],0x0   ; 005bb1a5
    MOV dword ptr [EBX + 0x1fc20],0x0   ; 005bb1af
    MOV dword ptr [EBX + 0x1fc18],0x0   ; 005bb1b9
    MOV dword ptr [EBX + 0x1fc10],0x0   ; 005bb1c3
    MOV dword ptr [EBX + 0x1fc08],0x0   ; 005bb1cd
    MOV dword ptr [EBX + 0x1fc1c],0x0   ; 005bb1d7
    MOV dword ptr [EBX + 0x1fc24],0x0   ; 005bb1e1
    MOV dword ptr [EBX + 0x1fc8c],0x0   ; 005bb1eb
    MOV dword ptr [EBX + 0x1fc28],0x0   ; 005bb1f5
    MOV dword ptr [EBX + 0x1fc30],0x0   ; 005bb1ff
    MOV dword ptr [EBX + 0x1fc3c],0x0   ; 005bb209
    MOV dword ptr [EBX + 0x1fc40],0x0   ; 005bb213
    FLD float ptr [0x00663744]          ; 005bb21d | FLOAT_00663744
    MOV dword ptr [EBX + 0x1fc44],0x0   ; 005bb223
    ADD ESP,0x4                         ; 005bb22d
    FSTP float ptr [EBX + 0x1fbe4]      ; 005bb230
    MOV dword ptr [EBX + 0x1fcb0],0xf149f2ca ; 005bb236
    PUSH 0x6531c9                       ; 005bb240 | = "stranger.dfm"
    MOV dword ptr [EBX + 0x1fc98],0xf149f2ca ; 005bb245
    LEA EAX,[EBX + 0x158]               ; 005bb24f
    FLD float ptr [EBX + 0x1fbf0]       ; 005bb255
    FLD float ptr [EBX + 0x1fbe8]       ; 005bb25b
    FLD float ptr [EBX + 0x1fc10]       ; 005bb261
    FLD float ptr [EBX + 0x1fc08]       ; 005bb267
    PUSH EAX                            ; 005bb26d
    FXCH ST3                            ; 005bb26e
    FSTP float ptr [EBX + 0x1fbf4]      ; 005bb270
    FXCH                                ; 005bb276
    FSTP float ptr [EBX + 0x1fbec]      ; 005bb278
    FSTP float ptr [EBX + 0x1fc14]      ; 005bb27e
    FSTP float ptr [EBX + 0x1fc0c]      ; 005bb284
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005bb28a
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2a8c],0x0    ; 005bb28f
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005bb299
    MOV dword ptr [EBX + 0x1fc50],0x0   ; 005bb2a3
    LEA EAX,[EBX + 0x1fc78]             ; 005bb2ad
    MOV dword ptr [EBX + 0x1fc54],0x0   ; 005bb2b3
    MOV dword ptr [EAX + 0x8],0x0       ; 005bb2bd
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bb2c4
    MOV dword ptr [EAX + 0x4],EDX       ; 005bb2c7
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bb2ca
    MOV dword ptr [EAX],EDX             ; 005bb2cd
    MOV dword ptr [EBX + 0x1fc84],0xffffffff ; 005bb2cf
    MOV dword ptr [EBX + 0x1fc34],0x0   ; 005bb2d9
    MOV dword ptr [EBX + 0x1fc58],0x0   ; 005bb2e3
    MOV dword ptr [EBX + 0x1fc5c],0x0   ; 005bb2ed
    MOV dword ptr [EBX + 0x1fc38],0x0   ; 005bb2f7
    ADD ESP,0x8                         ; 005bb301
    MOV dword ptr [EBX + 0x1fc88],0x0   ; 005bb304
    LEA EAX,[EBX + 0x1f738]             ; 005bb30e
    MOV dword ptr [EBX + 0x1fc90],0x0   ; 005bb314
    PUSH 0x6531d6                       ; 005bb31e | = "gat.kfm"
    MOV EAX,dword ptr [EAX + 0x330]     ; 005bb323
    ADD EAX,0x158                       ; 005bb329
    PUSH EAX                            ; 005bb32e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005bb32f
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005bb334
    PUSH 0x0                            ; 005bb337
    PUSH 0x6531de                       ; 005bb339 | = "draw_stand2holsters"
    PUSH 0x1                            ; 005bb33e
    PUSH 0x0                            ; 005bb340
    PUSH EBX                            ; 005bb342
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb343
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb348
    PUSH 0x0                            ; 005bb34b
    PUSH 0x6531f2                       ; 005bb34d | = "draw_holsters2aimPistols"
    PUSH 0x2                            ; 005bb352
    PUSH 0x1                            ; 005bb354
    PUSH EBX                            ; 005bb356
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb357
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb35c
    PUSH 0x0                            ; 005bb35f
    PUSH 0x65320b                       ; 005bb361 | = "draw_stand2coatPocket"
    PUSH 0x3                            ; 005bb366
    PUSH 0x0                            ; 005bb368
    PUSH EBX                            ; 005bb36a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb36b
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb370
    PUSH 0x0                            ; 005bb373
    PUSH 0x653221                       ; 005bb375 | = "draw_coatPocket2aimShotgun"
    PUSH 0x4                            ; 005bb37a
    PUSH 0x3                            ; 005bb37c
    PUSH EBX                            ; 005bb37e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb37f
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb384
    PUSH 0x0                            ; 005bb387
    PUSH 0x65323c                       ; 005bb389 | = "draw_coatPocket2aimFlameThrower"
    PUSH 0x5                            ; 005bb38e
    PUSH 0x3                            ; 005bb390
    PUSH EBX                            ; 005bb392
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb393
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb398
    PUSH 0x0                            ; 005bb39b
    PUSH 0x65325c                       ; 005bb39d | = "draw_holsters2CoatPocket"
    PUSH 0x3                            ; 005bb3a2
    PUSH 0x1                            ; 005bb3a4
    PUSH EBX                            ; 005bb3a6
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb3a7
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb3ac
    PUSH 0x1                            ; 005bb3af
    PUSH 0x653275                       ; 005bb3b1 | = "draw_stand2TossAim"
    PUSH 0x6                            ; 005bb3b6
    PUSH 0x0                            ; 005bb3b8
    PUSH EBX                            ; 005bb3ba
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb3bb
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb3c0
    PUSH 0x1                            ; 005bb3c3
    PUSH 0x653288                       ; 005bb3c5 | = "draw_tossAim2Stand"
    PUSH 0x0                            ; 005bb3ca
    PUSH 0x6                            ; 005bb3cc
    PUSH EBX                            ; 005bb3ce
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb3cf
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb3d4
    PUSH 0x1                            ; 005bb3d7
    PUSH 0x65329b                       ; 005bb3d9 | = "draw_shotGunRecoil"
    PUSH 0x4                            ; 005bb3de
    PUSH 0xb                            ; 005bb3e0
    PUSH EBX                            ; 005bb3e2
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb3e3
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb3e8
    PUSH 0x0                            ; 005bb3eb
    PUSH 0x6532ae                       ; 005bb3ed | = "draw_coatPocket2aimTommy"
    PUSH 0x7                            ; 005bb3f2
    PUSH 0x3                            ; 005bb3f4
    PUSH EBX                            ; 005bb3f6
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb3f7
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb3fc
    PUSH 0x0                            ; 005bb3ff
    PUSH 0x6532c7                       ; 005bb401 | = "draw_tommyRecoil"
    PUSH 0x7                            ; 005bb406
    PUSH 0x7                            ; 005bb408
    PUSH EBX                            ; 005bb40a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb40b
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb410
    PUSH 0x0                            ; 005bb413
    PUSH 0x6532d8                       ; 005bb415 | = "draw_stand2spearhold"
    PUSH 0x8                            ; 005bb41a
    PUSH 0x0                            ; 005bb41c
    PUSH EBX                            ; 005bb41e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb41f
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb424
    PUSH 0x1                            ; 005bb427
    PUSH 0x6532ed                       ; 005bb429 | = "draw_spearStab"
    PUSH 0x8                            ; 005bb42e
    PUSH 0xc                            ; 005bb430
    PUSH EBX                            ; 005bb432
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb433
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb438
    PUSH 0x1                            ; 005bb43b
    PUSH 0x6532fc                       ; 005bb43d | = "draw_spearOverheadswing"
    PUSH 0x8                            ; 005bb442
    PUSH 0xc                            ; 005bb444
    PUSH EBX                            ; 005bb446
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb447
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb44c
    PUSH 0x0                            ; 005bb44f
    PUSH 0x653314                       ; 005bb451 | = "draw_holdCrate"
    PUSH 0x9                            ; 005bb456
    PUSH 0x9                            ; 005bb458
    PUSH EBX                            ; 005bb45a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb45b
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb460
    PUSH 0x0                            ; 005bb463
    PUSH 0x653323                       ; 005bb465 | = "draw_coatPocket2GasMask"
    PUSH 0xa                            ; 005bb46a
    PUSH 0x3                            ; 005bb46c
    PUSH EBX                            ; 005bb46e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb46f
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb474
    PUSH 0x0                            ; 005bb477
    PUSH 0x65333b                       ; 005bb479 | = "draw_gasMask2Stand"
    PUSH 0x0                            ; 005bb47e
    PUSH 0xa                            ; 005bb480
    PUSH EBX                            ; 005bb482
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 005bb483
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005bb488
    PUSH 0x65334e                       ; 005bb48b | = "strcoat.cth"
    LEA EAX,[EBX + 0x2a94]              ; 005bb490
    PUSH EAX                            ; 005bb496
    CALL core_cloth.cpp_CClothList_add_FUN_0043c0f0 ; 005bb497
        ;   XREF to: 0043c0f0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_0043c0f0(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005bb49c
    MOV EAX,EBX                         ; 005bb49f
    MOV dword ptr [EBX + 0x1fe6c],0x0   ; 005bb4a1
    POP EBP                             ; 005bb4ab
    POP EBX                             ; 005bb4ac
    RET                                 ; 005bb4ad

