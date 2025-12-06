; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056c1a0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
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
; XREF[6]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da211
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e508
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 00539525
;   core_setedit.cpp_BackdropMaybe_FUN_005805a0 at 00580680
;   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 at 0057b033
;   core_setedit.cpp_FUN_00581320 at 005813b7
;
; Referenced Globals:
;   TerminatedCString s_comp_3_2f_3_2f_actren_3__00645d6b
;   double DOUBLE_00645d93 = 0.0555555555555556
;   double DOUBLE_00645d9b = 0.0000152587890625
;   double DOUBLE_00645da3 = 1000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CTerrain* g_CTerrainPtr = 03f8749c
;   CWater* g_CWaterPtr = 03f875e0
;   CWeather* g_CWeatherPtr = 03f95dc0
;   CConsole g_ConsolePtr
;   CFireEffect g_CFireEffectInstance
;   CDemonLight g_CDemonLightInstance
;   ... and 32 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0
;   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c1a0
        ;   Label: core_set.cpp_CDemonSet_FUN_0056c1a0
    PUSH ESI                            ; 0056c1a1
    PUSH EDI                            ; 0056c1a2
    PUSH EBP                            ; 0056c1a3
    MOV EBP,ESP                         ; 0056c1a4
    SUB ESP,0x54                        ; 0056c1a6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056c1a9
    MOV ESI,dword ptr [EBP + 0x18]      ; 0056c1ac
    MOV EAX,[0x0067b654]                ; 0056c1af | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056c1b4 | DAT_02d81ca8
    JNZ 0x0056c80d                      ; 0056c1bb | LAB_0056c80d
        ;   XREF to: 0056c80d (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 0056c1c1
        ;   Label: LAB_0056c1c1
    JNZ 0x0056c81a                      ; 0056c1c3 | LAB_0056c81a
        ;   XREF to: 0056c81a (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 0056c1c9
        ;   Label: LAB_0056c1c9
    JNZ 0x0056c1f0                      ; 0056c1cb | LAB_0056c1f0
        ;   XREF to: 0056c1f0 (CONDITIONAL_JUMP)
    PUSH 0x2d7eaf0                      ; 0056c1cd | CDemonLight g_CDemonLightInstance
    PUSH EBX                            ; 0056c1d2
    MOV dword ptr [0x032776b4],ESI      ; 0056c1d3 | int g_DynamicLightCount
    MOV dword ptr [0x032776c8],ESI      ; 0056c1d9 | int g_CoronaGlobeCount
    CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090 ; 0056c1df | void core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(CDemonSet * this_ptr)
        ;   XREF to: 0056d090 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056c1e4
    PUSH EBX                            ; 0056c1e7
    CALL core_set.cpp_CDemonSet_FUN_0056be80 ; 0056c1e8 | void core_set.cpp_CDemonSet_FUN_0056be80(CDemonSet * this_ptr)
        ;   XREF to: 0056be80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c1ed
    PUSH 0x32758e4                      ; 0056c1f0 | CDemonCamera g_CDemonCameraInstance
        ;   Label: LAB_0056c1f0
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860 ; 0056c1f5 | void core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera * this_ptr)
        ;   XREF to: 0044c860 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBX + 0x161654]  ; 0056c1fa
    ADD ESP,0x4                         ; 0056c200
    TEST EDI,EDI                        ; 0056c203
    JZ 0x0056c21a                       ; 0056c205 | LAB_0056c21a
        ;   XREF to: 0056c21a (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0056c207
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_00570c70 ; 0056c208 | void core_set.cpp_CDemonSet_setCameraView_FUN_00570c70(CDemonSet * this_ptr)
        ;   XREF to: 00570c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c20d
    MOV dword ptr [EBX + 0x161654],0x0  ; 0056c210
    PUSH 0x1                            ; 0056c21a
        ;   Label: LAB_0056c21a
    PUSH 0x32758e4                      ; 0056c21c | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0056c221 | void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)
    MOV EAX,[0x032bd790]                ; 0056c226 | int g_RenderingShadows
    ADD ESP,0x8                         ; 0056c22b
    TEST EAX,EAX                        ; 0056c22e
    JZ 0x0056c836                       ; 0056c230 | LAB_0056c836
        ;   XREF to: 0056c836 (CONDITIONAL_JUMP)
    PUSH 0x32758e4                      ; 0056c236 | CDemonCamera g_CDemonCameraInstance
        ;   Label: LAB_0056c236
    XOR ECX,ECX                         ; 0056c23b
    XOR ESI,ESI                         ; 0056c23d
    MOV dword ptr [0x032bd790],ECX      ; 0056c23f | int g_RenderingShadows
    CALL core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130 ; 0056c245 | void core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera * this_ptr)
        ;   XREF to: 00451130 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x03276f30]      ; 0056c24a | int g_ActiveLightCount
    ADD ESP,0x4                         ; 0056c250
    TEST EDI,EDI                        ; 0056c253
    JLE 0x0056c283                      ; 0056c255 | LAB_0056c283
        ;   XREF to: 0056c283 (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 0056c257
    MOV EAX,dword ptr [EDI + 0x3276f34] ; 0056c259 | CDemonLight *[96] g_ActiveLightList
        ;   Label: LAB_0056c259
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0056c25f
    JZ 0x0056c276                       ; 0056c266 | LAB_0056c276
        ;   XREF to: 0056c276 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0056c268
    PUSH 0x32758e4                      ; 0056c269 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30 ; 0056c26e | void core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30(CDemonCamera * this_ptr, CDemonLight * light_source)
        ;   XREF to: 00450e30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056c273
    MOV EAX,[0x03276f30]                ; 0056c276 | int g_ActiveLightCount
        ;   Label: LAB_0056c276
    INC ESI                             ; 0056c27b
    ADD EDI,0x4                         ; 0056c27c
    CMP ESI,EAX                         ; 0056c27f
    JL 0x0056c259                       ; 0056c281 | LAB_0056c259
        ;   XREF to: 0056c259 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0056c283
        ;   Label: LAB_0056c283
    MOV ECX,dword ptr [0x032776b4]      ; 0056c285 | int g_DynamicLightCount
    MOV dword ptr [EBP + -0x18],EDX     ; 0056c28b
    TEST ECX,ECX                        ; 0056c28e
    JLE 0x0056c323                      ; 0056c290 | LAB_0056c323
        ;   XREF to: 0056c323 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],EDX      ; 0056c296
    MOV EAX,dword ptr [EBP + -0xc]      ; 0056c299
        ;   Label: LAB_0056c299
    MOV EAX,dword ptr [EAX + 0x32776b8] ; 0056c29c | CDemonLight *[4] g_DynamicLights
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0056c2a2
    JZ 0x0056c305                       ; 0056c2a9 | LAB_0056c305
        ;   XREF to: 0056c305 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x1cd0],0x0    ; 0056c2ab
    JZ 0x0056c305                       ; 0056c2b2 | LAB_0056c305
        ;   XREF to: 0056c305 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0056c2b4
    PUSH 0x32758e4                      ; 0056c2b5 | CDemonCamera g_CDemonCameraInstance
    XOR ESI,ESI                         ; 0056c2ba
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0 ; 0056c2bc | void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera * this_ptr, CDemonLight * light_source)
        ;   XREF to: 00450ac0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x15acb4]  ; 0056c2c1
    ADD ESP,0x8                         ; 0056c2c7
    TEST EAX,EAX                        ; 0056c2ca
    JLE 0x0056c305                      ; 0056c2cc | LAB_0056c305
        ;   XREF to: 0056c305 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + -0xc]      ; 0056c2ce
    PUSH 0x0                            ; 0056c2d1
        ;   Label: LAB_0056c2d1
    PUSH ESI                            ; 0056c2d3
    PUSH EBX                            ; 0056c2d4
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056c2d5 | void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c2da
    MOV EDX,dword ptr [EDI + 0x32776b8] ; 0056c2dd | CDemonLight *[4] g_DynamicLights
    PUSH EDX                            ; 0056c2e3
    PUSH 0x32758e4                      ; 0056c2e4 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0 ; 0056c2e9 | void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera * this_ptr, CDemonLight * light_source)
        ;   XREF to: 00450ac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056c2ee
    PUSH EBX                            ; 0056c2f1
    INC ESI                             ; 0056c2f2
    CALL core_set.cpp_FUN_00570af0      ; 0056c2f3 | undefined core_set.cpp_FUN_00570af0()
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x15acb4]  ; 0056c2f8
    ADD ESP,0x4                         ; 0056c2fe
    CMP ESI,ECX                         ; 0056c301
    JL 0x0056c2d1                       ; 0056c303 | LAB_0056c2d1
        ;   XREF to: 0056c2d1 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + -0xc]      ; 0056c305
        ;   Label: LAB_0056c305
    MOV ESI,dword ptr [EBP + -0x18]     ; 0056c308
    MOV EDI,dword ptr [0x032776b4]      ; 0056c30b | int g_DynamicLightCount
    ADD ECX,0x4                         ; 0056c311
    INC ESI                             ; 0056c314
    MOV dword ptr [EBP + -0xc],ECX      ; 0056c315
    MOV dword ptr [EBP + -0x18],ESI     ; 0056c318
    CMP ESI,EDI                         ; 0056c31b
    JL 0x0056c299                       ; 0056c31d | LAB_0056c299
        ;   XREF to: 0056c299 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0056c323
        ;   Label: LAB_0056c323
    MOV EDX,dword ptr [0x032776c8]      ; 0056c325 | int g_CoronaGlobeCount
    MOV dword ptr [EBP + -0x10],EAX     ; 0056c32b
    TEST EDX,EDX                        ; 0056c32e
    JLE 0x0056c3b1                      ; 0056c330 | LAB_0056c3b1
        ;   XREF to: 0056c3b1 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x8],EAX      ; 0056c336
    MOV EAX,dword ptr [EBP + -0x8]      ; 0056c339
        ;   Label: LAB_0056c339
    PUSH 0x0                            ; 0056c33c
    MOV EDX,dword ptr [EAX + 0x32776cc] ; 0056c33e | CDemonGlobe *[100] g_CoronaGlobes
    PUSH EDX                            ; 0056c344
    PUSH 0x32758e4                      ; 0056c345 | CDemonCamera g_CDemonCameraInstance
    XOR ESI,ESI                         ; 0056c34a
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 ; 0056c34c | void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera * this_ptr, void * p1, int p2)
        ;   XREF to: 004518f0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x15acb4]  ; 0056c351
    ADD ESP,0xc                         ; 0056c357
    TEST ECX,ECX                        ; 0056c35a
    JLE 0x0056c397                      ; 0056c35c | LAB_0056c397
        ;   XREF to: 0056c397 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + -0x8]      ; 0056c35e
    PUSH 0x0                            ; 0056c361
        ;   Label: LAB_0056c361
    PUSH ESI                            ; 0056c363
    PUSH EBX                            ; 0056c364
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056c365 | void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c36a
    PUSH 0x1                            ; 0056c36d
    MOV EAX,dword ptr [EDI + 0x32776cc] ; 0056c36f | CDemonGlobe *[100] g_CoronaGlobes
    PUSH EAX                            ; 0056c375
    PUSH 0x32758e4                      ; 0056c376 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 ; 0056c37b | void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera * this_ptr, void * p1, int p2)
        ;   XREF to: 004518f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c380
    PUSH EBX                            ; 0056c383
    INC ESI                             ; 0056c384
    CALL core_set.cpp_FUN_00570af0      ; 0056c385 | undefined core_set.cpp_FUN_00570af0()
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x15acb4]  ; 0056c38a
    ADD ESP,0x4                         ; 0056c390
    CMP ESI,EDX                         ; 0056c393
    JL 0x0056c361                       ; 0056c395 | LAB_0056c361
        ;   XREF to: 0056c361 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + -0x8]      ; 0056c397
        ;   Label: LAB_0056c397
    MOV EDI,dword ptr [EBP + -0x10]     ; 0056c39a
    MOV EDX,dword ptr [0x032776c8]      ; 0056c39d | int g_CoronaGlobeCount
    ADD ESI,0x4                         ; 0056c3a3
    INC EDI                             ; 0056c3a6
    MOV dword ptr [EBP + -0x8],ESI      ; 0056c3a7
    MOV dword ptr [EBP + -0x10],EDI     ; 0056c3aa
    CMP EDI,EDX                         ; 0056c3ad
    JL 0x0056c339                       ; 0056c3af | LAB_0056c339
        ;   XREF to: 0056c339 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0056c3b1
        ;   Label: LAB_0056c3b1
    MOV EDI,dword ptr [0x0327785c]      ; 0056c3b3 | undefined4 DAT_0327785c
    MOV dword ptr [EBP + -0x14],ECX     ; 0056c3b9
    MOV dword ptr [0x03277b80],ECX      ; 0056c3bc | undefined4 DAT_03277b80
    TEST EDI,EDI                        ; 0056c3c2
    JLE 0x0056c414                      ; 0056c3c4 | LAB_0056c414
        ;   XREF to: 0056c414 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0056c3c6
    MOV EAX,dword ptr [ESI + 0x32779f0] ; 0056c3c8 | undefined4 DAT_032779f0 | DAT_032779f4
        ;   Label: LAB_0056c3c8
    MOV EDI,dword ptr [ESI + 0x3277860] ; 0056c3ce | undefined4 DAT_03277860 | DAT_03277864
    TEST EAX,EAX                        ; 0056c3d4
    JNZ 0x0056c84a                      ; 0056c3d6 | LAB_0056c84a
        ;   XREF to: 0056c84a (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0056c3dc
    PUSH EDI                            ; 0056c3dd
    PUSH 0x32758e4                      ; 0056c3de | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 ; 0056c3e3 | void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera * this_ptr, void * p1, int p2)
        ;   XREF to: 004518f0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03277b80]                ; 0056c3e8 | undefined4 DAT_03277b80
    MOV dword ptr [EAX*0x4 + 0x3277b84],EDI ; 0056c3ed | undefined4 DAT_03277b84
    LEA EDI,[EAX + 0x1]                 ; 0056c3f4
    ADD ESP,0xc                         ; 0056c3f7
    MOV dword ptr [0x03277b80],EDI      ; 0056c3fa | undefined4 DAT_03277b80
    MOV EDI,dword ptr [EBP + -0x14]     ; 0056c400
        ;   Label: LAB_0056c400
    MOV EDX,dword ptr [0x0327785c]      ; 0056c403 | undefined4 DAT_0327785c
    INC EDI                             ; 0056c409
    ADD ESI,0x4                         ; 0056c40a
    MOV dword ptr [EBP + -0x14],EDI     ; 0056c40d
    CMP EDI,EDX                         ; 0056c410
    JL 0x0056c3c8                       ; 0056c412 | LAB_0056c3c8
        ;   XREF to: 0056c3c8 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0056c414
        ;   Label: LAB_0056c414
    MOV dword ptr [0x0327785c],ECX      ; 0056c416 | undefined4 DAT_0327785c
    MOV EAX,[0x0067b654]                ; 0056c41c | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_0056c41c
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056c421 | DAT_02d81ca8
    JZ 0x0056c432                       ; 0056c428 | LAB_0056c432
        ;   XREF to: 0056c432 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056c42a | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x34],EAX     ; 0056c42f
    PUSH 0x32758e4                      ; 0056c432 | CDemonCamera g_CDemonCameraInstance
        ;   Label: LAB_0056c432
    CALL core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 ; 0056c437 | int core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(CDemonCamera * this_ptr)
        ;   XREF to: 004511c0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 0056c43c | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x20c]     ; 0056c441 | DAT_02d81ca8
    ADD ESP,0x4                         ; 0056c447
    TEST ESI,ESI                        ; 0056c44a
    JZ 0x0056c456                       ; 0056c44c | LAB_0056c456
        ;   XREF to: 0056c456 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056c44e | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x2c],EAX     ; 0056c453
    PUSH 0xc                            ; 0056c456
        ;   Label: LAB_0056c456
    PUSH EBX                            ; 0056c458
    CALL core_set.cpp_CDemonSet_FUN_0056fbd0 ; 0056c459 | void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
        ;   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056c45e
    PUSH EBX                            ; 0056c461
    CALL core_set.cpp_CDemonSet_FUN_0056cd60 ; 0056c462 | void core_set.cpp_CDemonSet_FUN_0056cd60(CDemonSet * this_ptr)
        ;   XREF to: 0056cd60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c467
    PUSH 0x0                            ; 0056c46a
    PUSH 0x0                            ; 0056c46c
    PUSH 0x32758e4                      ; 0056c46e | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0 ; 0056c473 | void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera * this_ptr, CVector3f * position, float max_distance)
        ;   XREF to: 004537d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c478
    MOV EDI,dword ptr [0x0067b9a0]      ; 0056c47b | CGore * g_CGorePtr
    PUSH EDI                            ; 0056c481 | CGore g_CGoreInstance
    XOR ESI,ESI                         ; 0056c482
    CALL core_gore.cpp_CGore_FUN_004ed7b0 ; 0056c484 | void core_gore.cpp_CGore_FUN_004ed7b0(CGore * this_ptr)
        ;   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x15acb4]  ; 0056c489
    ADD ESP,0x4                         ; 0056c48f
    TEST EAX,EAX                        ; 0056c492
    JLE 0x0056c4d0                      ; 0056c494 | LAB_0056c4d0
        ;   XREF to: 0056c4d0 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c496
        ;   Label: LAB_0056c496
    PUSH ESI                            ; 0056c498
    PUSH EBX                            ; 0056c499
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056c49a | void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c49f
    MOV EDX,dword ptr [0x0067b9a0]      ; 0056c4a2 | CGore g_CGoreInstance | CGore * g_CGorePtr
    PUSH EDX                            ; 0056c4a8 | CGore g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ed7b0 ; 0056c4a9 | void core_gore.cpp_CGore_FUN_004ed7b0(CGore * this_ptr)
        ;   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c4ae
    PUSH EBX                            ; 0056c4b1
    INC ESI                             ; 0056c4b2
    CALL core_set.cpp_FUN_00570af0      ; 0056c4b3 | undefined core_set.cpp_FUN_00570af0()
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x15acb4]  ; 0056c4b8
    ADD ESP,0x4                         ; 0056c4be
    CMP ESI,ECX                         ; 0056c4c1
    JL 0x0056c496                       ; 0056c4c3 | LAB_0056c496
        ;   XREF to: 0056c496 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0056c4c5
    LEA EDX,[EDX]                       ; 0056c4cb | CGore g_CGoreInstance
    MOV EBX,EBX                         ; 0056c4ce
    MOV EAX,[0x006844f0]                ; 0056c4d0 | CWater g_CWaterInstance | CWater * g_CWaterPtr
        ;   Label: LAB_0056c4d0
    CMP dword ptr [EAX],0x0             ; 0056c4d5 | CWater g_CWaterInstance
    JZ 0x0056c4e5                       ; 0056c4d8 | LAB_0056c4e5
        ;   XREF to: 0056c4e5 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c4da
    PUSH EAX                            ; 0056c4dc | CWater g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005ea320 ; 0056c4dd | void core_water.cpp_CWater_render_FUN_005ea320(CWater * this_ptr, int render_mode)
        ;   XREF to: 005ea320 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056c4e2
    PUSH EBX                            ; 0056c4e5
        ;   Label: LAB_0056c4e5
    CALL core_set.cpp_CDemonSet_FUN_0056cf00 ; 0056c4e6 | void core_set.cpp_CDemonSet_FUN_0056cf00(CDemonSet * this_ptr)
        ;   XREF to: 0056cf00 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBX + 0x15aca8]  ; 0056c4eb
    ADD ESP,0x4                         ; 0056c4f1
    TEST EDI,EDI                        ; 0056c4f4
    JZ 0x0056c508                       ; 0056c4f6 | LAB_0056c508
        ;   XREF to: 0056c508 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c4f8
    MOV EAX,[0x006843f8]                ; 0056c4fa | CTerrain g_CTerrainInstance | CTerrain * g_CTerrainPtr
    PUSH EAX                            ; 0056c4ff | CTerrain g_CTerrainInstance
    CALL core_terrain.cpp_CTerrain_render_FUN_005e1f50 ; 0056c500 | void core_terrain.cpp_CTerrain_render_FUN_005e1f50(CTerrain * this_ptr)
        ;   XREF to: 005e1f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056c505
    MOV EDX,dword ptr [0x0067a3d0]      ; 0056c508 | CFireEffect g_CFireEffectInstance | CFireEffect * g_CFireEffectPtr
        ;   Label: LAB_0056c508
    PUSH EDX                            ; 0056c50e | CFireEffect g_CFireEffectInstance
    XOR ESI,ESI                         ; 0056c50f
    CALL core_fire.cpp_CFireEffect_render_FUN_004c7180 ; 0056c511 | void core_fire.cpp_CFireEffect_render_FUN_004c7180(CFireEffect * this_ptr)
        ;   XREF to: 004c7180 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x15acb4]  ; 0056c516
    ADD ESP,0x4                         ; 0056c51c
    TEST ECX,ECX                        ; 0056c51f
    JLE 0x0056c560                      ; 0056c521 | LAB_0056c560
        ;   XREF to: 0056c560 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c523
        ;   Label: LAB_0056c523
    PUSH ESI                            ; 0056c525
    PUSH EBX                            ; 0056c526
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056c527 | void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c52c
    MOV EDI,dword ptr [0x0067a3d0]      ; 0056c52f | CFireEffect * g_CFireEffectPtr
    PUSH EDI                            ; 0056c535 | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_render_FUN_004c7180 ; 0056c536 | void core_fire.cpp_CFireEffect_render_FUN_004c7180(CFireEffect * this_ptr)
        ;   XREF to: 004c7180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c53b
    PUSH EBX                            ; 0056c53e
    INC ESI                             ; 0056c53f
    CALL core_set.cpp_FUN_00570af0      ; 0056c540 | undefined core_set.cpp_FUN_00570af0()
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x15acb4]  ; 0056c545
    ADD ESP,0x4                         ; 0056c54b
    CMP ESI,EAX                         ; 0056c54e
    JL 0x0056c523                       ; 0056c550 | LAB_0056c523
        ;   XREF to: 0056c523 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0056c552
    LEA EDX,[EDX]                       ; 0056c558 | CFireEffect g_CFireEffectInstance
    MOV EAX,EAX                         ; 0056c55e
    MOV EDX,dword ptr [0x006848fc]      ; 0056c560 | CWeather g_CWeatherInstance | CWeather * g_CWeatherPtr
        ;   Label: LAB_0056c560
    PUSH EDX                            ; 0056c566 | CWeather g_CWeatherInstance
    CALL core_weather.cpp_CWeather_FUN_005ef190 ; 0056c567 | undefined core_weather.cpp_CWeather_FUN_005ef190()
        ;   XREF to: 005ef190 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x032776b4]      ; 0056c56c | int g_DynamicLightCount
    XOR ECX,ECX                         ; 0056c572
    ADD ESP,0x4                         ; 0056c574
    MOV dword ptr [EBP + -0x1c],ECX     ; 0056c577
    TEST ESI,ESI                        ; 0056c57a
    JLE 0x0056c5b1                      ; 0056c57c | LAB_0056c5b1
        ;   XREF to: 0056c5b1 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x24],ECX     ; 0056c57e
    MOV EDI,dword ptr [EBP + -0x24]     ; 0056c581
        ;   Label: LAB_0056c581
    MOV EDI,dword ptr [EDI + 0x32776b8] ; 0056c584 | CDemonLight *[4] g_DynamicLights
    CMP dword ptr [EDI + 0x1cb4],0x0    ; 0056c58a
    JNZ 0x0056c875                      ; 0056c591 | LAB_0056c875
        ;   XREF to: 0056c875 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + -0x24]     ; 0056c597
        ;   Label: LAB_0056c597
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0056c59a
    MOV EDX,dword ptr [0x032776b4]      ; 0056c59d | int g_DynamicLightCount
    ADD EDI,0x4                         ; 0056c5a3
    INC EAX                             ; 0056c5a6
    MOV dword ptr [EBP + -0x24],EDI     ; 0056c5a7
    MOV dword ptr [EBP + -0x1c],EAX     ; 0056c5aa
    CMP EAX,EDX                         ; 0056c5ad
    JL 0x0056c581                       ; 0056c5af | LAB_0056c581
        ;   XREF to: 0056c581 (CONDITIONAL_JUMP)
    PUSH 0x32758e4                      ; 0056c5b1 | CDemonCamera g_CDemonCameraInstance
        ;   Label: LAB_0056c5b1
    CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70 ; 0056c5b6 | void core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera * this_ptr)
        ;   XREF to: 0044cc70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c5bb
    PUSH 0x1                            ; 0056c5be
    PUSH 0x0                            ; 0056c5c0
    MOV ECX,dword ptr [0x0067b9a0]      ; 0056c5c2 | CGore g_CGoreInstance | CGore * g_CGorePtr
    PUSH ECX                            ; 0056c5c8 | CGore g_CGoreInstance
    CALL core_gore.cpp_FUN_004ed830     ; 0056c5c9 | void core_gore.cpp_FUN_004ed830(CGore * this_ptr)
        ;   XREF to: 004ed830 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c5ce
    PUSH 0x1                            ; 0056c5d1
    PUSH 0x0                            ; 0056c5d3
    MOV ESI,dword ptr [0x0067a3d0]      ; 0056c5d5 | CFireEffect * g_CFireEffectPtr
    PUSH ESI                            ; 0056c5db | CFireEffect g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 ; 0056c5dc | void core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
        ;   XREF to: 004c74a0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x006844f0]                ; 0056c5e1 | CWater g_CWaterInstance | CWater * g_CWaterPtr
    MOV EDI,dword ptr [EAX]             ; 0056c5e6 | CWater g_CWaterInstance
    ADD ESP,0xc                         ; 0056c5e8
    TEST EDI,EDI                        ; 0056c5eb
    JNZ 0x0056c5f9                      ; 0056c5ed | LAB_0056c5f9
        ;   XREF to: 0056c5f9 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0056c5ef
    PUSH EAX                            ; 0056c5f0 | CWater g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005ea320 ; 0056c5f1 | void core_water.cpp_CWater_render_FUN_005ea320(CWater * this_ptr, int render_mode)
        ;   XREF to: 005ea320 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056c5f6
    MOV EAX,dword ptr [EBX + 0x14d154]  ; 0056c5f9
        ;   Label: LAB_0056c5f9
    XOR EDI,EDI                         ; 0056c5ff
    TEST EAX,EAX                        ; 0056c601
    JLE 0x0056c63d                      ; 0056c603 | LAB_0056c63d
        ;   XREF to: 0056c63d (CONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 0056c605
    MOV EAX,[0x02d83360]                ; 0056c607 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0056c607
    PUSH EAX                            ; 0056c60c
    MOV EDX,dword ptr [ESI + 0x14d158]  ; 0056c60d
    PUSH EDX                            ; 0056c613
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0056c614 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056c619
    TEST EAX,EAX                        ; 0056c61c
    JZ 0x0056c62f                       ; 0056c61e | LAB_0056c62f
        ;   XREF to: 0056c62f (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c620
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056c622
    PUSH EAX                            ; 0056c628
    CALL dword ptr [EDX + 0x10]         ; 0056c629
    ADD ESP,0x8                         ; 0056c62c
    INC EDI                             ; 0056c62f
        ;   Label: LAB_0056c62f
    MOV EDX,dword ptr [EBX + 0x14d154]  ; 0056c630
    ADD ESI,0x4                         ; 0056c636
    CMP EDI,EDX                         ; 0056c639
    JL 0x0056c607                       ; 0056c63b | LAB_0056c607
        ;   XREF to: 0056c607 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c63d
        ;   Label: LAB_0056c63d
    PUSH 0x32758e4                      ; 0056c63f | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 ; 0056c644 | int core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera * this_ptr, int restore_zbuffer)
        ;   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x032776b4]      ; 0056c649 | int g_DynamicLightCount
    XOR ECX,ECX                         ; 0056c64f
    ADD ESP,0x8                         ; 0056c651
    MOV dword ptr [EBP + -0x20],ECX     ; 0056c654
    TEST ESI,ESI                        ; 0056c657
    JLE 0x0056c68e                      ; 0056c659 | LAB_0056c68e
        ;   XREF to: 0056c68e (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x28],ECX     ; 0056c65b
    MOV EDI,dword ptr [EBP + -0x28]     ; 0056c65e
        ;   Label: LAB_0056c65e
    MOV EDI,dword ptr [EDI + 0x32776b8] ; 0056c661 | CDemonLight *[4] g_DynamicLights
    CMP dword ptr [EDI + 0x1cb4],0x0    ; 0056c667
    JNZ 0x0056c8e8                      ; 0056c66e | LAB_0056c8e8
        ;   XREF to: 0056c8e8 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + -0x28]     ; 0056c674
        ;   Label: LAB_0056c674
    MOV EDI,dword ptr [EBP + -0x20]     ; 0056c677
    MOV EDX,dword ptr [0x032776b4]      ; 0056c67a | int g_DynamicLightCount
    ADD ESI,0x4                         ; 0056c680
    INC EDI                             ; 0056c683
    MOV dword ptr [EBP + -0x28],ESI     ; 0056c684
    MOV dword ptr [EBP + -0x20],EDI     ; 0056c687
    CMP EDI,EDX                         ; 0056c68a
    JL 0x0056c65e                       ; 0056c68c | LAB_0056c65e
        ;   XREF to: 0056c65e (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 0056c68e | int g_LocalHeroIndex
        ;   Label: LAB_0056c68e
    SHL EAX,0x2                         ; 0056c693
    MOV ECX,dword ptr [EAX + 0x2db87c0] ; 0056c696 | CHero *[4] g_HeroActors
    TEST ECX,ECX                        ; 0056c69c
    JZ 0x0056c6b0                       ; 0056c69e | LAB_0056c6b0
        ;   XREF to: 0056c6b0 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067d550]      ; 0056c6a0 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    CMP dword ptr [EDX + 0x4],0x0       ; 0056c6a6 | DAT_02f33744
    JZ 0x0056c95b                       ; 0056c6aa | LAB_0056c95b
        ;   XREF to: 0056c95b (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c6b0
        ;   Label: LAB_0056c6b0
    PUSH 0x32758e4                      ; 0056c6b2 | CDemonCamera g_CDemonCameraInstance
    XOR EDI,EDI                         ; 0056c6b7
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0056c6b9 | void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03276f30]                ; 0056c6be | int g_ActiveLightCount
    ADD ESP,0x8                         ; 0056c6c3
    TEST EAX,EAX                        ; 0056c6c6
    JLE 0x0056c6f0                      ; 0056c6c8 | LAB_0056c6f0
        ;   XREF to: 0056c6f0 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0056c6ca
    MOV EDX,dword ptr [ESI + 0x3276f34] ; 0056c6cc | CDemonLight *[96] g_ActiveLightList
        ;   Label: LAB_0056c6cc
    PUSH EDX                            ; 0056c6d2
    ADD ESI,0x4                         ; 0056c6d3
    INC EDI                             ; 0056c6d6
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 ; 0056c6d7 | void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight * this_ptr)
        ;   XREF to: 00472f80 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x03276f30]      ; 0056c6dc | int g_ActiveLightCount
    ADD ESP,0x4                         ; 0056c6e2
    CMP EDI,ECX                         ; 0056c6e5
    JL 0x0056c6cc                       ; 0056c6e7 | LAB_0056c6cc
        ;   XREF to: 0056c6cc (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0056c6e9
    NOP                                 ; 0056c6ef
    MOV EAX,[0x0067b654]                ; 0056c6f0 | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_0056c6f0
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056c6f5 | DAT_02d81ca8
    JZ 0x0056c79f                       ; 0056c6fc | LAB_0056c79f
        ;   XREF to: 0056c79f (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + -0x2c]     ; 0056c702
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056c705 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    SUB EAX,EDI                         ; 0056c70a
    MOV dword ptr [EBP + -0x4],EAX      ; 0056c70c
    FLD double ptr [0x00645d93]         ; 0056c70f | double DOUBLE_00645d93
    FILD dword ptr [EBP + -0x4]         ; 0056c715
    FMUL ST1                            ; 0056c718
    MOV EAX,[0x0067b654]                ; 0056c71a | CGame * g_CGamePtr
    MOV EDX,dword ptr [EBP + -0x30]     ; 0056c71f
    FLD float ptr [EAX + 0x264]         ; 0056c722 | g_CGameInstance.delta_time_float
    MOV EAX,EDI                         ; 0056c728
    FXCH                                ; 0056c72a
    FLD double ptr [0x00645d9b]         ; 0056c72c | double DOUBLE_00645d9b
    FXCH                                ; 0056c732
    FMUL ST1                            ; 0056c734
    SUB EAX,EDX                         ; 0056c736
    MOV dword ptr [EBP + -0x4],EAX      ; 0056c738
    FLD double ptr [0x00645da3]         ; 0056c73b | double DOUBLE_00645da3
    FXCH                                ; 0056c741
    FMUL ST1                            ; 0056c743
    FILD dword ptr [EBP + -0x4]         ; 0056c745
    MOV EAX,dword ptr [EBP + -0x34]     ; 0056c748
    FMUL ST5                            ; 0056c74b
    SUB EAX,EDX                         ; 0056c74d
    MOV dword ptr [EBP + -0x4],EAX      ; 0056c74f
    FMUL ST3                            ; 0056c752
    FILD dword ptr [EBP + -0x4]         ; 0056c754
    FMULP ST6                           ; 0056c757
    FMUL ST2                            ; 0056c759
    FXCH ST5                            ; 0056c75b
    FMULP ST3                           ; 0056c75d
    FLD1                                ; 0056c75f
    FXCH ST3                            ; 0056c761
    FMULP ST2                           ; 0056c763
    FXCH ST2                            ; 0056c765
    FDIVRP ST3,ST0                      ; 0056c767
    FXCH                                ; 0056c769
    FMUL ST2                            ; 0056c76b
    FXCH ST3                            ; 0056c76d
    FMUL ST2                            ; 0056c76f
    FXCH                                ; 0056c771
    FMULP ST2                           ; 0056c773
    SUB ESP,0x8                         ; 0056c775
    FXCH ST2                            ; 0056c778
    FSTP double ptr [ESP]               ; 0056c77a
    SUB ESP,0x8                         ; 0056c77d
    FXCH                                ; 0056c780
    FSTP double ptr [ESP]               ; 0056c782
    SUB ESP,0x8                         ; 0056c785
    FSTP double ptr [ESP]               ; 0056c788
    PUSH 0x645d6b                       ; 0056c78b | = "comp: %3.2f/%3.2f actren : %3.2f\n" | s_comp_3_2f_3_2f_actren_3__00645d6b = comp: %3.2f/%3.2f actren : %3.2f

    MOV ESI,dword ptr [0x0066e8e0]      ; 0056c790 | CConsole * g_CConsolePtr
    PUSH ESI                            ; 0056c796 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0056c797 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 0056c79c
    MOV EAX,[0x0067b654]                ; 0056c79f | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_0056c79f
    CMP dword ptr [EAX + 0x1e8],0x0     ; 0056c7a4 | DAT_02d81c84
    JZ 0x0056c7b6                       ; 0056c7ab | LAB_0056c7b6
        ;   XREF to: 0056c7b6 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0056c7ad
    CALL core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70 ; 0056c7ae | void core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet * this_ptr)
        ;   XREF to: 00575f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c7b3
    MOV EAX,dword ptr [EBX + 0x14d154]  ; 0056c7b6
        ;   Label: LAB_0056c7b6
    XOR EDX,EDX                         ; 0056c7bc
    TEST EAX,EAX                        ; 0056c7be
    JLE 0x0056c806                      ; 0056c7c0 | LAB_0056c806
        ;   XREF to: 0056c806 (CONDITIONAL_JUMP)
    MOV ECX,EBX                         ; 0056c7c2
    MOV ESI,dword ptr [ECX + 0x14d158]  ; 0056c7c4
        ;   Label: LAB_0056c7c4
    LEA EDI,[ESI + 0x128]               ; 0056c7ca
    LEA EAX,[ESI + 0x20]                ; 0056c7d0
    CMP EDI,EAX                         ; 0056c7d3
    JNZ 0x0056c96f                      ; 0056c7d5 | LAB_0056c96f
        ;   XREF to: 0056c96f (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x134]               ; 0056c7db
        ;   Label: LAB_0056c7db
    ADD ESI,0x30                        ; 0056c7e1
    CMP EAX,ESI                         ; 0056c7e4
    JZ 0x0056c7f8                       ; 0056c7e6 | LAB_0056c7f8
        ;   XREF to: 0056c7f8 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI]             ; 0056c7e8
    MOV dword ptr [EAX],EDI             ; 0056c7ea
    MOV EDI,dword ptr [ESI + 0x4]       ; 0056c7ec
    MOV dword ptr [EAX + 0x4],EDI       ; 0056c7ef
    MOV EDI,dword ptr [ESI + 0x8]       ; 0056c7f2
    MOV dword ptr [EAX + 0x8],EDI       ; 0056c7f5
    INC EDX                             ; 0056c7f8
        ;   Label: LAB_0056c7f8
    MOV ESI,dword ptr [EBX + 0x14d154]  ; 0056c7f9
    ADD ECX,0x4                         ; 0056c7ff
    CMP EDX,ESI                         ; 0056c802
    JL 0x0056c7c4                       ; 0056c804 | LAB_0056c7c4
        ;   XREF to: 0056c7c4 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0056c806
        ;   Label: LAB_0056c806
    POP EBP                             ; 0056c808
    POP EDI                             ; 0056c809
    POP ESI                             ; 0056c80a
    POP EBX                             ; 0056c80b
    RET                                 ; 0056c80c
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056c80d | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_0056c80d
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x30],EAX     ; 0056c812
    JMP 0x0056c1c1                      ; 0056c815 | LAB_0056c1c1
        ;   XREF to: 0056c1c1 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0056c81a
        ;   Label: LAB_0056c81a
    CALL core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320 ; 0056c81b | int core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320(CDemonSet * this_ptr)
        ;   XREF to: 00571320 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c820
    TEST EAX,EAX                        ; 0056c823
    JZ 0x0056c1c9                       ; 0056c825 | LAB_0056c1c9
        ;   XREF to: 0056c1c9 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0056c82b
    ADD ESP,0x4                         ; 0056c82c
    MOV ESP,EBP                         ; 0056c82f
    POP EBP                             ; 0056c831
    POP EDI                             ; 0056c832
    POP ESI                             ; 0056c833
    POP EBX                             ; 0056c834
    RET                                 ; 0056c835
    MOV EAX,[0x0067b654]                ; 0056c836 | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_0056c836
    CMP dword ptr [EAX + 0x24],0x0      ; 0056c83b | DAT_02d81ac0
    JNZ 0x0056c236                      ; 0056c83f | LAB_0056c236
        ;   XREF to: 0056c236 (CONDITIONAL_JUMP)
    JMP 0x0056c41c                      ; 0056c845 | LAB_0056c41c
        ;   XREF to: 0056c41c (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c84a
        ;   Label: LAB_0056c84a
    DEC EAX                             ; 0056c84c
    PUSH EAX                            ; 0056c84d
    PUSH EBX                            ; 0056c84e
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056c84f | void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c854
    PUSH 0x1                            ; 0056c857
    PUSH EDI                            ; 0056c859
    PUSH 0x32758e4                      ; 0056c85a | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 ; 0056c85f | void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera * this_ptr, void * p1, int p2)
        ;   XREF to: 004518f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c864
    PUSH EBX                            ; 0056c867
    CALL core_set.cpp_FUN_00570af0      ; 0056c868 | undefined core_set.cpp_FUN_00570af0()
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c86d
    JMP 0x0056c400                      ; 0056c870 | LAB_0056c400
        ;   XREF to: 0056c400 (UNCONDITIONAL_JUMP)
    LEA ESI,[EDI + 0x4]                 ; 0056c875
        ;   Label: LAB_0056c875
    MOV EAX,dword ptr [ESI]             ; 0056c878
    MOV dword ptr [EBP + -0x54],EAX     ; 0056c87a
    LEA EAX,[ESI + 0x4]                 ; 0056c87d
    MOV EAX,dword ptr [EAX]             ; 0056c880
    MOV dword ptr [EBP + -0x50],EAX     ; 0056c882
    LEA EAX,[ESI + 0x8]                 ; 0056c885
    MOV EAX,dword ptr [EAX]             ; 0056c888
    PUSH 0x0                            ; 0056c88a
    MOV dword ptr [EBP + -0x4c],EAX     ; 0056c88c
    LEA EAX,[EBP + -0x54]               ; 0056c88f
    PUSH EAX                            ; 0056c892
    PUSH 0x32758e4                      ; 0056c893 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0 ; 0056c898 | void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera * this_ptr, CVector3f * position, float max_distance)
        ;   XREF to: 004537d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c89d
    PUSH EDI                            ; 0056c8a0
    XOR ESI,ESI                         ; 0056c8a1
    CALL core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 ; 0056c8a3 | void core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight * this_ptr)
        ;   XREF to: 00473a20 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x15acb4]  ; 0056c8a8
    ADD ESP,0x4                         ; 0056c8ae
    TEST EAX,EAX                        ; 0056c8b1
    JLE 0x0056c597                      ; 0056c8b3 | LAB_0056c597
        ;   XREF to: 0056c597 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c8b9
        ;   Label: LAB_0056c8b9
    PUSH ESI                            ; 0056c8bb
    PUSH EBX                            ; 0056c8bc
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056c8bd | void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c8c2
    PUSH EDI                            ; 0056c8c5
    CALL core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 ; 0056c8c6 | void core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight * this_ptr)
        ;   XREF to: 00473a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c8cb
    PUSH EBX                            ; 0056c8ce
    INC ESI                             ; 0056c8cf
    CALL core_set.cpp_FUN_00570af0      ; 0056c8d0 | undefined core_set.cpp_FUN_00570af0()
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x15acb4]  ; 0056c8d5
    ADD ESP,0x4                         ; 0056c8db
    CMP ESI,ECX                         ; 0056c8de
    JGE 0x0056c597                      ; 0056c8e0 | LAB_0056c597
        ;   XREF to: 0056c597 (CONDITIONAL_JUMP)
    JMP 0x0056c8b9                      ; 0056c8e6 | LAB_0056c8b9
        ;   XREF to: 0056c8b9 (UNCONDITIONAL_JUMP)
    LEA ESI,[EDI + 0x4]                 ; 0056c8e8
        ;   Label: LAB_0056c8e8
    MOV EAX,dword ptr [ESI]             ; 0056c8eb
    MOV dword ptr [EBP + -0x48],EAX     ; 0056c8ed
    LEA EAX,[ESI + 0x4]                 ; 0056c8f0
    MOV EAX,dword ptr [EAX]             ; 0056c8f3
    MOV dword ptr [EBP + -0x44],EAX     ; 0056c8f5
    LEA EAX,[ESI + 0x8]                 ; 0056c8f8
    MOV EAX,dword ptr [EAX]             ; 0056c8fb
    PUSH 0x0                            ; 0056c8fd
    MOV dword ptr [EBP + -0x40],EAX     ; 0056c8ff
    LEA EAX,[EBP + -0x48]               ; 0056c902
    PUSH EAX                            ; 0056c905
    PUSH 0x32758e4                      ; 0056c906 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0 ; 0056c90b | void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera * this_ptr, CVector3f * position, float max_distance)
        ;   XREF to: 004537d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c910
    PUSH EDI                            ; 0056c913
    XOR ESI,ESI                         ; 0056c914
    CALL core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 ; 0056c916 | void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight * this_ptr)
        ;   XREF to: 00473f90 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x15acb4]  ; 0056c91b
    ADD ESP,0x4                         ; 0056c921
    TEST EAX,EAX                        ; 0056c924
    JLE 0x0056c674                      ; 0056c926 | LAB_0056c674
        ;   XREF to: 0056c674 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056c92c
        ;   Label: LAB_0056c92c
    PUSH ESI                            ; 0056c92e
    PUSH EBX                            ; 0056c92f
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056c930 | void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056c935
    PUSH EDI                            ; 0056c938
    CALL core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 ; 0056c939 | void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight * this_ptr)
        ;   XREF to: 00473f90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c93e
    PUSH EBX                            ; 0056c941
    INC ESI                             ; 0056c942
    CALL core_set.cpp_FUN_00570af0      ; 0056c943 | undefined core_set.cpp_FUN_00570af0()
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x15acb4]  ; 0056c948
    ADD ESP,0x4                         ; 0056c94e
    CMP ESI,EAX                         ; 0056c951
    JGE 0x0056c674                      ; 0056c953 | LAB_0056c674
        ;   XREF to: 0056c674 (CONDITIONAL_JUMP)
    JMP 0x0056c92c                      ; 0056c959 | LAB_0056c92c
        ;   XREF to: 0056c92c (UNCONDITIONAL_JUMP)
    LEA EAX,[ECX + 0x1f738]             ; 0056c95b
        ;   Label: LAB_0056c95b
    PUSH EAX                            ; 0056c961
    CALL core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370 ; 0056c962 | void core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory * this_ptr)
        ;   XREF to: 00500370 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056c967
    JMP 0x0056c6b0                      ; 0056c96a | LAB_0056c6b0
        ;   XREF to: 0056c6b0 (UNCONDITIONAL_JUMP)
    FLD float ptr [EAX]                 ; 0056c96f
        ;   Label: LAB_0056c96f
    FSTP float ptr [EDI]                ; 0056c971
    FLD float ptr [EAX + 0x4]           ; 0056c973
    FSTP float ptr [EDI + 0x4]          ; 0056c976
    FLD float ptr [EAX + 0x8]           ; 0056c979
    FSTP float ptr [EDI + 0x8]          ; 0056c97c
    JMP 0x0056c7db                      ; 0056c97f | LAB_0056c7db
        ;   XREF to: 0056c7db (UNCONDITIONAL_JUMP)

