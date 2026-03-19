; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_tileTextureMaps_FUN_0046a180(SCram *cram,int prompt_for_model)
;
; Parameters:
; SCram *          Stack[0x4]:4   cram
; int              Stack[0x8]:4   prompt_for_model
; Local Variables:
; float            Stack[-0x1c0]:4  local_1c0
; float            Stack[-0x1bc]:4  local_1bc
; float            Stack[-0x1b8]:4  local_1b8
; float            Stack[-0x1b4]:4  local_1b4
; char[200]        Stack[-0x1ac]:200  local_1ac
; char[200]        Stack[-0xe4]:200  local_e4
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f780
;
; Referenced Globals:
;   TerminatedCString s_art_0061d190
;   TerminatedCString s_anon_0061d194
;   undefined4 DAT_0061d195
;   TerminatedCString s_art_0061d196
;   undefined4 s_rt_0061d197
;   TerminatedCString s_WARNING_Only_valid_textu_0061d19a
;   TerminatedCString s_Hit_a_key_0061d1dd
;   float g_TextureResolutionMultiplier = 65536
;   TerminatedCString s_ERROR_No_valid_textures__0061d1ee
;   TerminatedCString s_Hit_a_key_0061d21c
;   TerminatedCString s_MDL_0061d229
;   undefined4 DAT_0061d22a
;   undefined4 DAT_0061d22b
;   undefined4 DAT_0061d22c
;   TerminatedCString s_Model_name_to_save_s_0061d22e
;   ... and 34 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
;   shape_design.c_cramTextureList_FUN_0046bb80
;   shape_design.c_cramTextures_FUN_0046a970
;   shape_design.c_exportModelToMDL_FUN_00459e80
;   shape_design.c_findTextureByFilename_FUN_0046dfc0
;   shape_design.c_fixupCramUV_FUN_0046e090
;   shape_design.c_getAtlasMapIndex_FUN_0046e030
;   shape_design.c_getTextureName_FUN_0046e060
;   shape_design.c_initializeTextureManager_FUN_0046a880
;   shape_design.c_normalizeUVCoordinates_FUN_0046e340
;   shape_design.c_promptForModelNameAndLoad_FUN_00458a10
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a180
        ;   Label: shape_design.c_tileTextureMaps_FUN_0046a180
    PUSH ESI                            ; 0046a181
    PUSH EDI                            ; 0046a182
    PUSH EBP                            ; 0046a183
    MOV EBP,ESP                         ; 0046a184
    SUB ESP,0x1bc                       ; 0046a186
    CMP dword ptr [EBP + 0x14],0x0      ; 0046a18c
    JZ 0x0046a1a7                       ; 0046a190
        ;   XREF to: 0046a1a7 (CONDITIONAL_JUMP)  ; LAB_0046a1a7
    PUSH 0x1                            ; 0046a192
    MOV EAX,0x61d190                    ; 0046a194 | = "art"
    PUSH EAX                            ; 0046a199 | = "art"
    CALL shape_design.c_validateModelTextures_FUN_00459a20 ; 0046a19a
        ;   XREF to: 00459a20 (UNCONDITIONAL_CALL)  ; int shape_design.c_validateModelTextures_FUN_00459a20(char * directory_path, int mode)
    ADD ESP,0x8                         ; 0046a19f
    JMP 0x0046a228                      ; 0046a1a2
        ;   XREF to: 0046a228 (UNCONDITIONAL_JUMP)  ; LAB_0046a228
    CMP dword ptr [EBP + 0x18],0x0      ; 0046a1a7
        ;   Label: LAB_0046a1a7
    JZ 0x0046a1bd                       ; 0046a1ab
        ;   XREF to: 0046a1bd (CONDITIONAL_JUMP)  ; LAB_0046a1bd
    CALL shape_design.c_promptForModelNameAndLoad_FUN_00458a10 ; 0046a1ad
        ;   XREF to: 00458a10 (UNCONDITIONAL_CALL)  ; int shape_design.c_promptForModelNameAndLoad_FUN_00458a10()
    TEST EAX,EAX                        ; 0046a1b2
    JNZ 0x0046a1bb                      ; 0046a1b4
        ;   XREF to: 0046a1bb (CONDITIONAL_JUMP)  ; LAB_0046a1bb
    JMP 0x0046a84a                      ; 0046a1b6
        ;   XREF to: 0046a84a (UNCONDITIONAL_JUMP)  ; LAB_0046a84a
    JMP 0x0046a1e1                      ; 0046a1bb
        ;   XREF to: 0046a1e1 (UNCONDITIONAL_JUMP)  ; LAB_0046a1e1
        ;   Label: LAB_0046a1bb
    MOV ESI,0x61d194                    ; 0046a1bd | = "?"
        ;   Label: LAB_0046a1bd
    MOV EDI,0x66eda8                    ; 0046a1c2 | g_LoadedModelName
    PUSH EDI                            ; 0046a1c7 | g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a1c8 | = "?" | s_art_0061d196
        ;   Label: LAB_0046a1c8
    MOV byte ptr [EDI],AL               ; 0046a1ca | g_LoadedModelName | g_LoadedModelName+2
    CMP AL,0x0                          ; 0046a1cc
    JZ 0x0046a1e0                       ; 0046a1ce
        ;   XREF to: 0046a1e0 (CONDITIONAL_JUMP)  ; LAB_0046a1e0
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a1d0 | DAT_0061d195 | s_rt_0061d197
    ADD ESI,0x2                         ; 0046a1d3
    MOV byte ptr [EDI + 0x1],AL         ; 0046a1d6 | g_LoadedModelName+1 | g_LoadedModelName+3
    ADD EDI,0x2                         ; 0046a1d9
    CMP AL,0x0                          ; 0046a1dc
    JNZ 0x0046a1c8                      ; 0046a1de
        ;   XREF to: 0046a1c8 (CONDITIONAL_JUMP)  ; LAB_0046a1c8
    POP EDI                             ; 0046a1e0
        ;   Label: LAB_0046a1e0
    PUSH 0x1                            ; 0046a1e1
        ;   Label: LAB_0046a1e1
    MOV EAX,0x61d196                    ; 0046a1e3 | = "art"
    PUSH EAX                            ; 0046a1e8 | = "art"
    CALL shape_design.c_validateModelTextures_FUN_00459a20 ; 0046a1e9
        ;   XREF to: 00459a20 (UNCONDITIONAL_CALL)  ; int shape_design.c_validateModelTextures_FUN_00459a20(char * directory_path, int mode)
    ADD ESP,0x8                         ; 0046a1ee
    TEST EAX,EAX                        ; 0046a1f1
    JZ 0x0046a228                       ; 0046a1f3
        ;   XREF to: 0046a228 (CONDITIONAL_JUMP)  ; LAB_0046a228
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046a1f5
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0046a1fa
    PUSH 0x0                            ; 0046a1fc
    MOV EAX,0x61d19a                    ; 0046a1fe | = "WARNING: Only valid textures will app..."
    PUSH EAX                            ; 0046a203 | = "WARNING: Only valid textures will app..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046a204
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046a209
    PUSH 0x16                           ; 0046a20c
    PUSH 0x0                            ; 0046a20e
    MOV EAX,0x61d1dd                    ; 0046a210 | = "Hit a key..."
    PUSH EAX                            ; 0046a215 | = "Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046a216
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046a21b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046a21e
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046a223
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    PUSH 0x1                            ; 0046a228
        ;   Label: LAB_0046a228
    CALL shape_design.c_initializeTextureManager_FUN_0046a880 ; 0046a22a
        ;   XREF to: 0046a880 (UNCONDITIONAL_CALL)  ; void shape_design.c_initializeTextureManager_FUN_0046a880(int initialization_mode)
    ADD ESP,0x4                         ; 0046a22f
    CALL shape_design.c_normalizeUVCoordinates_FUN_0046e340 ; 0046a232
        ;   XREF to: 0046e340 (UNCONDITIONAL_CALL)  ; void shape_design.c_normalizeUVCoordinates_FUN_0046e340()
    MOV dword ptr [EBP + -0x4],0x0      ; 0046a237
    JMP 0x0046a246                      ; 0046a23e
        ;   XREF to: 0046a246 (UNCONDITIONAL_JUMP)  ; LAB_0046a246
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a240
        ;   Label: LAB_0046a240
    INC dword ptr [EBP + -0x4]          ; 0046a243
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a246
        ;   Label: LAB_0046a246
    CMP EAX,dword ptr [0x016e990c]      ; 0046a249 | g_PolygonCount
    JGE 0x0046a465                      ; 0046a24f
        ;   XREF to: 0046a465 (CONDITIONAL_JUMP)  ; LAB_0046a465
    MOV dword ptr [EBP + 0xfffffe60],0x0 ; 0046a255
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a25f
    CMP byte ptr [EAX + 0x16e9914],0x0  ; 0046a266 | g_ModelPolygonData[0].texture_name[0]
    JZ 0x0046a460                       ; 0046a26d
        ;   XREF to: 0046a460 (CONDITIONAL_JUMP)  ; LAB_0046a460
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a273
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046a27a | g_ModelPolygonData[0].uv_u[0]
    MOV dword ptr [EBP + 0xfffffe5c],EAX ; 0046a280
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a286
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046a28d | g_ModelPolygonData[0].uv_v[0]
    MOV dword ptr [EBP + 0xfffffe58],EAX ; 0046a293
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a299
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046a2a0 | g_ModelPolygonData[0].uv_u[0]
    MOV dword ptr [EBP + 0xfffffe54],EAX ; 0046a2a6
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a2ac
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046a2b3 | g_ModelPolygonData[0].uv_v[0]
    MOV dword ptr [EBP + 0xfffffe50],EAX ; 0046a2b9
    MOV dword ptr [EBP + -0xc],0x1      ; 0046a2bf
    JMP 0x0046a2cb                      ; 0046a2c6
        ;   XREF to: 0046a2cb (UNCONDITIONAL_JUMP)  ; LAB_0046a2cb
    INC dword ptr [EBP + -0xc]          ; 0046a2c8
        ;   Label: LAB_0046a2c8
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a2cb
        ;   Label: LAB_0046a2cb
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a2d2
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046a2d5 | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x0046a3d2                      ; 0046a2db
        ;   XREF to: 0046a3d2 (CONDITIONAL_JUMP)  ; LAB_0046a3d2
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a2e1
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a2e8
    SHL EAX,0x2                         ; 0046a2eb
    ADD EAX,EDX                         ; 0046a2ee
    FLD float ptr [EAX + 0x16e9a08]     ; 0046a2f0 | g_ModelPolygonData[0].uv_u[1] | g_ModelPolygonData[0].uv_u[2]
    FCOMP float ptr [EBP + 0xfffffe5c]  ; 0046a2f6
    FNSTSW AX                           ; 0046a2fc
    SAHF                                ; 0046a2fe
    JNC 0x0046a31c                      ; 0046a2ff
        ;   XREF to: 0046a31c (CONDITIONAL_JUMP)  ; LAB_0046a31c
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a301
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a308
    SHL EAX,0x2                         ; 0046a30b
    ADD EAX,EDX                         ; 0046a30e
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046a310 | g_ModelPolygonData[0].uv_u[1]
    MOV dword ptr [EBP + 0xfffffe5c],EAX ; 0046a316
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a31c
        ;   Label: LAB_0046a31c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a323
    SHL EAX,0x2                         ; 0046a326
    ADD EAX,EDX                         ; 0046a329
    FLD float ptr [EAX + 0x16e9a48]     ; 0046a32b | g_ModelPolygonData[0].uv_v[1] | g_ModelPolygonData[0].uv_v[2]
    FCOMP float ptr [EBP + 0xfffffe58]  ; 0046a331
    FNSTSW AX                           ; 0046a337
    SAHF                                ; 0046a339
    JNC 0x0046a357                      ; 0046a33a
        ;   XREF to: 0046a357 (CONDITIONAL_JUMP)  ; LAB_0046a357
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a33c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a343
    SHL EAX,0x2                         ; 0046a346
    ADD EAX,EDX                         ; 0046a349
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046a34b | g_ModelPolygonData[0].uv_v[1]
    MOV dword ptr [EBP + 0xfffffe58],EAX ; 0046a351
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a357
        ;   Label: LAB_0046a357
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a35e
    SHL EAX,0x2                         ; 0046a361
    ADD EAX,EDX                         ; 0046a364
    FLD float ptr [EAX + 0x16e9a08]     ; 0046a366 | g_ModelPolygonData[0].uv_u[1]
    FCOMP float ptr [EBP + 0xfffffe54]  ; 0046a36c
    FNSTSW AX                           ; 0046a372
    SAHF                                ; 0046a374
    JBE 0x0046a392                      ; 0046a375
        ;   XREF to: 0046a392 (CONDITIONAL_JUMP)  ; LAB_0046a392
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a377
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a37e
    SHL EAX,0x2                         ; 0046a381
    ADD EAX,EDX                         ; 0046a384
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046a386 | g_ModelPolygonData[0].uv_u[1]
    MOV dword ptr [EBP + 0xfffffe54],EAX ; 0046a38c
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a392
        ;   Label: LAB_0046a392
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a399
    SHL EAX,0x2                         ; 0046a39c
    ADD EAX,EDX                         ; 0046a39f
    FLD float ptr [EAX + 0x16e9a48]     ; 0046a3a1 | g_ModelPolygonData[0].uv_v[1]
    FCOMP float ptr [EBP + 0xfffffe50]  ; 0046a3a7
    FNSTSW AX                           ; 0046a3ad
    SAHF                                ; 0046a3af
    JBE 0x0046a3cd                      ; 0046a3b0
        ;   XREF to: 0046a3cd (CONDITIONAL_JUMP)  ; LAB_0046a3cd
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a3b2
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a3b9
    SHL EAX,0x2                         ; 0046a3bc
    ADD EAX,EDX                         ; 0046a3bf
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046a3c1 | g_ModelPolygonData[0].uv_v[1]
    MOV dword ptr [EBP + 0xfffffe50],EAX ; 0046a3c7
    JMP 0x0046a2c8                      ; 0046a3cd
        ;   XREF to: 0046a2c8 (UNCONDITIONAL_JUMP)  ; LAB_0046a2c8
        ;   Label: LAB_0046a3cd
    FLD float ptr [EBP + 0xfffffe50]    ; 0046a3d2
        ;   Label: LAB_0046a3d2
    FMUL float ptr [0x0061d1ea]         ; 0046a3d8 | g_TextureResolutionMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046a3de
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xfffffe4c]  ; 0046a3e3
    PUSH dword ptr [EBP + 0xfffffe4c]   ; 0046a3e9
    FLD float ptr [EBP + 0xfffffe54]    ; 0046a3ef
    FMUL float ptr [0x0061d1ea]         ; 0046a3f5 | g_TextureResolutionMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046a3fb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xfffffe4c]  ; 0046a400
    PUSH dword ptr [EBP + 0xfffffe4c]   ; 0046a406
    FLD float ptr [EBP + 0xfffffe58]    ; 0046a40c
    FMUL float ptr [0x0061d1ea]         ; 0046a412 | g_TextureResolutionMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046a418
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xfffffe4c]  ; 0046a41d
    PUSH dword ptr [EBP + 0xfffffe4c]   ; 0046a423
    FLD float ptr [EBP + 0xfffffe5c]    ; 0046a429
    FMUL float ptr [0x0061d1ea]         ; 0046a42f | g_TextureResolutionMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046a435
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xfffffe4c]  ; 0046a43a
    PUSH dword ptr [EBP + 0xfffffe4c]   ; 0046a440
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a446
    MOV EDX,0x16e9910                   ; 0046a44d | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a452
    ADD EAX,0x4                         ; 0046a454
    PUSH EAX                            ; 0046a457
    CALL shape_design.c_cramTextures_FUN_0046a970 ; 0046a458
        ;   XREF to: 0046a970 (UNCONDITIONAL_CALL)  ; void shape_design.c_cramTextures_FUN_0046a970(char * texture_filename, int min_u, int min_v, int max_u, ...)
    ADD ESP,0x14                        ; 0046a45d
    JMP 0x0046a240                      ; 0046a460
        ;   XREF to: 0046a240 (UNCONDITIONAL_JUMP)  ; LAB_0046a240
        ;   Label: LAB_0046a460
    CMP dword ptr [0x01e8d260],0x0      ; 0046a465 | g_TextureProcessedCount
        ;   Label: LAB_0046a465
    JNZ 0x0046a494                      ; 0046a46c
        ;   XREF to: 0046a494 (CONDITIONAL_JUMP)  ; LAB_0046a494
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046a46e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0046a473
    PUSH 0x0                            ; 0046a475
    MOV EAX,0x61d1ee                    ; 0046a477 | = "ERROR: No valid textures found.  Hit ..."
    PUSH EAX                            ; 0046a47c | = "ERROR: No valid textures found.  Hit ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046a47d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046a482
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046a485
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046a48a
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0046a84a                      ; 0046a48f
        ;   XREF to: 0046a84a (UNCONDITIONAL_JUMP)  ; LAB_0046a84a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046a494
        ;   Label: LAB_0046a494
    PUSH EAX                            ; 0046a497
    CALL shape_design.c_cramTextureList_FUN_0046bb80 ; 0046a498
        ;   XREF to: 0046bb80 (UNCONDITIONAL_CALL)  ; int shape_design.c_cramTextureList_FUN_0046bb80(SCram * cram)
    ADD ESP,0x4                         ; 0046a49d
    TEST EAX,EAX                        ; 0046a4a0
    JNZ 0x0046a4a9                      ; 0046a4a2
        ;   XREF to: 0046a4a9 (CONDITIONAL_JUMP)  ; LAB_0046a4a9
    JMP 0x0046a84a                      ; 0046a4a4
        ;   XREF to: 0046a84a (UNCONDITIONAL_JUMP)  ; LAB_0046a84a
    CMP dword ptr [EBP + 0x14],0x0      ; 0046a4a9
        ;   Label: LAB_0046a4a9
    JNZ 0x0046a4cb                      ; 0046a4ad
        ;   XREF to: 0046a4cb (CONDITIONAL_JUMP)  ; LAB_0046a4cb
    PUSH 0x6e                           ; 0046a4af
    PUSH 0x0                            ; 0046a4b1
    MOV EAX,0x61d21c                    ; 0046a4b3 | = "Hit a key..."
    PUSH EAX                            ; 0046a4b8 | = "Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046a4b9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046a4be
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046a4c1
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046a4c6
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV dword ptr [EBP + -0x4],0x0      ; 0046a4cb
        ;   Label: LAB_0046a4cb
    JMP 0x0046a4da                      ; 0046a4d2
        ;   XREF to: 0046a4da (UNCONDITIONAL_JUMP)  ; LAB_0046a4da
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a4d4
        ;   Label: LAB_0046a4d4
    INC dword ptr [EBP + -0x4]          ; 0046a4d7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a4da
        ;   Label: LAB_0046a4da
    CMP EAX,dword ptr [0x016e990c]      ; 0046a4dd | g_PolygonCount
    JGE 0x0046a607                      ; 0046a4e3
        ;   XREF to: 0046a607 (CONDITIONAL_JUMP)  ; LAB_0046a607
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a4e9
    MOV EAX,0x16e9910                   ; 0046a4f0 | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a4f5
    ADD EAX,0x4                         ; 0046a4f7
    PUSH EAX                            ; 0046a4fa
    CALL shape_design.c_findTextureByFilename_FUN_0046dfc0 ; 0046a4fb
        ;   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)  ; int shape_design.c_findTextureByFilename_FUN_0046dfc0(char * filename)
    ADD ESP,0x4                         ; 0046a500
    MOV dword ptr [EBP + 0xfffffe48],EAX ; 0046a503
    CMP dword ptr [EBP + 0xfffffe48],0x0 ; 0046a509
    JGE 0x0046a517                      ; 0046a510
        ;   XREF to: 0046a517 (CONDITIONAL_JUMP)  ; LAB_0046a517
    JMP 0x0046a602                      ; 0046a512
        ;   XREF to: 0046a602 (UNCONDITIONAL_JUMP)  ; LAB_0046a602
    MOV dword ptr [EBP + -0xc],0x0      ; 0046a517
        ;   Label: LAB_0046a517
    JMP 0x0046a526                      ; 0046a51e
        ;   XREF to: 0046a526 (UNCONDITIONAL_JUMP)  ; LAB_0046a526
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a520
        ;   Label: LAB_0046a520
    INC dword ptr [EBP + -0xc]          ; 0046a523
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a526
        ;   Label: LAB_0046a526
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a52d
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046a530 | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x0046a581                      ; 0046a536
        ;   XREF to: 0046a581 (CONDITIONAL_JUMP)  ; LAB_0046a581
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a538
    MOV EDX,0x16e9910                   ; 0046a53f | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a544
    MOV EDX,dword ptr [EBP + -0xc]      ; 0046a546
    SHL EDX,0x2                         ; 0046a549
    ADD EAX,0x138                       ; 0046a54c
    ADD EAX,EDX                         ; 0046a551
    PUSH EAX                            ; 0046a553
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a554
    MOV EDX,0x16e9910                   ; 0046a55b | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a560
    MOV EDX,dword ptr [EBP + -0xc]      ; 0046a562
    SHL EDX,0x2                         ; 0046a565
    ADD EAX,0xf8                        ; 0046a568
    ADD EAX,EDX                         ; 0046a56d
    PUSH EAX                            ; 0046a56f
    MOV EAX,dword ptr [EBP + 0xfffffe48] ; 0046a570
    PUSH EAX                            ; 0046a576
    CALL shape_design.c_fixupCramUV_FUN_0046e090 ; 0046a577
        ;   XREF to: 0046e090 (UNCONDITIONAL_CALL)  ; void shape_design.c_fixupCramUV_FUN_0046e090(int atlas_texture_index, float * u_coord, float * v_coord)
    ADD ESP,0xc                         ; 0046a57c
    JMP 0x0046a520                      ; 0046a57f
        ;   XREF to: 0046a520 (UNCONDITIONAL_JUMP)  ; LAB_0046a520
    IMUL ESI,dword ptr [EBP + -0x4],0x184 ; 0046a581
        ;   Label: LAB_0046a581
    MOV EAX,0x16e9910                   ; 0046a588 | g_ModelPolygonData
    ADD EAX,ESI                         ; 0046a58d
    LEA ESI,[EAX + 0x4]                 ; 0046a58f
    IMUL EDI,dword ptr [EBP + -0x4],0x184 ; 0046a592
    MOV EAX,0x16e9910                   ; 0046a599 | g_ModelPolygonData
    ADD EAX,EDI                         ; 0046a59e
    LEA EDI,[EAX + 0x54]                ; 0046a5a0
    PUSH EDI                            ; 0046a5a3
    MOV AL,byte ptr [ESI]               ; 0046a5a4 | g_ModelPolygonData[0].texture_name[0] | g_ModelPolygonData[0].texture_name[2]
        ;   Label: LAB_0046a5a4
    MOV byte ptr [EDI],AL               ; 0046a5a6 | g_ModelPolygonData[0].lightmap_name[0] | g_ModelPolygonData[0].lightmap_name[2]
    CMP AL,0x0                          ; 0046a5a8
    JZ 0x0046a5bc                       ; 0046a5aa
        ;   XREF to: 0046a5bc (CONDITIONAL_JUMP)  ; LAB_0046a5bc
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a5ac | g_ModelPolygonData[0].texture_name[1] | g_ModelPolygonData[0].texture_name[3]
    ADD ESI,0x2                         ; 0046a5af
    MOV byte ptr [EDI + 0x1],AL         ; 0046a5b2 | g_ModelPolygonData[0].lightmap_name[1] | g_ModelPolygonData[0].lightmap_name[3]
    ADD EDI,0x2                         ; 0046a5b5
    CMP AL,0x0                          ; 0046a5b8
    JNZ 0x0046a5a4                      ; 0046a5ba
        ;   XREF to: 0046a5a4 (CONDITIONAL_JUMP)  ; LAB_0046a5a4
    POP EDI                             ; 0046a5bc
        ;   Label: LAB_0046a5bc
    MOV EAX,dword ptr [EBP + 0xfffffe48] ; 0046a5bd
    PUSH EAX                            ; 0046a5c3
    CALL shape_design.c_getAtlasMapIndex_FUN_0046e030 ; 0046a5c4
        ;   XREF to: 0046e030 (UNCONDITIONAL_CALL)  ; int shape_design.c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)
    ADD ESP,0x4                         ; 0046a5c9
    PUSH EAX                            ; 0046a5cc
    CALL shape_design.c_getTextureName_FUN_0046e060 ; 0046a5cd
        ;   XREF to: 0046e060 (UNCONDITIONAL_CALL)  ; char * shape_design.c_getTextureName_FUN_0046e060(int texture_index)
    ADD ESP,0x4                         ; 0046a5d2
    IMUL ESI,dword ptr [EBP + -0x4],0x184 ; 0046a5d5
    MOV EDI,0x16e9910                   ; 0046a5dc | g_ModelPolygonData
    ADD ESI,EDI                         ; 0046a5e1
    LEA EDI,[ESI + 0x4]                 ; 0046a5e3
    MOV ESI,EAX                         ; 0046a5e6
    PUSH EDI                            ; 0046a5e8
    MOV AL,byte ptr [ESI]               ; 0046a5e9
        ;   Label: LAB_0046a5e9
    MOV byte ptr [EDI],AL               ; 0046a5eb | g_ModelPolygonData[0].texture_name[0] | g_ModelPolygonData[0].texture_name[2]
    CMP AL,0x0                          ; 0046a5ed
    JZ 0x0046a601                       ; 0046a5ef
        ;   XREF to: 0046a601 (CONDITIONAL_JUMP)  ; LAB_0046a601
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a5f1
    ADD ESI,0x2                         ; 0046a5f4
    MOV byte ptr [EDI + 0x1],AL         ; 0046a5f7 | g_ModelPolygonData[0].texture_name[1] | g_ModelPolygonData[0].texture_name[3]
    ADD EDI,0x2                         ; 0046a5fa
    CMP AL,0x0                          ; 0046a5fd
    JNZ 0x0046a5e9                      ; 0046a5ff
        ;   XREF to: 0046a5e9 (CONDITIONAL_JUMP)  ; LAB_0046a5e9
    POP EDI                             ; 0046a601
        ;   Label: LAB_0046a601
    JMP 0x0046a4d4                      ; 0046a602
        ;   XREF to: 0046a4d4 (UNCONDITIONAL_JUMP)  ; LAB_0046a4d4
        ;   Label: LAB_0046a602
    CMP dword ptr [EBP + 0x14],0x0      ; 0046a607
        ;   Label: LAB_0046a607
    JZ 0x0046a660                       ; 0046a60b
        ;   XREF to: 0046a660 (CONDITIONAL_JUMP)  ; LAB_0046a660
    MOV ESI,dword ptr [EBP + 0x14]      ; 0046a60d
    MOV EDI,0x66eda8                    ; 0046a610 | g_LoadedModelName
    PUSH EDI                            ; 0046a615 | g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a616
        ;   Label: LAB_0046a616
    MOV byte ptr [EDI],AL               ; 0046a618 | g_LoadedModelName | g_LoadedModelName+2
    CMP AL,0x0                          ; 0046a61a
    JZ 0x0046a62e                       ; 0046a61c
        ;   XREF to: 0046a62e (CONDITIONAL_JUMP)  ; LAB_0046a62e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a61e
    ADD ESI,0x2                         ; 0046a621
    MOV byte ptr [EDI + 0x1],AL         ; 0046a624 | g_LoadedModelName+1 | g_LoadedModelName+3
    ADD EDI,0x2                         ; 0046a627
    CMP AL,0x0                          ; 0046a62a
    JNZ 0x0046a616                      ; 0046a62c
        ;   XREF to: 0046a616 (CONDITIONAL_JUMP)  ; LAB_0046a616
    POP EDI                             ; 0046a62e
        ;   Label: LAB_0046a62e
    MOV ESI,0x61d229                    ; 0046a62f | = ".MDL"
    MOV EDI,0x66eda8                    ; 0046a634 | g_LoadedModelName
    PUSH EDI                            ; 0046a639 | g_LoadedModelName
    SUB ECX,ECX                         ; 0046a63a
    DEC ECX                             ; 0046a63c
    MOV AL,0x0                          ; 0046a63d
    SCASB.REPNE ES:EDI                  ; 0046a63f | g_LoadedModelName | g_LoadedModelName+1
    DEC EDI                             ; 0046a641
    MOV AL,byte ptr [ESI]               ; 0046a642 | = ".MDL" | DAT_0061d22b
        ;   Label: LAB_0046a642
    MOV byte ptr [EDI],AL               ; 0046a644 | g_LoadedModelName | g_LoadedModelName+1 | g_LoadedModelName+2
    CMP AL,0x0                          ; 0046a646
    JZ 0x0046a65a                       ; 0046a648
        ;   XREF to: 0046a65a (CONDITIONAL_JUMP)  ; LAB_0046a65a
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a64a | DAT_0061d22a | DAT_0061d22c
    ADD ESI,0x2                         ; 0046a64d
    MOV byte ptr [EDI + 0x1],AL         ; 0046a650 | g_LoadedModelName+1 | g_LoadedModelName+2 | g_LoadedModelName+3
    ADD EDI,0x2                         ; 0046a653
    CMP AL,0x0                          ; 0046a656
    JNZ 0x0046a642                      ; 0046a658
        ;   XREF to: 0046a642 (CONDITIONAL_JUMP)  ; LAB_0046a642
    POP EDI                             ; 0046a65a
        ;   Label: LAB_0046a65a
    JMP 0x0046a845                      ; 0046a65b
        ;   XREF to: 0046a845 (UNCONDITIONAL_JUMP)  ; LAB_0046a845
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046a660
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046a660
    MOV ESI,0x1eb1768                   ; 0046a665 | g_CurrentModelFilename
    LEA EDI,[EBP + 0xffffff2c]          ; 0046a66a
    PUSH EDI                            ; 0046a670
    MOV AL,byte ptr [ESI]               ; 0046a671 | g_CurrentModelFilename | g_CurrentModelFilename+2
        ;   Label: LAB_0046a671
    MOV byte ptr [EDI],AL               ; 0046a673
    CMP AL,0x0                          ; 0046a675
    JZ 0x0046a689                       ; 0046a677
        ;   XREF to: 0046a689 (CONDITIONAL_JUMP)  ; LAB_0046a689
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a679 | g_CurrentModelFilename+1 | g_CurrentModelFilename+3
    ADD ESI,0x2                         ; 0046a67c
    MOV byte ptr [EDI + 0x1],AL         ; 0046a67f
    ADD EDI,0x2                         ; 0046a682
    CMP AL,0x0                          ; 0046a685
    JNZ 0x0046a671                      ; 0046a687
        ;   XREF to: 0046a671 (CONDITIONAL_JUMP)  ; LAB_0046a671
    POP EDI                             ; 0046a689
        ;   Label: LAB_0046a689
    MOV EDX,0x2e                        ; 0046a68a
    LEA ESI,[EBP + 0xffffff2c]          ; 0046a68f
    MOV AL,byte ptr [ESI]               ; 0046a695
        ;   Label: LAB_0046a695
    CMP AL,DL                           ; 0046a697
    JZ 0x0046a6ad                       ; 0046a699
        ;   XREF to: 0046a6ad (CONDITIONAL_JUMP)  ; LAB_0046a6ad
    CMP AL,0x0                          ; 0046a69b
    JZ 0x0046a6ab                       ; 0046a69d
        ;   XREF to: 0046a6ab (CONDITIONAL_JUMP)  ; LAB_0046a6ab
    INC ESI                             ; 0046a69f
    MOV AL,byte ptr [ESI]               ; 0046a6a0
    CMP AL,DL                           ; 0046a6a2
    JZ 0x0046a6ad                       ; 0046a6a4
        ;   XREF to: 0046a6ad (CONDITIONAL_JUMP)  ; LAB_0046a6ad
    INC ESI                             ; 0046a6a6
    CMP AL,0x0                          ; 0046a6a7
    JNZ 0x0046a695                      ; 0046a6a9
        ;   XREF to: 0046a695 (CONDITIONAL_JUMP)  ; LAB_0046a695
    SUB ESI,ESI                         ; 0046a6ab
        ;   Label: LAB_0046a6ab
    MOV dword ptr [EBP + 0xfffffe44],ESI ; 0046a6ad
        ;   Label: LAB_0046a6ad
    CMP dword ptr [EBP + 0xfffffe44],0x0 ; 0046a6b3
    JZ 0x0046a6c5                       ; 0046a6ba
        ;   XREF to: 0046a6c5 (CONDITIONAL_JUMP)  ; LAB_0046a6c5
    MOV EAX,dword ptr [EBP + 0xfffffe44] ; 0046a6bc
    MOV byte ptr [EAX],0x0              ; 0046a6c2
    LEA EAX,[EBP + 0xffffff2c]          ; 0046a6c5
        ;   Label: LAB_0046a6c5
    PUSH EAX                            ; 0046a6cb
    MOV EAX,0x61d22e                    ; 0046a6cc | = "Model name to save [%s] : "
    PUSH EAX                            ; 0046a6d1 | = "Model name to save [%s] : "
    LEA EAX,[EBP + 0xfffffe64]          ; 0046a6d2
    PUSH EAX                            ; 0046a6d8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046a6d9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046a6de
    LEA EAX,[EBP + 0xfffffe64]          ; 0046a6e1
    PUSH EAX                            ; 0046a6e7
    PUSH 0x0                            ; 0046a6e8
    PUSH 0x0                            ; 0046a6ea
    PUSH 0x27                           ; 0046a6ec
    MOV EAX,0x66eda8                    ; 0046a6ee | g_LoadedModelName
    PUSH EAX                            ; 0046a6f3 | g_LoadedModelName
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046a6f4
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046a6f9
    CMP EAX,0x1b                        ; 0046a6fc
    JZ 0x0046a7b8                       ; 0046a6ff
        ;   XREF to: 0046a7b8 (CONDITIONAL_JUMP)  ; LAB_0046a7b8
    MOV EDI,0x66eda8                    ; 0046a705 | g_LoadedModelName
    SUB ECX,ECX                         ; 0046a70a
    DEC ECX                             ; 0046a70c
    XOR EAX,EAX                         ; 0046a70d
    SCASB.REPNE ES:EDI                  ; 0046a70f | g_LoadedModelName | g_LoadedModelName+1
    NOT ECX                             ; 0046a711
    DEC ECX                             ; 0046a713
    TEST ECX,ECX                        ; 0046a714
    JNZ 0x0046a73d                      ; 0046a716
        ;   XREF to: 0046a73d (CONDITIONAL_JUMP)  ; LAB_0046a73d
    LEA ESI,[EBP + 0xffffff2c]          ; 0046a718
    MOV EDI,0x66eda8                    ; 0046a71e | g_LoadedModelName
    PUSH EDI                            ; 0046a723 | g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a724
        ;   Label: LAB_0046a724
    MOV byte ptr [EDI],AL               ; 0046a726 | g_LoadedModelName | g_LoadedModelName+2
    CMP AL,0x0                          ; 0046a728
    JZ 0x0046a73c                       ; 0046a72a
        ;   XREF to: 0046a73c (CONDITIONAL_JUMP)  ; LAB_0046a73c
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a72c
    ADD ESI,0x2                         ; 0046a72f
    MOV byte ptr [EDI + 0x1],AL         ; 0046a732 | g_LoadedModelName+1 | g_LoadedModelName+3
    ADD EDI,0x2                         ; 0046a735
    CMP AL,0x0                          ; 0046a738
    JNZ 0x0046a724                      ; 0046a73a
        ;   XREF to: 0046a724 (CONDITIONAL_JUMP)  ; LAB_0046a724
    POP EDI                             ; 0046a73c
        ;   Label: LAB_0046a73c
    MOV EDX,0x2e                        ; 0046a73d
        ;   Label: LAB_0046a73d
    MOV ESI,0x66eda8                    ; 0046a742 | g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a747 | g_LoadedModelName | g_LoadedModelName+2
        ;   Label: LAB_0046a747
    CMP AL,DL                           ; 0046a749
    JZ 0x0046a75f                       ; 0046a74b
        ;   XREF to: 0046a75f (CONDITIONAL_JUMP)  ; LAB_0046a75f
    CMP AL,0x0                          ; 0046a74d
    JZ 0x0046a75d                       ; 0046a74f
        ;   XREF to: 0046a75d (CONDITIONAL_JUMP)  ; LAB_0046a75d
    INC ESI                             ; 0046a751
    MOV AL,byte ptr [ESI]               ; 0046a752 | g_LoadedModelName+1 | g_LoadedModelName+3
    CMP AL,DL                           ; 0046a754
    JZ 0x0046a75f                       ; 0046a756
        ;   XREF to: 0046a75f (CONDITIONAL_JUMP)  ; LAB_0046a75f
    INC ESI                             ; 0046a758
    CMP AL,0x0                          ; 0046a759
    JNZ 0x0046a747                      ; 0046a75b
        ;   XREF to: 0046a747 (CONDITIONAL_JUMP)  ; LAB_0046a747
    SUB ESI,ESI                         ; 0046a75d
        ;   Label: LAB_0046a75d
    TEST ESI,ESI                        ; 0046a75f
        ;   Label: LAB_0046a75f
    JNZ 0x0046a777                      ; 0046a761
        ;   XREF to: 0046a777 (CONDITIONAL_JUMP)  ; LAB_0046a777
    MOV EDI,0x66eda8                    ; 0046a763 | g_LoadedModelName
    SUB ECX,ECX                         ; 0046a768
    DEC ECX                             ; 0046a76a
    XOR EAX,EAX                         ; 0046a76b
    SCASB.REPNE ES:EDI                  ; 0046a76d | g_LoadedModelName | g_LoadedModelName+1
    NOT ECX                             ; 0046a76f
    DEC ECX                             ; 0046a771
    CMP ECX,0x8                         ; 0046a772
    JBE 0x0046a779                      ; 0046a775
        ;   XREF to: 0046a779 (CONDITIONAL_JUMP)  ; LAB_0046a779
    JMP 0x0046a7a5                      ; 0046a777
        ;   XREF to: 0046a7a5 (UNCONDITIONAL_JUMP)  ; LAB_0046a7a5
        ;   Label: LAB_0046a777
    MOV ESI,0x61d249                    ; 0046a779 | = ".MDL"
        ;   Label: LAB_0046a779
    MOV EDI,0x66eda8                    ; 0046a77e | g_LoadedModelName
    PUSH EDI                            ; 0046a783 | g_LoadedModelName
    SUB ECX,ECX                         ; 0046a784
    DEC ECX                             ; 0046a786
    MOV AL,0x0                          ; 0046a787
    SCASB.REPNE ES:EDI                  ; 0046a789 | g_LoadedModelName | g_LoadedModelName+1
    DEC EDI                             ; 0046a78b
    MOV AL,byte ptr [ESI]               ; 0046a78c | = ".MDL" | DAT_0061d24b
        ;   Label: LAB_0046a78c
    MOV byte ptr [EDI],AL               ; 0046a78e | g_LoadedModelName | g_LoadedModelName+1 | g_LoadedModelName+2
    CMP AL,0x0                          ; 0046a790
    JZ 0x0046a7a4                       ; 0046a792
        ;   XREF to: 0046a7a4 (CONDITIONAL_JUMP)  ; LAB_0046a7a4
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a794 | DAT_0061d24a | DAT_0061d24c
    ADD ESI,0x2                         ; 0046a797
    MOV byte ptr [EDI + 0x1],AL         ; 0046a79a | g_LoadedModelName+1 | g_LoadedModelName+2 | g_LoadedModelName+3
    ADD EDI,0x2                         ; 0046a79d
    CMP AL,0x0                          ; 0046a7a0
    JNZ 0x0046a78c                      ; 0046a7a2
        ;   XREF to: 0046a78c (CONDITIONAL_JUMP)  ; LAB_0046a78c
    POP EDI                             ; 0046a7a4
        ;   Label: LAB_0046a7a4
    MOV EAX,0x66eda8                    ; 0046a7a5 | g_LoadedModelName
        ;   Label: LAB_0046a7a5
    PUSH EAX                            ; 0046a7aa | g_LoadedModelName
    CALL shape_design.c_exportModelToMDL_FUN_00459e80 ; 0046a7ab
        ;   XREF to: 00459e80 (UNCONDITIONAL_CALL)  ; void shape_design.c_exportModelToMDL_FUN_00459e80(char * mdl_filename)
    ADD ESP,0x4                         ; 0046a7b0
    JMP 0x0046a845                      ; 0046a7b3
        ;   XREF to: 0046a845 (UNCONDITIONAL_JUMP)  ; LAB_0046a845
    LEA ESI,[EBP + 0xffffff2c]          ; 0046a7b8
        ;   Label: LAB_0046a7b8
    MOV EDI,0x66eda8                    ; 0046a7be | g_LoadedModelName
    PUSH EDI                            ; 0046a7c3 | g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a7c4
        ;   Label: LAB_0046a7c4
    MOV byte ptr [EDI],AL               ; 0046a7c6 | g_LoadedModelName | g_LoadedModelName+2
    CMP AL,0x0                          ; 0046a7c8
    JZ 0x0046a7dc                       ; 0046a7ca
        ;   XREF to: 0046a7dc (CONDITIONAL_JUMP)  ; LAB_0046a7dc
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a7cc
    ADD ESI,0x2                         ; 0046a7cf
    MOV byte ptr [EDI + 0x1],AL         ; 0046a7d2 | g_LoadedModelName+1 | g_LoadedModelName+3
    ADD EDI,0x2                         ; 0046a7d5
    CMP AL,0x0                          ; 0046a7d8
    JNZ 0x0046a7c4                      ; 0046a7da
        ;   XREF to: 0046a7c4 (CONDITIONAL_JUMP)  ; LAB_0046a7c4
    POP EDI                             ; 0046a7dc
        ;   Label: LAB_0046a7dc
    MOV EDX,0x2e                        ; 0046a7dd
    MOV ESI,0x66eda8                    ; 0046a7e2 | g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a7e7 | g_LoadedModelName | g_LoadedModelName+2
        ;   Label: LAB_0046a7e7
    CMP AL,DL                           ; 0046a7e9
    JZ 0x0046a7ff                       ; 0046a7eb
        ;   XREF to: 0046a7ff (CONDITIONAL_JUMP)  ; LAB_0046a7ff
    CMP AL,0x0                          ; 0046a7ed
    JZ 0x0046a7fd                       ; 0046a7ef
        ;   XREF to: 0046a7fd (CONDITIONAL_JUMP)  ; LAB_0046a7fd
    INC ESI                             ; 0046a7f1
    MOV AL,byte ptr [ESI]               ; 0046a7f2 | g_LoadedModelName+1 | g_LoadedModelName+3
    CMP AL,DL                           ; 0046a7f4
    JZ 0x0046a7ff                       ; 0046a7f6
        ;   XREF to: 0046a7ff (CONDITIONAL_JUMP)  ; LAB_0046a7ff
    INC ESI                             ; 0046a7f8
    CMP AL,0x0                          ; 0046a7f9
    JNZ 0x0046a7e7                      ; 0046a7fb
        ;   XREF to: 0046a7e7 (CONDITIONAL_JUMP)  ; LAB_0046a7e7
    SUB ESI,ESI                         ; 0046a7fd
        ;   Label: LAB_0046a7fd
    TEST ESI,ESI                        ; 0046a7ff
        ;   Label: LAB_0046a7ff
    JNZ 0x0046a817                      ; 0046a801
        ;   XREF to: 0046a817 (CONDITIONAL_JUMP)  ; LAB_0046a817
    MOV EDI,0x66eda8                    ; 0046a803 | g_LoadedModelName
    SUB ECX,ECX                         ; 0046a808
    DEC ECX                             ; 0046a80a
    XOR EAX,EAX                         ; 0046a80b
    SCASB.REPNE ES:EDI                  ; 0046a80d | g_LoadedModelName | g_LoadedModelName+1
    NOT ECX                             ; 0046a80f
    DEC ECX                             ; 0046a811
    CMP ECX,0x8                         ; 0046a812
    JBE 0x0046a819                      ; 0046a815
        ;   XREF to: 0046a819 (CONDITIONAL_JUMP)  ; LAB_0046a819
    JMP 0x0046a845                      ; 0046a817
        ;   XREF to: 0046a845 (UNCONDITIONAL_JUMP)  ; LAB_0046a845
        ;   Label: LAB_0046a817
    MOV ESI,0x61d24e                    ; 0046a819 | = ".MDL"
        ;   Label: LAB_0046a819
    MOV EDI,0x66eda8                    ; 0046a81e | g_LoadedModelName
    PUSH EDI                            ; 0046a823 | g_LoadedModelName
    SUB ECX,ECX                         ; 0046a824
    DEC ECX                             ; 0046a826
    MOV AL,0x0                          ; 0046a827
    SCASB.REPNE ES:EDI                  ; 0046a829 | g_LoadedModelName | g_LoadedModelName+1
    DEC EDI                             ; 0046a82b
    MOV AL,byte ptr [ESI]               ; 0046a82c | = ".MDL" | DAT_0061d250
        ;   Label: LAB_0046a82c
    MOV byte ptr [EDI],AL               ; 0046a82e | g_LoadedModelName | g_LoadedModelName+1 | g_LoadedModelName+2
    CMP AL,0x0                          ; 0046a830
    JZ 0x0046a844                       ; 0046a832
        ;   XREF to: 0046a844 (CONDITIONAL_JUMP)  ; LAB_0046a844
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a834 | DAT_0061d24f | DAT_0061d251
    ADD ESI,0x2                         ; 0046a837
    MOV byte ptr [EDI + 0x1],AL         ; 0046a83a | g_LoadedModelName+1 | g_LoadedModelName+2 | g_LoadedModelName+3
    ADD EDI,0x2                         ; 0046a83d
    CMP AL,0x0                          ; 0046a840
    JNZ 0x0046a82c                      ; 0046a842
        ;   XREF to: 0046a82c (CONDITIONAL_JUMP)  ; LAB_0046a82c
    POP EDI                             ; 0046a844
        ;   Label: LAB_0046a844
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 0046a845
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
        ;   Label: LAB_0046a845
    MOV ESP,EBP                         ; 0046a84a
        ;   Label: LAB_0046a84a
    POP EBP                             ; 0046a84c
    POP EDI                             ; 0046a84d
    POP ESI                             ; 0046a84e
    POP EBX                             ; 0046a84f
    RET                                 ; 0046a850

