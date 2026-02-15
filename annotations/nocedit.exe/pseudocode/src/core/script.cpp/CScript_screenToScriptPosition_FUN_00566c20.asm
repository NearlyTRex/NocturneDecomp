; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_screenToScriptPosition_FUN_00566c20(CScript *this_ptr,int pixel_x,int pixel_y,int *column_out,int *line_out)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   pixel_x
; int              Stack[0xc]:4   pixel_y
; int *            Stack[0x10]:4   column_out
; int *            Stack[0x14]:4   line_out
;
; XREF[2]:
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 005656eb
;   core_script.cpp_CScript_updateMouseCursor_FUN_00566bc0 at 00566be1
;
; Referenced Globals:
;   CEdScrollBar g_ScriptEditorVScrollBar
;   CEdScrollBar g_ScriptEditorHScrollBar
;   int g_ScriptTextAreaLeft
;   int g_ScriptTextAreaTop
;   int g_ScriptTextAreaRight
;   int g_ScriptTextAreaBottom
;   int g_ScriptEditorCharWidth
;   int g_ScriptEditorLineHeight
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566c20
        ;   Label: core_script.cpp_CScript_screenToScriptPosition_FUN_00566c20
    PUSH ESI                            ; 00566c21
    PUSH EDI                            ; 00566c22
    MOV ECX,dword ptr [0x03114204]      ; 00566c23 | g_ScriptEditorCharWidth
    MOV ESI,dword ptr [ESP + 0x14]      ; 00566c29
    MOV EBX,dword ptr [ESP + 0x18]      ; 00566c2d
    MOV EDX,dword ptr [0x031141e0]      ; 00566c31 | g_ScriptTextAreaLeft
    CMP ESI,EDX                         ; 00566c37
    JL 0x00566c55                       ; 00566c39
        ;   XREF to: 00566c55 (CONDITIONAL_JUMP)  ; LAB_00566c55
    MOV EDI,dword ptr [0x031141e4]      ; 00566c3b | g_ScriptTextAreaTop
    CMP EBX,EDI                         ; 00566c41
    JL 0x00566c55                       ; 00566c43
        ;   XREF to: 00566c55 (CONDITIONAL_JUMP)  ; LAB_00566c55
    CMP ESI,dword ptr [0x031141e8]      ; 00566c45 | g_ScriptTextAreaRight
    JGE 0x00566c55                      ; 00566c4b
        ;   XREF to: 00566c55 (CONDITIONAL_JUMP)  ; LAB_00566c55
    CMP EBX,dword ptr [0x031141ec]      ; 00566c4d | g_ScriptTextAreaBottom
    JL 0x00566c61                       ; 00566c53
        ;   XREF to: 00566c61 (CONDITIONAL_JUMP)  ; LAB_00566c61
    XOR EAX,EAX                         ; 00566c55
        ;   Label: LAB_00566c55
    MOV dword ptr [0x03114204],ECX      ; 00566c57 | g_ScriptEditorCharWidth
    POP EDI                             ; 00566c5d
    POP ESI                             ; 00566c5e
    POP EBX                             ; 00566c5f
    RET                                 ; 00566c60
    SUB ESI,EDX                         ; 00566c61
        ;   Label: LAB_00566c61
    MOV EDX,ECX                         ; 00566c63
    MOV EAX,ECX                         ; 00566c65
    SAR EDX,0x1f                        ; 00566c67
    SUB EAX,EDX                         ; 00566c6a
    SAR EAX,0x1                         ; 00566c6c
    LEA EDX,[ESI + EAX*0x1]             ; 00566c6e
    MOV EAX,EDX                         ; 00566c71
    SAR EDX,0x1f                        ; 00566c73
    IDIV ECX                            ; 00566c76
    MOV EDX,dword ptr [0x0310fd0c]      ; 00566c78 | g_ScriptEditorHScrollBar
    ADD EAX,EDX                         ; 00566c7e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00566c80
    MOV dword ptr [EDX],EAX             ; 00566c84
    MOV EDX,EBX                         ; 00566c86
    SUB EDX,EDI                         ; 00566c88
    MOV EDI,dword ptr [0x03114208]      ; 00566c8a | g_ScriptEditorLineHeight
    MOV EAX,EDX                         ; 00566c90
    SAR EDX,0x1f                        ; 00566c92
    IDIV EDI                            ; 00566c95
    MOV EDX,dword ptr [0x0310fcd8]      ; 00566c97 | g_ScriptEditorVScrollBar
    ADD EAX,EDX                         ; 00566c9d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00566c9f
    MOV dword ptr [EDX],EAX             ; 00566ca3
    MOV EAX,0x1                         ; 00566ca5
    MOV dword ptr [0x03114204],ECX      ; 00566caa | g_ScriptEditorCharWidth
    POP EDI                             ; 00566cb0
    POP ESI                             ; 00566cb1
    POP EBX                             ; 00566cb2
    RET                                 ; 00566cb3

