; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popViewport_FUN_004e6c50(void)
;
;
; XREF[2]:
;   engine_drender.cpp_popViewport_FUN_0046d320 at 0046d320
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80 at 00480152
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005c6fd9
;   TerminatedCString s_s_3D_Window_unbalance_005c6fec
;   int g_ProjectionScale = 0x10000
;   int g_INT_01c6b598
;   int g_INT_01c6b59c
;   int g_INT_01c6b5a0
;   int g_INT_01c6b5a4
;   int g_INT_01c6b5a8
;   int g_INT_01c6b5ac
;   int g_INT_01c6b5b0
;   int g_INT_01c6b5b4
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;   int g_CameraRotationPitch
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d728fc]      ; 004e6c50 | g_ViewportStackIndex
        ;   Label: engine_matrix.c_popViewport_FUN_004e6c50
    DEC EDX                             ; 004e6c56
    MOV dword ptr [0x01d728fc],EDX      ; 004e6c57 | g_ViewportStackIndex
    TEST EDX,EDX                        ; 004e6c5d
    JL 0x004e6d54                       ; 004e6c5f
        ;   XREF to: 004e6d54 (CONDITIONAL_JUMP)  ; LAB_004e6d54
    MOV EAX,[0x01d728fc]                ; 004e6c65 | g_ViewportStackIndex
        ;   Label: LAB_004e6c65
    MOV EDX,dword ptr [EAX*0x4 + 0x1d729c8] ; 004e6c6a
    MOV dword ptr [0x01c6e2d8],EDX      ; 004e6c71 | g_CameraOriginX
    MOV EDX,dword ptr [EAX*0x4 + 0x1d729f0] ; 004e6c77
    MOV dword ptr [0x01c6e2dc],EDX      ; 004e6c7e | g_CameraOriginY
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72a18] ; 004e6c84
    MOV dword ptr [0x01c6e2e0],EDX      ; 004e6c8b | g_CameraOriginZ
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72a40] ; 004e6c91
    MOV dword ptr [0x01c6e2e4],EDX      ; 004e6c98 | g_CameraRotationPitch
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72a68] ; 004e6c9e
    MOV dword ptr [0x01c6e2e8],EDX      ; 004e6ca5 | g_CameraRotationYaw
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72a90] ; 004e6cab
    MOV dword ptr [0x01c6e2ec],EDX      ; 004e6cb2 | g_CameraRotationRoll
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72ab8] ; 004e6cb8
    MOV dword ptr [0x01c6e2f0],EDX      ; 004e6cbf | g_LightDirectionX
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72ae0] ; 004e6cc5
    MOV dword ptr [0x01c6e2f4],EDX      ; 004e6ccc | g_LightDirectionY
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72b08] ; 004e6cd2
    MOV dword ptr [0x01c6e2f8],EDX      ; 004e6cd9 | g_LightDirectionZ
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72900] ; 004e6cdf
    MOV dword ptr [0x01c6b598],EDX      ; 004e6ce6 | g_INT_01c6b598
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72928] ; 004e6cec
    MOV dword ptr [0x01c6b59c],EDX      ; 004e6cf3 | g_INT_01c6b59c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72950] ; 004e6cf9
    MOV dword ptr [0x01c6b5a0],EDX      ; 004e6d00 | g_INT_01c6b5a0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72978] ; 004e6d06
    MOV dword ptr [0x01c6b5a4],EDX      ; 004e6d0d | g_INT_01c6b5a4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d729a0] ; 004e6d13
    MOV dword ptr [0x005fba44],EDX      ; 004e6d1a | g_ProjectionScale
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72b30] ; 004e6d20
    MOV dword ptr [0x01c6b5a8],EDX      ; 004e6d27 | g_INT_01c6b5a8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72b58] ; 004e6d2d
    MOV dword ptr [0x01c6b5b0],EDX      ; 004e6d34 | g_INT_01c6b5b0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72b80] ; 004e6d3a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d72ba8] ; 004e6d41
    MOV dword ptr [0x01c6b5ac],EDX      ; 004e6d48 | g_INT_01c6b5ac
    MOV [0x01c6b5b4],EAX                ; 004e6d4e | g_INT_01c6b5b4
    RET                                 ; 004e6d53
    PUSH ESI                            ; 004e6d54
        ;   Label: LAB_004e6d54
    PUSH EBX                            ; 004e6d55
    MOV EBX,0x5c6fd9                    ; 004e6d56 | = "..\\engine\\matrix.c"
    MOV ESI,0x56c                       ; 004e6d5b
    PUSH 0x5c6fec                       ; 004e6d60 | = "3D Window unbalance"
    MOV dword ptr [0x01d71de0],EBX      ; 004e6d65 | g_CHAR_PTR_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004e6d6b | g_INT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 004e6d71
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 004e6d76
    POP EBX                             ; 004e6d79
    POP ESI                             ; 004e6d7a
    JMP 0x004e6c65                      ; 004e6d7b
        ;   XREF to: 004e6c65 (UNCONDITIONAL_JUMP)  ; LAB_004e6c65

