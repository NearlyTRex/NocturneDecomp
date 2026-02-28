; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pushViewport_FUN_0050e320(int x,int y,int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; XREF[5]:
;   core_msnedit.cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0 at 0053c58a
;   core_script.cpp_CScript_drawEditor_FUN_005645d0 at 00564606
;   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 at 005dc81c
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 at 0048c8a6
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 at 004a1020
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635b25
;   TerminatedCString s_Too_many_3D_windows_00635b38
;   int g_ProjectionScale = 0x10000
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;   int g_CameraRotationPitch
;   ... and 26 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_setupViewportAndClipping_FUN_00401800
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050e320
        ;   Label: engine_matrix.c_pushViewport_FUN_0050e320
    MOV EAX,[0x02f0d61c]                ; 0050e321 | g_ViewportStackIndex
    MOV EDX,dword ptr [0x02d052c4]      ; 0050e326 | g_CameraOriginX
    MOV dword ptr [EAX*0x4 + 0x2f0d6e8],EDX ; 0050e32c | g_ViewportStack_CameraX
    MOV EDX,dword ptr [0x02d052c8]      ; 0050e333 | g_CameraOriginY
    MOV dword ptr [EAX*0x4 + 0x2f0d710],EDX ; 0050e339 | g_ViewportStack_CameraY
    MOV EDX,dword ptr [0x02d052cc]      ; 0050e340 | g_CameraOriginZ
    MOV dword ptr [EAX*0x4 + 0x2f0d738],EDX ; 0050e346 | g_ViewportStack_CameraZ
    MOV EDX,dword ptr [0x02d052d0]      ; 0050e34d | g_CameraRotationPitch
    MOV dword ptr [EAX*0x4 + 0x2f0d760],EDX ; 0050e353 | g_ViewportStack_RotationPitch
    MOV EDX,dword ptr [0x02d052d4]      ; 0050e35a | g_CameraRotationYaw
    MOV dword ptr [EAX*0x4 + 0x2f0d788],EDX ; 0050e360 | g_ViewportStack_RotationYaw
    MOV EDX,dword ptr [0x02d052d8]      ; 0050e367 | g_CameraRotationRoll
    MOV dword ptr [EAX*0x4 + 0x2f0d7b0],EDX ; 0050e36d | g_ViewportStack_RotationRoll
    MOV EDX,dword ptr [0x02d052dc]      ; 0050e374 | g_LightDirectionX
    MOV dword ptr [EAX*0x4 + 0x2f0d7d8],EDX ; 0050e37a | g_ViewportStack_ExtraState1
    MOV EDX,dword ptr [0x02d052e0]      ; 0050e381 | g_LightDirectionY
    MOV dword ptr [EAX*0x4 + 0x2f0d800],EDX ; 0050e387 | g_ViewportStack_ExtraState2
    MOV EDX,dword ptr [0x02d052e4]      ; 0050e38e | g_LightDirectionZ
    MOV dword ptr [EAX*0x4 + 0x2f0d828],EDX ; 0050e394 | g_ViewportStack_ExtraState3
    MOV EDX,dword ptr [0x02d02548]      ; 0050e39b | g_ViewportCenterXFixed
    MOV dword ptr [EAX*0x4 + 0x2f0d620],EDX ; 0050e3a1 | g_ViewportStack_CenterX
    MOV EDX,dword ptr [0x02d0254c]      ; 0050e3a8 | g_ViewportCenterYFixed
    MOV dword ptr [EAX*0x4 + 0x2f0d648],EDX ; 0050e3ae | g_ViewportStack_CenterY
    MOV EDX,dword ptr [0x02d02550]      ; 0050e3b5 | g_ViewportRightFixed
    MOV dword ptr [EAX*0x4 + 0x2f0d670],EDX ; 0050e3bb | g_ViewportStack_RightFixed
    MOV EDX,dword ptr [0x02d02554]      ; 0050e3c2 | g_ViewportBottomFixed
    MOV dword ptr [EAX*0x4 + 0x2f0d698],EDX ; 0050e3c8 | g_ViewportStack_BottomFixed
    MOV EDX,dword ptr [0x006793c0]      ; 0050e3cf | g_ProjectionScale
    MOV dword ptr [EAX*0x4 + 0x2f0d6c0],EDX ; 0050e3d5 | g_ViewportStack_ProjectionScale
    MOV EDX,dword ptr [0x02d02558]      ; 0050e3dc | g_ClipLeft
    MOV dword ptr [EAX*0x4 + 0x2f0d850],EDX ; 0050e3e2 | g_ViewportStack_ClipLeft
    MOV EDX,dword ptr [0x02d02560]      ; 0050e3e9 | g_ClipRight
    MOV dword ptr [EAX*0x4 + 0x2f0d878],EDX ; 0050e3ef | g_ViewportStack_ClipRight
    MOV EDX,dword ptr [0x02d0255c]      ; 0050e3f6 | g_ClipTop
    MOV dword ptr [EAX*0x4 + 0x2f0d8a0],EDX ; 0050e3fc | g_ViewportStack_ClipTop
    MOV EDX,dword ptr [0x02d02564]      ; 0050e403 | g_ClipBottom
    MOV dword ptr [EAX*0x4 + 0x2f0d8c8],EDX ; 0050e409 | g_ViewportStack_ClipBottom
    LEA EDX,[EAX + 0x1]                 ; 0050e410
    MOV dword ptr [0x02f0d61c],EDX      ; 0050e413 | g_ViewportStackIndex
    CMP EDX,0xa                         ; 0050e419
    JGE 0x0050e451                      ; 0050e41c
        ;   XREF to: 0050e451 (CONDITIONAL_JUMP)  ; LAB_0050e451
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050e41e
        ;   Label: LAB_0050e41e
    ADD EAX,dword ptr [ESP + 0x14]      ; 0050e422
    MOV EBP,dword ptr [ESP + 0x10]      ; 0050e426
    PUSH EAX                            ; 0050e42a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050e42b
    ADD EAX,EBP                         ; 0050e42f
    PUSH EAX                            ; 0050e431
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050e432
    PUSH EAX                            ; 0050e436
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050e437
    PUSH EDX                            ; 0050e43b
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401800 ; 0050e43c
        ;   XREF to: 00401800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401800(int left, int top, int right, int bottom)
    MOV ECX,0x10000                     ; 0050e441
    ADD ESP,0x10                        ; 0050e446
    MOV dword ptr [0x006793c0],ECX      ; 0050e449 | g_ProjectionScale
    POP EBP                             ; 0050e44f
    RET                                 ; 0050e450
    PUSH ESI                            ; 0050e451
        ;   Label: LAB_0050e451
    PUSH EBX                            ; 0050e452
    MOV EBX,0x635b25                    ; 0050e453 | = "..\\engine\\matrix.c"
    MOV ESI,0x540                       ; 0050e458
    PUSH 0x635b38                       ; 0050e45d | = "Too many 3D windows"
    MOV dword ptr [0x02f0ca48],EBX      ; 0050e462 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050e468 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050e46e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050e473
    POP EBX                             ; 0050e476
    POP ESI                             ; 0050e477
    JMP 0x0050e41e                      ; 0050e478
        ;   XREF to: 0050e41e (UNCONDITIONAL_JUMP)  ; LAB_0050e41e

