; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setedit_cpp_CDemonSet_positionLight_FUN_0057ae50(CDemonSet *this_ptr,C3DSLight *light)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; C3DSLight *      Stack[0x8]:4   light
; Local Variables:
; char[100]        Stack[-0x84]:100  local_84
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_setedit.cpp_CDemonSet_addSpotLight_FUN_0057b410 at 0057b465
;   core_setedit.cpp_CDemonSet_cloneLight_FUN_0057b600 at 0057b85d
;   core_setedit.cpp_CDemonSet_editSpotLight_FUN_0057b500 at 0057b572
;
; Referenced Globals:
;   TerminatedCString s_Position_light_Press_SPA_006476d7
;   TerminatedCString s_f_006476fe
;   TerminatedCString s_pos_4_1f_4_1f_4_1f_pbh_3_00647701
;   TerminatedCString s_Too_many_visible_lights__0064773f
;   TerminatedCString s_Edit_FOV_00647760
;   TerminatedCString s_Edit_light_name_00647769
;   double DOUBLE_0064777d = 65536
;   double DOUBLE_00647785 = 0.318309886192889
;   double DOUBLE_0064778d = 180
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CSlew* g_CSlewPtr = 03f48f84
;   CEditorTools g_CEditorToolsInstance
;   ... and 20 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0
;   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDT_FUN_004d7d90
;   core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;   core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0
;   core_slew.cpp_CSlew_free_FUN_005a20a0
;   core_slew.cpp_CSlew_init_FUN_005a2060
;   core_slew.cpp_CSlew_processInput_FUN_005a20b0
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ae50
        ;   Label: core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50
    PUSH ESI                            ; 0057ae51
    PUSH EDI                            ; 0057ae52
    PUSH EBP                            ; 0057ae53
    MOV EBP,ESP                         ; 0057ae54
    SUB ESP,0x178                       ; 0057ae56
    NOP                                 ; 0057ae5c
    NOP                                 ; 0057ae5d
    NOP                                 ; 0057ae5e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057ae5f
    MOV EDX,0x1                         ; 0057ae62
    PUSH 0x2d7eaf0                      ; 0057ae67 | g_CDemonLightInstance
    XOR ECX,ECX                         ; 0057ae6c
    MOV EAX,dword ptr [EAX + 0x11e0]    ; 0057ae6e
    MOV dword ptr [EBP + -0x8],EDX      ; 0057ae74
    NOP                                 ; 0057ae77
    NOP                                 ; 0057ae78
    NOP                                 ; 0057ae79
    NOP                                 ; 0057ae7a
    MOV dword ptr [EBP + -0x10],EAX     ; 0057ae7b
    NOP                                 ; 0057ae7e
    NOP                                 ; 0057ae7f
    NOP                                 ; 0057ae80
    NOP                                 ; 0057ae81
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057ae82
    MOV dword ptr [EBP + -0x4],ECX      ; 0057ae85
    NOP                                 ; 0057ae88
    NOP                                 ; 0057ae89
    NOP                                 ; 0057ae8a
    NOP                                 ; 0057ae8b
    MOV dword ptr [EBP + -0xc],ECX      ; 0057ae8c
    NOP                                 ; 0057ae8f
    NOP                                 ; 0057ae90
    NOP                                 ; 0057ae91
    NOP                                 ; 0057ae92
    MOV dword ptr [EAX + 0x11e0],0x0    ; 0057ae93
    CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0 ; 0057ae9d
        ;   XREF to: 004727c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0057aea2
    XOR EBX,EBX                         ; 0057aea5
    PUSH EBX                            ; 0057aea7
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057aea8
    MOV ESI,0x437f0000                  ; 0057aeab
    PUSH EDI                            ; 0057aeb0
    MOV dword ptr [0x02d7ec30],ESI      ; 0057aeb1 | g_CDemonLightInstance.base.max_distance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0057aeb7
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0057aebc
    MOV EAX,[0x00681ab8]                ; 0057aebf | g_CSlewInstance | g_CSlewPtr
    PUSH EAX                            ; 0057aec4 | g_CSlewInstance
    MOV dword ptr [EDI + 0x14d154],EBX  ; 0057aec5
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0057aecb
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0057aed0
    MOV EDX,dword ptr [0x0067b654]      ; 0057aed3 | g_CGameInstance | g_CGamePtr
    PUSH EDX                            ; 0057aed9 | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0057aeda
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 0057aedf
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057aee2
    MOV EAX,[0x00681ab8]                ; 0057aee5 | g_CSlewPtr
    ADD EDX,0x104                       ; 0057aeea
    CMP EAX,EDX                         ; 0057aef0
    JNZ 0x0057b2e0                      ; 0057aef2
        ;   XREF to: 0057b2e0 (CONDITIONAL_JUMP)  ; LAB_0057b2e0
    MOV EDX,dword ptr [0x00681ab8]      ; 0057aef8 | g_CSlewPtr
        ;   Label: LAB_0057aef8
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057aefe
    ADD EDX,0xc                         ; 0057af01
    ADD EAX,0x110                       ; 0057af04
    CMP EDX,EAX                         ; 0057af09
    JZ 0x0057af1d                       ; 0057af0b
        ;   XREF to: 0057af1d (CONDITIONAL_JUMP)  ; LAB_0057af1d
    MOV ECX,dword ptr [EAX]             ; 0057af0d
    MOV dword ptr [EDX],ECX             ; 0057af0f | g_CSlewInstance.pitch
    MOV ECX,dword ptr [EAX + 0x4]       ; 0057af11
    MOV dword ptr [EDX + 0x4],ECX       ; 0057af14 | g_CSlewInstance.yaw
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057af17
    MOV dword ptr [EDX + 0x8],ECX       ; 0057af1a | g_CSlewInstance.roll
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057af1d
        ;   Label: LAB_0057af1d
    LEA EDI,[EBP + -0x74]               ; 0057af20
    NOP                                 ; 0057af23
    NOP                                 ; 0057af24
    NOP                                 ; 0057af25
    NOP                                 ; 0057af26
    MOV EAX,[0x00681ab8]                ; 0057af27 | g_CSlewPtr
    FLD float ptr [EDX + 0x11c]         ; 0057af2c
    LEA ESI,[EDX + 0x4]                 ; 0057af32
    FSTP float ptr [EAX + 0x18]         ; 0057af35 | g_CSlewInstance.slew_rate
    PUSH EDI                            ; 0057af38
    MOV AL,byte ptr [ESI]               ; 0057af39
        ;   Label: LAB_0057af39
    MOV byte ptr [EDI],AL               ; 0057af3b
    CMP AL,0x0                          ; 0057af3d
    JZ 0x0057af51                       ; 0057af3f
        ;   XREF to: 0057af51 (CONDITIONAL_JUMP)  ; LAB_0057af51
    MOV AL,byte ptr [ESI + 0x1]         ; 0057af41
    ADD ESI,0x2                         ; 0057af44
    MOV byte ptr [EDI + 0x1],AL         ; 0057af47
    ADD EDI,0x2                         ; 0057af4a
    CMP AL,0x0                          ; 0057af4d
    JNZ 0x0057af39                      ; 0057af4f
        ;   XREF to: 0057af39 (CONDITIONAL_JUMP)  ; LAB_0057af39
    POP EDI                             ; 0057af51
        ;   Label: LAB_0057af51
    CMP dword ptr [0x00679398],0x1e0    ; 0057af52 | g_WindowHeight
    JGE 0x0057b2f5                      ; 0057af5c
        ;   XREF to: 0057b2f5 (CONDITIONAL_JUMP)  ; LAB_0057b2f5
    MOV EDI,0x2d7eaf0                   ; 0057af62 | g_CDemonLightInstance
        ;   Label: LAB_0057af62
    CMP dword ptr [0x00679398],0x1e0    ; 0057af67 | g_WindowHeight
        ;   Label: LAB_0057af67
    JL 0x0057af78                       ; 0057af71
        ;   XREF to: 0057af78 (CONDITIONAL_JUMP)  ; LAB_0057af78
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0057af73
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,[0x0067cf44]                ; 0057af78 | g_CKeysPtr
        ;   Label: LAB_0057af78
    PUSH EAX                            ; 0057af7d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057af7e | g_CKeysInstance
    CALL dword ptr [EDX + 0x8]          ; 0057af80
    ADD ESP,0x4                         ; 0057af83
    MOV EAX,[0x00681ab8]                ; 0057af86 | g_CSlewInstance | g_CSlewPtr
    PUSH EAX                            ; 0057af8b | g_CSlewInstance
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0057af8c
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0057af91
    CMP dword ptr [EBP + -0x8],0x0      ; 0057af94
    NOP                                 ; 0057af98
    NOP                                 ; 0057af99
    NOP                                 ; 0057af9a
    NOP                                 ; 0057af9b
    JZ 0x0057b081                       ; 0057af9c
        ;   XREF to: 0057b081 (CONDITIONAL_JUMP)  ; LAB_0057b081
    MOV EAX,[0x00681ab8]                ; 0057afa2 | g_CSlewPtr
    CMP EAX,0x2d7eaf4                   ; 0057afa7 | g_CDemonLightInstance.base.base.position
    JZ 0x0057afc8                       ; 0057afac
        ;   XREF to: 0057afc8 (CONDITIONAL_JUMP)  ; LAB_0057afc8
    FLD float ptr [EAX]                 ; 0057afae | g_CSlewInstance
    FLD float ptr [EAX + 0x8]           ; 0057afb0 | g_CSlewInstance.position.z
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057afb3 | g_CSlewInstance.position.y
    MOV dword ptr [0x02d7eaf8],EDX      ; 0057afb6 | g_CDemonLightInstance.base.base.position+4
    FSTP float ptr [0x02d7eafc]         ; 0057afbc | g_CDemonLightInstance.base.base.position+8
    FSTP float ptr [0x02d7eaf4]         ; 0057afc2 | g_CDemonLightInstance.base.base.position
    MOV EAX,[0x00681ab8]                ; 0057afc8 | g_CSlewPtr
        ;   Label: LAB_0057afc8
    ADD EAX,0xc                         ; 0057afcd | g_CSlewInstance.pitch
    PUSH EAX                            ; 0057afd0 | g_CSlewInstance.pitch
    PUSH 0x2d7eb00                      ; 0057afd1 | g_CDemonLightInstance.base.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0057afd6
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,[0x00681ab8]                ; 0057afdb | g_CSlewPtr
    ADD ESP,0x8                         ; 0057afe0
    FLD float ptr [EAX + 0x18]          ; 0057afe3 | g_CSlewInstance.slew_rate
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057afe6
    FLD float ptr [EAX + 0x120]         ; 0057afe9
    FMUL double ptr [0x0064777d]        ; 0057afef | DOUBLE_0064777d
    PUSH dword ptr [EAX + 0x124]        ; 0057aff5
    FXCH                                ; 0057affb
    FSTP float ptr [0x02d7eb28]         ; 0057affd | g_CDemonLightInstance.base.base.focal_length
    PUSH EDI                            ; 0057b003 | g_CDemonLightInstance
    CALL crt_math.c_round_FUN_005fe6b0  ; 0057b004
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [0x02d81a94]        ; 0057b009 | g_CDemonLightInstance.transform_scale_factor
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 ; 0057b00f
        ;   XREF to: 004765e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0057b014
    MOV EBX,0x437f0000                  ; 0057b017
    PUSH 0x0                            ; 0057b01c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057b01e
    MOV ECX,0x1                         ; 0057b021
    PUSH ESI                            ; 0057b026
    MOV dword ptr [0x02d7ec30],EBX      ; 0057b027 | g_CDemonLightInstance.base.max_distance
    MOV dword ptr [0x02d807a4],ECX      ; 0057b02d | g_CDemonLightInstance.light_enabled_flag
    CALL core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 ; 0057b033
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0(CDemonSet * this_ptr, int skip_prerender)
    ADD ESP,0x8                         ; 0057b038
    MOV EAX,[0x0067cf44]                ; 0057b03b | g_CKeysPtr
    PUSH 0x2e                           ; 0057b040
    MOV EDX,dword ptr [EAX]             ; 0057b042 | g_CKeysInstance
    PUSH EAX                            ; 0057b044 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057b045
    ADD ESP,0x8                         ; 0057b048
    TEST EAX,EAX                        ; 0057b04b
    JZ 0x0057b081                       ; 0057b04d
        ;   XREF to: 0057b081 (CONDITIONAL_JUMP)  ; LAB_0057b081
    MOV EDX,dword ptr [EBP + -0x4]      ; 0057b04f
    NOP                                 ; 0057b052
    NOP                                 ; 0057b053
    NOP                                 ; 0057b054
    NOP                                 ; 0057b055
    INC EDX                             ; 0057b056
    MOV EAX,dword ptr [ESI]             ; 0057b057
    MOV dword ptr [EBP + -0x4],EDX      ; 0057b059
    NOP                                 ; 0057b05c
    NOP                                 ; 0057b05d
    NOP                                 ; 0057b05e
    NOP                                 ; 0057b05f
    CMP EAX,EDX                         ; 0057b060
    JG 0x0057b06d                       ; 0057b062
        ;   XREF to: 0057b06d (CONDITIONAL_JUMP)  ; LAB_0057b06d
    XOR EBX,EBX                         ; 0057b064
    MOV dword ptr [EBP + -0x4],EBX      ; 0057b066
    NOP                                 ; 0057b069
    NOP                                 ; 0057b06a
    NOP                                 ; 0057b06b
    NOP                                 ; 0057b06c
    MOV ESI,dword ptr [EBP + -0x4]      ; 0057b06d
        ;   Label: LAB_0057b06d
    NOP                                 ; 0057b070
    NOP                                 ; 0057b071
    NOP                                 ; 0057b072
    NOP                                 ; 0057b073
    PUSH ESI                            ; 0057b074
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057b075
    PUSH EAX                            ; 0057b078
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0057b079
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0057b07e
    CMP dword ptr [EBP + -0x8],0x0      ; 0057b081
        ;   Label: LAB_0057b081
    NOP                                 ; 0057b085
    NOP                                 ; 0057b086
    NOP                                 ; 0057b087
    NOP                                 ; 0057b088
    JNZ 0x0057b30f                      ; 0057b089
        ;   XREF to: 0057b30f (CONDITIONAL_JUMP)  ; LAB_0057b30f
    PUSH 0x100                          ; 0057b08f
        ;   Label: LAB_0057b08f
    PUSH 0x0                            ; 0057b094
    PUSH 0x180                          ; 0057b096
    PUSH EDI                            ; 0057b09b | g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390 ; 0057b09c
        ;   XREF to: 00473390 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    ADD ESP,0x10                        ; 0057b0a1
    PUSH 0x0                            ; 0057b0a4
        ;   Label: LAB_0057b0a4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057b0a6
    PUSH EBX                            ; 0057b0a9
    CALL core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0 ; 0057b0aa
        ;   XREF to: 00577af0 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0(CDemonSet * this_ptr, int * camera_flags)
    ADD ESP,0x8                         ; 0057b0af
    CMP EAX,-0x1                        ; 0057b0b2
    JZ 0x0057b0c1                       ; 0057b0b5
        ;   XREF to: 0057b0c1 (CONDITIONAL_JUMP)  ; LAB_0057b0c1
    PUSH EAX                            ; 0057b0b7
    PUSH EBX                            ; 0057b0b8
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0057b0b9
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0057b0be
    PUSH 0x32                           ; 0057b0c1
        ;   Label: LAB_0057b0c1
    MOV EAX,[0x0067cf44]                ; 0057b0c3 | g_CKeysPtr
    PUSH EAX                            ; 0057b0c8 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057b0c9 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057b0cb
    ADD ESP,0x8                         ; 0057b0ce
    TEST EAX,EAX                        ; 0057b0d1
    JZ 0x0057b100                       ; 0057b0d3
        ;   XREF to: 0057b100 (CONDITIONAL_JUMP)  ; LAB_0057b100
    MOV EAX,0x1                         ; 0057b0d5
    MOV EDX,dword ptr [EBP + -0x8]      ; 0057b0da
    NOP                                 ; 0057b0dd
    NOP                                 ; 0057b0de
    NOP                                 ; 0057b0df
    NOP                                 ; 0057b0e0
    SUB EAX,EDX                         ; 0057b0e1
    MOV dword ptr [EBP + -0x8],EAX      ; 0057b0e3
    NOP                                 ; 0057b0e6
    NOP                                 ; 0057b0e7
    NOP                                 ; 0057b0e8
    NOP                                 ; 0057b0e9
    JZ 0x0057b100                       ; 0057b0ea
        ;   XREF to: 0057b100 (CONDITIONAL_JUMP)  ; LAB_0057b100
    MOV EBX,dword ptr [EBP + -0x4]      ; 0057b0ec
    NOP                                 ; 0057b0ef
    NOP                                 ; 0057b0f0
    NOP                                 ; 0057b0f1
    NOP                                 ; 0057b0f2
    PUSH EBX                            ; 0057b0f3
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057b0f4
    PUSH ESI                            ; 0057b0f7
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0057b0f8
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0057b0fd
    PUSH 0x0                            ; 0057b100
        ;   Label: LAB_0057b100
    PUSH 0x0                            ; 0057b102
    PUSH 0x6476d7                       ; 0057b104 | = "Position light.  Press SPACE when done"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057b109
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057b10e
    PUSH 0xb                            ; 0057b111
    PUSH 0x0                            ; 0057b113
    LEA EAX,[EBP + -0x74]               ; 0057b115
    NOP                                 ; 0057b118
    NOP                                 ; 0057b119
    NOP                                 ; 0057b11a
    NOP                                 ; 0057b11b
    PUSH EAX                            ; 0057b11c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057b11d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x0067b654]                ; 0057b122 | g_CGamePtr
    ADD ESP,0xc                         ; 0057b127
    MOV EAX,dword ptr [EAX + 0x264]     ; 0057b12a | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EAX             ; 0057b130
    FLD float ptr [ESP]                 ; 0057b133
    FLD1                                ; 0057b136
    FDIVRP                              ; 0057b138
    SUB ESP,0x8                         ; 0057b13a
    FSTP double ptr [ESP]               ; 0057b13d
    PUSH 0x6476fe                       ; 0057b140 | = "%f"
    LEA EAX,[ESP + 0x10]                ; 0057b145
    PUSH EAX                            ; 0057b149
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057b14a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679398]                ; 0057b14f | g_WindowHeight
    ADD ESP,0x10                        ; 0057b154
    SUB EAX,0xb                         ; 0057b157
    PUSH EAX                            ; 0057b15a
    PUSH 0x0                            ; 0057b15b
    LEA EAX,[ESP + 0xc]                 ; 0057b15d
    PUSH EAX                            ; 0057b161
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057b162
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057b167
    MOV EAX,[0x00681ab8]                ; 0057b16a | g_CSlewPtr
    SUB ESP,0x8                         ; 0057b16f
    FLD float ptr [EAX + 0x18]          ; 0057b172 | g_CSlewInstance.slew_rate
    FSTP double ptr [ESP]               ; 0057b175
    FLD double ptr [0x00647785]         ; 0057b178 | DOUBLE_00647785
    FLD float ptr [EAX + 0x10]          ; 0057b17e | g_CSlewInstance.yaw
    FMUL ST1                            ; 0057b181
    FLD double ptr [0x0064778d]         ; 0057b183 | DOUBLE_0064778d
    FXCH                                ; 0057b189
    FMUL ST1                            ; 0057b18b
    SUB ESP,0x8                         ; 0057b18d
    FSTP double ptr [ESP]               ; 0057b190
    FLD float ptr [EAX + 0x14]          ; 0057b193 | g_CSlewInstance.roll
    FMUL ST2                            ; 0057b196
    FMUL ST1                            ; 0057b198
    SUB ESP,0x8                         ; 0057b19a
    FSTP double ptr [ESP]               ; 0057b19d
    FLD float ptr [EAX + 0xc]           ; 0057b1a0 | g_CSlewInstance.pitch
    FMULP ST2                           ; 0057b1a3
    FMULP                               ; 0057b1a5
    SUB ESP,0x8                         ; 0057b1a7
    FSTP double ptr [ESP]               ; 0057b1aa
    SUB ESP,0x8                         ; 0057b1ad
    FLD float ptr [EAX + 0x8]           ; 0057b1b0 | g_CSlewInstance.position.z
    FSTP double ptr [ESP]               ; 0057b1b3
    SUB ESP,0x8                         ; 0057b1b6
    FLD float ptr [EAX + 0x4]           ; 0057b1b9 | g_CSlewInstance.position.y
    FSTP double ptr [ESP]               ; 0057b1bc
    SUB ESP,0x8                         ; 0057b1bf
    FLD float ptr [EAX]                 ; 0057b1c2 | g_CSlewInstance
    FSTP double ptr [ESP]               ; 0057b1c4
    PUSH 0x647701                       ; 0057b1c7 | = "pos: %4.1f %4.1f %4.1f   pbh: %3.1f %..."
    LEA EAX,[ESP + 0x40]                ; 0057b1cc
    PUSH EAX                            ; 0057b1d0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057b1d1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x40                        ; 0057b1d6
    PUSH 0x16                           ; 0057b1d9
    PUSH 0x0                            ; 0057b1db
    LEA EAX,[ESP + 0xc]                 ; 0057b1dd
    PUSH EAX                            ; 0057b1e1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057b1e2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057b1e7
    CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0 ; 0057b1ea
        ;   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0057b1ef
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,[0x0067b654]                ; 0057b1f4 | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 0057b1f9 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 0057b1fa
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0057b1ff
    MOV EAX,[0x0067cf44]                ; 0057b202 | g_CKeysPtr
    PUSH 0x1                            ; 0057b207
    MOV EDX,dword ptr [EAX]             ; 0057b209 | g_CKeysInstance
    PUSH EAX                            ; 0057b20b | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0057b20c
    ADD ESP,0x8                         ; 0057b20e
    TEST EAX,EAX                        ; 0057b211
    JNZ 0x0057b3c9                      ; 0057b213
        ;   XREF to: 0057b3c9 (CONDITIONAL_JUMP)  ; LAB_0057b3c9
    PUSH 0x39                           ; 0057b219
    MOV EAX,[0x0067cf44]                ; 0057b21b | g_CKeysPtr
    PUSH EAX                            ; 0057b220 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057b221 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057b223
    ADD ESP,0x8                         ; 0057b226
    TEST EAX,EAX                        ; 0057b229
    JZ 0x0057b324                       ; 0057b22b
        ;   XREF to: 0057b324 (CONDITIONAL_JUMP)  ; LAB_0057b324
    CMP dword ptr [0x03276f30],0x5f     ; 0057b231 | g_SpotLightCount
        ;   Label: LAB_0057b231
    JNZ 0x0057b341                      ; 0057b238
        ;   XREF to: 0057b341 (CONDITIONAL_JUMP)  ; LAB_0057b341
    PUSH 0x0                            ; 0057b23e
    PUSH 0x0                            ; 0057b240
    PUSH 0x64773f                       ; 0057b242 | = "Too many visible lights in view!"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057b247
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0057b24c
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0057b24f
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0057b254
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EBX,dword ptr [0x0067cf44]      ; 0057b259 | g_CKeysInstance | g_CKeysPtr
    PUSH EBX                            ; 0057b25f | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 0057b260
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0057b265
    PUSH 0x21                           ; 0057b268
        ;   Label: LAB_0057b268
    MOV EAX,[0x0067cf44]                ; 0057b26a | g_CKeysPtr
    PUSH EAX                            ; 0057b26f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057b270 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057b272
    ADD ESP,0x8                         ; 0057b275
    TEST EAX,EAX                        ; 0057b278
    JZ 0x0057b2a4                       ; 0057b27a
        ;   XREF to: 0057b2a4 (CONDITIONAL_JUMP)  ; LAB_0057b2a4
    PUSH 0x1                            ; 0057b27c
    PUSH 0x42c80000                     ; 0057b27e
    PUSH 0x0                            ; 0057b283
    MOV EAX,[0x00681ab8]                ; 0057b285 | g_CSlewPtr
    PUSH 0x1                            ; 0057b28a
    ADD EAX,0x18                        ; 0057b28c | g_CSlewInstance.slew_rate
    PUSH EAX                            ; 0057b28f | g_CSlewInstance.slew_rate
    PUSH 0x647760                       ; 0057b290 | = "Edit FOV"
    MOV ESI,dword ptr [0x00678a60]      ; 0057b295 | g_CEditorToolsPtr
    PUSH ESI                            ; 0057b29b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0057b29c
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 0057b2a1
    PUSH 0x31                           ; 0057b2a4
        ;   Label: LAB_0057b2a4
    MOV EAX,[0x0067cf44]                ; 0057b2a6 | g_CKeysPtr
    PUSH EAX                            ; 0057b2ab | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057b2ac | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057b2ae
    ADD ESP,0x8                         ; 0057b2b1
    TEST EAX,EAX                        ; 0057b2b4
    JZ 0x0057af67                       ; 0057b2b6
        ;   XREF to: 0057af67 (CONDITIONAL_JUMP)  ; LAB_0057af67
    PUSH 0x1                            ; 0057b2bc
    PUSH 0x64                           ; 0057b2be
    LEA EAX,[EBP + -0x74]               ; 0057b2c0
    NOP                                 ; 0057b2c3
    NOP                                 ; 0057b2c4
    NOP                                 ; 0057b2c5
    NOP                                 ; 0057b2c6
    PUSH EAX                            ; 0057b2c7
    PUSH 0x647769                       ; 0057b2c8 | = "Edit light name"
    MOV EAX,[0x00678a60]                ; 0057b2cd | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0057b2d2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0057b2d3
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0057b2d8
    JMP 0x0057af67                      ; 0057b2db
        ;   XREF to: 0057af67 (UNCONDITIONAL_JUMP)  ; LAB_0057af67
    MOV ECX,dword ptr [EDX]             ; 0057b2e0
        ;   Label: LAB_0057b2e0
    MOV dword ptr [EAX],ECX             ; 0057b2e2 | g_CSlewInstance
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057b2e4
    MOV dword ptr [EAX + 0x4],ECX       ; 0057b2e7 | g_CSlewInstance.position.y
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057b2ea
    MOV dword ptr [EAX + 0x8],ECX       ; 0057b2ed | g_CSlewInstance.position.z
    JMP 0x0057aef8                      ; 0057b2f0
        ;   XREF to: 0057aef8 (UNCONDITIONAL_JUMP)  ; LAB_0057aef8
    PUSH 0xf0                           ; 0057b2f5
        ;   Label: LAB_0057b2f5
    PUSH 0x0                            ; 0057b2fa
    PUSH 0x0                            ; 0057b2fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057b2fe
    PUSH EBX                            ; 0057b301
    CALL core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0 ; 0057b302
        ;   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
    ADD ESP,0x10                        ; 0057b307
    JMP 0x0057af62                      ; 0057b30a
        ;   XREF to: 0057af62 (UNCONDITIONAL_JUMP)  ; LAB_0057af62
    CMP dword ptr [0x00679398],0xf0     ; 0057b30f | g_WindowHeight
        ;   Label: LAB_0057b30f
    JG 0x0057b08f                       ; 0057b319
        ;   XREF to: 0057b08f (CONDITIONAL_JUMP)  ; LAB_0057b08f
    JMP 0x0057b0a4                      ; 0057b31f
        ;   XREF to: 0057b0a4 (UNCONDITIONAL_JUMP)  ; LAB_0057b0a4
    PUSH 0x1c                           ; 0057b324
        ;   Label: LAB_0057b324
    MOV EAX,[0x0067cf44]                ; 0057b326 | g_CKeysPtr
    PUSH EAX                            ; 0057b32b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0057b32c | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0057b32e
    ADD ESP,0x8                         ; 0057b331
    TEST EAX,EAX                        ; 0057b334
    JNZ 0x0057b231                      ; 0057b336
        ;   XREF to: 0057b231 (CONDITIONAL_JUMP)  ; LAB_0057b231
    JMP 0x0057b268                      ; 0057b33c
        ;   XREF to: 0057b268 (UNCONDITIONAL_JUMP)  ; LAB_0057b268
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057b341
        ;   Label: LAB_0057b341
    MOV EDX,dword ptr [0x00681ab8]      ; 0057b344 | g_CSlewPtr
    ADD EAX,0x104                       ; 0057b34a
    CMP EAX,EDX                         ; 0057b34f
    JZ 0x0057b363                       ; 0057b351
        ;   XREF to: 0057b363 (CONDITIONAL_JUMP)  ; LAB_0057b363
    MOV ECX,dword ptr [EDX]             ; 0057b353 | g_CSlewInstance
    MOV dword ptr [EAX],ECX             ; 0057b355
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057b357 | g_CSlewInstance.position.y
    MOV dword ptr [EAX + 0x4],ECX       ; 0057b35a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057b35d | g_CSlewInstance.position.z
    MOV dword ptr [EAX + 0x8],ECX       ; 0057b360
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057b363
        ;   Label: LAB_0057b363
    MOV EDX,dword ptr [0x00681ab8]      ; 0057b366 | g_CSlewPtr
    ADD EAX,0x110                       ; 0057b36c
    ADD EDX,0xc                         ; 0057b371
    CMP EAX,EDX                         ; 0057b374
    JZ 0x0057b388                       ; 0057b376
        ;   XREF to: 0057b388 (CONDITIONAL_JUMP)  ; LAB_0057b388
    MOV ECX,dword ptr [EDX]             ; 0057b378 | g_CSlewInstance.pitch
    MOV dword ptr [EAX],ECX             ; 0057b37a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057b37c | g_CSlewInstance.yaw
    MOV dword ptr [EAX + 0x4],ECX       ; 0057b37f
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057b382 | g_CSlewInstance.roll
    MOV dword ptr [EAX + 0x8],ECX       ; 0057b385
    MOV EAX,[0x00681ab8]                ; 0057b388 | g_CSlewPtr
        ;   Label: LAB_0057b388
    LEA ESI,[EBP + -0x74]               ; 0057b38d
    NOP                                 ; 0057b390
    NOP                                 ; 0057b391
    NOP                                 ; 0057b392
    NOP                                 ; 0057b393
    MOV ECX,0x1                         ; 0057b394
    FLD float ptr [EAX + 0x18]          ; 0057b399 | g_CSlewInstance.slew_rate
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057b39c
    MOV dword ptr [EBP + -0xc],ECX      ; 0057b39f
    NOP                                 ; 0057b3a2
    NOP                                 ; 0057b3a3
    NOP                                 ; 0057b3a4
    NOP                                 ; 0057b3a5
    LEA EDI,[EAX + 0x4]                 ; 0057b3a6
    FSTP float ptr [EAX + 0x11c]        ; 0057b3a9
    PUSH EDI                            ; 0057b3af
    MOV AL,byte ptr [ESI]               ; 0057b3b0
        ;   Label: LAB_0057b3b0
    MOV byte ptr [EDI],AL               ; 0057b3b2
    CMP AL,0x0                          ; 0057b3b4
    JZ 0x0057b3c8                       ; 0057b3b6
        ;   XREF to: 0057b3c8 (CONDITIONAL_JUMP)  ; LAB_0057b3c8
    MOV AL,byte ptr [ESI + 0x1]         ; 0057b3b8
    ADD ESI,0x2                         ; 0057b3bb
    MOV byte ptr [EDI + 0x1],AL         ; 0057b3be
    ADD EDI,0x2                         ; 0057b3c1
    CMP AL,0x0                          ; 0057b3c4
    JNZ 0x0057b3b0                      ; 0057b3c6
        ;   XREF to: 0057b3b0 (CONDITIONAL_JUMP)  ; LAB_0057b3b0
    POP EDI                             ; 0057b3c8
        ;   Label: LAB_0057b3c8
    MOV EDX,dword ptr [0x00681ab8]      ; 0057b3c9 | g_CSlewInstance | g_CSlewPtr
        ;   Label: LAB_0057b3c9
    PUSH EDX                            ; 0057b3cf | g_CSlewInstance
    CALL core_slew.cpp_CSlew_free_FUN_005a20a0 ; 0057b3d0
        ;   XREF to: 005a20a0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_free_FUN_005a20a0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0057b3d5
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0057b3d8
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057b3dd
    XOR ECX,ECX                         ; 0057b3e0
    MOV EAX,dword ptr [EBP + -0x10]     ; 0057b3e2
    NOP                                 ; 0057b3e5
    NOP                                 ; 0057b3e6
    NOP                                 ; 0057b3e7
    NOP                                 ; 0057b3e8
    MOV dword ptr [0x02d807a4],ECX      ; 0057b3e9 | g_CDemonLightInstance.light_enabled_flag
    MOV dword ptr [EDX + 0x11e0],EAX    ; 0057b3ef
    MOV EAX,dword ptr [EBP + -0xc]      ; 0057b3f5
    NOP                                 ; 0057b3f8
    NOP                                 ; 0057b3f9
    NOP                                 ; 0057b3fa
    NOP                                 ; 0057b3fb
    MOV ESP,EBP                         ; 0057b3fc
    POP EBP                             ; 0057b3fe
    POP EDI                             ; 0057b3ff
    POP ESI                             ; 0057b400
    POP EBX                             ; 0057b401
    RET                                 ; 0057b402

