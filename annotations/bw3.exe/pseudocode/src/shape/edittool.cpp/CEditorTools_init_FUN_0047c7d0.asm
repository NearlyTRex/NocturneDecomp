; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_0047c7d0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0047c740 at 0047c761
;
; Referenced Globals:
;   int g_WindowContentColor
;   int g_WindowBorderHighlightColor
;   int g_WindowBorderShadowColor
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

    PUSH EBX                            ; 0047c7d0
        ;   Label: shape_edittool.cpp_CEditorTools_init_FUN_0047c7d0
    PUSH ESI                            ; 0047c7d1
    PUSH EDI                            ; 0047c7d2
    PUSH EBP                            ; 0047c7d3
    MOV ECX,0x7                         ; 0047c7d4
    MOV ESI,0xfb                        ; 0047c7d9
    MOV EBP,0xff                        ; 0047c7de
    MOV EBX,0x4                         ; 0047c7e3
    XOR EDX,EDX                         ; 0047c7e8
    MOV dword ptr [0x01c5baf4],ECX      ; 0047c7ea | g_WindowBorderHighlightColor
    MOV dword ptr [0x01c5baf8],ECX      ; 0047c7f0 | g_WindowBorderShadowColor
    MOV dword ptr [0x01c5bb00],EDX      ; 0047c7f6 | g_TitleBarFillColor
    MOV dword ptr [0x01c5baf0],EDX      ; 0047c7fc | g_WindowContentColor
    MOV dword ptr [0x01c5bafc],ESI      ; 0047c802 | g_TitleBarColor
    MOV dword ptr [0x01c5bb04],EBP      ; 0047c808 | g_WindowFontColor
    MOV dword ptr [0x01c5bb08],EBP      ; 0047c80e | g_WarningTextColor
    MOV dword ptr [0x01c5bb0c],EBP      ; 0047c814 | g_ErrorTextColor
    MOV dword ptr [0x01c5bb14],EBP      ; 0047c81a | g_TextColor
    MOV dword ptr [0x01c5bb18],EBP      ; 0047c820 | g_CursorColor
    MOV EDI,EBP                         ; 0047c826
    MOV dword ptr [0x01c5bb1c],EBP      ; 0047c828 | g_StatusTextColor
    MOV dword ptr [0x01c5bb20],EBP      ; 0047c82e | g_WindowStatusTextColor
    MOV dword ptr [0x01c5bb24],EBP      ; 0047c834 | g_DialogTextColor
    MOV dword ptr [0x01c5bb30],EBX      ; 0047c83a | g_ProgressBarFillColor
    MOV dword ptr [0x01c5bb34],EBP      ; 0047c840 | g_ProgressBarBorderColor
    MOV dword ptr [0x01c5bb38],EBP      ; 0047c846 | g_INT_01c5bb38
    MOV dword ptr [0x01c5bb3c],EBP      ; 0047c84c | g_AxisLabelTextColor
    MOV dword ptr [0x01c5bb40],EBP      ; 0047c852 | g_EnabledTextColor
    MOV dword ptr [0x01c5bb68],EBP      ; 0047c858 | g_HighlightColor
    MOV ECX,0x4                         ; 0047c85e
    MOV EDX,0xfa                        ; 0047c863
    MOV EBX,0xfa                        ; 0047c868
    MOV ESI,0x7                         ; 0047c86d
    XOR EDI,EBP                         ; 0047c872
    MOV dword ptr [0x01c5bb10],ECX      ; 0047c874 | g_SelectionColor
    MOV dword ptr [0x01c5bb28],EDX      ; 0047c87a | g_ActiveItemTextColor
    MOV dword ptr [0x01c5bb4c],EBX      ; 0047c880 | g_ConfirmedSelectionColor
    MOV dword ptr [0x01c5bb50],ESI      ; 0047c886 | g_PickListSeparatorColor
    MOV dword ptr [0x01c5bb54],EDI      ; 0047c88c | g_ShadowColor
    MOV dword ptr [0x01c5bb58],ESI      ; 0047c892 | g_ScrollBarHighlightColor
    MOV dword ptr [0x01c5bb5c],ESI      ; 0047c898 | g_ButtonFaceColor
    MOV EDX,0xf8                        ; 0047c89e
    XOR ECX,ECX                         ; 0047c8a3
    MOV ESI,0xf8                        ; 0047c8a5
    MOV dword ptr [0x01c5bb2c],ECX      ; 0047c8aa | g_ProgressBarBackgroundColor
    MOV dword ptr [0x01c5bb44],EDX      ; 0047c8b0 | g_DisabledTextColor
    MOV dword ptr [0x01c5bb6c],ESI      ; 0047c8b6 | g_BorderBackgroundColor
    MOV ECX,0x2                         ; 0047c8bc
    XOR EDX,EDX                         ; 0047c8c1
    MOV dword ptr [0x01c5bb48],ECX      ; 0047c8c3 | g_INT_01c5bb48
    MOV dword ptr [0x01c5bb60],EDX      ; 0047c8c9 | g_UITextColor
    MOV dword ptr [0x01c5bb64],EDX      ; 0047c8cf | g_InsetColor
    POP EBP                             ; 0047c8d5
    POP EDI                             ; 0047c8d6
    POP ESI                             ; 0047c8d7
    POP EBX                             ; 0047c8d8
    RET                                 ; 0047c8d9

