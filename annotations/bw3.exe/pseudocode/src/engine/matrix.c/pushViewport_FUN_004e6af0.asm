; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pushViewport_FUN_004e6af0(int x,int y,int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046d2f0 at 0046d306
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80 at 0047ffb5
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005c6fb2
;   TerminatedCString s_Too_many_3D_windows_005c6fc5
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
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e6af0
        ;   Label: engine_matrix.c_pushViewport_FUN_004e6af0
    MOV EAX,[0x01d728fc]                ; 004e6af1 | g_ViewportStackIndex
    MOV EDX,dword ptr [0x01c6e2d8]      ; 004e6af6 | g_CameraOriginX
    MOV dword ptr [EAX*0x4 + 0x1d729c8],EDX ; 004e6afc
    MOV EDX,dword ptr [0x01c6e2dc]      ; 004e6b03 | g_CameraOriginY
    MOV dword ptr [EAX*0x4 + 0x1d729f0],EDX ; 004e6b09
    MOV EDX,dword ptr [0x01c6e2e0]      ; 004e6b10 | g_CameraOriginZ
    MOV dword ptr [EAX*0x4 + 0x1d72a18],EDX ; 004e6b16
    MOV EDX,dword ptr [0x01c6e2e4]      ; 004e6b1d | g_CameraRotationPitch
    MOV dword ptr [EAX*0x4 + 0x1d72a40],EDX ; 004e6b23
    MOV EDX,dword ptr [0x01c6e2e8]      ; 004e6b2a | g_CameraRotationYaw
    MOV dword ptr [EAX*0x4 + 0x1d72a68],EDX ; 004e6b30
    MOV EDX,dword ptr [0x01c6e2ec]      ; 004e6b37 | g_CameraRotationRoll
    MOV dword ptr [EAX*0x4 + 0x1d72a90],EDX ; 004e6b3d
    MOV EDX,dword ptr [0x01c6e2f0]      ; 004e6b44 | g_LightDirectionX
    MOV dword ptr [EAX*0x4 + 0x1d72ab8],EDX ; 004e6b4a
    MOV EDX,dword ptr [0x01c6e2f4]      ; 004e6b51 | g_LightDirectionY
    MOV dword ptr [EAX*0x4 + 0x1d72ae0],EDX ; 004e6b57
    MOV EDX,dword ptr [0x01c6e2f8]      ; 004e6b5e | g_LightDirectionZ
    MOV dword ptr [EAX*0x4 + 0x1d72b08],EDX ; 004e6b64
    MOV EDX,dword ptr [0x01c6b598]      ; 004e6b6b | g_INT_01c6b598
    MOV dword ptr [EAX*0x4 + 0x1d72900],EDX ; 004e6b71
    MOV EDX,dword ptr [0x01c6b59c]      ; 004e6b78 | g_INT_01c6b59c
    MOV dword ptr [EAX*0x4 + 0x1d72928],EDX ; 004e6b7e
    MOV EDX,dword ptr [0x01c6b5a0]      ; 004e6b85 | g_INT_01c6b5a0
    MOV dword ptr [EAX*0x4 + 0x1d72950],EDX ; 004e6b8b
    MOV EDX,dword ptr [0x01c6b5a4]      ; 004e6b92 | g_INT_01c6b5a4
    MOV dword ptr [EAX*0x4 + 0x1d72978],EDX ; 004e6b98
    MOV EDX,dword ptr [0x005fba44]      ; 004e6b9f | g_ProjectionScale
    MOV dword ptr [EAX*0x4 + 0x1d729a0],EDX ; 004e6ba5
    MOV EDX,dword ptr [0x01c6b5a8]      ; 004e6bac | g_INT_01c6b5a8
    MOV dword ptr [EAX*0x4 + 0x1d72b30],EDX ; 004e6bb2
    MOV EDX,dword ptr [0x01c6b5b0]      ; 004e6bb9 | g_INT_01c6b5b0
    MOV dword ptr [EAX*0x4 + 0x1d72b58],EDX ; 004e6bbf
    MOV EDX,dword ptr [0x01c6b5ac]      ; 004e6bc6 | g_INT_01c6b5ac
    MOV dword ptr [EAX*0x4 + 0x1d72b80],EDX ; 004e6bcc
    MOV EDX,dword ptr [0x01c6b5b4]      ; 004e6bd3 | g_INT_01c6b5b4
    MOV dword ptr [EAX*0x4 + 0x1d72ba8],EDX ; 004e6bd9
    LEA EDX,[EAX + 0x1]                 ; 004e6be0
    MOV dword ptr [0x01d728fc],EDX      ; 004e6be3 | g_ViewportStackIndex
    CMP EDX,0xa                         ; 004e6be9
    JGE 0x004e6c21                      ; 004e6bec
        ;   XREF to: 004e6c21 (CONDITIONAL_JUMP)  ; LAB_004e6c21
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e6bee
        ;   Label: LAB_004e6bee
    ADD EAX,dword ptr [ESP + 0x14]      ; 004e6bf2
    MOV EBP,dword ptr [ESP + 0x10]      ; 004e6bf6
    PUSH EAX                            ; 004e6bfa
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e6bfb
    ADD EAX,EBP                         ; 004e6bff
    PUSH EAX                            ; 004e6c01
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e6c02
    PUSH EAX                            ; 004e6c06
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e6c07
    PUSH EDX                            ; 004e6c0b
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 004e6c0c
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    MOV ECX,0x10000                     ; 004e6c11
    ADD ESP,0x10                        ; 004e6c16
    MOV dword ptr [0x005fba44],ECX      ; 004e6c19 | g_ProjectionScale
    POP EBP                             ; 004e6c1f
    RET                                 ; 004e6c20
    PUSH ESI                            ; 004e6c21
        ;   Label: LAB_004e6c21
    PUSH EBX                            ; 004e6c22
    MOV EBX,0x5c6fb2                    ; 004e6c23 | = "..\\engine\\matrix.c"
    MOV ESI,0x540                       ; 004e6c28
    PUSH 0x5c6fc5                       ; 004e6c2d | = "Too many 3D windows"
    MOV dword ptr [0x01d71de0],EBX      ; 004e6c32 | g_CHAR_PTR_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004e6c38 | g_INT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 004e6c3e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 004e6c43
    POP EBX                             ; 004e6c46
    POP ESI                             ; 004e6c47
    JMP 0x004e6bee                      ; 004e6c48
        ;   XREF to: 004e6bee (UNCONDITIONAL_JUMP)  ; LAB_004e6bee

