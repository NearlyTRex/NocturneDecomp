; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showCalibrationTest_FUN_004ebe30(void)
;
;
; XREF[2]:
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4e14
;   core_menu.cpp_FUN_004ebf10 at 004ec91a
;
; Referenced Globals:
;   TerminatedCString s_brightness_005dcb76
;   TerminatedCString s_s_1_Turn_off_all_the_lig_005dcb81
;   TerminatedCString s_s_2_Turn_your_brightness_005dcbaa
;   TerminatedCString s_s_3_Turn_down_the_bright_005dcbfd
;   TerminatedCString s_s_4_Turn_your_contrast_a_005dcc49
;   TerminatedCString s_You_re_done_with_calibra_005dcc6f
;   undefined4 DAT_01511cc4
;
; Called Functions:
;   core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_alphabit.cpp_FUN_0040d540
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH 0x1e0                          ; 004ebe30
        ;   Label: core_menu.cpp_showCalibrationTest_FUN_004ebe30
    PUSH 0x280                          ; 004ebe35
    PUSH 0x5dcb76                       ; 004ebe3a | = "brightness"
    PUSH 0x1d0613c                      ; 004ebe3f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004ebe44
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ebe49
    PUSH 0x58                           ; 004ebe4c
    MOV EDX,dword ptr [0x01511cc4]      ; 004ebe4e | DAT_01511cc4
    PUSH EDX                            ; 004ebe54
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004ebe55
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004ebe5a
    PUSH 0x5dcb81                       ; 004ebe5d | = "1. Turn off all the lights in your room."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ebe62
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ebe67
    PUSH EAX                            ; 004ebe6a
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0 ; 004ebe6b
        ;   XREF to: 004ebce0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0(char * message_text)
    ADD ESP,0x4                         ; 004ebe70
    PUSH 0x5dcbaa                       ; 004ebe73 | = "2. Turn your brightness up, so that y..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ebe78
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ebe7d
    PUSH EAX                            ; 004ebe80
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0 ; 004ebe81
        ;   XREF to: 004ebce0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0(char * message_text)
    ADD ESP,0x4                         ; 004ebe86
    PUSH 0x5dcbfd                       ; 004ebe89 | = "3. Turn down the brightness, so that ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ebe8e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ebe93
    PUSH EAX                            ; 004ebe96
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0 ; 004ebe97
        ;   XREF to: 004ebce0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0(char * message_text)
    ADD ESP,0x4                         ; 004ebe9c
    PUSH 0x5dcc49                       ; 004ebe9f | = "4. Turn your contrast all the way up."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ebea4
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ebea9
    PUSH EAX                            ; 004ebeac
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0 ; 004ebead
        ;   XREF to: 004ebce0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0(char * message_text)
    ADD ESP,0x4                         ; 004ebeb2
    PUSH 0x5dcc6f                       ; 004ebeb5 | = "You're done with calibration."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ebeba
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ebebf
    PUSH EAX                            ; 004ebec2
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0 ; 004ebec3
        ;   XREF to: 004ebce0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0(char * message_text)
    ADD ESP,0x4                         ; 004ebec8
    PUSH 0x1d0613c                      ; 004ebecb
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004ebed0
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ebed5
    JMP 0x004032b0                      ; 004ebed8
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)

