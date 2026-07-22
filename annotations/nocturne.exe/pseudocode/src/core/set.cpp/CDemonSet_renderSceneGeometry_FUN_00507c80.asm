; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(int param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_00513720 at 00513809
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 00508634
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00509760 at 0050988e
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508b2f
;   core_set.cpp_FUN_00507f80 at 00508061
;   core_set.cpp_FUN_0050a260 at 0050a3cf
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b0674
;   undefined4 DAT_005be36c
;   undefined4 DAT_005be378
;   undefined4 DAT_005c1144
;   undefined4 DAT_005c11ec
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c02594
;   undefined4 DAT_01fba938
;   undefined4 DAT_02dd1210
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
;   core_dskybox.cpp_renderSkyDome_FUN_00463580
;   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0046ae40
;   core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0046ace0
;   core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
;   core_set.cpp_CDemonSet_buildMirrorList_FUN_0050e210
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190
;   core_set.cpp_FUN_0050e080
;   core_terrain.cpp_CTerrain_render_FUN_00549310
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00550800
;   core_water.cpp_CWater_render_FUN_00550cb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00460c70
;   engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_00460c40
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507c80
        ;   Label: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
    PUSH ESI                            ; 00507c81
    PUSH EDI                            ; 00507c82
    PUSH EBP                            ; 00507c83
    SUB ESP,0xc                         ; 00507c84
    MOV EBX,dword ptr [ESP + 0x20]      ; 00507c87
    MOV EDI,dword ptr [ESP + 0x28]      ; 00507c8b
    PUSH 0x5be36c                       ; 00507c8f | DAT_005be36c
    MOV EDX,dword ptr [0x005ae704]      ; 00507c94 | DAT_005ae704
    PUSH EDX                            ; 00507c9a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00460c70 ; 00507c9b
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00460c70()
    ADD ESP,0x8                         ; 00507ca0
    MOV ECX,dword ptr [0x005ae704]      ; 00507ca3 | DAT_005ae704
    PUSH 0x3e800000                     ; 00507ca9
    PUSH ECX                            ; 00507cae | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_00460c40 ; 00507caf
        ;   XREF to: 00460c40 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_00460c40()
    MOV ESI,dword ptr [EBX + 0x15aa64]  ; 00507cb4
    ADD ESP,0x8                         ; 00507cba
    TEST ESI,ESI                        ; 00507cbd
    JNZ 0x00507d51                      ; 00507cbf
        ;   XREF to: 00507d51 (CONDITIONAL_JUMP)  ; LAB_00507d51
    TEST EDI,EDI                        ; 00507cc5
    JZ 0x00507e84                       ; 00507cc7
        ;   XREF to: 00507e84 (CONDITIONAL_JUMP)  ; LAB_00507e84
    MOV EBP,dword ptr [EBX + 0x15aabc]  ; 00507ccd
    TEST EBP,EBP                        ; 00507cd3
    JL 0x00507e84                       ; 00507cd5
        ;   XREF to: 00507e84 (CONDITIONAL_JUMP)  ; LAB_00507e84
    LEA EAX,[EBP*0x4 + 0x0]             ; 00507cdb
    SUB EAX,EBP                         ; 00507ce2
    SHL EAX,0x2                         ; 00507ce4
    ADD EAX,EBP                         ; 00507ce7
    SHL EAX,0x5                         ; 00507ce9
    ADD EAX,EBX                         ; 00507cec
    MOV EDX,dword ptr [EAX + 0x194]     ; 00507cee
    CMP EDX,0x1                         ; 00507cf4
    JGE 0x00507e67                      ; 00507cf7
        ;   XREF to: 00507e67 (CONDITIONAL_JUMP)  ; LAB_00507e67
    MOV EDI,0x2                         ; 00507cfd
        ;   Label: LAB_00507cfd
    XOR EAX,EAX                         ; 00507d02
        ;   Label: LAB_00507d02
    PUSH EAX                            ; 00507d04
        ;   Label: LAB_00507d04
    PUSH dword ptr [ESP + 0x28]         ; 00507d05
    PUSH 0x1fba938                      ; 00507d09 | DAT_01fba938
    CALL FUN_00469ce0                   ; 00507d0e
        ;   XREF to: 00469ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00469ce0()
    ADD ESP,0xc                         ; 00507d13
    CMP EDI,0x2                         ; 00507d16
    JNZ 0x00507d51                      ; 00507d19
        ;   XREF to: 00507d51 (CONDITIONAL_JUMP)  ; LAB_00507d51
    MOV ESI,dword ptr [EBX + 0x15aabc]  ; 00507d1b
    LEA EAX,[ESI*0x4 + 0x0]             ; 00507d21
    SUB EAX,ESI                         ; 00507d28
    SHL EAX,0x2                         ; 00507d2a
    ADD EAX,ESI                         ; 00507d2d
    SHL EAX,0x5                         ; 00507d2f
    LEA ESI,[EBX + 0x4]                 ; 00507d32
    ADD EAX,ESI                         ; 00507d35
    LEA ESI,[EAX + 0x194]               ; 00507d37
    PUSH ESI                            ; 00507d3d
    ADD EAX,0x190                       ; 00507d3e
    PUSH EAX                            ; 00507d43
    PUSH 0x1fba938                      ; 00507d44 | DAT_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0046ae40 ; 00507d49
        ;   XREF to: 0046ae40 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0046ae40()
    ADD ESP,0xc                         ; 00507d4e
    MOV EAX,[0x005ae704]                ; 00507d51 | DAT_005ae704
        ;   Label: LAB_00507d51
    PUSH EAX                            ; 00507d56 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00507d57
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 00507d5c
    TEST EAX,EAX                        ; 00507d5f
    JNZ 0x00507ef1                      ; 00507d61
        ;   XREF to: 00507ef1 (CONDITIONAL_JUMP)  ; LAB_00507ef1
    CMP dword ptr [0x01c02594],0x0      ; 00507d67 | DAT_01c02594
    JNZ 0x00507d79                      ; 00507d6e
        ;   XREF to: 00507d79 (CONDITIONAL_JUMP)  ; LAB_00507d79
    PUSH EBX                            ; 00507d70
    CALL core_set.cpp_CDemonSet_buildMirrorList_FUN_0050e210 ; 00507d71
        ;   XREF to: 0050e210 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_buildMirrorList_FUN_0050e210()
    ADD ESP,0x4                         ; 00507d76
    MOV EDI,dword ptr [0x01c02594]      ; 00507d79 | DAT_01c02594
        ;   Label: LAB_00507d79
    TEST EDI,EDI                        ; 00507d7f
    JNZ 0x00507dee                      ; 00507d81
        ;   XREF to: 00507dee (CONDITIONAL_JUMP)  ; LAB_00507dee
    CMP dword ptr [EBX + 0x15a8ac],0x0  ; 00507d83
    JZ 0x00507dbb                       ; 00507d8a
        ;   XREF to: 00507dbb (CONDITIONAL_JUMP)  ; LAB_00507dbb
    MOV EAX,ESP                         ; 00507d8c
    PUSH EAX                            ; 00507d8e
    MOV ESI,dword ptr [0x005ae704]      ; 00507d8f | DAT_005ae704
    MOV dword ptr [ESP + 0x4],EDI       ; 00507d95
    PUSH ESI                            ; 00507d99 | DAT_01b4d738
    MOV dword ptr [ESP + 0xc],EDI       ; 00507d9a
    MOV dword ptr [ESP + 0x10],EDI      ; 00507d9e
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00507da2
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 00507da7
    PUSH -0x1                           ; 00507daa
    PUSH EDI                            ; 00507dac
    PUSH EDI                            ; 00507dad
    PUSH 0x1fbacc8                      ; 00507dae
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 ; 00507db3
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040()
    ADD ESP,0x10                        ; 00507db8
    CMP dword ptr [EBX + 0x15a8a8],0x0  ; 00507dbb
        ;   Label: LAB_00507dbb
    JZ 0x00507e94                       ; 00507dc2
        ;   XREF to: 00507e94 (CONDITIONAL_JUMP)  ; LAB_00507e94
    CMP dword ptr [EBX + 0x15a8a4],0x0  ; 00507dc8
        ;   Label: LAB_00507dc8
    JZ 0x00507ec3                       ; 00507dcf
        ;   XREF to: 00507ec3 (CONDITIONAL_JUMP)  ; LAB_00507ec3
    CMP dword ptr [EBX + 0x15a8c0],0x0  ; 00507dd5
        ;   Label: LAB_00507dd5
    JZ 0x00507dee                       ; 00507ddc
        ;   XREF to: 00507dee (CONDITIONAL_JUMP)  ; LAB_00507dee
    PUSH 0x1                            ; 00507dde
    MOV EAX,[0x005c1144]                ; 00507de0 | DAT_005c1144
    PUSH EAX                            ; 00507de5
    CALL core_terrain.cpp_CTerrain_render_FUN_00549310 ; 00507de6
        ;   XREF to: 00549310 (UNCONDITIONAL_CALL)  ; undefined core_terrain.cpp_CTerrain_render_FUN_00549310()
    ADD ESP,0x8                         ; 00507deb
    MOV EDX,dword ptr [EBX + 0x15a8cc]  ; 00507dee
        ;   Label: LAB_00507dee
    XOR EDI,EDI                         ; 00507df4
    TEST EDX,EDX                        ; 00507df6
    JLE 0x00507e5f                      ; 00507df8
        ;   XREF to: 00507e5f (CONDITIONAL_JUMP)  ; LAB_00507e5f
    MOV ESI,EBX                         ; 00507dfa
    MOV EAX,dword ptr [ESI + 0x15a8d0]  ; 00507dfc
        ;   Label: LAB_00507dfc
    ADD EAX,0x1e4                       ; 00507e02
    PUSH EAX                            ; 00507e07
    CALL core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980 ; 00507e08
        ;   XREF to: 004d7980 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980()
    MOV EAX,dword ptr [ESI + 0x15a8d0]  ; 00507e0d
    MOV EDX,dword ptr [EAX + 0x178]     ; 00507e13
    ADD ESP,0x4                         ; 00507e19
    TEST EDX,EDX                        ; 00507e1c
    JZ 0x00507e29                       ; 00507e1e
        ;   XREF to: 00507e29 (CONDITIONAL_JUMP)  ; LAB_00507e29
    PUSH EAX                            ; 00507e20
    CALL FUN_004ac7c0                   ; 00507e21
        ;   XREF to: 004ac7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ac7c0()
    ADD ESP,0x4                         ; 00507e26
    PUSH 0x1                            ; 00507e29
        ;   Label: LAB_00507e29
    PUSH EDI                            ; 00507e2b
    PUSH EBX                            ; 00507e2c
    CALL core_set.cpp_FUN_0050e080      ; 00507e2d
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0050e080()
    ADD ESP,0xc                         ; 00507e32
    PUSH 0x0                            ; 00507e35
    PUSH dword ptr [ESP + 0x28]         ; 00507e37
    PUSH 0x1fba938                      ; 00507e3b | DAT_01fba938
    CALL FUN_00469ce0                   ; 00507e40
        ;   XREF to: 00469ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00469ce0()
    ADD ESP,0xc                         ; 00507e45
    PUSH EBX                            ; 00507e48
    ADD ESI,0x4                         ; 00507e49
    INC EDI                             ; 00507e4c
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 00507e4d
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190()
    MOV EAX,dword ptr [EBX + 0x15a8cc]  ; 00507e52
    ADD ESP,0x4                         ; 00507e58
    CMP EDI,EAX                         ; 00507e5b
    JL 0x00507dfc                       ; 00507e5d
        ;   XREF to: 00507dfc (CONDITIONAL_JUMP)  ; LAB_00507dfc
    ADD ESP,0xc                         ; 00507e5f
        ;   Label: LAB_00507e5f
    POP EBP                             ; 00507e62
    POP EDI                             ; 00507e63
    POP ESI                             ; 00507e64
    POP EBX                             ; 00507e65
    RET                                 ; 00507e66
    MOV ECX,dword ptr [EAX + 0x198]     ; 00507e67
        ;   Label: LAB_00507e67
    TEST ECX,ECX                        ; 00507e6d
    JZ 0x00507cfd                       ; 00507e6f
        ;   XREF to: 00507cfd (CONDITIONAL_JUMP)  ; LAB_00507cfd
    PUSH ECX                            ; 00507e75
    PUSH EDX                            ; 00507e76
    PUSH 0x1fba938                      ; 00507e77 | DAT_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0046ace0 ; 00507e7c
        ;   XREF to: 0046ace0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0046ace0()
    ADD ESP,0xc                         ; 00507e81
    CMP EDI,0x1                         ; 00507e84
        ;   Label: LAB_00507e84
    JNZ 0x00507d02                      ; 00507e87
        ;   XREF to: 00507d02 (CONDITIONAL_JUMP)  ; LAB_00507d02
    MOV EAX,EDI                         ; 00507e8d
    JMP 0x00507d04                      ; 00507e8f
        ;   XREF to: 00507d04 (UNCONDITIONAL_JUMP)  ; LAB_00507d04
    CMP dword ptr [EBX + 0x161240],0x0  ; 00507e94
        ;   Label: LAB_00507e94
    JZ 0x00507dc8                       ; 00507e9b
        ;   XREF to: 00507dc8 (CONDITIONAL_JUMP)  ; LAB_00507dc8
    MOV EAX,dword ptr [EBX + 0x161264]  ; 00507ea1
    PUSH EAX                            ; 00507ea7
    LEA EAX,[EBX + 0x161244]            ; 00507ea8
    PUSH EAX                            ; 00507eae
    MOV EDX,dword ptr [0x005b0674]      ; 00507eaf | DAT_005b0674
    PUSH EDX                            ; 00507eb5
    CALL core_dskybox.cpp_renderSkyDome_FUN_00463580 ; 00507eb6
        ;   XREF to: 00463580 (UNCONDITIONAL_CALL)  ; undefined core_dskybox.cpp_renderSkyDome_FUN_00463580()
    ADD ESP,0xc                         ; 00507ebb
    JMP 0x00507dc8                      ; 00507ebe
        ;   XREF to: 00507dc8 (UNCONDITIONAL_JUMP)  ; LAB_00507dc8
    MOV ESI,dword ptr [0x005c11ec]      ; 00507ec3 | DAT_005c11ec
        ;   Label: LAB_00507ec3
    PUSH ESI                            ; 00507ec9 | DAT_02dd1210
    CALL core_water.cpp_CWater_calculateVisibleTiles_FUN_00550800 ; 00507eca
        ;   XREF to: 00550800 (UNCONDITIONAL_CALL)  ; undefined core_water.cpp_CWater_calculateVisibleTiles_FUN_00550800()
    MOV EAX,[0x005c11ec]                ; 00507ecf | DAT_005c11ec
    MOV EDI,dword ptr [EAX]             ; 00507ed4 | DAT_02dd1210
    ADD ESP,0x4                         ; 00507ed6
    TEST EDI,EDI                        ; 00507ed9
    JNZ 0x00507dd5                      ; 00507edb
        ;   XREF to: 00507dd5 (CONDITIONAL_JUMP)  ; LAB_00507dd5
    PUSH 0x1                            ; 00507ee1
    PUSH EAX                            ; 00507ee3 | DAT_02dd1210
    CALL core_water.cpp_CWater_render_FUN_00550cb0 ; 00507ee4
        ;   XREF to: 00550cb0 (UNCONDITIONAL_CALL)  ; undefined core_water.cpp_CWater_render_FUN_00550cb0()
    ADD ESP,0x8                         ; 00507ee9
    JMP 0x00507dd5                      ; 00507eec
        ;   XREF to: 00507dd5 (UNCONDITIONAL_JUMP)  ; LAB_00507dd5
    CMP dword ptr [0x005be378],0x0      ; 00507ef1 | DAT_005be378
        ;   Label: LAB_00507ef1
    JZ 0x00507e5f                       ; 00507ef8
        ;   XREF to: 00507e5f (CONDITIONAL_JUMP)  ; LAB_00507e5f
    MOV ECX,dword ptr [EBX + 0x15a8cc]  ; 00507efe
    XOR ESI,ESI                         ; 00507f04
    TEST ECX,ECX                        ; 00507f06
    JLE 0x00507e5f                      ; 00507f08
        ;   XREF to: 00507e5f (CONDITIONAL_JUMP)  ; LAB_00507e5f
    MOV EDI,EBX                         ; 00507f0e
    MOV EAX,dword ptr [EDI + 0x15a8d0]  ; 00507f10
        ;   Label: LAB_00507f10
    ADD EAX,0x1e4                       ; 00507f16
    PUSH EAX                            ; 00507f1b
    CALL core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980 ; 00507f1c
        ;   XREF to: 004d7980 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980()
    MOV EAX,dword ptr [EDI + 0x15a8d0]  ; 00507f21
    MOV EBP,dword ptr [EAX + 0x178]     ; 00507f27
    ADD ESP,0x4                         ; 00507f2d
    TEST EBP,EBP                        ; 00507f30
    JZ 0x00507f3d                       ; 00507f32
        ;   XREF to: 00507f3d (CONDITIONAL_JUMP)  ; LAB_00507f3d
    PUSH EAX                            ; 00507f34
    CALL FUN_004ac7c0                   ; 00507f35
        ;   XREF to: 004ac7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ac7c0()
    ADD ESP,0x4                         ; 00507f3a
    PUSH 0x0                            ; 00507f3d
        ;   Label: LAB_00507f3d
    PUSH ESI                            ; 00507f3f
    PUSH EBX                            ; 00507f40
    CALL core_set.cpp_FUN_0050e080      ; 00507f41
        ;   XREF to: 0050e080 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0050e080()
    ADD ESP,0xc                         ; 00507f46
    PUSH 0x0                            ; 00507f49
    PUSH dword ptr [ESP + 0x28]         ; 00507f4b
    PUSH 0x1fba938                      ; 00507f4f | DAT_01fba938
    CALL FUN_00469ce0                   ; 00507f54
        ;   XREF to: 00469ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00469ce0()
    ADD ESP,0xc                         ; 00507f59
    PUSH EBX                            ; 00507f5c
    ADD EDI,0x4                         ; 00507f5d
    INC ESI                             ; 00507f60
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 ; 00507f61
        ;   XREF to: 0050e190 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190()
    MOV ECX,dword ptr [EBX + 0x15a8cc]  ; 00507f66
    ADD ESP,0x4                         ; 00507f6c
    CMP ESI,ECX                         ; 00507f6f
    JGE 0x00507e5f                      ; 00507f71
        ;   XREF to: 00507e5f (CONDITIONAL_JUMP)  ; LAB_00507e5f
    JMP 0x00507f10                      ; 00507f77
        ;   XREF to: 00507f10 (UNCONDITIONAL_JUMP)  ; LAB_00507f10

