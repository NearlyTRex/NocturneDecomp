; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00550da0(uint param_1,void *param_2)
;
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_createFireball_FUN_0049d500 at 0049d584
;   core_fire.cpp_CFireEffect_createToss_FUN_0049e560 at 0049e5c2
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0054d3a0
;   sound_sndmain.cpp_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00550da0
        ;   Label: sound_sndmain.cpp_FUN_00550da0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550da2
    PUSH EDX                            ; 00550da6
    CALL sound_sndmain.cpp_FUN_0054d3a0 ; 00550da7
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00550dac
    TEST EAX,EAX                        ; 00550daf
    JNZ 0x00550db4                      ; 00550db1
        ;   XREF to: 00550db4 (CONDITIONAL_JUMP)  ; LAB_00550db4
    RET                                 ; 00550db3
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550db4
        ;   Label: LAB_00550db4
    MOV dword ptr [EAX + 0x1c],EDX      ; 00550db8
    MOV DL,byte ptr [EAX + 0x118]       ; 00550dbb
    MOV dword ptr [EAX + 0x20],0x1      ; 00550dc1
    OR DL,0x2                           ; 00550dc8
    MOV byte ptr [EAX + 0x118],DL       ; 00550dcb
    CALL sound_sndmain.cpp_FUN_00551440 ; 00550dd1
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    MOV EAX,0x1                         ; 00550dd6
    RET                                 ; 00550ddb

