; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0 at 0049dfc2
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 at 004a0e81
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623426
;   TerminatedCString s_CEditorTools_popWindow_c_0062343c
;   TerminatedCString s_shape_edittool_cpp_00623477
;   int g_WindowStackCount
;   SWindow[5] g_WindowStack
;   undefined4 g_WindowStack[0].saved_clip_left
;   undefined4 g_WindowStack[0].saved_clip_top
;   undefined4 g_WindowStack[0].saved_clip_right
;   undefined4 g_WindowStack[0].saved_clip_bottom
;   undefined4 g_WindowStack[0].saved_viewport_center_x
;   undefined4 g_WindowStack[0].saved_viewport_center_y
;   undefined4 g_WindowStack[0].saved_viewport_right
;   undefined4 g_WindowStack[0].saved_viewport_bottom
;   undefined4 g_WindowStack[0].saved_viewport_width
;   undefined4 g_WindowStack[0].saved_viewport_height
;   ... and 13 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0ea0
        ;   Label: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
    PUSH ESI                            ; 004a0ea1
    PUSH EDI                            ; 004a0ea2
    CMP dword ptr [0x02cf1cdc],0x1      ; 004a0ea3 | g_WindowStackCount
    JL 0x004a0f30                       ; 004a0eaa
        ;   XREF to: 004a0f30 (CONDITIONAL_JUMP)  ; LAB_004a0f30
    MOV ESI,dword ptr [0x02cf1cdc]      ; 004a0eb0 | g_WindowStackCount
        ;   Label: LAB_004a0eb0
    DEC ESI                             ; 004a0eb6
    MOV EBX,ESI                         ; 004a0eb7
    SHL EBX,0x4                         ; 004a0eb9
    SUB EBX,ESI                         ; 004a0ebc
    SHL EBX,0x2                         ; 004a0ebe
    ADD EBX,ESI                         ; 004a0ec1
    SHL EBX,0x3                         ; 004a0ec3
    ADD EBX,0x2cf1ce0                   ; 004a0ec6 | g_WindowStack
    MOV EDI,dword ptr [EBX + 0x1c8]     ; 004a0ecc | g_WindowStack[0].screen_backup_buffer
    MOV dword ptr [0x02cf1cdc],ESI      ; 004a0ed2 | g_WindowStackCount
    TEST EDI,EDI                        ; 004a0ed8
    JNZ 0x004a0f58                      ; 004a0eda
        ;   XREF to: 004a0f58 (CONDITIONAL_JUMP)  ; LAB_004a0f58
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a0edc | g_WindowStack[0].saved_clip_left
        ;   Label: LAB_004a0edc
    MOV [0x02d02558],EAX                ; 004a0edf | g_ClipLeft
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a0ee4 | g_WindowStack[0].saved_clip_top
    MOV [0x02d0255c],EAX                ; 004a0ee7 | g_ClipTop
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a0eec | g_WindowStack[0].saved_clip_right
    MOV [0x02d02560],EAX                ; 004a0eef | g_ClipRight
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a0ef4 | g_WindowStack[0].saved_clip_bottom
    MOV [0x02d02564],EAX                ; 004a0ef7 | g_ClipBottom
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a0efc | g_WindowStack[0].saved_viewport_center_x
    MOV [0x02d02548],EAX                ; 004a0eff | g_ViewportCenterXFixed
    MOV EAX,dword ptr [EBX + 0x24]      ; 004a0f04 | g_WindowStack[0].saved_viewport_center_y
    MOV [0x02d0254c],EAX                ; 004a0f07 | g_ViewportCenterYFixed
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a0f0c | g_WindowStack[0].saved_viewport_right
    MOV [0x02d02550],EAX                ; 004a0f0f | g_ViewportRightFixed
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004a0f14 | g_WindowStack[0].saved_viewport_bottom
    MOV [0x02d02554],EAX                ; 004a0f17 | g_ViewportBottomFixed
    MOV EAX,dword ptr [EBX + 0x30]      ; 004a0f1c | g_WindowStack[0].saved_viewport_width
    MOV [0x02d02568],EAX                ; 004a0f1f | g_ViewportWidth
    MOV EAX,dword ptr [EBX + 0x34]      ; 004a0f24 | g_WindowStack[0].saved_viewport_height
    MOV [0x02d0256c],EAX                ; 004a0f27 | g_ViewportHeight
    POP EDI                             ; 004a0f2c
    POP ESI                             ; 004a0f2d
    POP EBX                             ; 004a0f2e
    RET                                 ; 004a0f2f
    MOV ECX,0x623426                    ; 004a0f30 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a0f30
    MOV EBX,0x856                       ; 004a0f35
    PUSH 0x62343c                       ; 004a0f3a | = "CEditorTools::popWindow() called but ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a0f3f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a0f45 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a0f4b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a0f50
    JMP 0x004a0eb0                      ; 004a0f53
        ;   XREF to: 004a0eb0 (UNCONDITIONAL_JUMP)  ; LAB_004a0eb0
    PUSH 0x861                          ; 004a0f58
        ;   Label: LAB_004a0f58
    PUSH 0x623477                       ; 004a0f5d | = "..\\shape\\edittool.cpp"
    PUSH EDI                            ; 004a0f62
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004a0f63
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004a0f68
    MOV dword ptr [EBX + 0x1c8],0x0     ; 004a0f6b | g_WindowStack[0].screen_backup_buffer
    JMP 0x004a0edc                      ; 004a0f75
        ;   XREF to: 004a0edc (UNCONDITIONAL_JUMP)  ; LAB_004a0edc

