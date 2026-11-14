; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_00550260(CDemonSet *this_ptr)
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
;   core_game.cpp_FUN_004ce580 at 004cf0ca
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f2cc
;   core_set.cpp_FUN_00550580 at 005505c8
;
; Referenced Globals:
;   undefined4 s_renderStaticLights_3_2f_005f08a5+1
;   undefined4 DAT_005f08c6
;   undefined4 DAT_005f08ce
;   undefined4 DAT_005f08d6
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c010
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_0152d2a4
;   undefined4 DAT_01bc120c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.shadow_flag
;   undefined4 g_CGameInstance.profile_mode
;   ... and 5 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00462820
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360
;   core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0
;   core_fire.cpp_CFireEffect_render_FUN_004b5100
;   core_gore.cpp_CGore_renderParticles_FUN_004e5c50
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550260
        ;   Label: core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260
    PUSH ESI                            ; 00550261
    PUSH EDI                            ; 00550262
    PUSH EBP                            ; 00550263
    SUB ESP,0x30                        ; 00550264
    MOV ESI,dword ptr [ESP + 0x44]      ; 00550267
    MOV EAX,[0x0061d95c]                ; 0055026b | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x24],0x0      ; 00550270 | g_CGameInstance.shadow_flag
    JZ 0x0055033b                       ; 00550274
        ;   XREF to: 0055033b (CONDITIONAL_JUMP)  ; LAB_0055033b
    CMP dword ptr [EAX + 0x228],0x0     ; 0055027a | g_CGameInstance.profile_mode
    JNZ 0x00550343                      ; 00550281
        ;   XREF to: 00550343 (CONDITIONAL_JUMP)  ; LAB_00550343
    XOR EBX,EBX                         ; 00550287
        ;   Label: LAB_00550287
    MOV EBP,dword ptr [0x01fe55bc]      ; 00550289 | DAT_01fe55bc
    MOV dword ptr [ESP + 0x18],EBX      ; 0055028f
    MOV dword ptr [0x01fe5c1c],EBX      ; 00550293 | g_CDemonRaytraceInstance
    TEST EBP,EBP                        ; 00550299
    JLE 0x005502db                      ; 0055029b
        ;   XREF to: 005502db (CONDITIONAL_JUMP)  ; LAB_005502db
    MOV dword ptr [ESP + 0x10],EBX      ; 0055029d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005502a1
        ;   Label: LAB_005502a1
    MOV EAX,dword ptr [EAX + 0x1fe55c0] ; 005502a5
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 005502ab
    MOV dword ptr [ESP + 0x24],EAX      ; 005502b1
    TEST EDX,EDX                        ; 005502b5
    JNZ 0x00550351                      ; 005502b7
        ;   XREF to: 00550351 (CONDITIONAL_JUMP)  ; LAB_00550351
    MOV EAX,dword ptr [ESP + 0x10]      ; 005502bd
        ;   Label: LAB_005502bd
    MOV EDX,dword ptr [ESP + 0x18]      ; 005502c1
    MOV ECX,dword ptr [0x01fe55bc]      ; 005502c5 | DAT_01fe55bc
    ADD EAX,0x4                         ; 005502cb
    INC EDX                             ; 005502ce
    MOV dword ptr [ESP + 0x10],EAX      ; 005502cf
    MOV dword ptr [ESP + 0x18],EDX      ; 005502d3
    CMP EDX,ECX                         ; 005502d7
    JL 0x005502a1                       ; 005502d9
        ;   XREF to: 005502a1 (CONDITIONAL_JUMP)  ; LAB_005502a1
    XOR EBX,EBX                         ; 005502db
        ;   Label: LAB_005502db
    MOV EDI,dword ptr [0x01fe4e38]      ; 005502dd | DAT_01fe4e38
    MOV dword ptr [ESP + 0x1c],EBX      ; 005502e3
    TEST EDI,EDI                        ; 005502e7
    JLE 0x00550329                      ; 005502e9
        ;   XREF to: 00550329 (CONDITIONAL_JUMP)  ; LAB_00550329
    MOV dword ptr [ESP + 0x14],EBX      ; 005502eb
    MOV EAX,dword ptr [ESP + 0x14]      ; 005502ef
        ;   Label: LAB_005502ef
    MOV EAX,dword ptr [EAX + 0x1fe4e3c] ; 005502f3 | DAT_01fe4e3c
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 005502f9
    MOV dword ptr [ESP + 0x20],EAX      ; 005502ff
    TEST EDX,EDX                        ; 00550303
    JNZ 0x0055047c                      ; 00550305
        ;   XREF to: 0055047c (CONDITIONAL_JUMP)  ; LAB_0055047c
    MOV EDX,dword ptr [ESP + 0x14]      ; 0055030b
        ;   Label: LAB_0055030b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0055030f
    MOV EBX,dword ptr [0x01fe4e38]      ; 00550313 | DAT_01fe4e38
    ADD EDX,0x4                         ; 00550319
    INC ECX                             ; 0055031c
    MOV dword ptr [ESP + 0x14],EDX      ; 0055031d
    MOV dword ptr [ESP + 0x1c],ECX      ; 00550321
    CMP ECX,EBX                         ; 00550325
    JL 0x005502ef                       ; 00550327
        ;   XREF to: 005502ef (CONDITIONAL_JUMP)  ; LAB_005502ef
    MOV EAX,[0x0061d95c]                ; 00550329 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_00550329
    CMP dword ptr [EAX + 0x228],0x0     ; 0055032e | g_CGameInstance.profile_mode
    JNZ 0x00550527                      ; 00550335
        ;   XREF to: 00550527 (CONDITIONAL_JUMP)  ; LAB_00550527
    ADD ESP,0x30                        ; 0055033b
        ;   Label: LAB_0055033b
    POP EBP                             ; 0055033e
    POP EDI                             ; 0055033f
    POP ESI                             ; 00550340
    POP EBX                             ; 00550341
    RET                                 ; 00550342
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 00550343
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_00550343
    MOV dword ptr [ESP + 0x8],EAX       ; 00550348
    JMP 0x00550287                      ; 0055034c
        ;   XREF to: 00550287 (UNCONDITIONAL_JUMP)  ; LAB_00550287
    PUSH 0x0                            ; 00550351
        ;   Label: LAB_00550351
    MOV ECX,dword ptr [ESP + 0x28]      ; 00550353
    MOV EAX,dword ptr [EAX + 0x140]     ; 00550357
    PUSH ECX                            ; 0055035d
    MOV dword ptr [ESP + 0x14],EAX      ; 0055035e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 ; 00550362
        ;   XREF to: 00462820 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_00462820(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00550367
    MOV EBX,dword ptr [ESP + 0x24]      ; 0055036a
    PUSH EBX                            ; 0055036e
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360 ; 0055036f
        ;   XREF to: 00463360 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360(CDemonLight * this_ptr)
    MOV EDI,dword ptr [EBX + 0x1cd0]    ; 00550374
    ADD ESP,0x4                         ; 0055037a
    TEST EDI,EDI                        ; 0055037d
    JZ 0x0055045a                       ; 0055037f
        ;   XREF to: 0055045a (CONDITIONAL_JUMP)  ; LAB_0055045a
    PUSH 0x0                            ; 00550385
    PUSH dword ptr [EBX + 0x140]        ; 00550387
    PUSH ESI                            ; 0055038d
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 ; 0055038e
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00550393
    PUSH 0x1                            ; 00550396
    PUSH ESI                            ; 00550398
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0 ; 00550399
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0055039e
    PUSH 0x0                            ; 005503a1
    PUSH ESI                            ; 005503a3
    XOR EBP,EBP                         ; 005503a4
    CALL core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0 ; 005503a6
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 005503ab
    MOV EAX,dword ptr [ESI + 0x15f6fc]  ; 005503ae
    MOV dword ptr [ESP + 0x28],EBP      ; 005503b4
    TEST EAX,EAX                        ; 005503b8
    JLE 0x0055043c                      ; 005503ba
        ;   XREF to: 0055043c (CONDITIONAL_JUMP)  ; LAB_0055043c
    MOV EBP,ESI                         ; 005503c0
    MOV EAX,dword ptr [EBP + 0x15f700]  ; 005503c2
        ;   Label: LAB_005503c2
    PUSH EAX                            ; 005503c8
    MOV EDX,dword ptr [EAX + 0x154]     ; 005503c9
    XOR EBX,EBX                         ; 005503cf
    CALL dword ptr [EDX + 0x10]         ; 005503d1
    MOV EAX,dword ptr [ESI + 0x15acc8]  ; 005503d4
    ADD ESP,0x4                         ; 005503da
    TEST EAX,EAX                        ; 005503dd
    JLE 0x00550416                      ; 005503df
        ;   XREF to: 00550416 (CONDITIONAL_JUMP)  ; LAB_00550416
    MOV EDI,EBP                         ; 005503e1
    PUSH 0x0                            ; 005503e3
        ;   Label: LAB_005503e3
    PUSH EBX                            ; 005503e5
    PUSH ESI                            ; 005503e6
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 ; 005503e7
        ;   XREF to: 00555460 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 005503ec
    MOV EAX,dword ptr [EDI + 0x15f700]  ; 005503ef
    PUSH EAX                            ; 005503f5
    MOV EDX,dword ptr [EAX + 0x154]     ; 005503f6
    CALL dword ptr [EDX + 0x10]         ; 005503fc
    ADD ESP,0x4                         ; 005503ff
    PUSH ESI                            ; 00550402
    INC EBX                             ; 00550403
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 ; 00550404
        ;   XREF to: 00555590 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(CDemonSet * this_ptr)
    MOV EDX,dword ptr [ESI + 0x15acc8]  ; 00550409
    ADD ESP,0x4                         ; 0055040f
    CMP EBX,EDX                         ; 00550412
    JL 0x005503e3                       ; 00550414
        ;   XREF to: 005503e3 (CONDITIONAL_JUMP)  ; LAB_005503e3
    PUSH 0x1                            ; 00550416
        ;   Label: LAB_00550416
    MOV EAX,[0x00612560]                ; 00550418 | DAT_00612560
    PUSH EAX                            ; 0055041d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0055041e
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00550423
    MOV EDX,dword ptr [ESP + 0x28]      ; 00550426
    ADD EBP,0x4                         ; 0055042a
    INC EDX                             ; 0055042d
    MOV ECX,dword ptr [ESI + 0x15f6fc]  ; 0055042e
    MOV dword ptr [ESP + 0x28],EDX      ; 00550434
    CMP EDX,ECX                         ; 00550438
    JL 0x005503c2                       ; 0055043a
        ;   XREF to: 005503c2 (CONDITIONAL_JUMP)  ; LAB_005503c2
    MOV EBX,dword ptr [0x0061dca4]      ; 0055043c | g_CGorePtr
        ;   Label: LAB_0055043c
    PUSH EBX                            ; 00550442
    CALL core_gore.cpp_CGore_renderParticles_FUN_004e5c50 ; 00550443
        ;   XREF to: 004e5c50 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004e5c50(CGore * this_ptr)
    ADD ESP,0x4                         ; 00550448
    MOV EDI,dword ptr [0x0061c010]      ; 0055044b | DAT_0061c010
    PUSH EDI                            ; 00550451
    CALL core_fire.cpp_CFireEffect_render_FUN_004b5100 ; 00550452
        ;   XREF to: 004b5100 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004b5100(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 00550457
    PUSH 0x1                            ; 0055045a
        ;   Label: LAB_0055045a
    MOV ECX,dword ptr [ESP + 0x28]      ; 0055045c
    PUSH ECX                            ; 00550460
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0 ; 00550461
        ;   XREF to: 00462ad0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 00550466
    MOV EDX,dword ptr [ESP + 0x24]      ; 00550469
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055046d
    MOV dword ptr [EDX + 0x140],EAX     ; 00550471
    JMP 0x005502bd                      ; 00550477
        ;   XREF to: 005502bd (UNCONDITIONAL_JUMP)  ; LAB_005502bd
    PUSH 0x1                            ; 0055047c
        ;   Label: LAB_0055047c
    PUSH EAX                            ; 0055047e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 ; 0055047f
        ;   XREF to: 00462820 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_00462820(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00550484
    PUSH 0x22                           ; 00550487
    PUSH ESI                            ; 00550489
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0 ; 0055048a
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 0055048f
    XOR EBP,EBP                         ; 00550492
    MOV EAX,dword ptr [ESP + 0x20]      ; 00550494
    MOV EBX,dword ptr [ESI + 0x15f6fc]  ; 00550498
    MOV [0x0152d2a4],EAX                ; 0055049e | DAT_0152d2a4
    TEST EBX,EBX                        ; 005504a3
    JLE 0x005504e5                      ; 005504a5
        ;   XREF to: 005504e5 (CONDITIONAL_JUMP)  ; LAB_005504e5
    MOV EDI,ESI                         ; 005504a7
    MOV EBX,dword ptr [EDI + 0x15f700]  ; 005504a9
        ;   Label: LAB_005504a9
    PUSH EBX                            ; 005504af
    MOV EAX,dword ptr [EBX + 0x154]     ; 005504b0
    CALL dword ptr [EAX + 0x10]         ; 005504b6
    ADD ESP,0x4                         ; 005504b9
    TEST EAX,EAX                        ; 005504bc
    JZ 0x0055051e                       ; 005504be
        ;   XREF to: 0055051e (CONDITIONAL_JUMP)  ; LAB_0055051e
    OR byte ptr [EBX + 0x144],0x22      ; 005504c0
    PUSH 0x1                            ; 005504c7
        ;   Label: LAB_005504c7
    MOV EAX,[0x00612560]                ; 005504c9 | DAT_00612560
    PUSH EAX                            ; 005504ce | DAT_01bc120c
    ADD EDI,0x4                         ; 005504cf
    INC EBP                             ; 005504d2
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 005504d3
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [ESI + 0x15f6fc]  ; 005504d8
    ADD ESP,0x8                         ; 005504de
    CMP EBP,EDX                         ; 005504e1
    JL 0x005504a9                       ; 005504e3
        ;   XREF to: 005504a9 (CONDITIONAL_JUMP)  ; LAB_005504a9
    MOV ECX,dword ptr [0x0061dca4]      ; 005504e5 | g_CGorePtr
        ;   Label: LAB_005504e5
    PUSH ECX                            ; 005504eb
    CALL core_gore.cpp_CGore_renderParticles_FUN_004e5c50 ; 005504ec
        ;   XREF to: 004e5c50 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderParticles_FUN_004e5c50(CGore * this_ptr)
    ADD ESP,0x4                         ; 005504f1
    MOV EBX,dword ptr [0x0061c010]      ; 005504f4 | DAT_0061c010
    PUSH EBX                            ; 005504fa
    CALL core_fire.cpp_CFireEffect_render_FUN_004b5100 ; 005504fb
        ;   XREF to: 004b5100 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004b5100(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 00550500
    XOR EDI,EDI                         ; 00550503
    PUSH EDI                            ; 00550505
    MOV EBP,dword ptr [ESP + 0x24]      ; 00550506
    PUSH EBP                            ; 0055050a
    MOV dword ptr [0x0152d2a4],EDI      ; 0055050b | DAT_0152d2a4
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0 ; 00550511
        ;   XREF to: 00462ad0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 00550516
    JMP 0x0055030b                      ; 00550519
        ;   XREF to: 0055030b (UNCONDITIONAL_JUMP)  ; LAB_0055030b
    AND byte ptr [EBX + 0x144],0xfd     ; 0055051e
        ;   Label: LAB_0055051e
    JMP 0x005504c7                      ; 00550525
        ;   XREF to: 005504c7 (UNCONDITIONAL_JUMP)  ; LAB_005504c7
    MOV EDI,dword ptr [ESP + 0x8]       ; 00550527
        ;   Label: LAB_00550527
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0055052b
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    SUB EAX,EDI                         ; 00550530
    MOV dword ptr [ESP + 0x2c],EAX      ; 00550532
    FILD dword ptr [ESP + 0x2c]         ; 00550536
    FMUL double ptr [0x005f08c6]        ; 0055053a | DAT_005f08c6
    MOV EAX,[0x0061d95c]                ; 00550540 | g_CGamePtr
    FMUL double ptr [0x005f08ce]        ; 00550545 | DAT_005f08ce
    FLD float ptr [EAX + 0x294]         ; 0055054b | g_CGameInstance.delta_time_float
    FXCH                                ; 00550551
    FMUL double ptr [0x005f08d6]        ; 00550553 | DAT_005f08d6
    FDIVRP                              ; 00550559
    SUB ESP,0x8                         ; 0055055b
    FSTP double ptr [ESP]               ; 0055055e
    PUSH 0x5f08a6                       ; 00550561 | s_renderStaticLights_3_2f_005f08a5+1
    MOV EBP,dword ptr [0x00611100]      ; 00550566 | g_CConsolePtr
    PUSH EBP                            ; 0055056c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0055056d
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00550572
    ADD ESP,0x30                        ; 00550575
    POP EBP                             ; 00550578
    POP EDI                             ; 00550579
    POP ESI                             ; 0055057a
    POP EBX                             ; 0055057b
    RET                                 ; 0055057c

