; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00556c10(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_duration
; int              Stack[0x10]:4   stop_after_fade
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_event.cpp_FUN_0048c2e0 at 0048e040
;   core_game.cpp_FUN_004c4a60 at 004c4aa5
;   core_game.cpp_FUN_004c4bc0 at 004c4c42
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00552f10
;   sound_sndmain.cpp_FUN_00556fd0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00556c10
        ;   Label: sound_sndmain.cpp_setSfxFade_FUN_00556c10
    PUSH 0x1                            ; 00556c13
    MOV EDX,dword ptr [ESP + 0xc]       ; 00556c15
    PUSH EDX                            ; 00556c19
    CALL sound_sndmain.cpp_FUN_00552f10 ; 00556c1a
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00556c1f
    TEST EAX,EAX                        ; 00556c22
    JNZ 0x00556c2a                      ; 00556c24
        ;   XREF to: 00556c2a (CONDITIONAL_JUMP)  ; LAB_00556c2a
    ADD ESP,0x4                         ; 00556c26
    RET                                 ; 00556c29
    MOV EDX,dword ptr [ESP + 0xc]       ; 00556c2a
        ;   Label: LAB_00556c2a
    MOV dword ptr [EAX + 0xfc],EDX      ; 00556c2e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00556c34
    MOV dword ptr [EAX + 0x100],EDX     ; 00556c38
    MOV EDX,dword ptr [ESP + 0x14]      ; 00556c3e
    MOV dword ptr [ESP],EDX             ; 00556c42
    FILD dword ptr [ESP]                ; 00556c45
    FSTP float ptr [EAX + 0x104]        ; 00556c48
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00556c4e
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,0x1                         ; 00556c53
    ADD ESP,0x4                         ; 00556c58
    RET                                 ; 00556c5b

