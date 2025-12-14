; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_msnedit.cpp_FUN_0053c4f0 at 0053c66a
;   core_script.cpp_FUN_005645d0 at 00564725
;   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 at 005dca18
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 at 0048c8c0
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 at 004a1089
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635b4c
;   TerminatedCString s_s_3D_Window_unbalance_00635b5f
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
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02f0d61c]      ; 0050e480 | g_ViewportStackIndex
        ;   Label: engine_matrix.c_popViewport_FUN_0050e480
    DEC EDX                             ; 0050e486
    MOV dword ptr [0x02f0d61c],EDX      ; 0050e487 | g_ViewportStackIndex
    TEST EDX,EDX                        ; 0050e48d
    JL 0x0050e584                       ; 0050e48f
        ;   XREF to: 0050e584 (CONDITIONAL_JUMP)  ; LAB_0050e584
    MOV EAX,[0x02f0d61c]                ; 0050e495 | g_ViewportStackIndex
        ;   Label: LAB_0050e495
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d6e8] ; 0050e49a | g_ViewportStack_CameraX
    MOV dword ptr [0x02d052c4],EDX      ; 0050e4a1 | g_CameraOriginX
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d710] ; 0050e4a7 | g_ViewportStack_CameraY
    MOV dword ptr [0x02d052c8],EDX      ; 0050e4ae | g_CameraOriginY
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d738] ; 0050e4b4 | g_ViewportStack_CameraZ
    MOV dword ptr [0x02d052cc],EDX      ; 0050e4bb | g_CameraOriginZ
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d760] ; 0050e4c1 | g_ViewportStack_RotationPitch
    MOV dword ptr [0x02d052d0],EDX      ; 0050e4c8 | g_CameraRotationPitch
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d788] ; 0050e4ce | g_ViewportStack_RotationYaw
    MOV dword ptr [0x02d052d4],EDX      ; 0050e4d5 | g_CameraRotationYaw
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d7b0] ; 0050e4db | g_ViewportStack_RotationRoll
    MOV dword ptr [0x02d052d8],EDX      ; 0050e4e2 | g_CameraRotationRoll
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d7d8] ; 0050e4e8 | g_ViewportStack_ExtraState1
    MOV dword ptr [0x02d052dc],EDX      ; 0050e4ef | g_LightDirectionX
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d800] ; 0050e4f5 | g_ViewportStack_ExtraState2
    MOV dword ptr [0x02d052e0],EDX      ; 0050e4fc | g_LightDirectionY
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d828] ; 0050e502 | g_ViewportStack_ExtraState3
    MOV dword ptr [0x02d052e4],EDX      ; 0050e509 | g_LightDirectionZ
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d620] ; 0050e50f | g_ViewportStack_CenterX
    MOV dword ptr [0x02d02548],EDX      ; 0050e516 | g_ViewportCenterXFixed
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d648] ; 0050e51c | g_ViewportStack_CenterY
    MOV dword ptr [0x02d0254c],EDX      ; 0050e523 | g_ViewportCenterYFixed
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d670] ; 0050e529 | g_ViewportStack_RightFixed
    MOV dword ptr [0x02d02550],EDX      ; 0050e530 | g_ViewportRightFixed
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d698] ; 0050e536 | g_ViewportStack_BottomFixed
    MOV dword ptr [0x02d02554],EDX      ; 0050e53d | g_ViewportBottomFixed
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d6c0] ; 0050e543 | g_ViewportStack_ProjectionScale
    MOV dword ptr [0x006793c0],EDX      ; 0050e54a | g_ProjectionScale
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d850] ; 0050e550 | g_ViewportStack_ClipLeft
    MOV dword ptr [0x02d02558],EDX      ; 0050e557 | g_ClipLeft
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d878] ; 0050e55d | g_ViewportStack_ClipRight
    MOV dword ptr [0x02d02560],EDX      ; 0050e564 | g_ClipRight
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d8a0] ; 0050e56a | g_ViewportStack_ClipTop
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d8c8] ; 0050e571 | g_ViewportStack_ClipBottom
    MOV dword ptr [0x02d0255c],EDX      ; 0050e578 | g_ClipTop
    MOV [0x02d02564],EAX                ; 0050e57e | g_ClipBottom
    RET                                 ; 0050e583
    PUSH ESI                            ; 0050e584
        ;   Label: LAB_0050e584
    PUSH EBX                            ; 0050e585
    MOV EBX,0x635b4c                    ; 0050e586 | = "..\\engine\\matrix.c"
    MOV ESI,0x56c                       ; 0050e58b
    PUSH 0x635b5f                       ; 0050e590 | = "3D Window unbalance"
    MOV dword ptr [0x02f0ca48],EBX      ; 0050e595 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050e59b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050e5a1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050e5a6
    POP EBX                             ; 0050e5a9
    POP ESI                             ; 0050e5aa
    JMP 0x0050e495                      ; 0050e5ab
        ;   XREF to: 0050e495 (UNCONDITIONAL_JUMP)  ; LAB_0050e495

