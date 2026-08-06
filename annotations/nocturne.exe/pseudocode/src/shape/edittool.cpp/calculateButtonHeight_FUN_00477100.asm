; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00477100(char *button_text)
;
; Parameters:
; char *           Stack[0x4]:4   button_text
;
; XREF[1]:
;   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0 at 00476eb8
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
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
;   engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477100
        ;   Label: shape_edittool.cpp_calculateButtonHeight_FUN_00477100
    PUSH EDI                            ; 00477101
    MOV EBX,dword ptr [ESP + 0xc]       ; 00477102
    CMP dword ptr [0x01bcd070],0x0      ; 00477106 | DAT_01bcd070
    JNZ 0x00477134                      ; 0047710d
        ;   XREF to: 00477134 (CONDITIONAL_JUMP)  ; LAB_00477134
    PUSH ESI                            ; 0047710f
    MOV ECX,0x57e4fa                    ; 00477110 | = "..\\shape\\edittool.cpp"
    MOV ESI,0x8b                        ; 00477115
    PUSH 0x57e510                       ; 0047711a | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 0047711f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 00477125 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0047712b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00477130
    POP ESI                             ; 00477133
    MOV EAX,[0x01bcd070]                ; 00477134 | DAT_01bcd070
        ;   Label: LAB_00477134
    PUSH 0x6a                           ; 00477139
    MOV ECX,dword ptr [EAX + 0x3168]    ; 0047713b
    PUSH EAX                            ; 00477141
    MOV dword ptr [0x01bcd9b8],ECX      ; 00477142 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00477148
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047714d
    MOV [0x01bcd9bc],EAX                ; 00477150 | DAT_01bcd9bc
    TEST EBX,EBX                        ; 00477155
    JNZ 0x0047717b                      ; 00477157
        ;   XREF to: 0047717b (CONDITIONAL_JUMP)  ; LAB_0047717b
    MOV ECX,dword ptr [0x01bcd070]      ; 00477159 | DAT_01bcd070
    MOV ECX,dword ptr [ECX + 0x316c]    ; 0047715f
    MOV EAX,[0x005b7620]                ; 00477165 | g_WindowHeight
        ;   Label: LAB_00477165
    MOV EDX,EAX                         ; 0047716a
    MOV EBX,0x50                        ; 0047716c
    SAR EDX,0x1f                        ; 00477171
    IDIV EBX                            ; 00477174
    ADD EAX,ECX                         ; 00477176
    POP EDI                             ; 00477178
    POP EBX                             ; 00477179
    RET                                 ; 0047717a
    PUSH EBX                            ; 0047717b
        ;   Label: LAB_0047717b
    MOV EDI,dword ptr [0x01bcd070]      ; 0047717c | DAT_01bcd070
    PUSH EDI                            ; 00477182
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 00477183
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00477188
    MOV ECX,EAX                         ; 0047718b
    JMP 0x00477165                      ; 0047718d
        ;   XREF to: 00477165 (UNCONDITIONAL_JUMP)  ; LAB_00477165

