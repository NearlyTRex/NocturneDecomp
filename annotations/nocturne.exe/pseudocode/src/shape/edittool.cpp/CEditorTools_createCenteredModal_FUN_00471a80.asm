; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   min_width
; int              Stack[0xc]:4   min_height
; char *           Stack[0x10]:4   text_content
; uint             Stack[0x14]:4   window_flags
;
; XREF[9]:
;   core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 at 004cfbf8
;   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_004701a0 at 004701ef
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660 at 004716e4
;   shape_edittool.cpp_CEditorTools_showError_FUN_0046fcd0 at 0046fdb6
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0 at 00470f40
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0046fe60 at 0046ff46
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0046fb40 at 0046fc26
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00475470 at 00475806
;   shape_edittool.cpp_showTextInputDialog_FUN_0046f7e0 at 0046f888
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471a80
        ;   Label: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
    PUSH ESI                            ; 00471a81
    PUSH EDI                            ; 00471a82
    PUSH EBP                            ; 00471a83
    MOV EBX,dword ptr [ESP + 0x18]      ; 00471a84
    MOV ESI,dword ptr [ESP + 0x20]      ; 00471a88
    CMP dword ptr [0x01bcd070],0x0      ; 00471a8c | DAT_01bcd070
    JNZ 0x00471ab8                      ; 00471a93
        ;   XREF to: 00471ab8 (CONDITIONAL_JUMP)  ; LAB_00471ab8
    MOV ECX,0x57e4fa                    ; 00471a95 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x8b                        ; 00471a9a
    PUSH 0x57e510                       ; 00471a9f | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 00471aa4 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00471aaa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00471ab0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00471ab5
    MOV EAX,[0x01bcd070]                ; 00471ab8 | DAT_01bcd070
        ;   Label: LAB_00471ab8
    PUSH 0x6a                           ; 00471abd
    MOV EDX,dword ptr [EAX + 0x3168]    ; 00471abf
    PUSH EAX                            ; 00471ac5
    MOV dword ptr [0x01bcd9b8],EDX      ; 00471ac6 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00471acc
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00471ad1
    MOV [0x01bcd9bc],EAX                ; 00471ad4 | DAT_01bcd9bc
    TEST ESI,ESI                        ; 00471ad9
    JNZ 0x00471b31                      ; 00471adb
        ;   XREF to: 00471b31 (CONDITIONAL_JUMP)  ; LAB_00471b31
    MOV EDX,dword ptr [0x005b761c]      ; 00471add | g_WindowWidth
        ;   Label: LAB_00471add
    SUB EDX,EBX                         ; 00471ae3
    MOV EAX,EDX                         ; 00471ae5
    SAR EDX,0x1f                        ; 00471ae7
    SUB EAX,EDX                         ; 00471aea
    SAR EAX,0x1                         ; 00471aec
    MOV EDX,dword ptr [0x005b7620]      ; 00471aee | g_WindowHeight
    MOV ECX,EAX                         ; 00471af4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00471af6
    SUB EDX,EAX                         ; 00471afa
    MOV EAX,EDX                         ; 00471afc
    SAR EDX,0x1f                        ; 00471afe
    SUB EAX,EDX                         ; 00471b01
    SAR EAX,0x1                         ; 00471b03
    MOV EDI,dword ptr [ESP + 0x24]      ; 00471b05
    PUSH EDI                            ; 00471b09
    MOV EBX,dword ptr [0x005b7620]      ; 00471b0a | g_WindowHeight
    PUSH ESI                            ; 00471b10
    SUB EBX,EAX                         ; 00471b11
    MOV EDX,dword ptr [0x005b761c]      ; 00471b13 | g_WindowWidth
    PUSH EBX                            ; 00471b19
    SUB EDX,ECX                         ; 00471b1a
    PUSH EDX                            ; 00471b1c
    PUSH EAX                            ; 00471b1d
    PUSH ECX                            ; 00471b1e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00471b1f
    PUSH EBP                            ; 00471b23
    CALL shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50 ; 00471b24
        ;   XREF to: 00471b50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50(CEditorTools * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x1c                        ; 00471b29
    POP EBP                             ; 00471b2c
    POP EDI                             ; 00471b2d
    POP ESI                             ; 00471b2e
    POP EBX                             ; 00471b2f
    RET                                 ; 00471b30
    PUSH ESI                            ; 00471b31
        ;   Label: LAB_00471b31
    MOV EBP,dword ptr [0x01bcd070]      ; 00471b32 | DAT_01bcd070
    PUSH EBP                            ; 00471b38
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00471b39
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00471b3e
    CMP EBX,EAX                         ; 00471b41
    JGE 0x00471add                      ; 00471b43
        ;   XREF to: 00471add (CONDITIONAL_JUMP)  ; LAB_00471add
    MOV EBX,EAX                         ; 00471b45
    JMP 0x00471add                      ; 00471b47
        ;   XREF to: 00471add (UNCONDITIONAL_JUMP)  ; LAB_00471add

