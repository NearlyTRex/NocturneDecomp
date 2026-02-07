; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_00510a50(char *message_text)
;
; Parameters:
; char *           Stack[0x4]:4   message_text
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[1]:
;   core_menu.cpp_showCalibrationTest_FUN_00510ba0 at 00510c07
;
; Referenced Globals:
;   TerminatedCString s_Press_any_key_to_continu_00636657
;   TerminatedCString s_Monitor_calibration_00636674
;   CBitFont* g_SmallEditorFont
;   CAlphaBitmap g_CalibrationBitmap
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510a50
        ;   Label: core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
    PUSH ESI                            ; 00510a51
    PUSH EDI                            ; 00510a52
    PUSH EBP                            ; 00510a53
    SUB ESP,0x100                       ; 00510a54
    MOV ESI,dword ptr [ESP + 0x114]     ; 00510a5a
    MOV EDI,ESP                         ; 00510a61
    PUSH EDI                            ; 00510a63
    MOV AL,byte ptr [ESI]               ; 00510a64
        ;   Label: LAB_00510a64
    MOV byte ptr [EDI],AL               ; 00510a66
    CMP AL,0x0                          ; 00510a68
    JZ 0x00510a7c                       ; 00510a6a
        ;   XREF to: 00510a7c (CONDITIONAL_JUMP)  ; LAB_00510a7c
    MOV AL,byte ptr [ESI + 0x1]         ; 00510a6c
    ADD ESI,0x2                         ; 00510a6f
    MOV byte ptr [EDI + 0x1],AL         ; 00510a72
    ADD EDI,0x2                         ; 00510a75
    CMP AL,0x0                          ; 00510a78
    JNZ 0x00510a64                      ; 00510a7a
        ;   XREF to: 00510a64 (CONDITIONAL_JUMP)  ; LAB_00510a64
    POP EDI                             ; 00510a7c
        ;   Label: LAB_00510a7c
    PUSH 0x636657                       ; 00510a7d | = "  Press any key to continue."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510a82
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00510a87
    MOV EDI,ESP                         ; 00510a8a
    MOV ESI,EAX                         ; 00510a8c
    PUSH EDI                            ; 00510a8e
    SUB ECX,ECX                         ; 00510a8f
    DEC ECX                             ; 00510a91
    MOV AL,0x0                          ; 00510a92
    SCASB.REPNE ES:EDI                  ; 00510a94
    DEC EDI                             ; 00510a96
    MOV AL,byte ptr [ESI]               ; 00510a97
        ;   Label: LAB_00510a97
    MOV byte ptr [EDI],AL               ; 00510a99
    CMP AL,0x0                          ; 00510a9b
    JZ 0x00510aaf                       ; 00510a9d
        ;   XREF to: 00510aaf (CONDITIONAL_JUMP)  ; LAB_00510aaf
    MOV AL,byte ptr [ESI + 0x1]         ; 00510a9f
    ADD ESI,0x2                         ; 00510aa2
    MOV byte ptr [EDI + 0x1],AL         ; 00510aa5
    ADD EDI,0x2                         ; 00510aa8
    CMP AL,0x0                          ; 00510aab
    JNZ 0x00510a97                      ; 00510aad
        ;   XREF to: 00510a97 (CONDITIONAL_JUMP)  ; LAB_00510a97
    POP EDI                             ; 00510aaf
        ;   Label: LAB_00510aaf
    PUSH 0x58                           ; 00510ab0
    MOV EDX,dword ptr [0x020a5724]      ; 00510ab2 | g_SmallEditorFont
    PUSH EDX                            ; 00510ab8
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00510ab9
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00510abe
    MOV EDI,EAX                         ; 00510ac1
    MOV EAX,ESP                         ; 00510ac3
    PUSH EAX                            ; 00510ac5
    MOV ECX,dword ptr [0x020a5724]      ; 00510ac6 | g_SmallEditorFont
    PUSH ECX                            ; 00510acc
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00510acd
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00510ad2
    MOV ESI,EAX                         ; 00510ad5
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00510ad7
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0xffff                         ; 00510adc
    PUSH 0x0                            ; 00510ae1
    PUSH 0x0                            ; 00510ae3
    PUSH 0x2f26cbc                      ; 00510ae5 | g_CalibrationBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 00510aea
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,EDI                         ; 00510aef
    ADD ESP,0x10                        ; 00510af1
    LEA EDX,[EAX*0x4 + 0x0]             ; 00510af4
    PUSH -0x1                           ; 00510afb
    SUB EDX,EAX                         ; 00510afd
    MOV EAX,0x1e0                       ; 00510aff
    PUSH 0xf8                           ; 00510b04
    SUB EAX,EDX                         ; 00510b09
    PUSH EAX                            ; 00510b0b
    MOV EDX,ESI                         ; 00510b0c
    MOV EAX,ESI                         ; 00510b0e
    SAR EDX,0x1f                        ; 00510b10
    SUB EAX,EDX                         ; 00510b13
    SAR EAX,0x1                         ; 00510b15
    MOV EDX,0x140                       ; 00510b17
    SUB EDX,EAX                         ; 00510b1c
    PUSH EDX                            ; 00510b1e
    LEA EAX,[ESP + 0x10]                ; 00510b1f
    PUSH EAX                            ; 00510b23
    MOV EBX,dword ptr [0x020a5724]      ; 00510b24 | g_SmallEditorFont
    PUSH EBX                            ; 00510b2a
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 00510b2b
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00510b30
    PUSH 0x636674                       ; 00510b33 | = "Monitor calibration"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510b38
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00510b3d
    PUSH EAX                            ; 00510b40
    MOV EBP,dword ptr [0x020a5724]      ; 00510b41 | g_SmallEditorFont
    PUSH EBP                            ; 00510b47
    MOV ESI,EAX                         ; 00510b48
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00510b4a
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 00510b4f
    SAR EDX,0x1f                        ; 00510b51
    SUB EAX,EDX                         ; 00510b54
    SAR EAX,0x1                         ; 00510b56
    ADD ESP,0x8                         ; 00510b58
    PUSH -0x1                           ; 00510b5b
    PUSH 0xf8                           ; 00510b5d
    ADD EDI,EDI                         ; 00510b62
    MOV EDX,0x140                       ; 00510b64
    PUSH EDI                            ; 00510b69
    SUB EDX,EAX                         ; 00510b6a
    PUSH EDX                            ; 00510b6c
    PUSH ESI                            ; 00510b6d
    MOV EAX,[0x020a5724]                ; 00510b6e | g_SmallEditorFont
    PUSH EAX                            ; 00510b73
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 00510b74
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00510b79
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00510b7c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00510b81
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00510b86
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    ADD ESP,0x100                       ; 00510b8b
    POP EBP                             ; 00510b91
    POP EDI                             ; 00510b92
    POP ESI                             ; 00510b93
    POP EBX                             ; 00510b94
    RET                                 ; 00510b95

