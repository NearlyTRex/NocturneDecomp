; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(int device_id)
;
; Parameters:
; int              Stack[0x4]:4   device_id
;
; XREF[4]:
;   core_menu.cpp_FUN_0050ba70 at 0050c8f0
;   sound_sndmain.cpp_FUN_005760b0 at 00576194
;   sound_sndmain.cpp_initializeSoundDevice_FUN_005755c0 at 005755d3
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00574e00 at 00574e7a
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f4238
;   TerminatedCString s_selectSoundDevice_device_005f424d
;   undefined4 DAT_006232fc
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_FUN_005753b0
;   sound_sndmain.cpp_FUN_00575540
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005754d0
        ;   Label: sound_sndmain.cpp_selectSoundDevice_FUN_005754d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005754d1
    CALL sound_sndmain.cpp_FUN_00575540 ; 005754d5
        ;   XREF to: 00575540 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_FUN_00575540()
    TEST EAX,EAX                        ; 005754da
    JNZ 0x00575500                      ; 005754dc
        ;   XREF to: 00575500 (CONDITIONAL_JUMP)  ; LAB_00575500
    TEST EBX,EBX                        ; 005754de
        ;   Label: LAB_005754de
    JGE 0x005754e8                      ; 005754e0
        ;   XREF to: 005754e8 (CONDITIONAL_JUMP)  ; LAB_005754e8
    MOV EBX,dword ptr [0x006232fc]      ; 005754e2 | DAT_006232fc
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0 ; 005754e8
        ;   XREF to: 005752c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0()
        ;   Label: LAB_005754e8
    CMP EBX,EAX                         ; 005754ed
    JL 0x00575525                       ; 005754ef
        ;   XREF to: 00575525 (CONDITIONAL_JUMP)  ; LAB_00575525
    CALL sound_sndmain.cpp_FUN_005753b0 ; 005754f1
        ;   XREF to: 005753b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005753b0()
        ;   Label: LAB_005754f1
    MOV EBX,EAX                         ; 005754f6
    MOV dword ptr [0x006232fc],EBX      ; 005754f8 | DAT_006232fc
    POP EBX                             ; 005754fe
    RET                                 ; 005754ff
    MOV EDX,0x5f4238                    ; 00575500 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00575500
    MOV ECX,0x1562                      ; 00575505
    PUSH 0x5f424d                       ; 0057550a | = "selectSoundDevice - device already open."
    MOV dword ptr [0x01d1d400],EDX      ; 0057550f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00575515 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0057551b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00575520
    JMP 0x005754de                      ; 00575523
        ;   XREF to: 005754de (UNCONDITIONAL_JUMP)  ; LAB_005754de
    TEST EBX,EBX                        ; 00575525
        ;   Label: LAB_00575525
    JL 0x005754f1                       ; 00575527
        ;   XREF to: 005754f1 (CONDITIONAL_JUMP)  ; LAB_005754f1
    MOV dword ptr [0x006232fc],EBX      ; 00575529 | DAT_006232fc
    POP EBX                             ; 0057552f
    RET                                 ; 00575530

