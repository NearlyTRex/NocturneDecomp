; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00556ab0(uint param_1,undefined4 param_2)
;
;
; XREF[4]:
;   core_charactr.cpp_FUN_0042e8c0 at 0042ea9f
;   core_event.cpp_FUN_0048c2e0 at 0048e051
;   core_sound.cpp_CSound_process_FUN_0055ff40 at 00560023
;   core_sound.cpp_FUN_0055f6ae at 0055fa48
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00552f10
;   sound_sndmain.cpp_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556ab0
        ;   Label: sound_sndmain.cpp_FUN_00556ab0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556ab2
    PUSH EDX                            ; 00556ab6
    CALL sound_sndmain.cpp_FUN_00552f10 ; 00556ab7
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00556abc
    TEST EAX,EAX                        ; 00556abf
    JNZ 0x00556ac4                      ; 00556ac1
        ;   XREF to: 00556ac4 (CONDITIONAL_JUMP)  ; LAB_00556ac4
    RET                                 ; 00556ac3
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556ac4
        ;   Label: LAB_00556ac4
    MOV dword ptr [EAX + 0x38],EDX      ; 00556ac8
    OR byte ptr [EAX + 0x118],0x8       ; 00556acb
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00556ad2
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,0x1                         ; 00556ad7
    RET                                 ; 00556adc

