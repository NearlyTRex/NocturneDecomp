; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00551080(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)
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
;   core_doc.cpp_FUN_00450c60 at 00453203
;   core_event.cpp_FUN_00489670 at 0048b339
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 005656db
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00551080
        ;   Label: sound_sndmain.cpp_setSfxFade_FUN_00551080
    PUSH 0x1                            ; 00551083
    MOV EDX,dword ptr [ESP + 0xc]       ; 00551085
    PUSH EDX                            ; 00551089
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0 ; 0055108a
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 0055108f
    TEST EAX,EAX                        ; 00551092
    JNZ 0x0055109a                      ; 00551094
        ;   XREF to: 0055109a (CONDITIONAL_JUMP)  ; LAB_0055109a
    ADD ESP,0x4                         ; 00551096
    RET                                 ; 00551099
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055109a
        ;   Label: LAB_0055109a
    MOV dword ptr [EAX + 0xfc],EDX      ; 0055109e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005510a4
    MOV dword ptr [EAX + 0x100],EDX     ; 005510a8
    MOV EDX,dword ptr [ESP + 0x14]      ; 005510ae
    MOV dword ptr [ESP],EDX             ; 005510b2
    FILD dword ptr [ESP]                ; 005510b5
    FSTP float ptr [EAX + 0x104]        ; 005510b8
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 005510be
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
    MOV EAX,0x1                         ; 005510c3
    ADD ESP,0x4                         ; 005510c8
    RET                                 ; 005510cb

