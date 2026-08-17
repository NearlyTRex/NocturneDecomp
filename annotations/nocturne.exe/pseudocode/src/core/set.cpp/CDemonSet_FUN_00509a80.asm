; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_00509a80(CDemonSet *this_ptr,int skip_prerender)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_prerender
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049cd21
;
; Referenced Globals:
;   TerminatedCString s_comp_3_2f_3_2f_actren_3_00590532
;   double DOUBLE_0059055a = 0.0555555555555556
;   double DOUBLE_00590562 = 0.0000152587890625
;   double DOUBLE_0059056a = 1000
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   undefined4 DAT_005c1144
;   undefined4 DAT_005c11ec
;   undefined4 DAT_005c15b8
;   CConsole g_CConsole_0077ad0c
;   CDemonLight g_CDemonLight_01c74640
;   undefined4 g_CGame_01c775ec.shadow_flag
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509a80
        ;   Label: core_set.cpp_CDemonSet_FUN_00509a80
    PUSH ESI                            ; 00509a81
    PUSH EDI                            ; 00509a82
    PUSH EBP                            ; 00509a83
    MOV EBP,ESP                         ; 00509a84
    SUB ESP,0x54                        ; 00509a86
    MOV EBX,dword ptr [EBP + 0x14]      ; 00509a89
    MOV ESI,dword ptr [EBP + 0x18]      ; 00509a8c
    MOV EAX,[0x005b9354]                ; 00509a8f | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x20c],0x0     ; 00509a94 | g_CGame_01c775ec.profile_mode
    JNZ 0x0050a0ed                      ; 00509a9b
        ;   XREF to: 0050a0ed (CONDITIONAL_JUMP)  ; LAB_0050a0ed
    TEST ESI,ESI                        ; 00509aa1
        ;   Label: LAB_00509aa1
    JZ 0x00509ab2                       ; 00509aa3
        ;   XREF to: 00509ab2 (CONDITIONAL_JUMP)  ; LAB_00509ab2
    CMP dword ptr [EBX + 0x15aa64],0x0  ; 00509aa5
    JNZ 0x0050a0fa                      ; 00509aac
        ;   XREF to: 0050a0fa (CONDITIONAL_JUMP)  ; LAB_0050a0fa
    TEST ESI,ESI                        ; 00509ab2
        ;   Label: LAB_00509ab2
    JNZ 0x00509ad9                      ; 00509ab4
        ;   XREF to: 00509ad9 (CONDITIONAL_JUMP)  ; LAB_00509ad9
    PUSH 0x1c74640                      ; 00509ab6 | g_CDemonLight_01c74640
    PUSH EBX                            ; 00509abb
    MOV dword ptr [0x01fba2d8],ESI      ; 00509abc | DAT_01fba2d8
    MOV dword ptr [0x01fba2ec],ESI      ; 00509ac2 | DAT_01fba2ec
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970 ; 00509ac8
        ;   XREF to: 0050a970 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 00509acd
    PUSH EBX                            ; 00509ad0
    CALL core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 ; 00509ad1
        ;   XREF to: 00509760 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00509ad6
    PUSH 0x1fb8508                      ; 00509ad9
        ;   Label: LAB_00509ad9
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710 ; 00509ade
        ;   XREF to: 00440710 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710(CDemonCamera * this_ptr)
    MOV EAX,dword ptr [EBX + 0x16126c]  ; 00509ae3
    ADD ESP,0x4                         ; 00509ae9
    TEST EAX,EAX                        ; 00509aec
    JZ 0x00509b03                       ; 00509aee
        ;   XREF to: 00509b03 (CONDITIONAL_JUMP)  ; LAB_00509b03
    PUSH EBX                            ; 00509af0
    CALL core_set.cpp_CDemonSet_restoreCameraView_FUN_0050e310 ; 00509af1
        ;   XREF to: 0050e310 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraView_FUN_0050e310(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00509af6
    MOV dword ptr [EBX + 0x16126c],0x0  ; 00509af9
    PUSH 0x1                            ; 00509b03
        ;   Label: LAB_00509b03
    PUSH 0x1fb8508                      ; 00509b05
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 ; 00509b0a
        ;   XREF to: 00440290 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EDX,dword ptr [0x01ffb074]      ; 00509b0f | DAT_01ffb074
    ADD ESP,0x8                         ; 00509b15
    TEST EDX,EDX                        ; 00509b18
    JZ 0x0050a10a                       ; 00509b1a
        ;   XREF to: 0050a10a (CONDITIONAL_JUMP)  ; LAB_0050a10a
    XOR ESI,ESI                         ; 00509b20
        ;   Label: LAB_00509b20
    PUSH 0x1fb8508                      ; 00509b22
    MOV dword ptr [0x01ffb074],ESI      ; 00509b27 | DAT_01ffb074
    CALL core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90 ; 00509b2d
        ;   XREF to: 00444f90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90(CDemonCamera * this_ptr)
    MOV EDI,dword ptr [0x01fb9b54]      ; 00509b32 | DAT_01fb9b54
    ADD ESP,0x4                         ; 00509b38
    TEST EDI,EDI                        ; 00509b3b
    JLE 0x00509b6b                      ; 00509b3d
        ;   XREF to: 00509b6b (CONDITIONAL_JUMP)  ; LAB_00509b6b
    XOR EDI,EDI                         ; 00509b3f
    MOV EAX,dword ptr [EDI + 0x1fb9b58] ; 00509b41 | DAT_01fb9b58
        ;   Label: LAB_00509b41
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00509b47
    JZ 0x00509b5e                       ; 00509b4e
        ;   XREF to: 00509b5e (CONDITIONAL_JUMP)  ; LAB_00509b5e
    PUSH EAX                            ; 00509b50
    PUSH 0x1fb8508                      ; 00509b51
    CALL core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90 ; 00509b56
        ;   XREF to: 00444c90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 00509b5b
    MOV EAX,[0x01fb9b54]                ; 00509b5e | DAT_01fb9b54
        ;   Label: LAB_00509b5e
    INC ESI                             ; 00509b63
    ADD EDI,0x4                         ; 00509b64
    CMP ESI,EAX                         ; 00509b67
    JL 0x00509b41                       ; 00509b69
        ;   XREF to: 00509b41 (CONDITIONAL_JUMP)  ; LAB_00509b41
    XOR EDX,EDX                         ; 00509b6b
        ;   Label: LAB_00509b6b
    MOV ECX,dword ptr [0x01fba2d8]      ; 00509b6d | DAT_01fba2d8
    MOV dword ptr [EBP + -0x10],EDX     ; 00509b73
    TEST ECX,ECX                        ; 00509b76
    JLE 0x00509c0b                      ; 00509b78
        ;   XREF to: 00509c0b (CONDITIONAL_JUMP)  ; LAB_00509c0b
    MOV dword ptr [EBP + -0x8],EDX      ; 00509b7e
    MOV EAX,dword ptr [EBP + -0x8]      ; 00509b81
        ;   Label: LAB_00509b81
    MOV EAX,dword ptr [EAX + 0x1fba2dc] ; 00509b84
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00509b8a
    JZ 0x00509bed                       ; 00509b91
        ;   XREF to: 00509bed (CONDITIONAL_JUMP)  ; LAB_00509bed
    CMP dword ptr [EAX + 0x1cd0],0x0    ; 00509b93
    JZ 0x00509bed                       ; 00509b9a
        ;   XREF to: 00509bed (CONDITIONAL_JUMP)  ; LAB_00509bed
    PUSH EAX                            ; 00509b9c
    PUSH 0x1fb8508                      ; 00509b9d
    XOR ESI,ESI                         ; 00509ba2
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920 ; 00509ba4
        ;   XREF to: 00444920 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920(CDemonCamera * this_ptr, CDemonLight * light_source)
    MOV EAX,dword ptr [EBX + 0x15a8cc]  ; 00509ba9
    ADD ESP,0x8                         ; 00509baf
    TEST EAX,EAX                        ; 00509bb2
    JLE 0x00509bed                      ; 00509bb4
        ;   XREF to: 00509bed (CONDITIONAL_JUMP)  ; LAB_00509bed
    MOV EDI,dword ptr [EBP + -0x8]      ; 00509bb6
    PUSH 0x0                            ; 00509bb9
        ;   Label: LAB_00509bb9
    PUSH ESI                            ; 00509bbb
    PUSH EBX                            ; 00509bbc
    CALL core_set.cpp_CDemonSet_FUN_0050e080 ; 00509bbd
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00509bc2
    MOV EDX,dword ptr [EDI + 0x1fba2dc] ; 00509bc5
    PUSH EDX                            ; 00509bcb
    PUSH 0x1fb8508                      ; 00509bcc
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920 ; 00509bd1
        ;   XREF to: 00444920 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920(CDemonCamera * this_ptr, CDemonLight * light_source)
    ADD ESP,0x8                         ; 00509bd6
    PUSH EBX                            ; 00509bd9
    INC ESI                             ; 00509bda
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 00509bdb
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15a8cc]  ; 00509be0
    ADD ESP,0x4                         ; 00509be6
    CMP ESI,ECX                         ; 00509be9
    JL 0x00509bb9                       ; 00509beb
        ;   XREF to: 00509bb9 (CONDITIONAL_JUMP)  ; LAB_00509bb9
    MOV ECX,dword ptr [EBP + -0x8]      ; 00509bed
        ;   Label: LAB_00509bed
    MOV ESI,dword ptr [EBP + -0x10]     ; 00509bf0
    MOV EDI,dword ptr [0x01fba2d8]      ; 00509bf3 | DAT_01fba2d8
    ADD ECX,0x4                         ; 00509bf9
    INC ESI                             ; 00509bfc
    MOV dword ptr [EBP + -0x8],ECX      ; 00509bfd
    MOV dword ptr [EBP + -0x10],ESI     ; 00509c00
    CMP ESI,EDI                         ; 00509c03
    JL 0x00509b81                       ; 00509c05
        ;   XREF to: 00509b81 (CONDITIONAL_JUMP)  ; LAB_00509b81
    XOR EAX,EAX                         ; 00509c0b
        ;   Label: LAB_00509c0b
    MOV EDX,dword ptr [0x01fba2ec]      ; 00509c0d | DAT_01fba2ec
    MOV dword ptr [EBP + -0x18],EAX     ; 00509c13
    TEST EDX,EDX                        ; 00509c16
    JLE 0x00509c99                      ; 00509c18
        ;   XREF to: 00509c99 (CONDITIONAL_JUMP)  ; LAB_00509c99
    MOV dword ptr [EBP + -0xc],EAX      ; 00509c1e
    MOV EAX,dword ptr [EBP + -0xc]      ; 00509c21
        ;   Label: LAB_00509c21
    PUSH 0x0                            ; 00509c24
    MOV EDX,dword ptr [EAX + 0x1fba2f0] ; 00509c26
    PUSH EDX                            ; 00509c2c
    PUSH 0x1fb8508                      ; 00509c2d
    XOR ESI,ESI                         ; 00509c32
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750 ; 00509c34
        ;   XREF to: 00445750 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    MOV ECX,dword ptr [EBX + 0x15a8cc]  ; 00509c39
    ADD ESP,0xc                         ; 00509c3f
    TEST ECX,ECX                        ; 00509c42
    JLE 0x00509c7f                      ; 00509c44
        ;   XREF to: 00509c7f (CONDITIONAL_JUMP)  ; LAB_00509c7f
    MOV EDI,dword ptr [EBP + -0xc]      ; 00509c46
    PUSH 0x0                            ; 00509c49
        ;   Label: LAB_00509c49
    PUSH ESI                            ; 00509c4b
    PUSH EBX                            ; 00509c4c
    CALL core_set.cpp_CDemonSet_FUN_0050e080 ; 00509c4d
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00509c52
    PUSH 0x1                            ; 00509c55
    MOV EAX,dword ptr [EDI + 0x1fba2f0] ; 00509c57
    PUSH EAX                            ; 00509c5d
    PUSH 0x1fb8508                      ; 00509c5e
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750 ; 00509c63
        ;   XREF to: 00445750 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    ADD ESP,0xc                         ; 00509c68
    PUSH EBX                            ; 00509c6b
    INC ESI                             ; 00509c6c
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 00509c6d
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBX + 0x15a8cc]  ; 00509c72
    ADD ESP,0x4                         ; 00509c78
    CMP ESI,EDX                         ; 00509c7b
    JL 0x00509c49                       ; 00509c7d
        ;   XREF to: 00509c49 (CONDITIONAL_JUMP)  ; LAB_00509c49
    MOV ESI,dword ptr [EBP + -0xc]      ; 00509c7f
        ;   Label: LAB_00509c7f
    MOV EDI,dword ptr [EBP + -0x18]     ; 00509c82
    MOV EDX,dword ptr [0x01fba2ec]      ; 00509c85 | DAT_01fba2ec
    ADD ESI,0x4                         ; 00509c8b
    INC EDI                             ; 00509c8e
    MOV dword ptr [EBP + -0xc],ESI      ; 00509c8f
    MOV dword ptr [EBP + -0x18],EDI     ; 00509c92
    CMP EDI,EDX                         ; 00509c95
    JL 0x00509c21                       ; 00509c97
        ;   XREF to: 00509c21 (CONDITIONAL_JUMP)  ; LAB_00509c21
    XOR ECX,ECX                         ; 00509c99
        ;   Label: LAB_00509c99
    MOV EDI,dword ptr [0x01fba480]      ; 00509c9b | DAT_01fba480
    MOV dword ptr [EBP + -0x14],ECX     ; 00509ca1
    MOV dword ptr [0x01fba7a4],ECX      ; 00509ca4 | DAT_01fba7a4
    TEST EDI,EDI                        ; 00509caa
    JLE 0x00509cfc                      ; 00509cac
        ;   XREF to: 00509cfc (CONDITIONAL_JUMP)  ; LAB_00509cfc
    XOR ESI,ESI                         ; 00509cae
    MOV EAX,dword ptr [ESI + 0x1fba614] ; 00509cb0
        ;   Label: LAB_00509cb0
    MOV EDI,dword ptr [ESI + 0x1fba484] ; 00509cb6
    TEST EAX,EAX                        ; 00509cbc
    JNZ 0x0050a11e                      ; 00509cbe
        ;   XREF to: 0050a11e (CONDITIONAL_JUMP)  ; LAB_0050a11e
    PUSH EAX                            ; 00509cc4
    PUSH EDI                            ; 00509cc5
    PUSH 0x1fb8508                      ; 00509cc6
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750 ; 00509ccb
        ;   XREF to: 00445750 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    MOV EAX,[0x01fba7a4]                ; 00509cd0 | DAT_01fba7a4
    MOV dword ptr [EAX*0x4 + 0x1fba7a8],EDI ; 00509cd5 | DAT_01fba7a8
    LEA EDI,[EAX + 0x1]                 ; 00509cdc
    ADD ESP,0xc                         ; 00509cdf
    MOV dword ptr [0x01fba7a4],EDI      ; 00509ce2 | DAT_01fba7a4
    MOV EDI,dword ptr [EBP + -0x14]     ; 00509ce8
        ;   Label: LAB_00509ce8
    MOV EDX,dword ptr [0x01fba480]      ; 00509ceb | DAT_01fba480
    INC EDI                             ; 00509cf1
    ADD ESI,0x4                         ; 00509cf2
    MOV dword ptr [EBP + -0x14],EDI     ; 00509cf5
    CMP EDI,EDX                         ; 00509cf8
    JL 0x00509cb0                       ; 00509cfa
        ;   XREF to: 00509cb0 (CONDITIONAL_JUMP)  ; LAB_00509cb0
    XOR ECX,ECX                         ; 00509cfc
        ;   Label: LAB_00509cfc
    MOV dword ptr [0x01fba480],ECX      ; 00509cfe | DAT_01fba480
    MOV EAX,[0x005b9354]                ; 00509d04 | g_CGame_PTR_005b9354
        ;   Label: LAB_00509d04
    CMP dword ptr [EAX + 0x20c],0x0     ; 00509d09 | g_CGame_01c775ec.profile_mode
    JZ 0x00509d1a                       ; 00509d10
        ;   XREF to: 00509d1a (CONDITIONAL_JUMP)  ; LAB_00509d1a
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00509d12
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV dword ptr [EBP + -0x34],EAX     ; 00509d17
    PUSH 0x1fb8508                      ; 00509d1a
        ;   Label: LAB_00509d1a
    CALL core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020 ; 00509d1f
        ;   XREF to: 00445020 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020(CDemonCamera * this_ptr)
    MOV EAX,[0x005b9354]                ; 00509d24 | g_CGame_PTR_005b9354
    MOV ESI,dword ptr [EAX + 0x20c]     ; 00509d29 | g_CGame_01c775ec.profile_mode
    ADD ESP,0x4                         ; 00509d2f
    TEST ESI,ESI                        ; 00509d32
    JZ 0x00509d3e                       ; 00509d34
        ;   XREF to: 00509d3e (CONDITIONAL_JUMP)  ; LAB_00509d3e
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00509d36
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV dword ptr [EBP + -0x2c],EAX     ; 00509d3b
    PUSH 0xc                            ; 00509d3e
        ;   Label: LAB_00509d3e
    PUSH EBX                            ; 00509d40
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 ; 00509d41
        ;   XREF to: 0050d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 00509d46
    PUSH EBX                            ; 00509d49
    CALL core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640 ; 00509d4a
        ;   XREF to: 0050a640 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00509d4f
    PUSH 0x0                            ; 00509d52
    PUSH 0x0                            ; 00509d54
    PUSH 0x1fb8508                      ; 00509d56
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 00509d5b
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 00509d60
    MOV EDI,dword ptr [0x005b96c4]      ; 00509d63 | g_CGore_PTR_005b96c4
    PUSH EDI                            ; 00509d69
    XOR ESI,ESI                         ; 00509d6a
    CALL core_gore.cpp_CGore_renderParticles_FUN_004afe00 ; 00509d6c
        ;   XREF to: 004afe00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004afe00(CGore * this_ptr)
    MOV EAX,dword ptr [EBX + 0x15a8cc]  ; 00509d71
    ADD ESP,0x4                         ; 00509d77
    TEST EAX,EAX                        ; 00509d7a
    JLE 0x00509db0                      ; 00509d7c
        ;   XREF to: 00509db0 (CONDITIONAL_JUMP)  ; LAB_00509db0
    PUSH 0x0                            ; 00509d7e
        ;   Label: LAB_00509d7e
    PUSH ESI                            ; 00509d80
    PUSH EBX                            ; 00509d81
    CALL core_set.cpp_CDemonSet_FUN_0050e080 ; 00509d82
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00509d87
    MOV EDX,dword ptr [0x005b96c4]      ; 00509d8a | g_CGore_PTR_005b96c4
    PUSH EDX                            ; 00509d90
    CALL core_gore.cpp_CGore_renderParticles_FUN_004afe00 ; 00509d91
        ;   XREF to: 004afe00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004afe00(CGore * this_ptr)
    ADD ESP,0x4                         ; 00509d96
    PUSH EBX                            ; 00509d99
    INC ESI                             ; 00509d9a
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 00509d9b
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15a8cc]  ; 00509da0
    ADD ESP,0x4                         ; 00509da6
    CMP ESI,ECX                         ; 00509da9
    JL 0x00509d7e                       ; 00509dab
        ;   XREF to: 00509d7e (CONDITIONAL_JUMP)  ; LAB_00509d7e
    LEA EAX,[EAX]                       ; 00509dad
    MOV EAX,[0x005c11ec]                ; 00509db0 | DAT_005c11ec
        ;   Label: LAB_00509db0
    CMP dword ptr [EAX],0x0             ; 00509db5 | g_CWater_02dd1210
    JZ 0x00509dc5                       ; 00509db8
        ;   XREF to: 00509dc5 (CONDITIONAL_JUMP)  ; LAB_00509dc5
    PUSH 0x0                            ; 00509dba
    PUSH EAX                            ; 00509dbc | g_CWater_02dd1210
    CALL core_water.cpp_CWater_render_FUN_00550cb0 ; 00509dbd
        ;   XREF to: 00550cb0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_00550cb0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 00509dc2
    PUSH EBX                            ; 00509dc5
        ;   Label: LAB_00509dc5
    CALL core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0 ; 00509dc6
        ;   XREF to: 0050a7e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderTransparentActors_FUN_0050a7e0(CDemonSet * this_ptr)
    MOV EDI,dword ptr [EBX + 0x15a8c0]  ; 00509dcb
    ADD ESP,0x4                         ; 00509dd1
    TEST EDI,EDI                        ; 00509dd4
    JZ 0x00509de8                       ; 00509dd6
        ;   XREF to: 00509de8 (CONDITIONAL_JUMP)  ; LAB_00509de8
    PUSH 0x0                            ; 00509dd8
    MOV EAX,[0x005c1144]                ; 00509dda | DAT_005c1144
    PUSH EAX                            ; 00509ddf
    CALL core_terrain.cpp_CTerrain_render_FUN_00549310 ; 00509de0
        ;   XREF to: 00549310 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_render_FUN_00549310(CTerrain * this_ptr, int render_pass)
    ADD ESP,0x8                         ; 00509de5
    MOV EDX,dword ptr [0x005b80f0]      ; 00509de8 | g_CFireEffect_PTR_005b80f0
        ;   Label: LAB_00509de8
    PUSH EDX                            ; 00509dee
    XOR ESI,ESI                         ; 00509def
    CALL core_fire.cpp_CFireEffect_render_FUN_0048a650 ; 00509df1
        ;   XREF to: 0048a650 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0048a650(CFireEffect * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15a8cc]  ; 00509df6
    ADD ESP,0x4                         ; 00509dfc
    TEST ECX,ECX                        ; 00509dff
    JLE 0x00509e40                      ; 00509e01
        ;   XREF to: 00509e40 (CONDITIONAL_JUMP)  ; LAB_00509e40
    PUSH 0x0                            ; 00509e03
        ;   Label: LAB_00509e03
    PUSH ESI                            ; 00509e05
    PUSH EBX                            ; 00509e06
    CALL core_set.cpp_CDemonSet_FUN_0050e080 ; 00509e07
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00509e0c
    MOV EDI,dword ptr [0x005b80f0]      ; 00509e0f | g_CFireEffect_PTR_005b80f0
    PUSH EDI                            ; 00509e15
    CALL core_fire.cpp_CFireEffect_render_FUN_0048a650 ; 00509e16
        ;   XREF to: 0048a650 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0048a650(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 00509e1b
    PUSH EBX                            ; 00509e1e
    INC ESI                             ; 00509e1f
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 00509e20
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBX + 0x15a8cc]  ; 00509e25
    ADD ESP,0x4                         ; 00509e2b
    CMP ESI,EAX                         ; 00509e2e
    JL 0x00509e03                       ; 00509e30
        ;   XREF to: 00509e03 (CONDITIONAL_JUMP)  ; LAB_00509e03
    LEA EAX,[EAX]                       ; 00509e32
    LEA EDX,[EDX]                       ; 00509e38
    MOV EAX,EAX                         ; 00509e3e
    MOV EDX,dword ptr [0x005c15b8]      ; 00509e40 | DAT_005c15b8
        ;   Label: LAB_00509e40
    PUSH EDX                            ; 00509e46
    CALL core_weather.cpp_CWeather_renderParticles_FUN_00555020 ; 00509e47
        ;   XREF to: 00555020 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_renderParticles_FUN_00555020(CWeather * this_ptr)
    MOV ESI,dword ptr [0x01fba2d8]      ; 00509e4c | DAT_01fba2d8
    XOR ECX,ECX                         ; 00509e52
    ADD ESP,0x4                         ; 00509e54
    MOV dword ptr [EBP + -0x1c],ECX     ; 00509e57
    TEST ESI,ESI                        ; 00509e5a
    JLE 0x00509e91                      ; 00509e5c
        ;   XREF to: 00509e91 (CONDITIONAL_JUMP)  ; LAB_00509e91
    MOV dword ptr [EBP + -0x24],ECX     ; 00509e5e
    MOV EDI,dword ptr [EBP + -0x24]     ; 00509e61
        ;   Label: LAB_00509e61
    MOV EDI,dword ptr [EDI + 0x1fba2dc] ; 00509e64
    CMP dword ptr [EDI + 0x1cb4],0x0    ; 00509e6a
    JNZ 0x0050a149                      ; 00509e71
        ;   XREF to: 0050a149 (CONDITIONAL_JUMP)  ; LAB_0050a149
    MOV EDI,dword ptr [EBP + -0x24]     ; 00509e77
        ;   Label: LAB_00509e77
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00509e7a
    MOV EDX,dword ptr [0x01fba2d8]      ; 00509e7d | DAT_01fba2d8
    ADD EDI,0x4                         ; 00509e83
    INC EAX                             ; 00509e86
    MOV dword ptr [EBP + -0x24],EDI     ; 00509e87
    MOV dword ptr [EBP + -0x1c],EAX     ; 00509e8a
    CMP EAX,EDX                         ; 00509e8d
    JL 0x00509e61                       ; 00509e8f
        ;   XREF to: 00509e61 (CONDITIONAL_JUMP)  ; LAB_00509e61
    PUSH 0x1fb8508                      ; 00509e91
        ;   Label: LAB_00509e91
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20 ; 00509e96
        ;   XREF to: 00440b20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00509e9b
    PUSH 0x0                            ; 00509e9e
    MOV ECX,dword ptr [0x005b96c4]      ; 00509ea0 | g_CGore_PTR_005b96c4
    PUSH ECX                            ; 00509ea6
    CALL core_gore.cpp_CGore_renderDecals_FUN_004afe80 ; 00509ea7
        ;   XREF to: 004afe80 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004afe80(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0x8                         ; 00509eac
    PUSH 0x0                            ; 00509eaf
    MOV ESI,dword ptr [0x005b80f0]      ; 00509eb1 | g_CFireEffect_PTR_005b80f0
    PUSH ESI                            ; 00509eb7
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970 ; 00509eb8
        ;   XREF to: 0048a970 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970(CFireEffect * this_ptr, int render_mode, int render_completeness)
    MOV EAX,[0x005c11ec]                ; 00509ebd | DAT_005c11ec
    MOV EDI,dword ptr [EAX]             ; 00509ec2 | g_CWater_02dd1210
    ADD ESP,0x8                         ; 00509ec4
    TEST EDI,EDI                        ; 00509ec7
    JNZ 0x00509ed5                      ; 00509ec9
        ;   XREF to: 00509ed5 (CONDITIONAL_JUMP)  ; LAB_00509ed5
    PUSH EDI                            ; 00509ecb
    PUSH EAX                            ; 00509ecc | g_CWater_02dd1210
    CALL core_water.cpp_CWater_render_FUN_00550cb0 ; 00509ecd
        ;   XREF to: 00550cb0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_00550cb0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 00509ed2
    MOV EAX,dword ptr [EBX + 0x14cd6c]  ; 00509ed5
        ;   Label: LAB_00509ed5
    XOR EDI,EDI                         ; 00509edb
    TEST EAX,EAX                        ; 00509edd
    JLE 0x00509f19                      ; 00509edf
        ;   XREF to: 00509f19 (CONDITIONAL_JUMP)  ; LAB_00509f19
    MOV ESI,EBX                         ; 00509ee1
    MOV EAX,[0x01c78c78]                ; 00509ee3 | g_CGlassActorType_01c78c40.name_hash
        ;   Label: LAB_00509ee3
    PUSH EAX                            ; 00509ee8
    MOV EDX,dword ptr [ESI + 0x14cd70]  ; 00509ee9
    PUSH EDX                            ; 00509eef
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00509ef0
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00509ef5
    TEST EAX,EAX                        ; 00509ef8
    JZ 0x00509f0b                       ; 00509efa
        ;   XREF to: 00509f0b (CONDITIONAL_JUMP)  ; LAB_00509f0b
    PUSH 0x0                            ; 00509efc
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00509efe
    PUSH EAX                            ; 00509f04
    CALL dword ptr [EDX + 0x10]         ; 00509f05
    ADD ESP,0x8                         ; 00509f08
    INC EDI                             ; 00509f0b
        ;   Label: LAB_00509f0b
    MOV EDX,dword ptr [EBX + 0x14cd6c]  ; 00509f0c
    ADD ESI,0x4                         ; 00509f12
    CMP EDI,EDX                         ; 00509f15
    JL 0x00509ee3                       ; 00509f17
        ;   XREF to: 00509ee3 (CONDITIONAL_JUMP)  ; LAB_00509ee3
    PUSH 0x0                            ; 00509f19
        ;   Label: LAB_00509f19
    PUSH 0x1fb8508                      ; 00509f1b
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50 ; 00509f20
        ;   XREF to: 00440c50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(CDemonCamera * this_ptr, int restore_zbuffer)
    MOV ESI,dword ptr [0x01fba2d8]      ; 00509f25 | DAT_01fba2d8
    XOR ECX,ECX                         ; 00509f2b
    ADD ESP,0x8                         ; 00509f2d
    MOV dword ptr [EBP + -0x20],ECX     ; 00509f30
    TEST ESI,ESI                        ; 00509f33
    JLE 0x00509f6a                      ; 00509f35
        ;   XREF to: 00509f6a (CONDITIONAL_JUMP)  ; LAB_00509f6a
    MOV dword ptr [EBP + -0x28],ECX     ; 00509f37
    MOV EDI,dword ptr [EBP + -0x28]     ; 00509f3a
        ;   Label: LAB_00509f3a
    MOV EDI,dword ptr [EDI + 0x1fba2dc] ; 00509f3d
    CMP dword ptr [EDI + 0x1cb4],0x0    ; 00509f43
    JNZ 0x0050a1bf                      ; 00509f4a
        ;   XREF to: 0050a1bf (CONDITIONAL_JUMP)  ; LAB_0050a1bf
    MOV ESI,dword ptr [EBP + -0x28]     ; 00509f50
        ;   Label: LAB_00509f50
    MOV EDI,dword ptr [EBP + -0x20]     ; 00509f53
    MOV EDX,dword ptr [0x01fba2d8]      ; 00509f56 | DAT_01fba2d8
    ADD ESI,0x4                         ; 00509f5c
    INC EDI                             ; 00509f5f
    MOV dword ptr [EBP + -0x28],ESI     ; 00509f60
    MOV dword ptr [EBP + -0x20],EDI     ; 00509f63
    CMP EDI,EDX                         ; 00509f66
    JL 0x00509f3a                       ; 00509f68
        ;   XREF to: 00509f3a (CONDITIONAL_JUMP)  ; LAB_00509f3a
    MOV EAX,[0x01cae0e8]                ; 00509f6a | g_LocalHeroIndex
        ;   Label: LAB_00509f6a
    SHL EAX,0x2                         ; 00509f6f
    MOV ECX,dword ptr [EAX + 0x1cae0d8] ; 00509f72
    TEST ECX,ECX                        ; 00509f78
    JZ 0x00509f8c                       ; 00509f7a
        ;   XREF to: 00509f8c (CONDITIONAL_JUMP)  ; LAB_00509f8c
    MOV EDX,dword ptr [0x005baf90]      ; 00509f7c | g_CDemonMission_PTR_005baf90
    CMP dword ptr [EDX + 0x4],0x0       ; 00509f82 | DAT_01cc9454
    JZ 0x0050a235                       ; 00509f86
        ;   XREF to: 0050a235 (CONDITIONAL_JUMP)  ; LAB_0050a235
    PUSH 0x0                            ; 00509f8c
        ;   Label: LAB_00509f8c
    PUSH 0x1fb8508                      ; 00509f8e
    XOR EDI,EDI                         ; 00509f93
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 ; 00509f95
        ;   XREF to: 00440a20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    MOV EAX,[0x01fb9b54]                ; 00509f9a | DAT_01fb9b54
    ADD ESP,0x8                         ; 00509f9f
    TEST EAX,EAX                        ; 00509fa2
    JLE 0x00509fd0                      ; 00509fa4
        ;   XREF to: 00509fd0 (CONDITIONAL_JUMP)  ; LAB_00509fd0
    XOR ESI,ESI                         ; 00509fa6
    MOV EDX,dword ptr [ESI + 0x1fb9b58] ; 00509fa8 | DAT_01fb9b58
        ;   Label: LAB_00509fa8
    PUSH EDX                            ; 00509fae
    ADD ESI,0x4                         ; 00509faf
    INC EDI                             ; 00509fb2
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970 ; 00509fb3
        ;   XREF to: 0044e970 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(CDemonLight * this_ptr)
    MOV ECX,dword ptr [0x01fb9b54]      ; 00509fb8 | DAT_01fb9b54
    ADD ESP,0x4                         ; 00509fbe
    CMP EDI,ECX                         ; 00509fc1
    JL 0x00509fa8                       ; 00509fc3
        ;   XREF to: 00509fa8 (CONDITIONAL_JUMP)  ; LAB_00509fa8
    LEA EAX,[EAX]                       ; 00509fc5
    LEA EDX,[EDX]                       ; 00509fcb
    MOV EBX,EBX                         ; 00509fce
    MOV EAX,[0x005b9354]                ; 00509fd0 | g_CGame_PTR_005b9354
        ;   Label: LAB_00509fd0
    CMP dword ptr [EAX + 0x20c],0x0     ; 00509fd5 | g_CGame_01c775ec.profile_mode
    JZ 0x0050a07f                       ; 00509fdc
        ;   XREF to: 0050a07f (CONDITIONAL_JUMP)  ; LAB_0050a07f
    MOV EDI,dword ptr [EBP + -0x2c]     ; 00509fe2
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00509fe5
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    SUB EAX,EDI                         ; 00509fea
    MOV dword ptr [EBP + -0x4],EAX      ; 00509fec
    FLD double ptr [0x0059055a]         ; 00509fef | DOUBLE_0059055a
    FILD dword ptr [EBP + -0x4]         ; 00509ff5
    FMUL ST1                            ; 00509ff8
    MOV EAX,[0x005b9354]                ; 00509ffa | g_CGame_PTR_005b9354
    MOV EDX,dword ptr [EBP + -0x30]     ; 00509fff
    FLD float ptr [EAX + 0x264]         ; 0050a002 | g_CGame_01c775ec.delta_time_float
    MOV EAX,EDI                         ; 0050a008
    FXCH                                ; 0050a00a
    FLD double ptr [0x00590562]         ; 0050a00c | DOUBLE_00590562
    FXCH                                ; 0050a012
    FMUL ST1                            ; 0050a014
    SUB EAX,EDX                         ; 0050a016
    MOV dword ptr [EBP + -0x4],EAX      ; 0050a018
    FLD double ptr [0x0059056a]         ; 0050a01b | DOUBLE_0059056a
    FXCH                                ; 0050a021
    FMUL ST1                            ; 0050a023
    FILD dword ptr [EBP + -0x4]         ; 0050a025
    MOV EAX,dword ptr [EBP + -0x34]     ; 0050a028
    FMUL ST5                            ; 0050a02b
    SUB EAX,EDX                         ; 0050a02d
    MOV dword ptr [EBP + -0x4],EAX      ; 0050a02f
    FMUL ST3                            ; 0050a032
    FILD dword ptr [EBP + -0x4]         ; 0050a034
    FMULP ST6                           ; 0050a037
    FMUL ST2                            ; 0050a039
    FXCH ST5                            ; 0050a03b
    FMULP ST3                           ; 0050a03d
    FLD1                                ; 0050a03f
    FXCH ST3                            ; 0050a041
    FMULP ST2                           ; 0050a043
    FXCH ST2                            ; 0050a045
    FDIVRP ST3,ST0                      ; 0050a047
    FXCH                                ; 0050a049
    FMUL ST2                            ; 0050a04b
    FXCH ST3                            ; 0050a04d
    FMUL ST2                            ; 0050a04f
    FXCH                                ; 0050a051
    FMULP ST2                           ; 0050a053
    SUB ESP,0x8                         ; 0050a055
    FXCH ST2                            ; 0050a058
    FSTP double ptr [ESP]               ; 0050a05a
    SUB ESP,0x8                         ; 0050a05d
    FXCH                                ; 0050a060
    FSTP double ptr [ESP]               ; 0050a062
    SUB ESP,0x8                         ; 0050a065
    FSTP double ptr [ESP]               ; 0050a068
    PUSH 0x590532                       ; 0050a06b | = "comp: %3.2f/%3.2f actren : %3.2f\n"
    MOV ESI,dword ptr [0x005ad350]      ; 0050a070 | g_CConsole_PTR_005ad350
    PUSH ESI                            ; 0050a076 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0050a077
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x20                        ; 0050a07c
    MOV EAX,[0x005b9354]                ; 0050a07f | g_CGame_PTR_005b9354
        ;   Label: LAB_0050a07f
    CMP dword ptr [EAX + 0x1e8],0x0     ; 0050a084 | g_CGame_01c775ec.debug_toggle_flag
    JZ 0x0050a096                       ; 0050a08b
        ;   XREF to: 0050a096 (CONDITIONAL_JUMP)  ; LAB_0050a096
    PUSH EBX                            ; 0050a08d
    CALL core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_005138e0 ; 0050a08e
        ;   XREF to: 005138e0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_005138e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0050a093
    MOV EAX,dword ptr [EBX + 0x14cd6c]  ; 0050a096
        ;   Label: LAB_0050a096
    XOR EDX,EDX                         ; 0050a09c
    TEST EAX,EAX                        ; 0050a09e
    JLE 0x0050a0e6                      ; 0050a0a0
        ;   XREF to: 0050a0e6 (CONDITIONAL_JUMP)  ; LAB_0050a0e6
    MOV ECX,EBX                         ; 0050a0a2
    MOV EAX,dword ptr [ECX + 0x14cd70]  ; 0050a0a4
        ;   Label: LAB_0050a0a4
    LEA EDI,[EAX + 0x128]               ; 0050a0aa
    LEA ESI,[EAX + 0x20]                ; 0050a0b0
    CMP EDI,ESI                         ; 0050a0b3
    JNZ 0x0050a249                      ; 0050a0b5
        ;   XREF to: 0050a249 (CONDITIONAL_JUMP)  ; LAB_0050a249
    LEA ESI,[EAX + 0x134]               ; 0050a0bb
        ;   Label: LAB_0050a0bb
    ADD EAX,0x30                        ; 0050a0c1
    CMP ESI,EAX                         ; 0050a0c4
    JZ 0x0050a0d8                       ; 0050a0c6
        ;   XREF to: 0050a0d8 (CONDITIONAL_JUMP)  ; LAB_0050a0d8
    MOV EDI,dword ptr [EAX]             ; 0050a0c8
    MOV dword ptr [ESI],EDI             ; 0050a0ca
    MOV EDI,dword ptr [EAX + 0x4]       ; 0050a0cc
    MOV dword ptr [ESI + 0x4],EDI       ; 0050a0cf
    MOV EDI,dword ptr [EAX + 0x8]       ; 0050a0d2
    MOV dword ptr [ESI + 0x8],EDI       ; 0050a0d5
    INC EDX                             ; 0050a0d8
        ;   Label: LAB_0050a0d8
    MOV ESI,dword ptr [EBX + 0x14cd6c]  ; 0050a0d9
    ADD ECX,0x4                         ; 0050a0df
    CMP EDX,ESI                         ; 0050a0e2
    JL 0x0050a0a4                       ; 0050a0e4
        ;   XREF to: 0050a0a4 (CONDITIONAL_JUMP)  ; LAB_0050a0a4
    MOV ESP,EBP                         ; 0050a0e6
        ;   Label: LAB_0050a0e6
    POP EBP                             ; 0050a0e8
    POP EDI                             ; 0050a0e9
    POP ESI                             ; 0050a0ea
    POP EBX                             ; 0050a0eb
    RET                                 ; 0050a0ec
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 0050a0ed
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_0050a0ed
    MOV dword ptr [EBP + -0x30],EAX     ; 0050a0f2
    JMP 0x00509aa1                      ; 0050a0f5
        ;   XREF to: 00509aa1 (UNCONDITIONAL_JUMP)  ; LAB_00509aa1
    PUSH EBX                            ; 0050a0fa
        ;   Label: LAB_0050a0fa
    CALL core_set.cpp_CDemonSet_FUN_0050aba0 ; 0050a0fb
        ;   XREF to: 0050aba0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050aba0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0050a100
    MOV ESP,EBP                         ; 0050a103
    POP EBP                             ; 0050a105
    POP EDI                             ; 0050a106
    POP ESI                             ; 0050a107
    POP EBX                             ; 0050a108
    RET                                 ; 0050a109
    MOV EAX,[0x005b9354]                ; 0050a10a | g_CGame_PTR_005b9354
        ;   Label: LAB_0050a10a
    CMP dword ptr [EAX + 0x24],0x0      ; 0050a10f | g_CGame_01c775ec.shadow_flag
    JNZ 0x00509b20                      ; 0050a113
        ;   XREF to: 00509b20 (CONDITIONAL_JUMP)  ; LAB_00509b20
    JMP 0x00509d04                      ; 0050a119
        ;   XREF to: 00509d04 (UNCONDITIONAL_JUMP)  ; LAB_00509d04
    PUSH 0x0                            ; 0050a11e
        ;   Label: LAB_0050a11e
    DEC EAX                             ; 0050a120
    PUSH EAX                            ; 0050a121
    PUSH EBX                            ; 0050a122
    CALL core_set.cpp_CDemonSet_FUN_0050e080 ; 0050a123
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0050a128
    PUSH 0x1                            ; 0050a12b
    PUSH EDI                            ; 0050a12d
    PUSH 0x1fb8508                      ; 0050a12e
    CALL core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750 ; 0050a133
        ;   XREF to: 00445750 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(CDemonCamera * this_ptr, CDemonGlobe * globe, int force_render)
    ADD ESP,0xc                         ; 0050a138
    PUSH EBX                            ; 0050a13b
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 0050a13c
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0050a141
    JMP 0x00509ce8                      ; 0050a144
        ;   XREF to: 00509ce8 (UNCONDITIONAL_JUMP)  ; LAB_00509ce8
    LEA ESI,[EDI + 0x104]               ; 0050a149
        ;   Label: LAB_0050a149
    MOV EAX,dword ptr [ESI]             ; 0050a14f
    MOV dword ptr [EBP + -0x48],EAX     ; 0050a151
    LEA EAX,[ESI + 0x4]                 ; 0050a154
    MOV EAX,dword ptr [EAX]             ; 0050a157
    MOV dword ptr [EBP + -0x44],EAX     ; 0050a159
    LEA EAX,[ESI + 0x8]                 ; 0050a15c
    MOV EAX,dword ptr [EAX]             ; 0050a15f
    PUSH 0x0                            ; 0050a161
    MOV dword ptr [EBP + -0x40],EAX     ; 0050a163
    LEA EAX,[EBP + -0x48]               ; 0050a166
    PUSH EAX                            ; 0050a169
    PUSH 0x1fb8508                      ; 0050a16a
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 0050a16f
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 0050a174
    PUSH EDI                            ; 0050a177
    XOR ESI,ESI                         ; 0050a178
    CALL core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430 ; 0050a17a
        ;   XREF to: 0044f430 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(CDemonLight * this_ptr)
    MOV EAX,dword ptr [EBX + 0x15a8cc]  ; 0050a17f
    ADD ESP,0x4                         ; 0050a185
    TEST EAX,EAX                        ; 0050a188
    JLE 0x00509e77                      ; 0050a18a
        ;   XREF to: 00509e77 (CONDITIONAL_JUMP)  ; LAB_00509e77
    PUSH 0x0                            ; 0050a190
        ;   Label: LAB_0050a190
    PUSH ESI                            ; 0050a192
    PUSH EBX                            ; 0050a193
    CALL core_set.cpp_CDemonSet_FUN_0050e080 ; 0050a194
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0050a199
    PUSH EDI                            ; 0050a19c
    CALL core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430 ; 0050a19d
        ;   XREF to: 0044f430 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0050a1a2
    PUSH EBX                            ; 0050a1a5
    INC ESI                             ; 0050a1a6
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 0050a1a7
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15a8cc]  ; 0050a1ac
    ADD ESP,0x4                         ; 0050a1b2
    CMP ESI,ECX                         ; 0050a1b5
    JGE 0x00509e77                      ; 0050a1b7
        ;   XREF to: 00509e77 (CONDITIONAL_JUMP)  ; LAB_00509e77
    JMP 0x0050a190                      ; 0050a1bd
        ;   XREF to: 0050a190 (UNCONDITIONAL_JUMP)  ; LAB_0050a190
    LEA ESI,[EDI + 0x104]               ; 0050a1bf
        ;   Label: LAB_0050a1bf
    MOV EAX,dword ptr [ESI]             ; 0050a1c5
    MOV dword ptr [EBP + -0x54],EAX     ; 0050a1c7
    LEA EAX,[ESI + 0x4]                 ; 0050a1ca
    MOV EAX,dword ptr [EAX]             ; 0050a1cd
    MOV dword ptr [EBP + -0x50],EAX     ; 0050a1cf
    LEA EAX,[ESI + 0x8]                 ; 0050a1d2
    MOV EAX,dword ptr [EAX]             ; 0050a1d5
    PUSH 0x0                            ; 0050a1d7
    MOV dword ptr [EBP + -0x4c],EAX     ; 0050a1d9
    LEA EAX,[EBP + -0x54]               ; 0050a1dc
    PUSH EAX                            ; 0050a1df
    PUSH 0x1fb8508                      ; 0050a1e0
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 0050a1e5
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    ADD ESP,0xc                         ; 0050a1ea
    PUSH EDI                            ; 0050a1ed
    XOR ESI,ESI                         ; 0050a1ee
    CALL core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0 ; 0050a1f0
        ;   XREF to: 0044f9b0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0(CDemonLight * this_ptr)
    MOV EAX,dword ptr [EBX + 0x15a8cc]  ; 0050a1f5
    ADD ESP,0x4                         ; 0050a1fb
    TEST EAX,EAX                        ; 0050a1fe
    JLE 0x00509f50                      ; 0050a200
        ;   XREF to: 00509f50 (CONDITIONAL_JUMP)  ; LAB_00509f50
    PUSH 0x0                            ; 0050a206
        ;   Label: LAB_0050a206
    PUSH ESI                            ; 0050a208
    PUSH EBX                            ; 0050a209
    CALL core_set.cpp_CDemonSet_FUN_0050e080 ; 0050a20a
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050e080(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0050a20f
    PUSH EDI                            ; 0050a212
    CALL core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0 ; 0050a213
        ;   XREF to: 0044f9b0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0050a218
    PUSH EBX                            ; 0050a21b
    INC ESI                             ; 0050a21c
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 0050a21d
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBX + 0x15a8cc]  ; 0050a222
    ADD ESP,0x4                         ; 0050a228
    CMP ESI,EAX                         ; 0050a22b
    JGE 0x00509f50                      ; 0050a22d
        ;   XREF to: 00509f50 (CONDITIONAL_JUMP)  ; LAB_00509f50
    JMP 0x0050a206                      ; 0050a233
        ;   XREF to: 0050a206 (UNCONDITIONAL_JUMP)  ; LAB_0050a206
    LEA EAX,[ECX + 0x1f5a0]             ; 0050a235
        ;   Label: LAB_0050a235
    PUSH EAX                            ; 0050a23b
    CALL core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150 ; 0050a23c
        ;   XREF to: 004c2150 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0050a241
    JMP 0x00509f8c                      ; 0050a244
        ;   XREF to: 00509f8c (UNCONDITIONAL_JUMP)  ; LAB_00509f8c
    FLD float ptr [ESI]                 ; 0050a249
        ;   Label: LAB_0050a249
    FSTP float ptr [EDI]                ; 0050a24b
    FLD float ptr [ESI + 0x4]           ; 0050a24d
    FSTP float ptr [EDI + 0x4]          ; 0050a250
    FLD float ptr [ESI + 0x8]           ; 0050a253
    FSTP float ptr [EDI + 0x8]          ; 0050a256
    JMP 0x0050a0bb                      ; 0050a259
        ;   XREF to: 0050a0bb (UNCONDITIONAL_JUMP)  ; LAB_0050a0bb

