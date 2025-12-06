; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools * this_ptr)
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
;   undefined4 DAT_02cf1cf0
;   undefined4 DAT_02cf1cf4
;   undefined4 DAT_02cf1cf8
;   undefined4 DAT_02cf1cfc
;   undefined4 DAT_02cf1d00
;   undefined4 DAT_02cf1d04
;   undefined4 DAT_02cf1d08
;   undefined4 DAT_02cf1d0c
;   undefined4 DAT_02cf1d10
;   undefined4 DAT_02cf1d14
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
    CMP dword ptr [0x02cf1cdc],0x1      ; 004a0ea3 | int g_WindowStackCount
    JL 0x004a0f30                       ; 004a0eaa | LAB_004a0f30
        ;   XREF to: 004a0f30 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x02cf1cdc]      ; 004a0eb0 | int g_WindowStackCount
        ;   Label: LAB_004a0eb0
    DEC ESI                             ; 004a0eb6
    MOV EBX,ESI                         ; 004a0eb7
    SHL EBX,0x4                         ; 004a0eb9
    SUB EBX,ESI                         ; 004a0ebc
    SHL EBX,0x2                         ; 004a0ebe
    ADD EBX,ESI                         ; 004a0ec1
    SHL EBX,0x3                         ; 004a0ec3
    ADD EBX,0x2cf1ce0                   ; 004a0ec6 | SWindow[5] g_WindowStack
    MOV EDI,dword ptr [EBX + 0x1c8]     ; 004a0ecc | DAT_02cf1ea8
    MOV dword ptr [0x02cf1cdc],ESI      ; 004a0ed2 | int g_WindowStackCount
    TEST EDI,EDI                        ; 004a0ed8
    JNZ 0x004a0f58                      ; 004a0eda | LAB_004a0f58
        ;   XREF to: 004a0f58 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a0edc | DAT_02cf1cf0
        ;   Label: LAB_004a0edc
    MOV [0x02d02558],EAX                ; 004a0edf | int g_ClipLeft
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a0ee4 | DAT_02cf1cf4
    MOV [0x02d0255c],EAX                ; 004a0ee7 | int g_ClipTop
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a0eec | DAT_02cf1cf8
    MOV [0x02d02560],EAX                ; 004a0eef | int g_ClipRight
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a0ef4 | DAT_02cf1cfc
    MOV [0x02d02564],EAX                ; 004a0ef7 | int g_ClipBottom
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a0efc | DAT_02cf1d00
    MOV [0x02d02548],EAX                ; 004a0eff | int g_ViewportCenterXFixed
    MOV EAX,dword ptr [EBX + 0x24]      ; 004a0f04 | DAT_02cf1d04
    MOV [0x02d0254c],EAX                ; 004a0f07 | int g_ViewportCenterYFixed
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a0f0c | DAT_02cf1d08
    MOV [0x02d02550],EAX                ; 004a0f0f | int g_ViewportRightFixed
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004a0f14 | DAT_02cf1d0c
    MOV [0x02d02554],EAX                ; 004a0f17 | int g_ViewportBottomFixed
    MOV EAX,dword ptr [EBX + 0x30]      ; 004a0f1c | DAT_02cf1d10
    MOV [0x02d02568],EAX                ; 004a0f1f | int g_ViewportWidth
    MOV EAX,dword ptr [EBX + 0x34]      ; 004a0f24 | DAT_02cf1d14
    MOV [0x02d0256c],EAX                ; 004a0f27 | int g_ViewportHeight
    POP EDI                             ; 004a0f2c
    POP ESI                             ; 004a0f2d
    POP EBX                             ; 004a0f2e
    RET                                 ; 004a0f2f
    MOV ECX,0x623426                    ; 004a0f30 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623426 = ..\shape\edittool.cpp
        ;   Label: LAB_004a0f30
    MOV EBX,0x856                       ; 004a0f35
    PUSH 0x62343c                       ; 004a0f3a | = "CEditorTools::popWindow() called but ..." | s_CEditorTools_popWindow_c_0062343c = CEditorTools::popWindow() called but no window was opened!
    MOV dword ptr [0x02f0ca48],ECX      ; 004a0f3f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004a0f45 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a0f4b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a0f50
    JMP 0x004a0eb0                      ; 004a0f53 | LAB_004a0eb0
        ;   XREF to: 004a0eb0 (UNCONDITIONAL_JUMP)
    PUSH 0x861                          ; 004a0f58
        ;   Label: LAB_004a0f58
    PUSH 0x623477                       ; 004a0f5d | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_00623477 = ..\shape\edittool.cpp
    PUSH EDI                            ; 004a0f62
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004a0f63 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a0f68
    MOV dword ptr [EBX + 0x1c8],0x0     ; 004a0f6b | DAT_02cf1ea8
    JMP 0x004a0edc                      ; 004a0f75 | LAB_004a0edc
        ;   XREF to: 004a0edc (UNCONDITIONAL_JUMP)

