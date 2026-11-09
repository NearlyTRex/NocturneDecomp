; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[3]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e459
;   core_set.cpp_FUN_0052d3be at 0052d6bd
;   core_set.cpp_FUN_0052f2a0 at 0052f321
;
; Referenced Globals:
;   void* PTR_caseD_3_0043b7ec = 0043b876
;   TerminatedCString s_Attack_005ce2de
;   TerminatedCString s_Sustain_005ce2e8
;   TerminatedCString s_Decay_005ce2f3
;   TerminatedCString s_core_dcamera_cpp_005ce2fc
;   TerminatedCString s_CDemonCamera_beginScene_005ce310
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_00609f98
;   undefined4 DAT_00609f9c
;   undefined4 DAT_00609fa0
;   undefined4 DAT_0060b280
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01326d00
;   undefined4 DAT_01326d04
;   undefined4 DAT_01326d08
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0
;   core_main.c_FUN_004e4500
;   engine_console.cpp_FUN_00436710
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
;   engine_drender.cpp_FUN_0046afb0
;   engine_matrix.c_FUN_0046b4b0
;   engine_matrix.c_FUN_0046b710
;   engine_special.cpp_clear_FUN_0055fd40
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   engine_special.cpp_clearZBuffer_FUN_0055fef0
;   engine_special.cpp_clearZBufferNative_FUN_0055b254
;   engine_special.cpp_FUN_0055f590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b7f0
        ;   Label: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0
    PUSH ESI                            ; 0043b7f1
    PUSH EDI                            ; 0043b7f2
    PUSH EBP                            ; 0043b7f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043b7f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043b7f8
    MOV EAX,[0x00609fa0]                ; 0043b7fc | DAT_00609fa0
    XOR EBX,EBX                         ; 0043b801
    CMP EAX,0x3                         ; 0043b803
    JA 0x0043b876                       ; 0043b806
        ;   XREF to: 0043b876 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b7e0]  ; 0043b808 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [0x01326d08]      ; 0043b80f | DAT_01326d08
        ;   Label: caseD_0
    ADD EBP,dword ptr [0x01c2a370]      ; 0043b815 | DAT_01c2a370
    MOV EDX,dword ptr [0x01326d04]      ; 0043b81b | DAT_01326d04
    MOV dword ptr [0x01326d08],EBP      ; 0043b821 | DAT_01326d08
    CMP EBP,EDX                         ; 0043b827
    JLE 0x0043b846                      ; 0043b829
        ;   XREF to: 0043b846 (CONDITIONAL_JUMP)  ; LAB_0043b846
    MOV ECX,0x1                         ; 0043b82b
    MOV EAX,[0x00609f9c]                ; 0043b830 | DAT_00609f9c
    MOV dword ptr [0x01326d08],EDX      ; 0043b835 | DAT_01326d08
    MOV dword ptr [0x00609fa0],ECX      ; 0043b83b | DAT_00609fa0
    MOV [0x01326d00],EAX                ; 0043b841 | DAT_01326d00
    MOV EBP,dword ptr [0x01326d04]      ; 0043b846 | DAT_01326d04
        ;   Label: LAB_0043b846
    TEST EBP,EBP                        ; 0043b84c
    JZ 0x0043b863                       ; 0043b84e
        ;   XREF to: 0043b863 (CONDITIONAL_JUMP)  ; LAB_0043b863
    MOV EDX,dword ptr [0x01326d08]      ; 0043b850 | DAT_01326d08
    MOV EAX,[0x00609f98]                ; 0043b856 | DAT_00609f98
    MOV EBX,EBP                         ; 0043b85b
    IMUL EDX                            ; 0043b85d
    IDIV EBX                            ; 0043b85f
    MOV EBX,EAX                         ; 0043b861
    PUSH 0x5ce2de                       ; 0043b863 | = "Attack : "
        ;   Label: LAB_0043b863
    MOV EAX,[0x00609ed0]                ; 0043b868 | g_CConsolePtr
    PUSH EAX                            ; 0043b86d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0043b86e
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
        ;   Label: LAB_0043b86e
    ADD ESP,0x8                         ; 0043b873
    MOV EDX,dword ptr [0x01c2a370]      ; 0043b876 | DAT_01c2a370
        ;   Label: caseD_3
    MOV EAX,EBX                         ; 0043b87c
    IMUL EDX                            ; 0043b87e
    SHRD EAX,EDX,0x10                   ; 0043b880
    MOV EDX,dword ptr [0x01326d14]      ; 0043b884 | DAT_01326d14
    ADD EDX,EAX                         ; 0043b88a
    MOV dword ptr [0x01326d14],EDX      ; 0043b88c | DAT_01326d14
    CMP EDX,0xffff                      ; 0043b892
    JLE 0x0043b8e7                      ; 0043b898
        ;   XREF to: 0043b8e7 (CONDITIONAL_JUMP)  ; LAB_0043b8e7
    MOV EAX,[0x01c2a370]                ; 0043b89a | DAT_01c2a370
    MOV EDX,dword ptr [0x01326d18]      ; 0043b89f | DAT_01326d18
    AND EAX,0x1                         ; 0043b8a5
    XOR EBX,EBX                         ; 0043b8a8
    MOV [0x01326d18],EAX                ; 0043b8aa | DAT_01326d18
    MOV EAX,[0x01c2a370]                ; 0043b8af | DAT_01c2a370
    MOV dword ptr [0x01326d14],EBX      ; 0043b8b4 | DAT_01326d14
    AND EAX,0x2                         ; 0043b8ba
    MOV EBX,dword ptr [0x01326d1c]      ; 0043b8bd | DAT_01326d1c
    SAR EAX,0x1                         ; 0043b8c3
    MOV EBP,dword ptr [0x01326d18]      ; 0043b8c5 | DAT_01326d18
    MOV [0x01326d1c],EAX                ; 0043b8cb | DAT_01326d1c
    CMP EDX,EBP                         ; 0043b8d0
    JNZ 0x0043b8e7                      ; 0043b8d2
        ;   XREF to: 0043b8e7 (CONDITIONAL_JUMP)  ; LAB_0043b8e7
    CMP EBX,EAX                         ; 0043b8d4
    JNZ 0x0043b8e7                      ; 0043b8d6
        ;   XREF to: 0043b8e7 (CONDITIONAL_JUMP)  ; LAB_0043b8e7
    TEST EAX,EAX                        ; 0043b8d8
    SETZ AL                             ; 0043b8da
    AND EAX,0xff                        ; 0043b8dd
    MOV [0x01326d1c],EAX                ; 0043b8e2 | DAT_01326d1c
    CMP dword ptr [ESI + 0x148],0x1e0   ; 0043b8e7
        ;   Label: LAB_0043b8e7
    JGE 0x0043bae1                      ; 0043b8f1
        ;   XREF to: 0043bae1 (CONDITIONAL_JUMP)  ; LAB_0043bae1
    XOR EBP,EBP                         ; 0043b8f7
        ;   Label: LAB_0043b8f7
    MOV dword ptr [0x01326d18],EBP      ; 0043b8f9 | DAT_01326d18
    MOV dword ptr [0x01326d1c],EBP      ; 0043b8ff | DAT_01326d1c
    CMP dword ptr [ESI + 0x11e4],0x0    ; 0043b905
        ;   Label: LAB_0043b905
    JZ 0x0043baf3                       ; 0043b90c
        ;   XREF to: 0043baf3 (CONDITIONAL_JUMP)  ; LAB_0043baf3
    MOV ECX,0x5ce2fc                    ; 0043b912 | = "..\\core\\dcamera.cpp"
    MOV EBX,0x2e7                       ; 0043b917
    PUSH 0x5ce310                       ; 0043b91c | = "CDemonCamera::beginScene - Scene alre..."
    MOV dword ptr [0x01d046a0],ECX      ; 0043b921 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0043b927 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0043b92d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0043b932
    PUSH EDI                            ; 0043b935
        ;   Label: LAB_0043b935
    PUSH ESI                            ; 0043b936
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0 ; 0043b937
        ;   XREF to: 0043b7a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,dword ptr [ESI + 0x148]     ; 0043b93c
    ADD ESP,0x8                         ; 0043b942
    DEC EAX                             ; 0043b945
    PUSH EAX                            ; 0043b946
    MOV EAX,dword ptr [ESI + 0x144]     ; 0043b947
    DEC EAX                             ; 0043b94d
    PUSH EAX                            ; 0043b94e
    PUSH 0x0                            ; 0043b94f
    PUSH 0x0                            ; 0043b951
    MOV EBP,dword ptr [0x0060b280]      ; 0043b953 | DAT_0060b280
    PUSH EBP                            ; 0043b959 | DAT_01ba5c50
    CALL engine_matrix.c_FUN_0046b710   ; 0043b95a
        ;   XREF to: 0046b710 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b710()
    MOV EAX,[0x01326d18]                ; 0043b95f | DAT_01326d18
    MOV EDX,dword ptr [0x01c35e40]      ; 0043b964 | DAT_01c35e40
    MOV dword ptr [ESI + 0x11d4],0x0    ; 0043b96a
    MOV ECX,dword ptr [0x01c35e44]      ; 0043b974 | DAT_01c35e44
    MOV dword ptr [ESI + 0x11d8],0x0    ; 0043b97a
    ADD ESP,0x14                        ; 0043b984
    MOV EBX,dword ptr [ESI + 0x144]     ; 0043b987
    MOV dword ptr [ESI + 0x1d0],0x0     ; 0043b98d
    SHL EAX,0x10                        ; 0043b997
    DEC EBX                             ; 0043b99a
    ADD EDX,EAX                         ; 0043b99b
    MOV dword ptr [ESI + 0x11dc],EBX    ; 0043b99d
    MOV EAX,[0x01326d1c]                ; 0043b9a3 | DAT_01326d1c
    MOV EBX,dword ptr [ESI + 0x148]     ; 0043b9a8
    SHL EAX,0x10                        ; 0043b9ae
    DEC EBX                             ; 0043b9b1
    SUB ECX,EAX                         ; 0043b9b2
    LEA EAX,[ESI + 0x4]                 ; 0043b9b4
    MOV dword ptr [ESI + 0x11e0],EBX    ; 0043b9b7
    PUSH EAX                            ; 0043b9bd
    MOV EBX,dword ptr [0x0060b280]      ; 0043b9be | DAT_0060b280
    MOV dword ptr [ESI + 0x168],EDI     ; 0043b9c4
    PUSH EBX                            ; 0043b9ca | DAT_01ba5c50
    MOV dword ptr [0x01c35e40],EDX      ; 0043b9cb | DAT_01c35e40
    MOV dword ptr [0x01c35e44],ECX      ; 0043b9d1 | DAT_01c35e44
    CALL engine_drender.cpp_FUN_0046afb0 ; 0043b9d7
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0043b9dc
    MOV EBP,dword ptr [0x0060b280]      ; 0043b9df | DAT_0060b280
    PUSH dword ptr [ESI + 0x38]         ; 0043b9e5
    PUSH EBP                            ; 0043b9e8 | DAT_01ba5c50
    CALL engine_matrix.c_FUN_0046b4b0   ; 0043b9e9
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b4b0()
    ADD ESP,0x8                         ; 0043b9ee
    LEA EAX,[ESI + 0x10]                ; 0043b9f1
    PUSH EAX                            ; 0043b9f4
    MOV EAX,[0x0060b280]                ; 0043b9f5 | DAT_0060b280
    PUSH EAX                            ; 0043b9fa | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060 ; 0043b9fb
        ;   XREF to: 0046b060 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0043ba00
    TEST EDI,EDI                        ; 0043ba03
    JNZ 0x0043ba32                      ; 0043ba05
        ;   XREF to: 0043ba32 (CONDITIONAL_JUMP)  ; LAB_0043ba32
    CMP dword ptr [0x0264bba0],0x0      ; 0043ba07 | DAT_0264bba0
    JZ 0x0043ba15                       ; 0043ba0e
        ;   XREF to: 0043ba15 (CONDITIONAL_JUMP)  ; LAB_0043ba15
    CALL engine_special.cpp_FUN_0055f590 ; 0043ba10
        ;   XREF to: 0055f590 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055f590()
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 0043ba15
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
        ;   Label: LAB_0043ba15
    CALL engine_special.cpp_clearZBufferNative_FUN_0055b254 ; 0043ba1a
        ;   XREF to: 0055b254 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0055b254()
    CMP dword ptr [0x01c37788],0x0      ; 0043ba1f | DAT_01c37788
    JZ 0x0043ba32                       ; 0043ba26
        ;   XREF to: 0043ba32 (CONDITIONAL_JUMP)  ; LAB_0043ba32
    CALL engine_special.cpp_clear_FUN_0055fd40 ; 0043ba28
        ;   XREF to: 0055fd40 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clear_FUN_0055fd40()
    CALL engine_special.cpp_clearZBuffer_FUN_0055fef0 ; 0043ba2d
        ;   XREF to: 0055fef0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clearZBuffer_FUN_0055fef0()
    PUSH ESI                            ; 0043ba32
        ;   Label: LAB_0043ba32
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0 ; 0043ba33
        ;   XREF to: 0043c5d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0043ba38
    POP EBP                             ; 0043ba3b
    POP EDI                             ; 0043ba3c
    POP ESI                             ; 0043ba3d
    POP EBX                             ; 0043ba3e
    RET                                 ; 0043ba3f
    MOV EBX,dword ptr [0x01326d00]      ; 0043ba40 | DAT_01326d00
        ;   Label: caseD_1
    MOV EAX,[0x01c2a370]                ; 0043ba46 | DAT_01c2a370
    SUB EBX,EAX                         ; 0043ba4b
    MOV dword ptr [0x01326d00],EBX      ; 0043ba4d | DAT_01326d00
    TEST EBX,EBX                        ; 0043ba53
    JGE 0x0043ba73                      ; 0043ba55
        ;   XREF to: 0043ba73 (CONDITIONAL_JUMP)  ; LAB_0043ba73
    XOR EAX,EAX                         ; 0043ba57
    MOV EDX,0x2                         ; 0043ba59
    MOV [0x01326d00],EAX                ; 0043ba5e | DAT_01326d00
    MOV EAX,[0x01326d0c]                ; 0043ba63 | DAT_01326d0c
    MOV dword ptr [0x00609fa0],EDX      ; 0043ba68 | DAT_00609fa0
    MOV [0x01326d10],EAX                ; 0043ba6e | DAT_01326d10
    PUSH 0x5ce2e8                       ; 0043ba73 | = "Sustain : "
        ;   Label: LAB_0043ba73
    MOV ECX,dword ptr [0x00609ed0]      ; 0043ba78 | g_CConsolePtr
    PUSH ECX                            ; 0043ba7e | g_CConsoleInstance
    MOV EBX,dword ptr [0x00609f98]      ; 0043ba7f | DAT_00609f98
    JMP 0x0043b86e                      ; 0043ba85
        ;   XREF to: 0043b86e (UNCONDITIONAL_JUMP)  ; LAB_0043b86e
    MOV EDX,dword ptr [0x01326d10]      ; 0043ba8a | DAT_01326d10
        ;   Label: caseD_2
    MOV EAX,[0x01c2a370]                ; 0043ba90 | DAT_01c2a370
    SUB EDX,EAX                         ; 0043ba95
    MOV dword ptr [0x01326d10],EDX      ; 0043ba97 | DAT_01326d10
    TEST EDX,EDX                        ; 0043ba9d
    JL 0x0043bacf                       ; 0043ba9f
        ;   XREF to: 0043bacf (CONDITIONAL_JUMP)  ; LAB_0043bacf
    MOV EDX,dword ptr [0x01326d0c]      ; 0043baa1 | DAT_01326d0c
        ;   Label: LAB_0043baa1
    TEST EDX,EDX                        ; 0043baa7
    JZ 0x0043babe                       ; 0043baa9
        ;   XREF to: 0043babe (CONDITIONAL_JUMP)  ; LAB_0043babe
    MOV EAX,[0x00609f98]                ; 0043baab | DAT_00609f98
    MOV EBX,EDX                         ; 0043bab0
    MOV EDX,dword ptr [0x01326d10]      ; 0043bab2 | DAT_01326d10
    IMUL EDX                            ; 0043bab8
    IDIV EBX                            ; 0043baba
    MOV EBX,EAX                         ; 0043babc
    PUSH 0x5ce2f3                       ; 0043babe | = "Decay : "
        ;   Label: LAB_0043babe
    MOV ECX,dword ptr [0x00609ed0]      ; 0043bac3 | g_CConsolePtr
    PUSH ECX                            ; 0043bac9 | g_CConsoleInstance
    JMP 0x0043b86e                      ; 0043baca
        ;   XREF to: 0043b86e (UNCONDITIONAL_JUMP)  ; LAB_0043b86e
    MOV EAX,0x3                         ; 0043bacf
        ;   Label: LAB_0043bacf
    MOV dword ptr [0x01326d10],EBX      ; 0043bad4 | DAT_01326d10
    MOV [0x00609fa0],EAX                ; 0043bada | DAT_00609fa0
    JMP 0x0043baa1                      ; 0043badf
        ;   XREF to: 0043baa1 (UNCONDITIONAL_JUMP)  ; LAB_0043baa1
    CMP dword ptr [0x00609fa0],0x3      ; 0043bae1 | DAT_00609fa0
        ;   Label: LAB_0043bae1
    JZ 0x0043b8f7                       ; 0043bae8
        ;   XREF to: 0043b8f7 (CONDITIONAL_JUMP)  ; LAB_0043b8f7
    JMP 0x0043b905                      ; 0043baee
        ;   XREF to: 0043b905 (UNCONDITIONAL_JUMP)  ; LAB_0043b905
    MOV dword ptr [ESI + 0x11e4],0x1    ; 0043baf3
        ;   Label: LAB_0043baf3
    JMP 0x0043b935                      ; 0043bafd
        ;   XREF to: 0043b935 (UNCONDITIONAL_JUMP)  ; LAB_0043b935

