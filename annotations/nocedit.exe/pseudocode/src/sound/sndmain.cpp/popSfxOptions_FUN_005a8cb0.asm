; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0(void)
;
;
; XREF[31]:
;   core_boneguy.cpp_FUN_0041bf90 at 0041c5d0
;   core_charactr.cpp_CCharacter_FUN_0042a830 at 0042abd3
;   core_drone.cpp_FUN_0048ec70 at 0048f2cd
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ac587
;   core_event.cpp_CEventList_FUN_004b0f00 at 004b0f64
;   core_fire.cpp_CFireball_onCollision_FUN_004c1690 at 004c173e
;   core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20 at 004d1f67
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e43b7
;   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 at 0050664f
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 at 0050ad0c
;   ... and 21 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_006508cc
;   TerminatedCString s_popSfxOptions_stack_empt_006508e1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SfxLastSlot
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f624a4]      ; 005a8cb0 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
    DEC EDX                             ; 005a8cb6
    MOV dword ptr [0x03f624a4],EDX      ; 005a8cb7 | g_SfxLastSlot
    TEST EDX,EDX                        ; 005a8cbd
    JL 0x005a8cc2                       ; 005a8cbf
        ;   XREF to: 005a8cc2 (CONDITIONAL_JUMP)  ; LAB_005a8cc2
    RET                                 ; 005a8cc1
    PUSH ESI                            ; 005a8cc2
        ;   Label: LAB_005a8cc2
    PUSH EBX                            ; 005a8cc3
    MOV EBX,0x6508cc                    ; 005a8cc4 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xd2f                       ; 005a8cc9
    PUSH 0x6508e1                       ; 005a8cce | = "popSfxOptions - stack empty"
    MOV dword ptr [0x02f0ca48],EBX      ; 005a8cd3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a8cd9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a8cdf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a8ce4
    POP EBX                             ; 005a8ce7
    POP ESI                             ; 005a8ce8
    RET                                 ; 005a8ce9

