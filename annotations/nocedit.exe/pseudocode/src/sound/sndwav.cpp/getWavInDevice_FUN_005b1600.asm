; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWavInDevice * sound_sndwav.cpp_getWavInDevice_FUN_005b1600(UINT device_id)
;
; Parameters:
; typedef UINT uint Stack[0x4]:4   device_id
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
;
; XREF[1]:
;   sound_sndmain.cpp_initializeRecordingDevice_FUN_005ab8d0 at 005ab90e
;
; Referenced Globals:
;   waveInGetDevCapsA* waveInGetDevCapsA = 002118b2
;   UINT g_WaveInDeviceID = 0xffffffff
;   CWavInDevice g_CWavInDeviceInstance
;
; Called Functions:
;   sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70
;
; *****************************************************************************

section .text

    SUB ESP,0x30                        ; 005b1600
        ;   Label: sound_sndwav.cpp_getWavInDevice_FUN_005b1600
    PUSH 0x3f6af44                      ; 005b1603 | CWavInDevice g_CWavInDeviceInstance
    CALL sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70 ; 005b1608 | int sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice * this_ptr)
        ;   XREF to: 005b0d70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b160d
    TEST EAX,EAX                        ; 005b1610
    JNZ 0x005b1618                      ; 005b1612 | LAB_005b1618
        ;   XREF to: 005b1618 (CONDITIONAL_JUMP)
    ADD ESP,0x30                        ; 005b1614
    RET                                 ; 005b1617
    PUSH 0x30                           ; 005b1618
        ;   Label: LAB_005b1618
    LEA EAX,[ESP + 0x4]                 ; 005b161a
    PUSH EAX                            ; 005b161e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005b161f
    PUSH EDX                            ; 005b1623
    CALL dword ptr CS:[0x611428]        ; 005b1624 | waveInGetDevCapsA * waveInGetDevCapsA
    TEST EAX,EAX                        ; 005b162b
    JZ 0x005b1635                       ; 005b162d | LAB_005b1635
        ;   XREF to: 005b1635 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b162f
    ADD ESP,0x30                        ; 005b1631
    RET                                 ; 005b1634
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b1635
        ;   Label: LAB_005b1635
    MOV [0x00681e08],EAX                ; 005b1639 | UINT g_WaveInDeviceID
    MOV EAX,0x3f6af44                   ; 005b163e | CWavInDevice g_CWavInDeviceInstance
    ADD ESP,0x30                        ; 005b1643
    RET                                 ; 005b1646

