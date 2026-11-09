; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_0055e630(UINT device_id)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
;
; XREF[1]:
;   sound_sndmain.cpp_initializeRecordingDevice_FUN_00558a50 at 00558a8e
;
; Referenced Globals:
;   undefined4 DAT_00604518
;
; Called Functions:
;   sound_sndwav.cpp_CWavInDevice_close_FUN_0055dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x30                        ; 0055e630
        ;   Label: sound_sndwav.cpp_getWavInDevice_FUN_0055e630
    PUSH 0x2cf567c                      ; 0055e633
    CALL sound_sndwav.cpp_CWavInDevice_close_FUN_0055dda0 ; 0055e638
        ;   XREF to: 0055dda0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_CWavInDevice_close_FUN_0055dda0(CWavInDevice * this_ptr)
    ADD ESP,0x4                         ; 0055e63d
    TEST EAX,EAX                        ; 0055e640
    JNZ 0x0055e648                      ; 0055e642
        ;   XREF to: 0055e648 (CONDITIONAL_JUMP)  ; LAB_0055e648
    ADD ESP,0x30                        ; 0055e644
    RET                                 ; 0055e647
    PUSH 0x30                           ; 0055e648
        ;   Label: LAB_0055e648
    LEA EAX,[ESP + 0x4]                 ; 0055e64a
    PUSH EAX                            ; 0055e64e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0055e64f
    PUSH EDX                            ; 0055e653
    CALL dword ptr CS:[0x5b3464]        ; 0055e654
    TEST EAX,EAX                        ; 0055e65b
    JZ 0x0055e665                       ; 0055e65d
        ;   XREF to: 0055e665 (CONDITIONAL_JUMP)  ; LAB_0055e665
    XOR EAX,EAX                         ; 0055e65f
    ADD ESP,0x30                        ; 0055e661
    RET                                 ; 0055e664
    MOV EAX,dword ptr [ESP + 0x34]      ; 0055e665
        ;   Label: LAB_0055e665
    MOV [0x00604518],EAX                ; 0055e669 | DAT_00604518
    MOV EAX,0x2cf567c                   ; 0055e66e
    ADD ESP,0x30                        ; 0055e673
    RET                                 ; 0055e676

