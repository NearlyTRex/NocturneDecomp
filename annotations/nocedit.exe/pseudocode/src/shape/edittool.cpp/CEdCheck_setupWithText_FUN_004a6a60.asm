; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_004a6a60(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; char *           Stack[0x10]:4   checkbox_text
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 005398fd
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00622eae
;   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
;   char s_EmptyString_00623fa1 = \x00
;   TerminatedCString s_CElephantGun_00623fa2
;   undefined4 s_ElephantGun_00623fa3
;   undefined4 s_lephantGun_00623fa4
;   CBitFont* g_EditorFont
;   int g_FontCharacterHeight
;   int g_FontCharacterWidth
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6a60
        ;   Label: shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60
    PUSH ESI                            ; 004a6a61
    PUSH EDI                            ; 004a6a62
    PUSH EBP                            ; 004a6a63
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a6a64
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a6a68
    TEST ESI,ESI                        ; 004a6a6c
    JNZ 0x004a6a75                      ; 004a6a6e
        ;   XREF to: 004a6a75 (CONDITIONAL_JUMP)  ; LAB_004a6a75
    MOV ESI,0x623fa1                    ; 004a6a70 | s_EmptyString_00623fa1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a6a75
        ;   Label: LAB_004a6a75
    MOV dword ptr [EBX + 0x10],EAX      ; 004a6a79
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a6a7c
    LEA EDI,[EBX + 0x24]                ; 004a6a80
    MOV dword ptr [EBX + 0x14],EAX      ; 004a6a83
    PUSH EDI                            ; 004a6a86
    MOV AL,byte ptr [ESI]               ; 004a6a87 | s_EmptyString_00623fa1 | s_ElephantGun_00623fa3
        ;   Label: LAB_004a6a87
    MOV byte ptr [EDI],AL               ; 004a6a89
    CMP AL,0x0                          ; 004a6a8b
    JZ 0x004a6a9f                       ; 004a6a8d
        ;   XREF to: 004a6a9f (CONDITIONAL_JUMP)  ; LAB_004a6a9f
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6a8f | = "CElephantGun" | s_lephantGun_00623fa4
    ADD ESI,0x2                         ; 004a6a92
    MOV byte ptr [EDI + 0x1],AL         ; 004a6a95
    ADD EDI,0x2                         ; 004a6a98
    CMP AL,0x0                          ; 004a6a9b
    JNZ 0x004a6a87                      ; 004a6a9d
        ;   XREF to: 004a6a87 (CONDITIONAL_JUMP)  ; LAB_004a6a87
    POP EDI                             ; 004a6a9f
        ;   Label: LAB_004a6a9f
    CMP dword ptr [0x02cf1cd0],0x0      ; 004a6aa0 | g_EditorFont
    JZ 0x004a6b1a                       ; 004a6aa7
        ;   XREF to: 004a6b1a (CONDITIONAL_JUMP)  ; LAB_004a6b1a
    MOV EAX,[0x02cf1cd0]                ; 004a6aa9 | g_EditorFont
        ;   Label: LAB_004a6aa9
    PUSH 0x6a                           ; 004a6aae
    MOV ESI,dword ptr [EAX + 0x3168]    ; 004a6ab0
    PUSH EAX                            ; 004a6ab6
    MOV dword ptr [0x02cf2668],ESI      ; 004a6ab7 | g_FontCharacterHeight
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004a6abd
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a6ac2
    LEA ESI,[EBX + 0x24]                ; 004a6ac5
    PUSH ESI                            ; 004a6ac8
    MOV EDI,dword ptr [0x02cf1cd0]      ; 004a6ac9 | g_EditorFont
    PUSH EDI                            ; 004a6acf
    MOV [0x02cf266c],EAX                ; 004a6ad0 | g_FontCharacterWidth
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40 ; 004a6ad5
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    MOV EDI,EAX                         ; 004a6ada
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a6adc
    ADD ESP,0x8                         ; 004a6adf
    ADD EAX,EDI                         ; 004a6ae2
    PUSH EBX                            ; 004a6ae4
    MOV dword ptr [EBX + 0x1c],EAX      ; 004a6ae5
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70 ; 004a6ae8
        ;   XREF to: 004a6b70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 004a6aed
    MOV EDI,dword ptr [EBX + 0x10]      ; 004a6af0
    PUSH EBX                            ; 004a6af3
    ADD EDI,EAX                         ; 004a6af4
    CALL shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0 ; 004a6af6
        ;   XREF to: 004a6be0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 004a6afb
    PUSH ESI                            ; 004a6afe
    MOV EBP,dword ptr [0x02cf1cd0]      ; 004a6aff | g_EditorFont
    PUSH EBP                            ; 004a6b05
    ADD EDI,EAX                         ; 004a6b06
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004a6b08
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD EDI,EAX                         ; 004a6b0d
    ADD ESP,0x8                         ; 004a6b0f
    MOV dword ptr [EBX + 0x18],EDI      ; 004a6b12
    POP EBP                             ; 004a6b15
    POP EDI                             ; 004a6b16
    POP ESI                             ; 004a6b17
    POP EBX                             ; 004a6b18
    RET                                 ; 004a6b19
    MOV ECX,0x622eae                    ; 004a6b1a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004a6b1a
    MOV ESI,0x8d                        ; 004a6b1f
    PUSH 0x622ec4                       ; 004a6b24 | = "gEdFont must be set by the application."
    MOV dword ptr [0x02f0ca48],ECX      ; 004a6b29 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004a6b2f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a6b35
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a6b3a
    JMP 0x004a6aa9                      ; 004a6b3d
        ;   XREF to: 004a6aa9 (UNCONDITIONAL_JUMP)  ; LAB_004a6aa9

