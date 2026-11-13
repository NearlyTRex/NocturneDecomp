; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_0057ac70(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndwav.cpp_getWavInDevice_FUN_0057b500 at 0057b508
;
; Referenced Globals:
;   void* PTR_waveInClose_005d0460 = 001d0954
;   void* PTR_GlobalFree_005d05e0 = 001d0fd8
;   TerminatedCString s_waveInClose_failed_005f5822
;   undefined4 DAT_02c828d8
;   undefined4 DAT_02c829cc
;
; Called Functions:
;   GlobalFree
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;   waveInClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ac70
        ;   Label: sound_sndwav.cpp_CWavInDevice_close_FUN_0057ac70
    PUSH ESI                            ; 0057ac71
    PUSH EDI                            ; 0057ac72
    PUSH EBP                            ; 0057ac73
    MOV EBX,dword ptr [ESP + 0x14]      ; 0057ac74
    PUSH EBX                            ; 0057ac78
    MOV EAX,dword ptr [EBX]             ; 0057ac79
    MOV ESI,0x1                         ; 0057ac7b
    CALL dword ptr [EAX + 0x8]          ; 0057ac80
    ADD ESP,0x4                         ; 0057ac83
    TEST EAX,EAX                        ; 0057ac86
    JZ 0x0057ace3                       ; 0057ac88
        ;   XREF to: 0057ace3 (CONDITIONAL_JUMP)  ; LAB_0057ace3
    XOR EBX,EBX                         ; 0057ac8a
        ;   Label: LAB_0057ac8a
    XOR EDI,EDI                         ; 0057ac8c
    MOV EDX,dword ptr [EBX + 0x2c8297c] ; 0057ac8e
        ;   Label: LAB_0057ac8e
    CMP EDI,EDX                         ; 0057ac94
    JZ 0x0057aca6                       ; 0057ac96
        ;   XREF to: 0057aca6 (CONDITIONAL_JUMP)  ; LAB_0057aca6
    PUSH EDX                            ; 0057ac98
    CALL dword ptr CS:[0x5d05e0]        ; 0057ac99 | PTR_GlobalFree_005d05e0
    MOV dword ptr [EBX + 0x2c8297c],EDI ; 0057aca0
    MOV EBP,dword ptr [EBX + 0x2c828dc] ; 0057aca6
        ;   Label: LAB_0057aca6
    MOV dword ptr [EBX + 0x2c829cc],EDI ; 0057acac | DAT_02c829cc
    CMP EDI,EBP                         ; 0057acb2
    JZ 0x0057acc4                       ; 0057acb4
        ;   XREF to: 0057acc4 (CONDITIONAL_JUMP)  ; LAB_0057acc4
    PUSH EBP                            ; 0057acb6
    CALL dword ptr CS:[0x5d05e0]        ; 0057acb7 | PTR_GlobalFree_005d05e0
    MOV dword ptr [EBX + 0x2c828dc],EDI ; 0057acbe
    ADD EBX,0x4                         ; 0057acc4
        ;   Label: LAB_0057acc4
    MOV dword ptr [EBX + 0x2c82928],EDI ; 0057acc7
    CMP EBX,0x50                        ; 0057accd
    JNZ 0x0057ac8e                      ; 0057acd0
        ;   XREF to: 0057ac8e (CONDITIONAL_JUMP)  ; LAB_0057ac8e
    MOV EDX,dword ptr [0x02c828d8]      ; 0057acd2 | DAT_02c828d8
    TEST EDX,EDX                        ; 0057acd8
    JNZ 0x0057ace7                      ; 0057acda
        ;   XREF to: 0057ace7 (CONDITIONAL_JUMP)  ; LAB_0057ace7
    MOV EAX,ESI                         ; 0057acdc
    POP EBP                             ; 0057acde
    POP EDI                             ; 0057acdf
    POP ESI                             ; 0057ace0
    POP EBX                             ; 0057ace1
    RET                                 ; 0057ace2
    XOR ESI,ESI                         ; 0057ace3
        ;   Label: LAB_0057ace3
    JMP 0x0057ac8a                      ; 0057ace5
        ;   XREF to: 0057ac8a (UNCONDITIONAL_JUMP)  ; LAB_0057ac8a
    PUSH EDX                            ; 0057ace7
        ;   Label: LAB_0057ace7
    CALL dword ptr CS:[0x5d0460]        ; 0057ace8 | PTR_waveInClose_005d0460
    TEST EAX,EAX                        ; 0057acef
    JZ 0x0057ad02                       ; 0057acf1
        ;   XREF to: 0057ad02 (CONDITIONAL_JUMP)  ; LAB_0057ad02
    PUSH 0x5f5822                       ; 0057acf3 | = "waveInClose failed."
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 0057acf8
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    XOR ESI,ESI                         ; 0057acfd
    ADD ESP,0x4                         ; 0057acff
    XOR EBX,EBX                         ; 0057ad02
        ;   Label: LAB_0057ad02
    MOV dword ptr [0x02c828d8],EBX      ; 0057ad04 | DAT_02c828d8
    MOV EAX,ESI                         ; 0057ad0a
    POP EBP                             ; 0057ad0c
    POP EDI                             ; 0057ad0d
    POP ESI                             ; 0057ad0e
    POP EBX                             ; 0057ad0f
    RET                                 ; 0057ad10

