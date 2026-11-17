; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[3]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0054e6a0 at 0054e99d
;   core_set.cpp_CDemonSet_renderScene_FUN_00550580 at 00550601
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f739
;
; Referenced Globals:
;   void* PTR_caseD_3_0044ceac = 0044cf36
;   TerminatedCString s_Attack_005d75a7
;   TerminatedCString s_Sustain_005d75b1
;   TerminatedCString s_Decay_005d75bc
;   TerminatedCString s_core_dcamera_cpp_005d75c5
;   TerminatedCString s_CDemonCamera_beginScene_005d75d9
;   CConsole* g_CConsolePtr = 007db5f0
;   int g_CameraShakePeakValue = 0x10000
;   int g_CameraShakeSustainValue = 0xc80000
;   int g_CameraShakeState = 0x3
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   CConsole g_CConsoleInstance
;   int g_CameraShakeSustainTimer
;   int g_CameraShakeAttackTime
;   int g_CameraShakeAttackAccum
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
;   engine_special.cpp_beginScene_FUN_00581fe0
;   engine_special.cpp_clear_FUN_00582790
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   engine_special.cpp_clearZBuffer_FUN_00582940
;   engine_special.cpp_clearZBufferNative_FUN_0057dca4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ceb0
        ;   Label: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0
    PUSH ESI                            ; 0044ceb1
    PUSH EDI                            ; 0044ceb2
    PUSH EBP                            ; 0044ceb3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044ceb4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044ceb8
    MOV EAX,[0x0061122c]                ; 0044cebc | g_CameraShakeState
    XOR EBX,EBX                         ; 0044cec1
    CMP EAX,0x3                         ; 0044cec3
    JA 0x0044cf36                       ; 0044cec6
        ;   XREF to: 0044cf36 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x44cea0]  ; 0044cec8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [0x01342208]      ; 0044cecf | g_CameraShakeAttackAccum
        ;   Label: caseD_0
    ADD EBP,dword ptr [0x01c43530]      ; 0044ced5 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x01342204]      ; 0044cedb | g_CameraShakeAttackTime
    MOV dword ptr [0x01342208],EBP      ; 0044cee1 | g_CameraShakeAttackAccum
    CMP EBP,EDX                         ; 0044cee7
    JLE 0x0044cf06                      ; 0044cee9
        ;   XREF to: 0044cf06 (CONDITIONAL_JUMP)  ; LAB_0044cf06
    MOV ECX,0x1                         ; 0044ceeb
    MOV EAX,[0x00611228]                ; 0044cef0 | g_CameraShakeSustainValue
    MOV dword ptr [0x01342208],EDX      ; 0044cef5 | g_CameraShakeAttackAccum
    MOV dword ptr [0x0061122c],ECX      ; 0044cefb | g_CameraShakeState
    MOV [0x01342200],EAX                ; 0044cf01 | g_CameraShakeSustainTimer
    MOV EBP,dword ptr [0x01342204]      ; 0044cf06 | g_CameraShakeAttackTime
        ;   Label: LAB_0044cf06
    TEST EBP,EBP                        ; 0044cf0c
    JZ 0x0044cf23                       ; 0044cf0e
        ;   XREF to: 0044cf23 (CONDITIONAL_JUMP)  ; LAB_0044cf23
    MOV EDX,dword ptr [0x01342208]      ; 0044cf10 | g_CameraShakeAttackAccum
    MOV EAX,[0x00611224]                ; 0044cf16 | g_CameraShakePeakValue
    MOV EBX,EBP                         ; 0044cf1b
    IMUL EDX                            ; 0044cf1d
    IDIV EBX                            ; 0044cf1f
    MOV EBX,EAX                         ; 0044cf21
    PUSH 0x5d75a7                       ; 0044cf23 | = "Attack : "
        ;   Label: LAB_0044cf23
    MOV EAX,[0x00611100]                ; 0044cf28 | g_CConsolePtr
    PUSH EAX                            ; 0044cf2d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0044cf2e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
        ;   Label: LAB_0044cf2e
    ADD ESP,0x8                         ; 0044cf33
    MOV EDX,dword ptr [0x01c43530]      ; 0044cf36 | g_GlobalDeltaTimeInt
        ;   Label: caseD_3
    MOV EAX,EBX                         ; 0044cf3c
    IMUL EDX                            ; 0044cf3e
    SHRD EAX,EDX,0x10                   ; 0044cf40
    MOV EDX,dword ptr [0x01342214]      ; 0044cf44 | g_CameraShakeAccumulator
    ADD EDX,EAX                         ; 0044cf4a
    MOV dword ptr [0x01342214],EDX      ; 0044cf4c | g_CameraShakeAccumulator
    CMP EDX,0xffff                      ; 0044cf52
    JLE 0x0044cfa7                      ; 0044cf58
        ;   XREF to: 0044cfa7 (CONDITIONAL_JUMP)  ; LAB_0044cfa7
    MOV EAX,[0x01c43530]                ; 0044cf5a | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x01342218]      ; 0044cf5f | g_CameraShakeOffsetX
    AND EAX,0x1                         ; 0044cf65
    XOR EBX,EBX                         ; 0044cf68
    MOV [0x01342218],EAX                ; 0044cf6a | g_CameraShakeOffsetX
    MOV EAX,[0x01c43530]                ; 0044cf6f | g_GlobalDeltaTimeInt
    MOV dword ptr [0x01342214],EBX      ; 0044cf74 | g_CameraShakeAccumulator
    AND EAX,0x2                         ; 0044cf7a
    MOV EBX,dword ptr [0x0134221c]      ; 0044cf7d | g_CameraShakeOffsetY
    SAR EAX,0x1                         ; 0044cf83
    MOV EBP,dword ptr [0x01342218]      ; 0044cf85 | g_CameraShakeOffsetX
    MOV [0x0134221c],EAX                ; 0044cf8b | g_CameraShakeOffsetY
    CMP EDX,EBP                         ; 0044cf90
    JNZ 0x0044cfa7                      ; 0044cf92
        ;   XREF to: 0044cfa7 (CONDITIONAL_JUMP)  ; LAB_0044cfa7
    CMP EBX,EAX                         ; 0044cf94
    JNZ 0x0044cfa7                      ; 0044cf96
        ;   XREF to: 0044cfa7 (CONDITIONAL_JUMP)  ; LAB_0044cfa7
    TEST EAX,EAX                        ; 0044cf98
    SETZ AL                             ; 0044cf9a
    AND EAX,0xff                        ; 0044cf9d
    MOV [0x0134221c],EAX                ; 0044cfa2 | g_CameraShakeOffsetY
    CMP dword ptr [ESI + 0x148],0x1e0   ; 0044cfa7
        ;   Label: LAB_0044cfa7
    JGE 0x0044d1a1                      ; 0044cfb1
        ;   XREF to: 0044d1a1 (CONDITIONAL_JUMP)  ; LAB_0044d1a1
    XOR EBP,EBP                         ; 0044cfb7
        ;   Label: LAB_0044cfb7
    MOV dword ptr [0x01342218],EBP      ; 0044cfb9 | g_CameraShakeOffsetX
    MOV dword ptr [0x0134221c],EBP      ; 0044cfbf | g_CameraShakeOffsetY
    CMP dword ptr [ESI + 0x11e4],0x0    ; 0044cfc5
        ;   Label: LAB_0044cfc5
    JZ 0x0044d1b3                       ; 0044cfcc
        ;   XREF to: 0044d1b3 (CONDITIONAL_JUMP)  ; LAB_0044d1b3
    MOV ECX,0x5d75c5                    ; 0044cfd2 | = "..\\core\\dcamera.cpp"
    MOV EBX,0x2eb                       ; 0044cfd7
    PUSH 0x5d75d9                       ; 0044cfdc | = "CDemonCamera::beginScene - Scene alre..."
    MOV dword ptr [0x01d1d400],ECX      ; 0044cfe1 | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0044cfe7 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0044cfed
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 0044cff2
    PUSH EDI                            ; 0044cff5
        ;   Label: LAB_0044cff5
    PUSH ESI                            ; 0044cff6
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60 ; 0044cff7
        ;   XREF to: 0044ce60 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,dword ptr [ESI + 0x148]     ; 0044cffc
    ADD ESP,0x8                         ; 0044d002
    DEC EAX                             ; 0044d005
    PUSH EAX                            ; 0044d006
    MOV EAX,dword ptr [ESI + 0x144]     ; 0044d007
    DEC EAX                             ; 0044d00d
    PUSH EAX                            ; 0044d00e
    PUSH 0x0                            ; 0044d00f
    PUSH 0x0                            ; 0044d011
    MOV EBP,dword ptr [0x00612560]      ; 0044d013 | g_CDemonRenderer_PTR_00612560
    PUSH EBP                            ; 0044d019 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10 ; 0044d01a
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EAX,[0x01342218]                ; 0044d01f | g_CameraShakeOffsetX
    MOV EDX,dword ptr [0x01c4f000]      ; 0044d024 | g_INT_01c4f000
    MOV dword ptr [ESI + 0x11d4],0x0    ; 0044d02a
    MOV ECX,dword ptr [0x01c4f004]      ; 0044d034 | g_INT_01c4f004
    MOV dword ptr [ESI + 0x11d8],0x0    ; 0044d03a
    ADD ESP,0x14                        ; 0044d044
    MOV EBX,dword ptr [ESI + 0x144]     ; 0044d047
    MOV dword ptr [ESI + 0x1d0],0x0     ; 0044d04d
    SHL EAX,0x10                        ; 0044d057
    DEC EBX                             ; 0044d05a
    ADD EDX,EAX                         ; 0044d05b
    MOV dword ptr [ESI + 0x11dc],EBX    ; 0044d05d
    MOV EAX,[0x0134221c]                ; 0044d063 | g_CameraShakeOffsetY
    MOV EBX,dword ptr [ESI + 0x148]     ; 0044d068
    SHL EAX,0x10                        ; 0044d06e
    DEC EBX                             ; 0044d071
    SUB ECX,EAX                         ; 0044d072
    LEA EAX,[ESI + 0x4]                 ; 0044d074
    MOV dword ptr [ESI + 0x11e0],EBX    ; 0044d077
    PUSH EAX                            ; 0044d07d
    MOV EBX,dword ptr [0x00612560]      ; 0044d07e | g_CDemonRenderer_PTR_00612560
    MOV dword ptr [ESI + 0x168],EDI     ; 0044d084
    PUSH EBX                            ; 0044d08a | g_CDemonRenderer_01bc120c
    MOV dword ptr [0x01c4f000],EDX      ; 0044d08b | g_INT_01c4f000
    MOV dword ptr [0x01c4f004],ECX      ; 0044d091 | g_INT_01c4f004
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 0044d097
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0044d09c
    MOV EBP,dword ptr [0x00612560]      ; 0044d09f | g_CDemonRenderer_PTR_00612560
    PUSH dword ptr [ESI + 0x38]         ; 0044d0a5
    PUSH EBP                            ; 0044d0a8 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0 ; 0044d0a9
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0044d0ae
    LEA EAX,[ESI + 0x10]                ; 0044d0b1
    PUSH EAX                            ; 0044d0b4
    MOV EAX,[0x00612560]                ; 0044d0b5 | g_CDemonRenderer_PTR_00612560
    PUSH EAX                            ; 0044d0ba | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560 ; 0044d0bb
        ;   XREF to: 00483560 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0044d0c0
    TEST EDI,EDI                        ; 0044d0c3
    JNZ 0x0044d0f2                      ; 0044d0c5
        ;   XREF to: 0044d0f2 (CONDITIONAL_JUMP)  ; LAB_0044d0f2
    CMP dword ptr [0x02c83370],0x0      ; 0044d0c7 | g_INT_02c83370
    JZ 0x0044d0d5                       ; 0044d0ce
        ;   XREF to: 0044d0d5 (CONDITIONAL_JUMP)  ; LAB_0044d0d5
    CALL engine_special.cpp_beginScene_FUN_00581fe0 ; 0044d0d0
        ;   XREF to: 00581fe0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_beginScene_FUN_00581fe0()
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0044d0d5
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_0044d0d5
    CALL engine_special.cpp_clearZBufferNative_FUN_0057dca4 ; 0044d0da
        ;   XREF to: 0057dca4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0057dca4()
    CMP dword ptr [0x01c50948],0x0      ; 0044d0df | g_INT_01c50948
    JZ 0x0044d0f2                       ; 0044d0e6
        ;   XREF to: 0044d0f2 (CONDITIONAL_JUMP)  ; LAB_0044d0f2
    CALL engine_special.cpp_clear_FUN_00582790 ; 0044d0e8
        ;   XREF to: 00582790 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clear_FUN_00582790()
    CALL engine_special.cpp_clearZBuffer_FUN_00582940 ; 0044d0ed
        ;   XREF to: 00582940 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clearZBuffer_FUN_00582940()
    PUSH ESI                            ; 0044d0f2
        ;   Label: LAB_0044d0f2
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90 ; 0044d0f3
        ;   XREF to: 0044dc90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044d0f8
    POP EBP                             ; 0044d0fb
    POP EDI                             ; 0044d0fc
    POP ESI                             ; 0044d0fd
    POP EBX                             ; 0044d0fe
    RET                                 ; 0044d0ff
    MOV EBX,dword ptr [0x01342200]      ; 0044d100 | g_CameraShakeSustainTimer
        ;   Label: caseD_1
    MOV EAX,[0x01c43530]                ; 0044d106 | g_GlobalDeltaTimeInt
    SUB EBX,EAX                         ; 0044d10b
    MOV dword ptr [0x01342200],EBX      ; 0044d10d | g_CameraShakeSustainTimer
    TEST EBX,EBX                        ; 0044d113
    JGE 0x0044d133                      ; 0044d115
        ;   XREF to: 0044d133 (CONDITIONAL_JUMP)  ; LAB_0044d133
    XOR EAX,EAX                         ; 0044d117
    MOV EDX,0x2                         ; 0044d119
    MOV [0x01342200],EAX                ; 0044d11e | g_CameraShakeSustainTimer
    MOV EAX,[0x0134220c]                ; 0044d123 | g_CameraShakeDecayDuration
    MOV dword ptr [0x0061122c],EDX      ; 0044d128 | g_CameraShakeState
    MOV [0x01342210],EAX                ; 0044d12e | g_CameraShakeDecayTimer
    PUSH 0x5d75b1                       ; 0044d133 | = "Sustain : "
        ;   Label: LAB_0044d133
    MOV ECX,dword ptr [0x00611100]      ; 0044d138 | g_CConsolePtr
    PUSH ECX                            ; 0044d13e | g_CConsoleInstance
    MOV EBX,dword ptr [0x00611224]      ; 0044d13f | g_CameraShakePeakValue
    JMP 0x0044cf2e                      ; 0044d145
        ;   XREF to: 0044cf2e (UNCONDITIONAL_JUMP)  ; LAB_0044cf2e
    MOV EDX,dword ptr [0x01342210]      ; 0044d14a | g_CameraShakeDecayTimer
        ;   Label: caseD_2
    MOV EAX,[0x01c43530]                ; 0044d150 | g_GlobalDeltaTimeInt
    SUB EDX,EAX                         ; 0044d155
    MOV dword ptr [0x01342210],EDX      ; 0044d157 | g_CameraShakeDecayTimer
    TEST EDX,EDX                        ; 0044d15d
    JL 0x0044d18f                       ; 0044d15f
        ;   XREF to: 0044d18f (CONDITIONAL_JUMP)  ; LAB_0044d18f
    MOV EDX,dword ptr [0x0134220c]      ; 0044d161 | g_CameraShakeDecayDuration
        ;   Label: LAB_0044d161
    TEST EDX,EDX                        ; 0044d167
    JZ 0x0044d17e                       ; 0044d169
        ;   XREF to: 0044d17e (CONDITIONAL_JUMP)  ; LAB_0044d17e
    MOV EAX,[0x00611224]                ; 0044d16b | g_CameraShakePeakValue
    MOV EBX,EDX                         ; 0044d170
    MOV EDX,dword ptr [0x01342210]      ; 0044d172 | g_CameraShakeDecayTimer
    IMUL EDX                            ; 0044d178
    IDIV EBX                            ; 0044d17a
    MOV EBX,EAX                         ; 0044d17c
    PUSH 0x5d75bc                       ; 0044d17e | = "Decay : "
        ;   Label: LAB_0044d17e
    MOV ECX,dword ptr [0x00611100]      ; 0044d183 | g_CConsolePtr
    PUSH ECX                            ; 0044d189 | g_CConsoleInstance
    JMP 0x0044cf2e                      ; 0044d18a
        ;   XREF to: 0044cf2e (UNCONDITIONAL_JUMP)  ; LAB_0044cf2e
    MOV EAX,0x3                         ; 0044d18f
        ;   Label: LAB_0044d18f
    MOV dword ptr [0x01342210],EBX      ; 0044d194 | g_CameraShakeDecayTimer
    MOV [0x0061122c],EAX                ; 0044d19a | g_CameraShakeState
    JMP 0x0044d161                      ; 0044d19f
        ;   XREF to: 0044d161 (UNCONDITIONAL_JUMP)  ; LAB_0044d161
    CMP dword ptr [0x0061122c],0x3      ; 0044d1a1 | g_CameraShakeState
        ;   Label: LAB_0044d1a1
    JZ 0x0044cfb7                       ; 0044d1a8
        ;   XREF to: 0044cfb7 (CONDITIONAL_JUMP)  ; LAB_0044cfb7
    JMP 0x0044cfc5                      ; 0044d1ae
        ;   XREF to: 0044cfc5 (UNCONDITIONAL_JUMP)  ; LAB_0044cfc5
    MOV dword ptr [ESI + 0x11e4],0x1    ; 0044d1b3
        ;   Label: LAB_0044d1b3
    JMP 0x0044cff5                      ; 0044d1bd
        ;   XREF to: 0044cff5 (UNCONDITIONAL_JUMP)  ; LAB_0044cff5

