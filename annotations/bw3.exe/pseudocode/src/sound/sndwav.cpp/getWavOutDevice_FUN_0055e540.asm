; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0055e540(UINT device_id)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; XREF[1]:
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00558730 at 00558777
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005b3480 = 001b39de
;   undefined4 DAT_00604514
;
; Called Functions:
;   sound_sndwav.cpp_CWavOutDevice_close_FUN_0055d870
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 0055e540
        ;   Label: sound_sndwav.cpp_getWavOutDevice_FUN_0055e540
    PUSH 0x2cf5678                      ; 0055e543
    CALL sound_sndwav.cpp_CWavOutDevice_close_FUN_0055d870 ; 0055e548
        ;   XREF to: 0055d870 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_CWavOutDevice_close_FUN_0055d870(CWavOutDevice * this_ptr)
    ADD ESP,0x4                         ; 0055e54d
    TEST EAX,EAX                        ; 0055e550
    JNZ 0x0055e558                      ; 0055e552
        ;   XREF to: 0055e558 (CONDITIONAL_JUMP)  ; LAB_0055e558
    ADD ESP,0x34                        ; 0055e554
    RET                                 ; 0055e557
    PUSH 0x34                           ; 0055e558
        ;   Label: LAB_0055e558
    LEA EAX,[ESP + 0x4]                 ; 0055e55a
    PUSH EAX                            ; 0055e55e
    MOV EDX,dword ptr [ESP + 0x40]      ; 0055e55f
    PUSH EDX                            ; 0055e563
    CALL dword ptr CS:[0x5b3480]        ; 0055e564 | PTR_waveOutGetDevCapsA_005b3480
    TEST EAX,EAX                        ; 0055e56b
    JZ 0x0055e575                       ; 0055e56d
        ;   XREF to: 0055e575 (CONDITIONAL_JUMP)  ; LAB_0055e575
    XOR EAX,EAX                         ; 0055e56f
    ADD ESP,0x34                        ; 0055e571
    RET                                 ; 0055e574
    MOV EAX,dword ptr [ESP + 0x38]      ; 0055e575
        ;   Label: LAB_0055e575
    MOV [0x00604514],EAX                ; 0055e579 | DAT_00604514
    MOV EAX,0x2cf5678                   ; 0055e57e
    ADD ESP,0x34                        ; 0055e583
    RET                                 ; 0055e586

