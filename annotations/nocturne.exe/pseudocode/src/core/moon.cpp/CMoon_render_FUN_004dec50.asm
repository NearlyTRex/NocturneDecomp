; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_render_FUN_004dec50(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_004d23d0 at 004d24d2
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20 at 004d0d8f
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d018e
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1354
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d2230
;
; Referenced Globals:
;   double DOUBLE_0058a936 = -0.5
;   double DOUBLE_0058a93e = 48
;   double DOUBLE_0058a946 = 8192
;   float FLOAT_0058a94e = 16384
;   float FLOAT_0058a952 = 8192
;   float FLOAT_0058a956 = 1.570796
;   double DOUBLE_0058a95e = 0.5
;   undefined4 DAT_005ae704
;   undefined4 DAT_005bb210
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01c00024
;   undefined4 DAT_01ccdc50
;   undefined4 DAT_01ccdebc
;   ... and 9 more
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_0043b800
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
;   crt_math.c_round_FUN_00563a30
;   engine_3d.c_setBlendMode_FUN_004083c0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
;   sound_sndmain.cpp_processAudio_FUN_005288f0
;   wincore_windll.cpp_clearScreen_FUN_0052ee70
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dec50
        ;   Label: core_moon.cpp_CMoon_render_FUN_004dec50
    PUSH ESI                            ; 004dec51
    PUSH EDI                            ; 004dec52
    PUSH EBP                            ; 004dec53
    MOV EBP,ESP                         ; 004dec54
    SUB ESP,0x4c                        ; 004dec56
    MOV ESI,dword ptr [EBP + 0x14]      ; 004dec59
    CALL sound_sndmain.cpp_processAudio_FUN_005288f0 ; 004dec5c
        ;   XREF to: 005288f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_processAudio_FUN_005288f0()
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 004dec61
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
    CALL wincore_windll.cpp_clearZBufferNative_FUN_0052eed4 ; 004dec66
        ;   XREF to: 0052eed4 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearZBufferNative_FUN_0052eed4()
    PUSH 0x2dd1184                      ; 004dec6b | DAT_02dd1184
    MOV EDX,dword ptr [0x005ae704]      ; 004dec70 | DAT_005ae704
    PUSH EDX                            ; 004dec76 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 004dec77
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700()
    ADD ESP,0x8                         ; 004dec7c
    MOV ECX,dword ptr [0x005ae704]      ; 004dec7f | DAT_005ae704
    PUSH 0x42e00000                     ; 004dec85
    PUSH ECX                            ; 004dec8a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 004dec8b
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00()
    ADD ESP,0x8                         ; 004dec90
    PUSH 0x2dd1184                      ; 004dec93 | DAT_02dd1184
    MOV EBX,dword ptr [0x005ae704]      ; 004dec98 | DAT_005ae704
    PUSH EBX                            ; 004dec9e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 004dec9f
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780()
    FLD double ptr [0x0058a936]         ; 004deca4 | DOUBLE_0058a936
    FLD float ptr [ESI + 0x4]           ; 004decaa
    FADD ST0,ST1                        ; 004decad
    FLD double ptr [0x0058a93e]         ; 004decaf | DOUBLE_0058a93e
    FXCH                                ; 004decb5
    FMUL ST1                            ; 004decb7
    LEA EAX,[EBP + -0x4c]               ; 004decb9
    FSTP float ptr [EBP + -0x4c]        ; 004decbc
    FLD float ptr [ESI + 0x4]           ; 004decbf
    FADDP ST2,ST0                       ; 004decc2
    ADD ESP,0x8                         ; 004decc4
    FMULP                               ; 004decc7
    PUSH EAX                            ; 004decc9
    MOV EAX,[0x005ae704]                ; 004decca | DAT_005ae704
    MOV EDI,0x42900000                  ; 004deccf
    PUSH EAX                            ; 004decd4 | DAT_01b4d738
    MOV dword ptr [EBP + -0x44],EDI     ; 004decd5
    FSTP float ptr [EBP + -0x48]        ; 004decd8
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004decdb
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    MOV EAX,[0x005be368]                ; 004dece0 | DAT_005be368
    ADD ESP,0x8                         ; 004dece5
    MOV dword ptr [EAX + 0x15aa88],0x1  ; 004dece8 | DAT_01fb1d0c
    PUSH 0x10000                        ; 004decf2
    MOV dword ptr [EAX + 0x15aa8c],0xffff6f78 ; 004decf7 | DAT_01fb1d10
    PUSH 0x10000                        ; 004ded01
    MOV dword ptr [EAX + 0x15aa90],0xffff6f78 ; 004ded06 | DAT_01fb1d14
    PUSH 0x10000                        ; 004ded10
    MOV dword ptr [EAX + 0x15aa94],0x9088 ; 004ded15 | DAT_01fb1d18
    PUSH EAX                            ; 004ded1f | DAT_01e57284
    MOV dword ptr [EAX + 0x15aa98],0x280 ; 004ded20 | DAT_01fb1d1c
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 004ded2a
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340()
    ADD ESP,0x10                        ; 004ded2f
    PUSH 0x205                          ; 004ded32
    PUSH 0x0                            ; 004ded37
    PUSH 0x0                            ; 004ded39
    LEA EAX,[ESI + 0x8]                 ; 004ded3b
    PUSH EAX                            ; 004ded3e
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 ; 004ded3f
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040()
    MOV EAX,[0x005be368]                ; 004ded44 | DAT_005be368
    MOV dword ptr [EAX + 0x15aa8c],0xffffb7bc ; 004ded49 | DAT_01fb1d10
    MOV dword ptr [EAX + 0x15aa90],0xffffb7bc ; 004ded53 | DAT_01fb1d14
    MOV EDX,dword ptr [0x005bb210]      ; 004ded5d | DAT_005bb210
    MOV dword ptr [EAX + 0x15aa94],0x4844 ; 004ded63 | DAT_01fb1d18
    ADD ESP,0x10                        ; 004ded6d
    MOV dword ptr [EAX + 0x15aa98],0x2000 ; 004ded70 | DAT_01fb1d1c
    TEST EDX,EDX                        ; 004ded7a
    JZ 0x004deeae                       ; 004ded7c
        ;   XREF to: 004deeae (CONDITIONAL_JUMP)  ; LAB_004deeae
    XOR EBX,EBX                         ; 004ded82
    MOV ESI,0x1ccdec8                   ; 004ded84
    FLD float ptr [EBX + 0x1ccdef0]     ; 004ded89
        ;   Label: LAB_004ded89
    FLDZ                                ; 004ded8f
    FCOMPP                              ; 004ded91
    FNSTSW AX                           ; 004ded93
    SAHF                                ; 004ded95
    JA 0x004dee9f                       ; 004ded96
        ;   XREF to: 004dee9f (CONDITIONAL_JUMP)  ; LAB_004dee9f
    LEA EAX,[EBP + -0x40]               ; 004ded9c
    PUSH EAX                            ; 004ded9f
    LEA EAX,[EBP + -0x34]               ; 004deda0
    MOV ECX,dword ptr [EBX + 0x1ccdeec] ; 004deda3
    PUSH EAX                            ; 004deda9
    IMUL EAX,ECX,0xc                    ; 004dedaa
    ADD EAX,ESI                         ; 004dedad
    PUSH dword ptr [EBX + 0x1ccdef0]    ; 004dedaf
    PUSH EAX                            ; 004dedb5
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 004dedb6
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_evaluate_FUN_0043b800()
    FLD float ptr [EBP + -0x34]         ; 004dedbb
    FLD float ptr [EBP + -0x30]         ; 004dedbe
    FLD float ptr [EBP + -0x2c]         ; 004dedc1
    MOV EAX,0x1ccdeec                   ; 004dedc4
    FLD float ptr [EBP + -0x3c]         ; 004dedc9
    FXCH ST3                            ; 004dedcc
    FADD float ptr [EBX + EAX*0x1 + 0xc] ; 004dedce
    MOV EDI,dword ptr [0x005ae704]      ; 004dedd2 | DAT_005ae704
    FSTP float ptr [EBP + -0x34]        ; 004dedd8
    FXCH                                ; 004deddb
    FADD float ptr [EBX + EAX*0x1 + 0x10] ; 004deddd
    ADD ESP,0x10                        ; 004dede1
    FSTP float ptr [EBP + -0x30]        ; 004dede4
    FADD float ptr [EBX + EAX*0x1 + 0x14] ; 004dede7
    LEA EAX,[EBP + -0x34]               ; 004dedeb
    FXCH                                ; 004dedee
    FADD float ptr [0x0058a956]         ; 004dedf0 | FLOAT_0058a956
    PUSH EAX                            ; 004dedf6
    FXCH                                ; 004dedf7
    FSTP float ptr [EBP + -0x2c]        ; 004dedf9
    PUSH EDI                            ; 004dedfc | DAT_01b4d738
    FSTP float ptr [EBP + -0x3c]        ; 004dedfd
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004dee00
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 004dee05
    PUSH 0x0                            ; 004dee08
    LEA EAX,[EBP + -0x40]               ; 004dee0a
    PUSH EAX                            ; 004dee0d
    MOV EAX,[0x005ae704]                ; 004dee0e | DAT_005ae704
    PUSH EAX                            ; 004dee13 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004dee14
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 004dee19
    FLD float ptr [EBX + 0x1ccdef4]     ; 004dee1c
    PUSH -0x1                           ; 004dee22
    CALL crt_math.c_round_FUN_00563a30  ; 004dee24
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH 0x0                            ; 004dee29
    FISTP dword ptr [EBP + -0x4]        ; 004dee2b
    MOV EDX,dword ptr [EBP + -0x4]      ; 004dee2e
    PUSH EDX                            ; 004dee31
    PUSH 0x1cce1bc                      ; 004dee32
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 ; 004dee37
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040()
    ADD ESP,0x10                        ; 004dee3c
    MOV ECX,dword ptr [0x005ae704]      ; 004dee3f | DAT_005ae704
    PUSH ECX                            ; 004dee45 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004dee46
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    IMUL EAX,dword ptr [EBX + 0x1ccdeec],0xc ; 004dee4b
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 004dee52
    MOV dword ptr [EBP + -0x4],EAX      ; 004dee55
    FILD dword ptr [EBP + -0x4]         ; 004dee58
    FDIVR float ptr [EBX + 0x1ccdef0]   ; 004dee5b
    ADD ESP,0x4                         ; 004dee61
    FST float ptr [EBP + -0x8]          ; 004dee64
    FST double ptr [EBP + -0x28]        ; 004dee67
    FCOMP double ptr [0x0058a95e]       ; 004dee6a | DOUBLE_0058a95e
    FNSTSW AX                           ; 004dee70
    SAHF                                ; 004dee72
    JNC 0x004df02c                      ; 004dee73
        ;   XREF to: 004df02c (CONDITIONAL_JUMP)  ; LAB_004df02c
    FLD float ptr [EBP + -0x8]          ; 004dee79
    FMUL float ptr [0x0058a94e]         ; 004dee7c | FLOAT_0058a94e
    FSUBR float ptr [0x0058a952]        ; 004dee82 | FLOAT_0058a952
    MOV EDX,dword ptr [0x005be368]      ; 004dee88 | DAT_005be368
        ;   Label: LAB_004dee88
    CALL crt_math.c_round_FUN_00563a30  ; 004dee8e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + -0x4]        ; 004dee93
    MOV EAX,dword ptr [EBP + -0x4]      ; 004dee96
    MOV dword ptr [EDX + 0x15aa98],EAX  ; 004dee99
    ADD EBX,0x18                        ; 004dee9f
        ;   Label: LAB_004dee9f
    CMP EBX,0x2d0                       ; 004deea2
    JNZ 0x004ded89                      ; 004deea8
        ;   XREF to: 004ded89 (CONDITIONAL_JUMP)  ; LAB_004ded89
    MOV EAX,[0x005be368]                ; 004deeae | DAT_005be368
        ;   Label: LAB_004deeae
    PUSH 0x1ccdc50                      ; 004deeb3 | DAT_01ccdc50
    MOV dword ptr [EAX + 0x15aa88],0x0  ; 004deeb8 | DAT_01fb1d0c
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0 ; 004deec2
        ;   XREF to: 0040eab0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0()
    MOV EAX,[0x01ccdebc]                ; 004deec7 | DAT_01ccdebc
    ADD ESP,0x4                         ; 004deecc
    SAR EAX,0x10                        ; 004deecf
    MOV dword ptr [EBP + -0x20],EAX     ; 004deed2
    MOV EAX,[0x01ccdec0]                ; 004deed5 | DAT_01ccdec0
    SAR EAX,0x10                        ; 004deeda
    MOV dword ptr [EBP + -0x14],EAX     ; 004deedd
    MOV EAX,[0x01ccdc50]                ; 004deee0 | DAT_01ccdc50
    MOV dword ptr [EBP + -0x1c],EAX     ; 004deee5
    XOR EAX,EAX                         ; 004deee8
    MOV dword ptr [EBP + -0x18],EAX     ; 004deeea
    CMP dword ptr [EBP + -0x18],0x1e0   ; 004deeed
    JGE 0x004defd0                      ; 004deef4
        ;   XREF to: 004defd0 (CONDITIONAL_JUMP)  ; LAB_004defd0
    MOV EAX,dword ptr [EBP + -0x18]     ; 004deefa
        ;   Label: LAB_004deefa
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 004deefd | DAT_01bd2fa0
    MOV dword ptr [EBP + -0x10],EAX     ; 004def04
    XOR ECX,ECX                         ; 004def07
    MOV EDI,dword ptr [EBP + 0xfffffff0] ; 004def09
    MOVQ MM0,qword ptr [EDI]            ; 004def0f
        ;   Label: LAB_004def0f
    MOV EAX,ECX                         ; 004def12
    MOV EBX,dword ptr [EBP + 0xffffffe8] ; 004def14
    SHR EAX,0x1                         ; 004def1a
    SHR EBX,0x1                         ; 004def1c
    ADD EAX,dword ptr [EBP + 0xffffffe0] ; 004def1e
    ADD EBX,dword ptr [EBP + 0xffffffec] ; 004def24
    AND EAX,0xff                        ; 004def2a
    AND EBX,0xff                        ; 004def2f
    SHL EAX,0x8                         ; 004def35
    ADD EAX,EBX                         ; 004def38
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 004def3a
    MOVZX EAX,byte ptr [EAX]            ; 004def40
    SHR EAX,0x2                         ; 004def43
    MOVD MM1,dword ptr [EAX*0x4 + 0x1c00024] ; 004def46 | DAT_01c00024
    MOVQ MM2,MM1                        ; 004def4e
    PSLLQ MM2,0x20                      ; 004def51
    POR MM1,MM2                         ; 004def55
    PADDUSB MM0,MM1                     ; 004def58
    MOV EAX,ECX                         ; 004def5b
    MOV EBX,dword ptr [EBP + 0xffffffe8] ; 004def5d
    SHR EAX,0x2                         ; 004def63
    SHR EBX,0x2                         ; 004def66
    ADD EAX,dword ptr [EBP + 0xffffffe0] ; 004def69
    ADD EBX,dword ptr [EBP + 0xffffffec] ; 004def6f
    AND EAX,0xff                        ; 004def75
    AND EBX,0xff                        ; 004def7a
    SHL EAX,0x8                         ; 004def80
    ADD EAX,EBX                         ; 004def83
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 004def85
    MOVZX EAX,byte ptr [EAX]            ; 004def8b
    SHR EAX,0x2                         ; 004def8e
    MOVD MM1,dword ptr [EAX*0x4 + 0x1c00024] ; 004def91 | DAT_01c00024
    MOVQ MM2,MM1                        ; 004def99
    PSLLQ MM2,0x20                      ; 004def9c
    POR MM1,MM2                         ; 004defa0
    PADDUSB MM0,MM1                     ; 004defa3
    MOVQ qword ptr [EDI],MM0            ; 004defa6
    ADD EDI,0x8                         ; 004defa9
    ADD ECX,0x2                         ; 004defac
    CMP ECX,0x280                       ; 004defaf
    JC 0x004def0f                       ; 004defb5
        ;   XREF to: 004def0f (CONDITIONAL_JUMP)  ; LAB_004def0f
    EMMS                                ; 004defbb
    MOV EAX,dword ptr [EBP + -0x18]     ; 004defbd
    INC dword ptr [EBP + -0x18]         ; 004defc0
    CMP dword ptr [EBP + -0x18],0x1e0   ; 004defc3
    JL 0x004deefa                       ; 004defca
        ;   XREF to: 004deefa (CONDITIONAL_JUMP)  ; LAB_004deefa
    PUSH 0x1                            ; 004defd0
        ;   Label: LAB_004defd0
    CALL engine_3d.c_setBlendMode_FUN_004083c0 ; 004defd2
        ;   XREF to: 004083c0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setBlendMode_FUN_004083c0()
    FLD float ptr [0x01ccdec4]          ; 004defd7 | DAT_01ccdec4
    CALL crt_math.c_round_FUN_00563a30  ; 004defdd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + -0xc]        ; 004defe2
    MOV ESI,dword ptr [EBP + -0xc]      ; 004defe5
    ADD ESP,0x4                         ; 004defe8
    CMP ESI,0x1d                        ; 004defeb
    JLE 0x004deff5                      ; 004defee
        ;   XREF to: 004deff5 (CONDITIONAL_JUMP)  ; LAB_004deff5
    XOR EDI,EDI                         ; 004deff0
    MOV dword ptr [EBP + -0xc],EDI      ; 004deff2
    MOV EDX,dword ptr [EBP + -0xc]      ; 004deff5
        ;   Label: LAB_004deff5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004deff8
    PUSH 0xbb80                         ; 004defff
    ADD EAX,EDX                         ; 004df004
    PUSH 0x0                            ; 004df006
    SHL EAX,0x2                         ; 004df008
    PUSH 0x0                            ; 004df00b
    ADD EAX,0x1ccdc64                   ; 004df00d
    PUSH EAX                            ; 004df012
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004df013
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
    ADD ESP,0x10                        ; 004df018
    PUSH 0x0                            ; 004df01b
    CALL engine_3d.c_setBlendMode_FUN_004083c0 ; 004df01d
        ;   XREF to: 004083c0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setBlendMode_FUN_004083c0()
    ADD ESP,0x4                         ; 004df022
    MOV ESP,EBP                         ; 004df025
    POP EBP                             ; 004df027
    POP EDI                             ; 004df028
    POP ESI                             ; 004df029
    POP EBX                             ; 004df02a
    RET                                 ; 004df02b
    FLD double ptr [EBP + -0x28]        ; 004df02c
        ;   Label: LAB_004df02c
    FADD double ptr [0x0058a936]        ; 004df02f | DOUBLE_0058a936
    FMUL double ptr [0x0058a946]        ; 004df035 | DOUBLE_0058a946
    JMP 0x004dee88                      ; 004df03b
        ;   XREF to: 004dee88 (UNCONDITIONAL_JUMP)  ; LAB_004dee88

