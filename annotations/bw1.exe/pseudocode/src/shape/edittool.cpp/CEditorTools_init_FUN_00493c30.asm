; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_00493c30(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_ctor_FUN_00493ba0 at 00493bc1
;
; Referenced Globals:
;   int g_WindowContentColor
;   int g_INT_01c3f54c
;   int g_INT_01c3f550
;   int g_TitleBarColor
;   int g_TitleBarFillColor
;   int g_WindowFontColor
;   int g_WarningTextColor
;   int g_ErrorTextColor
;   int g_SelectionColor
;   int g_TextColor
;   int g_CursorColor
;   int g_StatusTextColor
;   int g_WindowStatusTextColor
;   int g_DialogTextColor
;   int g_ActiveItemTextColor
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493c30
        ;   Label: shape_edittool.cpp_CEditorTools_init_FUN_00493c30
    PUSH ESI                            ; 00493c31
    PUSH EDI                            ; 00493c32
    PUSH EBP                            ; 00493c33
    MOV ECX,0x7                         ; 00493c34
    MOV ESI,0xfb                        ; 00493c39
    MOV EBP,0xff                        ; 00493c3e
    MOV EBX,0x4                         ; 00493c43
    XOR EDX,EDX                         ; 00493c48
    MOV dword ptr [0x01c3f54c],ECX      ; 00493c4a | g_INT_01c3f54c
    MOV dword ptr [0x01c3f550],ECX      ; 00493c50 | g_INT_01c3f550
    MOV dword ptr [0x01c3f558],EDX      ; 00493c56 | g_TitleBarFillColor
    MOV dword ptr [0x01c3f548],EDX      ; 00493c5c | g_WindowContentColor
    MOV dword ptr [0x01c3f554],ESI      ; 00493c62 | g_TitleBarColor
    MOV dword ptr [0x01c3f55c],EBP      ; 00493c68 | g_WindowFontColor
    MOV dword ptr [0x01c3f560],EBP      ; 00493c6e | g_WarningTextColor
    MOV dword ptr [0x01c3f564],EBP      ; 00493c74 | g_ErrorTextColor
    MOV dword ptr [0x01c3f56c],EBP      ; 00493c7a | g_TextColor
    MOV dword ptr [0x01c3f570],EBP      ; 00493c80 | g_CursorColor
    MOV EDI,EBP                         ; 00493c86
    MOV dword ptr [0x01c3f574],EBP      ; 00493c88 | g_StatusTextColor
    MOV dword ptr [0x01c3f578],EBP      ; 00493c8e | g_WindowStatusTextColor
    MOV dword ptr [0x01c3f57c],EBP      ; 00493c94 | g_DialogTextColor
    MOV dword ptr [0x01c3f588],EBX      ; 00493c9a | g_ProgressBarFillColor
    MOV dword ptr [0x01c3f58c],EBP      ; 00493ca0 | g_ProgressBarBorderColor
    MOV dword ptr [0x01c3f590],EBP      ; 00493ca6 | g_INT_01c3f590
    MOV dword ptr [0x01c3f594],EBP      ; 00493cac | g_AxisLabelTextColor
    MOV dword ptr [0x01c3f598],EBP      ; 00493cb2 | g_EnabledTextColor
    MOV dword ptr [0x01c3f5c0],EBP      ; 00493cb8 | g_HighlightColor
    MOV ECX,0x4                         ; 00493cbe
    MOV EDX,0xfa                        ; 00493cc3
    MOV EBX,0xfa                        ; 00493cc8
    MOV ESI,0x7                         ; 00493ccd
    XOR EDI,EBP                         ; 00493cd2
    MOV dword ptr [0x01c3f568],ECX      ; 00493cd4 | g_SelectionColor
    MOV dword ptr [0x01c3f580],EDX      ; 00493cda | g_ActiveItemTextColor
    MOV dword ptr [0x01c3f5a4],EBX      ; 00493ce0 | g_ConfirmedSelectionColor
    MOV dword ptr [0x01c3f5a8],ESI      ; 00493ce6 | g_PickListSeparatorColor
    MOV dword ptr [0x01c3f5ac],EDI      ; 00493cec | g_ShadowColor
    MOV dword ptr [0x01c3f5b0],ESI      ; 00493cf2 | g_ScrollBarHighlightColor
    MOV dword ptr [0x01c3f5b4],ESI      ; 00493cf8 | g_ButtonFaceColor
    MOV EDX,0xf8                        ; 00493cfe
    XOR ECX,ECX                         ; 00493d03
    MOV ESI,0xf8                        ; 00493d05
    MOV dword ptr [0x01c3f584],ECX      ; 00493d0a | g_ProgressBarBackgroundColor
    MOV dword ptr [0x01c3f59c],EDX      ; 00493d10 | g_DisabledTextColor
    MOV dword ptr [0x01c3f5c4],ESI      ; 00493d16 | g_BorderBackgroundColor
    MOV ECX,0x2                         ; 00493d1c
    XOR EDX,EDX                         ; 00493d21
    MOV dword ptr [0x01c3f5a0],ECX      ; 00493d23 | g_INT_01c3f5a0
    MOV dword ptr [0x01c3f5b8],EDX      ; 00493d29 | g_UITextColor
    MOV dword ptr [0x01c3f5bc],EDX      ; 00493d2f | g_InsetColor
    POP EBP                             ; 00493d35
    POP EDI                             ; 00493d36
    POP ESI                             ; 00493d37
    POP EBX                             ; 00493d38
    RET                                 ; 00493d39

