; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00551440(void)
;
;
; XREF[38]:
;   core_tommygun.cpp_CTommyGun_process_FUN_00576130 at 00576344
;   sound_sndmain.cpp_FUN_0054d3a0 at 0054d420
;   sound_sndmain.cpp_FUN_005506b0 at 00550933
;   sound_sndmain.cpp_FUN_00550b70 at 00550b8e
;   sound_sndmain.cpp_FUN_00550d30 at 00550d8b
;   sound_sndmain.cpp_FUN_00550da0 at 00550dd1
;   sound_sndmain.cpp_FUN_00550ea0 at 00550ed1
;   sound_sndmain.cpp_FUN_00550f20 at 00550f42
;   sound_sndmain.cpp_FUN_00550f50 at 00550f97
;   sound_sndmain.cpp_FUN_0055141c at 00551430
;   ... and 28 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e9231
;   TerminatedCString s_unlockSound_sound_was_no_005e9246
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02649018
;   undefined4 DAT_0264901c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_FUN_00553380
;   wincore_winrun.cpp_releaseMutex_FUN_0058fd00
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00551440
        ;   Label: sound_sndmain.cpp_FUN_00551440
    PUSH EBP                            ; 00551441
    CMP dword ptr [0x0264901c],0x1      ; 00551442 | DAT_0264901c
    JL 0x00553541                       ; 00551449
        ;   XREF to: 00553541 (CONDITIONAL_JUMP)  ; LAB_00553541
    CMP dword ptr [0x0264901c],0x1      ; 0055144f | DAT_0264901c
        ;   Label: LAB_0055144f
    JZ 0x0055356b                       ; 00551456
        ;   XREF to: 0055356b (CONDITIONAL_JUMP)  ; LAB_0055356b
    MOV EBP,dword ptr [0x0264901c]      ; 0055145c | DAT_0264901c
        ;   Label: LAB_0055145c
    MOV EDI,dword ptr [0x02649018]      ; 00551462 | DAT_02649018
    DEC EBP                             ; 00551468
    PUSH EDI                            ; 00551469
    MOV dword ptr [0x0264901c],EBP      ; 0055146a | DAT_0264901c
    CALL wincore_winrun.cpp_releaseMutex_FUN_0058fd00 ; 00551470
        ;   XREF to: 0058fd00 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 00551475
    POP EBP                             ; 00551478
    POP EDI                             ; 00551479
    RET                                 ; 0055147a
    PUSH EBX                            ; 00553541
        ;   Label: LAB_00553541
    MOV ECX,0x5e9231                    ; 00553542 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x1845                      ; 00553547
    PUSH 0x5e9246                       ; 0055354c | = "unlockSound - sound was not locked!"
    MOV dword ptr [0x01d046a0],ECX      ; 00553551 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00553557 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0055355d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00553562
    POP EBX                             ; 00553565
    JMP 0x0055144f                      ; 00553566
        ;   XREF to: 0055144f (UNCONDITIONAL_JUMP)  ; LAB_0055144f
    CALL sound_sndmain.cpp_FUN_00553380 ; 0055356b
        ;   XREF to: 00553380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553380()
        ;   Label: LAB_0055356b
    JMP 0x0055145c                      ; 00553570
        ;   XREF to: 0055145c (UNCONDITIONAL_JUMP)  ; LAB_0055145c

