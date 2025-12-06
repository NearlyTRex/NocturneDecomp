; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[11]:
;   core_msnedit.cpp_BeginAndEndScene_FUN_0053c970 at 0053c9b9
;   core_msnedit.cpp_FUN_0053b9f0 at 0053babf
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a322
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c221
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a76d
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b385
;   core_setedit.cpp_CDemonSet_FUN_00581aa0 at 00581c8f
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 005833eb
;   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 at 0057aaa2
;   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 at 0057fe18
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
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CConsole g_ConsolePtr
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
;   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
;   wincore_windll.cpp_clearZBuffer_FUN_005b7be0
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
    MOV EAX,[0x0066ed00]                ; 0044c43c | int g_CameraShakeState
    XOR EBX,EBX                         ; 0044c441
    CMP EAX,0x3                         ; 0044c443
    JA 0x0044c4b6                       ; 0044c446 | caseD_3
        ;   XREF to: 0044c4b6 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x44c420]  ; 0044c448 | void * PTR_caseD_3_0044c42c
        ;   Label: switchD
    MOV EBP,dword ptr [0x013da760]      ; 0044c44f | int g_CameraShakeAttackAccum
        ;   Label: caseD_0
    ADD EBP,dword ptr [0x02cf6a80]      ; 0044c455 | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x013da75c]      ; 0044c45b | int g_CameraShakeAttackTime
    MOV dword ptr [0x013da760],EBP      ; 0044c461 | int g_CameraShakeAttackAccum
    CMP EBP,EDX                         ; 0044c467
    JLE 0x0044c486                      ; 0044c469 | LAB_0044c486
        ;   XREF to: 0044c486 (CONDITIONAL_JUMP)
    MOV ECX,0x1                         ; 0044c46b
    MOV EAX,[0x0066ecfc]                ; 0044c470 | int g_CameraShakeSustainValue
    MOV dword ptr [0x013da760],EDX      ; 0044c475 | int g_CameraShakeAttackAccum
    MOV dword ptr [0x0066ed00],ECX      ; 0044c47b | int g_CameraShakeState
    MOV [0x013da758],EAX                ; 0044c481 | int g_CameraShakeSustainTimer
    MOV EBP,dword ptr [0x013da75c]      ; 0044c486 | int g_CameraShakeAttackTime
        ;   Label: LAB_0044c486
    TEST EBP,EBP                        ; 0044c48c
    JZ 0x0044c4a3                       ; 0044c48e | LAB_0044c4a3
        ;   XREF to: 0044c4a3 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x013da760]      ; 0044c490 | int g_CameraShakeAttackAccum
    MOV EAX,[0x0066ecf8]                ; 0044c496 | int g_CameraShakePeakValue
    MOV EBX,EBP                         ; 0044c49b
    IMUL EDX                            ; 0044c49d
    IDIV EBX                            ; 0044c49f
    MOV EBX,EAX                         ; 0044c4a1
    PUSH 0x619fb2                       ; 0044c4a3 | = "Attack : " | s_Attack_00619fb2 = Attack :
        ;   Label: LAB_0044c4a3
    MOV EAX,[0x0066e8e0]                ; 0044c4a8 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 0044c4ad | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0044c4ae | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   Label: LAB_0044c4ae
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044c4b3
    MOV EDX,dword ptr [0x02cf6a80]      ; 0044c4b6 | int g_GlobalDeltaTimeInt
        ;   Label: caseD_3
    MOV EAX,EBX                         ; 0044c4bc
    IMUL EDX                            ; 0044c4be
    SHRD EAX,EDX,0x10                   ; 0044c4c0
    MOV EDX,dword ptr [0x013da76c]      ; 0044c4c4 | int g_CameraShakeAccumulator
    ADD EDX,EAX                         ; 0044c4ca
    MOV dword ptr [0x013da76c],EDX      ; 0044c4cc | int g_CameraShakeAccumulator
    CMP EDX,0xffff                      ; 0044c4d2
    JLE 0x0044c527                      ; 0044c4d8 | LAB_0044c527
        ;   XREF to: 0044c527 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0044c4da | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x013da770]      ; 0044c4df | int g_CameraShakeOffsetX
    AND EAX,0x1                         ; 0044c4e5
    XOR EBX,EBX                         ; 0044c4e8
    MOV [0x013da770],EAX                ; 0044c4ea | int g_CameraShakeOffsetX
    MOV EAX,[0x02cf6a80]                ; 0044c4ef | int g_GlobalDeltaTimeInt
    MOV dword ptr [0x013da76c],EBX      ; 0044c4f4 | int g_CameraShakeAccumulator
    AND EAX,0x2                         ; 0044c4fa
    MOV EBX,dword ptr [0x013da774]      ; 0044c4fd | int g_CameraShakeOffsetY
    SAR EAX,0x1                         ; 0044c503
    MOV EBP,dword ptr [0x013da770]      ; 0044c505 | int g_CameraShakeOffsetX
    MOV [0x013da774],EAX                ; 0044c50b | int g_CameraShakeOffsetY
    CMP EDX,EBP                         ; 0044c510
    JNZ 0x0044c527                      ; 0044c512 | LAB_0044c527
        ;   XREF to: 0044c527 (CONDITIONAL_JUMP)
    CMP EBX,EAX                         ; 0044c514
    JNZ 0x0044c527                      ; 0044c516 | LAB_0044c527
        ;   XREF to: 0044c527 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 0044c518
    SETZ AL                             ; 0044c51a
    AND EAX,0xff                        ; 0044c51d
    MOV [0x013da774],EAX                ; 0044c522 | int g_CameraShakeOffsetY
    CMP dword ptr [ESI + 0x148],0x1e0   ; 0044c527
        ;   Label: LAB_0044c527
    JGE 0x0044c71f                      ; 0044c531 | LAB_0044c71f
        ;   XREF to: 0044c71f (CONDITIONAL_JUMP)
    XOR EBP,EBP                         ; 0044c537
        ;   Label: LAB_0044c537
    MOV dword ptr [0x013da770],EBP      ; 0044c539 | int g_CameraShakeOffsetX
    MOV dword ptr [0x013da774],EBP      ; 0044c53f | int g_CameraShakeOffsetY
    CMP dword ptr [ESI + 0x11e4],0x0    ; 0044c545
        ;   Label: LAB_0044c545
    JZ 0x0044c731                       ; 0044c54c | LAB_0044c731
        ;   XREF to: 0044c731 (CONDITIONAL_JUMP)
    MOV ECX,0x619fd0                    ; 0044c552 | = "..\\core\\dcamera.cpp" | s_core_dcamera_cpp_00619fd0 = ..\core\dcamera.cpp
    MOV EBX,0x2e2                       ; 0044c557
    PUSH 0x619fe4                       ; 0044c55c | = "CDemonCamera::beginScene - Scene alre..." | s_CDemonCamera_beginScene__00619fe4 = CDemonCamera::beginScene - Scene already open!
    MOV dword ptr [0x02f0ca48],ECX      ; 0044c561 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0044c567 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044c56d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044c572
    PUSH EDI                            ; 0044c575
        ;   Label: LAB_0044c575
    PUSH ESI                            ; 0044c576
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0 ; 0044c577 | void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(CDemonCamera * this_ptr, int skip_clear_buffers)
        ;   XREF to: 0044c3e0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0151a3a8]                ; 0044c57c | int g_CameraScreenHeight
    ADD ESP,0x8                         ; 0044c581
    DEC EAX                             ; 0044c584
    PUSH EAX                            ; 0044c585
    MOV EAX,[0x0151a3a4]                ; 0044c586 | int g_CameraScreenWidth
    DEC EAX                             ; 0044c58b
    PUSH EAX                            ; 0044c58c
    PUSH 0x0                            ; 0044c58d
    PUSH 0x0                            ; 0044c58f
    MOV EBP,dword ptr [0x006703ec]      ; 0044c591 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBP                            ; 0044c597 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 0044c598 | void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)
    MOV EAX,[0x013da770]                ; 0044c59d | int g_CameraShakeOffsetX
    MOV EDX,dword ptr [0x02d02550]      ; 0044c5a2 | int g_ViewportRightFixed
    MOV dword ptr [ESI + 0x11d4],0x0    ; 0044c5a8
    MOV ECX,dword ptr [0x02d02554]      ; 0044c5b2 | int g_ViewportBottomFixed
    MOV dword ptr [ESI + 0x11d8],0x0    ; 0044c5b8
    ADD ESP,0x14                        ; 0044c5c2
    MOV EBX,dword ptr [ESI + 0x144]     ; 0044c5c5
    MOV dword ptr [ESI + 0x1d0],0x0     ; 0044c5cb
    SHL EAX,0x10                        ; 0044c5d5
    DEC EBX                             ; 0044c5d8
    ADD EDX,EAX                         ; 0044c5d9
    MOV dword ptr [ESI + 0x11dc],EBX    ; 0044c5db
    MOV EAX,[0x013da774]                ; 0044c5e1 | int g_CameraShakeOffsetY
    MOV EBX,dword ptr [ESI + 0x148]     ; 0044c5e6
    SHL EAX,0x10                        ; 0044c5ec
    DEC EBX                             ; 0044c5ef
    SUB ECX,EAX                         ; 0044c5f0
    LEA EAX,[ESI + 0x4]                 ; 0044c5f2
    MOV dword ptr [ESI + 0x11e0],EBX    ; 0044c5f5
    PUSH EAX                            ; 0044c5fb
    MOV EBX,dword ptr [0x006703ec]      ; 0044c5fc | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    MOV dword ptr [ESI + 0x168],EDI     ; 0044c602
    PUSH EBX                            ; 0044c608 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [0x02d02550],EDX      ; 0044c609 | int g_ViewportRightFixed
    MOV dword ptr [0x02d02554],ECX      ; 0044c60f | int g_ViewportBottomFixed
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 0044c615 | void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044c61a
    MOV EBP,dword ptr [0x006703ec]      ; 0044c61d | CDemonRenderer * g_CDemonRendererPtr
    PUSH dword ptr [ESI + 0x38]         ; 0044c623
    PUSH EBP                            ; 0044c626 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 0044c627 | void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044c62c
    LEA EAX,[ESI + 0x10]                ; 0044c62f
    PUSH EAX                            ; 0044c632
    MOV EAX,[0x006703ec]                ; 0044c633 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 0044c638 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 ; 0044c639 | void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix, CVector3f * rotation_angles)
        ;   XREF to: 0048c200 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0044c63e
    TEST EDI,EDI                        ; 0044c641
    JNZ 0x0044c670                      ; 0044c643 | LAB_0044c670
        ;   XREF to: 0044c670 (CONDITIONAL_JUMP)
    CMP dword ptr [0x03f6b878],0x0      ; 0044c645 | int g_FullscreenMode
    JZ 0x0044c653                       ; 0044c64c | LAB_0044c653
        ;   XREF to: 0044c653 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_beginScene_FUN_005b7280 ; 0044c64e | int wincore_windll.cpp_beginScene_FUN_005b7280()
        ;   XREF to: 005b7280 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0044c653 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0044c653
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0044c658 | void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
    CMP dword ptr [0x02d03e94],0x0      ; 0044c65d | int g_UseExternalRenderer
    JZ 0x0044c670                       ; 0044c664 | LAB_0044c670
        ;   XREF to: 0044c670 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clear_FUN_005b7a30 ; 0044c666 | int wincore_windll.cpp_clear_FUN_005b7a30()
        ;   XREF to: 005b7a30 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b7be0 ; 0044c66b | int wincore_windll.cpp_clearZBuffer_FUN_005b7be0()
        ;   XREF to: 005b7be0 (UNCONDITIONAL_CALL)
    PUSH ESI                            ; 0044c670
        ;   Label: LAB_0044c670
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0 ; 0044c671 | void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera * this_ptr)
        ;   XREF to: 0044d1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044c676
    POP EBP                             ; 0044c679
    POP EDI                             ; 0044c67a
    POP ESI                             ; 0044c67b
    POP EBX                             ; 0044c67c
    RET                                 ; 0044c67d
    MOV EBX,dword ptr [0x013da758]      ; 0044c67e | int g_CameraShakeSustainTimer
        ;   Label: caseD_1
    MOV EAX,[0x02cf6a80]                ; 0044c684 | int g_GlobalDeltaTimeInt
    SUB EBX,EAX                         ; 0044c689
    MOV dword ptr [0x013da758],EBX      ; 0044c68b | int g_CameraShakeSustainTimer
    TEST EBX,EBX                        ; 0044c691
    JGE 0x0044c6b1                      ; 0044c693 | LAB_0044c6b1
        ;   XREF to: 0044c6b1 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0044c695
    MOV EDX,0x2                         ; 0044c697
    MOV [0x013da758],EAX                ; 0044c69c | int g_CameraShakeSustainTimer
    MOV EAX,[0x013da764]                ; 0044c6a1 | int g_CameraShakeDecayDuration
    MOV dword ptr [0x0066ed00],EDX      ; 0044c6a6 | int g_CameraShakeState
    MOV [0x013da768],EAX                ; 0044c6ac | int g_CameraShakeDecayTimer
    PUSH 0x619fbc                       ; 0044c6b1 | = "Sustain : " | s_Sustain_00619fbc = Sustain :
        ;   Label: LAB_0044c6b1
    MOV ECX,dword ptr [0x0066e8e0]      ; 0044c6b6 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 0044c6bc | CConsole g_ConsolePtr
    MOV EBX,dword ptr [0x0066ecf8]      ; 0044c6bd | int g_CameraShakePeakValue
    JMP 0x0044c4ae                      ; 0044c6c3 | LAB_0044c4ae
        ;   XREF to: 0044c4ae (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x013da768]      ; 0044c6c8 | int g_CameraShakeDecayTimer
        ;   Label: caseD_2
    MOV EAX,[0x02cf6a80]                ; 0044c6ce | int g_GlobalDeltaTimeInt
    SUB EDX,EAX                         ; 0044c6d3
    MOV dword ptr [0x013da768],EDX      ; 0044c6d5 | int g_CameraShakeDecayTimer
    TEST EDX,EDX                        ; 0044c6db
    JL 0x0044c70d                       ; 0044c6dd | LAB_0044c70d
        ;   XREF to: 0044c70d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x013da764]      ; 0044c6df | int g_CameraShakeDecayDuration
        ;   Label: LAB_0044c6df
    TEST EDX,EDX                        ; 0044c6e5
    JZ 0x0044c6fc                       ; 0044c6e7 | LAB_0044c6fc
        ;   XREF to: 0044c6fc (CONDITIONAL_JUMP)
    MOV EAX,[0x0066ecf8]                ; 0044c6e9 | int g_CameraShakePeakValue
    MOV EBX,EDX                         ; 0044c6ee
    MOV EDX,dword ptr [0x013da768]      ; 0044c6f0 | int g_CameraShakeDecayTimer
    IMUL EDX                            ; 0044c6f6
    IDIV EBX                            ; 0044c6f8
    MOV EBX,EAX                         ; 0044c6fa
    PUSH 0x619fc7                       ; 0044c6fc | = "Decay : " | s_Decay_00619fc7 = Decay :
        ;   Label: LAB_0044c6fc
    MOV ECX,dword ptr [0x0066e8e0]      ; 0044c701 | CConsole * g_CConsolePtr
    PUSH ECX                            ; 0044c707 | CConsole g_ConsolePtr
    JMP 0x0044c4ae                      ; 0044c708 | LAB_0044c4ae
        ;   XREF to: 0044c4ae (UNCONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 0044c70d
        ;   Label: LAB_0044c70d
    MOV dword ptr [0x013da768],EBX      ; 0044c712 | int g_CameraShakeDecayTimer
    MOV [0x0066ed00],EAX                ; 0044c718 | int g_CameraShakeState
    JMP 0x0044c6df                      ; 0044c71d | LAB_0044c6df
        ;   XREF to: 0044c6df (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0066ed00],0x3      ; 0044c71f | int g_CameraShakeState
        ;   Label: LAB_0044c71f
    JZ 0x0044c537                       ; 0044c726 | LAB_0044c537
        ;   XREF to: 0044c537 (CONDITIONAL_JUMP)
    JMP 0x0044c545                      ; 0044c72c | LAB_0044c545
        ;   XREF to: 0044c545 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x11e4],0x1    ; 0044c731
        ;   Label: LAB_0044c731
    JMP 0x0044c575                      ; 0044c73b | LAB_0044c575
        ;   XREF to: 0044c575 (UNCONDITIONAL_JUMP)

