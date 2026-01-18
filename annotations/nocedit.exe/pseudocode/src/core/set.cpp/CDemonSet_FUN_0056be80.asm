; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056be80(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
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
; XREF[4]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da3a2
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 00539534
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c1e8
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b04c
;
; Referenced Globals:
;   TerminatedCString s_renderStaticLights_3_2f__00645d33
;   double DOUBLE_00645d53 = 0.0555555555555556
;   double DOUBLE_00645d5b = 0.0000152587890625
;   double DOUBLE_00645d63 = 1000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   CConsole g_ConsolePtr
;   CDemonLight* g_CurrentShadowLight
;   CDemonRenderer g_CDemonRendererInstance
;   CFireEffect g_CFireEffectInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81ac0
;   ... and 10 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
;   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
;   core_fire.cpp_CFireEffect_render_FUN_004c7180
;   core_gore.cpp_CGore_FUN_004ed7b0
;   core_set.cpp_CDemonSet_FUN_0056aca0
;   core_set.cpp_CDemonSet_FUN_0056fbd0
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
;   core_set.cpp_FUN_00570af0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056be80
        ;   Label: core_set.cpp_CDemonSet_FUN_0056be80
    PUSH ESI                            ; 0056be81
    PUSH EDI                            ; 0056be82
    PUSH EBP                            ; 0056be83
    SUB ESP,0x30                        ; 0056be84
    MOV ESI,dword ptr [ESP + 0x44]      ; 0056be87
    MOV EAX,[0x0067b654]                ; 0056be8b | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x24],0x0      ; 0056be90 | DAT_02d81ac0
    JZ 0x0056bf5b                       ; 0056be94
        ;   XREF to: 0056bf5b (CONDITIONAL_JUMP)  ; LAB_0056bf5b
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056be9a | DAT_02d81ca8
    JNZ 0x0056bf63                      ; 0056bea1
        ;   XREF to: 0056bf63 (CONDITIONAL_JUMP)  ; LAB_0056bf63
    XOR EBX,EBX                         ; 0056bea7
        ;   Label: LAB_0056bea7
    MOV EBP,dword ptr [0x032776b4]      ; 0056bea9 | g_DynamicLightCount
    MOV dword ptr [ESP + 0x18],EBX      ; 0056beaf
    MOV dword ptr [0x03277d14],EBX      ; 0056beb3 | g_CDemonRaytraceInstance
    TEST EBP,EBP                        ; 0056beb9
    JLE 0x0056befb                      ; 0056bebb
        ;   XREF to: 0056befb (CONDITIONAL_JUMP)  ; LAB_0056befb
    MOV dword ptr [ESP + 0x10],EBX      ; 0056bebd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056bec1
        ;   Label: LAB_0056bec1
    MOV EAX,dword ptr [EAX + 0x32776b8] ; 0056bec5 | g_DynamicLights | DAT_032776bc
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 0056becb
    MOV dword ptr [ESP + 0x24],EAX      ; 0056bed1
    TEST EDX,EDX                        ; 0056bed5
    JNZ 0x0056bf71                      ; 0056bed7
        ;   XREF to: 0056bf71 (CONDITIONAL_JUMP)  ; LAB_0056bf71
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056bedd
        ;   Label: LAB_0056bedd
    MOV EDX,dword ptr [ESP + 0x18]      ; 0056bee1
    MOV ECX,dword ptr [0x032776b4]      ; 0056bee5 | g_DynamicLightCount
    ADD EAX,0x4                         ; 0056beeb
    INC EDX                             ; 0056beee
    MOV dword ptr [ESP + 0x10],EAX      ; 0056beef
    MOV dword ptr [ESP + 0x18],EDX      ; 0056bef3
    CMP EDX,ECX                         ; 0056bef7
    JL 0x0056bec1                       ; 0056bef9
        ;   XREF to: 0056bec1 (CONDITIONAL_JUMP)  ; LAB_0056bec1
    XOR EBX,EBX                         ; 0056befb
        ;   Label: LAB_0056befb
    MOV EDI,dword ptr [0x03276f30]      ; 0056befd | g_ActiveLightCount
    MOV dword ptr [ESP + 0x1c],EBX      ; 0056bf03
    TEST EDI,EDI                        ; 0056bf07
    JLE 0x0056bf49                      ; 0056bf09
        ;   XREF to: 0056bf49 (CONDITIONAL_JUMP)  ; LAB_0056bf49
    MOV dword ptr [ESP + 0x14],EBX      ; 0056bf0b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0056bf0f
        ;   Label: LAB_0056bf0f
    MOV EAX,dword ptr [EAX + 0x3276f34] ; 0056bf13 | g_ActiveLightList | DAT_03276f38
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 0056bf19
    MOV dword ptr [ESP + 0x20],EAX      ; 0056bf1f
    TEST EDX,EDX                        ; 0056bf23
    JNZ 0x0056c09c                      ; 0056bf25
        ;   XREF to: 0056c09c (CONDITIONAL_JUMP)  ; LAB_0056c09c
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056bf2b
        ;   Label: LAB_0056bf2b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056bf2f
    MOV EBX,dword ptr [0x03276f30]      ; 0056bf33 | g_ActiveLightCount
    ADD EDX,0x4                         ; 0056bf39
    INC ECX                             ; 0056bf3c
    MOV dword ptr [ESP + 0x14],EDX      ; 0056bf3d
    MOV dword ptr [ESP + 0x1c],ECX      ; 0056bf41
    CMP ECX,EBX                         ; 0056bf45
    JL 0x0056bf0f                       ; 0056bf47
        ;   XREF to: 0056bf0f (CONDITIONAL_JUMP)  ; LAB_0056bf0f
    MOV EAX,[0x0067b654]                ; 0056bf49 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_0056bf49
    CMP dword ptr [EAX + 0x20c],0x0     ; 0056bf4e | DAT_02d81ca8
    JNZ 0x0056c147                      ; 0056bf55
        ;   XREF to: 0056c147 (CONDITIONAL_JUMP)  ; LAB_0056c147
    ADD ESP,0x30                        ; 0056bf5b
        ;   Label: LAB_0056bf5b
    POP EBP                             ; 0056bf5e
    POP EDI                             ; 0056bf5f
    POP ESI                             ; 0056bf60
    POP EBX                             ; 0056bf61
    RET                                 ; 0056bf62
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056bf63
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_0056bf63
    MOV dword ptr [ESP + 0x8],EAX       ; 0056bf68
    JMP 0x0056bea7                      ; 0056bf6c
        ;   XREF to: 0056bea7 (UNCONDITIONAL_JUMP)  ; LAB_0056bea7
    PUSH 0x0                            ; 0056bf71
        ;   Label: LAB_0056bf71
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056bf73
    MOV EAX,dword ptr [EAX + 0x140]     ; 0056bf77
    PUSH ECX                            ; 0056bf7d
    MOV dword ptr [ESP + 0x14],EAX      ; 0056bf7e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 ; 0056bf82
        ;   XREF to: 00472a80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056bf87
    MOV EBX,dword ptr [ESP + 0x24]      ; 0056bf8a
    PUSH EBX                            ; 0056bf8e
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0 ; 0056bf8f
        ;   XREF to: 004735c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight * this_ptr)
    MOV EDI,dword ptr [EBX + 0x1cd0]    ; 0056bf94
    ADD ESP,0x4                         ; 0056bf9a
    TEST EDI,EDI                        ; 0056bf9d
    JZ 0x0056c07a                       ; 0056bf9f
        ;   XREF to: 0056c07a (CONDITIONAL_JUMP)  ; LAB_0056c07a
    PUSH 0x0                            ; 0056bfa5
    PUSH dword ptr [EBX + 0x140]        ; 0056bfa7
    PUSH ESI                            ; 0056bfad
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0056bfae
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0056bfb3
    PUSH 0x1                            ; 0056bfb6
    PUSH ESI                            ; 0056bfb8
    CALL core_set.cpp_CDemonSet_FUN_0056fbd0 ; 0056bfb9
        ;   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056bfbe
    PUSH 0x0                            ; 0056bfc1
    PUSH ESI                            ; 0056bfc3
    XOR EBP,EBP                         ; 0056bfc4
    CALL core_set.cpp_CDemonSet_FUN_0056aca0 ; 0056bfc6
        ;   XREF to: 0056aca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056bfcb
    MOV EAX,dword ptr [ESI + 0x15f6e4]  ; 0056bfce
    MOV dword ptr [ESP + 0x28],EBP      ; 0056bfd4
    TEST EAX,EAX                        ; 0056bfd8
    JLE 0x0056c05c                      ; 0056bfda
        ;   XREF to: 0056c05c (CONDITIONAL_JUMP)  ; LAB_0056c05c
    MOV EBP,ESI                         ; 0056bfe0
    MOV EAX,dword ptr [EBP + 0x15f6e8]  ; 0056bfe2
        ;   Label: LAB_0056bfe2
    PUSH EAX                            ; 0056bfe8
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056bfe9
    XOR EBX,EBX                         ; 0056bfef
    CALL dword ptr [EDX + 0x8]          ; 0056bff1
    MOV EAX,dword ptr [ESI + 0x15acb4]  ; 0056bff4
    ADD ESP,0x4                         ; 0056bffa
    TEST EAX,EAX                        ; 0056bffd
    JLE 0x0056c036                      ; 0056bfff
        ;   XREF to: 0056c036 (CONDITIONAL_JUMP)  ; LAB_0056c036
    MOV EDI,EBP                         ; 0056c001
    PUSH 0x0                            ; 0056c003
        ;   Label: LAB_0056c003
    PUSH EBX                            ; 0056c005
    PUSH ESI                            ; 0056c006
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056c007
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0056c00c
    MOV EAX,dword ptr [EDI + 0x15f6e8]  ; 0056c00f
    PUSH EAX                            ; 0056c015
    MOV EDX,dword ptr [EAX + 0x154]     ; 0056c016
    CALL dword ptr [EDX + 0x8]          ; 0056c01c
    ADD ESP,0x4                         ; 0056c01f
    PUSH ESI                            ; 0056c022
    INC EBX                             ; 0056c023
    CALL core_set.cpp_FUN_00570af0      ; 0056c024
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00570af0()
    MOV EDX,dword ptr [ESI + 0x15acb4]  ; 0056c029
    ADD ESP,0x4                         ; 0056c02f
    CMP EBX,EDX                         ; 0056c032
    JL 0x0056c003                       ; 0056c034
        ;   XREF to: 0056c003 (CONDITIONAL_JUMP)  ; LAB_0056c003
    PUSH 0x1                            ; 0056c036
        ;   Label: LAB_0056c036
    MOV EAX,[0x006703ec]                ; 0056c038 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0056c03d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056c03e
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0056c043
    MOV EDX,dword ptr [ESP + 0x28]      ; 0056c046
    ADD EBP,0x4                         ; 0056c04a
    INC EDX                             ; 0056c04d
    MOV ECX,dword ptr [ESI + 0x15f6e4]  ; 0056c04e
    MOV dword ptr [ESP + 0x28],EDX      ; 0056c054
    CMP EDX,ECX                         ; 0056c058
    JL 0x0056bfe2                       ; 0056c05a
        ;   XREF to: 0056bfe2 (CONDITIONAL_JUMP)  ; LAB_0056bfe2
    MOV EBX,dword ptr [0x0067b9a0]      ; 0056c05c | g_CGoreInstance | g_CGorePtr
        ;   Label: LAB_0056c05c
    PUSH EBX                            ; 0056c062 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ed7b0 ; 0056c063
        ;   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ed7b0(CGore * this_ptr)
    ADD ESP,0x4                         ; 0056c068
    MOV EDI,dword ptr [0x0067a3d0]      ; 0056c06b | g_CFireEffectPtr
    PUSH EDI                            ; 0056c071 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_render_FUN_004c7180 ; 0056c072
        ;   XREF to: 004c7180 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004c7180(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0056c077
    PUSH 0x1                            ; 0056c07a
        ;   Label: LAB_0056c07a
    MOV ECX,dword ptr [ESP + 0x28]      ; 0056c07c
    PUSH ECX                            ; 0056c080
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 ; 0056c081
        ;   XREF to: 00472d30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight * this_ptr)
    ADD ESP,0x8                         ; 0056c086
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056c089
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056c08d
    MOV dword ptr [EDX + 0x140],EAX     ; 0056c091
    JMP 0x0056bedd                      ; 0056c097
        ;   XREF to: 0056bedd (UNCONDITIONAL_JUMP)  ; LAB_0056bedd
    PUSH 0x1                            ; 0056c09c
        ;   Label: LAB_0056c09c
    PUSH EAX                            ; 0056c09e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 ; 0056c09f
        ;   XREF to: 00472a80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056c0a4
    PUSH 0x22                           ; 0056c0a7
    PUSH ESI                            ; 0056c0a9
    CALL core_set.cpp_CDemonSet_FUN_0056fbd0 ; 0056c0aa
        ;   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0056c0af
    XOR EBP,EBP                         ; 0056c0b2
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056c0b4
    MOV EBX,dword ptr [ESI + 0x15f6e4]  ; 0056c0b8
    MOV [0x020a5740],EAX                ; 0056c0be | g_CurrentShadowLight
    TEST EBX,EBX                        ; 0056c0c3
    JLE 0x0056c105                      ; 0056c0c5
        ;   XREF to: 0056c105 (CONDITIONAL_JUMP)  ; LAB_0056c105
    MOV EDI,ESI                         ; 0056c0c7
    MOV EBX,dword ptr [EDI + 0x15f6e8]  ; 0056c0c9
        ;   Label: LAB_0056c0c9
    PUSH EBX                            ; 0056c0cf
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056c0d0
    CALL dword ptr [EAX + 0x8]          ; 0056c0d6
    ADD ESP,0x4                         ; 0056c0d9
    TEST EAX,EAX                        ; 0056c0dc
    JZ 0x0056c13e                       ; 0056c0de
        ;   XREF to: 0056c13e (CONDITIONAL_JUMP)  ; LAB_0056c13e
    OR byte ptr [EBX + 0x140],0x22      ; 0056c0e0
    PUSH 0x1                            ; 0056c0e7
        ;   Label: LAB_0056c0e7
    MOV EAX,[0x006703ec]                ; 0056c0e9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0056c0ee | g_CDemonRendererInstance
    ADD EDI,0x4                         ; 0056c0ef
    INC EBP                             ; 0056c0f2
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056c0f3
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [ESI + 0x15f6e4]  ; 0056c0f8
    ADD ESP,0x8                         ; 0056c0fe
    CMP EBP,EDX                         ; 0056c101
    JL 0x0056c0c9                       ; 0056c103
        ;   XREF to: 0056c0c9 (CONDITIONAL_JUMP)  ; LAB_0056c0c9
    MOV ECX,dword ptr [0x0067b9a0]      ; 0056c105 | g_CGoreInstance | g_CGorePtr
        ;   Label: LAB_0056c105
    PUSH ECX                            ; 0056c10b | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ed7b0 ; 0056c10c
        ;   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ed7b0(CGore * this_ptr)
    ADD ESP,0x4                         ; 0056c111
    MOV EBX,dword ptr [0x0067a3d0]      ; 0056c114 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EBX                            ; 0056c11a | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_render_FUN_004c7180 ; 0056c11b
        ;   XREF to: 004c7180 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004c7180(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0056c120
    XOR EDI,EDI                         ; 0056c123
    PUSH EDI                            ; 0056c125
    MOV EBP,dword ptr [ESP + 0x24]      ; 0056c126
    PUSH EBP                            ; 0056c12a
    MOV dword ptr [0x020a5740],EDI      ; 0056c12b | g_CurrentShadowLight
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 ; 0056c131
        ;   XREF to: 00472d30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight * this_ptr)
    ADD ESP,0x8                         ; 0056c136
    JMP 0x0056bf2b                      ; 0056c139
        ;   XREF to: 0056bf2b (UNCONDITIONAL_JUMP)  ; LAB_0056bf2b
    AND byte ptr [EBX + 0x140],0xfd     ; 0056c13e
        ;   Label: LAB_0056c13e
    JMP 0x0056c0e7                      ; 0056c145
        ;   XREF to: 0056c0e7 (UNCONDITIONAL_JUMP)  ; LAB_0056c0e7
    MOV EDI,dword ptr [ESP + 0x8]       ; 0056c147
        ;   Label: LAB_0056c147
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0056c14b
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    SUB EAX,EDI                         ; 0056c150
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056c152
    FILD dword ptr [ESP + 0x2c]         ; 0056c156
    FMUL double ptr [0x00645d53]        ; 0056c15a | DOUBLE_00645d53
    MOV EAX,[0x0067b654]                ; 0056c160 | g_CGameInstance | g_CGamePtr
    FMUL double ptr [0x00645d5b]        ; 0056c165 | DOUBLE_00645d5b
    FLD float ptr [EAX + 0x264]         ; 0056c16b | g_CGameInstance.delta_time_float
    FXCH                                ; 0056c171
    FMUL double ptr [0x00645d63]        ; 0056c173 | DOUBLE_00645d63
    FDIVRP                              ; 0056c179
    SUB ESP,0x8                         ; 0056c17b
    FSTP double ptr [ESP]               ; 0056c17e
    PUSH 0x645d33                       ; 0056c181 | = "renderStaticLights : %3.2f ms\n"
    MOV EBP,dword ptr [0x0066e8e0]      ; 0056c186 | g_CConsolePtr
    PUSH EBP                            ; 0056c18c | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0056c18d
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0056c192
    ADD ESP,0x30                        ; 0056c195
    POP EBP                             ; 0056c198
    POP EDI                             ; 0056c199
    POP ESI                             ; 0056c19a
    POP EBX                             ; 0056c19b
    RET                                 ; 0056c19c

