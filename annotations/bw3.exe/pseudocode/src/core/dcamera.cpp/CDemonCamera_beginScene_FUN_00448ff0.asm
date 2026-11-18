; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[3]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00533e60 at 0053415d
;   core_set.cpp_CDemonSet_renderScene_FUN_00535da0 at 00535e21
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534ef9
;
; Referenced Globals:
;   void* PTR_caseD_3_00448fec = 00449076
;   TerminatedCString s_Attack_005b9c0e
;   TerminatedCString s_Sustain_005b9c18
;   TerminatedCString s_Decay_005b9c23
;   TerminatedCString s_core_dcamera_cpp_005b9c2c
;   TerminatedCString s_CDemonCamera_beginScene_005b9c40
;   CConsole* g_CConsolePtr = 007f7ea4
;   int g_CameraShakePeakValue = 0x10000
;   int g_CameraShakeSustainValue = 0xc80000
;   int g_CameraShakeState = 0x3
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   CConsole g_CConsoleInstance
;   int g_CameraShakeSustainTimer
;   int g_CameraShakeAttackTime
;   int g_CameraShakeAttackAccum
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00448fa0
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
;   engine_special.cpp_beginScene_FUN_005658b0
;   engine_special.cpp_clear_FUN_00566060
;   engine_special.cpp_clearScreen_FUN_00560d70
;   engine_special.cpp_clearZBuffer_FUN_00566210
;   engine_special.cpp_clearZBufferNative_FUN_00560dd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448ff0
        ;   Label: core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0
    PUSH ESI                            ; 00448ff1
    PUSH EDI                            ; 00448ff2
    PUSH EBP                            ; 00448ff3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00448ff4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00448ff8
    MOV EAX,[0x005f17e0]                ; 00448ffc | g_CameraShakeState
    XOR EBX,EBX                         ; 00449001
    CMP EAX,0x3                         ; 00449003
    JA 0x00449076                       ; 00449006
        ;   XREF to: 00449076 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x448fe0]  ; 00449008 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [0x0135eab8]      ; 0044900f | g_CameraShakeAttackAccum
        ;   Label: caseD_0
    ADD EBP,dword ptr [0x01c5fad0]      ; 00449015 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x0135eab4]      ; 0044901b | g_CameraShakeAttackTime
    MOV dword ptr [0x0135eab8],EBP      ; 00449021 | g_CameraShakeAttackAccum
    CMP EBP,EDX                         ; 00449027
    JLE 0x00449046                      ; 00449029
        ;   XREF to: 00449046 (CONDITIONAL_JUMP)  ; LAB_00449046
    MOV ECX,0x1                         ; 0044902b
    MOV EAX,[0x005f17dc]                ; 00449030 | g_CameraShakeSustainValue
    MOV dword ptr [0x0135eab8],EDX      ; 00449035 | g_CameraShakeAttackAccum
    MOV dword ptr [0x005f17e0],ECX      ; 0044903b | g_CameraShakeState
    MOV [0x0135eab0],EAX                ; 00449041 | g_CameraShakeSustainTimer
    MOV EBP,dword ptr [0x0135eab4]      ; 00449046 | g_CameraShakeAttackTime
        ;   Label: LAB_00449046
    TEST EBP,EBP                        ; 0044904c
    JZ 0x00449063                       ; 0044904e
        ;   XREF to: 00449063 (CONDITIONAL_JUMP)  ; LAB_00449063
    MOV EDX,dword ptr [0x0135eab8]      ; 00449050 | g_CameraShakeAttackAccum
    MOV EAX,[0x005f17d8]                ; 00449056 | g_CameraShakePeakValue
    MOV EBX,EBP                         ; 0044905b
    IMUL EDX                            ; 0044905d
    IDIV EBX                            ; 0044905f
    MOV EBX,EAX                         ; 00449061
    PUSH 0x5b9c0e                       ; 00449063 | = "Attack : "
        ;   Label: LAB_00449063
    MOV EAX,[0x005f1690]                ; 00449068 | g_CConsolePtr
    PUSH EAX                            ; 0044906d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0044906e
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
        ;   Label: LAB_0044906e
    ADD ESP,0x8                         ; 00449073
    MOV EDX,dword ptr [0x01c5fad0]      ; 00449076 | g_GlobalDeltaTimeInt
        ;   Label: caseD_3
    MOV EAX,EBX                         ; 0044907c
    IMUL EDX                            ; 0044907e
    SHRD EAX,EDX,0x10                   ; 00449080
    MOV EDX,dword ptr [0x0135eac4]      ; 00449084 | g_CameraShakeAccumulator
    ADD EDX,EAX                         ; 0044908a
    MOV dword ptr [0x0135eac4],EDX      ; 0044908c | g_CameraShakeAccumulator
    CMP EDX,0xffff                      ; 00449092
    JLE 0x004490e7                      ; 00449098
        ;   XREF to: 004490e7 (CONDITIONAL_JUMP)  ; LAB_004490e7
    MOV EAX,[0x01c5fad0]                ; 0044909a | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x0135eac8]      ; 0044909f | g_CameraShakeOffsetX
    AND EAX,0x1                         ; 004490a5
    XOR EBX,EBX                         ; 004490a8
    MOV [0x0135eac8],EAX                ; 004490aa | g_CameraShakeOffsetX
    MOV EAX,[0x01c5fad0]                ; 004490af | g_GlobalDeltaTimeInt
    MOV dword ptr [0x0135eac4],EBX      ; 004490b4 | g_CameraShakeAccumulator
    AND EAX,0x2                         ; 004490ba
    MOV EBX,dword ptr [0x0135eacc]      ; 004490bd | g_CameraShakeOffsetY
    SAR EAX,0x1                         ; 004490c3
    MOV EBP,dword ptr [0x0135eac8]      ; 004490c5 | g_CameraShakeOffsetX
    MOV [0x0135eacc],EAX                ; 004490cb | g_CameraShakeOffsetY
    CMP EDX,EBP                         ; 004490d0
    JNZ 0x004490e7                      ; 004490d2
        ;   XREF to: 004490e7 (CONDITIONAL_JUMP)  ; LAB_004490e7
    CMP EBX,EAX                         ; 004490d4
    JNZ 0x004490e7                      ; 004490d6
        ;   XREF to: 004490e7 (CONDITIONAL_JUMP)  ; LAB_004490e7
    TEST EAX,EAX                        ; 004490d8
    SETZ AL                             ; 004490da
    AND EAX,0xff                        ; 004490dd
    MOV [0x0135eacc],EAX                ; 004490e2 | g_CameraShakeOffsetY
    CMP dword ptr [ESI + 0x148],0x1e0   ; 004490e7
        ;   Label: LAB_004490e7
    JGE 0x004492e1                      ; 004490f1
        ;   XREF to: 004492e1 (CONDITIONAL_JUMP)  ; LAB_004492e1
    XOR EBP,EBP                         ; 004490f7
        ;   Label: LAB_004490f7
    MOV dword ptr [0x0135eac8],EBP      ; 004490f9 | g_CameraShakeOffsetX
    MOV dword ptr [0x0135eacc],EBP      ; 004490ff | g_CameraShakeOffsetY
    CMP dword ptr [ESI + 0x11e4],0x0    ; 00449105
        ;   Label: LAB_00449105
    JZ 0x004492f3                       ; 0044910c
        ;   XREF to: 004492f3 (CONDITIONAL_JUMP)  ; LAB_004492f3
    MOV ECX,0x5b9c2c                    ; 00449112 | = "..\\core\\dcamera.cpp"
    MOV EBX,0x2eb                       ; 00449117
    PUSH 0x5b9c40                       ; 0044911c | = "CDemonCamera::beginScene - Scene alre..."
    MOV dword ptr [0x01d71de0],ECX      ; 00449121 | g_CHAR_PTR_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00449127 | g_INT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 0044912d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 00449132
    PUSH EDI                            ; 00449135
        ;   Label: LAB_00449135
    PUSH ESI                            ; 00449136
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00448fa0 ; 00449137
        ;   XREF to: 00448fa0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00448fa0(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,dword ptr [ESI + 0x148]     ; 0044913c
    ADD ESP,0x8                         ; 00449142
    DEC EAX                             ; 00449145
    PUSH EAX                            ; 00449146
    MOV EAX,dword ptr [ESI + 0x144]     ; 00449147
    DEC EAX                             ; 0044914d
    PUSH EAX                            ; 0044914e
    PUSH 0x0                            ; 0044914f
    PUSH 0x0                            ; 00449151
    MOV EBP,dword ptr [0x005f2afc]      ; 00449153 | g_CDemonRenderer_PTR_005f2afc
    PUSH EBP                            ; 00449159 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0 ; 0044915a
        ;   XREF to: 0046d2f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EAX,[0x0135eac8]                ; 0044915f | g_CameraShakeOffsetX
    MOV EDX,dword ptr [0x01c6b5a0]      ; 00449164 | g_INT_01c6b5a0
    MOV dword ptr [ESI + 0x11d4],0x0    ; 0044916a
    MOV ECX,dword ptr [0x01c6b5a4]      ; 00449174 | g_INT_01c6b5a4
    MOV dword ptr [ESI + 0x11d8],0x0    ; 0044917a
    ADD ESP,0x14                        ; 00449184
    MOV EBX,dword ptr [ESI + 0x144]     ; 00449187
    MOV dword ptr [ESI + 0x1d0],0x0     ; 0044918d
    SHL EAX,0x10                        ; 00449197
    DEC EBX                             ; 0044919a
    ADD EDX,EAX                         ; 0044919b
    MOV dword ptr [ESI + 0x11dc],EBX    ; 0044919d
    MOV EAX,[0x0135eacc]                ; 004491a3 | g_CameraShakeOffsetY
    MOV EBX,dword ptr [ESI + 0x148]     ; 004491a8
    SHL EAX,0x10                        ; 004491ae
    DEC EBX                             ; 004491b1
    SUB ECX,EAX                         ; 004491b2
    LEA EAX,[ESI + 0x4]                 ; 004491b4
    MOV dword ptr [ESI + 0x11e0],EBX    ; 004491b7
    PUSH EAX                            ; 004491bd
    MOV EBX,dword ptr [0x005f2afc]      ; 004491be | g_CDemonRenderer_PTR_005f2afc
    MOV dword ptr [ESI + 0x168],EDI     ; 004491c4
    PUSH EBX                            ; 004491ca | g_CDemonRenderer_01bdd7e4
    MOV dword ptr [0x01c6b5a0],EDX      ; 004491cb | g_INT_01c6b5a0
    MOV dword ptr [0x01c6b5a4],ECX      ; 004491d1 | g_INT_01c6b5a4
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 004491d7
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004491dc
    MOV EBP,dword ptr [0x005f2afc]      ; 004491df | g_CDemonRenderer_PTR_005f2afc
    PUSH dword ptr [ESI + 0x38]         ; 004491e5
    PUSH EBP                            ; 004491e8 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090 ; 004491e9
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004491ee
    LEA EAX,[ESI + 0x10]                ; 004491f1
    PUSH EAX                            ; 004491f4
    MOV EAX,[0x005f2afc]                ; 004491f5 | g_CDemonRenderer_PTR_005f2afc
    PUSH EAX                            ; 004491fa | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40 ; 004491fb
        ;   XREF to: 0046cc40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 00449200
    TEST EDI,EDI                        ; 00449203
    JNZ 0x00449232                      ; 00449205
        ;   XREF to: 00449232 (CONDITIONAL_JUMP)  ; LAB_00449232
    CMP dword ptr [0x02cf5fcc],0x0      ; 00449207 | g_INT_02cf5fcc
    JZ 0x00449215                       ; 0044920e
        ;   XREF to: 00449215 (CONDITIONAL_JUMP)  ; LAB_00449215
    CALL engine_special.cpp_beginScene_FUN_005658b0 ; 00449210
        ;   XREF to: 005658b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_beginScene_FUN_005658b0()
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 00449215
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
        ;   Label: LAB_00449215
    CALL engine_special.cpp_clearZBufferNative_FUN_00560dd4 ; 0044921a
        ;   XREF to: 00560dd4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_00560dd4()
    CMP dword ptr [0x01c6cee8],0x0      ; 0044921f | g_INT_01c6cee8
    JZ 0x00449232                       ; 00449226
        ;   XREF to: 00449232 (CONDITIONAL_JUMP)  ; LAB_00449232
    CALL engine_special.cpp_clear_FUN_00566060 ; 00449228
        ;   XREF to: 00566060 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clear_FUN_00566060()
    CALL engine_special.cpp_clearZBuffer_FUN_00566210 ; 0044922d
        ;   XREF to: 00566210 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clearZBuffer_FUN_00566210()
    PUSH ESI                            ; 00449232
        ;   Label: LAB_00449232
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0 ; 00449233
        ;   XREF to: 00449dd0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00449238
    POP EBP                             ; 0044923b
    POP EDI                             ; 0044923c
    POP ESI                             ; 0044923d
    POP EBX                             ; 0044923e
    RET                                 ; 0044923f
    MOV EBX,dword ptr [0x0135eab0]      ; 00449240 | g_CameraShakeSustainTimer
        ;   Label: caseD_1
    MOV EAX,[0x01c5fad0]                ; 00449246 | g_GlobalDeltaTimeInt
    SUB EBX,EAX                         ; 0044924b
    MOV dword ptr [0x0135eab0],EBX      ; 0044924d | g_CameraShakeSustainTimer
    TEST EBX,EBX                        ; 00449253
    JGE 0x00449273                      ; 00449255
        ;   XREF to: 00449273 (CONDITIONAL_JUMP)  ; LAB_00449273
    XOR EAX,EAX                         ; 00449257
    MOV EDX,0x2                         ; 00449259
    MOV [0x0135eab0],EAX                ; 0044925e | g_CameraShakeSustainTimer
    MOV EAX,[0x0135eabc]                ; 00449263 | g_CameraShakeDecayDuration
    MOV dword ptr [0x005f17e0],EDX      ; 00449268 | g_CameraShakeState
    MOV [0x0135eac0],EAX                ; 0044926e | g_CameraShakeDecayTimer
    PUSH 0x5b9c18                       ; 00449273 | = "Sustain : "
        ;   Label: LAB_00449273
    MOV ECX,dword ptr [0x005f1690]      ; 00449278 | g_CConsolePtr
    PUSH ECX                            ; 0044927e | g_CConsoleInstance
    MOV EBX,dword ptr [0x005f17d8]      ; 0044927f | g_CameraShakePeakValue
    JMP 0x0044906e                      ; 00449285
        ;   XREF to: 0044906e (UNCONDITIONAL_JUMP)  ; LAB_0044906e
    MOV EDX,dword ptr [0x0135eac0]      ; 0044928a | g_CameraShakeDecayTimer
        ;   Label: caseD_2
    MOV EAX,[0x01c5fad0]                ; 00449290 | g_GlobalDeltaTimeInt
    SUB EDX,EAX                         ; 00449295
    MOV dword ptr [0x0135eac0],EDX      ; 00449297 | g_CameraShakeDecayTimer
    TEST EDX,EDX                        ; 0044929d
    JL 0x004492cf                       ; 0044929f
        ;   XREF to: 004492cf (CONDITIONAL_JUMP)  ; LAB_004492cf
    MOV EDX,dword ptr [0x0135eabc]      ; 004492a1 | g_CameraShakeDecayDuration
        ;   Label: LAB_004492a1
    TEST EDX,EDX                        ; 004492a7
    JZ 0x004492be                       ; 004492a9
        ;   XREF to: 004492be (CONDITIONAL_JUMP)  ; LAB_004492be
    MOV EAX,[0x005f17d8]                ; 004492ab | g_CameraShakePeakValue
    MOV EBX,EDX                         ; 004492b0
    MOV EDX,dword ptr [0x0135eac0]      ; 004492b2 | g_CameraShakeDecayTimer
    IMUL EDX                            ; 004492b8
    IDIV EBX                            ; 004492ba
    MOV EBX,EAX                         ; 004492bc
    PUSH 0x5b9c23                       ; 004492be | = "Decay : "
        ;   Label: LAB_004492be
    MOV ECX,dword ptr [0x005f1690]      ; 004492c3 | g_CConsolePtr
    PUSH ECX                            ; 004492c9 | g_CConsoleInstance
    JMP 0x0044906e                      ; 004492ca
        ;   XREF to: 0044906e (UNCONDITIONAL_JUMP)  ; LAB_0044906e
    MOV EAX,0x3                         ; 004492cf
        ;   Label: LAB_004492cf
    MOV dword ptr [0x0135eac0],EBX      ; 004492d4 | g_CameraShakeDecayTimer
    MOV [0x005f17e0],EAX                ; 004492da | g_CameraShakeState
    JMP 0x004492a1                      ; 004492df
        ;   XREF to: 004492a1 (UNCONDITIONAL_JUMP)  ; LAB_004492a1
    CMP dword ptr [0x005f17e0],0x3      ; 004492e1 | g_CameraShakeState
        ;   Label: LAB_004492e1
    JZ 0x004490f7                       ; 004492e8
        ;   XREF to: 004490f7 (CONDITIONAL_JUMP)  ; LAB_004490f7
    JMP 0x00449105                      ; 004492ee
        ;   XREF to: 00449105 (UNCONDITIONAL_JUMP)  ; LAB_00449105
    MOV dword ptr [ESI + 0x11e4],0x1    ; 004492f3
        ;   Label: LAB_004492f3
    JMP 0x00449135                      ; 004492fd
        ;   XREF to: 00449135 (UNCONDITIONAL_JUMP)  ; LAB_00449135

