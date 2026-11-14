; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPrye * __cdecl core_prye_cpp_CPrye_ctor_FUN_00517f80(CPrye *this_ptr)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_prye.cpp_factoryFuncPrye_FUN_00517f50 at 00517f63
;
; Referenced Globals:
;   undefined4 DAT_005e3508
;
; Called Functions:
;   core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0
;   core_cloth.cpp_CClothList_add_FUN_0043fa40
;   core_hero.cpp_CHero_ctor_FUN_004d24b0
;   core_prye.cpp_CPrye_createDefaultWeapon_FUN_00518430
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517f80
        ;   Label: core_prye.cpp_CPrye_ctor_FUN_00517f80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00517f81
    PUSH EDX                            ; 00517f85
    CALL core_hero.cpp_CHero_ctor_FUN_004d24b0 ; 00517f86
        ;   XREF to: 004d24b0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004d24b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00517f8b
    PUSH EAX                            ; 00517f8e
    MOV EBX,EAX                         ; 00517f8f
    MOV dword ptr [EAX + 0x154],0x5e3534 ; 00517f91
    CALL core_prye.cpp_CPrye_createDefaultWeapon_FUN_00518430 ; 00517f9b
        ;   XREF to: 00518430 (UNCONDITIONAL_CALL)  ; void core_prye.cpp_CPrye_createDefaultWeapon_FUN_00518430(CPrye * this_ptr)
    MOV dword ptr [EBX + 0x20bcc],0x0   ; 00517fa0
    MOV dword ptr [EBX + 0x20bd0],0x0   ; 00517faa
    MOV dword ptr [EBX + 0x20bd4],0x0   ; 00517fb4
    MOV dword ptr [EBX + 0x20bd8],0xbf060a92 ; 00517fbe
    MOV dword ptr [EBX + 0x20bf8],0x0   ; 00517fc8
    MOV dword ptr [EBX + 0x20bf0],0x0   ; 00517fd2
    MOV dword ptr [EBX + 0x20be8],0x0   ; 00517fdc
    MOV dword ptr [EBX + 0x20be0],0x0   ; 00517fe6
    MOV dword ptr [EBX + 0x20bf4],0x0   ; 00517ff0
    MOV dword ptr [EBX + 0x20bfc],0x0   ; 00517ffa
    MOV dword ptr [EBX + 0x20c18],0x0   ; 00518004
    MOV dword ptr [EBX + 0x20c10],0x0   ; 0051800e
    MOV dword ptr [EBX + 0x20c08],0x0   ; 00518018
    MOV dword ptr [EBX + 0x20c00],0x0   ; 00518022
    MOV dword ptr [EBX + 0x20c14],0x0   ; 0051802c
    MOV dword ptr [EBX + 0x20c1c],0x0   ; 00518036
    MOV dword ptr [EBX + 0x20c80],0x0   ; 00518040
    MOV dword ptr [EBX + 0x20c20],0x0   ; 0051804a
    MOV dword ptr [EBX + 0x20c28],0x0   ; 00518054
    MOV dword ptr [EBX + 0x20c30],0x0   ; 0051805e
    MOV dword ptr [EBX + 0x20c34],0x0   ; 00518068
    FLD float ptr [0x005e3508]          ; 00518072 | DAT_005e3508
    MOV dword ptr [EBX + 0x20ca4],0xf149f2ca ; 00518078
    ADD ESP,0x4                         ; 00518082
    MOV dword ptr [EBX + 0x20c8c],0xf149f2ca ; 00518085
    LEA EAX,[EBX + 0x158]               ; 0051808f
    FSTP float ptr [EBX + 0x20bdc]      ; 00518095
    FLD float ptr [EBX + 0x20be8]       ; 0051809b
    FLD float ptr [EBX + 0x20be0]       ; 005180a1
    FLD float ptr [EBX + 0x20c08]       ; 005180a7
    FLD float ptr [EBX + 0x20c00]       ; 005180ad
    PUSH 0x5cca9f                       ; 005180b3
    FXCH ST3                            ; 005180b8
    FSTP float ptr [EBX + 0x20bec]      ; 005180ba
    FXCH                                ; 005180c0
    FSTP float ptr [EBX + 0x20be4]      ; 005180c2
    FSTP float ptr [EBX + 0x20c0c]      ; 005180c8
    PUSH EAX                            ; 005180ce
    FSTP float ptr [EBX + 0x20c04]      ; 005180cf
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 005180d5
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2f00],0x0    ; 005180da
    MOV dword ptr [EBX + 0x20c24],0x0   ; 005180e4
    MOV dword ptr [EBX + 0x20c44],0x0   ; 005180ee
    LEA EAX,[EBX + 0x20c6c]             ; 005180f8
    MOV dword ptr [EBX + 0x20c48],0x0   ; 005180fe
    MOV dword ptr [EAX + 0x8],0x0       ; 00518108
    ADD ESP,0x8                         ; 0051810f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00518112
    MOV dword ptr [EAX + 0x4],EDX       ; 00518115
    MOV EDX,dword ptr [EAX + 0x4]       ; 00518118
    MOV dword ptr [EAX],EDX             ; 0051811b
    MOV dword ptr [EBX + 0x20c78],0xffffffff ; 0051811d
    MOV dword ptr [EBX + 0x20c2c],0x0   ; 00518127
    MOV dword ptr [EBX + 0x20c4c],0x0   ; 00518131
    MOV dword ptr [EBX + 0x20c50],0x0   ; 0051813b
    PUSH 0x0                            ; 00518145
    MOV dword ptr [EBX + 0x20b64],0x0   ; 00518147
    PUSH 0x5ccaad                       ; 00518151
    MOV dword ptr [EBX + 0x20c7c],0x0   ; 00518156
    PUSH 0x1                            ; 00518160
    MOV dword ptr [EBX + 0x20c84],0x0   ; 00518162
    PUSH 0x0                            ; 0051816c
    MOV dword ptr [EBX + 0x20b60],0x0   ; 0051816e
    PUSH EBX                            ; 00518178
    MOV dword ptr [EBX + 0x27c0],0x1    ; 00518179
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518183
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518188
    PUSH 0x0                            ; 0051818b
    PUSH 0x5ccac1                       ; 0051818d
    PUSH 0x2                            ; 00518192
    PUSH 0x1                            ; 00518194
    PUSH EBX                            ; 00518196
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518197
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0051819c
    PUSH 0x0                            ; 0051819f
    PUSH 0x5ccada                       ; 005181a1
    PUSH 0x3                            ; 005181a6
    PUSH 0x0                            ; 005181a8
    PUSH EBX                            ; 005181aa
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005181ab
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005181b0
    PUSH 0x0                            ; 005181b3
    PUSH 0x5ccaf0                       ; 005181b5
    PUSH 0x4                            ; 005181ba
    PUSH 0x3                            ; 005181bc
    PUSH EBX                            ; 005181be
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005181bf
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005181c4
    PUSH 0x0                            ; 005181c7
    PUSH 0x5ccb0b                       ; 005181c9
    PUSH 0x5                            ; 005181ce
    PUSH 0x3                            ; 005181d0
    PUSH EBX                            ; 005181d2
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005181d3
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005181d8
    PUSH 0x0                            ; 005181db
    PUSH 0x5ccb2b                       ; 005181dd
    PUSH 0x3                            ; 005181e2
    PUSH 0x1                            ; 005181e4
    PUSH EBX                            ; 005181e6
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005181e7
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005181ec
    PUSH 0x1                            ; 005181ef
    PUSH 0x5ccb44                       ; 005181f1
    PUSH 0x6                            ; 005181f6
    PUSH 0x0                            ; 005181f8
    PUSH EBX                            ; 005181fa
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005181fb
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518200
    PUSH 0x1                            ; 00518203
    PUSH 0x5ccb57                       ; 00518205
    PUSH 0x0                            ; 0051820a
    PUSH 0x6                            ; 0051820c
    PUSH EBX                            ; 0051820e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 0051820f
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518214
    PUSH 0x1                            ; 00518217
    PUSH 0x5ccb6a                       ; 00518219
    PUSH 0x4                            ; 0051821e
    PUSH 0xc                            ; 00518220
    PUSH EBX                            ; 00518222
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518223
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518228
    PUSH 0x0                            ; 0051822b
    PUSH 0x5ccb7d                       ; 0051822d
    PUSH 0x7                            ; 00518232
    PUSH 0x3                            ; 00518234
    PUSH EBX                            ; 00518236
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518237
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0051823c
    PUSH 0x0                            ; 0051823f
    PUSH 0x5ccb96                       ; 00518241
    PUSH 0x7                            ; 00518246
    PUSH 0x7                            ; 00518248
    PUSH EBX                            ; 0051824a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 0051824b
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518250
    PUSH 0x0                            ; 00518253
    PUSH 0x5ccba7                       ; 00518255
    PUSH 0x8                            ; 0051825a
    PUSH 0x0                            ; 0051825c
    PUSH EBX                            ; 0051825e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 0051825f
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518264
    PUSH 0x1                            ; 00518267
    PUSH 0x5ccbb7                       ; 00518269
    PUSH 0x8                            ; 0051826e
    PUSH 0xd                            ; 00518270
    PUSH EBX                            ; 00518272
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518273
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518278
    PUSH 0x1                            ; 0051827b
    PUSH 0x5ccbc6                       ; 0051827d
    PUSH 0x8                            ; 00518282
    PUSH 0xd                            ; 00518284
    PUSH EBX                            ; 00518286
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518287
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0051828c
    PUSH 0x1                            ; 0051828f
    PUSH 0x5ccbcd                       ; 00518291
    PUSH 0x8                            ; 00518296
    PUSH 0xd                            ; 00518298
    PUSH EBX                            ; 0051829a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 0051829b
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005182a0
    PUSH 0x1                            ; 005182a3
    PUSH 0x5ccbd4                       ; 005182a5
    PUSH 0x8                            ; 005182aa
    PUSH 0xd                            ; 005182ac
    PUSH EBX                            ; 005182ae
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005182af
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005182b4
    PUSH 0x1                            ; 005182b7
    PUSH 0x5ccbdb                       ; 005182b9
    PUSH 0x8                            ; 005182be
    PUSH 0xd                            ; 005182c0
    PUSH EBX                            ; 005182c2
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005182c3
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005182c8
    PUSH 0x0                            ; 005182cb
    PUSH 0x5ccbf3                       ; 005182cd
    PUSH 0x9                            ; 005182d2
    PUSH 0x9                            ; 005182d4
    PUSH EBX                            ; 005182d6
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005182d7
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005182dc
    PUSH 0x0                            ; 005182df
    PUSH 0x5ccc02                       ; 005182e1
    PUSH 0xa                            ; 005182e6
    PUSH 0x3                            ; 005182e8
    PUSH EBX                            ; 005182ea
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005182eb
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005182f0
    PUSH 0x0                            ; 005182f3
    PUSH 0x5ccc1a                       ; 005182f5
    PUSH 0x0                            ; 005182fa
    PUSH 0xa                            ; 005182fc
    PUSH EBX                            ; 005182fe
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005182ff
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518304
    PUSH 0x0                            ; 00518307
    PUSH 0x5ccc2d                       ; 00518309
    PUSH 0xe                            ; 0051830e
    PUSH 0x3                            ; 00518310
    PUSH EBX                            ; 00518312
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518313
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518318
    PUSH 0x0                            ; 0051831b
    PUSH 0x5ccc46                       ; 0051831d
    PUSH 0xe                            ; 00518322
    PUSH 0xf                            ; 00518324
    PUSH EBX                            ; 00518326
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518327
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0051832c
    PUSH 0x0                            ; 0051832f
    PUSH 0x5ccc55                       ; 00518331
    PUSH 0x10                           ; 00518336
    PUSH 0x1                            ; 00518338
    PUSH EBX                            ; 0051833a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 0051833b
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518340
    PUSH 0x0                            ; 00518343
    PUSH 0x5ccc71                       ; 00518345
    PUSH 0xb                            ; 0051834a
    PUSH 0x3                            ; 0051834c
    PUSH EBX                            ; 0051834e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 0051834f
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518354
    PUSH 0x0                            ; 00518357
    PUSH 0x5ccc89                       ; 00518359
    PUSH 0x0                            ; 0051835e
    PUSH 0xb                            ; 00518360
    PUSH EBX                            ; 00518362
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518363
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518368
    PUSH 0x1                            ; 0051836b
    PUSH 0x5ccc9c                       ; 0051836d
    PUSH 0x2                            ; 00518372
    PUSH 0x2                            ; 00518374
    PUSH EBX                            ; 00518376
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518377
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0051837c
    PUSH -0x1                           ; 0051837f
    PUSH 0x5cccac                       ; 00518381
    PUSH 0x2                            ; 00518386
    PUSH 0x2                            ; 00518388
    PUSH EBX                            ; 0051838a
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 0051838b
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518390
    PUSH 0x1                            ; 00518393
    PUSH 0x5cccbc                       ; 00518395
    PUSH 0x8                            ; 0051839a
    PUSH 0x8                            ; 0051839c
    PUSH EBX                            ; 0051839e
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 0051839f
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005183a4
    PUSH 0x1                            ; 005183a7
    PUSH 0x5cccd1                       ; 005183a9
    PUSH 0x8                            ; 005183ae
    PUSH 0x8                            ; 005183b0
    PUSH EBX                            ; 005183b2
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005183b3
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005183b8
    PUSH 0x0                            ; 005183bb
    PUSH 0x5ccceb                       ; 005183bd
    PUSH 0x11                           ; 005183c2
    PUSH 0x0                            ; 005183c4
    PUSH EBX                            ; 005183c6
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005183c7
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005183cc
    PUSH 0x0                            ; 005183cf
    PUSH 0x5cccfb                       ; 005183d1
    PUSH 0x12                           ; 005183d6
    PUSH 0x0                            ; 005183d8
    PUSH EBX                            ; 005183da
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005183db
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005183e0
    PUSH 0x1                            ; 005183e3
    PUSH 0x5ccd0a                       ; 005183e5
    PUSH 0x11                           ; 005183ea
    PUSH 0x11                           ; 005183ec
    PUSH EBX                            ; 005183ee
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 005183ef
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 005183f4
    PUSH 0x1                            ; 005183f7
    PUSH 0x5ccd19                       ; 005183f9
    PUSH 0x12                           ; 005183fe
    PUSH 0x12                           ; 00518400
    PUSH EBX                            ; 00518402
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0 ; 00518403
        ;   XREF to: 004337e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_004337e0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00518408
    PUSH 0x5ccd24                       ; 0051840b
    LEA EAX,[EBX + 0x2f08]              ; 00518410
    PUSH EAX                            ; 00518416
    CALL core_cloth.cpp_CClothList_add_FUN_0043fa40 ; 00518417
        ;   XREF to: 0043fa40 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_0043fa40(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0051841c
    MOV EAX,EBX                         ; 0051841f
    MOV dword ptr [EBX + 0x20d00],0x0   ; 00518421
    POP EBX                             ; 0051842b
    RET                                 ; 0051842c

