; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005350c0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 s_stranger.dfm_005951ed+2
;   string s_gat.kfm_005951fc
;   string s_draw_stand2holsters_00595204
;   string s_draw_holsters2aimPistols_00595218
;   string s_draw_stand2coatPocket_00595231
;   string s_draw_coatPocket2aimShotgun_00595247
;   string s_draw_coatPocket2aimFlameThrower_00595262
;   string s_draw_holsters2CoatPocket_00595282
;   string s_draw_stand2TossAim_0059529b
;   string s_draw_tossAim2Stand_005952ae
;   string s_draw_shotGunRecoil_005952c1
;   string s_draw_coatPocket2aimTommy_005952d4
;   string s_draw_tommyRecoil_005952ed
;   string s_draw_stand2spearhold_005952fe
;   string s_draw_spearStab_00595313
;   ... and 7 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760
;   core_cloth.cpp_CClothList_add_FUN_00438390
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   FUN_004b46d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005350c0
        ;   Label: FUN_005350c0
    PUSH EBP                            ; 005350c1
    MOV EBP,ESP                         ; 005350c2
    MOV EBX,dword ptr [EBP + 0xc]       ; 005350c4
    PUSH EBX                            ; 005350c7
    CALL FUN_004b46d0                   ; 005350c8
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b46d0()
    ADD ESP,0x4                         ; 005350cd
    ADD EAX,0x1fb40                     ; 005350d0
    PUSH EAX                            ; 005350d5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 005350d6
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    LEA EBX,[EAX + 0xfffe04c0]          ; 005350db
    MOV dword ptr [EBX + 0x14c],0x5a2744 ; 005350e1 | PTR_FUN_005a2744
    MOV dword ptr [EBX + 0x1fa3c],0x0   ; 005350eb
    MOV dword ptr [EBX + 0x1fa40],0x0   ; 005350f5
    MOV dword ptr [EBX + 0x1fa44],0x0   ; 005350ff
    MOV dword ptr [EBX + 0x1fa48],0xbf060a92 ; 00535109
    MOV dword ptr [EBX + 0x1fa68],0x0   ; 00535113
    MOV dword ptr [EBX + 0x1fa60],0x0   ; 0053511d
    MOV dword ptr [EBX + 0x1fa58],0x0   ; 00535127
    MOV dword ptr [EBX + 0x1fa50],0x0   ; 00535131
    MOV dword ptr [EBX + 0x1fa64],0x0   ; 0053513b
    MOV dword ptr [EBX + 0x1fa6c],0x0   ; 00535145
    MOV dword ptr [EBX + 0x1fa88],0x0   ; 0053514f
    MOV dword ptr [EBX + 0x1fa80],0x0   ; 00535159
    MOV dword ptr [EBX + 0x1fa78],0x0   ; 00535163
    MOV dword ptr [EBX + 0x1fa70],0x0   ; 0053516d
    MOV dword ptr [EBX + 0x1fa84],0x0   ; 00535177
    MOV dword ptr [EBX + 0x1fa8c],0x0   ; 00535181
    MOV dword ptr [EBX + 0x1faf4],0x0   ; 0053518b
    MOV dword ptr [EBX + 0x1fa90],0x0   ; 00535195
    MOV dword ptr [EBX + 0x1fa98],0x0   ; 0053519f
    MOV dword ptr [EBX + 0x1faa4],0x0   ; 005351a9
    MOV dword ptr [EBX + 0x1faa8],0x0   ; 005351b3
    FLD float ptr [0x005a2704]          ; 005351bd | DAT_005a2704
    MOV dword ptr [EBX + 0x1faac],0x0   ; 005351c3
    ADD ESP,0x4                         ; 005351cd
    FSTP float ptr [EBX + 0x1fa4c]      ; 005351d0
    MOV dword ptr [EBX + 0x1fb18],0xf149f2ca ; 005351d6
    PUSH 0x5951ef                       ; 005351e0 | s_stranger.dfm_005951ed+2
    MOV dword ptr [EBX + 0x1fb00],0xf149f2ca ; 005351e5
    LEA EAX,[EBX + 0x150]               ; 005351ef
    FLD float ptr [EBX + 0x1fa58]       ; 005351f5
    FLD float ptr [EBX + 0x1fa50]       ; 005351fb
    FLD float ptr [EBX + 0x1fa78]       ; 00535201
    FLD float ptr [EBX + 0x1fa70]       ; 00535207
    PUSH EAX                            ; 0053520d
    FXCH ST3                            ; 0053520e
    FSTP float ptr [EBX + 0x1fa5c]      ; 00535210
    FXCH                                ; 00535216
    FSTP float ptr [EBX + 0x1fa54]      ; 00535218
    FSTP float ptr [EBX + 0x1fa7c]      ; 0053521e
    FSTP float ptr [EBX + 0x1fa74]      ; 00535224
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0053522a
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV dword ptr [EBX + 0x2a84],0x0    ; 0053522f
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 00535239
    MOV dword ptr [EBX + 0x1fab8],0x0   ; 00535243
    LEA EAX,[EBX + 0x1fae0]             ; 0053524d
    MOV dword ptr [EBX + 0x1fabc],0x0   ; 00535253
    MOV dword ptr [EAX + 0x8],0x0       ; 0053525d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00535264
    MOV dword ptr [EAX + 0x4],EDX       ; 00535267
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053526a
    MOV dword ptr [EAX],EDX             ; 0053526d
    MOV dword ptr [EBX + 0x1faec],0xffffffff ; 0053526f
    MOV dword ptr [EBX + 0x1fa9c],0x0   ; 00535279
    MOV dword ptr [EBX + 0x1fac0],0x0   ; 00535283
    MOV dword ptr [EBX + 0x1fac4],0x0   ; 0053528d
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 00535297
    ADD ESP,0x8                         ; 005352a1
    MOV dword ptr [EBX + 0x1faf0],0x0   ; 005352a4
    LEA EAX,[EBX + 0x1f5a0]             ; 005352ae
    MOV dword ptr [EBX + 0x1faf8],0x0   ; 005352b4
    PUSH 0x5951fc                       ; 005352be | = "gat.kfm"
    MOV EAX,dword ptr [EAX + 0x330]     ; 005352c3
    ADD EAX,0x150                       ; 005352c9
    PUSH EAX                            ; 005352ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 005352cf
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 005352d4
    PUSH 0x0                            ; 005352d7
    PUSH 0x595204                       ; 005352d9 | = "draw_stand2holsters"
    PUSH 0x1                            ; 005352de
    PUSH 0x0                            ; 005352e0
    PUSH EBX                            ; 005352e2
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 005352e3
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 005352e8
    PUSH 0x0                            ; 005352eb
    PUSH 0x595218                       ; 005352ed | = "draw_holsters2aimPistols"
    PUSH 0x2                            ; 005352f2
    PUSH 0x1                            ; 005352f4
    PUSH EBX                            ; 005352f6
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 005352f7
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 005352fc
    PUSH 0x0                            ; 005352ff
    PUSH 0x595231                       ; 00535301 | = "draw_stand2coatPocket"
    PUSH 0x3                            ; 00535306
    PUSH 0x0                            ; 00535308
    PUSH EBX                            ; 0053530a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 0053530b
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535310
    PUSH 0x0                            ; 00535313
    PUSH 0x595247                       ; 00535315 | = "draw_coatPocket2aimShotgun"
    PUSH 0x4                            ; 0053531a
    PUSH 0x3                            ; 0053531c
    PUSH EBX                            ; 0053531e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 0053531f
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535324
    PUSH 0x0                            ; 00535327
    PUSH 0x595262                       ; 00535329 | = "draw_coatPocket2aimFlameThrower"
    PUSH 0x5                            ; 0053532e
    PUSH 0x3                            ; 00535330
    PUSH EBX                            ; 00535332
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 00535333
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535338
    PUSH 0x0                            ; 0053533b
    PUSH 0x595282                       ; 0053533d | = "draw_holsters2CoatPocket"
    PUSH 0x3                            ; 00535342
    PUSH 0x1                            ; 00535344
    PUSH EBX                            ; 00535346
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 00535347
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 0053534c
    PUSH 0x1                            ; 0053534f
    PUSH 0x59529b                       ; 00535351 | = "draw_stand2TossAim"
    PUSH 0x6                            ; 00535356
    PUSH 0x0                            ; 00535358
    PUSH EBX                            ; 0053535a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 0053535b
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535360
    PUSH 0x1                            ; 00535363
    PUSH 0x5952ae                       ; 00535365 | = "draw_tossAim2Stand"
    PUSH 0x0                            ; 0053536a
    PUSH 0x6                            ; 0053536c
    PUSH EBX                            ; 0053536e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 0053536f
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535374
    PUSH 0x1                            ; 00535377
    PUSH 0x5952c1                       ; 00535379 | = "draw_shotGunRecoil"
    PUSH 0x4                            ; 0053537e
    PUSH 0xb                            ; 00535380
    PUSH EBX                            ; 00535382
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 00535383
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535388
    PUSH 0x0                            ; 0053538b
    PUSH 0x5952d4                       ; 0053538d | = "draw_coatPocket2aimTommy"
    PUSH 0x7                            ; 00535392
    PUSH 0x3                            ; 00535394
    PUSH EBX                            ; 00535396
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 00535397
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 0053539c
    PUSH 0x0                            ; 0053539f
    PUSH 0x5952ed                       ; 005353a1 | = "draw_tommyRecoil"
    PUSH 0x7                            ; 005353a6
    PUSH 0x7                            ; 005353a8
    PUSH EBX                            ; 005353aa
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 005353ab
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 005353b0
    PUSH 0x0                            ; 005353b3
    PUSH 0x5952fe                       ; 005353b5 | = "draw_stand2spearhold"
    PUSH 0x8                            ; 005353ba
    PUSH 0x0                            ; 005353bc
    PUSH EBX                            ; 005353be
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 005353bf
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 005353c4
    PUSH 0x1                            ; 005353c7
    PUSH 0x595313                       ; 005353c9 | = "draw_spearStab"
    PUSH 0x8                            ; 005353ce
    PUSH 0xc                            ; 005353d0
    PUSH EBX                            ; 005353d2
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 005353d3
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 005353d8
    PUSH 0x1                            ; 005353db
    PUSH 0x595322                       ; 005353dd | = "draw_spearOverheadswing"
    PUSH 0x8                            ; 005353e2
    PUSH 0xc                            ; 005353e4
    PUSH EBX                            ; 005353e6
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 005353e7
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 005353ec
    PUSH 0x0                            ; 005353ef
    PUSH 0x59533a                       ; 005353f1 | = "draw_holdCrate"
    PUSH 0x9                            ; 005353f6
    PUSH 0x9                            ; 005353f8
    PUSH EBX                            ; 005353fa
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 005353fb
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535400
    PUSH 0x0                            ; 00535403
    PUSH 0x595349                       ; 00535405 | = "draw_coatPocket2GasMask"
    PUSH 0xa                            ; 0053540a
    PUSH 0x3                            ; 0053540c
    PUSH EBX                            ; 0053540e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 0053540f
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535414
    PUSH 0x0                            ; 00535417
    PUSH 0x595361                       ; 00535419 | = "draw_gasMask2Stand"
    PUSH 0x0                            ; 0053541e
    PUSH 0xa                            ; 00535420
    PUSH EBX                            ; 00535422
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 00535423
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 00535428
    PUSH 0x595374                       ; 0053542b | = "strcoat.cth"
    LEA EAX,[EBX + 0x2a8c]              ; 00535430
    PUSH EAX                            ; 00535436
    CALL core_cloth.cpp_CClothList_add_FUN_00438390 ; 00535437
        ;   XREF to: 00438390 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_add_FUN_00438390()
    ADD ESP,0x8                         ; 0053543c
    MOV EAX,EBX                         ; 0053543f
    MOV dword ptr [EBX + 0x1fcd4],0x0   ; 00535441
    POP EBP                             ; 0053544b
    POP EBX                             ; 0053544c
    RET                                 ; 0053544d

