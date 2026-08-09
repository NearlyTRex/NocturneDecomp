; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00527260(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_duration
; int              Stack[0x10]:4   stop_after_fade
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b63b
;   core_stranger.cpp_CStranger_processFrame_FUN_00535900 at 00537cbf
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00527260
        ;   Label: sound_sndmain.cpp_setSfxFade_FUN_00527260
    PUSH 0x1                            ; 00527263
    MOV EDX,dword ptr [ESP + 0xc]       ; 00527265
    PUSH EDX                            ; 00527269
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 0052726a
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 0052726f
    TEST EAX,EAX                        ; 00527272
    JNZ 0x0052727a                      ; 00527274
        ;   XREF to: 0052727a (CONDITIONAL_JUMP)  ; LAB_0052727a
    ADD ESP,0x4                         ; 00527276
    RET                                 ; 00527279
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052727a
        ;   Label: LAB_0052727a
    MOV dword ptr [EAX + 0x108],EDX     ; 0052727e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00527284
    MOV dword ptr [EAX + 0x10c],EDX     ; 00527288
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052728e
    MOV dword ptr [ESP],EDX             ; 00527292
    FILD dword ptr [ESP]                ; 00527295
    FSTP float ptr [EAX + 0x110]        ; 00527298
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052729e
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 005272a3
    ADD ESP,0x4                         ; 005272a8
    RET                                 ; 005272ab

