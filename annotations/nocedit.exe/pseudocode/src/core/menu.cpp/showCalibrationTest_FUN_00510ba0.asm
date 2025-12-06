; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_showCalibrationTest_FUN_00510ba0(void)
;
;
; XREF[2]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 0050823b
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 005117f8
;
; Referenced Globals:
;   TerminatedCString s_brightness_00636688
;   TerminatedCString s_s_1_Turn_off_all_the_lig_00636693
;   TerminatedCString s_s_2_Turn_your_brightness_006366bc
;   TerminatedCString s_s_3_Turn_down_the_bright_0063670f
;   TerminatedCString s_s_4_Turn_your_contrast_a_0063675b
;   TerminatedCString s_You_re_done_with_calibra_00636781
;   CBitFont* g_SmallEditorFont
;   CAlphaBitmap g_CalibrationBitmap
;
; Called Functions:
;   core_menu.cpp_showCalibrationTestPattern_FUN_00510a50
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH 0x1e0                          ; 00510ba0
        ;   Label: core_menu.cpp_showCalibrationTest_FUN_00510ba0
    PUSH 0x280                          ; 00510ba5
    PUSH 0x636688                       ; 00510baa | = "brightness" | s_brightness_00636688 = brightness
    PUSH 0x2f26cbc                      ; 00510baf | CAlphaBitmap g_CalibrationBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00510bb4 | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00510bb9
    PUSH 0x58                           ; 00510bbc
    MOV EDX,dword ptr [0x020a5724]      ; 00510bbe | CBitFont * g_SmallEditorFont
    PUSH EDX                            ; 00510bc4
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00510bc5 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00510bca
    PUSH 0x636693                       ; 00510bcd | = "1. Turn off all the lights in your room." | s_s_1_Turn_off_all_the_lig_00636693 = 1. Turn off all the lights in your room.
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510bd2 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510bd7
    PUSH EAX                            ; 00510bda
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 ; 00510bdb | void core_menu.cpp_showCalibrationTestPattern_FUN_00510a50(char * message_text)
        ;   XREF to: 00510a50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510be0
    PUSH 0x6366bc                       ; 00510be3 | = "2. Turn your brightness up, so that y..." | s_s_2_Turn_your_brightness_006366bc = 2. Turn your brightness up, so that you see 3 bars on the left side of the screen.
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510be8 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510bed
    PUSH EAX                            ; 00510bf0
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 ; 00510bf1 | void core_menu.cpp_showCalibrationTestPattern_FUN_00510a50(char * message_text)
        ;   XREF to: 00510a50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510bf6
    PUSH 0x63670f                       ; 00510bf9 | = "3. Turn down the brightness, so that ..." | s_s_3_Turn_down_the_bright_0063670f = 3. Turn down the brightness, so that the left 2 bars become the same color.
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510bfe | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510c03
    PUSH EAX                            ; 00510c06
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 ; 00510c07 | void core_menu.cpp_showCalibrationTestPattern_FUN_00510a50(char * message_text)
        ;   XREF to: 00510a50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510c0c
    PUSH 0x63675b                       ; 00510c0f | = "4. Turn your contrast all the way up." | s_s_4_Turn_your_contrast_a_0063675b = 4. Turn your contrast all the way up.
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510c14 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510c19
    PUSH EAX                            ; 00510c1c
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 ; 00510c1d | void core_menu.cpp_showCalibrationTestPattern_FUN_00510a50(char * message_text)
        ;   XREF to: 00510a50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510c22
    PUSH 0x636781                       ; 00510c25 | = "You're done with calibration." | s_You_re_done_with_calibra_00636781 = You're done with calibration.
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510c2a | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510c2f
    PUSH EAX                            ; 00510c32
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 ; 00510c33 | void core_menu.cpp_showCalibrationTestPattern_FUN_00510a50(char * message_text)
        ;   XREF to: 00510a50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510c38
    PUSH 0x2f26cbc                      ; 00510c3b | CAlphaBitmap g_CalibrationBitmap
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 00510c40 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510c45
    JMP 0x00403260                      ; 00510c48
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)

