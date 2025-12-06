; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_init_FUN_0049e020(CEditorTools * this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80 at 0049dfa1
;
; Referenced Globals:
;   undefined4 DAT_02cf2a78
;   int g_WindowBorderColor1
;   int g_WindowBorderColor2
;   int g_TitleBarColor
;   int g_WindowFillColor
;   int g_WindowFontColor
;   HWND g_DialogParentWindow
;   CEditorTools* g_CUserInterfacePtr
;   int g_SelectionColor
;   int g_TextColor
;   int g_CursorColor
;   int g_StatusTextColor
;   int g_WindowStatusTextColor
;   undefined4 DAT_02cf2aac
;   int g_ButtonColor
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e020
        ;   Label: shape_edittool.cpp_CEditorTools_init_FUN_0049e020
    PUSH ESI                            ; 0049e021
    PUSH EDI                            ; 0049e022
    PUSH EBP                            ; 0049e023
    MOV ECX,0x7                         ; 0049e024
    MOV ESI,0xfb                        ; 0049e029
    MOV EBP,0xff                        ; 0049e02e
    MOV EBX,0x4                         ; 0049e033
    XOR EDX,EDX                         ; 0049e038
    MOV dword ptr [0x02cf2a7c],ECX      ; 0049e03a | int g_WindowBorderColor1
    MOV dword ptr [0x02cf2a80],ECX      ; 0049e040 | int g_WindowBorderColor2
    MOV dword ptr [0x02cf2a88],EDX      ; 0049e046 | int g_WindowFillColor
    MOV dword ptr [0x02cf2a78],EDX      ; 0049e04c | undefined4 DAT_02cf2a78
    MOV dword ptr [0x02cf2a84],ESI      ; 0049e052 | int g_TitleBarColor
    MOV dword ptr [0x02cf2a8c],EBP      ; 0049e058 | int g_WindowFontColor
    MOV dword ptr [0x02cf2a90],EBP      ; 0049e05e | HWND g_DialogParentWindow
    MOV dword ptr [0x02cf2a94],EBP      ; 0049e064 | CEditorTools * g_CUserInterfacePtr
    MOV dword ptr [0x02cf2a9c],EBP      ; 0049e06a | int g_TextColor
    MOV dword ptr [0x02cf2aa0],EBP      ; 0049e070 | int g_CursorColor
    MOV EDI,EBP                         ; 0049e076
    MOV dword ptr [0x02cf2aa4],EBP      ; 0049e078 | int g_StatusTextColor
    MOV dword ptr [0x02cf2aa8],EBP      ; 0049e07e | int g_WindowStatusTextColor
    MOV dword ptr [0x02cf2aac],EBP      ; 0049e084 | undefined4 DAT_02cf2aac
    MOV dword ptr [0x02cf2ab8],EBX      ; 0049e08a | int g_ProgressBarFillColor
    MOV dword ptr [0x02cf2abc],EBP      ; 0049e090 | int g_ProgressBarBorderColor
    MOV dword ptr [0x02cf2ac0],EBP      ; 0049e096 | int g_ProgressBarTextColor
    MOV dword ptr [0x02cf2ac4],EBP      ; 0049e09c | int g_AxisLabelTextColor
    MOV dword ptr [0x02cf2ac8],EBP      ; 0049e0a2 | int g_EnabledTextColor
    MOV dword ptr [0x02cf2af0],EBP      ; 0049e0a8 | int g_HighlightColor
    MOV ECX,0x4                         ; 0049e0ae
    MOV EDX,0xfa                        ; 0049e0b3
    MOV EBX,0xfa                        ; 0049e0b8
    MOV ESI,0x7                         ; 0049e0bd
    XOR EDI,EBP                         ; 0049e0c2
    MOV dword ptr [0x02cf2a98],ECX      ; 0049e0c4 | int g_SelectionColor
    MOV dword ptr [0x02cf2ab0],EDX      ; 0049e0ca | int g_ButtonColor
    MOV dword ptr [0x02cf2ad4],EBX      ; 0049e0d0 | int g_HighlightColor1
    MOV dword ptr [0x02cf2ad8],ESI      ; 0049e0d6 | int g_HighlightColor2
    MOV dword ptr [0x02cf2adc],EDI      ; 0049e0dc | int g_ShadowColor
    MOV dword ptr [0x02cf2ae0],ESI      ; 0049e0e2 | int g_ShadowHighlightColor
    MOV dword ptr [0x02cf2ae4],ESI      ; 0049e0e8 | int g_ButtonFaceColor
    MOV EDX,0xf8                        ; 0049e0ee
    XOR ECX,ECX                         ; 0049e0f3
    MOV ESI,0xf8                        ; 0049e0f5
    MOV dword ptr [0x02cf2ab4],ECX      ; 0049e0fa | int g_ProgressBarBackgroundColor
    MOV dword ptr [0x02cf2acc],EDX      ; 0049e100 | int g_BackgroundColor1
    MOV dword ptr [0x02cf2af4],ESI      ; 0049e106 | int g_BackgroundColor2
    MOV ECX,0x2                         ; 0049e10c
    XOR EDX,EDX                         ; 0049e111
    MOV dword ptr [0x02cf2ad0],ECX      ; 0049e113 | int g_SelectionHighlightColor
    MOV dword ptr [0x02cf2ae8],EDX      ; 0049e119 | int g_UITextColor
    MOV dword ptr [0x02cf2aec],EDX      ; 0049e11f | int g_InsetColor
    POP EBP                             ; 0049e125
    POP EDI                             ; 0049e126
    POP ESI                             ; 0049e127
    POP EBX                             ; 0049e128
    RET                                 ; 0049e129

