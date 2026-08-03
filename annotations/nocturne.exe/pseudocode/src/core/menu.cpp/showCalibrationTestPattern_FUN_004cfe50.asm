; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showCalibrationTestPattern_FUN_004cfe50(char *message_text)
;
; Parameters:
; char *           Stack[0x4]:4   message_text
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[1]:
;   core_menu.cpp_showCalibrationTest_FUN_004cffa0 at 004cffdb
;
; Referenced Globals:
;   TerminatedCString s_Press_any_key_to_continu_0058854b
;   TerminatedCString s_Monitor_calibration_00588568
;   CBitFont* g_CBitFont_PTR_014b9904
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_winrun.cpp_getNextKeypress_FUN_00558b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfe50
        ;   Label: core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50
    PUSH ESI                            ; 004cfe51
    PUSH EDI                            ; 004cfe52
    PUSH EBP                            ; 004cfe53
    SUB ESP,0x100                       ; 004cfe54
    MOV ESI,dword ptr [ESP + 0x114]     ; 004cfe5a
    MOV EDI,ESP                         ; 004cfe61
    PUSH EDI                            ; 004cfe63
    MOV AL,byte ptr [ESI]               ; 004cfe64
        ;   Label: LAB_004cfe64
    MOV byte ptr [EDI],AL               ; 004cfe66
    CMP AL,0x0                          ; 004cfe68
    JZ 0x004cfe7c                       ; 004cfe6a
        ;   XREF to: 004cfe7c (CONDITIONAL_JUMP)  ; LAB_004cfe7c
    MOV AL,byte ptr [ESI + 0x1]         ; 004cfe6c
    ADD ESI,0x2                         ; 004cfe6f
    MOV byte ptr [EDI + 0x1],AL         ; 004cfe72
    ADD EDI,0x2                         ; 004cfe75
    CMP AL,0x0                          ; 004cfe78
    JNZ 0x004cfe64                      ; 004cfe7a
        ;   XREF to: 004cfe64 (CONDITIONAL_JUMP)  ; LAB_004cfe64
    POP EDI                             ; 004cfe7c
        ;   Label: LAB_004cfe7c
    PUSH 0x58854b                       ; 004cfe7d | = "  Press any key to continue."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004cfe82
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004cfe87
    MOV EDI,ESP                         ; 004cfe8a
    MOV ESI,EAX                         ; 004cfe8c
    PUSH EDI                            ; 004cfe8e
    SUB ECX,ECX                         ; 004cfe8f
    DEC ECX                             ; 004cfe91
    MOV AL,0x0                          ; 004cfe92
    SCASB.REPNE ES:EDI                  ; 004cfe94
    DEC EDI                             ; 004cfe96
    MOV AL,byte ptr [ESI]               ; 004cfe97
        ;   Label: LAB_004cfe97
    MOV byte ptr [EDI],AL               ; 004cfe99
    CMP AL,0x0                          ; 004cfe9b
    JZ 0x004cfeaf                       ; 004cfe9d
        ;   XREF to: 004cfeaf (CONDITIONAL_JUMP)  ; LAB_004cfeaf
    MOV AL,byte ptr [ESI + 0x1]         ; 004cfe9f
    ADD ESI,0x2                         ; 004cfea2
    MOV byte ptr [EDI + 0x1],AL         ; 004cfea5
    ADD EDI,0x2                         ; 004cfea8
    CMP AL,0x0                          ; 004cfeab
    JNZ 0x004cfe97                      ; 004cfead
        ;   XREF to: 004cfe97 (CONDITIONAL_JUMP)  ; LAB_004cfe97
    POP EDI                             ; 004cfeaf
        ;   Label: LAB_004cfeaf
    PUSH 0x58                           ; 004cfeb0
    MOV EDX,dword ptr [0x014b9904]      ; 004cfeb2 | g_CBitFont_PTR_014b9904
    PUSH EDX                            ; 004cfeb8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004cfeb9
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004cfebe
    MOV EDI,EAX                         ; 004cfec1
    MOV EAX,ESP                         ; 004cfec3
    PUSH EAX                            ; 004cfec5
    MOV ECX,dword ptr [0x014b9904]      ; 004cfec6 | g_CBitFont_PTR_014b9904
    PUSH ECX                            ; 004cfecc
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004cfecd
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004cfed2
    MOV ESI,EAX                         ; 004cfed5
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004cfed7
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    PUSH 0xffff                         ; 004cfedc
    PUSH 0x0                            ; 004cfee1
    PUSH 0x0                            ; 004cfee3
    PUSH 0x1cc5b6c                      ; 004cfee5
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004cfeea
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,EDI                         ; 004cfeef
    ADD ESP,0x10                        ; 004cfef1
    LEA EDX,[EAX*0x4 + 0x0]             ; 004cfef4
    PUSH -0x1                           ; 004cfefb
    SUB EDX,EAX                         ; 004cfefd
    MOV EAX,0x1e0                       ; 004cfeff
    PUSH 0xf8                           ; 004cff04
    SUB EAX,EDX                         ; 004cff09
    PUSH EAX                            ; 004cff0b
    MOV EDX,ESI                         ; 004cff0c
    MOV EAX,ESI                         ; 004cff0e
    SAR EDX,0x1f                        ; 004cff10
    SUB EAX,EDX                         ; 004cff13
    SAR EAX,0x1                         ; 004cff15
    MOV EDX,0x140                       ; 004cff17
    SUB EDX,EAX                         ; 004cff1c
    PUSH EDX                            ; 004cff1e
    LEA EAX,[ESP + 0x10]                ; 004cff1f
    PUSH EAX                            ; 004cff23
    MOV EBX,dword ptr [0x014b9904]      ; 004cff24 | g_CBitFont_PTR_014b9904
    PUSH EBX                            ; 004cff2a
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cff2b
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004cff30
    PUSH 0x588568                       ; 004cff33 | = "Monitor calibration"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004cff38
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004cff3d
    PUSH EAX                            ; 004cff40
    MOV EBP,dword ptr [0x014b9904]      ; 004cff41 | g_CBitFont_PTR_014b9904
    PUSH EBP                            ; 004cff47
    MOV ESI,EAX                         ; 004cff48
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004cff4a
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004cff4f
    SAR EDX,0x1f                        ; 004cff51
    SUB EAX,EDX                         ; 004cff54
    SAR EAX,0x1                         ; 004cff56
    ADD ESP,0x8                         ; 004cff58
    PUSH -0x1                           ; 004cff5b
    PUSH 0xf8                           ; 004cff5d
    ADD EDI,EDI                         ; 004cff62
    MOV EDX,0x140                       ; 004cff64
    PUSH EDI                            ; 004cff69
    SUB EDX,EAX                         ; 004cff6a
    PUSH EDX                            ; 004cff6c
    PUSH ESI                            ; 004cff6d
    MOV EAX,[0x014b9904]                ; 004cff6e | g_CBitFont_PTR_014b9904
    PUSH EAX                            ; 004cff73
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cff74
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004cff79
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004cff7c
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004cff81
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 004cff86
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    ADD ESP,0x100                       ; 004cff8b
    POP EBP                             ; 004cff91
    POP EDI                             ; 004cff92
    POP ESI                             ; 004cff93
    POP EBX                             ; 004cff94
    RET                                 ; 004cff95

