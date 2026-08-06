; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet *this_ptr,int index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; Local Variables:
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x50]:1  local_50
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
; XREF[7]:
;   core_game.cpp_CGame_FUN_0049f930 at 0049fe76
;   core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30 at 0049f6f5
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e055
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00502518
;   core_set.cpp_CDemonSet_FUN_005090f0 at 00509127
;   core_set.cpp_CDemonSet_restoreCameraView_FUN_0050e310 at 0050e324
;   core_setdir.cpp_CDemonSet_FUN_005125a0 at 005125d9
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00590422
;   TerminatedCString s_CDemonSet_setCameraView_00590432
;   TerminatedCString s_s_raw_0059045f
;   TerminatedCString s_core_set_cpp_00590466
;   TerminatedCString s_CDemonSet_setCameraView_00590476
;   undefined4 DAT_005b0674
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;   undefined4 DAT_005c11ec
;   undefined4 DAT_005c15b8
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c038f4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   ... and 18 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
;   core_dcamera.cpp_CDemonCamera_FUN_004421b0
;   core_dcamera.cpp_CDemonCamera_FUN_00448310
;   core_dcamera.cpp_CDemonCamera_FUN_00448380
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0
;   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044e830
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
;   core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044e920
;   ... and 19 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005088f0
        ;   Label: core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
    PUSH ESI                            ; 005088f1
    PUSH EDI                            ; 005088f2
    PUSH EBP                            ; 005088f3
    SUB ESP,0xe0                        ; 005088f4
    MOV EBP,dword ptr [ESP + 0xf4]      ; 005088fa
    MOV EDX,dword ptr [ESP + 0xf8]      ; 00508901
    TEST EDX,EDX                        ; 00508908
    JL 0x00508911                       ; 0050890a
        ;   XREF to: 00508911 (CONDITIONAL_JUMP)  ; LAB_00508911
    CMP EDX,dword ptr [EBP]             ; 0050890c
    JL 0x0050893c                       ; 0050890f
        ;   XREF to: 0050893c (CONDITIONAL_JUMP)  ; LAB_0050893c
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00508911
        ;   Label: LAB_00508911
    PUSH EDI                            ; 00508918
    MOV EBX,0x590422                    ; 00508919 | = "..\\core\\set.cpp"
    MOV ESI,0x3ed                       ; 0050891e
    PUSH 0x590432                       ; 00508923 | = "CDemonSet::setCameraView - invalid in..."
    MOV dword ptr [0x01cc4800],EBX      ; 00508928 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 0050892e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00508934
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 00508939
    MOV EAX,[0x01fba2d8]                ; 0050893c | DAT_01fba2d8
        ;   Label: LAB_0050893c
    XOR ESI,ESI                         ; 00508941
    TEST EAX,EAX                        ; 00508943
    JLE 0x00508970                      ; 00508945
        ;   XREF to: 00508970 (CONDITIONAL_JUMP)  ; LAB_00508970
    XOR EBX,EBX                         ; 00508947
    MOV EDX,dword ptr [EBX + 0x1fba2dc] ; 00508949
        ;   Label: LAB_00508949
    PUSH EDX                            ; 0050894f
    ADD EBX,0x4                         ; 00508950
    INC ESI                             ; 00508953
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970 ; 00508954
        ;   XREF to: 0044e970 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(CDemonLight * this_ptr)
    MOV ECX,dword ptr [0x01fba2d8]      ; 00508959 | DAT_01fba2d8
    ADD ESP,0x4                         ; 0050895f
    CMP ESI,ECX                         ; 00508962
    JL 0x00508949                       ; 00508964
        ;   XREF to: 00508949 (CONDITIONAL_JUMP)  ; LAB_00508949
    LEA EAX,[EAX]                       ; 00508966
    LEA EDX,[EDX]                       ; 0050896c
    MOV EBX,dword ptr [0x01fb9b54]      ; 00508970 | DAT_01fb9b54
        ;   Label: LAB_00508970
    XOR ESI,ESI                         ; 00508976
    TEST EBX,EBX                        ; 00508978
    JLE 0x005089a0                      ; 0050897a
        ;   XREF to: 005089a0 (CONDITIONAL_JUMP)  ; LAB_005089a0
    XOR EBX,EBX                         ; 0050897c
    MOV EDI,dword ptr [EBX + 0x1fb9b58] ; 0050897e | DAT_01fb9b58
        ;   Label: LAB_0050897e
    PUSH EDI                            ; 00508984
    ADD EBX,0x4                         ; 00508985
    INC ESI                             ; 00508988
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970 ; 00508989
        ;   XREF to: 0044e970 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(CDemonLight * this_ptr)
    MOV EAX,[0x01fb9b54]                ; 0050898e | DAT_01fb9b54
    ADD ESP,0x4                         ; 00508993
    CMP ESI,EAX                         ; 00508996
    JL 0x0050897e                       ; 00508998
        ;   XREF to: 0050897e (CONDITIONAL_JUMP)  ; LAB_0050897e
    LEA EAX,[EAX]                       ; 0050899a
    MOV EDX,dword ptr [0x01fb9b54]      ; 005089a0 | DAT_01fb9b54
        ;   Label: LAB_005089a0
    XOR ESI,ESI                         ; 005089a6
    TEST EDX,EDX                        ; 005089a8
    JLE 0x005089d0                      ; 005089aa
        ;   XREF to: 005089d0 (CONDITIONAL_JUMP)  ; LAB_005089d0
    XOR EBX,EBX                         ; 005089ac
    MOV ECX,dword ptr [EBX + 0x1fb9b58] ; 005089ae | DAT_01fb9b58
        ;   Label: LAB_005089ae
    PUSH ECX                            ; 005089b4
    ADD EBX,0x4                         ; 005089b5
    INC ESI                             ; 005089b8
    CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440 ; 005089b9
        ;   XREF to: 0044e440 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440(CDemonLight * this_ptr)
    MOV EDI,dword ptr [0x01fb9b54]      ; 005089be | DAT_01fb9b54
    ADD ESP,0x4                         ; 005089c4
    CMP ESI,EDI                         ; 005089c7
    JL 0x005089ae                       ; 005089c9
        ;   XREF to: 005089ae (CONDITIONAL_JUMP)  ; LAB_005089ae
    LEA EAX,[EAX]                       ; 005089cb
    MOV ECX,ECX                         ; 005089ce
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0 ; 005089d0
        ;   XREF to: 0044e3b0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0()
        ;   Label: LAB_005089d0
    PUSH 0x1fb8508                      ; 005089d5
    MOV dword ptr [EBP + 0x15aac4],0x40400000 ; 005089da
    MOV EDX,dword ptr [ESP + 0xfc]      ; 005089e4
    MOV dword ptr [EBP + 0x15a898],0x1  ; 005089eb
    LEA ESI,[EBP + 0x4]                 ; 005089f5
    MOV EAX,dword ptr [EBP + 0x15aabc]  ; 005089f8
    MOV dword ptr [EBP + 0x15f2f8],0x1  ; 005089fe
    LEA EBX,[EDX*0x4 + 0x0]             ; 00508a08
    MOV dword ptr [EBP + 0x15aac0],EAX  ; 00508a0f
    SUB EBX,EDX                         ; 00508a15
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00508a17
    SHL EBX,0x2                         ; 00508a1e
    MOV dword ptr [EBP + 0x15aabc],EAX  ; 00508a21
    ADD EBX,EDX                         ; 00508a27
    XOR EAX,EAX                         ; 00508a29
    SHL EBX,0x5                         ; 00508a2b
    MOV [0x01fb9b54],EAX                ; 00508a2e | DAT_01fb9b54
    ADD ESI,EBX                         ; 00508a33
    MOV [0x01fba9a4],EAX                ; 00508a35 | DAT_01fba9a4
    PUSH ESI                            ; 00508a3a
    MOV [0x01fba2ec],EAX                ; 00508a3b | DAT_01fba2ec
    MOV [0x01fba480],EAX                ; 00508a40 | DAT_01fba480
    CALL core_setutil.cpp_C3DSCamera_FUN_005148b0 ; 00508a45
        ;   XREF to: 005148b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_FUN_005148b0(C3DSCamera * this_ptr, CDemonCamera * camera)
    ADD ESP,0x8                         ; 00508a4a
    LEA EAX,[EBP + 0x15a86c]            ; 00508a4d
    MOV EDI,dword ptr [EBX + EBP*0x1 + 0x150] ; 00508a53
    LEA EDX,[EBP + 0x15a878]            ; 00508a5a
    TEST EDI,EDI                        ; 00508a60
    JZ 0x00508e65                       ; 00508a62
        ;   XREF to: 00508e65 (CONDITIONAL_JUMP)  ; LAB_00508e65
    LEA EBX,[EBP + 0x15a848]            ; 00508a68
    MOV ECX,dword ptr [EBX]             ; 00508a6e
    MOV dword ptr [EAX],ECX             ; 00508a70
    MOV ECX,dword ptr [EBX + 0x4]       ; 00508a72
    MOV ESI,EAX                         ; 00508a75
    MOV dword ptr [EAX + 0x4],ECX       ; 00508a77
    MOV EDI,EBX                         ; 00508a7a
    MOV ECX,dword ptr [EBX + 0x8]       ; 00508a7c
    ADD EBX,0xc                         ; 00508a7f
    MOV dword ptr [EAX + 0x8],ECX       ; 00508a82
    CMP EDX,EBX                         ; 00508a85
    JZ 0x00508a99                       ; 00508a87
        ;   XREF to: 00508a99 (CONDITIONAL_JUMP)  ; LAB_00508a99
    MOV EAX,dword ptr [EBX]             ; 00508a89
    MOV dword ptr [EDX],EAX             ; 00508a8b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00508a8d
    MOV dword ptr [EDX + 0x4],EAX       ; 00508a90
    MOV EAX,dword ptr [EBX + 0x8]       ; 00508a93
    MOV dword ptr [EDX + 0x8],EAX       ; 00508a96
    MOV EAX,dword ptr [EDI + 0x18]      ; 00508a99
        ;   Label: LAB_00508a99
    MOV dword ptr [ESI + 0x18],EAX      ; 00508a9c
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00508a9f
    MOV dword ptr [ESI + 0x1c],EAX      ; 00508aa2
    MOV EAX,dword ptr [EDI + 0x20]      ; 00508aa5
    MOV dword ptr [ESI + 0x20],EAX      ; 00508aa8
    LEA EAX,[EBP + 0x15a86c]            ; 00508aab
        ;   Label: LAB_00508aab
    PUSH EAX                            ; 00508ab1
    PUSH 0x1fb8508                      ; 00508ab2
    XOR EBX,EBX                         ; 00508ab7
    CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0 ; 00508ab9
        ;   XREF to: 004474e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0(CDemonCamera * this_ptr, SFog * fog_config)
    ADD ESP,0x8                         ; 00508abe
    XOR EAX,EAX                         ; 00508ac1
    MOV EDX,dword ptr [EBP + 0x14cd6c]  ; 00508ac3
    MOV [0x01fba938],EAX                ; 00508ac9 | g_CDemonRaytrace_01fba938
    TEST EDX,EDX                        ; 00508ace
    JLE 0x00508b00                      ; 00508ad0
        ;   XREF to: 00508b00 (CONDITIONAL_JUMP)  ; LAB_00508b00
    MOV ESI,EBP                         ; 00508ad2
    MOV ECX,dword ptr [ESI + 0x14cd70]  ; 00508ad4
        ;   Label: LAB_00508ad4
    PUSH ECX                            ; 00508ada
    PUSH EBP                            ; 00508adb
    ADD ESI,0x4                         ; 00508adc
    INC EBX                             ; 00508adf
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890 ; 00508ae0
        ;   XREF to: 00508890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDI,dword ptr [EBP + 0x14cd6c]  ; 00508ae5
    ADD ESP,0x8                         ; 00508aeb
    CMP EBX,EDI                         ; 00508aee
    JL 0x00508ad4                       ; 00508af0
        ;   XREF to: 00508ad4 (CONDITIONAL_JUMP)  ; LAB_00508ad4
    LEA EAX,[EAX]                       ; 00508af2
    LEA EDX,[EDX]                       ; 00508af8
    MOV EAX,EAX                         ; 00508afe
    PUSH 0x0                            ; 00508b00
        ;   Label: LAB_00508b00
    PUSH 0x1fb8508                      ; 00508b02
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 ; 00508b07
        ;   XREF to: 00440290 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00508b0c
    PUSH 0x1fb8508                      ; 00508b0f
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20 ; 00508b14
        ;   XREF to: 00440b20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00508b19
    PUSH 0x10                           ; 00508b1c
    PUSH EBP                            ; 00508b1e
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 ; 00508b1f
        ;   XREF to: 0050d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 00508b24
    PUSH 0x1                            ; 00508b27
    PUSH 0x461c3f9a                     ; 00508b29
    PUSH EBP                            ; 00508b2e
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 ; 00508b2f
        ;   XREF to: 00507c80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00508b34
    PUSH 0x1fb8508                      ; 00508b37
    CALL core_dcamera.cpp_CDemonCamera_FUN_00448310 ; 00508b3c
        ;   XREF to: 00448310 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_FUN_00448310(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00508b41
    MOV EAX,0x1                         ; 00508b44
    PUSH EAX                            ; 00508b49
    PUSH EBP                            ; 00508b4a
    MOV [0x01ffb060],EAX                ; 00508b4b | DAT_01ffb060
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 ; 00508b50
        ;   XREF to: 00508750 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00508b55
    XOR EDX,EDX                         ; 00508b58
    PUSH 0x1fb8508                      ; 00508b5a
    MOV dword ptr [0x01ffb060],EDX      ; 00508b5f | DAT_01ffb060
    CALL core_dcamera.cpp_CDemonCamera_FUN_004421b0 ; 00508b65
        ;   XREF to: 004421b0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_FUN_004421b0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00508b6a
    PUSH 0x1fb8508                      ; 00508b6d
    CALL core_dcamera.cpp_CDemonCamera_FUN_00448380 ; 00508b72
        ;   XREF to: 00448380 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_FUN_00448380(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00508b77
    MOV EDX,dword ptr [ESP + 0xf8]      ; 00508b7a
    LEA EAX,[EDX*0x4 + 0x0]             ; 00508b81
    SUB EAX,EDX                         ; 00508b88
    SHL EAX,0x2                         ; 00508b8a
    ADD EAX,EDX                         ; 00508b8d
    SHL EAX,0x5                         ; 00508b8f
    LEA EDX,[EBP + 0x4]                 ; 00508b92
    ADD EAX,EDX                         ; 00508b95
    PUSH EAX                            ; 00508b97
    PUSH 0x59045f                       ; 00508b98 | = "%s.raw"
    LEA EAX,[ESP + 0x8]                 ; 00508b9d
    PUSH EAX                            ; 00508ba1
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00508ba2
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00508ba7
    MOV EAX,ESP                         ; 00508baa
    PUSH EAX                            ; 00508bac
    PUSH 0x1fb8508                      ; 00508bad
    CALL core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250 ; 00508bb2
        ;   XREF to: 00443250 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250(CDemonCamera * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00508bb7
    PUSH 0x1                            ; 00508bba
    PUSH EBP                            ; 00508bbc
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 ; 00508bbd
        ;   XREF to: 00508750 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00508bc2
    PUSH 0x0                            ; 00508bc5
    PUSH 0x1fb8508                      ; 00508bc7
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50 ; 00508bcc
        ;   XREF to: 00440c50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(CDemonCamera * this_ptr, int restore_zbuffer)
    MOV ECX,dword ptr [0x01c02594]      ; 00508bd1 | DAT_01c02594
    ADD ESP,0x8                         ; 00508bd7
    TEST ECX,ECX                        ; 00508bda
    JZ 0x00508c0e                       ; 00508bdc
        ;   XREF to: 00508c0e (CONDITIONAL_JUMP)  ; LAB_00508c0e
    PUSH 0x0                            ; 00508bde
    PUSH 0x461c3f9a                     ; 00508be0
    PUSH EBP                            ; 00508be5
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 ; 00508be6
        ;   XREF to: 00507c80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    MOV EAX,[0x005c11ec]                ; 00508beb | DAT_005c11ec
    MOV EBX,dword ptr [EAX]             ; 00508bf0 | g_CWater_02dd1210
    ADD ESP,0xc                         ; 00508bf2
    TEST EBX,EBX                        ; 00508bf5
    JNZ 0x00508c03                      ; 00508bf7
        ;   XREF to: 00508c03 (CONDITIONAL_JUMP)  ; LAB_00508c03
    PUSH EBX                            ; 00508bf9
    PUSH EAX                            ; 00508bfa | g_CWater_02dd1210
    CALL core_water.cpp_CWater_render_FUN_00550cb0 ; 00508bfb
        ;   XREF to: 00550cb0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_00550cb0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 00508c00
    PUSH 0x1                            ; 00508c03
        ;   Label: LAB_00508c03
    PUSH EBP                            ; 00508c05
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 ; 00508c06
        ;   XREF to: 00508750 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00508c0b
    PUSH 0x0                            ; 00508c0e
        ;   Label: LAB_00508c0e
    PUSH 0x1fb8508                      ; 00508c10
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 ; 00508c15
        ;   XREF to: 00440a20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    MOV ESI,dword ptr [EBP + 0x15a89c]  ; 00508c1a
    ADD ESP,0x8                         ; 00508c20
    TEST ESI,ESI                        ; 00508c23
    JZ 0x00508ead                       ; 00508c25
        ;   XREF to: 00508ead (CONDITIONAL_JUMP)  ; LAB_00508ead
    LEA EAX,[EAX]                       ; 00508c2b
    MOV ECX,ECX                         ; 00508c2e
    PUSH 0x1                            ; 00508c30
        ;   Label: LAB_00508c30
    PUSH 0x1fb8508                      ; 00508c32
    MOV dword ptr [EBP + 0x15a898],0x0  ; 00508c37
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 ; 00508c41
        ;   XREF to: 00440290 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00508c46
    PUSH 0x1fb8508                      ; 00508c49
    XOR ESI,ESI                         ; 00508c4e
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20 ; 00508c50
        ;   XREF to: 00440b20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00508c55
    MOV EDI,dword ptr [EBP + 0x161240]  ; 00508c58
    MOV dword ptr [0x01c038f4],ESI      ; 00508c5e | DAT_01c038f4
    TEST EDI,EDI                        ; 00508c64
    JZ 0x00508c85                       ; 00508c66
        ;   XREF to: 00508c85 (CONDITIONAL_JUMP)  ; LAB_00508c85
    MOV EAX,dword ptr [EBP + 0x161264]  ; 00508c68
    PUSH EAX                            ; 00508c6e
    LEA EAX,[EBP + 0x161244]            ; 00508c6f
    PUSH EAX                            ; 00508c75
    MOV EDX,dword ptr [0x005b0674]      ; 00508c76 | DAT_005b0674
    PUSH EDX                            ; 00508c7c
    CALL core_dskybox.cpp_renderSkyDome_FUN_00463580 ; 00508c7d
        ;   XREF to: 00463580 (UNCONDITIONAL_CALL)  ; void core_dskybox.cpp_renderSkyDome_FUN_00463580(SMRGLSkyTexture * sky_texture, char * texture_name, int brightness_factor)
    ADD ESP,0xc                         ; 00508c82
    PUSH 0x1                            ; 00508c85
        ;   Label: LAB_00508c85
    PUSH EBP                            ; 00508c87
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 ; 00508c88
        ;   XREF to: 00508750 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00508c8d
    PUSH 0x1                            ; 00508c90
    MOV ECX,dword ptr [0x005b96c4]      ; 00508c92 | g_CGore_PTR_005b96c4
    PUSH ECX                            ; 00508c98
    CALL core_gore.cpp_CGore_renderDecals_FUN_004afe80 ; 00508c99
        ;   XREF to: 004afe80 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004afe80(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0x8                         ; 00508c9e
    PUSH 0x1                            ; 00508ca1
    MOV EBX,dword ptr [0x005b80f0]      ; 00508ca3 | g_CFireEffect_PTR_005b80f0
    PUSH EBX                            ; 00508ca9
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970 ; 00508caa
        ;   XREF to: 0048a970 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970(CFireEffect * this_ptr, int render_mode, int render_completeness)
    MOV EAX,[0x005c11ec]                ; 00508caf | DAT_005c11ec
    MOV ESI,dword ptr [EAX]             ; 00508cb4 | g_CWater_02dd1210
    ADD ESP,0x8                         ; 00508cb6
    TEST ESI,ESI                        ; 00508cb9
    JNZ 0x00508cc7                      ; 00508cbb
        ;   XREF to: 00508cc7 (CONDITIONAL_JUMP)  ; LAB_00508cc7
    PUSH ESI                            ; 00508cbd
    PUSH EAX                            ; 00508cbe | g_CWater_02dd1210
    CALL core_water.cpp_CWater_render_FUN_00550cb0 ; 00508cbf
        ;   XREF to: 00550cb0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_00550cb0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 00508cc4
    PUSH 0x0                            ; 00508cc7
        ;   Label: LAB_00508cc7
    PUSH 0x1fb8508                      ; 00508cc9
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50 ; 00508cce
        ;   XREF to: 00440c50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(CDemonCamera * this_ptr, int restore_zbuffer)
    ADD ESP,0x8                         ; 00508cd3
    PUSH 0x0                            ; 00508cd6
    PUSH 0x1fb8508                      ; 00508cd8
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 ; 00508cdd
        ;   XREF to: 00440a20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 00508ce2
    PUSH EBP                            ; 00508ce5
    MOV dword ptr [EBP + 0x15f2f8],0x0  ; 00508ce6
    CALL core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 ; 00508cf0
        ;   XREF to: 00509760 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00508cf5
    MOV EDX,dword ptr [ESP + 0xf8]      ; 00508cf8
    LEA EAX,[EDX*0x4 + 0x0]             ; 00508cff
    SUB EAX,EDX                         ; 00508d06
    SHL EAX,0x2                         ; 00508d08
    ADD EAX,EDX                         ; 00508d0b
    SHL EAX,0x5                         ; 00508d0d
    ADD EAX,EBP                         ; 00508d10
    CMP dword ptr [EAX + 0x150],0x0     ; 00508d12
    JZ 0x00509088                       ; 00508d19
        ;   XREF to: 00509088 (CONDITIONAL_JUMP)  ; LAB_00509088
    MOV EBX,dword ptr [EBP + 0x15a894]  ; 00508d1f
    PUSH EBX                            ; 00508d25
    MOV ESI,dword ptr [0x005bed68]      ; 00508d26 | g_CSound_PTR_005bed68
    PUSH ESI                            ; 00508d2c
    CALL core_sound.cpp_CSound_setReverbPreset_FUN_0052ece0 ; 00508d2d
        ;   XREF to: 0052ece0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_setReverbPreset_FUN_0052ece0(CSound * this_ptr, int index)
        ;   Label: LAB_00508d2d
    ADD ESP,0x8                         ; 00508d32
    MOV EAX,[0x01fb860c]                ; 00508d35 | g_CDemonCamera_01fb8508.position.x
    MOV dword ptr [ESP + 0xc4],EAX      ; 00508d3a
    MOV EAX,0x1fb860c                   ; 00508d41
    MOV EAX,dword ptr [EAX + 0x4]       ; 00508d46 | g_CDemonCamera_01fb8508.position.y
    MOV dword ptr [ESP + 0xc8],EAX      ; 00508d49
    MOV EAX,0x1fb860c                   ; 00508d50
    MOV EAX,dword ptr [EAX + 0x8]       ; 00508d55 | g_CDemonCamera_01fb8508.position.z
    LEA EDX,[ESP + 0xc4]                ; 00508d58
    MOV dword ptr [ESP + 0xcc],EAX      ; 00508d5f
    LEA EAX,[ESP + 0xac]                ; 00508d66
    CMP EAX,EDX                         ; 00508d6d
    JZ 0x00508d9b                       ; 00508d6f
        ;   XREF to: 00508d9b (CONDITIONAL_JUMP)  ; LAB_00508d9b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00508d71
    MOV dword ptr [ESP + 0xac],EAX      ; 00508d78
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00508d7f
    MOV dword ptr [ESP + 0xb0],EAX      ; 00508d86
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00508d8d
    MOV dword ptr [ESP + 0xb4],EAX      ; 00508d94
    MOV ECX,0xa                         ; 00508d9b
        ;   Label: LAB_00508d9b
    LEA EDI,[ESP + 0x50]                ; 00508da0
    MOV ESI,0x1fb8618                   ; 00508da4
    LEA EAX,[ESP + 0xa0]                ; 00508da9
    MOVSD.REP ES:EDI,ESI                ; 00508db0 | g_CDemonCamera_01fb8508.rotation_matrix.m[0].x | g_CDemonCamera_01fb8508.rotation_matrix.m[0].y
    PUSH EAX                            ; 00508db2
    MOV ECX,0xa                         ; 00508db3
    LEA EDI,[ESP + 0x7c]                ; 00508db8
    LEA EAX,[ESP + 0x7c]                ; 00508dbc
    LEA ESI,[ESP + 0x54]                ; 00508dc0
    PUSH EAX                            ; 00508dc4
    MOVSD.REP ES:EDI,ESI                ; 00508dc5
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 ; 00508dc7
        ;   XREF to: 0044dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EDX,EAX                         ; 00508dcc
    LEA EAX,[ESP + 0xc0]                ; 00508dce
    ADD ESP,0x8                         ; 00508dd5
    CMP EAX,EDX                         ; 00508dd8
    JZ 0x00508df9                       ; 00508dda
        ;   XREF to: 00508df9 (CONDITIONAL_JUMP)  ; LAB_00508df9
    MOV EAX,dword ptr [EDX]             ; 00508ddc
    MOV dword ptr [ESP + 0xb8],EAX      ; 00508dde
    MOV EAX,dword ptr [EDX + 0x4]       ; 00508de5
    MOV dword ptr [ESP + 0xbc],EAX      ; 00508de8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00508def
    MOV dword ptr [ESP + 0xc0],EAX      ; 00508df2
    LEA EAX,[ESP + 0xb8]                ; 00508df9
        ;   Label: LAB_00508df9
    PUSH EAX                            ; 00508e00
    LEA EAX,[ESP + 0xb0]                ; 00508e01
    PUSH EAX                            ; 00508e08
    MOV EDI,dword ptr [0x005c15b8]      ; 00508e09 | DAT_005c15b8
    PUSH EDI                            ; 00508e0f
    XOR ESI,ESI                         ; 00508e10
    CALL core_weather.cpp_CWeather_setOriginAndRotation_FUN_005557d0 ; 00508e12
        ;   XREF to: 005557d0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setOriginAndRotation_FUN_005557d0(CWeather * this_ptr, CVector3f * direction, CVector3f * rotation)
    MOV EAX,dword ptr [EBP + 0x14cd6c]  ; 00508e17
    ADD ESP,0xc                         ; 00508e1d
    TEST EAX,EAX                        ; 00508e20
    JLE 0x00508e50                      ; 00508e22
        ;   XREF to: 00508e50 (CONDITIONAL_JUMP)  ; LAB_00508e50
    MOV EBX,EBP                         ; 00508e24
    MOV EDX,dword ptr [EBX + 0x14cd70]  ; 00508e26
        ;   Label: LAB_00508e26
    PUSH EDX                            ; 00508e2c
    PUSH EBP                            ; 00508e2d
    ADD EBX,0x4                         ; 00508e2e
    INC ESI                             ; 00508e31
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890 ; 00508e32
        ;   XREF to: 00508890 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBP + 0x14cd6c]  ; 00508e37
    ADD ESP,0x8                         ; 00508e3d
    CMP ESI,ECX                         ; 00508e40
    JL 0x00508e26                       ; 00508e42
        ;   XREF to: 00508e26 (CONDITIONAL_JUMP)  ; LAB_00508e26
    LEA EAX,[EAX]                       ; 00508e44
    LEA EDX,[EDX]                       ; 00508e4a
    MOV dword ptr [0x01ffb074],0x1      ; 00508e50 | DAT_01ffb074
        ;   Label: LAB_00508e50
    ADD ESP,0xe0                        ; 00508e5a
    POP EBP                             ; 00508e60
    POP EDI                             ; 00508e61
    POP ESI                             ; 00508e62
    POP EBX                             ; 00508e63
    RET                                 ; 00508e64
    LEA EBX,[ESI + 0x150]               ; 00508e65
        ;   Label: LAB_00508e65
    MOV ECX,dword ptr [EBX]             ; 00508e6b
    MOV dword ptr [EAX],ECX             ; 00508e6d
    MOV ECX,dword ptr [EBX + 0x4]       ; 00508e6f
    MOV EDI,EAX                         ; 00508e72
    MOV dword ptr [EAX + 0x4],ECX       ; 00508e74
    MOV ESI,EBX                         ; 00508e77
    MOV ECX,dword ptr [EBX + 0x8]       ; 00508e79
    ADD EBX,0xc                         ; 00508e7c
    MOV dword ptr [EAX + 0x8],ECX       ; 00508e7f
    CMP EDX,EBX                         ; 00508e82
    JZ 0x00508e96                       ; 00508e84
        ;   XREF to: 00508e96 (CONDITIONAL_JUMP)  ; LAB_00508e96
    MOV EAX,dword ptr [EBX]             ; 00508e86
    MOV dword ptr [EDX],EAX             ; 00508e88
    MOV EAX,dword ptr [EBX + 0x4]       ; 00508e8a
    MOV dword ptr [EDX + 0x4],EAX       ; 00508e8d
    MOV EAX,dword ptr [EBX + 0x8]       ; 00508e90
    MOV dword ptr [EDX + 0x8],EAX       ; 00508e93
    MOV EAX,dword ptr [ESI + 0x18]      ; 00508e96
        ;   Label: LAB_00508e96
    MOV dword ptr [EDI + 0x18],EAX      ; 00508e99
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00508e9c
    MOV dword ptr [EDI + 0x1c],EAX      ; 00508e9f
    MOV EAX,dword ptr [ESI + 0x20]      ; 00508ea2
    MOV dword ptr [EDI + 0x20],EAX      ; 00508ea5
    JMP 0x00508aab                      ; 00508ea8
        ;   XREF to: 00508aab (UNCONDITIONAL_JUMP)  ; LAB_00508aab
    MOV EAX,dword ptr [EBP + 0x19644]   ; 00508ead
        ;   Label: LAB_00508ead
    MOV dword ptr [ESP + 0xdc],ESI      ; 00508eb3
    TEST EAX,EAX                        ; 00508eba
    JLE 0x00508f80                      ; 00508ebc
        ;   XREF to: 00508f80 (CONDITIONAL_JUMP)  ; LAB_00508f80
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00508ec2
    SHL EAX,0x4                         ; 00508ec9
    MOV dword ptr [ESP + 0xd0],EAX      ; 00508ecc
    LEA EAX,[EBP + 0x19648]             ; 00508ed3
    MOV dword ptr [ESP + 0xd4],EAX      ; 00508ed9
    MOV EBX,EBP                         ; 00508ee0
    IMUL EDI,dword ptr [ESP + 0xdc],0x1898 ; 00508ee2
        ;   Label: LAB_00508ee2
    CMP dword ptr [EBX + 0x19648],0x1   ; 00508eed
    JNZ 0x00508f50                      ; 00508ef4
        ;   XREF to: 00508f50 (CONDITIONAL_JUMP)  ; LAB_00508f50
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00508ef6
    CMP byte ptr [EBX + EAX*0x1 + 0x19770],0x0 ; 00508efd
    JZ 0x00508f50                       ; 00508f05
        ;   XREF to: 00508f50 (CONDITIONAL_JUMP)  ; LAB_00508f50
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00508f07
    MOV EAX,[0x01fba9a4]                ; 00508f0e | DAT_01fba9a4
    ADD EDI,ECX                         ; 00508f13
    MOV dword ptr [EAX*0x4 + 0x1fba9a8],EDI ; 00508f15 | DAT_01fba9a8 | DAT_01fba9ac
    LEA EDI,[EAX + 0x1]                 ; 00508f1c
    MOV dword ptr [0x01fba9a4],EDI      ; 00508f1f | DAT_01fba9a4
    CMP EDI,0xc8                        ; 00508f25
    JL 0x00508f50                       ; 00508f2b
        ;   XREF to: 00508f50 (CONDITIONAL_JUMP)  ; LAB_00508f50
    MOV EDX,0x590466                    ; 00508f2d | = "..\\core\\set.cpp"
    MOV ECX,0x460                       ; 00508f32
    PUSH 0x590476                       ; 00508f37 | = "CDemonSet::setCameraView - Too many o..."
    MOV dword ptr [0x01cc4800],EDX      ; 00508f3c | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00508f42 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00508f48
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00508f4d
    CMP dword ptr [EBX + 0x19648],0x0   ; 00508f50
        ;   Label: LAB_00508f50
    JZ 0x0050902a                       ; 00508f57
        ;   XREF to: 0050902a (CONDITIONAL_JUMP)  ; LAB_0050902a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00508f5d
        ;   Label: LAB_00508f5d
    ADD EBX,0x1898                      ; 00508f64
    INC EDX                             ; 00508f6a
    MOV ECX,dword ptr [EBP + 0x19644]   ; 00508f6b
    MOV dword ptr [ESP + 0xdc],EDX      ; 00508f71
    CMP EDX,ECX                         ; 00508f78
    JL 0x00508ee2                       ; 00508f7a
        ;   XREF to: 00508ee2 (CONDITIONAL_JUMP)  ; LAB_00508ee2
    PUSH EBP                            ; 00508f80
        ;   Label: LAB_00508f80
    CALL core_set.cpp_CDemonSet_process_FUN_0050d040 ; 00508f81
        ;   XREF to: 0050d040 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_process_FUN_0050d040(CDemonSet * this_ptr)
    XOR ESI,ESI                         ; 00508f86
    MOV EBX,dword ptr [0x01fb9b54]      ; 00508f88 | DAT_01fb9b54
    ADD ESP,0x4                         ; 00508f8e
    TEST EBX,EBX                        ; 00508f91
    JLE 0x00508c30                      ; 00508f93
        ;   XREF to: 00508c30 (CONDITIONAL_JUMP)  ; LAB_00508c30
    MOV EDI,0x1fb9cd8                   ; 00508f99
    MOV dword ptr [ESP + 0xd8],ESI      ; 00508f9e
    MOV EBX,dword ptr [ESP + 0xd8]      ; 00508fa5
        ;   Label: LAB_00508fa5
    MOV EBX,dword ptr [EBX + 0x1fb9b58] ; 00508fac
    PUSH EBX                            ; 00508fb2
    CALL core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0 ; 00508fb3
        ;   XREF to: 0044e3c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00508fb8
    PUSH 0x1                            ; 00508fbb
    PUSH EBX                            ; 00508fbd
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 ; 00508fbe
        ;   XREF to: 0044e470 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00508fc3
    PUSH EBX                            ; 00508fc6
    CALL core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044e830 ; 00508fc7
        ;   XREF to: 0044e830 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00508fcc
    PUSH 0x1                            ; 00508fcf
    PUSH EBP                            ; 00508fd1
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750 ; 00508fd2
        ;   XREF to: 00508750 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00508fd7
    PUSH EBX                            ; 00508fda
    CALL core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044e920 ; 00508fdb
        ;   XREF to: 0044e920 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044e920(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00508fe0
    PUSH 0x0                            ; 00508fe3
    PUSH EBX                            ; 00508fe5
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044e720 ; 00508fe6
        ;   XREF to: 0044e720 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044e720(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 00508feb
    PUSH EBX                            ; 00508fee
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970 ; 00508fef
        ;   XREF to: 0044e970 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00508ff4
    PUSH EDI                            ; 00508ff7
    PUSH EBX                            ; 00508ff8
    PUSH 0x1fb8508                      ; 00508ff9
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50 ; 00508ffe
        ;   XREF to: 00441c50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 00509003
    INC ESI                             ; 00509006
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00509007
    ADD EDI,0x10                        ; 0050900e
    ADD EDX,0x4                         ; 00509011
    MOV ECX,dword ptr [0x01fb9b54]      ; 00509014 | DAT_01fb9b54
    MOV dword ptr [ESP + 0xd8],EDX      ; 0050901a
    CMP ESI,ECX                         ; 00509021
    JL 0x00508fa5                       ; 00509023
        ;   XREF to: 00508fa5 (CONDITIONAL_JUMP)  ; LAB_00508fa5
    JMP 0x00508c30                      ; 00509025
        ;   XREF to: 00508c30 (UNCONDITIONAL_JUMP)  ; LAB_00508c30
    MOV EDI,dword ptr [ESP + 0xf8]      ; 0050902a
        ;   Label: LAB_0050902a
    MOV DH,byte ptr [EDI + EBX*0x1 + 0x19770] ; 00509031
    LEA EAX,[ESI + 0x1]                 ; 00509038
    TEST DH,DH                          ; 0050903b
    JNZ 0x00509046                      ; 0050903d
        ;   XREF to: 00509046 (CONDITIONAL_JUMP)  ; LAB_00509046
    MOV ESI,EAX                         ; 0050903f
    JMP 0x00508f5d                      ; 00509041
        ;   XREF to: 00508f5d (UNCONDITIONAL_JUMP)  ; LAB_00508f5d
    MOV EDX,dword ptr [0x01fb9b54]      ; 00509046 | DAT_01fb9b54
        ;   Label: LAB_00509046
    MOV ESI,dword ptr [ESI*0x4 + 0x1fb99d4] ; 0050904c | DAT_01fb99d4
    MOV dword ptr [EDX*0x4 + 0x1fb9b58],ESI ; 00509053 | DAT_01fb9b58
    MOV ESI,dword ptr [0x01fb9b54]      ; 0050905a | DAT_01fb9b54
    SHL ESI,0x4                         ; 00509060
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00509063
    LEA EDI,[ESI + 0x1fb9cd8]           ; 0050906a
    LEA ESI,[EDX + EBX*0x1 + 0x1986c]   ; 00509070
    MOVSD ES:EDI,ESI                    ; 00509077
    MOVSD ES:EDI,ESI                    ; 00509078
    MOVSD ES:EDI,ESI                    ; 00509079
    MOVSD ES:EDI,ESI                    ; 0050907a
    MOV ESI,EAX                         ; 0050907b
    INC dword ptr [0x01fb9b54]          ; 0050907d | DAT_01fb9b54
    JMP 0x00508f5d                      ; 00509083
        ;   XREF to: 00508f5d (UNCONDITIONAL_JUMP)  ; LAB_00508f5d
    MOV EDX,dword ptr [EAX + 0x178]     ; 00509088
        ;   Label: LAB_00509088
    PUSH EDX                            ; 0050908e
    MOV ECX,dword ptr [0x005bed68]      ; 0050908f | g_CSound_PTR_005bed68
    PUSH ECX                            ; 00509095
    JMP 0x00508d2d                      ; 00509096
        ;   XREF to: 00508d2d (UNCONDITIONAL_JUMP)  ; LAB_00508d2d

