; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showCalibrationTest_FUN_0050a9c0(void)
;
;
; XREF[2]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 00503a24
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050b3e9
;
; Referenced Globals:
;   TerminatedCString s_brightness_005e7b43
;   TerminatedCString s_s_1_Turn_off_all_the_lig_005e7b4e
;   TerminatedCString s_s_2_Turn_your_brightness_005e7b77
;   TerminatedCString s_s_3_Turn_down_the_bright_005e7bca
;   TerminatedCString s_s_4_Turn_your_contrast_a_005e7c16
;   TerminatedCString s_You_re_done_with_calibra_005e7c3c
;   undefined4 DAT_0152d248
;
; Called Functions:
;   core_menu.cpp_showCalibrationTestPattern_FUN_0050a870
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;
; *****************************************************************************

section .text

    PUSH 0x1e0                          ; 0050a9c0
        ;   Label: core_menu.cpp_showCalibrationTest_FUN_0050a9c0
    PUSH 0x280                          ; 0050a9c5
    PUSH 0x5e7b43                       ; 0050a9ca | = "brightness"
    PUSH 0x1d1eea0                      ; 0050a9cf
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0050a9d4
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0050a9d9
    PUSH 0x58                           ; 0050a9dc
    MOV EDX,dword ptr [0x0152d248]      ; 0050a9de | DAT_0152d248
    PUSH EDX                            ; 0050a9e4
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0050a9e5
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0050a9ea
    PUSH 0x5e7b4e                       ; 0050a9ed | = "1. Turn off all the lights in your room."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050a9f2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050a9f7
    PUSH EAX                            ; 0050a9fa
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_0050a870 ; 0050a9fb
        ;   XREF to: 0050a870 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_0050a870(char * message_text)
    ADD ESP,0x4                         ; 0050aa00
    PUSH 0x5e7b77                       ; 0050aa03 | = "2. Turn your brightness up, so that y..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050aa08
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050aa0d
    PUSH EAX                            ; 0050aa10
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_0050a870 ; 0050aa11
        ;   XREF to: 0050a870 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_0050a870(char * message_text)
    ADD ESP,0x4                         ; 0050aa16
    PUSH 0x5e7bca                       ; 0050aa19 | = "3. Turn down the brightness, so that ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050aa1e
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050aa23
    PUSH EAX                            ; 0050aa26
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_0050a870 ; 0050aa27
        ;   XREF to: 0050a870 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_0050a870(char * message_text)
    ADD ESP,0x4                         ; 0050aa2c
    PUSH 0x5e7c16                       ; 0050aa2f | = "4. Turn your contrast all the way up."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050aa34
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050aa39
    PUSH EAX                            ; 0050aa3c
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_0050a870 ; 0050aa3d
        ;   XREF to: 0050a870 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_0050a870(char * message_text)
    ADD ESP,0x4                         ; 0050aa42
    PUSH 0x5e7c3c                       ; 0050aa45 | = "You're done with calibration."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050aa4a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050aa4f
    PUSH EAX                            ; 0050aa52
    CALL core_menu.cpp_showCalibrationTestPattern_FUN_0050a870 ; 0050aa53
        ;   XREF to: 0050a870 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTestPattern_FUN_0050a870(char * message_text)
    ADD ESP,0x4                         ; 0050aa58
    PUSH 0x1d1eea0                      ; 0050aa5b
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 0050aa60
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0050aa65
    JMP 0x004032b0                      ; 0050aa68
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)

