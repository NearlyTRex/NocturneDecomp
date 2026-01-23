; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWavOutDevice * sound_sndwav.cpp_getWavOutDevice_FUN_005b1510(UINT device_id)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
;
; XREF[1]:
;   sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0 at 005ab5f7
;
; Referenced Globals:
;   waveOutGetDevCapsA* g_waveOutGetDevCapsAFunc = 0021192e
;   UINT g_WaveOutDeviceID = 0xffffffff
;   CWavOutDevice g_CWavOutDeviceInstance
;
; Called Functions:
;   sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 005b1510
        ;   Label: sound_sndwav.cpp_getWavOutDevice_FUN_005b1510
    PUSH 0x3f6af40                      ; 005b1513 | g_CWavOutDeviceInstance
    CALL sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840 ; 005b1518
        ;   XREF to: 005b0840 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840(CWavOutDevice * this_ptr)
    ADD ESP,0x4                         ; 005b151d
    TEST EAX,EAX                        ; 005b1520
    JNZ 0x005b1528                      ; 005b1522
        ;   XREF to: 005b1528 (CONDITIONAL_JUMP)  ; LAB_005b1528
    ADD ESP,0x34                        ; 005b1524
    RET                                 ; 005b1527
    PUSH 0x34                           ; 005b1528
        ;   Label: LAB_005b1528
    LEA EAX,[ESP + 0x4]                 ; 005b152a
    PUSH EAX                            ; 005b152e
    MOV EDX,dword ptr [ESP + 0x40]      ; 005b152f
    PUSH EDX                            ; 005b1533
    CALL dword ptr CS:[0x611444]        ; 005b1534 | g_waveOutGetDevCapsAFunc
    TEST EAX,EAX                        ; 005b153b
    JZ 0x005b1545                       ; 005b153d
        ;   XREF to: 005b1545 (CONDITIONAL_JUMP)  ; LAB_005b1545
    XOR EAX,EAX                         ; 005b153f
    ADD ESP,0x34                        ; 005b1541
    RET                                 ; 005b1544
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b1545
        ;   Label: LAB_005b1545
    MOV [0x00681e04],EAX                ; 005b1549 | g_WaveOutDeviceID
    MOV EAX,0x3f6af40                   ; 005b154e | g_CWavOutDeviceInstance
    ADD ESP,0x34                        ; 005b1553
    RET                                 ; 005b1556

