; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_prye_cpp_CPrye_renderOpaque_FUN_005220d0(CPrye *this_ptr)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_00522088 = 0052230d
;   TerminatedCString s_CGasMask_005cd674
;   TerminatedCString s_CGoggles_005cd67d
;   undefined4 DAT_005cd687
;   undefined4 DAT_005cd68f
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CBindEvilClassInfo.name_hash
;   undefined4 g_CDiseaseClassInfo.name_hash
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CGasMaskClassInfo.name_hash
;   undefined4 g_CGogglesClassInfo.name_hash
;   undefined4 DAT_01ed36dc
;   undefined4 DAT_01ed3710
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_actor.cpp_FUN_00408b00
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;   core_cloth.cpp_CClothList_reset_FUN_0043f9d0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   core_fire.cpp_CFireEffect_createLaserPath_FUN_004a2b70
;   core_inv.cpp_FUN_004db9e0
;   core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360
;   core_prye.cpp_FUN_00524800
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005220d0
        ;   Label: core_prye.cpp_CPrye_renderOpaque_FUN_005220d0
    PUSH ESI                            ; 005220d1
    PUSH EDI                            ; 005220d2
    PUSH EBP                            ; 005220d3
    MOV EBP,ESP                         ; 005220d4
    SUB ESP,0x31c                       ; 005220d6
    SUB EBP,0x82                        ; 005220dc
    MOV EBX,dword ptr [EBP + 0x96]      ; 005220e2
    PUSH EBX                            ; 005220e8
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 005220e9
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005220ee
    TEST EAX,EAX                        ; 005220f1
    JNZ 0x00522100                      ; 005220f3
        ;   XREF to: 00522100 (CONDITIONAL_JUMP)  ; LAB_00522100
    LEA ESP,[EBP + 0x82]                ; 005220f5
    POP EBP                             ; 005220fb
    POP EDI                             ; 005220fc
    POP ESI                             ; 005220fd
    POP EBX                             ; 005220fe
    RET                                 ; 005220ff
    PUSH 0x6                            ; 00522100
        ;   Label: LAB_00522100
    PUSH EBX                            ; 00522102
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60 ; 00522103
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7e],EAX      ; 00522108
    ADD ESP,0x8                         ; 0052210b
    FLD float ptr [EBP + 0x7e]          ; 0052210e
    FCOMP double ptr [0x005cd687]       ; 00522111 | DAT_005cd687
    FNSTSW AX                           ; 00522117
    SAHF                                ; 00522119
    JBE 0x00522259                      ; 0052211a
        ;   XREF to: 00522259 (CONDITIONAL_JUMP)  ; LAB_00522259
    XOR EDX,EDX                         ; 00522120
    MOV ECX,dword ptr [EBX + 0x2628]    ; 00522122
    MOV dword ptr [EBP + 0x7a],EDX      ; 00522128
    TEST ECX,ECX                        ; 0052212b
    JZ 0x00522135                       ; 0052212d
        ;   XREF to: 00522135 (CONDITIONAL_JUMP)  ; LAB_00522135
    LEA EAX,[ECX + 0x20]                ; 0052212f
    MOV dword ptr [EBP + 0x7a],EAX      ; 00522132
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 00522135
        ;   Label: LAB_00522135
    TEST ESI,ESI                        ; 0052213b
    JZ 0x00522145                       ; 0052213d
        ;   XREF to: 00522145 (CONDITIONAL_JUMP)  ; LAB_00522145
    LEA EAX,[ESI + 0x20]                ; 0052213f
    MOV dword ptr [EBP + 0x7a],EAX      ; 00522142
    CMP dword ptr [EBP + 0x7a],0x0      ; 00522145
        ;   Label: LAB_00522145
    JZ 0x00522259                       ; 00522149
        ;   XREF to: 00522259 (CONDITIONAL_JUMP)  ; LAB_00522259
    MOV EAX,[0x00603b28]                ; 0052214f | g_CDemonSetPtr
    PUSH EAX                            ; 00522154 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00522155
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052215a
    PUSH 0x1                            ; 0052215d
    MOV EDX,dword ptr [0x00603b28]      ; 0052215f | g_CDemonSetPtr
    PUSH EDX                            ; 00522165 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 00522166
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0052216b
    PUSH EBX                            ; 0052216e
    MOV ECX,dword ptr [0x00603b28]      ; 0052216f | g_CDemonSetPtr
    PUSH ECX                            ; 00522175 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00522176
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0052217b
    MOV ESI,dword ptr [EBX + 0x20c24]   ; 0052217e
    PUSH ESI                            ; 00522184
    MOV EDI,dword ptr [0x00603b28]      ; 00522185 | g_CDemonSetPtr
    PUSH EDI                            ; 0052218b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0052218c
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00522191
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00522194
    PUSH EAX                            ; 0052219a
    MOV EDX,dword ptr [0x00603b28]      ; 0052219b | g_CDemonSetPtr
    PUSH EDX                            ; 005221a1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 005221a2
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005221a7
    PUSH EBX                            ; 005221aa
    LEA ESI,[EBP + -0x42]               ; 005221ab
    LEA EDI,[EBP + -0x12]               ; 005221ae
    CALL core_prye.cpp_FUN_00524800     ; 005221b1
        ;   XREF to: 00524800 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00524800()
    ADD ESP,0x4                         ; 005221b6
    LEA EAX,[EBP + -0x12]               ; 005221b9
    LEA ESI,[EBP + -0x42]               ; 005221bc
    PUSH EAX                            ; 005221bf
    MOVSD ES:EDI,ESI                    ; 005221c0
    MOVSD ES:EDI,ESI                    ; 005221c1
    MOVSD ES:EDI,ESI                    ; 005221c2
    PUSH EBX                            ; 005221c3
    LEA ESI,[EBP + -0x36]               ; 005221c4
    LEA EDI,[EBP + 0xffffff46]          ; 005221c7
    CALL core_actor.cpp_FUN_00408b00    ; 005221cd
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + -0x36]               ; 005221d2
    ADD ESP,0x8                         ; 005221d5
    LEA EAX,[EBP + 0xffffff46]          ; 005221d8
    MOV ECX,dword ptr [EBP + 0x7a]      ; 005221de
    PUSH EAX                            ; 005221e1
    MOVSD ES:EDI,ESI                    ; 005221e2
    MOVSD ES:EDI,ESI                    ; 005221e3
    MOVSD ES:EDI,ESI                    ; 005221e4
    PUSH ECX                            ; 005221e5
    MOV ESI,dword ptr [0x00603b28]      ; 005221e6 | g_CDemonSetPtr
    PUSH ESI                            ; 005221ec | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053cff0 ; 005221ed
        ;   XREF to: 0053cff0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053cff0()
    FLDZ                                ; 005221f2
    MOV dword ptr [EBP + 0x7e],EAX      ; 005221f4
    ADD ESP,0xc                         ; 005221f7
    MOV EAX,dword ptr [EBP + 0x7e]      ; 005221fa
    MOV dword ptr [EBP + 0x76],EAX      ; 005221fd
    FCOMP float ptr [EBP + 0x76]        ; 00522200
    FNSTSW AX                           ; 00522203
    SAHF                                ; 00522205
    JBE 0x0052220f                      ; 00522206
        ;   XREF to: 0052220f (CONDITIONAL_JUMP)  ; LAB_0052220f
    MOV dword ptr [EBP + 0x76],0x41200000 ; 00522208
    PUSH 0x0                            ; 0052220f
        ;   Label: LAB_0052220f
    PUSH 0x0                            ; 00522211
    MOV EAX,[0x00603b28]                ; 00522213 | g_CDemonSetPtr
    PUSH 0xff                           ; 00522218
    ADD EAX,0x14d128                    ; 0052221d
    PUSH dword ptr [EBP + 0x76]         ; 00522222
    PUSH EAX                            ; 00522225 | g_CDemonSetInstance.collision_normal.x
    PUSH 0x3f800000                     ; 00522226
    LEA EAX,[EBP + 0xffffff46]          ; 0052222b
    PUSH 0x3f800000                     ; 00522231
    PUSH EAX                            ; 00522236
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00522237
    PUSH EAX                            ; 0052223a
    MOV EDX,dword ptr [0x005fc5a0]      ; 0052223b | DAT_005fc5a0
    PUSH EDX                            ; 00522241
    CALL core_fire.cpp_CFireEffect_createLaserPath_FUN_004a2b70 ; 00522242
        ;   XREF to: 004a2b70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserPath_FUN_004a2b70(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * velocity, float beam_width, ...)
    ADD ESP,0x28                        ; 00522247
    MOV ECX,dword ptr [0x00603b28]      ; 0052224a | g_CDemonSetPtr
    PUSH ECX                            ; 00522250 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00522251
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00522256
    MOV ESI,dword ptr [EBX + 0x25b0]    ; 00522259
        ;   Label: LAB_00522259
    TEST ESI,ESI                        ; 0052225f
    JZ 0x00522272                       ; 00522261
        ;   XREF to: 00522272 (CONDITIONAL_JUMP)  ; LAB_00522272
    MOV EAX,ESI                         ; 00522263
    PUSH EAX                            ; 00522265
    MOV ESI,dword ptr [ESI + 0x154]     ; 00522266
    CALL dword ptr [ESI + 0x10]         ; 0052226c
    ADD ESP,0x4                         ; 0052226f
    MOV EDI,dword ptr [EBX + 0x20c24]   ; 00522272
        ;   Label: LAB_00522272
    TEST EDI,EDI                        ; 00522278
    JZ 0x00522382                       ; 0052227a
        ;   XREF to: 00522382 (CONDITIONAL_JUMP)  ; LAB_00522382
    CMP EDI,dword ptr [EBX + 0x25b0]    ; 00522280
    JZ 0x00522382                       ; 00522286
        ;   XREF to: 00522382 (CONDITIONAL_JUMP)  ; LAB_00522382
    CMP EDI,dword ptr [EBX + 0x2628]    ; 0052228c
    JZ 0x00522382                       ; 00522292
        ;   XREF to: 00522382 (CONDITIONAL_JUMP)  ; LAB_00522382
    MOV EAX,[0x01ed3744]                ; 00522298 | DAT_01ed3744
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0052229d
    JZ 0x00522382                       ; 005222a5
        ;   XREF to: 00522382 (CONDITIONAL_JUMP)  ; LAB_00522382
    MOV EDI,dword ptr [0x01549b0c]      ; 005222ab | g_CDiseaseClassInfo.name_hash
    PUSH EDI                            ; 005222b1
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005222b2
    PUSH EAX                            ; 005222b8
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005222b9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005222be
    TEST EAX,EAX                        ; 005222c1
    JZ 0x005226d9                       ; 005222c3
        ;   XREF to: 005226d9 (CONDITIONAL_JUMP)  ; LAB_005226d9
    PUSH 0x1                            ; 005222c9
        ;   Label: LAB_005222c9
    PUSH EBX                            ; 005222cb
    CALL core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360 ; 005222cc
        ;   XREF to: 0051f360 (UNCONDITIONAL_CALL)  ; void core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360(CPrye * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 005222d1
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005222d4
        ;   Label: LAB_005222d4
    PUSH EAX                            ; 005222da
    MOV ESI,dword ptr [EAX + 0x154]     ; 005222db
    CALL dword ptr [ESI + 0x10]         ; 005222e1
    ADD ESP,0x4                         ; 005222e4
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005222e7
    XOR ESI,ESI                         ; 005222ed
    TEST EAX,EAX                        ; 005222ef
    JZ 0x00522742                       ; 005222f1
        ;   XREF to: 00522742 (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 005222f7
    CMP EAX,0xe                         ; 005222fd
    JA 0x00522742                       ; 00522300
        ;   XREF to: 00522742 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x522088]  ; 00522306 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0052230d
        ;   Label: caseD_0
    PUSH EAX                            ; 00522312
        ;   Label: LAB_00522312
    PUSH EBX                            ; 00522313
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60 ; 00522314
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7e],EAX      ; 00522319
    ADD ESP,0x8                         ; 0052231c
    FLD float ptr [EBP + 0x7e]          ; 0052231f
    FCOMP double ptr [0x005cd68f]       ; 00522322 | DAT_005cd68f
    FNSTSW AX                           ; 00522328
    SAHF                                ; 0052232a
    JBE 0x00522332                      ; 0052232b
        ;   XREF to: 00522332 (CONDITIONAL_JUMP)  ; LAB_00522332
    MOV ESI,0x1                         ; 0052232d
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00522332
        ;   Label: LAB_00522332
    MOV EDI,dword ptr [EAX + 0x2e0]     ; 00522338
    CMP EDI,0x1                         ; 0052233e
    JNZ 0x0052234e                      ; 00522341
        ;   XREF to: 0052234e (CONDITIONAL_JUMP)  ; LAB_0052234e
    CMP dword ptr [EBX + 0x2f00],0x8    ; 00522343
    JNZ 0x0052234e                      ; 0052234a
        ;   XREF to: 0052234e (CONDITIONAL_JUMP)  ; LAB_0052234e
    MOV ESI,EDI                         ; 0052234c
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 0052234e
        ;   Label: LAB_0052234e
    CMP dword ptr [EAX + 0x2e0],0x9     ; 00522354
    JNZ 0x00522749                      ; 0052235b
        ;   XREF to: 00522749 (CONDITIONAL_JUMP)  ; LAB_00522749
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 00522361
        ;   Label: LAB_00522361
    PUSH EAX                            ; 00522367
    MOV ESI,dword ptr [EAX + 0x154]     ; 00522368
    CALL dword ptr [ESI + 0xf0]         ; 0052236e
    ADD ESP,0x4                         ; 00522374
    PUSH 0x0                            ; 00522377
        ;   Label: LAB_00522377
    PUSH EBX                            ; 00522379
    CALL core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360 ; 0052237a
        ;   XREF to: 0051f360 (UNCONDITIONAL_CALL)  ; void core_prye.cpp_CPrye_updateWeaponPosition_FUN_0051f360(CPrye * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0052237f
    CMP dword ptr [EBX + 0x20b58],0x0   ; 00522382
        ;   Label: LAB_00522382
    JZ 0x00522504                       ; 00522389
        ;   XREF to: 00522504 (CONDITIONAL_JUMP)  ; LAB_00522504
    MOV EAX,[0x01ed3744]                ; 0052238f | DAT_01ed3744
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00522394
    JZ 0x00522504                       ; 0052239c
        ;   XREF to: 00522504 (CONDITIONAL_JUMP)  ; LAB_00522504
    MOV EDI,dword ptr [0x01d22d48]      ; 005223a2 | g_CGasMaskClassInfo.name_hash
    PUSH EDI                            ; 005223a8
    PUSH 0x5cd674                       ; 005223a9 | = "CGasMask"
    LEA EAX,[EBX + 0x206e8]             ; 005223ae
    PUSH EAX                            ; 005223b4
    CALL core_inv.cpp_FUN_004db9e0      ; 005223b5
        ;   XREF to: 004db9e0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004db9e0(CInventory * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 005223ba
    PUSH EAX                            ; 005223bd
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005223be
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005223c3
    MOV dword ptr [EBP + 0x66],EAX      ; 005223c6
    TEST EAX,EAX                        ; 005223c9
    JZ 0x00522504                       ; 005223cb
        ;   XREF to: 00522504 (CONDITIONAL_JUMP)  ; LAB_00522504
    PUSH EBX                            ; 005223d1
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005223d2
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    LEA EAX,[EBX + 0xfd8]               ; 005223d7
    MOV dword ptr [EBP + 0x72],EAX      ; 005223dd
    MOV EAX,dword ptr [EBX + 0x20b58]   ; 005223e0
    ADD ESP,0x4                         ; 005223e6
    CMP EAX,0x2                         ; 005223e9
    JNZ 0x00522756                      ; 005223ec
        ;   XREF to: 00522756 (CONDITIONAL_JUMP)  ; LAB_00522756
    MOV ESI,0xbe0fd3f6                  ; 005223f2
    MOV EAX,0xc04507c8                  ; 005223f7
    MOV EDX,0x3bc63091                  ; 005223fc
    MOV ECX,0x3e9135db                  ; 00522401
    XOR EDI,EDI                         ; 00522406
    MOV dword ptr [EBP + 0x36],ESI      ; 00522408
    MOV dword ptr [EBP + 0x3e],EDI      ; 0052240b
    MOV dword ptr [EBP + 0x3a],EAX      ; 0052240e
    MOV dword ptr [EBP + 0x42],EDX      ; 00522411
    LEA EDI,[EBP + 0x4e]                ; 00522414
    LEA EAX,[EBP + 0x4e]                ; 00522417
    LEA ESI,[EBP + 0x36]                ; 0052241a
    PUSH EAX                            ; 0052241d
    LEA EAX,[EBP + 0x42]                ; 0052241e
    MOVSD ES:EDI,ESI                    ; 00522421
    MOVSD ES:EDI,ESI                    ; 00522422
    MOVSD ES:EDI,ESI                    ; 00522423
    PUSH EAX                            ; 00522424
    LEA EAX,[EBP + 0xfffffdc6]          ; 00522425
    MOV ESI,0x3f09a30a                  ; 0052242b
    PUSH EAX                            ; 00522430
    MOV dword ptr [EBP + 0x46],ECX      ; 00522431
    MOV dword ptr [EBP + 0x4a],ESI      ; 00522434
    CALL core_xform.cpp_FUN_00583940    ; 00522437
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    MOV ESI,dword ptr [0x01ed36dc]      ; 0052243c | DAT_01ed36dc
    LEA EAX,[ESI*0x4 + 0x0]             ; 00522442
    SUB EAX,ESI                         ; 00522449
    MOV EDI,dword ptr [EBP + 0x72]      ; 0052244b
    SHL EAX,0x4                         ; 0052244e
    ADD ESP,0xc                         ; 00522451
    ADD EAX,EDI                         ; 00522454
    PUSH EAX                            ; 00522456
    LEA EAX,[EBP + 0xfffffdc6]          ; 00522457
    PUSH EAX                            ; 0052245d
    LEA ESI,[EBP + 0xfffffeb6]          ; 0052245e
    LEA EDI,[EBP + 0xfffffe86]          ; 00522464
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0052246a
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0052246f
    LEA ESI,[EBP + 0xfffffeb6]          ; 00522474
    ADD ESP,0x8                         ; 0052247a
        ;   Label: LAB_0052247a
    MOVSD.REP ES:EDI,ESI                ; 0052247d
    LEA EAX,[EBP + 0xfffffe86]          ; 0052247f
    PUSH EAX                            ; 00522485
    LEA ESI,[EBP + 0x6]                 ; 00522486
    LEA EDI,[EBP + 0xffffff6a]          ; 00522489
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00583b10 ; 0052248f
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00583b10()
    LEA ESI,[EBP + 0x6]                 ; 00522494
    LEA EAX,[EBP + 0xfffffe86]          ; 00522497
    ADD ESP,0x4                         ; 0052249d
    MOVSD ES:EDI,ESI                    ; 005224a0
    MOVSD ES:EDI,ESI                    ; 005224a1
    MOVSD ES:EDI,ESI                    ; 005224a2
    PUSH EAX                            ; 005224a3
    LEA ESI,[EBP + 0xffffff5e]          ; 005224a4
    CALL core_xform.cpp_FUN_00584450    ; 005224aa
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    ADD ESP,0x4                         ; 005224af
    LEA EAX,[EBP + -0x66]               ; 005224b2
    PUSH EAX                            ; 005224b5
    LEA EAX,[EBP + 0xffffff6a]          ; 005224b6
    LEA EDI,[EBP + -0x66]               ; 005224bc
    PUSH EAX                            ; 005224bf
    MOV EAX,[0x005f2afc]                ; 005224c0 | DAT_005f2afc
    LEA ESI,[EBP + 0xffffff5e]          ; 005224c5
    PUSH EAX                            ; 005224cb | DAT_01bdd7e4
    MOVSD ES:EDI,ESI                    ; 005224cc
    MOVSD ES:EDI,ESI                    ; 005224cd
    MOVSD ES:EDI,ESI                    ; 005224ce
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 005224cf
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 005224d4
    MOV EAX,dword ptr [EBP + 0x66]      ; 005224d7
    PUSH -0x1                           ; 005224da
    ADD EAX,0x158                       ; 005224dc
    PUSH 0x0                            ; 005224e1
    PUSH EAX                            ; 005224e3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 005224e4
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005224e9
    MOV EDX,dword ptr [0x005f2afc]      ; 005224ec | DAT_005f2afc
    PUSH EDX                            ; 005224f2 | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 005224f3
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 005224f8
    PUSH EBX                            ; 005224fb
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005224fc
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00522501
    CMP dword ptr [EBX + 0x20b5c],0x0   ; 00522504
        ;   Label: LAB_00522504
    JZ 0x0052268f                       ; 0052250b
        ;   XREF to: 0052268f (CONDITIONAL_JUMP)  ; LAB_0052268f
    MOV EAX,[0x01ed3744]                ; 00522511 | DAT_01ed3744
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00522516
    JZ 0x0052268f                       ; 0052251e
        ;   XREF to: 0052268f (CONDITIONAL_JUMP)  ; LAB_0052268f
    MOV EDI,dword ptr [0x01d22e40]      ; 00522524 | g_CGogglesClassInfo.name_hash
    PUSH EDI                            ; 0052252a
    PUSH 0x5cd67d                       ; 0052252b | = "CGoggles"
    LEA EAX,[EBX + 0x206e8]             ; 00522530
    PUSH EAX                            ; 00522536
    CALL core_inv.cpp_FUN_004db9e0      ; 00522537
        ;   XREF to: 004db9e0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004db9e0(CInventory * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 0052253c
    PUSH EAX                            ; 0052253f
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00522540
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00522545
    MOV dword ptr [EBP + 0x6a],EAX      ; 00522548
    TEST EAX,EAX                        ; 0052254b
    JZ 0x0052268f                       ; 0052254d
        ;   XREF to: 0052268f (CONDITIONAL_JUMP)  ; LAB_0052268f
    PUSH EBX                            ; 00522553
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00522554
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    LEA EAX,[EBX + 0xfd8]               ; 00522559
    MOV dword ptr [EBP + 0x6e],EAX      ; 0052255f
    MOV EAX,dword ptr [EBX + 0x20b5c]   ; 00522562
    ADD ESP,0x4                         ; 00522568
    CMP EAX,0x2                         ; 0052256b
    JNZ 0x005227e6                      ; 0052256e
        ;   XREF to: 005227e6 (CONDITIONAL_JUMP)  ; LAB_005227e6
    MOV ESI,0x3da9307b                  ; 00522574
    MOV EDI,0x3c518d91                  ; 00522579
    MOV EAX,0x404904ab                  ; 0052257e
    MOV EDX,0x3c17ff3b                  ; 00522583
    MOV ECX,0x3eac59da                  ; 00522588
    MOV dword ptr [EBP + 0x5a],ESI      ; 0052258d
    MOV dword ptr [EBP + 0x62],EDI      ; 00522590
    MOV dword ptr [EBP + 0x5e],EAX      ; 00522593
    MOV dword ptr [EBP + 0xffffff76],EDX ; 00522596
    LEA EDI,[EBP + -0x4e]               ; 0052259c
    LEA EAX,[EBP + -0x4e]               ; 0052259f
    LEA ESI,[EBP + 0x5a]                ; 005225a2
    PUSH EAX                            ; 005225a5
    LEA EAX,[EBP + 0xffffff76]          ; 005225a6
    MOVSD ES:EDI,ESI                    ; 005225ac
    MOVSD ES:EDI,ESI                    ; 005225ad
    MOVSD ES:EDI,ESI                    ; 005225ae
    PUSH EAX                            ; 005225af
    LEA EAX,[EBP + 0xfffffe26]          ; 005225b0
    MOV ESI,0x3e5903ea                  ; 005225b6
    PUSH EAX                            ; 005225bb
    MOV dword ptr [EBP + 0xffffff7a],ECX ; 005225bc
    MOV dword ptr [EBP + 0xffffff7e],ESI ; 005225c2
    CALL core_xform.cpp_FUN_00583940    ; 005225c8
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    MOV ESI,dword ptr [0x01ed36dc]      ; 005225cd | DAT_01ed36dc
    LEA EAX,[ESI*0x4 + 0x0]             ; 005225d3
    SUB EAX,ESI                         ; 005225da
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005225dc
    SHL EAX,0x4                         ; 005225df
    ADD ESP,0xc                         ; 005225e2
    ADD EAX,EDI                         ; 005225e5
    PUSH EAX                            ; 005225e7
    LEA EAX,[EBP + 0xfffffe26]          ; 005225e8
    PUSH EAX                            ; 005225ee
    LEA ESI,[EBP + 0xfffffe56]          ; 005225ef
    LEA EDI,[EBP + 0xffffff16]          ; 005225f5
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 005225fb
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00522600
    LEA ESI,[EBP + 0xfffffe56]          ; 00522605
    ADD ESP,0x8                         ; 0052260b
        ;   Label: LAB_0052260b
    MOVSD.REP ES:EDI,ESI                ; 0052260e
    LEA EAX,[EBP + 0xffffff16]          ; 00522610
    PUSH EAX                            ; 00522616
    LEA ESI,[EBP + 0xffffff52]          ; 00522617
    LEA EDI,[EBP + -0x5a]               ; 0052261d
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00583b10 ; 00522620
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00583b10()
    LEA ESI,[EBP + 0xffffff52]          ; 00522625
    LEA EAX,[EBP + 0xffffff16]          ; 0052262b
    ADD ESP,0x4                         ; 00522631
    MOVSD ES:EDI,ESI                    ; 00522634
    MOVSD ES:EDI,ESI                    ; 00522635
    MOVSD ES:EDI,ESI                    ; 00522636
    PUSH EAX                            ; 00522637
    LEA ESI,[EBP + -0x2a]               ; 00522638
    CALL core_xform.cpp_FUN_00584450    ; 0052263b
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    ADD ESP,0x4                         ; 00522640
    LEA EAX,[EBP + -0x1e]               ; 00522643
    PUSH EAX                            ; 00522646
    LEA EAX,[EBP + -0x5a]               ; 00522647
    LEA EDI,[EBP + -0x1e]               ; 0052264a
    PUSH EAX                            ; 0052264d
    MOV EAX,[0x005f2afc]                ; 0052264e | DAT_005f2afc
    LEA ESI,[EBP + -0x2a]               ; 00522653
    PUSH EAX                            ; 00522656 | DAT_01bdd7e4
    MOVSD ES:EDI,ESI                    ; 00522657
    MOVSD ES:EDI,ESI                    ; 00522658
    MOVSD ES:EDI,ESI                    ; 00522659
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0052265a
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0052265f
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00522662
    PUSH -0x1                           ; 00522665
    ADD EAX,0x158                       ; 00522667
    PUSH 0x0                            ; 0052266c
    PUSH EAX                            ; 0052266e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0052266f
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00522674
    MOV EDX,dword ptr [0x005f2afc]      ; 00522677 | DAT_005f2afc
    PUSH EDX                            ; 0052267d | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0052267e
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00522683
    PUSH EBX                            ; 00522686
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00522687
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0052268c
    MOV EAX,[0x01ed3744]                ; 0052268f | DAT_01ed3744
        ;   Label: LAB_0052268f
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00522694
    JNZ 0x005226c9                      ; 0052269c
        ;   XREF to: 005226c9 (CONDITIONAL_JUMP)  ; LAB_005226c9
    MOV ESI,dword ptr [0x005f2afc]      ; 0052269e | DAT_005f2afc
    PUSH ESI                            ; 005226a4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 005226a5
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005226aa
    TEST EAX,EAX                        ; 005226ad
    JNZ 0x005226c9                      ; 005226af
        ;   XREF to: 005226c9 (CONDITIONAL_JUMP)  ; LAB_005226c9
    CMP dword ptr [EBX + 0x2f08],0x0    ; 005226b1
    JLE 0x005226c9                      ; 005226b8
        ;   XREF to: 005226c9 (CONDITIONAL_JUMP)  ; LAB_005226c9
    ADD EBX,0x2f08                      ; 005226ba
    PUSH EBX                            ; 005226c0
    CALL core_cloth.cpp_CClothList_reset_FUN_0043f9d0 ; 005226c1
        ;   XREF to: 0043f9d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_reset_FUN_0043f9d0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 005226c6
    MOV EAX,0x1                         ; 005226c9
        ;   Label: LAB_005226c9
    LEA ESP,[EBP + 0x82]                ; 005226ce
    POP EBP                             ; 005226d4
    POP EDI                             ; 005226d5
    POP ESI                             ; 005226d6
    POP EBX                             ; 005226d7
    RET                                 ; 005226d8
    MOV EDX,dword ptr [0x007dff04]      ; 005226d9 | g_CBindEvilClassInfo.name_hash
        ;   Label: LAB_005226d9
    PUSH EDX                            ; 005226df
    MOV ECX,dword ptr [EBX + 0x20c24]   ; 005226e0
    PUSH ECX                            ; 005226e6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005226e7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005226ec
    TEST EAX,EAX                        ; 005226ef
    JNZ 0x005222c9                      ; 005226f1
        ;   XREF to: 005222c9 (CONDITIONAL_JUMP)  ; LAB_005222c9
    JMP 0x005222d4                      ; 005226f7
        ;   XREF to: 005222d4 (UNCONDITIONAL_JUMP)  ; LAB_005222d4
    MOV EAX,0x4                         ; 005226fc
        ;   Label: caseD_1
    JMP 0x00522312                      ; 00522701
        ;   XREF to: 00522312 (UNCONDITIONAL_JUMP)  ; LAB_00522312
    MOV EAX,0xe                         ; 00522706
        ;   Label: caseD_9
    JMP 0x00522312                      ; 0052270b
        ;   XREF to: 00522312 (UNCONDITIONAL_JUMP)  ; LAB_00522312
    MOV EAX,0x7                         ; 00522710
        ;   Label: caseD_4
    JMP 0x00522312                      ; 00522715
        ;   XREF to: 00522312 (UNCONDITIONAL_JUMP)  ; LAB_00522312
    MOV EAX,0x5                         ; 0052271a
        ;   Label: caseD_2
    JMP 0x00522312                      ; 0052271f
        ;   XREF to: 00522312 (UNCONDITIONAL_JUMP)  ; LAB_00522312
    MOV EAX,0x8                         ; 00522724
        ;   Label: caseD_7
    JMP 0x00522312                      ; 00522729
        ;   XREF to: 00522312 (UNCONDITIONAL_JUMP)  ; LAB_00522312
    MOV EAX,0x11                        ; 0052272e
        ;   Label: caseD_d
    JMP 0x00522312                      ; 00522733
        ;   XREF to: 00522312 (UNCONDITIONAL_JUMP)  ; LAB_00522312
    MOV EAX,0x12                        ; 00522738
        ;   Label: caseD_e
    JMP 0x00522312                      ; 0052273d
        ;   XREF to: 00522312 (UNCONDITIONAL_JUMP)  ; LAB_00522312
    XOR EAX,EAX                         ; 00522742
        ;   Label: caseD_3
    JMP 0x00522312                      ; 00522744
        ;   XREF to: 00522312 (UNCONDITIONAL_JUMP)  ; LAB_00522312
    TEST ESI,ESI                        ; 00522749
        ;   Label: LAB_00522749
    JNZ 0x00522361                      ; 0052274b
        ;   XREF to: 00522361 (CONDITIONAL_JUMP)  ; LAB_00522361
    JMP 0x00522377                      ; 00522751
        ;   XREF to: 00522377 (UNCONDITIONAL_JUMP)  ; LAB_00522377
    MOV EDX,0x3f94bac7                  ; 00522756
        ;   Label: LAB_00522756
    MOV ECX,0x3d488e0e                  ; 0052275b
    MOV ESI,0x3ebc7410                  ; 00522760
    LEA EDI,[EBP + 0x12]                ; 00522765
    LEA EAX,[EBP + 0x12]                ; 00522768
    MOV dword ptr [EBP + -0x72],EDX     ; 0052276b
    MOV dword ptr [EBP + -0x6a],ECX     ; 0052276e
    MOV dword ptr [EBP + -0x6e],ESI     ; 00522771
    PUSH EAX                            ; 00522774
    LEA ESI,[EBP + -0x72]               ; 00522775
    MOV EAX,0xbca5f882                  ; 00522778
    MOV EDX,0x3e05d9a1                  ; 0052277d
    MOV dword ptr [EBP + -0x7a],EAX     ; 00522782
    LEA EAX,[EBP + -0x7e]               ; 00522785
    MOVSD ES:EDI,ESI                    ; 00522788
    MOVSD ES:EDI,ESI                    ; 00522789
    MOVSD ES:EDI,ESI                    ; 0052278a
    PUSH EAX                            ; 0052278b
    LEA EAX,[EBP + 0xfffffd66]          ; 0052278c
    MOV EDI,0x3f033b43                  ; 00522792
    PUSH EAX                            ; 00522797
    MOV dword ptr [EBP + -0x76],EDX     ; 00522798
    MOV dword ptr [EBP + -0x7e],EDI     ; 0052279b
    CALL core_xform.cpp_FUN_00583940    ; 0052279e
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    MOV ESI,dword ptr [0x01ed3714]      ; 005227a3 | DAT_01ed3714
    LEA EAX,[ESI*0x4 + 0x0]             ; 005227a9
    SUB EAX,ESI                         ; 005227b0
    MOV ECX,dword ptr [EBP + 0x72]      ; 005227b2
    SHL EAX,0x4                         ; 005227b5
    ADD ESP,0xc                         ; 005227b8
    ADD EAX,ECX                         ; 005227bb
    PUSH EAX                            ; 005227bd
    LEA EAX,[EBP + 0xfffffd66]          ; 005227be
    PUSH EAX                            ; 005227c4
    LEA ESI,[EBP + 0xfffffd96]          ; 005227c5
    LEA EDI,[EBP + 0xfffffe86]          ; 005227cb
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 005227d1
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005227d6
    LEA ESI,[EBP + 0xfffffd96]          ; 005227db
    JMP 0x0052247a                      ; 005227e1
        ;   XREF to: 0052247a (UNCONDITIONAL_JUMP)  ; LAB_0052247a
    MOV EDX,0x3ea30f8c                  ; 005227e6
        ;   Label: LAB_005227e6
    MOV ECX,0x3b9b6f1c                  ; 005227eb
    MOV ESI,0xbe7cc187                  ; 005227f0
    LEA EDI,[EBP + 0x2a]                ; 005227f5
    LEA EAX,[EBP + 0x2a]                ; 005227f8
    MOV dword ptr [EBP + -0x6],EDX      ; 005227fb
    MOV dword ptr [EBP + 0x2],ECX       ; 005227fe
    MOV dword ptr [EBP + -0x2],ESI      ; 00522801
    PUSH EAX                            ; 00522804
    LEA ESI,[EBP + -0x6]                ; 00522805
    MOV EAX,0xbd9786f8                  ; 00522808
    MOV EDX,0xbcb456b4                  ; 0052280d
    MOV dword ptr [EBP + 0x22],EAX      ; 00522812
    LEA EAX,[EBP + 0x1e]                ; 00522815
    MOVSD ES:EDI,ESI                    ; 00522818
    MOVSD ES:EDI,ESI                    ; 00522819
    MOVSD ES:EDI,ESI                    ; 0052281a
    PUSH EAX                            ; 0052281b
    LEA EAX,[EBP + 0xfffffee6]          ; 0052281c
    MOV EDI,0xbedac387                  ; 00522822
    PUSH EAX                            ; 00522827
    MOV dword ptr [EBP + 0x26],EDX      ; 00522828
    MOV dword ptr [EBP + 0x1e],EDI      ; 0052282b
    CALL core_xform.cpp_FUN_00583940    ; 0052282e
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    MOV ESI,dword ptr [0x01ed3710]      ; 00522833 | DAT_01ed3710
    LEA EAX,[ESI*0x4 + 0x0]             ; 00522839
    SUB EAX,ESI                         ; 00522840
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00522842
    SHL EAX,0x4                         ; 00522845
    ADD ESP,0xc                         ; 00522848
    ADD EAX,ECX                         ; 0052284b
    PUSH EAX                            ; 0052284d
    LEA EAX,[EBP + 0xfffffee6]          ; 0052284e
    PUSH EAX                            ; 00522854
    LEA ESI,[EBP + 0xfffffdf6]          ; 00522855
    LEA EDI,[EBP + 0xffffff16]          ; 0052285b
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00522861
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00522866
    LEA ESI,[EBP + 0xfffffdf6]          ; 0052286b
    JMP 0x0052260b                      ; 00522871
        ;   XREF to: 0052260b (UNCONDITIONAL_JUMP)  ; LAB_0052260b

