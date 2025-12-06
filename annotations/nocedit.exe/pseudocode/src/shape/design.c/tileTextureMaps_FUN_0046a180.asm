; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_tileTextureMaps_FUN_0046a180(char * model_name, int prompt_for_model)
;
; Parameters:
; char *           Stack[0x4]:4   model_name
; int              Stack[0x8]:4   prompt_for_model
; Local Variables:
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined1       Stack[-0x1ac]:1  local_1ac
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0xe3]:1  local_e3
; undefined1       Stack[-0xe1]:1  local_e1
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
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
;   crt_stdio.c_sprintf_FUN_005fdbd0
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
    JZ 0x0046a1a7                       ; 0046a190 | LAB_0046a1a7
        ;   XREF to: 0046a1a7 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 0046a192
    MOV EAX,0x61d190                    ; 0046a194 | = "art" | s_art_0061d190 = art
    PUSH EAX                            ; 0046a199 | = "art" | s_art_0061d190 = art
    CALL shape_design.c_validateModelTextures_FUN_00459a20 ; 0046a19a | int shape_design.c_validateModelTextures_FUN_00459a20(char * directory_path, int mode)
        ;   XREF to: 00459a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0046a19f
    JMP 0x0046a228                      ; 0046a1a2 | LAB_0046a228
        ;   XREF to: 0046a228 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x18],0x0      ; 0046a1a7
        ;   Label: LAB_0046a1a7
    JZ 0x0046a1bd                       ; 0046a1ab | LAB_0046a1bd
        ;   XREF to: 0046a1bd (CONDITIONAL_JUMP)
    CALL shape_design.c_promptForModelNameAndLoad_FUN_00458a10 ; 0046a1ad | int shape_design.c_promptForModelNameAndLoad_FUN_00458a10()
        ;   XREF to: 00458a10 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 0046a1b2
    JNZ 0x0046a1bb                      ; 0046a1b4 | LAB_0046a1bb
        ;   XREF to: 0046a1bb (CONDITIONAL_JUMP)
    JMP 0x0046a84a                      ; 0046a1b6 | LAB_0046a84a
        ;   XREF to: 0046a84a (UNCONDITIONAL_JUMP)
    JMP 0x0046a1e1                      ; 0046a1bb | LAB_0046a1e1
        ;   Label: LAB_0046a1bb
        ;   XREF to: 0046a1e1 (UNCONDITIONAL_JUMP)
    MOV ESI,0x61d194                    ; 0046a1bd | = "?" | s_anon_0061d194 = ?
        ;   Label: LAB_0046a1bd
    MOV EDI,0x66eda8                    ; 0046a1c2 | char[80] g_LoadedModelName
    PUSH EDI                            ; 0046a1c7 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a1c8 | = "?" | s_anon_0061d194 = ? | s_art_0061d196 = art
        ;   Label: LAB_0046a1c8
    MOV byte ptr [EDI],AL               ; 0046a1ca | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 0046a1cc
    JZ 0x0046a1e0                       ; 0046a1ce | LAB_0046a1e0
        ;   XREF to: 0046a1e0 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a1d0 | DAT_0061d195
    ADD ESI,0x2                         ; 0046a1d3
    MOV byte ptr [EDI + 0x1],AL         ; 0046a1d6 | s__0066eda9
    ADD EDI,0x2                         ; 0046a1d9
    CMP AL,0x0                          ; 0046a1dc
    JNZ 0x0046a1c8                      ; 0046a1de | LAB_0046a1c8
        ;   XREF to: 0046a1c8 (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a1e0
        ;   Label: LAB_0046a1e0
    PUSH 0x1                            ; 0046a1e1
        ;   Label: LAB_0046a1e1
    MOV EAX,0x61d196                    ; 0046a1e3 | = "art" | s_art_0061d196 = art
    PUSH EAX                            ; 0046a1e8 | = "art" | s_art_0061d196 = art
    CALL shape_design.c_validateModelTextures_FUN_00459a20 ; 0046a1e9 | int shape_design.c_validateModelTextures_FUN_00459a20(char * directory_path, int mode)
        ;   XREF to: 00459a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0046a1ee
    TEST EAX,EAX                        ; 0046a1f1
    JZ 0x0046a228                       ; 0046a1f3 | LAB_0046a228
        ;   XREF to: 0046a228 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046a1f5 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 0046a1fa
    PUSH 0x0                            ; 0046a1fc
    MOV EAX,0x61d19a                    ; 0046a1fe | = "WARNING: Only valid textures will app..." | s_WARNING_Only_valid_textu_0061d19a = WARNING: Only valid textures will appear in the crammed .RAW file.
    PUSH EAX                            ; 0046a203 | = "WARNING: Only valid textures will app..." | s_WARNING_Only_valid_textu_0061d19a = WARNING: Only valid textures will appear in the crammed .RAW file.
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046a204 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046a209
    PUSH 0x16                           ; 0046a20c
    PUSH 0x0                            ; 0046a20e
    MOV EAX,0x61d1dd                    ; 0046a210 | = "Hit a key..." | s_Hit_a_key_0061d1dd = Hit a key...
    PUSH EAX                            ; 0046a215 | = "Hit a key..." | s_Hit_a_key_0061d1dd = Hit a key...
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046a216 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046a21b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046a21e | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046a223 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 0046a228
        ;   Label: LAB_0046a228
    CALL shape_design.c_initializeTextureManager_FUN_0046a880 ; 0046a22a | void shape_design.c_initializeTextureManager_FUN_0046a880(int initialization_mode)
        ;   XREF to: 0046a880 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046a22f
    CALL shape_design.c_normalizeUVCoordinates_FUN_0046e340 ; 0046a232 | void shape_design.c_normalizeUVCoordinates_FUN_0046e340()
        ;   XREF to: 0046e340 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x4],0x0      ; 0046a237
    JMP 0x0046a246                      ; 0046a23e | LAB_0046a246
        ;   XREF to: 0046a246 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a240
        ;   Label: LAB_0046a240
    INC dword ptr [EBP + -0x4]          ; 0046a243
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a246
        ;   Label: LAB_0046a246
    CMP EAX,dword ptr [0x016e990c]      ; 0046a249 | int g_PolygonCount
    JGE 0x0046a465                      ; 0046a24f | LAB_0046a465
        ;   XREF to: 0046a465 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0xfffffe60],0x0 ; 0046a255
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a25f
    CMP byte ptr [EAX + 0x16e9914],0x0  ; 0046a266 | DAT_016e9914
    JZ 0x0046a460                       ; 0046a26d | LAB_0046a460
        ;   XREF to: 0046a460 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a273
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046a27a | DAT_016e9a08
    MOV dword ptr [EBP + 0xfffffe5c],EAX ; 0046a280
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a286
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046a28d | DAT_016e9a48
    MOV dword ptr [EBP + 0xfffffe58],EAX ; 0046a293
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a299
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046a2a0 | DAT_016e9a08
    MOV dword ptr [EBP + 0xfffffe54],EAX ; 0046a2a6
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a2ac
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046a2b3 | DAT_016e9a48
    MOV dword ptr [EBP + 0xfffffe50],EAX ; 0046a2b9
    MOV dword ptr [EBP + -0xc],0x1      ; 0046a2bf
    JMP 0x0046a2cb                      ; 0046a2c6 | LAB_0046a2cb
        ;   XREF to: 0046a2cb (UNCONDITIONAL_JUMP)
    INC dword ptr [EBP + -0xc]          ; 0046a2c8
        ;   Label: LAB_0046a2c8
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a2cb
        ;   Label: LAB_0046a2cb
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a2d2
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046a2d5 | DAT_016e99b4
    JGE 0x0046a3d2                      ; 0046a2db | LAB_0046a3d2
        ;   XREF to: 0046a3d2 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a2e1
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a2e8
    SHL EAX,0x2                         ; 0046a2eb
    ADD EAX,EDX                         ; 0046a2ee
    FLD float ptr [EAX + 0x16e9a08]     ; 0046a2f0 | DAT_016e9a0c
    FCOMP float ptr [EBP + 0xfffffe5c]  ; 0046a2f6
    FNSTSW AX                           ; 0046a2fc
    SAHF                                ; 0046a2fe
    JNC 0x0046a31c                      ; 0046a2ff | LAB_0046a31c
        ;   XREF to: 0046a31c (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a301
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a308
    SHL EAX,0x2                         ; 0046a30b
    ADD EAX,EDX                         ; 0046a30e
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046a310 | DAT_016e9a0c
    MOV dword ptr [EBP + 0xfffffe5c],EAX ; 0046a316
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a31c
        ;   Label: LAB_0046a31c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a323
    SHL EAX,0x2                         ; 0046a326
    ADD EAX,EDX                         ; 0046a329
    FLD float ptr [EAX + 0x16e9a48]     ; 0046a32b | DAT_016e9a4c
    FCOMP float ptr [EBP + 0xfffffe58]  ; 0046a331
    FNSTSW AX                           ; 0046a337
    SAHF                                ; 0046a339
    JNC 0x0046a357                      ; 0046a33a | LAB_0046a357
        ;   XREF to: 0046a357 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a33c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a343
    SHL EAX,0x2                         ; 0046a346
    ADD EAX,EDX                         ; 0046a349
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046a34b | DAT_016e9a4c
    MOV dword ptr [EBP + 0xfffffe58],EAX ; 0046a351
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a357
        ;   Label: LAB_0046a357
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a35e
    SHL EAX,0x2                         ; 0046a361
    ADD EAX,EDX                         ; 0046a364
    FLD float ptr [EAX + 0x16e9a08]     ; 0046a366 | DAT_016e9a0c
    FCOMP float ptr [EBP + 0xfffffe54]  ; 0046a36c
    FNSTSW AX                           ; 0046a372
    SAHF                                ; 0046a374
    JBE 0x0046a392                      ; 0046a375 | LAB_0046a392
        ;   XREF to: 0046a392 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a377
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a37e
    SHL EAX,0x2                         ; 0046a381
    ADD EAX,EDX                         ; 0046a384
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046a386 | DAT_016e9a0c
    MOV dword ptr [EBP + 0xfffffe54],EAX ; 0046a38c
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a392
        ;   Label: LAB_0046a392
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a399
    SHL EAX,0x2                         ; 0046a39c
    ADD EAX,EDX                         ; 0046a39f
    FLD float ptr [EAX + 0x16e9a48]     ; 0046a3a1 | DAT_016e9a4c
    FCOMP float ptr [EBP + 0xfffffe50]  ; 0046a3a7
    FNSTSW AX                           ; 0046a3ad
    SAHF                                ; 0046a3af
    JBE 0x0046a3cd                      ; 0046a3b0 | LAB_0046a3cd
        ;   XREF to: 0046a3cd (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a3b2
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a3b9
    SHL EAX,0x2                         ; 0046a3bc
    ADD EAX,EDX                         ; 0046a3bf
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046a3c1 | DAT_016e9a4c
    MOV dword ptr [EBP + 0xfffffe50],EAX ; 0046a3c7
    JMP 0x0046a2c8                      ; 0046a3cd | LAB_0046a2c8
        ;   Label: LAB_0046a3cd
        ;   XREF to: 0046a2c8 (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + 0xfffffe50]    ; 0046a3d2
        ;   Label: LAB_0046a3d2
    FMUL float ptr [0x0061d1ea]         ; 0046a3d8 | float g_TextureResolutionMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046a3de | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xfffffe4c]  ; 0046a3e3
    PUSH dword ptr [EBP + 0xfffffe4c]   ; 0046a3e9
    FLD float ptr [EBP + 0xfffffe54]    ; 0046a3ef
    FMUL float ptr [0x0061d1ea]         ; 0046a3f5 | float g_TextureResolutionMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046a3fb | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xfffffe4c]  ; 0046a400
    PUSH dword ptr [EBP + 0xfffffe4c]   ; 0046a406
    FLD float ptr [EBP + 0xfffffe58]    ; 0046a40c
    FMUL float ptr [0x0061d1ea]         ; 0046a412 | float g_TextureResolutionMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046a418 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xfffffe4c]  ; 0046a41d
    PUSH dword ptr [EBP + 0xfffffe4c]   ; 0046a423
    FLD float ptr [EBP + 0xfffffe5c]    ; 0046a429
    FMUL float ptr [0x0061d1ea]         ; 0046a42f | float g_TextureResolutionMultiplier
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046a435 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xfffffe4c]  ; 0046a43a
    PUSH dword ptr [EBP + 0xfffffe4c]   ; 0046a440
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a446
    MOV EDX,0x16e9910                   ; 0046a44d | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a452
    ADD EAX,0x4                         ; 0046a454
    PUSH EAX                            ; 0046a457
    CALL shape_design.c_cramTextures_FUN_0046a970 ; 0046a458 | void shape_design.c_cramTextures_FUN_0046a970(char * texture_filename, int min_u, int min_v, int max_u, ...)
        ;   XREF to: 0046a970 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0046a45d
    JMP 0x0046a240                      ; 0046a460 | LAB_0046a240
        ;   Label: LAB_0046a460
        ;   XREF to: 0046a240 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x01e8d260],0x0      ; 0046a465 | int g_TextureProcessedCount
        ;   Label: LAB_0046a465
    JNZ 0x0046a494                      ; 0046a46c | LAB_0046a494
        ;   XREF to: 0046a494 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046a46e | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 0046a473
    PUSH 0x0                            ; 0046a475
    MOV EAX,0x61d1ee                    ; 0046a477 | = "ERROR: No valid textures found.  Hit ..." | s_ERROR_No_valid_textures__0061d1ee = ERROR: No valid textures found.  Hit a key...
    PUSH EAX                            ; 0046a47c | = "ERROR: No valid textures found.  Hit ..." | s_ERROR_No_valid_textures__0061d1ee = ERROR: No valid textures found.  Hit a key...
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046a47d | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046a482
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046a485 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046a48a | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    JMP 0x0046a84a                      ; 0046a48f | LAB_0046a84a
        ;   XREF to: 0046a84a (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046a494
        ;   Label: LAB_0046a494
    PUSH EAX                            ; 0046a497
    CALL shape_design.c_cramTextureList_FUN_0046bb80 ; 0046a498 | int shape_design.c_cramTextureList_FUN_0046bb80(SCramConfig * cram_config)
        ;   XREF to: 0046bb80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046a49d
    TEST EAX,EAX                        ; 0046a4a0
    JNZ 0x0046a4a9                      ; 0046a4a2 | LAB_0046a4a9
        ;   XREF to: 0046a4a9 (CONDITIONAL_JUMP)
    JMP 0x0046a84a                      ; 0046a4a4 | LAB_0046a84a
        ;   XREF to: 0046a84a (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x14],0x0      ; 0046a4a9
        ;   Label: LAB_0046a4a9
    JNZ 0x0046a4cb                      ; 0046a4ad | LAB_0046a4cb
        ;   XREF to: 0046a4cb (CONDITIONAL_JUMP)
    PUSH 0x6e                           ; 0046a4af
    PUSH 0x0                            ; 0046a4b1
    MOV EAX,0x61d21c                    ; 0046a4b3 | = "Hit a key..." | s_Hit_a_key_0061d21c = Hit a key...
    PUSH EAX                            ; 0046a4b8 | = "Hit a key..." | s_Hit_a_key_0061d21c = Hit a key...
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046a4b9 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046a4be
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046a4c1 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046a4c6 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x4],0x0      ; 0046a4cb
        ;   Label: LAB_0046a4cb
    JMP 0x0046a4da                      ; 0046a4d2 | LAB_0046a4da
        ;   XREF to: 0046a4da (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a4d4
        ;   Label: LAB_0046a4d4
    INC dword ptr [EBP + -0x4]          ; 0046a4d7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046a4da
        ;   Label: LAB_0046a4da
    CMP EAX,dword ptr [0x016e990c]      ; 0046a4dd | int g_PolygonCount
    JGE 0x0046a607                      ; 0046a4e3 | LAB_0046a607
        ;   XREF to: 0046a607 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a4e9
    MOV EAX,0x16e9910                   ; 0046a4f0 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a4f5
    ADD EAX,0x4                         ; 0046a4f7
    PUSH EAX                            ; 0046a4fa
    CALL shape_design.c_findTextureByFilename_FUN_0046dfc0 ; 0046a4fb | int shape_design.c_findTextureByFilename_FUN_0046dfc0(char * filename)
        ;   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046a500
    MOV dword ptr [EBP + 0xfffffe48],EAX ; 0046a503
    CMP dword ptr [EBP + 0xfffffe48],0x0 ; 0046a509
    JGE 0x0046a517                      ; 0046a510 | LAB_0046a517
        ;   XREF to: 0046a517 (CONDITIONAL_JUMP)
    JMP 0x0046a602                      ; 0046a512 | LAB_0046a602
        ;   XREF to: 0046a602 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 0046a517
        ;   Label: LAB_0046a517
    JMP 0x0046a526                      ; 0046a51e | LAB_0046a526
        ;   XREF to: 0046a526 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a520
        ;   Label: LAB_0046a520
    INC dword ptr [EBP + -0xc]          ; 0046a523
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0046a526
        ;   Label: LAB_0046a526
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046a52d
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046a530 | DAT_016e99b4
    JGE 0x0046a581                      ; 0046a536 | LAB_0046a581
        ;   XREF to: 0046a581 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a538
    MOV EDX,0x16e9910                   ; 0046a53f | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a544
    MOV EDX,dword ptr [EBP + -0xc]      ; 0046a546
    SHL EDX,0x2                         ; 0046a549
    ADD EAX,0x138                       ; 0046a54c
    ADD EAX,EDX                         ; 0046a551
    PUSH EAX                            ; 0046a553
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046a554
    MOV EDX,0x16e9910                   ; 0046a55b | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0046a560
    MOV EDX,dword ptr [EBP + -0xc]      ; 0046a562
    SHL EDX,0x2                         ; 0046a565
    ADD EAX,0xf8                        ; 0046a568
    ADD EAX,EDX                         ; 0046a56d
    PUSH EAX                            ; 0046a56f
    MOV EAX,dword ptr [EBP + 0xfffffe48] ; 0046a570
    PUSH EAX                            ; 0046a576
    CALL shape_design.c_fixupCramUV_FUN_0046e090 ; 0046a577 | void shape_design.c_fixupCramUV_FUN_0046e090(int atlas_texture_index, float * u_coord, float * v_coord)
        ;   XREF to: 0046e090 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046a57c
    JMP 0x0046a520                      ; 0046a57f | LAB_0046a520
        ;   XREF to: 0046a520 (UNCONDITIONAL_JUMP)
    IMUL ESI,dword ptr [EBP + -0x4],0x184 ; 0046a581
        ;   Label: LAB_0046a581
    MOV EAX,0x16e9910                   ; 0046a588 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,ESI                         ; 0046a58d
    LEA ESI,[EAX + 0x4]                 ; 0046a58f
    IMUL EDI,dword ptr [EBP + -0x4],0x184 ; 0046a592
    MOV EAX,0x16e9910                   ; 0046a599 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDI                         ; 0046a59e
    LEA EDI,[EAX + 0x54]                ; 0046a5a0
    PUSH EDI                            ; 0046a5a3
    MOV AL,byte ptr [ESI]               ; 0046a5a4 | DAT_016e9914
        ;   Label: LAB_0046a5a4
    MOV byte ptr [EDI],AL               ; 0046a5a6 | DAT_016e9964
    CMP AL,0x0                          ; 0046a5a8
    JZ 0x0046a5bc                       ; 0046a5aa | LAB_0046a5bc
        ;   XREF to: 0046a5bc (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a5ac | DAT_016e9915
    ADD ESI,0x2                         ; 0046a5af
    MOV byte ptr [EDI + 0x1],AL         ; 0046a5b2 | DAT_016e9965
    ADD EDI,0x2                         ; 0046a5b5
    CMP AL,0x0                          ; 0046a5b8
    JNZ 0x0046a5a4                      ; 0046a5ba | LAB_0046a5a4
        ;   XREF to: 0046a5a4 (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a5bc
        ;   Label: LAB_0046a5bc
    MOV EAX,dword ptr [EBP + 0xfffffe48] ; 0046a5bd
    PUSH EAX                            ; 0046a5c3
    CALL shape_design.c_getAtlasMapIndex_FUN_0046e030 ; 0046a5c4 | int shape_design.c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)
        ;   XREF to: 0046e030 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046a5c9
    PUSH EAX                            ; 0046a5cc
    CALL shape_design.c_getTextureName_FUN_0046e060 ; 0046a5cd | char * shape_design.c_getTextureName_FUN_0046e060(int texture_index)
        ;   XREF to: 0046e060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046a5d2
    IMUL ESI,dword ptr [EBP + -0x4],0x184 ; 0046a5d5
    MOV EDI,0x16e9910                   ; 0046a5dc | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD ESI,EDI                         ; 0046a5e1
    LEA EDI,[ESI + 0x4]                 ; 0046a5e3
    MOV ESI,EAX                         ; 0046a5e6
    PUSH EDI                            ; 0046a5e8
    MOV AL,byte ptr [ESI]               ; 0046a5e9
        ;   Label: LAB_0046a5e9
    MOV byte ptr [EDI],AL               ; 0046a5eb | DAT_016e9914
    CMP AL,0x0                          ; 0046a5ed
    JZ 0x0046a601                       ; 0046a5ef | LAB_0046a601
        ;   XREF to: 0046a601 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a5f1
    ADD ESI,0x2                         ; 0046a5f4
    MOV byte ptr [EDI + 0x1],AL         ; 0046a5f7 | DAT_016e9915
    ADD EDI,0x2                         ; 0046a5fa
    CMP AL,0x0                          ; 0046a5fd
    JNZ 0x0046a5e9                      ; 0046a5ff | LAB_0046a5e9
        ;   XREF to: 0046a5e9 (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a601
        ;   Label: LAB_0046a601
    JMP 0x0046a4d4                      ; 0046a602 | LAB_0046a4d4
        ;   Label: LAB_0046a602
        ;   XREF to: 0046a4d4 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x14],0x0      ; 0046a607
        ;   Label: LAB_0046a607
    JZ 0x0046a660                       ; 0046a60b | LAB_0046a660
        ;   XREF to: 0046a660 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x14]      ; 0046a60d
    MOV EDI,0x66eda8                    ; 0046a610 | char[80] g_LoadedModelName
    PUSH EDI                            ; 0046a615 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a616
        ;   Label: LAB_0046a616
    MOV byte ptr [EDI],AL               ; 0046a618 | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 0046a61a
    JZ 0x0046a62e                       ; 0046a61c | LAB_0046a62e
        ;   XREF to: 0046a62e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a61e
    ADD ESI,0x2                         ; 0046a621
    MOV byte ptr [EDI + 0x1],AL         ; 0046a624 | s__0066eda9
    ADD EDI,0x2                         ; 0046a627
    CMP AL,0x0                          ; 0046a62a
    JNZ 0x0046a616                      ; 0046a62c | LAB_0046a616
        ;   XREF to: 0046a616 (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a62e
        ;   Label: LAB_0046a62e
    MOV ESI,0x61d229                    ; 0046a62f | = ".MDL" | s_MDL_0061d229 = .MDL
    MOV EDI,0x66eda8                    ; 0046a634 | char[80] g_LoadedModelName
    PUSH EDI                            ; 0046a639 | char[80] g_LoadedModelName
    SUB ECX,ECX                         ; 0046a63a
    DEC ECX                             ; 0046a63c
    MOV AL,0x0                          ; 0046a63d
    SCASB.REPNE ES:EDI                  ; 0046a63f | char[80] g_LoadedModelName
    DEC EDI                             ; 0046a641
    MOV AL,byte ptr [ESI]               ; 0046a642 | = ".MDL" | s_MDL_0061d229 = .MDL
        ;   Label: LAB_0046a642
    MOV byte ptr [EDI],AL               ; 0046a644 | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 0046a646
    JZ 0x0046a65a                       ; 0046a648 | LAB_0046a65a
        ;   XREF to: 0046a65a (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a64a | DAT_0061d22a
    ADD ESI,0x2                         ; 0046a64d
    MOV byte ptr [EDI + 0x1],AL         ; 0046a650 | s__0066eda9
    ADD EDI,0x2                         ; 0046a653
    CMP AL,0x0                          ; 0046a656
    JNZ 0x0046a642                      ; 0046a658 | LAB_0046a642
        ;   XREF to: 0046a642 (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a65a
        ;   Label: LAB_0046a65a
    JMP 0x0046a845                      ; 0046a65b | LAB_0046a845
        ;   XREF to: 0046a845 (UNCONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046a660 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046a660
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV ESI,0x1eb1768                   ; 0046a665 | char[80] g_CurrentModelFilename
    LEA EDI,[EBP + 0xffffff2c]          ; 0046a66a
    PUSH EDI                            ; 0046a670
    MOV AL,byte ptr [ESI]               ; 0046a671 | char[80] g_CurrentModelFilename
        ;   Label: LAB_0046a671
    MOV byte ptr [EDI],AL               ; 0046a673
    CMP AL,0x0                          ; 0046a675
    JZ 0x0046a689                       ; 0046a677 | LAB_0046a689
        ;   XREF to: 0046a689 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a679 | DAT_01eb1769
    ADD ESI,0x2                         ; 0046a67c
    MOV byte ptr [EDI + 0x1],AL         ; 0046a67f
    ADD EDI,0x2                         ; 0046a682
    CMP AL,0x0                          ; 0046a685
    JNZ 0x0046a671                      ; 0046a687 | LAB_0046a671
        ;   XREF to: 0046a671 (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a689
        ;   Label: LAB_0046a689
    MOV EDX,0x2e                        ; 0046a68a
    LEA ESI,[EBP + 0xffffff2c]          ; 0046a68f
    MOV AL,byte ptr [ESI]               ; 0046a695
        ;   Label: LAB_0046a695
    CMP AL,DL                           ; 0046a697
    JZ 0x0046a6ad                       ; 0046a699 | LAB_0046a6ad
        ;   XREF to: 0046a6ad (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 0046a69b
    JZ 0x0046a6ab                       ; 0046a69d | LAB_0046a6ab
        ;   XREF to: 0046a6ab (CONDITIONAL_JUMP)
    INC ESI                             ; 0046a69f
    MOV AL,byte ptr [ESI]               ; 0046a6a0
    CMP AL,DL                           ; 0046a6a2
    JZ 0x0046a6ad                       ; 0046a6a4 | LAB_0046a6ad
        ;   XREF to: 0046a6ad (CONDITIONAL_JUMP)
    INC ESI                             ; 0046a6a6
    CMP AL,0x0                          ; 0046a6a7
    JNZ 0x0046a695                      ; 0046a6a9 | LAB_0046a695
        ;   XREF to: 0046a695 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 0046a6ab
        ;   Label: LAB_0046a6ab
    MOV dword ptr [EBP + 0xfffffe44],ESI ; 0046a6ad
        ;   Label: LAB_0046a6ad
    CMP dword ptr [EBP + 0xfffffe44],0x0 ; 0046a6b3
    JZ 0x0046a6c5                       ; 0046a6ba | LAB_0046a6c5
        ;   XREF to: 0046a6c5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xfffffe44] ; 0046a6bc
    MOV byte ptr [EAX],0x0              ; 0046a6c2
    LEA EAX,[EBP + 0xffffff2c]          ; 0046a6c5
        ;   Label: LAB_0046a6c5
    PUSH EAX                            ; 0046a6cb
    MOV EAX,0x61d22e                    ; 0046a6cc | = "Model name to save [%s] : " | s_Model_name_to_save_s_0061d22e = Model name to save [%s] :
    PUSH EAX                            ; 0046a6d1 | = "Model name to save [%s] : " | s_Model_name_to_save_s_0061d22e = Model name to save [%s] :
    LEA EAX,[EBP + 0xfffffe64]          ; 0046a6d2
    PUSH EAX                            ; 0046a6d8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0046a6d9 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046a6de
    LEA EAX,[EBP + 0xfffffe64]          ; 0046a6e1
    PUSH EAX                            ; 0046a6e7
    PUSH 0x0                            ; 0046a6e8
    PUSH 0x0                            ; 0046a6ea
    PUSH 0x27                           ; 0046a6ec
    MOV EAX,0x66eda8                    ; 0046a6ee | char[80] g_LoadedModelName
    PUSH EAX                            ; 0046a6f3 | char[80] g_LoadedModelName
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046a6f4 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0046a6f9
    CMP EAX,0x1b                        ; 0046a6fc
    JZ 0x0046a7b8                       ; 0046a6ff | LAB_0046a7b8
        ;   XREF to: 0046a7b8 (CONDITIONAL_JUMP)
    MOV EDI,0x66eda8                    ; 0046a705 | char[80] g_LoadedModelName
    SUB ECX,ECX                         ; 0046a70a
    DEC ECX                             ; 0046a70c
    XOR EAX,EAX                         ; 0046a70d
    SCASB.REPNE ES:EDI                  ; 0046a70f | char[80] g_LoadedModelName
    NOT ECX                             ; 0046a711
    DEC ECX                             ; 0046a713
    TEST ECX,ECX                        ; 0046a714
    JNZ 0x0046a73d                      ; 0046a716 | LAB_0046a73d
        ;   XREF to: 0046a73d (CONDITIONAL_JUMP)
    LEA ESI,[EBP + 0xffffff2c]          ; 0046a718
    MOV EDI,0x66eda8                    ; 0046a71e | char[80] g_LoadedModelName
    PUSH EDI                            ; 0046a723 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a724
        ;   Label: LAB_0046a724
    MOV byte ptr [EDI],AL               ; 0046a726 | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 0046a728
    JZ 0x0046a73c                       ; 0046a72a | LAB_0046a73c
        ;   XREF to: 0046a73c (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a72c
    ADD ESI,0x2                         ; 0046a72f
    MOV byte ptr [EDI + 0x1],AL         ; 0046a732 | s__0066eda9
    ADD EDI,0x2                         ; 0046a735
    CMP AL,0x0                          ; 0046a738
    JNZ 0x0046a724                      ; 0046a73a | LAB_0046a724
        ;   XREF to: 0046a724 (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a73c
        ;   Label: LAB_0046a73c
    MOV EDX,0x2e                        ; 0046a73d
        ;   Label: LAB_0046a73d
    MOV ESI,0x66eda8                    ; 0046a742 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a747 | char[80] g_LoadedModelName
        ;   Label: LAB_0046a747
    CMP AL,DL                           ; 0046a749
    JZ 0x0046a75f                       ; 0046a74b | LAB_0046a75f
        ;   XREF to: 0046a75f (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 0046a74d
    JZ 0x0046a75d                       ; 0046a74f | LAB_0046a75d
        ;   XREF to: 0046a75d (CONDITIONAL_JUMP)
    INC ESI                             ; 0046a751
    MOV AL,byte ptr [ESI]               ; 0046a752 | s__0066eda9
    CMP AL,DL                           ; 0046a754
    JZ 0x0046a75f                       ; 0046a756 | LAB_0046a75f
        ;   XREF to: 0046a75f (CONDITIONAL_JUMP)
    INC ESI                             ; 0046a758
    CMP AL,0x0                          ; 0046a759
    JNZ 0x0046a747                      ; 0046a75b | LAB_0046a747
        ;   XREF to: 0046a747 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 0046a75d
        ;   Label: LAB_0046a75d
    TEST ESI,ESI                        ; 0046a75f
        ;   Label: LAB_0046a75f
    JNZ 0x0046a777                      ; 0046a761 | LAB_0046a777
        ;   XREF to: 0046a777 (CONDITIONAL_JUMP)
    MOV EDI,0x66eda8                    ; 0046a763 | char[80] g_LoadedModelName
    SUB ECX,ECX                         ; 0046a768
    DEC ECX                             ; 0046a76a
    XOR EAX,EAX                         ; 0046a76b
    SCASB.REPNE ES:EDI                  ; 0046a76d | char[80] g_LoadedModelName
    NOT ECX                             ; 0046a76f
    DEC ECX                             ; 0046a771
    CMP ECX,0x8                         ; 0046a772
    JBE 0x0046a779                      ; 0046a775 | LAB_0046a779
        ;   XREF to: 0046a779 (CONDITIONAL_JUMP)
    JMP 0x0046a7a5                      ; 0046a777 | LAB_0046a7a5
        ;   Label: LAB_0046a777
        ;   XREF to: 0046a7a5 (UNCONDITIONAL_JUMP)
    MOV ESI,0x61d249                    ; 0046a779 | = ".MDL" | s_MDL_0061d249 = .MDL
        ;   Label: LAB_0046a779
    MOV EDI,0x66eda8                    ; 0046a77e | char[80] g_LoadedModelName
    PUSH EDI                            ; 0046a783 | char[80] g_LoadedModelName
    SUB ECX,ECX                         ; 0046a784
    DEC ECX                             ; 0046a786
    MOV AL,0x0                          ; 0046a787
    SCASB.REPNE ES:EDI                  ; 0046a789 | char[80] g_LoadedModelName
    DEC EDI                             ; 0046a78b
    MOV AL,byte ptr [ESI]               ; 0046a78c | = ".MDL" | s_MDL_0061d249 = .MDL
        ;   Label: LAB_0046a78c
    MOV byte ptr [EDI],AL               ; 0046a78e | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 0046a790
    JZ 0x0046a7a4                       ; 0046a792 | LAB_0046a7a4
        ;   XREF to: 0046a7a4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a794 | DAT_0061d24a
    ADD ESI,0x2                         ; 0046a797
    MOV byte ptr [EDI + 0x1],AL         ; 0046a79a | s__0066eda9
    ADD EDI,0x2                         ; 0046a79d
    CMP AL,0x0                          ; 0046a7a0
    JNZ 0x0046a78c                      ; 0046a7a2 | LAB_0046a78c
        ;   XREF to: 0046a78c (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a7a4
        ;   Label: LAB_0046a7a4
    MOV EAX,0x66eda8                    ; 0046a7a5 | char[80] g_LoadedModelName
        ;   Label: LAB_0046a7a5
    PUSH EAX                            ; 0046a7aa | char[80] g_LoadedModelName
    CALL shape_design.c_exportModelToMDL_FUN_00459e80 ; 0046a7ab | void shape_design.c_exportModelToMDL_FUN_00459e80(char * mdl_filename)
        ;   XREF to: 00459e80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046a7b0
    JMP 0x0046a845                      ; 0046a7b3 | LAB_0046a845
        ;   XREF to: 0046a845 (UNCONDITIONAL_JUMP)
    LEA ESI,[EBP + 0xffffff2c]          ; 0046a7b8
        ;   Label: LAB_0046a7b8
    MOV EDI,0x66eda8                    ; 0046a7be | char[80] g_LoadedModelName
    PUSH EDI                            ; 0046a7c3 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a7c4
        ;   Label: LAB_0046a7c4
    MOV byte ptr [EDI],AL               ; 0046a7c6 | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 0046a7c8
    JZ 0x0046a7dc                       ; 0046a7ca | LAB_0046a7dc
        ;   XREF to: 0046a7dc (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a7cc
    ADD ESI,0x2                         ; 0046a7cf
    MOV byte ptr [EDI + 0x1],AL         ; 0046a7d2 | s__0066eda9
    ADD EDI,0x2                         ; 0046a7d5
    CMP AL,0x0                          ; 0046a7d8
    JNZ 0x0046a7c4                      ; 0046a7da | LAB_0046a7c4
        ;   XREF to: 0046a7c4 (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a7dc
        ;   Label: LAB_0046a7dc
    MOV EDX,0x2e                        ; 0046a7dd
    MOV ESI,0x66eda8                    ; 0046a7e2 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0046a7e7 | char[80] g_LoadedModelName
        ;   Label: LAB_0046a7e7
    CMP AL,DL                           ; 0046a7e9
    JZ 0x0046a7ff                       ; 0046a7eb | LAB_0046a7ff
        ;   XREF to: 0046a7ff (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 0046a7ed
    JZ 0x0046a7fd                       ; 0046a7ef | LAB_0046a7fd
        ;   XREF to: 0046a7fd (CONDITIONAL_JUMP)
    INC ESI                             ; 0046a7f1
    MOV AL,byte ptr [ESI]               ; 0046a7f2 | s__0066eda9
    CMP AL,DL                           ; 0046a7f4
    JZ 0x0046a7ff                       ; 0046a7f6 | LAB_0046a7ff
        ;   XREF to: 0046a7ff (CONDITIONAL_JUMP)
    INC ESI                             ; 0046a7f8
    CMP AL,0x0                          ; 0046a7f9
    JNZ 0x0046a7e7                      ; 0046a7fb | LAB_0046a7e7
        ;   XREF to: 0046a7e7 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 0046a7fd
        ;   Label: LAB_0046a7fd
    TEST ESI,ESI                        ; 0046a7ff
        ;   Label: LAB_0046a7ff
    JNZ 0x0046a817                      ; 0046a801 | LAB_0046a817
        ;   XREF to: 0046a817 (CONDITIONAL_JUMP)
    MOV EDI,0x66eda8                    ; 0046a803 | char[80] g_LoadedModelName
    SUB ECX,ECX                         ; 0046a808
    DEC ECX                             ; 0046a80a
    XOR EAX,EAX                         ; 0046a80b
    SCASB.REPNE ES:EDI                  ; 0046a80d | char[80] g_LoadedModelName
    NOT ECX                             ; 0046a80f
    DEC ECX                             ; 0046a811
    CMP ECX,0x8                         ; 0046a812
    JBE 0x0046a819                      ; 0046a815 | LAB_0046a819
        ;   XREF to: 0046a819 (CONDITIONAL_JUMP)
    JMP 0x0046a845                      ; 0046a817 | LAB_0046a845
        ;   Label: LAB_0046a817
        ;   XREF to: 0046a845 (UNCONDITIONAL_JUMP)
    MOV ESI,0x61d24e                    ; 0046a819 | = ".MDL" | s_MDL_0061d24e = .MDL
        ;   Label: LAB_0046a819
    MOV EDI,0x66eda8                    ; 0046a81e | char[80] g_LoadedModelName
    PUSH EDI                            ; 0046a823 | char[80] g_LoadedModelName
    SUB ECX,ECX                         ; 0046a824
    DEC ECX                             ; 0046a826
    MOV AL,0x0                          ; 0046a827
    SCASB.REPNE ES:EDI                  ; 0046a829 | char[80] g_LoadedModelName
    DEC EDI                             ; 0046a82b
    MOV AL,byte ptr [ESI]               ; 0046a82c | = ".MDL" | s_MDL_0061d24e = .MDL
        ;   Label: LAB_0046a82c
    MOV byte ptr [EDI],AL               ; 0046a82e | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 0046a830
    JZ 0x0046a844                       ; 0046a832 | LAB_0046a844
        ;   XREF to: 0046a844 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0046a834 | DAT_0061d24f
    ADD ESI,0x2                         ; 0046a837
    MOV byte ptr [EDI + 0x1],AL         ; 0046a83a | s__0066eda9
    ADD EDI,0x2                         ; 0046a83d
    CMP AL,0x0                          ; 0046a840
    JNZ 0x0046a82c                      ; 0046a842 | LAB_0046a82c
        ;   XREF to: 0046a82c (CONDITIONAL_JUMP)
    POP EDI                             ; 0046a844
        ;   Label: LAB_0046a844
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 0046a845 | void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
        ;   Label: LAB_0046a845
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0046a84a
        ;   Label: LAB_0046a84a
    POP EBP                             ; 0046a84c
    POP EDI                             ; 0046a84d
    POP ESI                             ; 0046a84e
    POP EBX                             ; 0046a84f
    RET                                 ; 0046a850

