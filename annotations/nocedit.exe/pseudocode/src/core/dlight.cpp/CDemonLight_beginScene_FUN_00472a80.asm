; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight * this_ptr, int skip_clear_buffers)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[4]:
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056bf82
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056cad7
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056ab6b
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b5e5
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061ef84
;   TerminatedCString s_CDemonLight_beginScene_S_0061ef97
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_RasterizerDepthBias
;   CDemonRenderer g_CDemonRendererInstance
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[2][1]
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
;   core_event.cpp_FUN_004b19d0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472a80
        ;   Label: core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
    PUSH ESI                            ; 00472a81
    PUSH EDI                            ; 00472a82
    PUSH EBP                            ; 00472a83
    MOV EBX,dword ptr [ESP + 0x14]      ; 00472a84
    CMP dword ptr [EBX + 0x11e4],0x0    ; 00472a88
    JNZ 0x00472c11                      ; 00472a8f
        ;   XREF to: 00472c11 (CONDITIONAL_JUMP)  ; LAB_00472c11
    MOV EDI,dword ptr [ESP + 0x18]      ; 00472a95
        ;   Label: LAB_00472a95
    PUSH EDI                            ; 00472a99
    PUSH EBX                            ; 00472a9a
    MOV dword ptr [EBX + 0x11e4],0x1    ; 00472a9b
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0 ; 00472aa5
        ;   XREF to: 0044c3e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 00472aaa
    ADD ESP,0x8                         ; 00472ab0
    DEC EAX                             ; 00472ab3
    PUSH EAX                            ; 00472ab4
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00472ab5
    DEC EAX                             ; 00472abb
    PUSH EAX                            ; 00472abc
    PUSH 0x0                            ; 00472abd
    PUSH 0x0                            ; 00472abf
    MOV EBP,dword ptr [0x006703ec]      ; 00472ac1 | g_CDemonRendererPtr2
    PUSH EBP                            ; 00472ac7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 00472ac8
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00472acd
    DEC EAX                             ; 00472ad3
    MOV dword ptr [EBX + 0x11dc],EAX    ; 00472ad4
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 00472ada
    MOV dword ptr [EBX + 0x11d4],0x0    ; 00472ae0
    DEC EAX                             ; 00472aea
    ADD ESP,0x14                        ; 00472aeb
    MOV dword ptr [EBX + 0x11e0],EAX    ; 00472aee
    LEA EAX,[EBX + 0x4]                 ; 00472af4
    MOV dword ptr [EBX + 0x11d8],0x0    ; 00472af7
    PUSH EAX                            ; 00472b01
    MOV EAX,[0x006703ec]                ; 00472b02 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [EBX + 0x1d0],0x0     ; 00472b07
    PUSH EAX                            ; 00472b11 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x168],EDI     ; 00472b12
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 00472b18
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
    ADD ESP,0x8                         ; 00472b1d
    MOV EDX,dword ptr [0x006703ec]      ; 00472b20 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH dword ptr [EBX + 0x38]         ; 00472b26
    PUSH EDX                            ; 00472b29 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 00472b2a
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 00472b2f
    LEA EAX,[EBX + 0x10]                ; 00472b32
    PUSH EAX                            ; 00472b35
    MOV ECX,dword ptr [0x006703ec]      ; 00472b36 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00472b3c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 ; 00472b3d
        ;   XREF to: 0048c200 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix, CVector3f * rotation_angles)
    ADD ESP,0x8                         ; 00472b42
    MOV EDX,dword ptr [0x02d052ec]      ; 00472b45 | g_TransformMatrix[0][1]
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 00472b4b
    IMUL EDX                            ; 00472b51
    SHRD EAX,EDX,0x10                   ; 00472b53
    MOV EDX,dword ptr [0x02d052f8]      ; 00472b57 | g_TransformMatrix[1][1]
    MOV [0x02d052ec],EAX                ; 00472b5d | g_TransformMatrix[0][1]
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 00472b62
    IMUL EDX                            ; 00472b68
    SHRD EAX,EDX,0x10                   ; 00472b6a
    MOV EDX,dword ptr [0x02d05304]      ; 00472b6e | g_TransformMatrix[2][1]
    MOV [0x02d052f8],EAX                ; 00472b74 | g_TransformMatrix[1][1]
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 00472b79
    IMUL EDX                            ; 00472b7f
    SHRD EAX,EDX,0x10                   ; 00472b81
    MOV [0x02d05304],EAX                ; 00472b85 | g_TransformMatrix[2][1]
    TEST EDI,EDI                        ; 00472b8a
    JZ 0x00472c39                       ; 00472b8c
        ;   XREF to: 00472c39 (CONDITIONAL_JUMP)  ; LAB_00472c39
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 00472b92
        ;   Label: LAB_00472b92
    XOR EAX,EAX                         ; 00472b98
    TEST EBP,EBP                        ; 00472b9a
    JLE 0x00472be0                      ; 00472b9c
        ;   XREF to: 00472be0 (CONDITIONAL_JUMP)  ; LAB_00472be0
    MOV EDX,EBX                         ; 00472b9e
    MOV ESI,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 00472ba0 | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_00472ba0
    MOV dword ptr [EDX + 0x1cd4],ESI    ; 00472ba7
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 00472bad
    IMUL ESI,EAX                        ; 00472bb3
    MOV EDI,dword ptr [EBX + 0x2f94]    ; 00472bb6
    ADD ESI,ESI                         ; 00472bbc
    ADD ESI,EDI                         ; 00472bbe
    MOV dword ptr [EAX*0x4 + 0x2cf6a9c],ESI ; 00472bc0 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    INC EAX                             ; 00472bc7
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 00472bc8
    ADD EDX,0x4                         ; 00472bce
    CMP EAX,ECX                         ; 00472bd1
    JL 0x00472ba0                       ; 00472bd3
        ;   XREF to: 00472ba0 (CONDITIONAL_JUMP)  ; LAB_00472ba0
    LEA EAX,[EAX]                       ; 00472bd5
    LEA EDX,[EDX]                       ; 00472bdb
    MOV EBX,EBX                         ; 00472bde
    PUSH EBX                            ; 00472be0
        ;   Label: LAB_00472be0
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0 ; 00472be1
        ;   XREF to: 0044d1c0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00472be6
    PUSH 0x1                            ; 00472be9
    MOV EBX,dword ptr [0x006703ec]      ; 00472beb | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 00472bf1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 00472bf2
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00472bf7
    MOV ESI,dword ptr [ESP + 0x18]      ; 00472bfa
    TEST ESI,ESI                        ; 00472bfe
    JZ 0x00472c5e                       ; 00472c00
        ;   XREF to: 00472c5e (CONDITIONAL_JUMP)  ; LAB_00472c5e
    MOV dword ptr [0x02c6d03c],0x8000   ; 00472c02 | g_RasterizerDepthBias
    POP EBP                             ; 00472c0c
    POP EDI                             ; 00472c0d
    POP ESI                             ; 00472c0e
    POP EBX                             ; 00472c0f
    RET                                 ; 00472c10
    MOV ECX,0x61ef84                    ; 00472c11 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00472c11
    MOV ESI,0xf3                        ; 00472c16
    PUSH 0x61ef97                       ; 00472c1b | = "CDemonLight::beginScene - Scene alrea..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00472c20 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00472c26 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00472c2c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00472c31
    JMP 0x00472a95                      ; 00472c34
        ;   XREF to: 00472a95 (UNCONDITIONAL_JUMP)  ; LAB_00472a95
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00472c39
        ;   Label: LAB_00472c39
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 00472c3f
    ADD EAX,EAX                         ; 00472c46
    PUSH EAX                            ; 00472c48
    MOV EDX,0xff                        ; 00472c49
    MOV ECX,dword ptr [EBX + 0x2f94]    ; 00472c4e
    CALL core_event.cpp_FUN_004b19d0    ; 00472c54
        ;   XREF to: 004b19d0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_004b19d0()
    JMP 0x00472b92                      ; 00472c59
        ;   XREF to: 00472b92 (UNCONDITIONAL_JUMP)  ; LAB_00472b92
    MOV dword ptr [0x02c6d03c],ESI      ; 00472c5e | g_RasterizerDepthBias
        ;   Label: LAB_00472c5e
    POP EBP                             ; 00472c64
    POP EDI                             ; 00472c65
    POP ESI                             ; 00472c66
    POP EBX                             ; 00472c67
    RET                                 ; 00472c68

