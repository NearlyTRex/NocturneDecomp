; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00556930(uint param_1,void *param_2)
;
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_createFireball_FUN_004a2830 at 004a28b4
;   core_fire.cpp_FUN_004a3920 at 004a3992
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00552f10
;   sound_sndmain.cpp_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556930
        ;   Label: sound_sndmain.cpp_FUN_00556930
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556932
    PUSH EDX                            ; 00556936
    CALL sound_sndmain.cpp_FUN_00552f10 ; 00556937
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 0055693c
    TEST EAX,EAX                        ; 0055693f
    JNZ 0x00556944                      ; 00556941
        ;   XREF to: 00556944 (CONDITIONAL_JUMP)  ; LAB_00556944
    RET                                 ; 00556943
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556944
        ;   Label: LAB_00556944
    MOV dword ptr [EAX + 0x1c],EDX      ; 00556948
    MOV DL,byte ptr [EAX + 0x118]       ; 0055694b
    MOV dword ptr [EAX + 0x20],0x1      ; 00556951
    OR DL,0x2                           ; 00556958
    MOV byte ptr [EAX + 0x118],DL       ; 0055695b
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00556961
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,0x1                         ; 00556966
    RET                                 ; 0055696b

