; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0(uint sfx_handle,CSfxSample *output_buffer)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CSfxSample *     Stack[0x8]:4   output_buffer
;
; XREF[3]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0 at 004b0e8e
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da951
;   core_tommygun.cpp_CTommyGun_process_FUN_005de360 at 005de4d8
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a96e0
        ;   Label: sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a96e2
    PUSH EDX                            ; 005a96e6
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a96e7
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005a96ec
    TEST EAX,EAX                        ; 005a96ef
    JNZ 0x005a96f4                      ; 005a96f1
        ;   XREF to: 005a96f4 (CONDITIONAL_JUMP)  ; LAB_005a96f4
    RET                                 ; 005a96f3
    PUSH EDI                            ; 005a96f4
        ;   Label: LAB_005a96f4
    PUSH ESI                            ; 005a96f5
    MOV ECX,0x54                        ; 005a96f6
    MOV EDI,dword ptr [ESP + 0x10]      ; 005a96fb
    MOV ESI,dword ptr [EAX + 0x78]      ; 005a96ff
    MOVSD.REP ES:EDI,ESI                ; 005a9702
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9704
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,0x1                         ; 005a9709
    POP ESI                             ; 005a970e
    POP EDI                             ; 005a970f
    RET                                 ; 005a9710

