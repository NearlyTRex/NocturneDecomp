; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_0052c760(UINT_PTR param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; XREF[1]:
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00528500 at 00528547
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005753f4 = 00175868
;   undefined4 DAT_005bed44
;
; Called Functions:
;   sound_sndwav.cpp_CWavOutDevice_close_FUN_0052c290
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 0052c760
        ;   Label: sound_sndwav.cpp_getWavOutDevice_FUN_0052c760
    PUSH 0x2dc9440                      ; 0052c763
    CALL sound_sndwav.cpp_CWavOutDevice_close_FUN_0052c290 ; 0052c768
        ;   XREF to: 0052c290 (UNCONDITIONAL_CALL)  ; undefined sound_sndwav.cpp_CWavOutDevice_close_FUN_0052c290()
    ADD ESP,0x4                         ; 0052c76d
    TEST EAX,EAX                        ; 0052c770
    JNZ 0x0052c778                      ; 0052c772
        ;   XREF to: 0052c778 (CONDITIONAL_JUMP)  ; LAB_0052c778
    ADD ESP,0x34                        ; 0052c774
    RET                                 ; 0052c777
    PUSH 0x34                           ; 0052c778
        ;   Label: LAB_0052c778
    LEA EAX,[ESP + 0x4]                 ; 0052c77a
    PUSH EAX                            ; 0052c77e
    MOV EDX,dword ptr [ESP + 0x40]      ; 0052c77f
    PUSH EDX                            ; 0052c783
    CALL dword ptr CS:[0x5753f4]        ; 0052c784 | PTR_waveOutGetDevCapsA_005753f4
    TEST EAX,EAX                        ; 0052c78b
    JZ 0x0052c795                       ; 0052c78d
        ;   XREF to: 0052c795 (CONDITIONAL_JUMP)  ; LAB_0052c795
    XOR EAX,EAX                         ; 0052c78f
    ADD ESP,0x34                        ; 0052c791
    RET                                 ; 0052c794
    MOV EAX,dword ptr [ESP + 0x38]      ; 0052c795
        ;   Label: LAB_0052c795
    MOV [0x005bed44],EAX                ; 0052c799 | DAT_005bed44
    MOV EAX,0x2dc9440                   ; 0052c79e
    ADD ESP,0x34                        ; 0052c7a3
    RET                                 ; 0052c7a6

