; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00556a30(uint param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_fire.cpp_FUN_004a2830 at 004a28c4
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00552f10
;   sound_sndmain.cpp_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556a30
        ;   Label: sound_sndmain.cpp_FUN_00556a30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556a32
    PUSH EDX                            ; 00556a36
    CALL sound_sndmain.cpp_FUN_00552f10 ; 00556a37
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00556a3c
    TEST EAX,EAX                        ; 00556a3f
    JNZ 0x00556a44                      ; 00556a41
        ;   XREF to: 00556a44 (CONDITIONAL_JUMP)  ; LAB_00556a44
    RET                                 ; 00556a43
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556a44
        ;   Label: LAB_00556a44
    MOV dword ptr [EAX + 0x30],EDX      ; 00556a48
    MOV DL,byte ptr [EAX + 0x118]       ; 00556a4b
    MOV dword ptr [EAX + 0x34],0x1      ; 00556a51
    OR DL,0x4                           ; 00556a58
    MOV byte ptr [EAX + 0x118],DL       ; 00556a5b
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00556a61
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,0x1                         ; 00556a66
    RET                                 ; 00556a6b

