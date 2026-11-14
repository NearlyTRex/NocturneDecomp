; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_00557d10(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndwav.cpp_getWavOutDevice_FUN_005589e0 at 005589e8
;
; Referenced Globals:
;   void* PTR_waveOutClose_005c8470 = 001c89b6
;   void* PTR_GlobalFree_005c85cc = 001c8f9c
;   TerminatedCString s_waveOutClose_failed_005ea55e
;   undefined4 DAT_0264b070
;
; Called Functions:
;   GlobalFree
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;   waveOutClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557d10
        ;   Label: sound_sndwav.cpp_CWavOutDevice_close_FUN_00557d10
    PUSH ESI                            ; 00557d11
    PUSH EDI                            ; 00557d12
    PUSH EBP                            ; 00557d13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00557d14
    PUSH EBX                            ; 00557d18
    MOV EAX,dword ptr [EBX]             ; 00557d19
    MOV ESI,0x1                         ; 00557d1b
    CALL dword ptr [EAX + 0x8]          ; 00557d20
    ADD ESP,0x4                         ; 00557d23
    TEST EAX,EAX                        ; 00557d26
    JZ 0x00557d83                       ; 00557d28
        ;   XREF to: 00557d83 (CONDITIONAL_JUMP)  ; LAB_00557d83
    XOR EBX,EBX                         ; 00557d2a
        ;   Label: LAB_00557d2a
    XOR EDI,EDI                         ; 00557d2c
    MOV EDX,dword ptr [EBX + 0x264b0b4] ; 00557d2e
        ;   Label: LAB_00557d2e
    CMP EDI,EDX                         ; 00557d34
    JZ 0x00557d46                       ; 00557d36
        ;   XREF to: 00557d46 (CONDITIONAL_JUMP)  ; LAB_00557d46
    PUSH EDX                            ; 00557d38
    CALL dword ptr CS:[0x5c85cc]        ; 00557d39 | PTR_GlobalFree_005c85cc
    MOV dword ptr [EBX + 0x264b0b4],EDI ; 00557d40
    MOV EBP,dword ptr [EBX + 0x264b074] ; 00557d46
        ;   Label: LAB_00557d46
    MOV dword ptr [EBX + 0x264b0d4],EDI ; 00557d4c
    CMP EDI,EBP                         ; 00557d52
    JZ 0x00557d64                       ; 00557d54
        ;   XREF to: 00557d64 (CONDITIONAL_JUMP)  ; LAB_00557d64
    PUSH EBP                            ; 00557d56
    CALL dword ptr CS:[0x5c85cc]        ; 00557d57 | PTR_GlobalFree_005c85cc
    MOV dword ptr [EBX + 0x264b074],EDI ; 00557d5e
    ADD EBX,0x4                         ; 00557d64
        ;   Label: LAB_00557d64
    MOV dword ptr [EBX + 0x264b090],EDI ; 00557d67
    CMP EBX,0x20                        ; 00557d6d
    JNZ 0x00557d2e                      ; 00557d70
        ;   XREF to: 00557d2e (CONDITIONAL_JUMP)  ; LAB_00557d2e
    MOV EDX,dword ptr [0x0264b070]      ; 00557d72 | DAT_0264b070
    TEST EDX,EDX                        ; 00557d78
    JNZ 0x00557d87                      ; 00557d7a
        ;   XREF to: 00557d87 (CONDITIONAL_JUMP)  ; LAB_00557d87
    MOV EAX,ESI                         ; 00557d7c
    POP EBP                             ; 00557d7e
    POP EDI                             ; 00557d7f
    POP ESI                             ; 00557d80
    POP EBX                             ; 00557d81
    RET                                 ; 00557d82
    XOR ESI,ESI                         ; 00557d83
        ;   Label: LAB_00557d83
    JMP 0x00557d2a                      ; 00557d85
        ;   XREF to: 00557d2a (UNCONDITIONAL_JUMP)  ; LAB_00557d2a
    PUSH EDX                            ; 00557d87
        ;   Label: LAB_00557d87
    CALL dword ptr CS:[0x5c8470]        ; 00557d88 | PTR_waveOutClose_005c8470
    TEST EAX,EAX                        ; 00557d8f
    JZ 0x00557da2                       ; 00557d91
        ;   XREF to: 00557da2 (CONDITIONAL_JUMP)  ; LAB_00557da2
    PUSH 0x5ea55e                       ; 00557d93 | = "waveOutClose failed."
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00557d98
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    XOR ESI,ESI                         ; 00557d9d
    ADD ESP,0x4                         ; 00557d9f
    XOR EBX,EBX                         ; 00557da2
        ;   Label: LAB_00557da2
    MOV dword ptr [0x0264b070],EBX      ; 00557da4 | DAT_0264b070
    MOV EAX,ESI                         ; 00557daa
    POP EBP                             ; 00557dac
    POP EDI                             ; 00557dad
    POP ESI                             ; 00557dae
    POP EBX                             ; 00557daf
    RET                                 ; 00557db0

