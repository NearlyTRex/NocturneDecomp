; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clearInputAndWait_FUN_00403f50(void)
;
;
; XREF[28]:
;   core_dcube.cpp_FUN_0044b660 at 0044b673
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6ad7
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a6186
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6ead
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049de84
;   core_game.cpp_FUN_004a57c0 at 004a5b60
;   core_main.c_FUN_004c8510 at 004c8557
;   core_main.c_FUN_004c90e0 at 004c9123
;   core_main.c_showPromoScreen_FUN_004c8eb0 at 004c8ed4
;   core_menu.cpp_FUN_004d23d0 at 004d246d
;   ... and 18 more
;
; Called Functions:
;   wincore_winrun.cpp_clearKeypresses_FUN_00558ae0
;   wincore_winrun.cpp_clearMouseClicks_FUN_00558d50
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_clearKeypresses_FUN_00558ae0 ; 00403f50
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_00558ae0()
        ;   Label: engine_2d.c_clearInputAndWait_FUN_00403f50
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_00558d50 ; 00403f55
        ;   XREF to: 00558d50 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_00558d50()
    XOR EAX,EAX                         ; 00403f5a
    INC EAX                             ; 00403f5c
        ;   Label: LAB_00403f5c
    XOR DL,DL                           ; 00403f5d
    MOV byte ptr [EAX + 0x1c02597],DL   ; 00403f5f
    CMP EAX,0x258                       ; 00403f65
    JL 0x00403f5c                       ; 00403f6a
        ;   XREF to: 00403f5c (CONDITIONAL_JUMP)  ; LAB_00403f5c
    PUSH EBX                            ; 00403f6c
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00403f6d
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EBX,EAX                         ; 00403f72
    SAR EBX,0x10                        ; 00403f74
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00403f77
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_00403f77
    SAR EAX,0x10                        ; 00403f7c
    CMP EBX,EAX                         ; 00403f7f
    JZ 0x00403fa1                       ; 00403f81
        ;   XREF to: 00403fa1 (CONDITIONAL_JUMP)  ; LAB_00403fa1
    CALL wincore_winrun.cpp_clearKeypresses_FUN_00558ae0 ; 00403f83
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_00558ae0()
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_00558d50 ; 00403f88
        ;   XREF to: 00558d50 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_00558d50()
    XOR EAX,EAX                         ; 00403f8d
    POP EBX                             ; 00403f8f
    INC EAX                             ; 00403f90
        ;   Label: LAB_00403f90
    XOR DH,DH                           ; 00403f91
    MOV byte ptr [EAX + 0x1c02597],DH   ; 00403f93
    CMP EAX,0x258                       ; 00403f99
    JL 0x00403f90                       ; 00403f9e
        ;   XREF to: 00403f90 (CONDITIONAL_JUMP)  ; LAB_00403f90
    RET                                 ; 00403fa0
    CALL wincore_winrun.cpp_clearKeypresses_FUN_00558ae0 ; 00403fa1
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_00558ae0()
        ;   Label: LAB_00403fa1
    JMP 0x00403f77                      ; 00403fa6
        ;   XREF to: 00403f77 (UNCONDITIONAL_JUMP)  ; LAB_00403f77

