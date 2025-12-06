; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   force_evaluation_mode
; Local Variables:
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined1       Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
;
; XREF[8]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e367c
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db292
;   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 at 004dc962
;   core_game.cpp_SaveRelated_FUN_004dcee0 at 004dd39d
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e48a
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 005393c6
;   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 at 0053c19f
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055da35
;
; Referenced Globals:
;   TerminatedCString s_core_setdir_cpp_006463fe
;   TerminatedCString s_saveZBufferTable_already_00646411
;   TerminatedCString s_core_setdir_cpp_00646433
;   TerminatedCString s_saveZBufferTable_not_sav_00646446
;   float g_VDHalfExtentMultiplier = 0.5
;   double g_VDBBoxExpansionFactor = 1.5
;   double g_VDCurrentCameraBonus = 3
;   double g_VDPreviousCameraBonus = 0.200000000000000
;   float g_VDCoordinateScaleFactor = 256
;   float g_VDCameraDistanceRadius = 200
;   float g_VDNearbyActorRadius = 100
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   ... and 38 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;   core_setdir.cpp_CDemonSet_FUN_00576870
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
;   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005751d0
        ;   Label: core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
    PUSH ESI                            ; 005751d1
    PUSH EDI                            ; 005751d2
    PUSH EBP                            ; 005751d3
    MOV EBP,ESP                         ; 005751d4
    SUB ESP,0x160                       ; 005751d6
    AND ESP,0xfffffff8                  ; 005751dc
    XOR EDX,EDX                         ; 005751df
    MOV ECX,dword ptr [EBP + 0x18]      ; 005751e1
    MOV dword ptr [ESP + 0x130],EDX     ; 005751e4
    TEST ECX,ECX                        ; 005751eb
    JNZ 0x00575213                      ; 005751ed | LAB_00575213
        ;   XREF to: 00575213 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005751ef
    CMP dword ptr [EAX + 0x15aea4],0x0  ; 005751f2
    JL 0x00575207                       ; 005751f9 | LAB_00575207
        ;   XREF to: 00575207 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005751fb
        ;   Label: LAB_005751fb
    MOV ESP,EBP                         ; 00575200
    POP EBP                             ; 00575202
    POP EDI                             ; 00575203
    POP ESI                             ; 00575204
    POP EBX                             ; 00575205
    RET                                 ; 00575206
    PUSH EDX                            ; 00575207
        ;   Label: LAB_00575207
    PUSH EAX                            ; 00575208
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 00575209 | void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057520e
    JMP 0x005751fb                      ; 00575211 | LAB_005751fb
        ;   XREF to: 005751fb (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00575213
        ;   Label: LAB_00575213
    CMP dword ptr [EAX + 0x15aea4],0x0  ; 00575216
    JL 0x00575719                       ; 0057521d | LAB_00575719
        ;   XREF to: 00575719 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x1c],0x2      ; 00575223
    JGE 0x0057523f                      ; 00575227 | LAB_0057523f
        ;   XREF to: 0057523f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00575229
        ;   Label: LAB_00575229
    FLD float ptr [EAX + 0x15aeb4]      ; 0057522c
    FLDZ                                ; 00575232
    FCOMPP                              ; 00575234
    FNSTSW AX                           ; 00575236
    SAHF                                ; 00575238
    JC 0x00575725                       ; 00575239 | LAB_00575725
        ;   XREF to: 00575725 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057523f
        ;   Label: LAB_0057523f
    MOV ECX,dword ptr [0x006703ec]      ; 00575242 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    XOR EDX,EDX                         ; 00575248
    MOV dword ptr [EAX + 0x15aeb4],0x0  ; 0057524a
    MOV EAX,[0x02d03e94]                ; 00575254 | int g_UseExternalRenderer
    PUSH ECX                            ; 00575259 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x12c],EAX     ; 0057525a
    MOV dword ptr [0x02d03e94],EDX      ; 00575261 | int g_UseExternalRenderer
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00575267 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057526c
    PUSH 0x0                            ; 0057526f
    MOV EBX,dword ptr [0x006703ec]      ; 00575271 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 00575277 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x134],EAX     ; 00575278
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 0057527f | void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00575284
    LEA EAX,[ESP + 0xa4]                ; 00575287
    PUSH EAX                            ; 0057528e
    MOV ESI,dword ptr [EBP + 0x18]      ; 0057528f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00575292
    PUSH ESI                            ; 00575295
    MOV EDX,dword ptr [EDX + 0x154]     ; 00575296
    LEA EDI,[ESP + 0x10]                ; 0057529c
    CALL dword ptr [EDX + 0x14]         ; 005752a0
    ADD ESP,0x8                         ; 005752a3
    XOR ESI,ESI                         ; 005752a6
    PUSH ESI                            ; 005752a8
        ;   Label: LAB_005752a8
    LEA EAX,[ESP + 0xd8]                ; 005752a9
    PUSH EAX                            ; 005752b0
    LEA EAX,[ESP + 0xac]                ; 005752b1
    PUSH EAX                            ; 005752b8
    MOV EBX,EDI                         ; 005752b9
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 005752bb | CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005752c0
    ADD EDI,0xc                         ; 005752c3
    INC ESI                             ; 005752c6
    FLD float ptr [EAX]                 ; 005752c7
    FMUL float ptr [0x006629bc]         ; 005752c9 | float g_VDCoordinateScaleFactor
    FISTP dword ptr [EBX]               ; 005752cf
    FLD float ptr [EAX + 0x4]           ; 005752d1
    FMUL float ptr [0x006629bc]         ; 005752d4 | float g_VDCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x4]         ; 005752da
    FLD float ptr [EAX + 0x8]           ; 005752dd
    FMUL float ptr [0x006629bc]         ; 005752e0 | float g_VDCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x8]         ; 005752e6
    CMP ESI,0x8                         ; 005752e9
    JL 0x005752a8                       ; 005752ec | LAB_005752a8
        ;   XREF to: 005752a8 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0xa4]          ; 005752ee
    FADD float ptr [ESP + 0xb0]         ; 005752f5
    FST float ptr [ESP + 0xf8]          ; 005752fc
    FLD float ptr [0x006464be]          ; 00575303 | float g_VDHalfExtentMultiplier
    FXCH                                ; 00575309
    FMUL ST1                            ; 0057530b
    FLD float ptr [ESP + 0xac]          ; 0057530d
    FLD float ptr [ESP + 0xa8]          ; 00575314
    FADD float ptr [ESP + 0xb4]         ; 0057531b
    FXCH                                ; 00575322
    FADD float ptr [ESP + 0xb8]         ; 00575324
    FXCH                                ; 0057532b
    FST float ptr [ESP + 0xfc]          ; 0057532d
    FMUL ST3                            ; 00575334
    FXCH                                ; 00575336
    FST float ptr [ESP + 0x100]         ; 00575338
    FMULP ST3                           ; 0057533f
    LEA EBX,[ESP + 0x68]                ; 00575341
    LEA EAX,[ESP + 0xe0]                ; 00575345
    FXCH                                ; 0057534c
    FSTP float ptr [ESP + 0xe0]         ; 0057534e
    FSTP float ptr [ESP + 0xe4]         ; 00575355
    FSTP float ptr [ESP + 0xe8]         ; 0057535c
    FLD float ptr [EAX]                 ; 00575363
    FMUL float ptr [0x006629bc]         ; 00575365 | float g_VDCoordinateScaleFactor
    FISTP dword ptr [EBX]               ; 0057536b
    FLD float ptr [EAX + 0x4]           ; 0057536d
    FMUL float ptr [0x006629bc]         ; 00575370 | float g_VDCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x4]         ; 00575376
    FLD float ptr [EAX + 0x8]           ; 00575379
    FMUL float ptr [0x006629bc]         ; 0057537c | float g_VDCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x8]         ; 00575382
    MOV EAX,0x6814d4                    ; 00575385 | SMRGLPrimitiveQuad[6] g_BoundingBoxQuadTemplates
    LEA ECX,[EAX + 0x1b0]               ; 0057538a | SMRGLPrimitiveQuad * g_BoundingBoxQuadTemplateEnd
    MOV ESI,dword ptr [EAX + 0x18]      ; 00575390 | DAT_006814ec
        ;   Label: LAB_00575390
    LEA EBX,[ESI*0x4 + 0x0]             ; 00575393
    SUB EBX,ESI                         ; 0057539a
    LEA ESI,[ESP + 0x8]                 ; 0057539c
    SHL EBX,0x2                         ; 005753a0
    ADD ESI,EBX                         ; 005753a3
    MOV EBX,dword ptr [EAX + 0xc]       ; 005753a5 | DAT_006814e0
    MOV EDX,dword ptr [ESI + 0x4]       ; 005753a8
    IMUL EDX,EBX                        ; 005753ab
    MOV EDI,dword ptr [ESI]             ; 005753ae
    MOV EBX,dword ptr [EAX + 0x8]       ; 005753b0 | DAT_006814dc
    IMUL EBX,EDI                        ; 005753b3
    MOV EDI,dword ptr [ESI + 0x8]       ; 005753b6
    ADD EDX,EBX                         ; 005753b9
    MOV EBX,dword ptr [EAX + 0x10]      ; 005753bb | DAT_006814e4
    IMUL EBX,EDI                        ; 005753be
    ADD EAX,0x48                        ; 005753c1
    ADD EDX,EBX                         ; 005753c4
    MOV dword ptr [EAX + -0x34],EDX     ; 005753c6 | DAT_006814e8
    CMP EAX,ECX                         ; 005753c9
    JNZ 0x00575390                      ; 005753cb | LAB_00575390
        ;   XREF to: 00575390 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x1c],0x0      ; 005753cd
    JZ 0x00575789                       ; 005753d1 | LAB_00575789
        ;   XREF to: 00575789 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 005753d7
    MOV EAX,dword ptr [EAX]             ; 005753da
    MOV dword ptr [ESP + 0x10c],EAX     ; 005753dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005753e3
    XOR ESI,ESI                         ; 005753e6
    MOV dword ptr [EAX + 0x15aea8],0xffffffff ; 005753e8
    MOV dword ptr [0x03346d10],ESI      ; 005753f2 | int g_VDCameraIndex
    MOV dword ptr [EAX + 0x15aeac],ESI  ; 005753f8
    LEA EAX,[ESP + 0x8c]                ; 005753fe
        ;   Label: LAB_005753fe
    MOV EDX,dword ptr [EBP + 0x18]      ; 00575405
    PUSH EAX                            ; 00575408
    MOV EDI,dword ptr [EBP + 0x18]      ; 00575409
    MOV EDX,dword ptr [EDX + 0x154]     ; 0057540c
    PUSH EDI                            ; 00575412
    CALL dword ptr [EDX + 0x14]         ; 00575413
    ADD ESP,0x8                         ; 00575416
    LEA EAX,[ESP + 0x8c]                ; 00575419
    PUSH EAX                            ; 00575420
    CALL core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060 ; 00575421 | float core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060(CBoundingBox3D * this_ptr)
        ;   XREF to: 00421060 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x160],EAX     ; 00575426
    FLD float ptr [ESP + 0x160]         ; 0057542d
    ADD ESP,0x4                         ; 00575434
    FLD float ptr [ESP + 0x8c]          ; 00575437
    FADD float ptr [ESP + 0x98]         ; 0057543e
    FXCH                                ; 00575445
    FMUL double ptr [0x006464c6]        ; 00575447 | double g_VDBBoxExpansionFactor
    FXCH                                ; 0057544d
    FST float ptr [ESP + 0xec]          ; 0057544f
    FLD float ptr [0x006464be]          ; 00575456 | float g_VDHalfExtentMultiplier
    FXCH                                ; 0057545c
    FMUL ST1                            ; 0057545e
    FLD float ptr [ESP + 0x94]          ; 00575460
    FLD float ptr [ESP + 0x90]          ; 00575467
    FADD float ptr [ESP + 0x9c]         ; 0057546e
    FXCH                                ; 00575475
    FADD float ptr [ESP + 0xa0]         ; 00575477
    FXCH                                ; 0057547e
    FST float ptr [ESP + 0xf0]          ; 00575480
    FMUL ST3                            ; 00575487
    FXCH                                ; 00575489
    FST float ptr [ESP + 0xf4]          ; 0057548b
    FMULP ST3                           ; 00575492
    LEA EAX,[ESP + 0xbc]                ; 00575494
    FLD1                                ; 0057549b
    PUSH EAX                            ; 0057549d
    LEA EAX,[ESP + 0xcc]                ; 0057549e
    FADDP ST4,ST0                       ; 005754a5
    PUSH EAX                            ; 005754a7
    FXCH ST3                            ; 005754a8
    FSTP float ptr [ESP + 0x140]        ; 005754aa
    PUSH EDI                            ; 005754b1
    FSTP float ptr [ESP + 0xc8]         ; 005754b2
    FXCH                                ; 005754b9
    FSTP float ptr [ESP + 0xcc]         ; 005754bb
    FSTP float ptr [ESP + 0xd0]         ; 005754c2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005754c9 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005754ce
    LEA EAX,[ESP + 0xc8]                ; 005754d1
    PUSH EAX                            ; 005754d8
    MOV EDX,dword ptr [EBP + 0x14]      ; 005754d9
    PUSH EDX                            ; 005754dc
    CALL core_setdir.cpp_CDemonSet_FUN_00576870 ; 005754dd | int core_setdir.cpp_CDemonSet_FUN_00576870(CDemonSet * this_ptr)
        ;   XREF to: 00576870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005754e2
    MOV dword ptr [ESP + 0x13c],EAX     ; 005754e5
    CMP EAX,-0x1                        ; 005754ec
    SETZ AL                             ; 005754ef
    MOV EDI,dword ptr [0x00679398]      ; 005754f2 | int g_WindowHeight
    AND EAX,0xff                        ; 005754f8
    MOV ECX,dword ptr [0x0336362c]      ; 005754fd | uint *[1024] g_ZBufferScanlineArrayBackup
    MOV [0x033648f4],EAX                ; 00575503 | int g_VDIsActorAreaInvalid
    TEST ECX,ECX                        ; 00575508
    JZ 0x0057552f                       ; 0057550a | LAB_0057552f
        ;   XREF to: 0057552f (CONDITIONAL_JUMP)
    MOV EBX,0x6463fe                    ; 0057550c | = "..\\core\\setdir.cpp" | s_core_setdir_cpp_006463fe = ..\core\setdir.cpp
    MOV ESI,0x67                        ; 00575511
    PUSH 0x646411                       ; 00575516 | = "saveZBufferTable - already saved!" | s_saveZBufferTable_already_00646411 = saveZBufferTable - already saved!
    MOV dword ptr [0x02f0ca48],EBX      ; 0057551b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00575521 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00575527 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057552c
    TEST EDI,EDI                        ; 0057552f
        ;   Label: LAB_0057552f
    JLE 0x00575550                      ; 00575531 | LAB_00575550
        ;   XREF to: 00575550 (CONDITIONAL_JUMP)
    SHL EDI,0x2                         ; 00575533
    XOR EAX,EAX                         ; 00575536
    ADD EAX,0x4                         ; 00575538
        ;   Label: LAB_00575538
    MOV EBX,dword ptr [EAX + 0x2cf7d58] ; 0057553b | uint *[1024] g_ZBufferScanlineArray
    MOV dword ptr [EAX + 0x3363628],EBX ; 00575541 | uint *[1024] g_ZBufferScanlineArrayBackup
    CMP EAX,EDI                         ; 00575547
    JL 0x00575538                       ; 00575549 | LAB_00575538
        ;   XREF to: 00575538 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0057554b
    MOV ECX,ECX                         ; 0057554e
    FLD float ptr [0x006629d8]          ; 00575550 | float g_VDNearbyActorRadius
        ;   Label: LAB_00575550
    FMUL ST0                            ; 00575556
    XOR EDI,EDI                         ; 00575558
    MOV ESI,dword ptr [EBP + 0x18]      ; 0057555a
    MOV dword ptr [0x03355b68],EDI      ; 0057555d | int g_VDNearbyActorCount
    ADD ESI,0x20                        ; 00575563
    MOV dword ptr [ESP + 0x144],EDI     ; 00575566
    FSTP float ptr [ESP + 0x134]        ; 0057556d
    MOV EAX,[0x006810c8]                ; 00575574 | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_00575574
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 00575579 | g_CDemonSetInstance.actor_list_ptr
    JL 0x0057582e                       ; 0057557f | LAB_0057582e
        ;   XREF to: 0057582e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x18]      ; 00575585
    FLD float ptr [0x006629d4]          ; 00575588 | float g_VDCameraDistanceRadius
    FLD ST0                             ; 0057558e
    ADD EAX,0x20                        ; 00575590
    FMULP                               ; 00575593
    MOV dword ptr [ESP + 0x148],EAX     ; 00575595
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057559c
    ADD EAX,0x4                         ; 0057559f
    FSTP float ptr [ESP + 0x158]        ; 005755a2
    MOV dword ptr [ESP + 0x140],EAX     ; 005755a9
    CMP dword ptr [ESP + 0x10c],0x0     ; 005755b0
        ;   Label: LAB_005755b0
    JLE 0x005755ca                      ; 005755b8 | LAB_005755ca
        ;   XREF to: 005755ca (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x14]      ; 005755ba
    MOV EAX,[0x03346d10]                ; 005755bd | int g_VDCameraIndex
    CMP EAX,dword ptr [EDX]             ; 005755c2
    JL 0x005758fe                       ; 005755c4 | LAB_005758fe
        ;   XREF to: 005758fe (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x0336362c]      ; 005755ca | uint *[1024] g_ZBufferScanlineArrayBackup
        ;   Label: LAB_005755ca
    MOV EBX,dword ptr [0x00679398]      ; 005755d0 | int g_WindowHeight
    TEST ESI,ESI                        ; 005755d6
    JNZ 0x005755fc                      ; 005755d8 | LAB_005755fc
        ;   XREF to: 005755fc (CONDITIONAL_JUMP)
    MOV EDI,0x646433                    ; 005755da | = "..\\core\\setdir.cpp" | s_core_setdir_cpp_00646433 = ..\core\setdir.cpp
    MOV EAX,0x70                        ; 005755df
    PUSH 0x646446                       ; 005755e4 | = "saveZBufferTable - not saved!" | s_saveZBufferTable_not_sav_00646446 = saveZBufferTable - not saved!
    MOV dword ptr [0x02f0ca48],EDI      ; 005755e9 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005755ef | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005755f4 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005755f9
    TEST EBX,EBX                        ; 005755fc
        ;   Label: LAB_005755fc
    JLE 0x00575620                      ; 005755fe | LAB_00575620
        ;   XREF to: 00575620 (CONDITIONAL_JUMP)
    LEA EDX,[EBX*0x4 + 0x0]             ; 00575600
    XOR EAX,EAX                         ; 00575607
    ADD EAX,0x4                         ; 00575609
        ;   Label: LAB_00575609
    MOV EBX,dword ptr [EAX + 0x3363628] ; 0057560c | uint *[1024] g_ZBufferScanlineArrayBackup
    MOV dword ptr [EAX + 0x2cf7d58],EBX ; 00575612 | uint *[1024] g_ZBufferScanlineArray
    CMP EAX,EDX                         ; 00575618
    JL 0x00575609                       ; 0057561a | LAB_00575609
        ;   XREF to: 00575609 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0057561c
    MOV ECX,dword ptr [ESP + 0x12c]     ; 00575620
        ;   Label: LAB_00575620
    PUSH ECX                            ; 00575627
    MOV EBX,dword ptr [0x006703ec]      ; 00575628 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    XOR EDX,EDX                         ; 0057562e
    PUSH EBX                            ; 00575630 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [0x0336362c],EDX      ; 00575631 | uint *[1024] g_ZBufferScanlineArrayBackup
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 00575637 | void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057563c
    MOV EAX,dword ptr [ESP + 0x128]     ; 0057563f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00575646
    MOV [0x02d03e94],EAX                ; 00575649 | int g_UseExternalRenderer
    MOV ESI,dword ptr [EDX]             ; 0057564e
    CMP ESI,dword ptr [0x03346d10]      ; 00575650 | int g_VDCameraIndex
    JG 0x0057570b                       ; 00575656 | LAB_0057570b
        ;   XREF to: 0057570b (CONDITIONAL_JUMP)
    MOV EDI,0xbf800000                  ; 0057565c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00575661
    MOV EDX,0xffffffff                  ; 00575664
    XOR EBX,EBX                         ; 00575669
    MOV ECX,dword ptr [EAX]             ; 0057566b
    MOV dword ptr [ESP + 0x4],EDI       ; 0057566d
    TEST ECX,ECX                        ; 00575671
    JLE 0x0057569f                      ; 00575673 | LAB_0057569f
        ;   XREF to: 0057569f (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00575675
    FLD float ptr [ESI + 0x3346d20]     ; 00575677 | float[250] g_VDCameraScores
        ;   Label: LAB_00575677
    FCOMP float ptr [ESP + 0x4]         ; 0057567d
    FNSTSW AX                           ; 00575681
    SAHF                                ; 00575683
    JBE 0x00575692                      ; 00575684 | LAB_00575692
        ;   XREF to: 00575692 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x3346d20] ; 00575686 | float[250] g_VDCameraScores
    MOV EDX,EBX                         ; 0057568c
    MOV dword ptr [ESP + 0x4],EAX       ; 0057568e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00575692
        ;   Label: LAB_00575692
    INC EBX                             ; 00575695
    MOV EDI,dword ptr [EAX]             ; 00575696
    ADD ESI,0x4                         ; 00575698
    CMP EBX,EDI                         ; 0057569b
    JL 0x00575677                       ; 0057569d | LAB_00575677
        ;   XREF to: 00575677 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0057569f
        ;   Label: LAB_0057569f
    JL 0x00575703                       ; 005756a1 | LAB_00575703
        ;   XREF to: 00575703 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 005756a3
    MOV ECX,0x1                         ; 005756a7
    FLDZ                                ; 005756ac
    FCOMPP                              ; 005756ae
    FNSTSW AX                           ; 005756b0
    SAHF                                ; 005756b2
    JC 0x005756b7                       ; 005756b3 | LAB_005756b7
        ;   XREF to: 005756b7 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 005756b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005756b7
        ;   Label: LAB_005756b7
    CMP EDX,dword ptr [EAX + 0x15aea4]  ; 005756ba
    JNZ 0x005756c4                      ; 005756c0 | LAB_005756c4
        ;   XREF to: 005756c4 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 005756c2
    CMP dword ptr [EBP + 0x1c],0x1      ; 005756c4
        ;   Label: LAB_005756c4
    JLE 0x005756cf                      ; 005756c8 | LAB_005756cf
        ;   XREF to: 005756cf (CONDITIONAL_JUMP)
    MOV ECX,0x1                         ; 005756ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 005756cf
        ;   Label: LAB_005756cf
    CMP dword ptr [EAX + 0x15aea4],0x0  ; 005756d2
    JL 0x005756df                       ; 005756d9 | LAB_005756df
        ;   XREF to: 005756df (CONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 005756db
    JZ 0x00575703                       ; 005756dd | LAB_00575703
        ;   XREF to: 00575703 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 005756df
        ;   Label: LAB_005756df
    MOV ECX,dword ptr [EBP + 0x14]      ; 005756e0
    MOV EAX,[0x033648f4]                ; 005756e3 | int g_VDIsActorAreaInvalid
    PUSH ECX                            ; 005756e8
    MOV dword ptr [ECX + 0x15ae48],EAX  ; 005756e9
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 005756ef | void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
    MOV EDX,0x1                         ; 005756f4
    ADD ESP,0x8                         ; 005756f9
    MOV dword ptr [ESP + 0x130],EDX     ; 005756fc
    XOR ECX,ECX                         ; 00575703
        ;   Label: LAB_00575703
    MOV dword ptr [0x03346d10],ECX      ; 00575705 | int g_VDCameraIndex
    MOV EAX,dword ptr [ESP + 0x130]     ; 0057570b
        ;   Label: LAB_0057570b
    MOV ESP,EBP                         ; 00575712
    POP EBP                             ; 00575714
    POP EDI                             ; 00575715
    POP ESI                             ; 00575716
    POP EBX                             ; 00575717
    RET                                 ; 00575718
    MOV dword ptr [EBP + 0x1c],0x1      ; 00575719
        ;   Label: LAB_00575719
    JMP 0x00575229                      ; 00575720 | LAB_00575229
        ;   XREF to: 00575229 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 00575725 | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_00575725
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057572b
    FLD float ptr [EDX + 0x264]         ; 0057572e | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x15aeb4]    ; 00575734
    FST float ptr [EAX + 0x15aeb4]      ; 0057573a
    FLDZ                                ; 00575740
    FCOMPP                              ; 00575742
    FNSTSW AX                           ; 00575744
    SAHF                                ; 00575746
    JNC 0x0057577d                      ; 00575747 | LAB_0057577d
        ;   XREF to: 0057577d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00575749
    MOV EDI,dword ptr [EAX + 0x15aeb0]  ; 0057574c
    TEST EDI,EDI                        ; 00575752
    JL 0x0057575e                       ; 00575754 | LAB_0057575e
        ;   XREF to: 0057575e (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [EAX + 0x15aea4]  ; 00575756
    JNZ 0x00575767                      ; 0057575c | LAB_00575767
        ;   XREF to: 00575767 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0057575e
        ;   Label: LAB_0057575e
    MOV ESP,EBP                         ; 00575760
    POP EBP                             ; 00575762
    POP EDI                             ; 00575763
    POP ESI                             ; 00575764
    POP EBX                             ; 00575765
    RET                                 ; 00575766
    PUSH EDI                            ; 00575767
        ;   Label: LAB_00575767
    PUSH EAX                            ; 00575768
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 00575769 | void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 0057576e
    ADD ESP,0x8                         ; 00575773
    MOV ESP,EBP                         ; 00575776
    POP EBP                             ; 00575778
    POP EDI                             ; 00575779
    POP ESI                             ; 0057577a
    POP EBX                             ; 0057577b
    RET                                 ; 0057577c
    MOV dword ptr [EBP + 0x1c],0x1      ; 0057577d
        ;   Label: LAB_0057577d
    JMP 0x0057523f                      ; 00575784 | LAB_0057523f
        ;   XREF to: 0057523f (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x14]      ; 00575789
        ;   Label: LAB_00575789
    MOV EDX,dword ptr [EDX]             ; 0057578c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057578e
    ADD EAX,EDX                         ; 00575795
    ADD EAX,EAX                         ; 00575797
    MOV dword ptr [ESP + 0x15c],EAX     ; 00575799
    MOV EAX,[0x0067b654]                ; 005757a0 | CGame g_CGameInstance | CGame * g_CGamePtr
    FILD dword ptr [ESP + 0x15c]        ; 005757a5
    FMUL float ptr [EAX + 0x264]        ; 005757ac | g_CGameInstance.delta_time_float
    CALL crt_math.c_round_FUN_005fe6b0  ; 005757b2 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x10c]       ; 005757b7
    CMP dword ptr [ESP + 0x10c],0x3     ; 005757be
    JGE 0x005757d3                      ; 005757c6 | LAB_005757d3
        ;   XREF to: 005757d3 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x10c],0x3     ; 005757c8
    MOV EDX,dword ptr [EBP + 0x14]      ; 005757d3
        ;   Label: LAB_005757d3
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005757d6
    MOV EBX,dword ptr [EDX]             ; 005757dd
    CMP EAX,EBX                         ; 005757df
    JLE 0x005757ea                      ; 005757e1 | LAB_005757ea
        ;   XREF to: 005757ea (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x10c],EBX     ; 005757e3
    MOV EDX,dword ptr [0x0067b654]      ; 005757ea | CGame * g_CGamePtr
        ;   Label: LAB_005757ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 005757f0
    FLD float ptr [EDX + 0x264]         ; 005757f3 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX + 0x15aeac]    ; 005757f9
    FST float ptr [EAX + 0x15aeac]      ; 005757ff
    FLDZ                                ; 00575805
    FCOMPP                              ; 00575807
    FNSTSW AX                           ; 00575809
    SAHF                                ; 0057580b
    JC 0x005753fe                       ; 0057580c | LAB_005753fe
        ;   XREF to: 005753fe (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00575812
    MOV dword ptr [EAX + 0x15aea8],0xffffffff ; 00575815
    MOV dword ptr [EAX + 0x15aeac],0x0  ; 0057581f
    JMP 0x005753fe                      ; 00575829 | LAB_005753fe
        ;   XREF to: 005753fe (UNCONDITIONAL_JUMP)
    ADD EAX,dword ptr [ESP + 0x144]     ; 0057582e
        ;   Label: LAB_0057582e
    MOV EBX,dword ptr [EAX + 0x14d158]  ; 00575835 | g_CDemonSetInstance.actor_list_data[0]
    PUSH EBX                            ; 0057583b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057583c
    CALL dword ptr [EAX + 0x40]         ; 00575842
    ADD ESP,0x4                         ; 00575845
    TEST EAX,EAX                        ; 00575848
    JZ 0x005758e7                       ; 0057584a | LAB_005758e7
        ;   XREF to: 005758e7 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [EBP + 0x18]      ; 00575850
    JZ 0x005758e7                       ; 00575853 | LAB_005758e7
        ;   XREF to: 005758e7 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x20]                ; 00575859
    FLD float ptr [EAX]                 ; 0057585c
    FSUB float ptr [ESI]                ; 0057585e
    FMUL ST0                            ; 00575860
    FLD float ptr [EAX + 0x4]           ; 00575862
    FSUB float ptr [ESI + 0x4]          ; 00575865
    FMUL ST0                            ; 00575868
    FLD float ptr [EAX + 0x8]           ; 0057586a
    FXCH                                ; 0057586d
    FADDP ST2,ST0                       ; 0057586f
    FSUB float ptr [ESI + 0x8]          ; 00575871
    FMUL ST0                            ; 00575874
    FADDP                               ; 00575876
    FCOMP float ptr [ESP + 0x134]       ; 00575878
    FNSTSW AX                           ; 0057587f
    SAHF                                ; 00575881
    JA 0x005758e7                       ; 00575882 | LAB_005758e7
        ;   XREF to: 005758e7 (CONDITIONAL_JUMP)
    MOV EAX,[0x03355b68]                ; 00575884 | int g_VDNearbyActorCount
    MOV dword ptr [EAX*0x4 + 0x3355b6c],EBX ; 00575889 | CDemonActor *[2000] g_VDNearbyActorPointers
    LEA EAX,[ESP + 0x74]                ; 00575890
    PUSH EAX                            ; 00575894
    MOV EDX,dword ptr [EBX + 0x154]     ; 00575895
    PUSH EBX                            ; 0057589b
    CALL dword ptr [EDX + 0x14]         ; 0057589c
    IMUL EBX,dword ptr [0x03355b68],0x18 ; 0057589f | int g_VDNearbyActorCount
    ADD ESP,0x8                         ; 005758a6
    ADD EBX,0x3357aac                   ; 005758a9 | CBoundingBox3D[2000] g_VDNearbyActorBoundingBoxes
    MOV EDX,EAX                         ; 005758af
    MOV ECX,EBX                         ; 005758b1
    CMP EBX,EAX                         ; 005758b3
    JZ 0x005758c7                       ; 005758b5 | LAB_005758c7
        ;   XREF to: 005758c7 (CONDITIONAL_JUMP)
    FLD float ptr [EAX]                 ; 005758b7
    FSTP float ptr [EBX]                ; 005758b9 | CBoundingBox3D[2000] g_VDNearbyActorBoundingBoxes
    FLD float ptr [EAX + 0x4]           ; 005758bb
    FSTP float ptr [EBX + 0x4]          ; 005758be | DAT_03357ab0
    FLD float ptr [EAX + 0x8]           ; 005758c1
    FSTP float ptr [EBX + 0x8]          ; 005758c4 | DAT_03357ab4
    LEA EAX,[EDX + 0xc]                 ; 005758c7
        ;   Label: LAB_005758c7
    LEA EBX,[ECX + 0xc]                 ; 005758ca | DAT_03357ab8
    CMP EBX,EAX                         ; 005758cd
    JZ 0x005758e1                       ; 005758cf | LAB_005758e1
        ;   XREF to: 005758e1 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 005758d1
    MOV dword ptr [EBX],EDX             ; 005758d3 | DAT_03357ab8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005758d5
    MOV dword ptr [EBX + 0x4],EDX       ; 005758d8 | DAT_03357abc
    MOV EDX,dword ptr [EAX + 0x8]       ; 005758db
    MOV dword ptr [EBX + 0x8],EDX       ; 005758de | DAT_03357ac0
    INC dword ptr [0x03355b68]          ; 005758e1 | int g_VDNearbyActorCount
        ;   Label: LAB_005758e1
    MOV EBX,dword ptr [ESP + 0x144]     ; 005758e7
        ;   Label: LAB_005758e7
    ADD EBX,0x4                         ; 005758ee
    INC EDI                             ; 005758f1
    MOV dword ptr [ESP + 0x144],EBX     ; 005758f2
    JMP 0x00575574                      ; 005758f9 | LAB_00575574
        ;   XREF to: 00575574 (UNCONDITIONAL_JUMP)
    IMUL EBX,EAX,0x1a4                  ; 005758fe
        ;   Label: LAB_005758fe
    MOV EAX,EDX                         ; 00575904
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00575906
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x1a0] ; 0057590d
    CMP EDX,ECX                         ; 00575914
    JNZ 0x00575a9b                      ; 00575916 | LAB_00575a9b
        ;   XREF to: 00575a9b (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x140]     ; 0057591c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00575923
    ADD EBX,ESI                         ; 00575926
    LEA EDI,[ESP + 0x8]                 ; 00575928
    MOV dword ptr [ESP + 0x150],EAX     ; 0057592c
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00575933
    MOV ESI,dword ptr [0x03346d10]      ; 00575939 | int g_VDCameraIndex
    TEST EAX,EAX                        ; 0057593f
    JZ 0x005759c5                       ; 00575941 | LAB_005759c5
        ;   XREF to: 005759c5 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x100]               ; 00575947
    MOV EDX,dword ptr [ESP + 0x148]     ; 0057594d
    FLD float ptr [EAX]                 ; 00575954
    FSUB float ptr [EDX]                ; 00575956
    FMUL ST0                            ; 00575958
    FLD float ptr [EAX + 0x4]           ; 0057595a
    FSUB float ptr [EDX + 0x4]          ; 0057595d
    FMUL ST0                            ; 00575960
    FLD float ptr [EAX + 0x8]           ; 00575962
    FXCH                                ; 00575965
    FADDP ST2,ST0                       ; 00575967
    FSUB float ptr [EDX + 0x8]          ; 00575969
    FMUL ST0                            ; 0057596c
    FADDP                               ; 0057596e
    FCOMP float ptr [ESP + 0x158]       ; 00575970
    FNSTSW AX                           ; 00575977
    SAHF                                ; 00575979
    JBE 0x005759d0                      ; 0057597a | LAB_005759d0
        ;   XREF to: 005759d0 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0057597c
    MOV dword ptr [ESP + 0x14c],ECX     ; 0057597e
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00575985
        ;   Label: LAB_00575985
    MOV dword ptr [ESP],EAX             ; 0057598c
    CMP dword ptr [EBP + 0x1c],0x0      ; 0057598f
        ;   Label: LAB_0057598f
    JZ 0x00575aa7                       ; 00575993 | LAB_00575aa7
        ;   XREF to: 00575aa7 (CONDITIONAL_JUMP)
    MOV EAX,[0x03346d10]                ; 00575999 | int g_VDCameraIndex
        ;   Label: LAB_00575999
    MOV EDX,dword ptr [ESP]             ; 0057599e
    LEA EDI,[EAX + 0x1]                 ; 005759a1
    MOV dword ptr [EAX*0x4 + 0x3346d20],EDX ; 005759a4 | float[250] g_VDCameraScores
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005759ab
    DEC EAX                             ; 005759b2
    MOV dword ptr [0x03346d10],EDI      ; 005759b3 | int g_VDCameraIndex
    MOV dword ptr [ESP + 0x10c],EAX     ; 005759b9
    JMP 0x005755b0                      ; 005759c0 | LAB_005755b0
        ;   XREF to: 005755b0 (UNCONDITIONAL_JUMP)
    XOR EDX,ECX                         ; 005759c5
        ;   Label: LAB_005759c5
    MOV dword ptr [ESP + 0x14c],EDX     ; 005759c7
    JMP 0x00575985                      ; 005759ce | LAB_00575985
        ;   XREF to: 00575985 (UNCONDITIONAL_JUMP)
    PUSH dword ptr [ESP + 0x138]        ; 005759d0
        ;   Label: LAB_005759d0
    PUSH EDX                            ; 005759d7
    PUSH EBX                            ; 005759d8
    CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970 ; 005759d9 | int core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970(C3DSCamera * this_ptr, CVector3f * world_position, float radius)
        ;   XREF to: 00585970 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005759de
    TEST EAX,EAX                        ; 005759e1
    JZ 0x00575a4e                       ; 005759e3 | LAB_00575a4e
        ;   XREF to: 00575a4e (CONDITIONAL_JUMP)
    IMUL EAX,ESI,0xf0                   ; 005759e5
    MOV ESI,dword ptr [EBX + 0x140]     ; 005759eb
    ADD EAX,0x3347108                   ; 005759f1 | CZThumb[1500] g_CZThumbPool
    TEST ESI,ESI                        ; 005759f6
    JZ 0x00575a5a                       ; 005759f8 | LAB_00575a5a
        ;   XREF to: 00575a5a (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 005759fa | CZThumb[1500] g_CZThumbPool
    XOR EDX,EDX                         ; 005759fc
    LEA ESI,[EAX + 0xf0]                ; 005759fe | DAT_033471f8
    MOV dword ptr [ESP + 0x154],EDX     ; 00575a04
    PUSH 0x0                            ; 00575a0b
        ;   Label: LAB_00575a0b
    PUSH 0x6814d4                       ; 00575a0d | SMRGLPrimitiveQuad[6] g_BoundingBoxQuadTemplates
    PUSH EDI                            ; 00575a12
    MOV EDX,dword ptr [ESP + 0x15c]     ; 00575a13
    PUSH EDX                            ; 00575a1a
    PUSH EBX                            ; 00575a1b | CZThumb[1500] g_CZThumbPool
    CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 ; 00575a1c | float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, ...)
        ;   XREF to: 00574ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x170],EAX     ; 00575a21
    FLD float ptr [ESP + 0x170]         ; 00575a28
    ADD ESP,0x14                        ; 00575a2f
    FADD float ptr [ESP + 0x154]        ; 00575a32
    ADD EBX,0x28                        ; 00575a39 | DAT_03347130
    FSTP float ptr [ESP + 0x154]        ; 00575a3c
    CMP EBX,ESI                         ; 00575a43
    JNZ 0x00575a0b                      ; 00575a45 | LAB_00575a0b
        ;   XREF to: 00575a0b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x154]     ; 00575a47
    MOV dword ptr [ESP + 0x14c],EAX     ; 00575a4e
        ;   Label: LAB_00575a4e
    JMP 0x00575985                      ; 00575a55 | LAB_00575985
        ;   XREF to: 00575985 (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 00575a5a
        ;   Label: LAB_00575a5a
    PUSH 0x6814d4                       ; 00575a5c | SMRGLPrimitiveQuad[6] g_BoundingBoxQuadTemplates
    LEA EBX,[ESP + 0x10]                ; 00575a61
    PUSH EBX                            ; 00575a65
    MOV EDI,dword ptr [EBP + 0x18]      ; 00575a66
    PUSH EDI                            ; 00575a69
    PUSH EAX                            ; 00575a6a | CZThumb[1500] g_CZThumbPool
    CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 ; 00575a6b | float core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0(CZThumb * this_ptr, CDemonActor * actor, CVector3i * bounding_box_vertices, SMRGLHeaderPrimitive * primitives, ...)
        ;   XREF to: 00574ba0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x170],EAX     ; 00575a70
    FLD float ptr [ESP + 0x170]         ; 00575a77
    ADD ESP,0x14                        ; 00575a7e
    FSTP float ptr [ESP + 0x154]        ; 00575a81
    MOV EAX,dword ptr [ESP + 0x154]     ; 00575a88
    MOV dword ptr [ESP + 0x14c],EAX     ; 00575a8f
    JMP 0x00575985                      ; 00575a96 | LAB_00575985
        ;   XREF to: 00575985 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESP],0xc7c34ff3      ; 00575a9b
        ;   Label: LAB_00575a9b
    JMP 0x0057598f                      ; 00575aa2 | LAB_0057598f
        ;   XREF to: 0057598f (UNCONDITIONAL_JUMP)
    FLDZ                                ; 00575aa7
        ;   Label: LAB_00575aa7
    FCOMP float ptr [ESP]               ; 00575aa9
    FNSTSW AX                           ; 00575aac
    SAHF                                ; 00575aae
    JNC 0x00575999                      ; 00575aaf | LAB_00575999
        ;   XREF to: 00575999 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x14]      ; 00575ab5
    MOV EAX,[0x03346d10]                ; 00575ab8 | int g_VDCameraIndex
    CMP EAX,dword ptr [EDX + 0x15aea4]  ; 00575abd
    JNZ 0x00575ad5                      ; 00575ac3 | LAB_00575ad5
        ;   XREF to: 00575ad5 (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00575ac5
    FLD ST0                             ; 00575ac8
    FMUL double ptr [0x006464ce]        ; 00575aca | double g_VDCurrentCameraBonus
    FSTP ST1                            ; 00575ad0
    FSTP float ptr [ESP]                ; 00575ad2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00575ad5
        ;   Label: LAB_00575ad5
    MOV EAX,[0x03346d10]                ; 00575ad8 | int g_VDCameraIndex
    CMP EAX,dword ptr [EDX + 0x15aea8]  ; 00575add
    JNZ 0x00575999                      ; 00575ae3 | LAB_00575999
        ;   XREF to: 00575999 (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00575ae9
    FLD ST0                             ; 00575aec
    FMUL double ptr [0x006464d6]        ; 00575aee | double g_VDPreviousCameraBonus
    FSTP ST1                            ; 00575af4
    FSTP float ptr [ESP]                ; 00575af6
    JMP 0x00575999                      ; 00575af9 | LAB_00575999
        ;   XREF to: 00575999 (UNCONDITIONAL_JUMP)

