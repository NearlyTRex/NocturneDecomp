; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; Local Variables:
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined1       Stack[-0x124]:1  local_124
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0x84]:1  local_84
; undefined1       Stack[-0x60]:1  local_60
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
; XREF[13]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db5e4
;   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 at 004dcca5
;   core_game.cpp_SaveRelated_FUN_004dcee0 at 004dd416
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e304
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a9a9
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055da68
;   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0 at 0056b7fe
;   core_set.cpp_CDemonSet_setCameraView_FUN_00570c70 at 00570c84
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 at 00575209
;   core_setedit.cpp_BackdropMaybe_FUN_005805a0 at 00580675
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00645c3b
;   TerminatedCString s_CDemonSet_setCameraView__00645c4b
;   TerminatedCString s_s_raw_00645c78
;   TerminatedCString s_core_set_cpp_00645c7f
;   TerminatedCString s_CDemonSet_setCameraView__00645c8f
;   float FLOAT_00662850 = 256
;   SMRGLTextureBasic* g_SkyDomeTexturePtr = 02ca0148
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGore* g_CGorePtr = 02d83364
;   CSound* g_CSoundPtr = 03f6af64
;   CWater* g_CWaterPtr = 03f875e0
;   CWeather* g_CWeatherPtr = 03f95dc0
;   SMRGLTextureBasic g_SkyDomeTextureData
;   int g_UseExternalRenderer
;   float g_PerspectiveReciprocal
;   ... and 32 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
;   core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
;   core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0
;   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40
;   ... and 21 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ae50
        ;   Label: core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
    PUSH ESI                            ; 0056ae51
    PUSH EDI                            ; 0056ae52
    PUSH EBP                            ; 0056ae53
    SUB ESP,0x174                       ; 0056ae54
    MOV EDX,dword ptr [ESP + 0x18c]     ; 0056ae5a
    TEST EDX,EDX                        ; 0056ae61
    JL 0x0056ae72                       ; 0056ae63
        ;   XREF to: 0056ae72 (CONDITIONAL_JUMP)  ; LAB_0056ae72
    MOV EAX,EDX                         ; 0056ae65
    MOV EDX,dword ptr [ESP + 0x188]     ; 0056ae67
    CMP EAX,dword ptr [EDX]             ; 0056ae6e
    JL 0x0056ae9d                       ; 0056ae70
        ;   XREF to: 0056ae9d (CONDITIONAL_JUMP)  ; LAB_0056ae9d
    MOV EDI,dword ptr [ESP + 0x18c]     ; 0056ae72
        ;   Label: LAB_0056ae72
    PUSH EDI                            ; 0056ae79
    MOV EBX,0x645c3b                    ; 0056ae7a | = "..\\core\\set.cpp"
    MOV ESI,0x416                       ; 0056ae7f
    PUSH 0x645c4b                       ; 0056ae84 | = "CDemonSet::setCameraView - invalid in..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0056ae89 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0056ae8f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056ae95
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0056ae9a
    MOV EBP,dword ptr [0x032776b4]      ; 0056ae9d | g_DynamicLightCount
        ;   Label: LAB_0056ae9d
    XOR EBX,EBX                         ; 0056aea3
    TEST EBP,EBP                        ; 0056aea5
    JLE 0x0056aed0                      ; 0056aea7
        ;   XREF to: 0056aed0 (CONDITIONAL_JUMP)  ; LAB_0056aed0
    XOR ESI,ESI                         ; 0056aea9
    MOV EAX,dword ptr [ESI + 0x32776b8] ; 0056aeab | g_DynamicLights | DAT_032776bc
        ;   Label: LAB_0056aeab
    PUSH EAX                            ; 0056aeb1
    ADD ESI,0x4                         ; 0056aeb2
    INC EBX                             ; 0056aeb5
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 ; 0056aeb6
        ;   XREF to: 00472f80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight * this_ptr)
    MOV EDX,dword ptr [0x032776b4]      ; 0056aebb | g_DynamicLightCount
    ADD ESP,0x4                         ; 0056aec1
    CMP EBX,EDX                         ; 0056aec4
    JL 0x0056aeab                       ; 0056aec6
        ;   XREF to: 0056aeab (CONDITIONAL_JUMP)  ; LAB_0056aeab
    LEA EAX,[EAX]                       ; 0056aec8
    MOV EDX,EDX                         ; 0056aece
    MOV ECX,dword ptr [0x03276f30]      ; 0056aed0 | g_ActiveLightCount
        ;   Label: LAB_0056aed0
    XOR EBX,EBX                         ; 0056aed6
    TEST ECX,ECX                        ; 0056aed8
    JLE 0x0056af00                      ; 0056aeda
        ;   XREF to: 0056af00 (CONDITIONAL_JUMP)  ; LAB_0056af00
    XOR ESI,ESI                         ; 0056aedc
    MOV EDI,dword ptr [ESI + 0x3276f34] ; 0056aede | g_ActiveLightList | DAT_03276f38
        ;   Label: LAB_0056aede
    PUSH EDI                            ; 0056aee4
    ADD ESI,0x4                         ; 0056aee5
    INC EBX                             ; 0056aee8
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 ; 0056aee9
        ;   XREF to: 00472f80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight * this_ptr)
    MOV EBP,dword ptr [0x03276f30]      ; 0056aeee | g_ActiveLightCount
    ADD ESP,0x4                         ; 0056aef4
    CMP EBX,EBP                         ; 0056aef7
    JL 0x0056aede                       ; 0056aef9
        ;   XREF to: 0056aede (CONDITIONAL_JUMP)  ; LAB_0056aede
    LEA EAX,[EAX]                       ; 0056aefb
    MOV ECX,ECX                         ; 0056aefe
    MOV EAX,[0x03276f30]                ; 0056af00 | g_ActiveLightCount
        ;   Label: LAB_0056af00
    XOR EBX,EBX                         ; 0056af05
    TEST EAX,EAX                        ; 0056af07
    JLE 0x0056af30                      ; 0056af09
        ;   XREF to: 0056af30 (CONDITIONAL_JUMP)  ; LAB_0056af30
    XOR ESI,ESI                         ; 0056af0b
    MOV EDX,dword ptr [ESI + 0x3276f34] ; 0056af0d | g_ActiveLightList | DAT_03276f38
        ;   Label: LAB_0056af0d
    PUSH EDX                            ; 0056af13
    ADD ESI,0x4                         ; 0056af14
    INC EBX                             ; 0056af17
    CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50 ; 0056af18
        ;   XREF to: 00472a50 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(CDemonLight * this_ptr)
    MOV ECX,dword ptr [0x03276f30]      ; 0056af1d | g_ActiveLightCount
    ADD ESP,0x4                         ; 0056af23
    CMP EBX,ECX                         ; 0056af26
    JL 0x0056af0d                       ; 0056af28
        ;   XREF to: 0056af0d (CONDITIONAL_JUMP)  ; LAB_0056af0d
    LEA EAX,[EAX]                       ; 0056af2a
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0 ; 0056af30
        ;   XREF to: 004729c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0()
        ;   Label: LAB_0056af30
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056af35
    MOV EDX,dword ptr [ESP + 0x188]     ; 0056af3c
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 0056af43
    MOV dword ptr [EDX + 0x15aeac],0x40400000 ; 0056af49
    MOV dword ptr [EDX + 0x15ac80],0x1  ; 0056af53
    XOR EBX,EBX                         ; 0056af5d
    MOV dword ptr [EDX + 0x15f6e0],0x1  ; 0056af5f
    MOV dword ptr [0x03276f30],EBX      ; 0056af69 | g_ActiveLightCount
    MOV dword ptr [EDX + 0x15aea8],EAX  ; 0056af6f
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0056af75
    MOV dword ptr [0x03277d80],EBX      ; 0056af7c | DAT_03277d80
    MOV dword ptr [EDX + 0x15aea4],EAX  ; 0056af82
    MOV dword ptr [0x032776c8],EBX      ; 0056af88 | g_CoronaGlobeCount
    MOV EDX,dword ptr [EDX + 0x14d154]  ; 0056af8e
    MOV dword ptr [0x0327785c],EBX      ; 0056af94 | DAT_0327785c
    TEST EDX,EDX                        ; 0056af9a
    JLE 0x0056afd0                      ; 0056af9c
        ;   XREF to: 0056afd0 (CONDITIONAL_JUMP)  ; LAB_0056afd0
    MOV ESI,dword ptr [ESP + 0x188]     ; 0056af9e
    MOV EDI,dword ptr [ESP + 0x188]     ; 0056afa5
    MOV ECX,dword ptr [ESI + 0x14d158]  ; 0056afac
        ;   Label: LAB_0056afac
    PUSH ECX                            ; 0056afb2
    PUSH EDI                            ; 0056afb3
    ADD ESI,0x4                         ; 0056afb4
    INC EBX                             ; 0056afb7
    CALL core_set.cpp_CDemonSet_FUN_0056ade0 ; 0056afb8
        ;   XREF to: 0056ade0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056ade0(CDemonSet * this_ptr)
    MOV EBP,dword ptr [EDI + 0x14d154]  ; 0056afbd
    ADD ESP,0x8                         ; 0056afc3
    CMP EBX,EBP                         ; 0056afc6
    JL 0x0056afac                       ; 0056afc8
        ;   XREF to: 0056afac (CONDITIONAL_JUMP)  ; LAB_0056afac
    LEA EAX,[EAX]                       ; 0056afca
    IMUL EAX,dword ptr [ESP + 0x18c],0x1a4 ; 0056afd0
        ;   Label: LAB_0056afd0
    MOV ESI,dword ptr [ESP + 0x188]     ; 0056afdb
    ADD ESI,EAX                         ; 0056afe2
    CMP dword ptr [ESI + 0x144],0x0     ; 0056afe4
    JZ 0x0056b2cc                       ; 0056afeb
        ;   XREF to: 0056b2cc (CONDITIONAL_JUMP)  ; LAB_0056b2cc
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056aff1
        ;   Label: LAB_0056aff1
    CMP dword ptr [EAX + 0x15ac84],0x0  ; 0056aff8
    JZ 0x0056b4c3                       ; 0056afff
        ;   XREF to: 0056b4c3 (CONDITIONAL_JUMP)  ; LAB_0056b4c3
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056b005
        ;   Label: LAB_0056b005
    MOV ECX,dword ptr [ESP + 0x18c]     ; 0056b00c
    MOV dword ptr [EAX + 0x15ac80],0x0  ; 0056b013
    IMUL EAX,ECX,0x1a4                  ; 0056b01d
    MOV EBX,dword ptr [ESP + 0x188]     ; 0056b023
    ADD EAX,EBX                         ; 0056b02a
    MOV ESI,dword ptr [EAX + 0x144]     ; 0056b02c
    TEST ESI,ESI                        ; 0056b032
    JZ 0x0056b6be                       ; 0056b034
        ;   XREF to: 0056b6be (CONDITIONAL_JUMP)  ; LAB_0056b6be
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056b03a
        ;   Label: LAB_0056b03a
    PUSH EAX                            ; 0056b041
    MOV dword ptr [EAX + 0x15f6e0],0x0  ; 0056b042
    CALL core_set.cpp_CDemonSet_FUN_0056be80 ; 0056b04c
        ;   XREF to: 0056be80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056be80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056b051
    IMUL EAX,dword ptr [ESP + 0x18c],0x1a4 ; 0056b054
    MOV ECX,dword ptr [ESP + 0x188]     ; 0056b05f
    ADD EAX,ECX                         ; 0056b066
    CMP dword ptr [EAX + 0x154],0x0     ; 0056b068
    JZ 0x0056b777                       ; 0056b06f
        ;   XREF to: 0056b777 (CONDITIONAL_JUMP)  ; LAB_0056b777
    MOV EBP,dword ptr [ECX + 0x15ac7c]  ; 0056b075
    PUSH EBP                            ; 0056b07b
    MOV EAX,[0x00681ef8]                ; 0056b07c | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 0056b081 | g_CSoundInstance
    CALL core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0 ; 0056b082
        ;   XREF to: 005b3cc0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0(CSound * this_ptr, int index)
        ;   Label: LAB_0056b082
    ADD ESP,0x8                         ; 0056b087
    MOV EAX,[0x032758e8]                ; 0056b08a | DAT_032758e8
    MOV dword ptr [ESP + 0x154],EAX     ; 0056b08f
    MOV EAX,0x32758e8                   ; 0056b096 | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b09b | g_CDemonCameraInstance.base.position.y
    MOV dword ptr [ESP + 0x158],EAX     ; 0056b09e
    MOV EAX,0x32758e8                   ; 0056b0a5 | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x8]       ; 0056b0aa | g_CDemonCameraInstance.base.position.z
    LEA EDX,[ESP + 0x13c]               ; 0056b0ad
    MOV dword ptr [ESP + 0x15c],EAX     ; 0056b0b4
    LEA EAX,[ESP + 0x154]               ; 0056b0bb
    CMP EDX,EAX                         ; 0056b0c2
    JZ 0x0056b0f0                       ; 0056b0c4
        ;   XREF to: 0056b0f0 (CONDITIONAL_JUMP)  ; LAB_0056b0f0
    MOV EAX,dword ptr [ESP + 0x154]     ; 0056b0c6
    MOV dword ptr [ESP + 0x13c],EAX     ; 0056b0cd
    MOV EAX,dword ptr [ESP + 0x158]     ; 0056b0d4
    MOV dword ptr [ESP + 0x140],EAX     ; 0056b0db
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0056b0e2
    MOV dword ptr [ESP + 0x144],EAX     ; 0056b0e9
    MOV ECX,0xa                         ; 0056b0f0
        ;   Label: LAB_0056b0f0
    LEA EDI,[ESP + 0xb0]                ; 0056b0f5
    MOV ESI,0x32758f4                   ; 0056b0fc | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    LEA EAX,[ESP + 0x124]               ; 0056b101
    MOVSD.REP ES:EDI,ESI                ; 0056b108 | g_CDemonCameraInstance.base.rotation_matrix.m[0].x | DAT_032758f8
    PUSH EAX                            ; 0056b10a
    MOV ECX,0xa                         ; 0056b10b
    LEA EDI,[ESP + 0xdc]                ; 0056b110
    LEA EAX,[ESP + 0xdc]                ; 0056b117
    LEA ESI,[ESP + 0xb4]                ; 0056b11e
    PUSH EAX                            ; 0056b125
    MOVSD.REP ES:EDI,ESI                ; 0056b126
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 0056b128
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EBX,EAX                         ; 0056b12d
    LEA EAX,[ESP + 0x150]               ; 0056b12f
    ADD ESP,0x8                         ; 0056b136
    CMP EAX,EBX                         ; 0056b139
    JZ 0x0056b15a                       ; 0056b13b
        ;   XREF to: 0056b15a (CONDITIONAL_JUMP)  ; LAB_0056b15a
    MOV EAX,dword ptr [EBX]             ; 0056b13d
    MOV dword ptr [ESP + 0x148],EAX     ; 0056b13f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0056b146
    MOV dword ptr [ESP + 0x14c],EAX     ; 0056b149
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056b150
    MOV dword ptr [ESP + 0x150],EAX     ; 0056b153
    LEA EAX,[ESP + 0x148]               ; 0056b15a
        ;   Label: LAB_0056b15a
    PUSH EAX                            ; 0056b161
    LEA EAX,[ESP + 0x140]               ; 0056b162
    PUSH EAX                            ; 0056b169
    MOV EDX,dword ptr [0x006848fc]      ; 0056b16a | g_CWeatherInstance | g_CWeatherPtr
    PUSH EDX                            ; 0056b170 | g_CWeatherInstance
    CALL core_weather.cpp_CWeather_FUN_005ef940 ; 0056b171
        ;   XREF to: 005ef940 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_CWeather_FUN_005ef940()
    ADD ESP,0xc                         ; 0056b176
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056b179
    MOV ECX,dword ptr [EAX + 0x14d154]  ; 0056b180
    XOR EBX,EBX                         ; 0056b186
    TEST ECX,ECX                        ; 0056b188
    JLE 0x0056b1c0                      ; 0056b18a
        ;   XREF to: 0056b1c0 (CONDITIONAL_JUMP)  ; LAB_0056b1c0
    MOV EBP,dword ptr [ESP + 0x188]     ; 0056b18c
    MOV ESI,EAX                         ; 0056b193
    MOV EDI,dword ptr [ESI + 0x14d158]  ; 0056b195
        ;   Label: LAB_0056b195
    PUSH EDI                            ; 0056b19b
    PUSH EBP                            ; 0056b19c
    ADD ESI,0x4                         ; 0056b19d
    INC EBX                             ; 0056b1a0
    CALL core_set.cpp_CDemonSet_FUN_0056ade0 ; 0056b1a1
        ;   XREF to: 0056ade0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056ade0(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBP + 0x14d154]  ; 0056b1a6
    ADD ESP,0x8                         ; 0056b1ac
    CMP EBX,EDX                         ; 0056b1af
    JL 0x0056b195                       ; 0056b1b1
        ;   XREF to: 0056b195 (CONDITIONAL_JUMP)  ; LAB_0056b195
    LEA EAX,[EAX]                       ; 0056b1b3
    LEA EDX,[EDX]                       ; 0056b1b9
    NOP                                 ; 0056b1bf
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056b1c0
        ;   Label: LAB_0056b1c0
    XOR ECX,ECX                         ; 0056b1c7
    MOV EBX,dword ptr [EAX + 0x14d154]  ; 0056b1c9
    MOV dword ptr [ESP + 0x170],ECX     ; 0056b1cf
    TEST EBX,EBX                        ; 0056b1d6
    JLE 0x0056b2b7                      ; 0056b1d8
        ;   XREF to: 0056b2b7 (CONDITIONAL_JUMP)  ; LAB_0056b2b7
    MOV dword ptr [ESP + 0x16c],EAX     ; 0056b1de
    MOV EBP,dword ptr [ESP + 0x16c]     ; 0056b1e5
        ;   Label: LAB_0056b1e5
    MOV EBP,dword ptr [EBP + 0x14d158]  ; 0056b1ec
    CMP dword ptr [EBP + 0xfc],0x0      ; 0056b1f2
    JNZ 0x0056b208                      ; 0056b1f9
        ;   XREF to: 0056b208 (CONDITIONAL_JUMP)  ; LAB_0056b208
    CMP dword ptr [EBP + 0xf8],0x0      ; 0056b1fb
    JZ 0x0056b282                       ; 0056b202
        ;   XREF to: 0056b282 (CONDITIONAL_JUMP)  ; LAB_0056b282
    LEA EBX,[ESP + 0x100]               ; 0056b208
        ;   Label: LAB_0056b208
    PUSH EBX                            ; 0056b20f
    MOV EAX,dword ptr [EBP + 0x154]     ; 0056b210
    PUSH EBP                            ; 0056b216
    LEA EDI,[ESP + 0x8]                 ; 0056b217
    XOR ESI,ESI                         ; 0056b21b
    CALL dword ptr [EAX + 0x14]         ; 0056b21d
    ADD ESP,0x8                         ; 0056b220
    PUSH ESI                            ; 0056b223
        ;   Label: LAB_0056b223
    LEA EAX,[ESP + 0x11c]               ; 0056b224
    PUSH EAX                            ; 0056b22b
    LEA EAX,[ESP + 0x108]               ; 0056b22c
    PUSH EAX                            ; 0056b233
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0056b234
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0056b239
    PUSH EAX                            ; 0056b23c
    LEA EAX,[ESP + 0x134]               ; 0056b23d
    PUSH EAX                            ; 0056b244
    PUSH EBP                            ; 0056b245
    MOV EBX,EDI                         ; 0056b246
    ADD EDI,0xc                         ; 0056b248
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0056b24b
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0056b250
    LEA EAX,[ESP + 0x130]               ; 0056b253
    INC ESI                             ; 0056b25a
    FLD float ptr [EAX]                 ; 0056b25b
    FMUL float ptr [0x00662850]         ; 0056b25d | FLOAT_00662850
    FISTP dword ptr [EBX]               ; 0056b263
    FLD float ptr [EAX + 0x4]           ; 0056b265
    FMUL float ptr [0x00662850]         ; 0056b268 | FLOAT_00662850
    FISTP dword ptr [EBX + 0x4]         ; 0056b26e
    FLD float ptr [EAX + 0x8]           ; 0056b271
    FMUL float ptr [0x00662850]         ; 0056b274 | FLOAT_00662850
    FISTP dword ptr [EBX + 0x8]         ; 0056b27a
    CMP ESI,0x8                         ; 0056b27d
    JL 0x0056b223                       ; 0056b280
        ;   XREF to: 0056b223 (CONDITIONAL_JUMP)  ; LAB_0056b223
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0056b282
        ;   Label: LAB_0056b282
    MOV EDI,dword ptr [ESP + 0x170]     ; 0056b289
    MOV EDX,dword ptr [ESP + 0x188]     ; 0056b290
    ADD ESI,0x4                         ; 0056b297
    INC EDI                             ; 0056b29a
    MOV EBP,dword ptr [EDX + 0x14d154]  ; 0056b29b
    MOV dword ptr [ESP + 0x16c],ESI     ; 0056b2a1
    MOV dword ptr [ESP + 0x170],EDI     ; 0056b2a8
    CMP EDI,EBP                         ; 0056b2af
    JL 0x0056b1e5                       ; 0056b2b1
        ;   XREF to: 0056b1e5 (CONDITIONAL_JUMP)  ; LAB_0056b1e5
    MOV dword ptr [0x032bd790],0x1      ; 0056b2b7 | g_RenderingShadows
        ;   Label: LAB_0056b2b7
    ADD ESP,0x174                       ; 0056b2c1
    POP EBP                             ; 0056b2c7
    POP EDI                             ; 0056b2c8
    POP ESI                             ; 0056b2c9
    POP EBX                             ; 0056b2ca
    RET                                 ; 0056b2cb
    MOV EDI,dword ptr [ESP + 0x188]     ; 0056b2cc
        ;   Label: LAB_0056b2cc
    ADD EDI,0x4                         ; 0056b2d3
    PUSH 0x32758e4                      ; 0056b2d6 | g_CDemonCameraInstance
    ADD EDI,EAX                         ; 0056b2db
    PUSH EDI                            ; 0056b2dd
    CALL core_setutil.cpp_C3DSCamera_apply_FUN_00585870 ; 0056b2de
        ;   XREF to: 00585870 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_apply_FUN_00585870(C3DSCamera * this_ptr, CDemonCamera * camera)
    ADD ESP,0x8                         ; 0056b2e3
    MOV EBP,dword ptr [ESI + 0x154]     ; 0056b2e6
    MOV EBX,dword ptr [ESP + 0x188]     ; 0056b2ec
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056b2f3
    ADD EBX,0x15ac54                    ; 0056b2fa
    ADD EAX,0x15ac60                    ; 0056b300
    TEST EBP,EBP                        ; 0056b305
    JZ 0x0056b4af                       ; 0056b307
        ;   XREF to: 0056b4af (CONDITIONAL_JUMP)  ; LAB_0056b4af
    MOV ESI,dword ptr [ESP + 0x188]     ; 0056b30d
    MOV EDX,dword ptr [ESI + 0x15ac30]  ; 0056b314
    MOV dword ptr [EBX],EDX             ; 0056b31a
    MOV EDI,EBX                         ; 0056b31c
    MOV EDX,dword ptr [ESI + 0x15ac34]  ; 0056b31e
    ADD ESI,0x15ac30                    ; 0056b324
    MOV dword ptr [EBX + 0x4],EDX       ; 0056b32a
        ;   Label: LAB_0056b32a
    MOV EBP,ESI                         ; 0056b32d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056b32f
    ADD ESI,0xc                         ; 0056b332
    MOV dword ptr [EBX + 0x8],EDX       ; 0056b335
    CMP EAX,ESI                         ; 0056b338
    JZ 0x0056b34c                       ; 0056b33a
        ;   XREF to: 0056b34c (CONDITIONAL_JUMP)  ; LAB_0056b34c
    MOV EDX,dword ptr [ESI]             ; 0056b33c
    MOV dword ptr [EAX],EDX             ; 0056b33e
    MOV EDX,dword ptr [ESI + 0x4]       ; 0056b340
    MOV dword ptr [EAX + 0x4],EDX       ; 0056b343
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056b346
    MOV dword ptr [EAX + 0x8],EDX       ; 0056b349
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056b34c
        ;   Label: LAB_0056b34c
    MOV dword ptr [EDI + 0x18],EAX      ; 0056b34f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0056b352
    MOV dword ptr [EDI + 0x1c],EAX      ; 0056b355
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056b358
    MOV dword ptr [EDI + 0x20],EAX      ; 0056b35b
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056b35e
    ADD EAX,0x15ac54                    ; 0056b365
    PUSH EAX                            ; 0056b36a
    PUSH 0x32758e4                      ; 0056b36b | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640 ; 0056b370
        ;   XREF to: 00453640 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera * this_ptr, SFog * fog_config)
    ADD ESP,0x8                         ; 0056b375
    XOR EAX,EAX                         ; 0056b378
    PUSH EAX                            ; 0056b37a
    PUSH 0x32758e4                      ; 0056b37b | g_CDemonCameraInstance
    MOV [0x03277d14],EAX                ; 0056b380 | g_CDemonRaytraceInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0056b385
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056b38a
    PUSH 0x32758e4                      ; 0056b38d | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70 ; 0056b392
        ;   XREF to: 0044cc70 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0056b397
    PUSH 0x10                           ; 0056b39a
    MOV EDX,dword ptr [ESP + 0x18c]     ; 0056b39c
    PUSH EDX                            ; 0056b3a3
    CALL core_set.cpp_CDemonSet_FUN_0056fbd0 ; 0056b3a4
        ;   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056b3a9
    PUSH 0x1                            ; 0056b3ac
    MOV ECX,dword ptr [ESP + 0x18c]     ; 0056b3ae
    PUSH 0x461c3f9a                     ; 0056b3b5
    PUSH ECX                            ; 0056b3ba
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0056b3bb
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0056b3c0
    PUSH 0x32758e4                      ; 0056b3c3 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450 ; 0056b3c8
        ;   XREF to: 00454450 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0056b3cd
    MOV EBX,0x1                         ; 0056b3d0
    PUSH EBX                            ; 0056b3d5
    MOV ESI,dword ptr [ESP + 0x18c]     ; 0056b3d6
    PUSH ESI                            ; 0056b3dd
    MOV dword ptr [0x032bd77c],EBX      ; 0056b3de | g_InMirrorRenderPass
    CALL core_set.cpp_CDemonSet_FUN_0056aca0 ; 0056b3e4
        ;   XREF to: 0056aca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056b3e9
    XOR EDI,EDI                         ; 0056b3ec
    PUSH 0x32758e4                      ; 0056b3ee | g_CDemonCameraInstance
    MOV dword ptr [0x032bd77c],EDI      ; 0056b3f3 | g_InMirrorRenderPass
    CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 ; 0056b3f9
        ;   XREF to: 0044e360 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0056b3fe
    PUSH 0x32758e4                      ; 0056b401 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0 ; 0056b406
        ;   XREF to: 004544a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0056b40b
    IMUL EAX,dword ptr [ESP + 0x18c],0x1a4 ; 0056b40e
    LEA EDX,[ESI + 0x4]                 ; 0056b419
    ADD EAX,EDX                         ; 0056b41c
    PUSH EAX                            ; 0056b41e
    PUSH 0x645c78                       ; 0056b41f | = "%s.raw"
    LEA EAX,[ESP + 0x68]                ; 0056b424
    PUSH EAX                            ; 0056b428
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0056b429
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056b42e
    LEA EAX,[ESP + 0x60]                ; 0056b431
    PUSH EAX                            ; 0056b435
    PUSH 0x32758e4                      ; 0056b436 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 ; 0056b43b
        ;   XREF to: 0044f3e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0(CDemonCamera * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0056b440
    PUSH EBX                            ; 0056b443
    PUSH ESI                            ; 0056b444
    CALL core_set.cpp_CDemonSet_FUN_0056aca0 ; 0056b445
        ;   XREF to: 0056aca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056b44a
    PUSH EDI                            ; 0056b44d
    PUSH 0x32758e4                      ; 0056b44e | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 ; 0056b453
        ;   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera * this_ptr, int restore_zbuffer)
    MOV EDX,dword ptr [0x02d03e94]      ; 0056b458 | g_UseExternalRenderer
    ADD ESP,0x8                         ; 0056b45e
    TEST EDX,EDX                        ; 0056b461
    JZ 0x0056b49b                       ; 0056b463
        ;   XREF to: 0056b49b (CONDITIONAL_JUMP)  ; LAB_0056b49b
    PUSH EDI                            ; 0056b465
    PUSH 0x461c3f9a                     ; 0056b466
    PUSH ESI                            ; 0056b46b
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0056b46c
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    MOV EAX,[0x006844f0]                ; 0056b471 | g_CWaterInstance | g_CWaterPtr
    MOV EBX,dword ptr [EAX]             ; 0056b476 | g_CWaterInstance
    ADD ESP,0xc                         ; 0056b478
    TEST EBX,EBX                        ; 0056b47b
    JNZ 0x0056b489                      ; 0056b47d
        ;   XREF to: 0056b489 (CONDITIONAL_JUMP)  ; LAB_0056b489
    PUSH EDI                            ; 0056b47f
    PUSH EAX                            ; 0056b480 | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005ea320 ; 0056b481
        ;   XREF to: 005ea320 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005ea320(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0056b486
    PUSH 0x1                            ; 0056b489
        ;   Label: LAB_0056b489
    MOV ESI,dword ptr [ESP + 0x18c]     ; 0056b48b
    PUSH ESI                            ; 0056b492
    CALL core_set.cpp_CDemonSet_FUN_0056aca0 ; 0056b493
        ;   XREF to: 0056aca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056b498
    PUSH 0x0                            ; 0056b49b
        ;   Label: LAB_0056b49b
    PUSH 0x32758e4                      ; 0056b49d | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0056b4a2
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0056b4a7
    JMP 0x0056aff1                      ; 0056b4aa
        ;   XREF to: 0056aff1 (UNCONDITIONAL_JUMP)  ; LAB_0056aff1
    LEA ESI,[EDI + 0x154]               ; 0056b4af
        ;   Label: LAB_0056b4af
    MOV EDX,dword ptr [ESI]             ; 0056b4b5
    MOV dword ptr [EBX],EDX             ; 0056b4b7
    MOV EDX,dword ptr [ESI + 0x4]       ; 0056b4b9
    MOV EDI,EBX                         ; 0056b4bc
    JMP 0x0056b32a                      ; 0056b4be
        ;   XREF to: 0056b32a (UNCONDITIONAL_JUMP)  ; LAB_0056b32a
    MOV EBP,dword ptr [EAX + 0x19a2c]   ; 0056b4c3
        ;   Label: LAB_0056b4c3
    XOR EBX,EBX                         ; 0056b4c9
    XOR ESI,ESI                         ; 0056b4cb
    TEST EBP,EBP                        ; 0056b4cd
    JLE 0x0056b591                      ; 0056b4cf
        ;   XREF to: 0056b591 (CONDITIONAL_JUMP)  ; LAB_0056b591
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0056b4d5
    SHL EAX,0x4                         ; 0056b4dc
    MOV dword ptr [ESP + 0x164],EAX     ; 0056b4df
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056b4e6
    ADD EAX,0x19a30                     ; 0056b4ed
    MOV EBP,dword ptr [ESP + 0x188]     ; 0056b4f2
    MOV dword ptr [ESP + 0x160],EAX     ; 0056b4f9
    IMUL EDI,EBX,0x1898                 ; 0056b500
        ;   Label: LAB_0056b500
    CMP dword ptr [EBP + 0x19a30],0x1   ; 0056b506
    JNZ 0x0056b568                      ; 0056b50d
        ;   XREF to: 0056b568 (CONDITIONAL_JUMP)  ; LAB_0056b568
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0056b50f
    CMP byte ptr [EAX + EBP*0x1 + 0x19b58],0x0 ; 0056b516
    JZ 0x0056b568                       ; 0056b51e
        ;   XREF to: 0056b568 (CONDITIONAL_JUMP)  ; LAB_0056b568
    MOV EAX,[0x03277d80]                ; 0056b520 | DAT_03277d80
    MOV EDX,dword ptr [ESP + 0x160]     ; 0056b525
    LEA ECX,[EAX + 0x1]                 ; 0056b52c
    ADD EDI,EDX                         ; 0056b52f
    MOV dword ptr [0x03277d80],ECX      ; 0056b531 | DAT_03277d80
    MOV dword ptr [EAX*0x4 + 0x3277d84],EDI ; 0056b537 | DAT_03277d84 | DAT_03277d88
    CMP ECX,0xc8                        ; 0056b53e
    JL 0x0056b568                       ; 0056b544
        ;   XREF to: 0056b568 (CONDITIONAL_JUMP)  ; LAB_0056b568
    MOV EAX,0x645c7f                    ; 0056b546 | = "..\\core\\set.cpp"
    MOV EDX,0x4a0                       ; 0056b54b
    PUSH 0x645c8f                       ; 0056b550 | = "CDemonSet::setCameraView - Too many o..."
    MOV [0x02f0ca48],EAX                ; 0056b555 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0056b55a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056b560
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056b565
    CMP dword ptr [EBP + 0x19a30],0x0   ; 0056b568
        ;   Label: LAB_0056b568
    JZ 0x0056b64b                       ; 0056b56f
        ;   XREF to: 0056b64b (CONDITIONAL_JUMP)  ; LAB_0056b64b
    MOV EAX,dword ptr [ESP + 0x188]     ; 0056b575
        ;   Label: LAB_0056b575
    INC EBX                             ; 0056b57c
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 0056b57d
    ADD EBP,0x1898                      ; 0056b583
    CMP EBX,EDX                         ; 0056b589
    JL 0x0056b500                       ; 0056b58b
        ;   XREF to: 0056b500 (CONDITIONAL_JUMP)  ; LAB_0056b500
    MOV ECX,dword ptr [ESP + 0x188]     ; 0056b591
        ;   Label: LAB_0056b591
    PUSH ECX                            ; 0056b598
    XOR EDI,EDI                         ; 0056b599
    CALL core_set.cpp_CDemonSet_process_FUN_0056f940 ; 0056b59b
        ;   XREF to: 0056f940 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_process_FUN_0056f940(CDemonSet * this_ptr)
    MOV EBX,dword ptr [0x03276f30]      ; 0056b5a0 | g_ActiveLightCount
    ADD ESP,0x4                         ; 0056b5a6
    TEST EBX,EBX                        ; 0056b5a9
    JLE 0x0056b005                      ; 0056b5ab
        ;   XREF to: 0056b005 (CONDITIONAL_JUMP)  ; LAB_0056b005
    IMUL EAX,dword ptr [ESP + 0x18c],0x1a4 ; 0056b5b1
    MOV EDX,dword ptr [ESP + 0x188]     ; 0056b5bc
    MOV EBP,0x32770b4                   ; 0056b5c3 | DAT_032770b4
    ADD EDX,EAX                         ; 0056b5c8
    XOR EBX,EBX                         ; 0056b5ca
    MOV dword ptr [ESP + 0x168],EDX     ; 0056b5cc
    MOV ESI,dword ptr [EBX + 0x3276f34] ; 0056b5d3 | g_ActiveLightList | DAT_03276f38
        ;   Label: LAB_0056b5d3
    PUSH ESI                            ; 0056b5d9
    CALL core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0 ; 0056b5da
        ;   XREF to: 004729d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0056b5df
    PUSH 0x1                            ; 0056b5e2
    PUSH ESI                            ; 0056b5e4
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 ; 0056b5e5
        ;   XREF to: 00472a80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056b5ea
    PUSH ESI                            ; 0056b5ed
    CALL core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40 ; 0056b5ee
        ;   XREF to: 00472e40 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0056b5f3
    PUSH 0x1                            ; 0056b5f6
    MOV ECX,dword ptr [ESP + 0x18c]     ; 0056b5f8
    PUSH ECX                            ; 0056b5ff
    CALL core_set.cpp_CDemonSet_FUN_0056aca0 ; 0056b600
        ;   XREF to: 0056aca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056b605
    PUSH ESI                            ; 0056b608
    CALL core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30 ; 0056b609
        ;   XREF to: 00472f30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0056b60e
    PUSH 0x0                            ; 0056b611
    PUSH ESI                            ; 0056b613
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 ; 0056b614
        ;   XREF to: 00472d30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight * this_ptr)
    ADD ESP,0x8                         ; 0056b619
    PUSH ESI                            ; 0056b61c
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 ; 0056b61d
        ;   XREF to: 00472f80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0056b622
    MOV EAX,dword ptr [ESP + 0x168]     ; 0056b625
    CMP dword ptr [EAX + 0x144],0x0     ; 0056b62c
    JZ 0x0056b6aa                       ; 0056b633
        ;   XREF to: 0056b6aa (CONDITIONAL_JUMP)  ; LAB_0056b6aa
    MOV EAX,[0x03276f30]                ; 0056b635 | g_ActiveLightCount
        ;   Label: LAB_0056b635
    ADD EBX,0x4                         ; 0056b63a
    INC EDI                             ; 0056b63d
    ADD EBP,0x10                        ; 0056b63e
    CMP EDI,EAX                         ; 0056b641
    JGE 0x0056b005                      ; 0056b643
        ;   XREF to: 0056b005 (CONDITIONAL_JUMP)  ; LAB_0056b005
    JMP 0x0056b5d3                      ; 0056b649
        ;   XREF to: 0056b5d3 (UNCONDITIONAL_JUMP)  ; LAB_0056b5d3
    MOV EDI,dword ptr [ESP + 0x18c]     ; 0056b64b
        ;   Label: LAB_0056b64b
    MOV DH,byte ptr [EDI + EBP*0x1 + 0x19b58] ; 0056b652
    LEA EAX,[ESI + 0x1]                 ; 0056b659
    TEST DH,DH                          ; 0056b65c
    JNZ 0x0056b667                      ; 0056b65e
        ;   XREF to: 0056b667 (CONDITIONAL_JUMP)  ; LAB_0056b667
    MOV ESI,EAX                         ; 0056b660
    JMP 0x0056b575                      ; 0056b662
        ;   XREF to: 0056b575 (UNCONDITIONAL_JUMP)  ; LAB_0056b575
    MOV EDI,dword ptr [0x03276f30]      ; 0056b667 | g_ActiveLightCount
        ;   Label: LAB_0056b667
    MOV ESI,dword ptr [ESI*0x4 + 0x3276db0] ; 0056b66d | g_MasterLightList
    MOV dword ptr [EDI*0x4 + 0x3276f34],ESI ; 0056b674 | g_ActiveLightList
    SHL EDI,0x4                         ; 0056b67b
    MOV ESI,dword ptr [ESP + 0x164]     ; 0056b67e
    LEA EDI,[EDI + 0x32770b4]           ; 0056b685 | DAT_032770b4
    LEA ESI,[ESI + EBP*0x1 + 0x19c54]   ; 0056b68b
    MOVSD ES:EDI,ESI                    ; 0056b692 | DAT_032770b4
    MOVSD ES:EDI,ESI                    ; 0056b693 | DAT_032770b8
    MOVSD ES:EDI,ESI                    ; 0056b694 | DAT_032770bc
    MOVSD ES:EDI,ESI                    ; 0056b695 | DAT_032770c0
    MOV EDI,dword ptr [0x03276f30]      ; 0056b696 | g_ActiveLightCount
    INC EDI                             ; 0056b69c
    MOV ESI,EAX                         ; 0056b69d
    MOV dword ptr [0x03276f30],EDI      ; 0056b69f | g_ActiveLightCount
    JMP 0x0056b575                      ; 0056b6a5
        ;   XREF to: 0056b575 (UNCONDITIONAL_JUMP)  ; LAB_0056b575
    PUSH EBP                            ; 0056b6aa | DAT_032770b4
        ;   Label: LAB_0056b6aa
    PUSH ESI                            ; 0056b6ab
    PUSH 0x32758e4                      ; 0056b6ac | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 ; 0056b6b1
        ;   XREF to: 0044de10 (UNCONDITIONAL_CALL)  ; void * core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect)
    ADD ESP,0xc                         ; 0056b6b6
    JMP 0x0056b635                      ; 0056b6b9
        ;   XREF to: 0056b635 (UNCONDITIONAL_JUMP)  ; LAB_0056b635
    PUSH 0x1                            ; 0056b6be
        ;   Label: LAB_0056b6be
    PUSH 0x32758e4                      ; 0056b6c0 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0056b6c5
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056b6ca
    PUSH 0x32758e4                      ; 0056b6cd | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70 ; 0056b6d2
        ;   XREF to: 0044cc70 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0056b6d7
    MOV EBP,dword ptr [EBX + 0x161628]  ; 0056b6da
    MOV dword ptr [0x02d051f4],ESI      ; 0056b6e0 | g_PerspectiveReciprocal
    TEST EBP,EBP                        ; 0056b6e6
    JZ 0x0056b707                       ; 0056b6e8
        ;   XREF to: 0056b707 (CONDITIONAL_JUMP)  ; LAB_0056b707
    MOV EDX,dword ptr [EBX + 0x16164c]  ; 0056b6ea
    PUSH EDX                            ; 0056b6f0
    LEA EAX,[EBX + 0x16162c]            ; 0056b6f1
    PUSH EAX                            ; 0056b6f7
    MOV ECX,dword ptr [0x0067235c]      ; 0056b6f8 | g_SkyDomeTextureData | g_SkyDomeTexturePtr
    PUSH ECX                            ; 0056b6fe | g_SkyDomeTextureData
    CALL core_dskybox.cpp_renderSkyDome_FUN_004901f0 ; 0056b6ff
        ;   XREF to: 004901f0 (UNCONDITIONAL_CALL)  ; void core_dskybox.cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic * sky_texture, char * texture_name, float brightness_factor)
    ADD ESP,0xc                         ; 0056b704
    PUSH 0x1                            ; 0056b707
        ;   Label: LAB_0056b707
    MOV EBX,dword ptr [ESP + 0x18c]     ; 0056b709
    PUSH EBX                            ; 0056b710
    CALL core_set.cpp_CDemonSet_FUN_0056aca0 ; 0056b711
        ;   XREF to: 0056aca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056b716
    PUSH 0x1                            ; 0056b719
    PUSH 0x1                            ; 0056b71b
    MOV ESI,dword ptr [0x0067b9a0]      ; 0056b71d | g_CGorePtr
    PUSH ESI                            ; 0056b723 | g_CGoreInstance
    CALL core_gore.cpp_FUN_004ed830     ; 0056b724
        ;   XREF to: 004ed830 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ed830(CGore * this_ptr)
    ADD ESP,0xc                         ; 0056b729
    PUSH 0x1                            ; 0056b72c
    PUSH 0x1                            ; 0056b72e
    MOV EDI,dword ptr [0x0067a3d0]      ; 0056b730 | g_CFireEffectPtr
    PUSH EDI                            ; 0056b736 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 ; 0056b737
        ;   XREF to: 004c74a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
    MOV EAX,[0x006844f0]                ; 0056b73c | g_CWaterInstance | g_CWaterPtr
    MOV EBP,dword ptr [EAX]             ; 0056b741 | g_CWaterInstance
    ADD ESP,0xc                         ; 0056b743
    TEST EBP,EBP                        ; 0056b746
    JNZ 0x0056b754                      ; 0056b748
        ;   XREF to: 0056b754 (CONDITIONAL_JUMP)  ; LAB_0056b754
    PUSH EBP                            ; 0056b74a
    PUSH EAX                            ; 0056b74b | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005ea320 ; 0056b74c
        ;   XREF to: 005ea320 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005ea320(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0056b751
    PUSH 0x0                            ; 0056b754
        ;   Label: LAB_0056b754
    PUSH 0x32758e4                      ; 0056b756 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 ; 0056b75b
        ;   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera * this_ptr, int restore_zbuffer)
    ADD ESP,0x8                         ; 0056b760
    PUSH 0x0                            ; 0056b763
    PUSH 0x32758e4                      ; 0056b765 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0056b76a
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0056b76f
    JMP 0x0056b03a                      ; 0056b772
        ;   XREF to: 0056b03a (UNCONDITIONAL_JUMP)  ; LAB_0056b03a
    MOV ESI,dword ptr [EAX + 0x17c]     ; 0056b777
        ;   Label: LAB_0056b777
    PUSH ESI                            ; 0056b77d
    MOV EDI,dword ptr [0x00681ef8]      ; 0056b77e | g_CSoundPtr
    PUSH EDI                            ; 0056b784 | g_CSoundInstance
    JMP 0x0056b082                      ; 0056b785
        ;   XREF to: 0056b082 (UNCONDITIONAL_JUMP)  ; LAB_0056b082

