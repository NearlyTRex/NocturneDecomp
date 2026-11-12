; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_00550580(CDemonSet *this_ptr,int skip_prerender)
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
;   core_game.cpp_FUN_004ce580 at 004cf080
;
; Referenced Globals:
;   undefined4 s_comp_3_2f_3_2f_actren_3_005f08dd+1
;   undefined4 DAT_005f0906
;   undefined4 DAT_005f090e
;   undefined4 DAT_005f0916
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061c010
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   undefined4 DAT_0061f650
;   undefined4 DAT_00625bc0
;   CWater* g_CWaterPtr = 02c8afb0
;   undefined4 DAT_0062604c
;   CConsole g_CConsoleInstance
;   undefined4 g_CGameInstance.shadow_flag
;   undefined4 g_CGameInstance.debug_toggle_flag
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00451a30
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451d90
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004516c0
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044d2f0
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430
;   core_dcamera.cpp_FUN_00451bc0
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20
;   core_dlight.cpp_FUN_00463820
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550580
        ;   Label: core_set.cpp_FUN_00550580
    PUSH ESI                            ; 00550581
    PUSH EDI                            ; 00550582
    PUSH EBP                            ; 00550583
    MOV EBP,ESP                         ; 00550584
    SUB ESP,0x74                        ; 00550586
    MOV EBX,dword ptr [EBP + 0x14]      ; 00550589
    MOV ESI,dword ptr [EBP + 0x18]      ; 0055058c
    MOV EAX,[0x0061d95c]                ; 0055058f | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x0     ; 00550594 | g_CGameInstance.profile_mode
    JNZ 0x00550c1f                      ; 0055059b
        ;   XREF to: 00550c1f (CONDITIONAL_JUMP)  ; LAB_00550c1f
    TEST ESI,ESI                        ; 005505a1
        ;   Label: LAB_005505a1
    JNZ 0x00550c2c                      ; 005505a3
        ;   XREF to: 00550c2c (CONDITIONAL_JUMP)  ; LAB_00550c2c
    TEST ESI,ESI                        ; 005505a9
        ;   Label: LAB_005505a9
    JNZ 0x005505d0                      ; 005505ab
        ;   XREF to: 005505d0 (CONDITIONAL_JUMP)  ; LAB_005505d0
    PUSH 0x1ccc3e4                      ; 005505ad
    PUSH EBX                            ; 005505b2
    MOV dword ptr [0x01fe55bc],ESI      ; 005505b3 | DAT_01fe55bc
    MOV dword ptr [0x01fe55d0],ESI      ; 005505b9 | DAT_01fe55d0
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0 ; 005505bf
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 005505c4
    PUSH EBX                            ; 005505c7
    CALL core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 ; 005505c8
        ;   XREF to: 00550260 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005505cd
    PUSH 0x1fe37ec                      ; 005505d0
        ;   Label: LAB_005505d0
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044d2f0 ; 005505d5
        ;   XREF to: 0044d2f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044d2f0(CDemonCamera * this_ptr)
    MOV EDI,dword ptr [EBX + 0x16166c]  ; 005505da
    ADD ESP,0x4                         ; 005505e0
    TEST EDI,EDI                        ; 005505e3
    JZ 0x005505fa                       ; 005505e5
        ;   XREF to: 005505fa (CONDITIONAL_JUMP)  ; LAB_005505fa
    PUSH EBX                            ; 005505e7
    CALL core_set.cpp_CDemonSet_restoreCameraView_FUN_00555740 ; 005505e8
        ;   XREF to: 00555740 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraView_FUN_00555740(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005505ed
    MOV dword ptr [EBX + 0x16166c],0x0  ; 005505f0
    PUSH 0x1                            ; 005505fa
        ;   Label: LAB_005505fa
    PUSH 0x1fe37ec                      ; 005505fc
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 ; 00550601
        ;   XREF to: 0044ceb0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,[0x0202636c]                ; 00550606 | DAT_0202636c
    ADD ESP,0x8                         ; 0055060b
    TEST EAX,EAX                        ; 0055060e
    JZ 0x00550c48                       ; 00550610
        ;   XREF to: 00550c48 (CONDITIONAL_JUMP)  ; LAB_00550c48
    PUSH 0x1fe37ec                      ; 00550616
        ;   Label: LAB_00550616
    XOR ECX,ECX                         ; 0055061b
    XOR ESI,ESI                         ; 0055061d
    MOV dword ptr [0x0202636c],ECX      ; 0055061f | DAT_0202636c
    CALL core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451d90 ; 00550625
        ;   XREF to: 00451d90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451d90(CDemonCamera * this_ptr)
    MOV EDI,dword ptr [0x01fe4e38]      ; 0055062a | DAT_01fe4e38
    ADD ESP,0x4                         ; 00550630
    TEST EDI,EDI                        ; 00550633
    JLE 0x00550663                      ; 00550635
        ;   XREF to: 00550663 (CONDITIONAL_JUMP)  ; LAB_00550663
    XOR EDI,EDI                         ; 00550637
    MOV EAX,dword ptr [EDI + 0x1fe4e3c] ; 00550639 | DAT_01fe4e3c
        ;   Label: LAB_00550639
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0055063f
    JZ 0x00550656                       ; 00550646
        ;   XREF to: 00550656 (CONDITIONAL_JUMP)  ; LAB_00550656
    PUSH EAX                            ; 00550648
    PUSH 0x1fe37ec                      ; 00550649
    CALL core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00451a30 ; 0055064e
        ;   XREF to: 00451a30 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00451a30(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 00550653
    MOV EAX,[0x01fe4e38]                ; 00550656 | DAT_01fe4e38
        ;   Label: LAB_00550656
    INC ESI                             ; 0055065b
    ADD EDI,0x4                         ; 0055065c
    CMP ESI,EAX                         ; 0055065f
    JL 0x00550639                       ; 00550661
        ;   XREF to: 00550639 (CONDITIONAL_JUMP)  ; LAB_00550639
    XOR EDX,EDX                         ; 00550663
        ;   Label: LAB_00550663
    MOV ECX,dword ptr [0x01fe55bc]      ; 00550665 | DAT_01fe55bc
    MOV dword ptr [EBP + -0x1c],EDX     ; 0055066b
    TEST ECX,ECX                        ; 0055066e
    JLE 0x00550703                      ; 00550670
        ;   XREF to: 00550703 (CONDITIONAL_JUMP)  ; LAB_00550703
    MOV dword ptr [EBP + -0x14],EDX     ; 00550676
    MOV EAX,dword ptr [EBP + -0x14]     ; 00550679
        ;   Label: LAB_00550679
    MOV EAX,dword ptr [EAX + 0x1fe55c0] ; 0055067c
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00550682
    JZ 0x005506e5                       ; 00550689
        ;   XREF to: 005506e5 (CONDITIONAL_JUMP)  ; LAB_005506e5
    CMP dword ptr [EAX + 0x1cd0],0x0    ; 0055068b
    JZ 0x005506e5                       ; 00550692
        ;   XREF to: 005506e5 (CONDITIONAL_JUMP)  ; LAB_005506e5
    PUSH EAX                            ; 00550694
    PUSH 0x1fe37ec                      ; 00550695
    XOR ESI,ESI                         ; 0055069a
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004516c0 ; 0055069c
        ;   XREF to: 004516c0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004516c0(CDemonCamera * this_ptr, CDemonLight * light_source)
    MOV EAX,dword ptr [EBX + 0x15acc8]  ; 005506a1
    ADD ESP,0x8                         ; 005506a7
    TEST EAX,EAX                        ; 005506aa
    JLE 0x005506e5                      ; 005506ac
        ;   XREF to: 005506e5 (CONDITIONAL_JUMP)  ; LAB_005506e5
    MOV EDI,dword ptr [EBP + -0x14]     ; 005506ae
    PUSH 0x0                            ; 005506b1
        ;   Label: LAB_005506b1
    PUSH ESI                            ; 005506b3
    PUSH EBX                            ; 005506b4
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 005506b5
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 005506ba
    MOV EDX,dword ptr [EDI + 0x1fe55c0] ; 005506bd
    PUSH EDX                            ; 005506c3
    PUSH 0x1fe37ec                      ; 005506c4
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004516c0 ; 005506c9
        ;   XREF to: 004516c0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004516c0(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 005506ce
    PUSH EBX                            ; 005506d1
    INC ESI                             ; 005506d2
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 005506d3
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 005506d8
    ADD ESP,0x4                         ; 005506de
    CMP ESI,ECX                         ; 005506e1
    JL 0x005506b1                       ; 005506e3
        ;   XREF to: 005506b1 (CONDITIONAL_JUMP)  ; LAB_005506b1
    MOV ECX,dword ptr [EBP + -0x14]     ; 005506e5
        ;   Label: LAB_005506e5
    MOV ESI,dword ptr [EBP + -0x1c]     ; 005506e8
    MOV EDI,dword ptr [0x01fe55bc]      ; 005506eb | DAT_01fe55bc
    ADD ECX,0x4                         ; 005506f1
    INC ESI                             ; 005506f4
    MOV dword ptr [EBP + -0x14],ECX     ; 005506f5
    MOV dword ptr [EBP + -0x1c],ESI     ; 005506f8
    CMP ESI,EDI                         ; 005506fb
    JL 0x00550679                       ; 005506fd
        ;   XREF to: 00550679 (CONDITIONAL_JUMP)  ; LAB_00550679
    XOR EAX,EAX                         ; 00550703
        ;   Label: LAB_00550703
    MOV EDX,dword ptr [0x01fe55d0]      ; 00550705 | DAT_01fe55d0
    MOV dword ptr [EBP + -0x2c],EAX     ; 0055070b
    TEST EDX,EDX                        ; 0055070e
    JLE 0x00550791                      ; 00550710
        ;   XREF to: 00550791 (CONDITIONAL_JUMP)  ; LAB_00550791
    MOV dword ptr [EBP + -0x18],EAX     ; 00550716
    MOV EAX,dword ptr [EBP + -0x18]     ; 00550719
        ;   Label: LAB_00550719
    PUSH 0x0                            ; 0055071c
    MOV EDX,dword ptr [EAX + 0x1fe55d4] ; 0055071e
    PUSH EDX                            ; 00550724
    PUSH 0x1fe37ec                      ; 00550725
    XOR ESI,ESI                         ; 0055072a
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550 ; 0055072c
        ;   XREF to: 00452550 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 00550731
    ADD ESP,0xc                         ; 00550737
    TEST ECX,ECX                        ; 0055073a
    JLE 0x00550777                      ; 0055073c
        ;   XREF to: 00550777 (CONDITIONAL_JUMP)  ; LAB_00550777
    MOV EDI,dword ptr [EBP + -0x18]     ; 0055073e
    PUSH 0x0                            ; 00550741
        ;   Label: LAB_00550741
    PUSH ESI                            ; 00550743
    PUSH EBX                            ; 00550744
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 00550745
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0055074a
    PUSH 0x1                            ; 0055074d
    MOV EAX,dword ptr [EDI + 0x1fe55d4] ; 0055074f
    PUSH EAX                            ; 00550755
    PUSH 0x1fe37ec                      ; 00550756
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550 ; 0055075b
        ;   XREF to: 00452550 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    ADD ESP,0xc                         ; 00550760
    PUSH EBX                            ; 00550763
    INC ESI                             ; 00550764
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 00550765
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 0055076a
    ADD ESP,0x4                         ; 00550770
    CMP ESI,EDX                         ; 00550773
    JL 0x00550741                       ; 00550775
        ;   XREF to: 00550741 (CONDITIONAL_JUMP)  ; LAB_00550741
    MOV ESI,dword ptr [EBP + -0x18]     ; 00550777
        ;   Label: LAB_00550777
    MOV EDI,dword ptr [EBP + -0x2c]     ; 0055077a
    MOV EDX,dword ptr [0x01fe55d0]      ; 0055077d | DAT_01fe55d0
    ADD ESI,0x4                         ; 00550783
    INC EDI                             ; 00550786
    MOV dword ptr [EBP + -0x18],ESI     ; 00550787
    MOV dword ptr [EBP + -0x2c],EDI     ; 0055078a
    CMP EDI,EDX                         ; 0055078d
    JL 0x00550719                       ; 0055078f
        ;   XREF to: 00550719 (CONDITIONAL_JUMP)  ; LAB_00550719
    XOR ECX,ECX                         ; 00550791
        ;   Label: LAB_00550791
    MOV EDI,dword ptr [0x01fe5764]      ; 00550793 | DAT_01fe5764
    MOV dword ptr [EBP + -0x20],ECX     ; 00550799
    MOV dword ptr [0x01fe5a88],ECX      ; 0055079c | DAT_01fe5a88
    TEST EDI,EDI                        ; 005507a2
    JLE 0x005507f4                      ; 005507a4
        ;   XREF to: 005507f4 (CONDITIONAL_JUMP)  ; LAB_005507f4
    XOR ESI,ESI                         ; 005507a6
    MOV EAX,dword ptr [ESI + 0x1fe58f8] ; 005507a8
        ;   Label: LAB_005507a8
    MOV EDI,dword ptr [ESI + 0x1fe5768] ; 005507ae
    TEST EAX,EAX                        ; 005507b4
    JNZ 0x00550c5c                      ; 005507b6
        ;   XREF to: 00550c5c (CONDITIONAL_JUMP)  ; LAB_00550c5c
    PUSH EAX                            ; 005507bc
    PUSH EDI                            ; 005507bd
    PUSH 0x1fe37ec                      ; 005507be
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550 ; 005507c3
        ;   XREF to: 00452550 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    MOV EAX,[0x01fe5a88]                ; 005507c8 | DAT_01fe5a88
    MOV dword ptr [EAX*0x4 + 0x1fe5a8c],EDI ; 005507cd | DAT_01fe5a8c
    LEA EDI,[EAX + 0x1]                 ; 005507d4
    ADD ESP,0xc                         ; 005507d7
    MOV dword ptr [0x01fe5a88],EDI      ; 005507da | DAT_01fe5a88
    MOV EDI,dword ptr [EBP + -0x20]     ; 005507e0
        ;   Label: LAB_005507e0
    MOV EDX,dword ptr [0x01fe5764]      ; 005507e3 | DAT_01fe5764
    INC EDI                             ; 005507e9
    ADD ESI,0x4                         ; 005507ea
    MOV dword ptr [EBP + -0x20],EDI     ; 005507ed
    CMP EDI,EDX                         ; 005507f0
    JL 0x005507a8                       ; 005507f2
        ;   XREF to: 005507a8 (CONDITIONAL_JUMP)  ; LAB_005507a8
    FLD float ptr [EBX + 0x14d160]      ; 005507f4
        ;   Label: LAB_005507f4
    XOR ECX,ECX                         ; 005507fa
    FLDZ                                ; 005507fc
    MOV dword ptr [0x01fe5764],ECX      ; 005507fe | DAT_01fe5764
    FCOMPP                              ; 00550804
    FNSTSW AX                           ; 00550806
    SAHF                                ; 00550808
    JNC 0x00550818                      ; 00550809
        ;   XREF to: 00550818 (CONDITIONAL_JUMP)  ; LAB_00550818
    PUSH 0x1fe37ec                      ; 0055080b
    CALL core_dcamera.cpp_FUN_00451bc0  ; 00550810
        ;   XREF to: 00451bc0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00451bc0()
    ADD ESP,0x4                         ; 00550815
    MOV EAX,[0x0061d95c]                ; 00550818 | g_CGamePtr
        ;   Label: LAB_00550818
    CMP dword ptr [EAX + 0x228],0x0     ; 0055081d | g_CGameInstance.profile_mode
    JZ 0x0055082e                       ; 00550824
        ;   XREF to: 0055082e (CONDITIONAL_JUMP)  ; LAB_0055082e
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 00550826
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV dword ptr [EBP + -0x3c],EAX     ; 0055082b
    PUSH 0x1fe37ec                      ; 0055082e
        ;   Label: LAB_0055082e
    CALL core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20 ; 00550833
        ;   XREF to: 00451e20 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20(CDemonCamera * this_ptr)
    MOV EAX,[0x0061d95c]                ; 00550838 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x228]     ; 0055083d | g_CGameInstance.profile_mode
    ADD ESP,0x4                         ; 00550843
    TEST ESI,ESI                        ; 00550846
    JZ 0x00550852                       ; 00550848
        ;   XREF to: 00550852 (CONDITIONAL_JUMP)  ; LAB_00550852
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0055084a
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV dword ptr [EBP + -0x38],EAX     ; 0055084f
    MOV EAX,[0x01fe4e38]                ; 00550852 | DAT_01fe4e38
        ;   Label: LAB_00550852
    XOR EDI,EDI                         ; 00550857
    TEST EAX,EAX                        ; 00550859
    JLE 0x00550880                      ; 0055085b
        ;   XREF to: 00550880 (CONDITIONAL_JUMP)  ; LAB_00550880
    XOR ESI,ESI                         ; 0055085d
    MOV EDX,dword ptr [ESI + 0x1fe4e3c] ; 0055085f | DAT_01fe4e3c
        ;   Label: LAB_0055085f
    PUSH EDX                            ; 00550865
    ADD ESI,0x4                         ; 00550866
    INC EDI                             ; 00550869
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20 ; 0055086a
        ;   XREF to: 00462d20 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20(CDemonLight * this_ptr)
    MOV ECX,dword ptr [0x01fe4e38]      ; 0055086f | DAT_01fe4e38
    ADD ESP,0x4                         ; 00550875
    CMP EDI,ECX                         ; 00550878
    JL 0x0055085f                       ; 0055087a
        ;   XREF to: 0055085f (CONDITIONAL_JUMP)  ; LAB_0055085f
    LEA EAX,[EAX]                       ; 0055087c
    PUSH 0xc                            ; 00550880
        ;   Label: LAB_00550880
    PUSH EBX                            ; 00550882
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0 ; 00550883
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 00550888
    PUSH EBX                            ; 0055088b
    CALL core_set.cpp_FUN_00551480      ; 0055088c
        ;   XREF to: 00551480 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00551480()
    ADD ESP,0x4                         ; 00550891
    PUSH 0x0                            ; 00550894
    PUSH 0x0                            ; 00550896
    PUSH 0x1fe37ec                      ; 00550898
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430 ; 0055089d
        ;   XREF to: 00454430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 005508a2
    MOV ESI,dword ptr [0x0061dca4]      ; 005508a5 | g_CGorePtr
    PUSH ESI                            ; 005508ab
    CALL core_gore.cpp_CGore_renderParticles_FUN_004e5c50 ; 005508ac
        ;   XREF to: 004e5c50 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004e5c50(CGore * this_ptr)
    ADD ESP,0x4                         ; 005508b1
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 005508b4
    XOR ESI,ESI                         ; 005508ba
    TEST EDI,EDI                        ; 005508bc
    JLE 0x005508f0                      ; 005508be
        ;   XREF to: 005508f0 (CONDITIONAL_JUMP)  ; LAB_005508f0
    PUSH 0x0                            ; 005508c0
        ;   Label: LAB_005508c0
    PUSH ESI                            ; 005508c2
    PUSH EBX                            ; 005508c3
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 005508c4
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 005508c9
    MOV EAX,[0x0061dca4]                ; 005508cc | g_CGorePtr
    PUSH EAX                            ; 005508d1
    CALL core_gore.cpp_CGore_renderParticles_FUN_004e5c50 ; 005508d2
        ;   XREF to: 004e5c50 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004e5c50(CGore * this_ptr)
    ADD ESP,0x4                         ; 005508d7
    PUSH EBX                            ; 005508da
    INC ESI                             ; 005508db
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 005508dc
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 005508e1
    ADD ESP,0x4                         ; 005508e7
    CMP ESI,EDX                         ; 005508ea
    JL 0x005508c0                       ; 005508ec
        ;   XREF to: 005508c0 (CONDITIONAL_JUMP)  ; LAB_005508c0
    MOV EAX,EAX                         ; 005508ee
    MOV EAX,[0x00625c90]                ; 005508f0 | g_CWaterPtr
        ;   Label: LAB_005508f0
    CMP dword ptr [EAX],0x0             ; 005508f5 | g_CWaterInstance
    JZ 0x00550905                       ; 005508f8
        ;   XREF to: 00550905 (CONDITIONAL_JUMP)  ; LAB_00550905
    PUSH 0x0                            ; 005508fa
    PUSH EAX                            ; 005508fc | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005a9f10 ; 005508fd
        ;   XREF to: 005a9f10 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005a9f10(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 00550902
    PUSH EBX                            ; 00550905
        ;   Label: LAB_00550905
    CALL core_set.cpp_FUN_005516c0      ; 00550906
        ;   XREF to: 005516c0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005516c0()
    MOV ESI,dword ptr [EBX + 0x15acb8]  ; 0055090b
    ADD ESP,0x4                         ; 00550911
    TEST ESI,ESI                        ; 00550914
    JZ 0x00550929                       ; 00550916
        ;   XREF to: 00550929 (CONDITIONAL_JUMP)  ; LAB_00550929
    PUSH 0x0                            ; 00550918
    MOV EDI,dword ptr [0x00625bc0]      ; 0055091a | DAT_00625bc0
    PUSH EDI                            ; 00550920
    CALL core_terrain.cpp_CTerrain_render_FUN_0059f3e0 ; 00550921
        ;   XREF to: 0059f3e0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_render_FUN_0059f3e0(CTerrain * this_ptr, int render_pass)
    ADD ESP,0x8                         ; 00550926
    MOV EAX,[0x0061c010]                ; 00550929 | DAT_0061c010
        ;   Label: LAB_00550929
    PUSH EAX                            ; 0055092e
    XOR ESI,ESI                         ; 0055092f
    CALL core_fire.cpp_CFireEffect_render_FUN_004b5100 ; 00550931
        ;   XREF to: 004b5100 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004b5100(CFireEffect * this_ptr)
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 00550936
    ADD ESP,0x4                         ; 0055093c
    TEST EDX,EDX                        ; 0055093f
    JLE 0x00550980                      ; 00550941
        ;   XREF to: 00550980 (CONDITIONAL_JUMP)  ; LAB_00550980
    PUSH 0x0                            ; 00550943
        ;   Label: LAB_00550943
    PUSH ESI                            ; 00550945
    PUSH EBX                            ; 00550946
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 00550947
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0055094c
    MOV ECX,dword ptr [0x0061c010]      ; 0055094f | DAT_0061c010
    PUSH ECX                            ; 00550955
    CALL core_fire.cpp_CFireEffect_render_FUN_004b5100 ; 00550956
        ;   XREF to: 004b5100 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004b5100(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0055095b
    PUSH EBX                            ; 0055095e
    INC ESI                             ; 0055095f
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 00550960
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 00550965
    ADD ESP,0x4                         ; 0055096b
    CMP ESI,EDI                         ; 0055096e
    JL 0x00550943                       ; 00550970
        ;   XREF to: 00550943 (CONDITIONAL_JUMP)  ; LAB_00550943
    LEA EAX,[EAX]                       ; 00550972
    LEA EDX,[EDX]                       ; 00550978
    MOV EAX,EAX                         ; 0055097e
    MOV EAX,[0x0062604c]                ; 00550980 | DAT_0062604c
        ;   Label: LAB_00550980
    PUSH EAX                            ; 00550985
    CALL core_weather.cpp_CWeather_renderParticles_FUN_005ae890 ; 00550986
        ;   XREF to: 005ae890 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_renderParticles_FUN_005ae890(CWeather * this_ptr)
    MOV ECX,dword ptr [0x01fe55bc]      ; 0055098b | DAT_01fe55bc
    XOR EDX,EDX                         ; 00550991
    ADD ESP,0x4                         ; 00550993
    MOV dword ptr [EBP + -0x24],EDX     ; 00550996
    TEST ECX,ECX                        ; 00550999
    JLE 0x005509d4                      ; 0055099b
        ;   XREF to: 005509d4 (CONDITIONAL_JUMP)  ; LAB_005509d4
    MOV dword ptr [EBP + -0x34],EDX     ; 0055099d
    MOV EAX,dword ptr [EBP + -0x34]     ; 005509a0
        ;   Label: LAB_005509a0
    MOV EAX,dword ptr [EAX + 0x1fe55c0] ; 005509a3
    MOV ECX,dword ptr [EAX + 0x1cb4]    ; 005509a9
    MOV dword ptr [EBP + -0x10],EAX     ; 005509af
    TEST ECX,ECX                        ; 005509b2
    JNZ 0x00550c87                      ; 005509b4
        ;   XREF to: 00550c87 (CONDITIONAL_JUMP)  ; LAB_00550c87
    MOV ESI,dword ptr [EBP + -0x34]     ; 005509ba
        ;   Label: LAB_005509ba
    MOV EDI,dword ptr [EBP + -0x24]     ; 005509bd
    MOV EDX,dword ptr [0x01fe55bc]      ; 005509c0 | DAT_01fe55bc
    ADD ESI,0x4                         ; 005509c6
    INC EDI                             ; 005509c9
    MOV dword ptr [EBP + -0x34],ESI     ; 005509ca
    MOV dword ptr [EBP + -0x24],EDI     ; 005509cd
    CMP EDI,EDX                         ; 005509d0
    JL 0x005509a0                       ; 005509d2
        ;   XREF to: 005509a0 (CONDITIONAL_JUMP)  ; LAB_005509a0
    PUSH 0x1fe37ec                      ; 005509d4
        ;   Label: LAB_005509d4
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700 ; 005509d9
        ;   XREF to: 0044d700 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 005509de
    PUSH 0x1                            ; 005509e1
    PUSH 0x0                            ; 005509e3
    MOV ECX,dword ptr [0x0061dca4]      ; 005509e5 | g_CGorePtr
    PUSH ECX                            ; 005509eb
    CALL core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 ; 005509ec
        ;   XREF to: 004e5cd0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004e5cd0(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 005509f1
    PUSH 0x1                            ; 005509f4
    PUSH 0x0                            ; 005509f6
    MOV ESI,dword ptr [0x0061c010]      ; 005509f8 | DAT_0061c010
    PUSH ESI                            ; 005509fe
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0 ; 005509ff
        ;   XREF to: 004b54a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
    MOV EAX,[0x00625c90]                ; 00550a04 | g_CWaterPtr
    MOV EDI,dword ptr [EAX]             ; 00550a09 | g_CWaterInstance
    ADD ESP,0xc                         ; 00550a0b
    TEST EDI,EDI                        ; 00550a0e
    JNZ 0x00550a1c                      ; 00550a10
        ;   XREF to: 00550a1c (CONDITIONAL_JUMP)  ; LAB_00550a1c
    PUSH EDI                            ; 00550a12
    PUSH EAX                            ; 00550a13 | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005a9f10 ; 00550a14
        ;   XREF to: 005a9f10 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005a9f10(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 00550a19
    MOV EAX,dword ptr [EBX + 0x14d164]  ; 00550a1c
        ;   Label: LAB_00550a1c
    XOR ESI,ESI                         ; 00550a22
    TEST EAX,EAX                        ; 00550a24
    JLE 0x00550a60                      ; 00550a26
        ;   XREF to: 00550a60 (CONDITIONAL_JUMP)  ; LAB_00550a60
    MOV EDI,EBX                         ; 00550a28
    MOV EAX,[0x01cd0dfc]                ; 00550a2a | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00550a2a
    PUSH EAX                            ; 00550a2f
    MOV EDX,dword ptr [EDI + 0x14d168]  ; 00550a30
    PUSH EDX                            ; 00550a36
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00550a37
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00550a3c
    TEST EAX,EAX                        ; 00550a3f
    JZ 0x00550a52                       ; 00550a41
        ;   XREF to: 00550a52 (CONDITIONAL_JUMP)  ; LAB_00550a52
    PUSH 0x0                            ; 00550a43
    MOV EDX,dword ptr [EAX + 0x154]     ; 00550a45
    PUSH EAX                            ; 00550a4b
    CALL dword ptr [EDX + 0x18]         ; 00550a4c
    ADD ESP,0x8                         ; 00550a4f
    INC ESI                             ; 00550a52
        ;   Label: LAB_00550a52
    MOV EAX,dword ptr [EBX + 0x14d164]  ; 00550a53
    ADD EDI,0x4                         ; 00550a59
    CMP ESI,EAX                         ; 00550a5c
    JL 0x00550a2a                       ; 00550a5e
        ;   XREF to: 00550a2a (CONDITIONAL_JUMP)  ; LAB_00550a2a
    PUSH 0x0                            ; 00550a60
        ;   Label: LAB_00550a60
    PUSH 0x1fe37ec                      ; 00550a62
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0 ; 00550a67
        ;   XREF to: 0044d8c0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(CDemonCamera * this_ptr, int restore_zbuffer)
    MOV ECX,dword ptr [0x01fe55bc]      ; 00550a6c | DAT_01fe55bc
    XOR EDX,EDX                         ; 00550a72
    ADD ESP,0x8                         ; 00550a74
    MOV dword ptr [EBP + -0x28],EDX     ; 00550a77
    TEST ECX,ECX                        ; 00550a7a
    JLE 0x00550ab5                      ; 00550a7c
        ;   XREF to: 00550ab5 (CONDITIONAL_JUMP)  ; LAB_00550ab5
    MOV dword ptr [EBP + -0x30],EDX     ; 00550a7e
    MOV EAX,dword ptr [EBP + -0x30]     ; 00550a81
        ;   Label: LAB_00550a81
    MOV EAX,dword ptr [EAX + 0x1fe55c0] ; 00550a84
    MOV EDI,dword ptr [EAX + 0x1cb4]    ; 00550a8a
    MOV dword ptr [EBP + -0xc],EAX      ; 00550a90
    TEST EDI,EDI                        ; 00550a93
    JNZ 0x00550cfc                      ; 00550a95
        ;   XREF to: 00550cfc (CONDITIONAL_JUMP)  ; LAB_00550cfc
    MOV EAX,dword ptr [EBP + -0x30]     ; 00550a9b
        ;   Label: LAB_00550a9b
    MOV EDX,dword ptr [EBP + -0x28]     ; 00550a9e
    MOV ECX,dword ptr [0x01fe55bc]      ; 00550aa1 | DAT_01fe55bc
    ADD EAX,0x4                         ; 00550aa7
    INC EDX                             ; 00550aaa
    MOV dword ptr [EBP + -0x30],EAX     ; 00550aab
    MOV dword ptr [EBP + -0x28],EDX     ; 00550aae
    CMP EDX,ECX                         ; 00550ab1
    JL 0x00550a81                       ; 00550ab3
        ;   XREF to: 00550a81 (CONDITIONAL_JUMP)  ; LAB_00550a81
    MOV EAX,[0x01d06ab4]                ; 00550ab5 | DAT_01d06ab4
        ;   Label: LAB_00550ab5
    SHL EAX,0x2                         ; 00550aba
    MOV ESI,dword ptr [EAX + 0x1d06aa4] ; 00550abd
    TEST ESI,ESI                        ; 00550ac3
    JZ 0x00550ada                       ; 00550ac5
        ;   XREF to: 00550ada (CONDITIONAL_JUMP)  ; LAB_00550ada
    MOV EDX,dword ptr [0x0061f650]      ; 00550ac7 | DAT_0061f650
    CMP dword ptr [EDX + 0x1008],0x0    ; 00550acd | DAT_01d2d908
    JZ 0x00550d71                       ; 00550ad4
        ;   XREF to: 00550d71 (CONDITIONAL_JUMP)  ; LAB_00550d71
    PUSH 0x0                            ; 00550ada
        ;   Label: LAB_00550ada
    PUSH 0x1fe37ec                      ; 00550adc
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 ; 00550ae1
        ;   XREF to: 0044d610 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    MOV EAX,[0x0061d95c]                ; 00550ae6 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 00550aeb | g_CGameInstance.profile_mode
    ADD ESP,0x8                         ; 00550af1
    TEST EDX,EDX                        ; 00550af4
    JZ 0x00550b98                       ; 00550af6
        ;   XREF to: 00550b98 (CONDITIONAL_JUMP)  ; LAB_00550b98
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 00550afc
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV ECX,dword ptr [EBP + -0x38]     ; 00550b01
    SUB EAX,ECX                         ; 00550b04
    MOV dword ptr [EBP + -0x4],EAX      ; 00550b06
    FLD double ptr [0x005f0906]         ; 00550b09 | DAT_005f0906
    FILD dword ptr [EBP + -0x4]         ; 00550b0f
    FMUL ST1                            ; 00550b12
    MOV EAX,[0x0061d95c]                ; 00550b14 | g_CGamePtr
    MOV ESI,dword ptr [EBP + -0x8]      ; 00550b19
    FLD float ptr [EAX + 0x294]         ; 00550b1c | g_CGameInstance.delta_time_float
    MOV EAX,ECX                         ; 00550b22
    FXCH                                ; 00550b24
    FLD double ptr [0x005f090e]         ; 00550b26 | DAT_005f090e
    FXCH                                ; 00550b2c
    FMUL ST1                            ; 00550b2e
    SUB EAX,ESI                         ; 00550b30
    MOV dword ptr [EBP + -0x4],EAX      ; 00550b32
    FLD double ptr [0x005f0916]         ; 00550b35 | DAT_005f0916
    FXCH                                ; 00550b3b
    FMUL ST1                            ; 00550b3d
    FILD dword ptr [EBP + -0x4]         ; 00550b3f
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00550b42
    FMUL ST5                            ; 00550b45
    SUB EAX,ESI                         ; 00550b47
    MOV dword ptr [EBP + -0x4],EAX      ; 00550b49
    FMUL ST3                            ; 00550b4c
    FILD dword ptr [EBP + -0x4]         ; 00550b4e
    FMULP ST6                           ; 00550b51
    FMUL ST2                            ; 00550b53
    FXCH ST5                            ; 00550b55
    FMULP ST3                           ; 00550b57
    FLD1                                ; 00550b59
    FXCH ST3                            ; 00550b5b
    FMULP ST2                           ; 00550b5d
    FXCH ST2                            ; 00550b5f
    FDIVRP ST3,ST0                      ; 00550b61
    FXCH                                ; 00550b63
    FMUL ST2                            ; 00550b65
    FXCH ST3                            ; 00550b67
    FMUL ST2                            ; 00550b69
    FXCH                                ; 00550b6b
    FMULP ST2                           ; 00550b6d
    SUB ESP,0x8                         ; 00550b6f
    FXCH ST2                            ; 00550b72
    FSTP double ptr [ESP]               ; 00550b74
    SUB ESP,0x8                         ; 00550b77
    FXCH                                ; 00550b7a
    FSTP double ptr [ESP]               ; 00550b7c
    SUB ESP,0x8                         ; 00550b7f
    FSTP double ptr [ESP]               ; 00550b82
    PUSH 0x5f08de                       ; 00550b85 | s_comp_3_2f_3_2f_actren_3_005f08dd+1
    MOV EAX,[0x00611100]                ; 00550b8a | g_CConsolePtr
    PUSH EAX                            ; 00550b8f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00550b90
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x20                        ; 00550b95
    MOV EAX,[0x0061d95c]                ; 00550b98 | g_CGamePtr
        ;   Label: LAB_00550b98
    CMP dword ptr [EAX + 0x204],0x0     ; 00550b9d | g_CGameInstance.debug_toggle_flag
    JZ 0x00550baf                       ; 00550ba4
        ;   XREF to: 00550baf (CONDITIONAL_JUMP)  ; LAB_00550baf
    PUSH EBX                            ; 00550ba6
    CALL core_setdir.cpp_FUN_0055b4f0   ; 00550ba7
        ;   XREF to: 0055b4f0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_0055b4f0()
    ADD ESP,0x4                         ; 00550bac
    MOV ECX,dword ptr [EBX + 0x14d164]  ; 00550baf
        ;   Label: LAB_00550baf
    XOR EDX,EDX                         ; 00550bb5
    TEST ECX,ECX                        ; 00550bb7
    JLE 0x00550c0b                      ; 00550bb9
        ;   XREF to: 00550c0b (CONDITIONAL_JUMP)  ; LAB_00550c0b
    MOV ECX,EBX                         ; 00550bbb
    MOV ESI,dword ptr [ECX + 0x14d168]  ; 00550bbd
        ;   Label: LAB_00550bbd
    LEA EAX,[ESI + 0x12c]               ; 00550bc3
    LEA EDI,[ESI + 0x20]                ; 00550bc9
    CMP EAX,EDI                         ; 00550bcc
    JZ 0x00550be0                       ; 00550bce
        ;   XREF to: 00550be0 (CONDITIONAL_JUMP)  ; LAB_00550be0
    FLD float ptr [EDI]                 ; 00550bd0
    FSTP float ptr [EAX]                ; 00550bd2
    FLD float ptr [EDI + 0x4]           ; 00550bd4
    FSTP float ptr [EAX + 0x4]          ; 00550bd7
    FLD float ptr [EDI + 0x8]           ; 00550bda
    FSTP float ptr [EAX + 0x8]          ; 00550bdd
    LEA EDI,[ESI + 0x138]               ; 00550be0
        ;   Label: LAB_00550be0
    ADD ESI,0x30                        ; 00550be6
    CMP EDI,ESI                         ; 00550be9
    JZ 0x00550bfd                       ; 00550beb
        ;   XREF to: 00550bfd (CONDITIONAL_JUMP)  ; LAB_00550bfd
    MOV EAX,dword ptr [ESI]             ; 00550bed
    MOV dword ptr [EDI],EAX             ; 00550bef
    MOV EAX,dword ptr [ESI + 0x4]       ; 00550bf1
    MOV dword ptr [EDI + 0x4],EAX       ; 00550bf4
    MOV EAX,dword ptr [ESI + 0x8]       ; 00550bf7
    MOV dword ptr [EDI + 0x8],EAX       ; 00550bfa
    INC EDX                             ; 00550bfd
        ;   Label: LAB_00550bfd
    MOV ESI,dword ptr [EBX + 0x14d164]  ; 00550bfe
    ADD ECX,0x4                         ; 00550c04
    CMP EDX,ESI                         ; 00550c07
    JL 0x00550bbd                       ; 00550c09
        ;   XREF to: 00550bbd (CONDITIONAL_JUMP)  ; LAB_00550bbd
    CMP dword ptr [0x02026348],0x0      ; 00550c0b | DAT_02026348
        ;   Label: LAB_00550c0b
    JNZ 0x00550d85                      ; 00550c12
        ;   XREF to: 00550d85 (CONDITIONAL_JUMP)  ; LAB_00550d85
    MOV ESP,EBP                         ; 00550c18
    POP EBP                             ; 00550c1a
    POP EDI                             ; 00550c1b
    POP ESI                             ; 00550c1c
    POP EBX                             ; 00550c1d
    RET                                 ; 00550c1e
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 00550c1f
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_00550c1f
    MOV dword ptr [EBP + -0x8],EAX      ; 00550c24
    JMP 0x005505a1                      ; 00550c27
        ;   XREF to: 005505a1 (UNCONDITIONAL_JUMP)  ; LAB_005505a1
    PUSH EBX                            ; 00550c2c
        ;   Label: LAB_00550c2c
    CALL core_set.cpp_CDemonSet_isCameraPanning_FUN_00555fe0 ; 00550c2d
        ;   XREF to: 00555fe0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_isCameraPanning_FUN_00555fe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00550c32
    TEST EAX,EAX                        ; 00550c35
    JZ 0x005505a9                       ; 00550c37
        ;   XREF to: 005505a9 (CONDITIONAL_JUMP)  ; LAB_005505a9
    PUSH EBX                            ; 00550c3d
    ADD ESP,0x4                         ; 00550c3e
    MOV ESP,EBP                         ; 00550c41
    POP EBP                             ; 00550c43
    POP EDI                             ; 00550c44
    POP ESI                             ; 00550c45
    POP EBX                             ; 00550c46
    RET                                 ; 00550c47
    MOV EAX,[0x0061d95c]                ; 00550c48 | g_CGamePtr
        ;   Label: LAB_00550c48
    CMP dword ptr [EAX + 0x24],0x0      ; 00550c4d | g_CGameInstance.shadow_flag
    JNZ 0x00550616                      ; 00550c51
        ;   XREF to: 00550616 (CONDITIONAL_JUMP)  ; LAB_00550616
    JMP 0x00550818                      ; 00550c57
        ;   XREF to: 00550818 (UNCONDITIONAL_JUMP)  ; LAB_00550818
    PUSH 0x0                            ; 00550c5c
        ;   Label: LAB_00550c5c
    DEC EAX                             ; 00550c5e
    PUSH EAX                            ; 00550c5f
    PUSH EBX                            ; 00550c60
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 00550c61
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00550c66
    PUSH 0x1                            ; 00550c69
    PUSH EDI                            ; 00550c6b
    PUSH 0x1fe37ec                      ; 00550c6c
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550 ; 00550c71
        ;   XREF to: 00452550 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    ADD ESP,0xc                         ; 00550c76
    PUSH EBX                            ; 00550c79
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 00550c7a
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00550c7f
    JMP 0x005507e0                      ; 00550c82
        ;   XREF to: 005507e0 (UNCONDITIONAL_JUMP)  ; LAB_005507e0
    MOV ESI,EAX                         ; 00550c87
        ;   Label: LAB_00550c87
    LEA EDI,[EBP + -0x74]               ; 00550c89
    LEA ESI,[ESI + 0x4]                 ; 00550c8c
    PUSH 0x0                            ; 00550c8f
    LEA EAX,[EBP + -0x50]               ; 00550c91
    MOVSD ES:EDI,ESI                    ; 00550c94
    MOVSD ES:EDI,ESI                    ; 00550c95
    MOVSD ES:EDI,ESI                    ; 00550c96
    PUSH EAX                            ; 00550c97
    LEA EDI,[EBP + -0x50]               ; 00550c98
    LEA ESI,[EBP + -0x74]               ; 00550c9b
    PUSH 0x1fe37ec                      ; 00550c9e
    MOVSD ES:EDI,ESI                    ; 00550ca3
    MOVSD ES:EDI,ESI                    ; 00550ca4
    MOVSD ES:EDI,ESI                    ; 00550ca5
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430 ; 00550ca6
        ;   XREF to: 00454430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 00550cab
    MOV ESI,dword ptr [EBP + -0x10]     ; 00550cae
    PUSH ESI                            ; 00550cb1
    CALL core_dlight.cpp_FUN_00463820   ; 00550cb2
        ;   XREF to: 00463820 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_FUN_00463820(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00550cb7
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 00550cba
    XOR ESI,ESI                         ; 00550cc0
    TEST EDI,EDI                        ; 00550cc2
    JLE 0x005509ba                      ; 00550cc4
        ;   XREF to: 005509ba (CONDITIONAL_JUMP)  ; LAB_005509ba
    PUSH 0x0                            ; 00550cca
        ;   Label: LAB_00550cca
    PUSH ESI                            ; 00550ccc
    PUSH EBX                            ; 00550ccd
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 00550cce
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00550cd3
    MOV ECX,dword ptr [EBP + -0x10]     ; 00550cd6
    PUSH ECX                            ; 00550cd9
    CALL core_dlight.cpp_FUN_00463820   ; 00550cda
        ;   XREF to: 00463820 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_FUN_00463820(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00550cdf
    PUSH EBX                            ; 00550ce2
    INC ESI                             ; 00550ce3
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 00550ce4
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 00550ce9
    ADD ESP,0x4                         ; 00550cef
    CMP ESI,EDI                         ; 00550cf2
    JGE 0x005509ba                      ; 00550cf4
        ;   XREF to: 005509ba (CONDITIONAL_JUMP)  ; LAB_005509ba
    JMP 0x00550cca                      ; 00550cfa
        ;   XREF to: 00550cca (UNCONDITIONAL_JUMP)  ; LAB_00550cca
    MOV ESI,EAX                         ; 00550cfc
        ;   Label: LAB_00550cfc
    LEA EDI,[EBP + -0x5c]               ; 00550cfe
    LEA ESI,[ESI + 0x4]                 ; 00550d01
    PUSH 0x0                            ; 00550d04
    LEA EAX,[EBP + -0x68]               ; 00550d06
    MOVSD ES:EDI,ESI                    ; 00550d09
    MOVSD ES:EDI,ESI                    ; 00550d0a
    MOVSD ES:EDI,ESI                    ; 00550d0b
    PUSH EAX                            ; 00550d0c
    LEA EDI,[EBP + -0x68]               ; 00550d0d
    LEA ESI,[EBP + -0x5c]               ; 00550d10
    PUSH 0x1fe37ec                      ; 00550d13
    MOVSD ES:EDI,ESI                    ; 00550d18
    MOVSD ES:EDI,ESI                    ; 00550d19
    MOVSD ES:EDI,ESI                    ; 00550d1a
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430 ; 00550d1b
        ;   XREF to: 00454430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 00550d20
    MOV EAX,dword ptr [EBP + -0xc]      ; 00550d23
    PUSH EAX                            ; 00550d26
    XOR ESI,ESI                         ; 00550d27
    CALL core_dlight.cpp_FUN_00463850   ; 00550d29
        ;   XREF to: 00463850 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_00463850()
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 00550d2e
    ADD ESP,0x4                         ; 00550d34
    TEST EDX,EDX                        ; 00550d37
    JLE 0x00550a9b                      ; 00550d39
        ;   XREF to: 00550a9b (CONDITIONAL_JUMP)  ; LAB_00550a9b
    PUSH 0x0                            ; 00550d3f
        ;   Label: LAB_00550d3f
    PUSH ESI                            ; 00550d41
    PUSH EBX                            ; 00550d42
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 00550d43
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00550d48
    MOV EDX,dword ptr [EBP + -0xc]      ; 00550d4b
    PUSH EDX                            ; 00550d4e
    CALL core_dlight.cpp_FUN_00463850   ; 00550d4f
        ;   XREF to: 00463850 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_00463850()
    ADD ESP,0x4                         ; 00550d54
    PUSH EBX                            ; 00550d57
    INC ESI                             ; 00550d58
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 00550d59
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 00550d5e
    ADD ESP,0x4                         ; 00550d64
    CMP ESI,ECX                         ; 00550d67
    JGE 0x00550a9b                      ; 00550d69
        ;   XREF to: 00550a9b (CONDITIONAL_JUMP)  ; LAB_00550a9b
    JMP 0x00550d3f                      ; 00550d6f
        ;   XREF to: 00550d3f (UNCONDITIONAL_JUMP)  ; LAB_00550d3f
    LEA EAX,[ESI + 0x1fae8]             ; 00550d71
        ;   Label: LAB_00550d71
    PUSH EAX                            ; 00550d77
    CALL core_inv.cpp_CInventory_renderSelectedItems_FUN_004faaf0 ; 00550d78
        ;   XREF to: 004faaf0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderSelectedItems_FUN_004faaf0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00550d7d
    JMP 0x00550ada                      ; 00550d80
        ;   XREF to: 00550ada (UNCONDITIONAL_JUMP)  ; LAB_00550ada
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 00550d85
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_00550d85
    XOR EAX,EAX                         ; 00550d8a
    MOV [0x02026348],EAX                ; 00550d8c | DAT_02026348
    MOV ESP,EBP                         ; 00550d91
    POP EBP                             ; 00550d93
    POP EDI                             ; 00550d94
    POP ESI                             ; 00550d95
    POP EBX                             ; 00550d96
    RET                                 ; 00550d97

