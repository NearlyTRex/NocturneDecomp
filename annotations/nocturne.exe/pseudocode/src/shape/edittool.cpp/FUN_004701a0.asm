; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004701a0(CEditorTools *param_1,char *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   int g_WindowWidth = 0x140
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004701a0
        ;   Label: shape_edittool.cpp_FUN_004701a0
    PUSH EDI                            ; 004701a1
    CMP dword ptr [0x01bcd070],0x0      ; 004701a2 | DAT_01bcd070
    JZ 0x004701fa                       ; 004701a9
        ;   XREF to: 004701fa (CONDITIONAL_JUMP)  ; LAB_004701fa
    MOV EAX,[0x01bcd070]                ; 004701ab | DAT_01bcd070
        ;   Label: LAB_004701ab
    PUSH 0x6a                           ; 004701b0
    MOV EDX,dword ptr [EAX + 0x3168]    ; 004701b2
    PUSH EAX                            ; 004701b8
    MOV dword ptr [0x01bcd9b8],EDX      ; 004701b9 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004701bf
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004701c4
    MOV ECX,0x5                         ; 004701c7
    MOV EDX,dword ptr [0x005b761c]      ; 004701cc | g_WindowWidth
    PUSH 0x0                            ; 004701d2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004701d4
    MOV [0x01bcd9bc],EAX                ; 004701d8 | DAT_01bcd9bc
    PUSH ESI                            ; 004701dd
    SHL EDX,0x2                         ; 004701de
    PUSH EAX                            ; 004701e1
    MOV EAX,EDX                         ; 004701e2
    SAR EDX,0x1f                        ; 004701e4
    IDIV ECX                            ; 004701e7
    PUSH EAX                            ; 004701e9
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004701ea
    PUSH EDI                            ; 004701ee
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 004701ef
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 004701f4
    POP EDI                             ; 004701f7
    POP ESI                             ; 004701f8
    RET                                 ; 004701f9
    PUSH EBX                            ; 004701fa
        ;   Label: LAB_004701fa
    MOV ECX,0x57e4fa                    ; 004701fb | = "..\\shape\\edittool.cpp"
    MOV EBX,0x8b                        ; 00470200
    PUSH 0x57e510                       ; 00470205 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 0047020a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00470210 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00470216
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0047021b
    POP EBX                             ; 0047021e
    JMP 0x004701ab                      ; 0047021f
        ;   XREF to: 004701ab (UNCONDITIONAL_JUMP)  ; LAB_004701ab

