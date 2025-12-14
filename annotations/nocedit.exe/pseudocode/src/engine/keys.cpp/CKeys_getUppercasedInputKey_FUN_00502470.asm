; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this
;
; XREF[15]:
;   core_cloth.cpp_FUN_0043ddf0 at 0043deb3
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d64e
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004ddbb3
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538473
;   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 at 00537883
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584adf
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057ea6a
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00581172
;   core_setedit.cpp_FUN_00578c90 at 00578ced
;   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 at 0057c01d
;   ... and 5 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00502470
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   Label: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
    AND EAX,0xff                        ; 00502475
    PUSH EAX                            ; 0050247a
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0050247b
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00502480
    RET                                 ; 00502483

