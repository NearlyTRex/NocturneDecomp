; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showCalibrationTest_FUN_004cffa0(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004c85f0 at 004c8da8
;   core_menu.cpp_configureGraphicsOptions_FUN_004d0080 at 004d0c82
;
; Referenced Globals:
;   TerminatedCString s_brightness_0058857c
;   TerminatedCString s_s_1_Turn_off_all_the_lig_00588587
;   TerminatedCString s_s_2_Turn_your_brightness_005885b0
;   TerminatedCString s_s_3_Turn_down_the_bright_00588603
;   TerminatedCString s_s_4_Turn_your_contrast_a_0058864f
;   TerminatedCString s_You_re_done_with_calibra_00588675
;   undefined4 DAT_014b9904
;
; Called Functions:
;   core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH 0x1e0                          ; 004cffa0
        ;   Label: core_menu.cpp_showCalibrationTest_FUN_004cffa0
    PUSH 0x280                          ; 004cffa5
    PUSH 0x58857c                       ; 004cffaa | = "brightness"
    PUSH 0x1cc5b6c                      ; 004cffaf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004cffb4
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004cffb9
    PUSH 0x58                           ; 004cffbc
    MOV EDX,dword ptr [0x014b9904]      ; 004cffbe | DAT_014b9904
    PUSH EDX                            ; 004cffc4
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004cffc5
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004cffca
    PUSH 0x588587                       ; 004cffcd | = "1. Turn off all the lights in your room."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004cffd2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004cffd7
    PUSH EAX                            ; 004cffda
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50 ; 004cffdb
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50(char * message_text)
    ADD ESP,0x4                         ; 004cffe0
    PUSH 0x5885b0                       ; 004cffe3 | = "2. Turn your brightness up, so that y..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004cffe8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004cffed
    PUSH EAX                            ; 004cfff0
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50 ; 004cfff1
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50(char * message_text)
    ADD ESP,0x4                         ; 004cfff6
    PUSH 0x588603                       ; 004cfff9 | = "3. Turn down the brightness, so that ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004cfffe
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d0003
    PUSH EAX                            ; 004d0006
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50 ; 004d0007
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50(char * message_text)
    ADD ESP,0x4                         ; 004d000c
    PUSH 0x58864f                       ; 004d000f | = "4. Turn your contrast all the way up."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0014
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d0019
    PUSH EAX                            ; 004d001c
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50 ; 004d001d
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50(char * message_text)
    ADD ESP,0x4                         ; 004d0022
    PUSH 0x588675                       ; 004d0025 | = "You're done with calibration."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d002a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d002f
    PUSH EAX                            ; 004d0032
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50 ; 004d0033
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50(char * message_text)
    ADD ESP,0x4                         ; 004d0038
    PUSH 0x1cc5b6c                      ; 004d003b
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 004d0040
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004d0045
    JMP 0x00403f50                      ; 004d0048
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)

