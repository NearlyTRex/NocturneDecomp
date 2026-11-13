; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00556780(uint sfx_handle,CSfxSample *output_buffer)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; CSfxSample *     Stack[0x8]:4   output_buffer
;
; XREF[3]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00495280 at 0049535e
;   core_game.cpp_FUN_004b6f30 at 004b7802
;   core_tommygun.cpp_CTommyGun_process_FUN_0056bd40 at 0056beb8
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_00552f10
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556780
        ;   Label: sound_sndmain.cpp_getSfxSampleInfo_FUN_00556780
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556782
    PUSH EDX                            ; 00556786
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_00552f10 ; 00556787
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 0055678c
    TEST EAX,EAX                        ; 0055678f
    JNZ 0x00556794                      ; 00556791
        ;   XREF to: 00556794 (CONDITIONAL_JUMP)  ; LAB_00556794
    RET                                 ; 00556793
    PUSH EDI                            ; 00556794
        ;   Label: LAB_00556794
    PUSH ESI                            ; 00556795
    MOV ECX,0x54                        ; 00556796
    MOV EDI,dword ptr [ESP + 0x10]      ; 0055679b
    MOV ESI,dword ptr [EAX + 0x68]      ; 0055679f
    MOVSD.REP ES:EDI,ESI                ; 005567a2
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 005567a4
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
    MOV EAX,0x1                         ; 005567a9
    POP ESI                             ; 005567ae
    POP EDI                             ; 005567af
    RET                                 ; 005567b0

