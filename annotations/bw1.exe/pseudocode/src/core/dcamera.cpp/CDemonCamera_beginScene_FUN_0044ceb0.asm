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
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f739
;   core_set.cpp_FUN_0054e6a0 at 0054e99d
;   core_set.cpp_FUN_00550580 at 00550601
;
; Referenced Globals:
;   void* PTR_caseD_3_0044ceac = 0044cf36
;   TerminatedCString s_Attack_005d75a7
;   TerminatedCString s_Sustain_005d75b1
;   TerminatedCString s_Decay_005d75bc
;   TerminatedCString s_core_dcamera_cpp_005d75c5
;   TerminatedCString s_CDemonCamera_beginScene_005d75d9
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_00611224
;   undefined4 DAT_00611228
;   undefined4 DAT_0061122c
;   undefined4 DAT_00612560
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01342200
;   undefined4 DAT_01342204
;   undefined4 DAT_01342208
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90
;   core_main.c_FUN_005030e0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
;   engine_special.cpp_clear_FUN_00582790
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   engine_special.cpp_clearZBuffer_FUN_00582940
;   engine_special.cpp_clearZBufferNative_FUN_0057dca4
;   engine_special.cpp_FUN_00581fe0
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
    MOV EAX,[0x0061122c]                ; 0044cebc | DAT_0061122c
    XOR EBX,EBX                         ; 0044cec1
    CMP EAX,0x3                         ; 0044cec3
    JA 0x0044cf36                       ; 0044cec6
        ;   XREF to: 0044cf36 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x44cea0]  ; 0044cec8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [0x01342208]      ; 0044cecf | DAT_01342208
        ;   Label: caseD_0
    ADD EBP,dword ptr [0x01c43530]      ; 0044ced5 | DAT_01c43530
    MOV EDX,dword ptr [0x01342204]      ; 0044cedb | DAT_01342204
    MOV dword ptr [0x01342208],EBP      ; 0044cee1 | DAT_01342208
    CMP EBP,EDX                         ; 0044cee7
    JLE 0x0044cf06                      ; 0044cee9
        ;   XREF to: 0044cf06 (CONDITIONAL_JUMP)  ; LAB_0044cf06
    MOV ECX,0x1                         ; 0044ceeb
    MOV EAX,[0x00611228]                ; 0044cef0 | DAT_00611228
    MOV dword ptr [0x01342208],EDX      ; 0044cef5 | DAT_01342208
    MOV dword ptr [0x0061122c],ECX      ; 0044cefb | DAT_0061122c
    MOV [0x01342200],EAX                ; 0044cf01 | DAT_01342200
    MOV EBP,dword ptr [0x01342204]      ; 0044cf06 | DAT_01342204
        ;   Label: LAB_0044cf06
    TEST EBP,EBP                        ; 0044cf0c
    JZ 0x0044cf23                       ; 0044cf0e
        ;   XREF to: 0044cf23 (CONDITIONAL_JUMP)  ; LAB_0044cf23
    MOV EDX,dword ptr [0x01342208]      ; 0044cf10 | DAT_01342208
    MOV EAX,[0x00611224]                ; 0044cf16 | DAT_00611224
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
    MOV EDX,dword ptr [0x01c43530]      ; 0044cf36 | DAT_01c43530
        ;   Label: caseD_3
    MOV EAX,EBX                         ; 0044cf3c
    IMUL EDX                            ; 0044cf3e
    SHRD EAX,EDX,0x10                   ; 0044cf40
    MOV EDX,dword ptr [0x01342214]      ; 0044cf44 | DAT_01342214
    ADD EDX,EAX                         ; 0044cf4a
    MOV dword ptr [0x01342214],EDX      ; 0044cf4c | DAT_01342214
    CMP EDX,0xffff                      ; 0044cf52
    JLE 0x0044cfa7                      ; 0044cf58
        ;   XREF to: 0044cfa7 (CONDITIONAL_JUMP)  ; LAB_0044cfa7
    MOV EAX,[0x01c43530]                ; 0044cf5a | DAT_01c43530
    MOV EDX,dword ptr [0x01342218]      ; 0044cf5f | DAT_01342218
    AND EAX,0x1                         ; 0044cf65
    XOR EBX,EBX                         ; 0044cf68
    MOV [0x01342218],EAX                ; 0044cf6a | DAT_01342218
    MOV EAX,[0x01c43530]                ; 0044cf6f | DAT_01c43530
    MOV dword ptr [0x01342214],EBX      ; 0044cf74 | DAT_01342214
    AND EAX,0x2                         ; 0044cf7a
    MOV EBX,dword ptr [0x0134221c]      ; 0044cf7d | DAT_0134221c
    SAR EAX,0x1                         ; 0044cf83
    MOV EBP,dword ptr [0x01342218]      ; 0044cf85 | DAT_01342218
    MOV [0x0134221c],EAX                ; 0044cf8b | DAT_0134221c
    CMP EDX,EBP                         ; 0044cf90
    JNZ 0x0044cfa7                      ; 0044cf92
        ;   XREF to: 0044cfa7 (CONDITIONAL_JUMP)  ; LAB_0044cfa7
    CMP EBX,EAX                         ; 0044cf94
    JNZ 0x0044cfa7                      ; 0044cf96
        ;   XREF to: 0044cfa7 (CONDITIONAL_JUMP)  ; LAB_0044cfa7
    TEST EAX,EAX                        ; 0044cf98
    SETZ AL                             ; 0044cf9a
    AND EAX,0xff                        ; 0044cf9d
    MOV [0x0134221c],EAX                ; 0044cfa2 | DAT_0134221c
    CMP dword ptr [ESI + 0x148],0x1e0   ; 0044cfa7
        ;   Label: LAB_0044cfa7
    JGE 0x0044d1a1                      ; 0044cfb1
        ;   XREF to: 0044d1a1 (CONDITIONAL_JUMP)  ; LAB_0044d1a1
    XOR EBP,EBP                         ; 0044cfb7
        ;   Label: LAB_0044cfb7
    MOV dword ptr [0x01342218],EBP      ; 0044cfb9 | DAT_01342218
    MOV dword ptr [0x0134221c],EBP      ; 0044cfbf | DAT_0134221c
    CMP dword ptr [ESI + 0x11e4],0x0    ; 0044cfc5
        ;   Label: LAB_0044cfc5
    JZ 0x0044d1b3                       ; 0044cfcc
        ;   XREF to: 0044d1b3 (CONDITIONAL_JUMP)  ; LAB_0044d1b3
    MOV ECX,0x5d75c5                    ; 0044cfd2 | = "..\\core\\dcamera.cpp"
    MOV EBX,0x2eb                       ; 0044cfd7
    PUSH 0x5d75d9                       ; 0044cfdc | = "CDemonCamera::beginScene - Scene alre..."
    MOV dword ptr [0x01d1d400],ECX      ; 0044cfe1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0044cfe7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0044cfed
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
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
    MOV EBP,dword ptr [0x00612560]      ; 0044d013 | DAT_00612560
    PUSH EBP                            ; 0044d019 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10 ; 0044d01a
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EAX,[0x01342218]                ; 0044d01f | DAT_01342218
    MOV EDX,dword ptr [0x01c4f000]      ; 0044d024 | DAT_01c4f000
    MOV dword ptr [ESI + 0x11d4],0x0    ; 0044d02a
    MOV ECX,dword ptr [0x01c4f004]      ; 0044d034 | DAT_01c4f004
    MOV dword ptr [ESI + 0x11d8],0x0    ; 0044d03a
    ADD ESP,0x14                        ; 0044d044
    MOV EBX,dword ptr [ESI + 0x144]     ; 0044d047
    MOV dword ptr [ESI + 0x1d0],0x0     ; 0044d04d
    SHL EAX,0x10                        ; 0044d057
    DEC EBX                             ; 0044d05a
    ADD EDX,EAX                         ; 0044d05b
    MOV dword ptr [ESI + 0x11dc],EBX    ; 0044d05d
    MOV EAX,[0x0134221c]                ; 0044d063 | DAT_0134221c
    MOV EBX,dword ptr [ESI + 0x148]     ; 0044d068
    SHL EAX,0x10                        ; 0044d06e
    DEC EBX                             ; 0044d071
    SUB ECX,EAX                         ; 0044d072
    LEA EAX,[ESI + 0x4]                 ; 0044d074
    MOV dword ptr [ESI + 0x11e0],EBX    ; 0044d077
    PUSH EAX                            ; 0044d07d
    MOV EBX,dword ptr [0x00612560]      ; 0044d07e | DAT_00612560
    MOV dword ptr [ESI + 0x168],EDI     ; 0044d084
    PUSH EBX                            ; 0044d08a | DAT_01bc120c
    MOV dword ptr [0x01c4f000],EDX      ; 0044d08b | DAT_01c4f000
    MOV dword ptr [0x01c4f004],ECX      ; 0044d091 | DAT_01c4f004
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 0044d097
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0044d09c
    MOV EBP,dword ptr [0x00612560]      ; 0044d09f | DAT_00612560
    PUSH dword ptr [ESI + 0x38]         ; 0044d0a5
    PUSH EBP                            ; 0044d0a8 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0 ; 0044d0a9
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0044d0ae
    LEA EAX,[ESI + 0x10]                ; 0044d0b1
    PUSH EAX                            ; 0044d0b4
    MOV EAX,[0x00612560]                ; 0044d0b5 | DAT_00612560
    PUSH EAX                            ; 0044d0ba | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560 ; 0044d0bb
        ;   XREF to: 00483560 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0044d0c0
    TEST EDI,EDI                        ; 0044d0c3
    JNZ 0x0044d0f2                      ; 0044d0c5
        ;   XREF to: 0044d0f2 (CONDITIONAL_JUMP)  ; LAB_0044d0f2
    CMP dword ptr [0x02c83370],0x0      ; 0044d0c7 | DAT_02c83370
    JZ 0x0044d0d5                       ; 0044d0ce
        ;   XREF to: 0044d0d5 (CONDITIONAL_JUMP)  ; LAB_0044d0d5
    CALL engine_special.cpp_FUN_00581fe0 ; 0044d0d0
        ;   XREF to: 00581fe0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00581fe0()
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0044d0d5
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
        ;   Label: LAB_0044d0d5
    CALL engine_special.cpp_clearZBufferNative_FUN_0057dca4 ; 0044d0da
        ;   XREF to: 0057dca4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0057dca4()
    CMP dword ptr [0x01c50948],0x0      ; 0044d0df | DAT_01c50948
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
    MOV EBX,dword ptr [0x01342200]      ; 0044d100 | DAT_01342200
        ;   Label: caseD_1
    MOV EAX,[0x01c43530]                ; 0044d106 | DAT_01c43530
    SUB EBX,EAX                         ; 0044d10b
    MOV dword ptr [0x01342200],EBX      ; 0044d10d | DAT_01342200
    TEST EBX,EBX                        ; 0044d113
    JGE 0x0044d133                      ; 0044d115
        ;   XREF to: 0044d133 (CONDITIONAL_JUMP)  ; LAB_0044d133
    XOR EAX,EAX                         ; 0044d117
    MOV EDX,0x2                         ; 0044d119
    MOV [0x01342200],EAX                ; 0044d11e | DAT_01342200
    MOV EAX,[0x0134220c]                ; 0044d123 | DAT_0134220c
    MOV dword ptr [0x0061122c],EDX      ; 0044d128 | DAT_0061122c
    MOV [0x01342210],EAX                ; 0044d12e | DAT_01342210
    PUSH 0x5d75b1                       ; 0044d133 | = "Sustain : "
        ;   Label: LAB_0044d133
    MOV ECX,dword ptr [0x00611100]      ; 0044d138 | g_CConsolePtr
    PUSH ECX                            ; 0044d13e | g_CConsoleInstance
    MOV EBX,dword ptr [0x00611224]      ; 0044d13f | DAT_00611224
    JMP 0x0044cf2e                      ; 0044d145
        ;   XREF to: 0044cf2e (UNCONDITIONAL_JUMP)  ; LAB_0044cf2e
    MOV EDX,dword ptr [0x01342210]      ; 0044d14a | DAT_01342210
        ;   Label: caseD_2
    MOV EAX,[0x01c43530]                ; 0044d150 | DAT_01c43530
    SUB EDX,EAX                         ; 0044d155
    MOV dword ptr [0x01342210],EDX      ; 0044d157 | DAT_01342210
    TEST EDX,EDX                        ; 0044d15d
    JL 0x0044d18f                       ; 0044d15f
        ;   XREF to: 0044d18f (CONDITIONAL_JUMP)  ; LAB_0044d18f
    MOV EDX,dword ptr [0x0134220c]      ; 0044d161 | DAT_0134220c
        ;   Label: LAB_0044d161
    TEST EDX,EDX                        ; 0044d167
    JZ 0x0044d17e                       ; 0044d169
        ;   XREF to: 0044d17e (CONDITIONAL_JUMP)  ; LAB_0044d17e
    MOV EAX,[0x00611224]                ; 0044d16b | DAT_00611224
    MOV EBX,EDX                         ; 0044d170
    MOV EDX,dword ptr [0x01342210]      ; 0044d172 | DAT_01342210
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
    MOV dword ptr [0x01342210],EBX      ; 0044d194 | DAT_01342210
    MOV [0x0061122c],EAX                ; 0044d19a | DAT_0061122c
    JMP 0x0044d161                      ; 0044d19f
        ;   XREF to: 0044d161 (UNCONDITIONAL_JUMP)  ; LAB_0044d161
    CMP dword ptr [0x0061122c],0x3      ; 0044d1a1 | DAT_0061122c
        ;   Label: LAB_0044d1a1
    JZ 0x0044cfb7                       ; 0044d1a8
        ;   XREF to: 0044cfb7 (CONDITIONAL_JUMP)  ; LAB_0044cfb7
    JMP 0x0044cfc5                      ; 0044d1ae
        ;   XREF to: 0044cfc5 (UNCONDITIONAL_JUMP)  ; LAB_0044cfc5
    MOV dword ptr [ESI + 0x11e4],0x1    ; 0044d1b3
        ;   Label: LAB_0044d1b3
    JMP 0x0044cff5                      ; 0044d1bd
        ;   XREF to: 0044cff5 (UNCONDITIONAL_JUMP)  ; LAB_0044cff5

