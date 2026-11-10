; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clearInputAndWait_FUN_004032b0(void)
;
;
; XREF[23]:
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004c00d1
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf626
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c02bd
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8555
;   core_game.cpp_FUN_004bec20 at 004befb2
;   core_main.c_FUN_004e4400 at 004e4447
;   core_menu.cpp_FUN_004eae80 at 004ec1b2
;   core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 at 004e815d
;   core_menu.cpp_showCalibrationTestPattern_FUN_004e8380 at 004e84b1
;   core_menu.cpp_showCalibrationTest_FUN_004e84d0 at 004e8578
;   ... and 13 more
;
; Referenced Globals:
;   undefined4 DAT_01c6cef0
;
; Called Functions:
;   wincore_winrun.cpp_clearKeypresses_FUN_00580770
;   wincore_winrun.cpp_clearMouseClicks_FUN_005809c0
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_clearKeypresses_FUN_00580770 ; 004032b0
        ;   XREF to: 00580770 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_00580770()
        ;   Label: engine_2d.c_clearInputAndWait_FUN_004032b0
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_005809c0 ; 004032b5
        ;   XREF to: 005809c0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_005809c0()
    XOR EAX,EAX                         ; 004032ba
    INC EAX                             ; 004032bc
        ;   Label: LAB_004032bc
    XOR DL,DL                           ; 004032bd
    MOV byte ptr [EAX + 0x1c6ceef],DL   ; 004032bf | DAT_01c6cef0
    CMP EAX,0x258                       ; 004032c5
    JL 0x004032bc                       ; 004032ca
        ;   XREF to: 004032bc (CONDITIONAL_JUMP)  ; LAB_004032bc
    PUSH EBX                            ; 004032cc
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004032cd
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EBX,EAX                         ; 004032d2
    SAR EBX,0x10                        ; 004032d4
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 004032d7
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_004032d7
    SAR EAX,0x10                        ; 004032dc
    CMP EBX,EAX                         ; 004032df
    JZ 0x00403301                       ; 004032e1
        ;   XREF to: 00403301 (CONDITIONAL_JUMP)  ; LAB_00403301
    CALL wincore_winrun.cpp_clearKeypresses_FUN_00580770 ; 004032e3
        ;   XREF to: 00580770 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_00580770()
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_005809c0 ; 004032e8
        ;   XREF to: 005809c0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_005809c0()
    XOR EAX,EAX                         ; 004032ed
    POP EBX                             ; 004032ef
    INC EAX                             ; 004032f0
        ;   Label: LAB_004032f0
    XOR DH,DH                           ; 004032f1
    MOV byte ptr [EAX + 0x1c6ceef],DH   ; 004032f3 | DAT_01c6cef0
    CMP EAX,0x258                       ; 004032f9
    JL 0x004032f0                       ; 004032fe
        ;   XREF to: 004032f0 (CONDITIONAL_JUMP)  ; LAB_004032f0
    RET                                 ; 00403300
    CALL wincore_winrun.cpp_clearKeypresses_FUN_00580770 ; 00403301
        ;   XREF to: 00580770 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_00580770()
        ;   Label: LAB_00403301
    JMP 0x004032d7                      ; 00403306
        ;   XREF to: 004032d7 (UNCONDITIONAL_JUMP)  ; LAB_004032d7

