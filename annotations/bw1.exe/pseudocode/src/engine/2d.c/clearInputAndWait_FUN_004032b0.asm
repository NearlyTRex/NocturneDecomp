; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clearInputAndWait_FUN_004032b0(void)
;
;
; XREF[23]:
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8c81
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d81d6
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8e6d
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfb97
;   core_game.cpp_FUN_004d77d0 at 004d7b62
;   core_main.c_FUN_005031c0 at 005031c9
;   core_menu.cpp_FUN_0050d640 at 0050ea74
;   core_menu.cpp_adjustMouseSensitivity_FUN_0050a5e0 at 0050a64d
;   core_menu.cpp_showCalibrationTestPattern_FUN_0050a870 at 0050a9a1
;   core_menu.cpp_showCalibrationTest_FUN_0050a9c0 at 0050aa68
;   ... and 13 more
;
; Referenced Globals:
;   undefined4 DAT_01c50950
;
; Called Functions:
;   wincore_winrun.cpp_clearKeypresses_FUN_005b24f0
;   wincore_winrun.cpp_clearMouseClicks_FUN_005b2740
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_clearKeypresses_FUN_005b24f0 ; 004032b0
        ;   XREF to: 005b24f0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005b24f0()
        ;   Label: engine_2d.c_clearInputAndWait_FUN_004032b0
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_005b2740 ; 004032b5
        ;   XREF to: 005b2740 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_005b2740()
    XOR EAX,EAX                         ; 004032ba
    INC EAX                             ; 004032bc
        ;   Label: LAB_004032bc
    XOR DL,DL                           ; 004032bd
    MOV byte ptr [EAX + 0x1c5094f],DL   ; 004032bf | DAT_01c50950
    CMP EAX,0x258                       ; 004032c5
    JL 0x004032bc                       ; 004032ca
        ;   XREF to: 004032bc (CONDITIONAL_JUMP)  ; LAB_004032bc
    PUSH EBX                            ; 004032cc
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004032cd
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EBX,EAX                         ; 004032d2
    SAR EBX,0x10                        ; 004032d4
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 004032d7
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_004032d7
    SAR EAX,0x10                        ; 004032dc
    CMP EBX,EAX                         ; 004032df
    JZ 0x00403301                       ; 004032e1
        ;   XREF to: 00403301 (CONDITIONAL_JUMP)  ; LAB_00403301
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005b24f0 ; 004032e3
        ;   XREF to: 005b24f0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005b24f0()
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_005b2740 ; 004032e8
        ;   XREF to: 005b2740 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_005b2740()
    XOR EAX,EAX                         ; 004032ed
    POP EBX                             ; 004032ef
    INC EAX                             ; 004032f0
        ;   Label: LAB_004032f0
    XOR DH,DH                           ; 004032f1
    MOV byte ptr [EAX + 0x1c5094f],DH   ; 004032f3 | DAT_01c50950
    CMP EAX,0x258                       ; 004032f9
    JL 0x004032f0                       ; 004032fe
        ;   XREF to: 004032f0 (CONDITIONAL_JUMP)  ; LAB_004032f0
    RET                                 ; 00403300
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005b24f0 ; 00403301
        ;   XREF to: 005b24f0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005b24f0()
        ;   Label: LAB_00403301
    JMP 0x004032d7                      ; 00403306
        ;   XREF to: 004032d7 (UNCONDITIONAL_JUMP)  ; LAB_004032d7

