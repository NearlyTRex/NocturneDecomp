; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[11]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a322
;   core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0 at 0053babf
;   core_msnedit.cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970 at 0053c9b9
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a76d
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c221
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b385
;   core_setedit.cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00 at 0057fe18
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 at 0057dd1d
;   core_setedit.cpp_CDemonSet_showRoomEditor_FUN_00581aa0 at 00581c8f
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 at 0057aaa2
;   ... and 1 more
;
; Referenced Globals:
;   void* PTR_caseD_3_0044c42c = 0044c4b6
;   TerminatedCString s_Attack_00619fb2
;   TerminatedCString s_Sustain_00619fbc
;   TerminatedCString s_Decay_00619fc7
;   TerminatedCString s_core_dcamera_cpp_00619fd0
;   TerminatedCString s_CDemonCamera_beginScene__00619fe4
;   CConsole* g_CConsolePtr = 0083b1a4
;   int g_CameraShakePeakValue = 0x10000
;   int g_CameraShakeSustainValue = 0xc80000
;   int g_CameraShakeState = 0x3
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CConsole g_CConsoleInstance
;   int g_CameraShakeSustainTimer
;   int g_CameraShakeAttackTime
;   int g_CameraShakeAttackAccum
;   ... and 15 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
;   wincore_windll.cpp_beginScene_FUN_005b7280
;   wincore_windll.cpp_clear_FUN_005b7a30
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_windll.cpp_clearZBuffer_FUN_005b7be0
;   wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c430
        ;   Label: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
    PUSH ESI                            ; 0044c431
    PUSH EDI                            ; 0044c432
    PUSH EBP                            ; 0044c433
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044c434
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044c438
    MOV EAX,[0x0066ed00]                ; 0044c43c | g_CameraShakeState
    XOR EBX,EBX                         ; 0044c441
    CMP EAX,0x3                         ; 0044c443
    JA 0x0044c4b6                       ; 0044c446
        ;   XREF to: 0044c4b6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x44c420]  ; 0044c448 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    MOV EBP,dword ptr [0x013da760]      ; 0044c44f | g_CameraShakeAttackAccum
        ;   Label: caseD_0
    ADD EBP,dword ptr [0x02cf6a80]      ; 0044c455 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x013da75c]      ; 0044c45b | g_CameraShakeAttackTime
    MOV dword ptr [0x013da760],EBP      ; 0044c461 | g_CameraShakeAttackAccum
    CMP EBP,EDX                         ; 0044c467
    JLE 0x0044c486                      ; 0044c469
        ;   XREF to: 0044c486 (CONDITIONAL_JUMP)  ; LAB_0044c486
    MOV ECX,0x1                         ; 0044c46b
    MOV EAX,[0x0066ecfc]                ; 0044c470 | g_CameraShakeSustainValue
    MOV dword ptr [0x013da760],EDX      ; 0044c475 | g_CameraShakeAttackAccum
    MOV dword ptr [0x0066ed00],ECX      ; 0044c47b | g_CameraShakeState
    MOV [0x013da758],EAX                ; 0044c481 | g_CameraShakeSustainTimer
    MOV EBP,dword ptr [0x013da75c]      ; 0044c486 | g_CameraShakeAttackTime
        ;   Label: LAB_0044c486
    TEST EBP,EBP                        ; 0044c48c
    JZ 0x0044c4a3                       ; 0044c48e
        ;   XREF to: 0044c4a3 (CONDITIONAL_JUMP)  ; LAB_0044c4a3
    MOV EDX,dword ptr [0x013da760]      ; 0044c490 | g_CameraShakeAttackAccum
    MOV EAX,[0x0066ecf8]                ; 0044c496 | g_CameraShakePeakValue
    MOV EBX,EBP                         ; 0044c49b
    IMUL EDX                            ; 0044c49d
    IDIV EBX                            ; 0044c49f
    MOV EBX,EAX                         ; 0044c4a1
    PUSH 0x619fb2                       ; 0044c4a3 | = "Attack : "
        ;   Label: LAB_0044c4a3
    MOV EAX,[0x0066e8e0]                ; 0044c4a8 | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 0044c4ad | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0044c4ae
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   Label: LAB_0044c4ae
    ADD ESP,0x8                         ; 0044c4b3
    MOV EDX,dword ptr [0x02cf6a80]      ; 0044c4b6 | g_GlobalDeltaTimeInt
        ;   Label: caseD_3
    MOV EAX,EBX                         ; 0044c4bc
    IMUL EDX                            ; 0044c4be
    SHRD EAX,EDX,0x10                   ; 0044c4c0
    MOV EDX,dword ptr [0x013da76c]      ; 0044c4c4 | g_CameraShakeAccumulator
    ADD EDX,EAX                         ; 0044c4ca
    MOV dword ptr [0x013da76c],EDX      ; 0044c4cc | g_CameraShakeAccumulator
    CMP EDX,0xffff                      ; 0044c4d2
    JLE 0x0044c527                      ; 0044c4d8
        ;   XREF to: 0044c527 (CONDITIONAL_JUMP)  ; LAB_0044c527
    MOV EAX,[0x02cf6a80]                ; 0044c4da | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x013da770]      ; 0044c4df | g_CameraShakeOffsetX
    AND EAX,0x1                         ; 0044c4e5
    XOR EBX,EBX                         ; 0044c4e8
    MOV [0x013da770],EAX                ; 0044c4ea | g_CameraShakeOffsetX
    MOV EAX,[0x02cf6a80]                ; 0044c4ef | g_GlobalDeltaTimeInt
    MOV dword ptr [0x013da76c],EBX      ; 0044c4f4 | g_CameraShakeAccumulator
    AND EAX,0x2                         ; 0044c4fa
    MOV EBX,dword ptr [0x013da774]      ; 0044c4fd | g_CameraShakeOffsetY
    SAR EAX,0x1                         ; 0044c503
    MOV EBP,dword ptr [0x013da770]      ; 0044c505 | g_CameraShakeOffsetX
    MOV [0x013da774],EAX                ; 0044c50b | g_CameraShakeOffsetY
    CMP EDX,EBP                         ; 0044c510
    JNZ 0x0044c527                      ; 0044c512
        ;   XREF to: 0044c527 (CONDITIONAL_JUMP)  ; LAB_0044c527
    CMP EBX,EAX                         ; 0044c514
    JNZ 0x0044c527                      ; 0044c516
        ;   XREF to: 0044c527 (CONDITIONAL_JUMP)  ; LAB_0044c527
    TEST EAX,EAX                        ; 0044c518
    SETZ AL                             ; 0044c51a
    AND EAX,0xff                        ; 0044c51d
    MOV [0x013da774],EAX                ; 0044c522 | g_CameraShakeOffsetY
    CMP dword ptr [ESI + 0x148],0x1e0   ; 0044c527
        ;   Label: LAB_0044c527
    JGE 0x0044c71f                      ; 0044c531
        ;   XREF to: 0044c71f (CONDITIONAL_JUMP)  ; LAB_0044c71f
    XOR EBP,EBP                         ; 0044c537
        ;   Label: LAB_0044c537
    MOV dword ptr [0x013da770],EBP      ; 0044c539 | g_CameraShakeOffsetX
    MOV dword ptr [0x013da774],EBP      ; 0044c53f | g_CameraShakeOffsetY
    CMP dword ptr [ESI + 0x11e4],0x0    ; 0044c545
        ;   Label: LAB_0044c545
    JZ 0x0044c731                       ; 0044c54c
        ;   XREF to: 0044c731 (CONDITIONAL_JUMP)  ; LAB_0044c731
    MOV ECX,0x619fd0                    ; 0044c552 | = "..\\core\\dcamera.cpp"
    MOV EBX,0x2e2                       ; 0044c557
    PUSH 0x619fe4                       ; 0044c55c | = "CDemonCamera::beginScene - Scene alre..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0044c561 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0044c567 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044c56d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0044c572
    PUSH EDI                            ; 0044c575
        ;   Label: LAB_0044c575
    PUSH ESI                            ; 0044c576
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0 ; 0044c577
        ;   XREF to: 0044c3e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,[0x0151a3a8]                ; 0044c57c | g_CameraScreenHeight
    ADD ESP,0x8                         ; 0044c581
    DEC EAX                             ; 0044c584
    PUSH EAX                            ; 0044c585
    MOV EAX,[0x0151a3a4]                ; 0044c586 | g_CameraScreenWidth
    DEC EAX                             ; 0044c58b
    PUSH EAX                            ; 0044c58c
    PUSH 0x0                            ; 0044c58d
    PUSH 0x0                            ; 0044c58f
    MOV EBP,dword ptr [0x006703ec]      ; 0044c591 | g_CDemonRendererPtr2
    PUSH EBP                            ; 0044c597 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 0044c598
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EAX,[0x013da770]                ; 0044c59d | g_CameraShakeOffsetX
    MOV EDX,dword ptr [0x02d02550]      ; 0044c5a2 | g_ViewportRightFixed
    MOV dword ptr [ESI + 0x11d4],0x0    ; 0044c5a8
    MOV ECX,dword ptr [0x02d02554]      ; 0044c5b2 | g_ViewportBottomFixed
    MOV dword ptr [ESI + 0x11d8],0x0    ; 0044c5b8
    ADD ESP,0x14                        ; 0044c5c2
    MOV EBX,dword ptr [ESI + 0x144]     ; 0044c5c5
    MOV dword ptr [ESI + 0x1d0],0x0     ; 0044c5cb
    SHL EAX,0x10                        ; 0044c5d5
    DEC EBX                             ; 0044c5d8
    ADD EDX,EAX                         ; 0044c5d9
    MOV dword ptr [ESI + 0x11dc],EBX    ; 0044c5db
    MOV EAX,[0x013da774]                ; 0044c5e1 | g_CameraShakeOffsetY
    MOV EBX,dword ptr [ESI + 0x148]     ; 0044c5e6
    SHL EAX,0x10                        ; 0044c5ec
    DEC EBX                             ; 0044c5ef
    SUB ECX,EAX                         ; 0044c5f0
    LEA EAX,[ESI + 0x4]                 ; 0044c5f2
    MOV dword ptr [ESI + 0x11e0],EBX    ; 0044c5f5
    PUSH EAX                            ; 0044c5fb
    MOV EBX,dword ptr [0x006703ec]      ; 0044c5fc | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESI + 0x168],EDI     ; 0044c602
    PUSH EBX                            ; 0044c608 | g_CDemonRendererInstance
    MOV dword ptr [0x02d02550],EDX      ; 0044c609 | g_ViewportRightFixed
    MOV dword ptr [0x02d02554],ECX      ; 0044c60f | g_ViewportBottomFixed
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 0044c615
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
    ADD ESP,0x8                         ; 0044c61a
    MOV EBP,dword ptr [0x006703ec]      ; 0044c61d | g_CDemonRendererPtr2
    PUSH dword ptr [ESI + 0x38]         ; 0044c623
    PUSH EBP                            ; 0044c626 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 0044c627
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0044c62c
    LEA EAX,[ESI + 0x10]                ; 0044c62f
    PUSH EAX                            ; 0044c632
    MOV EAX,[0x006703ec]                ; 0044c633 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0044c638 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 ; 0044c639
        ;   XREF to: 0048c200 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0044c63e
    TEST EDI,EDI                        ; 0044c641
    JNZ 0x0044c670                      ; 0044c643
        ;   XREF to: 0044c670 (CONDITIONAL_JUMP)  ; LAB_0044c670
    CMP dword ptr [0x03f6b878],0x0      ; 0044c645 | g_FullscreenMode
    JZ 0x0044c653                       ; 0044c64c
        ;   XREF to: 0044c653 (CONDITIONAL_JUMP)  ; LAB_0044c653
    CALL wincore_windll.cpp_beginScene_FUN_005b7280 ; 0044c64e
        ;   XREF to: 005b7280 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_beginScene_FUN_005b7280()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0044c653
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0044c653
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 0044c658
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    CMP dword ptr [0x02d03e94],0x0      ; 0044c65d | g_UseExternalRenderer
    JZ 0x0044c670                       ; 0044c664
        ;   XREF to: 0044c670 (CONDITIONAL_JUMP)  ; LAB_0044c670
    CALL wincore_windll.cpp_clear_FUN_005b7a30 ; 0044c666
        ;   XREF to: 005b7a30 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_clear_FUN_005b7a30()
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b7be0 ; 0044c66b
        ;   XREF to: 005b7be0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_clearZBuffer_FUN_005b7be0()
    PUSH ESI                            ; 0044c670
        ;   Label: LAB_0044c670
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0 ; 0044c671
        ;   XREF to: 0044d1c0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044c676
    POP EBP                             ; 0044c679
    POP EDI                             ; 0044c67a
    POP ESI                             ; 0044c67b
    POP EBX                             ; 0044c67c
    RET                                 ; 0044c67d
    MOV EBX,dword ptr [0x013da758]      ; 0044c67e | g_CameraShakeSustainTimer
        ;   Label: caseD_1
    MOV EAX,[0x02cf6a80]                ; 0044c684 | g_GlobalDeltaTimeInt
    SUB EBX,EAX                         ; 0044c689
    MOV dword ptr [0x013da758],EBX      ; 0044c68b | g_CameraShakeSustainTimer
    TEST EBX,EBX                        ; 0044c691
    JGE 0x0044c6b1                      ; 0044c693
        ;   XREF to: 0044c6b1 (CONDITIONAL_JUMP)  ; LAB_0044c6b1
    XOR EAX,EAX                         ; 0044c695
    MOV EDX,0x2                         ; 0044c697
    MOV [0x013da758],EAX                ; 0044c69c | g_CameraShakeSustainTimer
    MOV EAX,[0x013da764]                ; 0044c6a1 | g_CameraShakeDecayDuration
    MOV dword ptr [0x0066ed00],EDX      ; 0044c6a6 | g_CameraShakeState
    MOV [0x013da768],EAX                ; 0044c6ac | g_CameraShakeDecayTimer
    PUSH 0x619fbc                       ; 0044c6b1 | = "Sustain : "
        ;   Label: LAB_0044c6b1
    MOV ECX,dword ptr [0x0066e8e0]      ; 0044c6b6 | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 0044c6bc | g_CConsoleInstance
    MOV EBX,dword ptr [0x0066ecf8]      ; 0044c6bd | g_CameraShakePeakValue
    JMP 0x0044c4ae                      ; 0044c6c3
        ;   XREF to: 0044c4ae (UNCONDITIONAL_JUMP)  ; LAB_0044c4ae
    MOV EDX,dword ptr [0x013da768]      ; 0044c6c8 | g_CameraShakeDecayTimer
        ;   Label: caseD_2
    MOV EAX,[0x02cf6a80]                ; 0044c6ce | g_GlobalDeltaTimeInt
    SUB EDX,EAX                         ; 0044c6d3
    MOV dword ptr [0x013da768],EDX      ; 0044c6d5 | g_CameraShakeDecayTimer
    TEST EDX,EDX                        ; 0044c6db
    JL 0x0044c70d                       ; 0044c6dd
        ;   XREF to: 0044c70d (CONDITIONAL_JUMP)  ; LAB_0044c70d
    MOV EDX,dword ptr [0x013da764]      ; 0044c6df | g_CameraShakeDecayDuration
        ;   Label: LAB_0044c6df
    TEST EDX,EDX                        ; 0044c6e5
    JZ 0x0044c6fc                       ; 0044c6e7
        ;   XREF to: 0044c6fc (CONDITIONAL_JUMP)  ; LAB_0044c6fc
    MOV EAX,[0x0066ecf8]                ; 0044c6e9 | g_CameraShakePeakValue
    MOV EBX,EDX                         ; 0044c6ee
    MOV EDX,dword ptr [0x013da768]      ; 0044c6f0 | g_CameraShakeDecayTimer
    IMUL EDX                            ; 0044c6f6
    IDIV EBX                            ; 0044c6f8
    MOV EBX,EAX                         ; 0044c6fa
    PUSH 0x619fc7                       ; 0044c6fc | = "Decay : "
        ;   Label: LAB_0044c6fc
    MOV ECX,dword ptr [0x0066e8e0]      ; 0044c701 | g_CConsolePtr
    PUSH ECX                            ; 0044c707 | g_CConsoleInstance
    JMP 0x0044c4ae                      ; 0044c708
        ;   XREF to: 0044c4ae (UNCONDITIONAL_JUMP)  ; LAB_0044c4ae
    MOV EAX,0x3                         ; 0044c70d
        ;   Label: LAB_0044c70d
    MOV dword ptr [0x013da768],EBX      ; 0044c712 | g_CameraShakeDecayTimer
    MOV [0x0066ed00],EAX                ; 0044c718 | g_CameraShakeState
    JMP 0x0044c6df                      ; 0044c71d
        ;   XREF to: 0044c6df (UNCONDITIONAL_JUMP)  ; LAB_0044c6df
    CMP dword ptr [0x0066ed00],0x3      ; 0044c71f | g_CameraShakeState
        ;   Label: LAB_0044c71f
    JZ 0x0044c537                       ; 0044c726
        ;   XREF to: 0044c537 (CONDITIONAL_JUMP)  ; LAB_0044c537
    JMP 0x0044c545                      ; 0044c72c
        ;   XREF to: 0044c545 (UNCONDITIONAL_JUMP)  ; LAB_0044c545
    MOV dword ptr [ESI + 0x11e4],0x1    ; 0044c731
        ;   Label: LAB_0044c731
    JMP 0x0044c575                      ; 0044c73b
        ;   XREF to: 0044c575 (UNCONDITIONAL_JUMP)  ; LAB_0044c575

