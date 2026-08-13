; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_004771f0(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; char *           Stack[0x10]:4   checkbox_text
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   undefined1 DAT_0057f0fb
;   TerminatedCString s_CElephantGun_0057f0fc
;   undefined4 s_CElephantGun_0057f0fc+1
;   undefined4 s_CElephantGun_0057f0fc+2
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
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004771f0
        ;   Label: shape_edittool.cpp_CEdCheck_setupWithText_FUN_004771f0
    PUSH ESI                            ; 004771f1
    PUSH EDI                            ; 004771f2
    PUSH EBP                            ; 004771f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004771f4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004771f8
    TEST ESI,ESI                        ; 004771fc
    JNZ 0x00477205                      ; 004771fe
        ;   XREF to: 00477205 (CONDITIONAL_JUMP)  ; LAB_00477205
    MOV ESI,0x57f0fb                    ; 00477200 | DAT_0057f0fb
    MOV EAX,dword ptr [ESP + 0x18]      ; 00477205
        ;   Label: LAB_00477205
    MOV dword ptr [EBX + 0x10],EAX      ; 00477209
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047720c
    LEA EDI,[EBX + 0x24]                ; 00477210
    MOV dword ptr [EBX + 0x14],EAX      ; 00477213
    PUSH EDI                            ; 00477216
    MOV AL,byte ptr [ESI]               ; 00477217 | DAT_0057f0fb | s_CElephantGun_0057f0fc+1
        ;   Label: LAB_00477217
    MOV byte ptr [EDI],AL               ; 00477219
    CMP AL,0x0                          ; 0047721b
    JZ 0x0047722f                       ; 0047721d
        ;   XREF to: 0047722f (CONDITIONAL_JUMP)  ; LAB_0047722f
    MOV AL,byte ptr [ESI + 0x1]         ; 0047721f | = "CElephantGun" | s_CElephantGun_0057f0fc+2
    ADD ESI,0x2                         ; 00477222
    MOV byte ptr [EDI + 0x1],AL         ; 00477225
    ADD EDI,0x2                         ; 00477228
    CMP AL,0x0                          ; 0047722b
    JNZ 0x00477217                      ; 0047722d
        ;   XREF to: 00477217 (CONDITIONAL_JUMP)  ; LAB_00477217
    POP EDI                             ; 0047722f
        ;   Label: LAB_0047722f
    CMP dword ptr [0x01bcd070],0x0      ; 00477230 | DAT_01bcd070
    JZ 0x004772aa                       ; 00477237
        ;   XREF to: 004772aa (CONDITIONAL_JUMP)  ; LAB_004772aa
    MOV EAX,[0x01bcd070]                ; 00477239 | DAT_01bcd070
        ;   Label: LAB_00477239
    PUSH 0x6a                           ; 0047723e
    MOV ESI,dword ptr [EAX + 0x3168]    ; 00477240
    PUSH EAX                            ; 00477246
    MOV dword ptr [0x01bcd9b8],ESI      ; 00477247 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 0047724d
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00477252
    LEA ESI,[EBX + 0x24]                ; 00477255
    PUSH ESI                            ; 00477258
    MOV EDI,dword ptr [0x01bcd070]      ; 00477259 | DAT_01bcd070
    PUSH EDI                            ; 0047725f
    MOV [0x01bcd9bc],EAX                ; 00477260 | DAT_01bcd9bc
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 00477265
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60(CBitFont * this_ptr, char * text_string)
    MOV EDI,EAX                         ; 0047726a
    MOV EAX,dword ptr [EBX + 0x14]      ; 0047726c
    ADD ESP,0x8                         ; 0047726f
    ADD EAX,EDI                         ; 00477272
    PUSH EBX                            ; 00477274
    MOV dword ptr [EBX + 0x1c],EAX      ; 00477275
    CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300 ; 00477278
        ;   XREF to: 00477300 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0047727d
    MOV EDI,dword ptr [EBX + 0x10]      ; 00477280
    PUSH EBX                            ; 00477283
    ADD EDI,EAX                         ; 00477284
    CALL shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370 ; 00477286
        ;   XREF to: 00477370 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0047728b
    PUSH ESI                            ; 0047728e
    MOV EBP,dword ptr [0x01bcd070]      ; 0047728f | DAT_01bcd070
    PUSH EBP                            ; 00477295
    ADD EDI,EAX                         ; 00477296
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 00477298
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    ADD EDI,EAX                         ; 0047729d
    ADD ESP,0x8                         ; 0047729f
    MOV dword ptr [EBX + 0x18],EDI      ; 004772a2
    POP EBP                             ; 004772a5
    POP EDI                             ; 004772a6
    POP ESI                             ; 004772a7
    POP EBX                             ; 004772a8
    RET                                 ; 004772a9
    MOV ECX,0x57e4fa                    ; 004772aa | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004772aa
    MOV ESI,0x8b                        ; 004772af
    PUSH 0x57e510                       ; 004772b4 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 004772b9 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 004772bf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004772c5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004772ca
    JMP 0x00477239                      ; 004772cd
        ;   XREF to: 00477239 (UNCONDITIONAL_JUMP)  ; LAB_00477239

