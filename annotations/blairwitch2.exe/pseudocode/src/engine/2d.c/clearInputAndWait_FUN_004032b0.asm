; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_clearInputAndWait_FUN_004032b0(void)
;
;
; XREF[27]:
;   core_dcube.cpp_FUN_00446f50 at 00446f63
;   core_game.cpp_CGame_finishAct_FUN_004bdfb0 at 004be074
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd6ef
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be454
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b66a5
;   core_game.cpp_FUN_004bcbf0 at 004bcfaa
;   core_main.c_FUN_004e45e0 at 004e45e9
;   core_menu.cpp_FUN_004eba50 at 004ebabd
;   core_menu.cpp_FUN_004ebf10 at 004ec9b8
;   core_menu.cpp_FUN_004eed60 at 004efdd9
;   ... and 17 more
;
; Referenced Globals:
;   undefined4 DAT_01c37790
;
; Called Functions:
;   wincore_winrun.cpp_clearKeypresses_FUN_0058eab0
;   wincore_winrun.cpp_clearMouseClicks_FUN_0058ed00
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_clearKeypresses_FUN_0058eab0 ; 004032b0
        ;   XREF to: 0058eab0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_0058eab0()
        ;   Label: engine_2d.c_clearInputAndWait_FUN_004032b0
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_0058ed00 ; 004032b5
        ;   XREF to: 0058ed00 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_0058ed00()
    XOR EAX,EAX                         ; 004032ba
    INC EAX                             ; 004032bc
        ;   Label: LAB_004032bc
    XOR DL,DL                           ; 004032bd
    MOV byte ptr [EAX + 0x1c3778f],DL   ; 004032bf | DAT_01c37790
    CMP EAX,0x258                       ; 004032c5
    JL 0x004032bc                       ; 004032ca
        ;   XREF to: 004032bc (CONDITIONAL_JUMP)  ; LAB_004032bc
    PUSH EBX                            ; 004032cc
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004032cd
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EBX,EAX                         ; 004032d2
    SAR EBX,0x10                        ; 004032d4
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 004032d7
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_004032d7
    SAR EAX,0x10                        ; 004032dc
    CMP EBX,EAX                         ; 004032df
    JZ 0x00403301                       ; 004032e1
        ;   XREF to: 00403301 (CONDITIONAL_JUMP)  ; LAB_00403301
    CALL wincore_winrun.cpp_clearKeypresses_FUN_0058eab0 ; 004032e3
        ;   XREF to: 0058eab0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_0058eab0()
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_0058ed00 ; 004032e8
        ;   XREF to: 0058ed00 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_0058ed00()
    XOR EAX,EAX                         ; 004032ed
    POP EBX                             ; 004032ef
    INC EAX                             ; 004032f0
        ;   Label: LAB_004032f0
    XOR DH,DH                           ; 004032f1
    MOV byte ptr [EAX + 0x1c3778f],DH   ; 004032f3 | DAT_01c37790
    CMP EAX,0x258                       ; 004032f9
    JL 0x004032f0                       ; 004032fe
        ;   XREF to: 004032f0 (CONDITIONAL_JUMP)  ; LAB_004032f0
    RET                                 ; 00403300
    CALL wincore_winrun.cpp_clearKeypresses_FUN_0058eab0 ; 00403301
        ;   XREF to: 0058eab0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_0058eab0()
        ;   Label: LAB_00403301
    JMP 0x004032d7                      ; 00403306
        ;   XREF to: 004032d7 (UNCONDITIONAL_JUMP)  ; LAB_004032d7

