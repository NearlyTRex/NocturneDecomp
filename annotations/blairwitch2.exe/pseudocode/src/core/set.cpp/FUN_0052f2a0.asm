; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_0052f2a0(CDemonSet *this_ptr,int skip_prerender)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_prerender
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5ca3
;
; Referenced Globals:
;   undefined4 s_comp_3_2f_3_2f_actren_3_005e58b9+1
;   undefined4 DAT_005e58e2
;   undefined4 DAT_005e58ea
;   undefined4 DAT_005e58f2
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_00614d30
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 DAT_00618170
;   undefined4 DAT_0061e450
;   CWater* g_CWaterPtr = 02653790
;   undefined4 DAT_0061e8f4
;   CConsole g_CConsoleInstance
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.quimby_flag
;   ... and 16 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00440370
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_004406d0
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80
;   core_dcamera.cpp_FUN_00440500
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520
;   core_dlight.cpp_FUN_0044b020
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f2a0
        ;   Label: core_set.cpp_FUN_0052f2a0
    PUSH ESI                            ; 0052f2a1
    PUSH EDI                            ; 0052f2a2
    PUSH EBP                            ; 0052f2a3
    MOV EBP,ESP                         ; 0052f2a4
    SUB ESP,0x74                        ; 0052f2a6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052f2a9
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052f2ac
    MOV EAX,[0x00616494]                ; 0052f2af | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x0     ; 0052f2b4 | g_CGameInstance.profile_mode
    JNZ 0x0052f94f                      ; 0052f2bb
        ;   XREF to: 0052f94f (CONDITIONAL_JUMP)  ; LAB_0052f94f
    TEST ESI,ESI                        ; 0052f2c1
        ;   Label: LAB_0052f2c1
    JNZ 0x0052f95c                      ; 0052f2c3
        ;   XREF to: 0052f95c (CONDITIONAL_JUMP)  ; LAB_0052f95c
    TEST ESI,ESI                        ; 0052f2c9
        ;   Label: LAB_0052f2c9
    JNZ 0x0052f2f0                      ; 0052f2cb
        ;   XREF to: 0052f2f0 (CONDITIONAL_JUMP)  ; LAB_0052f2f0
    PUSH 0x1cb3950                      ; 0052f2cd
    PUSH EBX                            ; 0052f2d2
    MOV dword ptr [0x01fc9608],ESI      ; 0052f2d3 | DAT_01fc9608
    MOV dword ptr [0x01fc961c],ESI      ; 0052f2d9 | DAT_01fc961c
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630 ; 0052f2df
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_00530630(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 0052f2e4
    PUSH EBX                            ; 0052f2e7
    CALL core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 ; 0052f2e8
        ;   XREF to: 0052ef80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052f2ed
    PUSH 0x1fc7838                      ; 0052f2f0
        ;   Label: LAB_0052f2f0
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30 ; 0052f2f5
        ;   XREF to: 0043bc30 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30(CDemonCamera * this_ptr)
    MOV EDI,dword ptr [EBX + 0x161668]  ; 0052f2fa
    ADD ESP,0x4                         ; 0052f300
    TEST EDI,EDI                        ; 0052f303
    JZ 0x0052f31a                       ; 0052f305
        ;   XREF to: 0052f31a (CONDITIONAL_JUMP)  ; LAB_0052f31a
    PUSH EBX                            ; 0052f307
    CALL core_set.cpp_CDemonSet_restoreCameraView_FUN_00534490 ; 0052f308
        ;   XREF to: 00534490 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraView_FUN_00534490(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052f30d
    MOV dword ptr [EBX + 0x161668],0x0  ; 0052f310
    PUSH 0x1                            ; 0052f31a
        ;   Label: LAB_0052f31a
    PUSH 0x1fc7838                      ; 0052f31c
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 ; 0052f321
        ;   XREF to: 0043b7f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,[0x0200a3b8]                ; 0052f326 | DAT_0200a3b8
    ADD ESP,0x8                         ; 0052f32b
    TEST EAX,EAX                        ; 0052f32e
    JZ 0x0052f978                       ; 0052f330
        ;   XREF to: 0052f978 (CONDITIONAL_JUMP)  ; LAB_0052f978
    PUSH 0x1fc7838                      ; 0052f336
        ;   Label: LAB_0052f336
    XOR ECX,ECX                         ; 0052f33b
    XOR ESI,ESI                         ; 0052f33d
    MOV dword ptr [0x0200a3b8],ECX      ; 0052f33f | DAT_0200a3b8
    CALL core_dcamera.cpp_CDemonCamera_processCorona_FUN_004406d0 ; 0052f345
        ;   XREF to: 004406d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_processCorona_FUN_004406d0(CDemonCamera * this_ptr)
    MOV EDI,dword ptr [0x01fc8e84]      ; 0052f34a | DAT_01fc8e84
    ADD ESP,0x4                         ; 0052f350
    TEST EDI,EDI                        ; 0052f353
    JLE 0x0052f383                      ; 0052f355
        ;   XREF to: 0052f383 (CONDITIONAL_JUMP)  ; LAB_0052f383
    XOR EDI,EDI                         ; 0052f357
    MOV EAX,dword ptr [EDI + 0x1fc8e88] ; 0052f359 | DAT_01fc8e88
        ;   Label: LAB_0052f359
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0052f35f
    JZ 0x0052f376                       ; 0052f366
        ;   XREF to: 0052f376 (CONDITIONAL_JUMP)  ; LAB_0052f376
    PUSH EAX                            ; 0052f368
    PUSH 0x1fc7838                      ; 0052f369
    CALL core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00440370 ; 0052f36e
        ;   XREF to: 00440370 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00440370(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 0052f373
    MOV EAX,[0x01fc8e84]                ; 0052f376 | DAT_01fc8e84
        ;   Label: LAB_0052f376
    INC ESI                             ; 0052f37b
    ADD EDI,0x4                         ; 0052f37c
    CMP ESI,EAX                         ; 0052f37f
    JL 0x0052f359                       ; 0052f381
        ;   XREF to: 0052f359 (CONDITIONAL_JUMP)  ; LAB_0052f359
    XOR EDX,EDX                         ; 0052f383
        ;   Label: LAB_0052f383
    MOV ECX,dword ptr [0x01fc9608]      ; 0052f385 | DAT_01fc9608
    MOV dword ptr [EBP + -0x1c],EDX     ; 0052f38b
    TEST ECX,ECX                        ; 0052f38e
    JLE 0x0052f423                      ; 0052f390
        ;   XREF to: 0052f423 (CONDITIONAL_JUMP)  ; LAB_0052f423
    MOV dword ptr [EBP + -0x14],EDX     ; 0052f396
    MOV EAX,dword ptr [EBP + -0x14]     ; 0052f399
        ;   Label: LAB_0052f399
    MOV EAX,dword ptr [EAX + 0x1fc960c] ; 0052f39c
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0052f3a2
    JZ 0x0052f405                       ; 0052f3a9
        ;   XREF to: 0052f405 (CONDITIONAL_JUMP)  ; LAB_0052f405
    CMP dword ptr [EAX + 0x1cd0],0x0    ; 0052f3ab
    JZ 0x0052f405                       ; 0052f3b2
        ;   XREF to: 0052f405 (CONDITIONAL_JUMP)  ; LAB_0052f405
    PUSH EAX                            ; 0052f3b4
    PUSH 0x1fc7838                      ; 0052f3b5
    XOR ESI,ESI                         ; 0052f3ba
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000 ; 0052f3bc
        ;   XREF to: 00440000 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000(CDemonCamera * this_ptr, CDemonLight * light_source)
    MOV EAX,dword ptr [EBX + 0x15acc8]  ; 0052f3c1
    ADD ESP,0x8                         ; 0052f3c7
    TEST EAX,EAX                        ; 0052f3ca
    JLE 0x0052f405                      ; 0052f3cc
        ;   XREF to: 0052f405 (CONDITIONAL_JUMP)  ; LAB_0052f405
    MOV EDI,dword ptr [EBP + -0x14]     ; 0052f3ce
    PUSH 0x0                            ; 0052f3d1
        ;   Label: LAB_0052f3d1
    PUSH ESI                            ; 0052f3d3
    PUSH EBX                            ; 0052f3d4
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052f3d5
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052f3da
    MOV EDX,dword ptr [EDI + 0x1fc960c] ; 0052f3dd
    PUSH EDX                            ; 0052f3e3
    PUSH 0x1fc7838                      ; 0052f3e4
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000 ; 0052f3e9
        ;   XREF to: 00440000 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 0052f3ee
    PUSH EBX                            ; 0052f3f1
    INC ESI                             ; 0052f3f2
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052f3f3
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 0052f3f8
    ADD ESP,0x4                         ; 0052f3fe
    CMP ESI,ECX                         ; 0052f401
    JL 0x0052f3d1                       ; 0052f403
        ;   XREF to: 0052f3d1 (CONDITIONAL_JUMP)  ; LAB_0052f3d1
    MOV ECX,dword ptr [EBP + -0x14]     ; 0052f405
        ;   Label: LAB_0052f405
    MOV ESI,dword ptr [EBP + -0x1c]     ; 0052f408
    MOV EDI,dword ptr [0x01fc9608]      ; 0052f40b | DAT_01fc9608
    ADD ECX,0x4                         ; 0052f411
    INC ESI                             ; 0052f414
    MOV dword ptr [EBP + -0x14],ECX     ; 0052f415
    MOV dword ptr [EBP + -0x1c],ESI     ; 0052f418
    CMP ESI,EDI                         ; 0052f41b
    JL 0x0052f399                       ; 0052f41d
        ;   XREF to: 0052f399 (CONDITIONAL_JUMP)  ; LAB_0052f399
    XOR EAX,EAX                         ; 0052f423
        ;   Label: LAB_0052f423
    MOV EDX,dword ptr [0x01fc961c]      ; 0052f425 | DAT_01fc961c
    MOV dword ptr [EBP + -0x2c],EAX     ; 0052f42b
    TEST EDX,EDX                        ; 0052f42e
    JLE 0x0052f4b1                      ; 0052f430
        ;   XREF to: 0052f4b1 (CONDITIONAL_JUMP)  ; LAB_0052f4b1
    MOV dword ptr [EBP + -0x18],EAX     ; 0052f436
    MOV EAX,dword ptr [EBP + -0x18]     ; 0052f439
        ;   Label: LAB_0052f439
    PUSH 0x0                            ; 0052f43c
    MOV EDX,dword ptr [EAX + 0x1fc9620] ; 0052f43e
    PUSH EDX                            ; 0052f444
    PUSH 0x1fc7838                      ; 0052f445
    XOR ESI,ESI                         ; 0052f44a
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90 ; 0052f44c
        ;   XREF to: 00440e90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 0052f451
    ADD ESP,0xc                         ; 0052f457
    TEST ECX,ECX                        ; 0052f45a
    JLE 0x0052f497                      ; 0052f45c
        ;   XREF to: 0052f497 (CONDITIONAL_JUMP)  ; LAB_0052f497
    MOV EDI,dword ptr [EBP + -0x18]     ; 0052f45e
    PUSH 0x0                            ; 0052f461
        ;   Label: LAB_0052f461
    PUSH ESI                            ; 0052f463
    PUSH EBX                            ; 0052f464
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052f465
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052f46a
    PUSH 0x1                            ; 0052f46d
    MOV EAX,dword ptr [EDI + 0x1fc9620] ; 0052f46f
    PUSH EAX                            ; 0052f475
    PUSH 0x1fc7838                      ; 0052f476
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90 ; 0052f47b
        ;   XREF to: 00440e90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    ADD ESP,0xc                         ; 0052f480
    PUSH EBX                            ; 0052f483
    INC ESI                             ; 0052f484
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052f485
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 0052f48a
    ADD ESP,0x4                         ; 0052f490
    CMP ESI,EDX                         ; 0052f493
    JL 0x0052f461                       ; 0052f495
        ;   XREF to: 0052f461 (CONDITIONAL_JUMP)  ; LAB_0052f461
    MOV ESI,dword ptr [EBP + -0x18]     ; 0052f497
        ;   Label: LAB_0052f497
    MOV EDI,dword ptr [EBP + -0x2c]     ; 0052f49a
    MOV EDX,dword ptr [0x01fc961c]      ; 0052f49d | DAT_01fc961c
    ADD ESI,0x4                         ; 0052f4a3
    INC EDI                             ; 0052f4a6
    MOV dword ptr [EBP + -0x18],ESI     ; 0052f4a7
    MOV dword ptr [EBP + -0x2c],EDI     ; 0052f4aa
    CMP EDI,EDX                         ; 0052f4ad
    JL 0x0052f439                       ; 0052f4af
        ;   XREF to: 0052f439 (CONDITIONAL_JUMP)  ; LAB_0052f439
    XOR ECX,ECX                         ; 0052f4b1
        ;   Label: LAB_0052f4b1
    MOV EDI,dword ptr [0x01fc97b0]      ; 0052f4b3 | DAT_01fc97b0
    MOV dword ptr [EBP + -0x20],ECX     ; 0052f4b9
    MOV dword ptr [0x01fc9ad4],ECX      ; 0052f4bc | DAT_01fc9ad4
    TEST EDI,EDI                        ; 0052f4c2
    JLE 0x0052f514                      ; 0052f4c4
        ;   XREF to: 0052f514 (CONDITIONAL_JUMP)  ; LAB_0052f514
    XOR ESI,ESI                         ; 0052f4c6
    MOV EAX,dword ptr [ESI + 0x1fc9944] ; 0052f4c8
        ;   Label: LAB_0052f4c8
    MOV EDI,dword ptr [ESI + 0x1fc97b4] ; 0052f4ce
    TEST EAX,EAX                        ; 0052f4d4
    JNZ 0x0052f98c                      ; 0052f4d6
        ;   XREF to: 0052f98c (CONDITIONAL_JUMP)  ; LAB_0052f98c
    PUSH EAX                            ; 0052f4dc
    PUSH EDI                            ; 0052f4dd
    PUSH 0x1fc7838                      ; 0052f4de
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90 ; 0052f4e3
        ;   XREF to: 00440e90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    MOV EAX,[0x01fc9ad4]                ; 0052f4e8 | DAT_01fc9ad4
    MOV dword ptr [EAX*0x4 + 0x1fc9ad8],EDI ; 0052f4ed | DAT_01fc9ad8
    LEA EDI,[EAX + 0x1]                 ; 0052f4f4
    ADD ESP,0xc                         ; 0052f4f7
    MOV dword ptr [0x01fc9ad4],EDI      ; 0052f4fa | DAT_01fc9ad4
    MOV EDI,dword ptr [EBP + -0x20]     ; 0052f500
        ;   Label: LAB_0052f500
    MOV EDX,dword ptr [0x01fc97b0]      ; 0052f503 | DAT_01fc97b0
    INC EDI                             ; 0052f509
    ADD ESI,0x4                         ; 0052f50a
    MOV dword ptr [EBP + -0x20],EDI     ; 0052f50d
    CMP EDI,EDX                         ; 0052f510
    JL 0x0052f4c8                       ; 0052f512
        ;   XREF to: 0052f4c8 (CONDITIONAL_JUMP)  ; LAB_0052f4c8
    FLD float ptr [EBX + 0x14d160]      ; 0052f514
        ;   Label: LAB_0052f514
    XOR ECX,ECX                         ; 0052f51a
    FLDZ                                ; 0052f51c
    MOV dword ptr [0x01fc97b0],ECX      ; 0052f51e | DAT_01fc97b0
    FCOMPP                              ; 0052f524
    FNSTSW AX                           ; 0052f526
    SAHF                                ; 0052f528
    JNC 0x0052f538                      ; 0052f529
        ;   XREF to: 0052f538 (CONDITIONAL_JUMP)  ; LAB_0052f538
    PUSH 0x1fc7838                      ; 0052f52b
    CALL core_dcamera.cpp_FUN_00440500  ; 0052f530
        ;   XREF to: 00440500 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00440500()
    ADD ESP,0x4                         ; 0052f535
    MOV EAX,[0x00616494]                ; 0052f538 | g_CGamePtr
        ;   Label: LAB_0052f538
    CMP dword ptr [EAX + 0x228],0x0     ; 0052f53d | g_CGameInstance.profile_mode
    JZ 0x0052f54e                       ; 0052f544
        ;   XREF to: 0052f54e (CONDITIONAL_JUMP)  ; LAB_0052f54e
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0052f546
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV dword ptr [EBP + -0x3c],EAX     ; 0052f54b
    PUSH 0x1fc7838                      ; 0052f54e
        ;   Label: LAB_0052f54e
    CALL core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760 ; 0052f553
        ;   XREF to: 00440760 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00440760(CDemonCamera * this_ptr)
    MOV EAX,[0x00616494]                ; 0052f558 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x228]     ; 0052f55d | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 0052f563
    TEST ESI,ESI                        ; 0052f566
    JZ 0x0052f572                       ; 0052f568
        ;   XREF to: 0052f572 (CONDITIONAL_JUMP)  ; LAB_0052f572
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0052f56a
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV dword ptr [EBP + -0x38],EAX     ; 0052f56f
    MOV EAX,[0x01fc8e84]                ; 0052f572 | DAT_01fc8e84
        ;   Label: LAB_0052f572
    XOR EDI,EDI                         ; 0052f577
    TEST EAX,EAX                        ; 0052f579
    JLE 0x0052f5a0                      ; 0052f57b
        ;   XREF to: 0052f5a0 (CONDITIONAL_JUMP)  ; LAB_0052f5a0
    XOR ESI,ESI                         ; 0052f57d
    MOV EDX,dword ptr [ESI + 0x1fc8e88] ; 0052f57f | DAT_01fc8e88
        ;   Label: LAB_0052f57f
    PUSH EDX                            ; 0052f585
    ADD ESI,0x4                         ; 0052f586
    INC EDI                             ; 0052f589
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520 ; 0052f58a
        ;   XREF to: 0044a520 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520(CDemonLight * this_ptr)
    MOV ECX,dword ptr [0x01fc8e84]      ; 0052f58f | DAT_01fc8e84
    ADD ESP,0x4                         ; 0052f595
    CMP EDI,ECX                         ; 0052f598
    JL 0x0052f57f                       ; 0052f59a
        ;   XREF to: 0052f57f (CONDITIONAL_JUMP)  ; LAB_0052f57f
    LEA EAX,[EAX]                       ; 0052f59c
    PUSH 0xc                            ; 0052f5a0
        ;   Label: LAB_0052f5a0
    PUSH EBX                            ; 0052f5a2
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 ; 0052f5a3
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0052f5a8
    PUSH EBX                            ; 0052f5ab
    CALL core_set.cpp_FUN_005301d0      ; 0052f5ac
        ;   XREF to: 005301d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005301d0()
    ADD ESP,0x4                         ; 0052f5b1
    PUSH 0x0                            ; 0052f5b4
    PUSH 0x0                            ; 0052f5b6
    PUSH 0x1fc7838                      ; 0052f5b8
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80 ; 0052f5bd
        ;   XREF to: 00442d80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 0052f5c2
    MOV ESI,dword ptr [0x006167e0]      ; 0052f5c5 | g_CGorePtr
    PUSH ESI                            ; 0052f5cb
    CALL core_gore.cpp_CGore_renderParticles_FUN_004c9440 ; 0052f5cc
        ;   XREF to: 004c9440 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004c9440(CGore * this_ptr)
    ADD ESP,0x4                         ; 0052f5d1
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 0052f5d4
    XOR ESI,ESI                         ; 0052f5da
    TEST EDI,EDI                        ; 0052f5dc
    JLE 0x0052f610                      ; 0052f5de
        ;   XREF to: 0052f610 (CONDITIONAL_JUMP)  ; LAB_0052f610
    PUSH 0x0                            ; 0052f5e0
        ;   Label: LAB_0052f5e0
    PUSH ESI                            ; 0052f5e2
    PUSH EBX                            ; 0052f5e3
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052f5e4
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052f5e9
    MOV EAX,[0x006167e0]                ; 0052f5ec | g_CGorePtr
    PUSH EAX                            ; 0052f5f1
    CALL core_gore.cpp_CGore_renderParticles_FUN_004c9440 ; 0052f5f2
        ;   XREF to: 004c9440 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004c9440(CGore * this_ptr)
    ADD ESP,0x4                         ; 0052f5f7
    PUSH EBX                            ; 0052f5fa
    INC ESI                             ; 0052f5fb
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052f5fc
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 0052f601
    ADD ESP,0x4                         ; 0052f607
    CMP ESI,EDX                         ; 0052f60a
    JL 0x0052f5e0                       ; 0052f60c
        ;   XREF to: 0052f5e0 (CONDITIONAL_JUMP)  ; LAB_0052f5e0
    MOV EAX,EAX                         ; 0052f60e
    MOV EAX,[0x0061e520]                ; 0052f610 | g_CWaterPtr
        ;   Label: LAB_0052f610
    CMP dword ptr [EAX],0x0             ; 0052f615 | g_CWaterInstance
    JZ 0x0052f625                       ; 0052f618
        ;   XREF to: 0052f625 (CONDITIONAL_JUMP)  ; LAB_0052f625
    PUSH 0x0                            ; 0052f61a
    PUSH EAX                            ; 0052f61c | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005862e0 ; 0052f61d
        ;   XREF to: 005862e0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005862e0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0052f622
    PUSH EBX                            ; 0052f625
        ;   Label: LAB_0052f625
    CALL core_set.cpp_FUN_00530410      ; 0052f626
        ;   XREF to: 00530410 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00530410()
    MOV ESI,dword ptr [EBX + 0x15acb8]  ; 0052f62b
    ADD ESP,0x4                         ; 0052f631
    TEST ESI,ESI                        ; 0052f634
    JZ 0x0052f649                       ; 0052f636
        ;   XREF to: 0052f649 (CONDITIONAL_JUMP)  ; LAB_0052f649
    PUSH 0x0                            ; 0052f638
    MOV EDI,dword ptr [0x0061e450]      ; 0052f63a | DAT_0061e450
    PUSH EDI                            ; 0052f640
    CALL core_terrain.cpp_CTerrain_render_FUN_0057b860 ; 0052f641
        ;   XREF to: 0057b860 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_render_FUN_0057b860(CTerrain * this_ptr, int render_pass)
    ADD ESP,0x8                         ; 0052f646
    MOV EAX,[0x00614d30]                ; 0052f649 | DAT_00614d30
        ;   Label: LAB_0052f649
    PUSH EAX                            ; 0052f64e
    XOR ESI,ESI                         ; 0052f64f
    CALL core_fire.cpp_CFireEffect_render_FUN_0049c780 ; 0052f651
        ;   XREF to: 0049c780 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0049c780(CFireEffect * this_ptr)
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 0052f656
    ADD ESP,0x4                         ; 0052f65c
    TEST EDX,EDX                        ; 0052f65f
    JLE 0x0052f6a0                      ; 0052f661
        ;   XREF to: 0052f6a0 (CONDITIONAL_JUMP)  ; LAB_0052f6a0
    PUSH 0x0                            ; 0052f663
        ;   Label: LAB_0052f663
    PUSH ESI                            ; 0052f665
    PUSH EBX                            ; 0052f666
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052f667
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052f66c
    MOV ECX,dword ptr [0x00614d30]      ; 0052f66f | DAT_00614d30
    PUSH ECX                            ; 0052f675
    CALL core_fire.cpp_CFireEffect_render_FUN_0049c780 ; 0052f676
        ;   XREF to: 0049c780 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0049c780(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0052f67b
    PUSH EBX                            ; 0052f67e
    INC ESI                             ; 0052f67f
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052f680
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 0052f685
    ADD ESP,0x4                         ; 0052f68b
    CMP ESI,EDI                         ; 0052f68e
    JL 0x0052f663                       ; 0052f690
        ;   XREF to: 0052f663 (CONDITIONAL_JUMP)  ; LAB_0052f663
    LEA EAX,[EAX]                       ; 0052f692
    LEA EDX,[EDX]                       ; 0052f698
    MOV EAX,EAX                         ; 0052f69e
    MOV EAX,[0x0061e8f4]                ; 0052f6a0 | DAT_0061e8f4
        ;   Label: LAB_0052f6a0
    PUSH EAX                            ; 0052f6a5
    CALL core_weather.cpp_CWeather_renderParticles_FUN_0058ad40 ; 0052f6a6
        ;   XREF to: 0058ad40 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_renderParticles_FUN_0058ad40(CWeather * this_ptr)
    MOV ECX,dword ptr [0x01fc9608]      ; 0052f6ab | DAT_01fc9608
    XOR EDX,EDX                         ; 0052f6b1
    ADD ESP,0x4                         ; 0052f6b3
    MOV dword ptr [EBP + -0x24],EDX     ; 0052f6b6
    TEST ECX,ECX                        ; 0052f6b9
    JLE 0x0052f6f4                      ; 0052f6bb
        ;   XREF to: 0052f6f4 (CONDITIONAL_JUMP)  ; LAB_0052f6f4
    MOV dword ptr [EBP + -0x34],EDX     ; 0052f6bd
    MOV EAX,dword ptr [EBP + -0x34]     ; 0052f6c0
        ;   Label: LAB_0052f6c0
    MOV EAX,dword ptr [EAX + 0x1fc960c] ; 0052f6c3
    MOV ECX,dword ptr [EAX + 0x1cb4]    ; 0052f6c9
    MOV dword ptr [EBP + -0x10],EAX     ; 0052f6cf
    TEST ECX,ECX                        ; 0052f6d2
    JNZ 0x0052f9b7                      ; 0052f6d4
        ;   XREF to: 0052f9b7 (CONDITIONAL_JUMP)  ; LAB_0052f9b7
    MOV ESI,dword ptr [EBP + -0x34]     ; 0052f6da
        ;   Label: LAB_0052f6da
    MOV EDI,dword ptr [EBP + -0x24]     ; 0052f6dd
    MOV EDX,dword ptr [0x01fc9608]      ; 0052f6e0 | DAT_01fc9608
    ADD ESI,0x4                         ; 0052f6e6
    INC EDI                             ; 0052f6e9
    MOV dword ptr [EBP + -0x34],ESI     ; 0052f6ea
    MOV dword ptr [EBP + -0x24],EDI     ; 0052f6ed
    CMP EDI,EDX                         ; 0052f6f0
    JL 0x0052f6c0                       ; 0052f6f2
        ;   XREF to: 0052f6c0 (CONDITIONAL_JUMP)  ; LAB_0052f6c0
    PUSH 0x1fc7838                      ; 0052f6f4
        ;   Label: LAB_0052f6f4
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040 ; 0052f6f9
        ;   XREF to: 0043c040 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052f6fe
    PUSH 0x1                            ; 0052f701
    PUSH 0x0                            ; 0052f703
    MOV ECX,dword ptr [0x006167e0]      ; 0052f705 | g_CGorePtr
    PUSH ECX                            ; 0052f70b
    CALL core_gore.cpp_CGore_renderDecals_FUN_004c94c0 ; 0052f70c
        ;   XREF to: 004c94c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004c94c0(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 0052f711
    PUSH 0x1                            ; 0052f714
    PUSH 0x0                            ; 0052f716
    MOV ESI,dword ptr [0x00614d30]      ; 0052f718 | DAT_00614d30
    PUSH ESI                            ; 0052f71e
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50 ; 0052f71f
        ;   XREF to: 0049cb50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50(CFireEffect * this_ptr, int render_mode, int render_completeness)
    MOV EAX,[0x0061e520]                ; 0052f724 | g_CWaterPtr
    MOV EDI,dword ptr [EAX]             ; 0052f729 | g_CWaterInstance
    ADD ESP,0xc                         ; 0052f72b
    TEST EDI,EDI                        ; 0052f72e
    JNZ 0x0052f73c                      ; 0052f730
        ;   XREF to: 0052f73c (CONDITIONAL_JUMP)  ; LAB_0052f73c
    PUSH EDI                            ; 0052f732
    PUSH EAX                            ; 0052f733 | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005862e0 ; 0052f734
        ;   XREF to: 005862e0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005862e0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0052f739
    MOV EAX,dword ptr [EBX + 0x14d164]  ; 0052f73c
        ;   Label: LAB_0052f73c
    XOR ESI,ESI                         ; 0052f742
    TEST EAX,EAX                        ; 0052f744
    JLE 0x0052f780                      ; 0052f746
        ;   XREF to: 0052f780 (CONDITIONAL_JUMP)  ; LAB_0052f780
    MOV EDI,EBX                         ; 0052f748
    MOV EAX,[0x01cb8280]                ; 0052f74a | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0052f74a
    PUSH EAX                            ; 0052f74f
    MOV EDX,dword ptr [EDI + 0x14d168]  ; 0052f750
    PUSH EDX                            ; 0052f756
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0052f757
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0052f75c
    TEST EAX,EAX                        ; 0052f75f
    JZ 0x0052f772                       ; 0052f761
        ;   XREF to: 0052f772 (CONDITIONAL_JUMP)  ; LAB_0052f772
    PUSH 0x0                            ; 0052f763
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052f765
    PUSH EAX                            ; 0052f76b
    CALL dword ptr [EDX + 0x20]         ; 0052f76c
    ADD ESP,0x8                         ; 0052f76f
    INC ESI                             ; 0052f772
        ;   Label: LAB_0052f772
    MOV EAX,dword ptr [EBX + 0x14d164]  ; 0052f773
    ADD EDI,0x4                         ; 0052f779
    CMP ESI,EAX                         ; 0052f77c
    JL 0x0052f74a                       ; 0052f77e
        ;   XREF to: 0052f74a (CONDITIONAL_JUMP)  ; LAB_0052f74a
    PUSH 0x0                            ; 0052f780
        ;   Label: LAB_0052f780
    PUSH 0x1fc7838                      ; 0052f782
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200 ; 0052f787
        ;   XREF to: 0043c200 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(CDemonCamera * this_ptr, int restore_zbuffer)
    MOV ECX,dword ptr [0x01fc9608]      ; 0052f78c | DAT_01fc9608
    XOR EDX,EDX                         ; 0052f792
    ADD ESP,0x8                         ; 0052f794
    MOV dword ptr [EBP + -0x28],EDX     ; 0052f797
    TEST ECX,ECX                        ; 0052f79a
    JLE 0x0052f7d5                      ; 0052f79c
        ;   XREF to: 0052f7d5 (CONDITIONAL_JUMP)  ; LAB_0052f7d5
    MOV dword ptr [EBP + -0x30],EDX     ; 0052f79e
    MOV EAX,dword ptr [EBP + -0x30]     ; 0052f7a1
        ;   Label: LAB_0052f7a1
    MOV EAX,dword ptr [EAX + 0x1fc960c] ; 0052f7a4
    MOV ECX,dword ptr [EAX + 0x1cb4]    ; 0052f7aa
    MOV dword ptr [EBP + -0xc],EAX      ; 0052f7b0
    TEST ECX,ECX                        ; 0052f7b3
    JNZ 0x0052fa2c                      ; 0052f7b5
        ;   XREF to: 0052fa2c (CONDITIONAL_JUMP)  ; LAB_0052fa2c
    MOV EAX,dword ptr [EBP + -0x30]     ; 0052f7bb
        ;   Label: LAB_0052f7bb
    MOV EDX,dword ptr [EBP + -0x28]     ; 0052f7be
    MOV ECX,dword ptr [0x01fc9608]      ; 0052f7c1 | DAT_01fc9608
    ADD EAX,0x4                         ; 0052f7c7
    INC EDX                             ; 0052f7ca
    MOV dword ptr [EBP + -0x30],EAX     ; 0052f7cb
    MOV dword ptr [EBP + -0x28],EDX     ; 0052f7ce
    CMP EDX,ECX                         ; 0052f7d1
    JL 0x0052f7a1                       ; 0052f7d3
        ;   XREF to: 0052f7a1 (CONDITIONAL_JUMP)  ; LAB_0052f7a1
    MOV ESI,dword ptr [0x00616494]      ; 0052f7d5 | g_CGamePtr
        ;   Label: LAB_0052f7d5
    PUSH ESI                            ; 0052f7db | g_CGameInstance
    CALL core_game.cpp_FUN_004bb620     ; 0052f7dc
        ;   XREF to: 004bb620 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004bb620()
    MOV EAX,[0x01cedef4]                ; 0052f7e1 | DAT_01cedef4
    SHL EAX,0x2                         ; 0052f7e6
    MOV EDI,dword ptr [EAX + 0x1cedee4] ; 0052f7e9
    ADD ESP,0x4                         ; 0052f7ef
    TEST EDI,EDI                        ; 0052f7f2
    JZ 0x0052f809                       ; 0052f7f4
        ;   XREF to: 0052f809 (CONDITIONAL_JUMP)  ; LAB_0052f809
    MOV EDX,dword ptr [0x00618170]      ; 0052f7f6 | DAT_00618170
    CMP dword ptr [EDX + 0x1008],0x0    ; 0052f7fc | DAT_01d192f8
    JZ 0x0052faa1                       ; 0052f803
        ;   XREF to: 0052faa1 (CONDITIONAL_JUMP)  ; LAB_0052faa1
    PUSH 0x0                            ; 0052f809
        ;   Label: LAB_0052f809
    PUSH 0x1fc7838                      ; 0052f80b
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 ; 0052f810
        ;   XREF to: 0043bf50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    MOV EAX,[0x00616494]                ; 0052f815 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x228]     ; 0052f81a | g_CGameInstance.profile_mode
    ADD ESP,0x8                         ; 0052f820
    TEST ESI,ESI                        ; 0052f823
    JZ 0x0052f8c8                       ; 0052f825
        ;   XREF to: 0052f8c8 (CONDITIONAL_JUMP)  ; LAB_0052f8c8
    MOV EDI,dword ptr [EBP + -0x38]     ; 0052f82b
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0052f82e
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    SUB EAX,EDI                         ; 0052f833
    MOV dword ptr [EBP + -0x4],EAX      ; 0052f835
    FLD double ptr [0x005e58e2]         ; 0052f838 | DAT_005e58e2
    FILD dword ptr [EBP + -0x4]         ; 0052f83e
    FMUL ST1                            ; 0052f841
    MOV EAX,[0x00616494]                ; 0052f843 | g_CGamePtr
    MOV EDX,dword ptr [EBP + -0x8]      ; 0052f848
    FLD float ptr [EAX + 0x284]         ; 0052f84b | g_CGameInstance.delta_time_float
    MOV EAX,EDI                         ; 0052f851
    FXCH                                ; 0052f853
    FLD double ptr [0x005e58ea]         ; 0052f855 | DAT_005e58ea
    FXCH                                ; 0052f85b
    FMUL ST1                            ; 0052f85d
    SUB EAX,EDX                         ; 0052f85f
    MOV dword ptr [EBP + -0x4],EAX      ; 0052f861
    FLD double ptr [0x005e58f2]         ; 0052f864 | DAT_005e58f2
    FXCH                                ; 0052f86a
    FMUL ST1                            ; 0052f86c
    FILD dword ptr [EBP + -0x4]         ; 0052f86e
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0052f871
    FMUL ST5                            ; 0052f874
    SUB EAX,EDX                         ; 0052f876
    MOV dword ptr [EBP + -0x4],EAX      ; 0052f878
    FMUL ST3                            ; 0052f87b
    FILD dword ptr [EBP + -0x4]         ; 0052f87d
    FMULP ST6                           ; 0052f880
    FMUL ST2                            ; 0052f882
    FXCH ST5                            ; 0052f884
    FMULP ST3                           ; 0052f886
    FLD1                                ; 0052f888
    FXCH ST3                            ; 0052f88a
    FMULP ST2                           ; 0052f88c
    FXCH ST2                            ; 0052f88e
    FDIVRP ST3,ST0                      ; 0052f890
    FXCH                                ; 0052f892
    FMUL ST2                            ; 0052f894
    FXCH ST3                            ; 0052f896
    FMUL ST2                            ; 0052f898
    FXCH                                ; 0052f89a
    FMULP ST2                           ; 0052f89c
    SUB ESP,0x8                         ; 0052f89e
    FXCH ST2                            ; 0052f8a1
    FSTP double ptr [ESP]               ; 0052f8a3
    SUB ESP,0x8                         ; 0052f8a6
    FXCH                                ; 0052f8a9
    FSTP double ptr [ESP]               ; 0052f8ab
    SUB ESP,0x8                         ; 0052f8ae
    FSTP double ptr [ESP]               ; 0052f8b1
    PUSH 0x5e58ba                       ; 0052f8b4 | s_comp_3_2f_3_2f_actren_3_005e58b9+1
    MOV ESI,dword ptr [0x00609ed0]      ; 0052f8b9 | g_CConsolePtr
    PUSH ESI                            ; 0052f8bf | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0052f8c0
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x20                        ; 0052f8c5
    MOV EAX,[0x00616494]                ; 0052f8c8 | g_CGamePtr
        ;   Label: LAB_0052f8c8
    CMP dword ptr [EAX + 0x204],0x0     ; 0052f8cd | g_CGameInstance.field468_0x204
    JZ 0x0052f8df                       ; 0052f8d4
        ;   XREF to: 0052f8df (CONDITIONAL_JUMP)  ; LAB_0052f8df
    PUSH EBX                            ; 0052f8d6
    CALL core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60 ; 0052f8d7
        ;   XREF to: 00539d60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052f8dc
    MOV EAX,dword ptr [EBX + 0x14d164]  ; 0052f8df
        ;   Label: LAB_0052f8df
    XOR EDX,EDX                         ; 0052f8e5
    TEST EAX,EAX                        ; 0052f8e7
    JLE 0x0052f93b                      ; 0052f8e9
        ;   XREF to: 0052f93b (CONDITIONAL_JUMP)  ; LAB_0052f93b
    MOV ECX,EBX                         ; 0052f8eb
    MOV ESI,dword ptr [ECX + 0x14d168]  ; 0052f8ed
        ;   Label: LAB_0052f8ed
    LEA EAX,[ESI + 0x12c]               ; 0052f8f3
    LEA EDI,[ESI + 0x20]                ; 0052f8f9
    CMP EAX,EDI                         ; 0052f8fc
    JZ 0x0052f910                       ; 0052f8fe
        ;   XREF to: 0052f910 (CONDITIONAL_JUMP)  ; LAB_0052f910
    FLD float ptr [EDI]                 ; 0052f900
    FSTP float ptr [EAX]                ; 0052f902
    FLD float ptr [EDI + 0x4]           ; 0052f904
    FSTP float ptr [EAX + 0x4]          ; 0052f907
    FLD float ptr [EDI + 0x8]           ; 0052f90a
    FSTP float ptr [EAX + 0x8]          ; 0052f90d
    LEA EDI,[ESI + 0x138]               ; 0052f910
        ;   Label: LAB_0052f910
    ADD ESI,0x30                        ; 0052f916
    CMP EDI,ESI                         ; 0052f919
    JZ 0x0052f92d                       ; 0052f91b
        ;   XREF to: 0052f92d (CONDITIONAL_JUMP)  ; LAB_0052f92d
    MOV EAX,dword ptr [ESI]             ; 0052f91d
    MOV dword ptr [EDI],EAX             ; 0052f91f
    MOV EAX,dword ptr [ESI + 0x4]       ; 0052f921
    MOV dword ptr [EDI + 0x4],EAX       ; 0052f924
    MOV EAX,dword ptr [ESI + 0x8]       ; 0052f927
    MOV dword ptr [EDI + 0x8],EAX       ; 0052f92a
    INC EDX                             ; 0052f92d
        ;   Label: LAB_0052f92d
    MOV EAX,dword ptr [EBX + 0x14d164]  ; 0052f92e
    ADD ECX,0x4                         ; 0052f934
    CMP EDX,EAX                         ; 0052f937
    JL 0x0052f8ed                       ; 0052f939
        ;   XREF to: 0052f8ed (CONDITIONAL_JUMP)  ; LAB_0052f8ed
    CMP dword ptr [0x0200a394],0x0      ; 0052f93b | DAT_0200a394
        ;   Label: LAB_0052f93b
    JNZ 0x0052fab5                      ; 0052f942
        ;   XREF to: 0052fab5 (CONDITIONAL_JUMP)  ; LAB_0052fab5
    MOV ESP,EBP                         ; 0052f948
    POP EBP                             ; 0052f94a
    POP EDI                             ; 0052f94b
    POP ESI                             ; 0052f94c
    POP EBX                             ; 0052f94d
    RET                                 ; 0052f94e
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0052f94f
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_0052f94f
    MOV dword ptr [EBP + -0x8],EAX      ; 0052f954
    JMP 0x0052f2c1                      ; 0052f957
        ;   XREF to: 0052f2c1 (UNCONDITIONAL_JUMP)  ; LAB_0052f2c1
    PUSH EBX                            ; 0052f95c
        ;   Label: LAB_0052f95c
    CALL core_set.cpp_CDemonSet_isCameraPanning_FUN_00534b80 ; 0052f95d
        ;   XREF to: 00534b80 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_isCameraPanning_FUN_00534b80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052f962
    TEST EAX,EAX                        ; 0052f965
    JZ 0x0052f2c9                       ; 0052f967
        ;   XREF to: 0052f2c9 (CONDITIONAL_JUMP)  ; LAB_0052f2c9
    PUSH EBX                            ; 0052f96d
    ADD ESP,0x4                         ; 0052f96e
    MOV ESP,EBP                         ; 0052f971
    POP EBP                             ; 0052f973
    POP EDI                             ; 0052f974
    POP ESI                             ; 0052f975
    POP EBX                             ; 0052f976
    RET                                 ; 0052f977
    MOV EAX,[0x00616494]                ; 0052f978 | g_CGamePtr
        ;   Label: LAB_0052f978
    CMP dword ptr [EAX + 0x24],0x0      ; 0052f97d | g_CGameInstance.quimby_flag
    JNZ 0x0052f336                      ; 0052f981
        ;   XREF to: 0052f336 (CONDITIONAL_JUMP)  ; LAB_0052f336
    JMP 0x0052f538                      ; 0052f987
        ;   XREF to: 0052f538 (UNCONDITIONAL_JUMP)  ; LAB_0052f538
    PUSH 0x0                            ; 0052f98c
        ;   Label: LAB_0052f98c
    DEC EAX                             ; 0052f98e
    PUSH EAX                            ; 0052f98f
    PUSH EBX                            ; 0052f990
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052f991
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052f996
    PUSH 0x1                            ; 0052f999
    PUSH EDI                            ; 0052f99b
    PUSH 0x1fc7838                      ; 0052f99c
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90 ; 0052f9a1
        ;   XREF to: 00440e90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    ADD ESP,0xc                         ; 0052f9a6
    PUSH EBX                            ; 0052f9a9
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052f9aa
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052f9af
    JMP 0x0052f500                      ; 0052f9b2
        ;   XREF to: 0052f500 (UNCONDITIONAL_JUMP)  ; LAB_0052f500
    MOV ESI,EAX                         ; 0052f9b7
        ;   Label: LAB_0052f9b7
    LEA EDI,[EBP + -0x74]               ; 0052f9b9
    LEA ESI,[ESI + 0x4]                 ; 0052f9bc
    PUSH 0x0                            ; 0052f9bf
    LEA EAX,[EBP + -0x50]               ; 0052f9c1
    MOVSD ES:EDI,ESI                    ; 0052f9c4
    MOVSD ES:EDI,ESI                    ; 0052f9c5
    MOVSD ES:EDI,ESI                    ; 0052f9c6
    PUSH EAX                            ; 0052f9c7
    LEA EDI,[EBP + -0x50]               ; 0052f9c8
    LEA ESI,[EBP + -0x74]               ; 0052f9cb
    PUSH 0x1fc7838                      ; 0052f9ce
    MOVSD ES:EDI,ESI                    ; 0052f9d3
    MOVSD ES:EDI,ESI                    ; 0052f9d4
    MOVSD ES:EDI,ESI                    ; 0052f9d5
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80 ; 0052f9d6
        ;   XREF to: 00442d80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 0052f9db
    MOV ESI,dword ptr [EBP + -0x10]     ; 0052f9de
    PUSH ESI                            ; 0052f9e1
    CALL core_dlight.cpp_FUN_0044b020   ; 0052f9e2
        ;   XREF to: 0044b020 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_FUN_0044b020(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0052f9e7
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 0052f9ea
    XOR ESI,ESI                         ; 0052f9f0
    TEST EDI,EDI                        ; 0052f9f2
    JLE 0x0052f6da                      ; 0052f9f4
        ;   XREF to: 0052f6da (CONDITIONAL_JUMP)  ; LAB_0052f6da
    PUSH 0x0                            ; 0052f9fa
        ;   Label: LAB_0052f9fa
    PUSH ESI                            ; 0052f9fc
    PUSH EBX                            ; 0052f9fd
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052f9fe
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052fa03
    MOV ECX,dword ptr [EBP + -0x10]     ; 0052fa06
    PUSH ECX                            ; 0052fa09
    CALL core_dlight.cpp_FUN_0044b020   ; 0052fa0a
        ;   XREF to: 0044b020 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_FUN_0044b020(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0052fa0f
    PUSH EBX                            ; 0052fa12
    INC ESI                             ; 0052fa13
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052fa14
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 0052fa19
    ADD ESP,0x4                         ; 0052fa1f
    CMP ESI,EDI                         ; 0052fa22
    JGE 0x0052f6da                      ; 0052fa24
        ;   XREF to: 0052f6da (CONDITIONAL_JUMP)  ; LAB_0052f6da
    JMP 0x0052f9fa                      ; 0052fa2a
        ;   XREF to: 0052f9fa (UNCONDITIONAL_JUMP)  ; LAB_0052f9fa
    MOV ESI,EAX                         ; 0052fa2c
        ;   Label: LAB_0052fa2c
    LEA EDI,[EBP + -0x5c]               ; 0052fa2e
    LEA ESI,[ESI + 0x4]                 ; 0052fa31
    PUSH 0x0                            ; 0052fa34
    LEA EAX,[EBP + -0x68]               ; 0052fa36
    MOVSD ES:EDI,ESI                    ; 0052fa39
    MOVSD ES:EDI,ESI                    ; 0052fa3a
    MOVSD ES:EDI,ESI                    ; 0052fa3b
    PUSH EAX                            ; 0052fa3c
    LEA EDI,[EBP + -0x68]               ; 0052fa3d
    LEA ESI,[EBP + -0x5c]               ; 0052fa40
    PUSH 0x1fc7838                      ; 0052fa43
    MOVSD ES:EDI,ESI                    ; 0052fa48
    MOVSD ES:EDI,ESI                    ; 0052fa49
    MOVSD ES:EDI,ESI                    ; 0052fa4a
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80 ; 0052fa4b
        ;   XREF to: 00442d80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00442d80(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 0052fa50
    MOV ESI,dword ptr [EBP + -0xc]      ; 0052fa53
    PUSH ESI                            ; 0052fa56
    CALL core_dlight.cpp_FUN_0044b050   ; 0052fa57
        ;   XREF to: 0044b050 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_0044b050()
    ADD ESP,0x4                         ; 0052fa5c
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 0052fa5f
    XOR ESI,ESI                         ; 0052fa65
    TEST EDI,EDI                        ; 0052fa67
    JLE 0x0052f7bb                      ; 0052fa69
        ;   XREF to: 0052f7bb (CONDITIONAL_JUMP)  ; LAB_0052f7bb
    MOV EDI,dword ptr [EBP + -0xc]      ; 0052fa6f
    PUSH 0x0                            ; 0052fa72
        ;   Label: LAB_0052fa72
    PUSH ESI                            ; 0052fa74
    PUSH EBX                            ; 0052fa75
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052fa76
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052fa7b
    PUSH EDI                            ; 0052fa7e
    CALL core_dlight.cpp_FUN_0044b050   ; 0052fa7f
        ;   XREF to: 0044b050 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_0044b050()
    ADD ESP,0x4                         ; 0052fa84
    PUSH EBX                            ; 0052fa87
    INC ESI                             ; 0052fa88
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052fa89
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBX + 0x15acc8]  ; 0052fa8e
    ADD ESP,0x4                         ; 0052fa94
    CMP ESI,EAX                         ; 0052fa97
    JGE 0x0052f7bb                      ; 0052fa99
        ;   XREF to: 0052f7bb (CONDITIONAL_JUMP)  ; LAB_0052f7bb
    JMP 0x0052fa72                      ; 0052fa9f
        ;   XREF to: 0052fa72 (UNCONDITIONAL_JUMP)  ; LAB_0052fa72
    LEA EAX,[EDI + 0x2437c]             ; 0052faa1
        ;   Label: LAB_0052faa1
    PUSH EAX                            ; 0052faa7
    CALL core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd670 ; 0052faa8
        ;   XREF to: 004dd670 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd670(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0052faad
    JMP 0x0052f809                      ; 0052fab0
        ;   XREF to: 0052f809 (UNCONDITIONAL_JUMP)  ; LAB_0052f809
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 0052fab5
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
        ;   Label: LAB_0052fab5
    XOR ECX,ECX                         ; 0052faba
    MOV dword ptr [0x0200a394],ECX      ; 0052fabc | DAT_0200a394
    MOV ESP,EBP                         ; 0052fac2
    POP EBP                             ; 0052fac4
    POP EDI                             ; 0052fac5
    POP ESI                             ; 0052fac6
    POP EBX                             ; 0052fac7
    RET                                 ; 0052fac8

