; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_0052ef80(CDemonSet *this_ptr)
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
; XREF[3]:
;   core_game.cpp_FUN_004b5190 at 004b5ced
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052dfec
;   core_set.cpp_FUN_0052f2a0 at 0052f2e8
;
; Referenced Globals:
;   undefined4 s_renderStaticLights_3_2f_005e5881+1
;   undefined4 DAT_005e58a2
;   undefined4 DAT_005e58aa
;   undefined4 DAT_005e58b2
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d30
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01511ce4
;   undefined4 DAT_01ba5c50
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.shadow_flag
;   undefined4 g_CGameInstance.profile_mode
;   ... and 5 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0
;   core_fire.cpp_CFireEffect_render_FUN_0049c780
;   core_gore.cpp_CGore_renderParticles_FUN_004c9440
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0
;   engine_console.cpp_FUN_00436710
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ef80
        ;   Label: core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80
    PUSH ESI                            ; 0052ef81
    PUSH EDI                            ; 0052ef82
    PUSH EBP                            ; 0052ef83
    SUB ESP,0x30                        ; 0052ef84
    MOV ESI,dword ptr [ESP + 0x44]      ; 0052ef87
    MOV EAX,[0x00616494]                ; 0052ef8b | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x24],0x0      ; 0052ef90 | g_CGameInstance.shadow_flag
    JZ 0x0052f05b                       ; 0052ef94
        ;   XREF to: 0052f05b (CONDITIONAL_JUMP)  ; LAB_0052f05b
    CMP dword ptr [EAX + 0x228],0x0     ; 0052ef9a | g_CGameInstance.profile_mode
    JNZ 0x0052f063                      ; 0052efa1
        ;   XREF to: 0052f063 (CONDITIONAL_JUMP)  ; LAB_0052f063
    XOR EBX,EBX                         ; 0052efa7
        ;   Label: LAB_0052efa7
    MOV EBP,dword ptr [0x01fc9608]      ; 0052efa9 | DAT_01fc9608
    MOV dword ptr [ESP + 0x18],EBX      ; 0052efaf
    MOV dword ptr [0x01fc9c68],EBX      ; 0052efb3 | g_CDemonRaytraceInstance
    TEST EBP,EBP                        ; 0052efb9
    JLE 0x0052effb                      ; 0052efbb
        ;   XREF to: 0052effb (CONDITIONAL_JUMP)  ; LAB_0052effb
    MOV dword ptr [ESP + 0x10],EBX      ; 0052efbd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052efc1
        ;   Label: LAB_0052efc1
    MOV EAX,dword ptr [EAX + 0x1fc960c] ; 0052efc5
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 0052efcb
    MOV dword ptr [ESP + 0x24],EAX      ; 0052efd1
    TEST EDX,EDX                        ; 0052efd5
    JNZ 0x0052f071                      ; 0052efd7
        ;   XREF to: 0052f071 (CONDITIONAL_JUMP)  ; LAB_0052f071
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052efdd
        ;   Label: LAB_0052efdd
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052efe1
    MOV ECX,dword ptr [0x01fc9608]      ; 0052efe5 | DAT_01fc9608
    ADD EAX,0x4                         ; 0052efeb
    INC EDX                             ; 0052efee
    MOV dword ptr [ESP + 0x10],EAX      ; 0052efef
    MOV dword ptr [ESP + 0x18],EDX      ; 0052eff3
    CMP EDX,ECX                         ; 0052eff7
    JL 0x0052efc1                       ; 0052eff9
        ;   XREF to: 0052efc1 (CONDITIONAL_JUMP)  ; LAB_0052efc1
    XOR EBX,EBX                         ; 0052effb
        ;   Label: LAB_0052effb
    MOV EDI,dword ptr [0x01fc8e84]      ; 0052effd | DAT_01fc8e84
    MOV dword ptr [ESP + 0x1c],EBX      ; 0052f003
    TEST EDI,EDI                        ; 0052f007
    JLE 0x0052f049                      ; 0052f009
        ;   XREF to: 0052f049 (CONDITIONAL_JUMP)  ; LAB_0052f049
    MOV dword ptr [ESP + 0x14],EBX      ; 0052f00b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052f00f
        ;   Label: LAB_0052f00f
    MOV EAX,dword ptr [EAX + 0x1fc8e88] ; 0052f013 | DAT_01fc8e88
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 0052f019
    MOV dword ptr [ESP + 0x20],EAX      ; 0052f01f
    TEST EDX,EDX                        ; 0052f023
    JNZ 0x0052f19c                      ; 0052f025
        ;   XREF to: 0052f19c (CONDITIONAL_JUMP)  ; LAB_0052f19c
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052f02b
        ;   Label: LAB_0052f02b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0052f02f
    MOV EBX,dword ptr [0x01fc8e84]      ; 0052f033 | DAT_01fc8e84
    ADD EDX,0x4                         ; 0052f039
    INC ECX                             ; 0052f03c
    MOV dword ptr [ESP + 0x14],EDX      ; 0052f03d
    MOV dword ptr [ESP + 0x1c],ECX      ; 0052f041
    CMP ECX,EBX                         ; 0052f045
    JL 0x0052f00f                       ; 0052f047
        ;   XREF to: 0052f00f (CONDITIONAL_JUMP)  ; LAB_0052f00f
    MOV EAX,[0x00616494]                ; 0052f049 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_0052f049
    CMP dword ptr [EAX + 0x228],0x0     ; 0052f04e | g_CGameInstance.profile_mode
    JNZ 0x0052f247                      ; 0052f055
        ;   XREF to: 0052f247 (CONDITIONAL_JUMP)  ; LAB_0052f247
    ADD ESP,0x30                        ; 0052f05b
        ;   Label: LAB_0052f05b
    POP EBP                             ; 0052f05e
    POP EDI                             ; 0052f05f
    POP ESI                             ; 0052f060
    POP EBX                             ; 0052f061
    RET                                 ; 0052f062
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0052f063
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_0052f063
    MOV dword ptr [ESP + 0x8],EAX       ; 0052f068
    JMP 0x0052efa7                      ; 0052f06c
        ;   XREF to: 0052efa7 (UNCONDITIONAL_JUMP)  ; LAB_0052efa7
    PUSH 0x0                            ; 0052f071
        ;   Label: LAB_0052f071
    MOV ECX,dword ptr [ESP + 0x28]      ; 0052f073
    MOV EAX,dword ptr [EAX + 0x140]     ; 0052f077
    PUSH ECX                            ; 0052f07d
    MOV dword ptr [ESP + 0x14],EAX      ; 0052f07e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 ; 0052f082
        ;   XREF to: 0044a020 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052f087
    MOV EBX,dword ptr [ESP + 0x24]      ; 0052f08a
    PUSH EBX                            ; 0052f08e
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60 ; 0052f08f
        ;   XREF to: 0044ab60 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(CDemonLight * this_ptr)
    MOV EDI,dword ptr [EBX + 0x1cd0]    ; 0052f094
    ADD ESP,0x4                         ; 0052f09a
    TEST EDI,EDI                        ; 0052f09d
    JZ 0x0052f17a                       ; 0052f09f
        ;   XREF to: 0052f17a (CONDITIONAL_JUMP)  ; LAB_0052f17a
    PUSH 0x0                            ; 0052f0a5
    PUSH dword ptr [EBX + 0x140]        ; 0052f0a7
    PUSH ESI                            ; 0052f0ad
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 ; 0052f0ae
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0052f0b3
    PUSH 0x1                            ; 0052f0b6
    PUSH ESI                            ; 0052f0b8
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 ; 0052f0b9
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0052f0be
    PUSH 0x0                            ; 0052f0c1
    PUSH ESI                            ; 0052f0c3
    XOR EBP,EBP                         ; 0052f0c4
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10 ; 0052f0c6
        ;   XREF to: 0052dc10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0052f0cb
    MOV EAX,dword ptr [ESI + 0x15f6f8]  ; 0052f0ce
    MOV dword ptr [ESP + 0x28],EBP      ; 0052f0d4
    TEST EAX,EAX                        ; 0052f0d8
    JLE 0x0052f15c                      ; 0052f0da
        ;   XREF to: 0052f15c (CONDITIONAL_JUMP)  ; LAB_0052f15c
    MOV EBP,ESI                         ; 0052f0e0
    MOV EAX,dword ptr [EBP + 0x15f6fc]  ; 0052f0e2
        ;   Label: LAB_0052f0e2
    PUSH EAX                            ; 0052f0e8
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052f0e9
    XOR EBX,EBX                         ; 0052f0ef
    CALL dword ptr [EDX + 0x18]         ; 0052f0f1
    MOV EAX,dword ptr [ESI + 0x15acc8]  ; 0052f0f4
    ADD ESP,0x4                         ; 0052f0fa
    TEST EAX,EAX                        ; 0052f0fd
    JLE 0x0052f136                      ; 0052f0ff
        ;   XREF to: 0052f136 (CONDITIONAL_JUMP)  ; LAB_0052f136
    MOV EDI,EBP                         ; 0052f101
    PUSH 0x0                            ; 0052f103
        ;   Label: LAB_0052f103
    PUSH EBX                            ; 0052f105
    PUSH ESI                            ; 0052f106
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052f107
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052f10c
    MOV EAX,dword ptr [EDI + 0x15f6fc]  ; 0052f10f
    PUSH EAX                            ; 0052f115
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052f116
    CALL dword ptr [EDX + 0x18]         ; 0052f11c
    ADD ESP,0x4                         ; 0052f11f
    PUSH ESI                            ; 0052f122
    INC EBX                             ; 0052f123
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052f124
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EDX,dword ptr [ESI + 0x15acc8]  ; 0052f129
    ADD ESP,0x4                         ; 0052f12f
    CMP EBX,EDX                         ; 0052f132
    JL 0x0052f103                       ; 0052f134
        ;   XREF to: 0052f103 (CONDITIONAL_JUMP)  ; LAB_0052f103
    PUSH 0x1                            ; 0052f136
        ;   Label: LAB_0052f136
    MOV EAX,[0x0060b280]                ; 0052f138 | DAT_0060b280
    PUSH EAX                            ; 0052f13d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 0052f13e
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0052f143
    MOV EDX,dword ptr [ESP + 0x28]      ; 0052f146
    ADD EBP,0x4                         ; 0052f14a
    INC EDX                             ; 0052f14d
    MOV ECX,dword ptr [ESI + 0x15f6f8]  ; 0052f14e
    MOV dword ptr [ESP + 0x28],EDX      ; 0052f154
    CMP EDX,ECX                         ; 0052f158
    JL 0x0052f0e2                       ; 0052f15a
        ;   XREF to: 0052f0e2 (CONDITIONAL_JUMP)  ; LAB_0052f0e2
    MOV EBX,dword ptr [0x006167e0]      ; 0052f15c | g_CGorePtr
        ;   Label: LAB_0052f15c
    PUSH EBX                            ; 0052f162
    CALL core_gore.cpp_CGore_renderParticles_FUN_004c9440 ; 0052f163
        ;   XREF to: 004c9440 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004c9440(CGore * this_ptr)
    ADD ESP,0x4                         ; 0052f168
    MOV EDI,dword ptr [0x00614d30]      ; 0052f16b | DAT_00614d30
    PUSH EDI                            ; 0052f171
    CALL core_fire.cpp_CFireEffect_render_FUN_0049c780 ; 0052f172
        ;   XREF to: 0049c780 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0049c780(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0052f177
    PUSH 0x1                            ; 0052f17a
        ;   Label: LAB_0052f17a
    MOV ECX,dword ptr [ESP + 0x28]      ; 0052f17c
    PUSH ECX                            ; 0052f180
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0 ; 0052f181
        ;   XREF to: 0044a2d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 0052f186
    MOV EDX,dword ptr [ESP + 0x24]      ; 0052f189
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052f18d
    MOV dword ptr [EDX + 0x140],EAX     ; 0052f191
    JMP 0x0052efdd                      ; 0052f197
        ;   XREF to: 0052efdd (UNCONDITIONAL_JUMP)  ; LAB_0052efdd
    PUSH 0x1                            ; 0052f19c
        ;   Label: LAB_0052f19c
    PUSH EAX                            ; 0052f19e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 ; 0052f19f
        ;   XREF to: 0044a020 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052f1a4
    PUSH 0x22                           ; 0052f1a7
    PUSH ESI                            ; 0052f1a9
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 ; 0052f1aa
        ;   XREF to: 005332f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0052f1af
    XOR EBP,EBP                         ; 0052f1b2
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052f1b4
    MOV EBX,dword ptr [ESI + 0x15f6f8]  ; 0052f1b8
    MOV [0x01511ce4],EAX                ; 0052f1be | DAT_01511ce4
    TEST EBX,EBX                        ; 0052f1c3
    JLE 0x0052f205                      ; 0052f1c5
        ;   XREF to: 0052f205 (CONDITIONAL_JUMP)  ; LAB_0052f205
    MOV EDI,ESI                         ; 0052f1c7
    MOV EBX,dword ptr [EDI + 0x15f6fc]  ; 0052f1c9
        ;   Label: LAB_0052f1c9
    PUSH EBX                            ; 0052f1cf
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0052f1d0
    CALL dword ptr [EAX + 0x18]         ; 0052f1d6
    ADD ESP,0x4                         ; 0052f1d9
    TEST EAX,EAX                        ; 0052f1dc
    JZ 0x0052f23e                       ; 0052f1de
        ;   XREF to: 0052f23e (CONDITIONAL_JUMP)  ; LAB_0052f23e
    OR byte ptr [EBX + 0x144],0x22      ; 0052f1e0
    PUSH 0x1                            ; 0052f1e7
        ;   Label: LAB_0052f1e7
    MOV EAX,[0x0060b280]                ; 0052f1e9 | DAT_0060b280
    PUSH EAX                            ; 0052f1ee | DAT_01ba5c50
    ADD EDI,0x4                         ; 0052f1ef
    INC EBP                             ; 0052f1f2
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 0052f1f3
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [ESI + 0x15f6f8]  ; 0052f1f8
    ADD ESP,0x8                         ; 0052f1fe
    CMP EBP,EDX                         ; 0052f201
    JL 0x0052f1c9                       ; 0052f203
        ;   XREF to: 0052f1c9 (CONDITIONAL_JUMP)  ; LAB_0052f1c9
    MOV ECX,dword ptr [0x006167e0]      ; 0052f205 | g_CGorePtr
        ;   Label: LAB_0052f205
    PUSH ECX                            ; 0052f20b
    CALL core_gore.cpp_CGore_renderParticles_FUN_004c9440 ; 0052f20c
        ;   XREF to: 004c9440 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004c9440(CGore * this_ptr)
    ADD ESP,0x4                         ; 0052f211
    MOV EBX,dword ptr [0x00614d30]      ; 0052f214 | DAT_00614d30
    PUSH EBX                            ; 0052f21a
    CALL core_fire.cpp_CFireEffect_render_FUN_0049c780 ; 0052f21b
        ;   XREF to: 0049c780 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_0049c780(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0052f220
    XOR EDI,EDI                         ; 0052f223
    PUSH EDI                            ; 0052f225
    MOV EBP,dword ptr [ESP + 0x24]      ; 0052f226
    PUSH EBP                            ; 0052f22a
    MOV dword ptr [0x01511ce4],EDI      ; 0052f22b | DAT_01511ce4
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0 ; 0052f231
        ;   XREF to: 0044a2d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 0052f236
    JMP 0x0052f02b                      ; 0052f239
        ;   XREF to: 0052f02b (UNCONDITIONAL_JUMP)  ; LAB_0052f02b
    AND byte ptr [EBX + 0x144],0xfd     ; 0052f23e
        ;   Label: LAB_0052f23e
    JMP 0x0052f1e7                      ; 0052f245
        ;   XREF to: 0052f1e7 (UNCONDITIONAL_JUMP)  ; LAB_0052f1e7
    MOV EDI,dword ptr [ESP + 0x8]       ; 0052f247
        ;   Label: LAB_0052f247
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0052f24b
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    SUB EAX,EDI                         ; 0052f250
    MOV dword ptr [ESP + 0x2c],EAX      ; 0052f252
    FILD dword ptr [ESP + 0x2c]         ; 0052f256
    FMUL double ptr [0x005e58a2]        ; 0052f25a | DAT_005e58a2
    MOV EAX,[0x00616494]                ; 0052f260 | g_CGamePtr
    FMUL double ptr [0x005e58aa]        ; 0052f265 | DAT_005e58aa
    FLD float ptr [EAX + 0x284]         ; 0052f26b | g_CGameInstance.delta_time_float
    FXCH                                ; 0052f271
    FMUL double ptr [0x005e58b2]        ; 0052f273 | DAT_005e58b2
    FDIVRP                              ; 0052f279
    SUB ESP,0x8                         ; 0052f27b
    FSTP double ptr [ESP]               ; 0052f27e
    PUSH 0x5e5882                       ; 0052f281 | s_renderStaticLights_3_2f_005e5881+1
    MOV EBP,dword ptr [0x00609ed0]      ; 0052f286 | g_CConsolePtr
    PUSH EBP                            ; 0052f28c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0052f28d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0052f292
    ADD ESP,0x30                        ; 0052f295
    POP EBP                             ; 0052f298
    POP EDI                             ; 0052f299
    POP ESI                             ; 0052f29a
    POP EBX                             ; 0052f29b
    RET                                 ; 0052f29c

