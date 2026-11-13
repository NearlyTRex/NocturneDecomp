; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00552790(int *bits_per_sample,int *channels,int *sample_rate)
;
; Parameters:
; int *            Stack[0x4]:4   bits_per_sample
; int *            Stack[0x8]:4   channels
; int *            Stack[0xc]:4   sample_rate
;
; XREF[5]:
;   sound_sndmain.cpp_getAudioBitDepth_FUN_005527d0 at 005527d9
;   sound_sndmain.cpp_getAudioChannelCount_FUN_00552810 at 00552819
;   sound_sndmain.cpp_getAudioSampleRate_FUN_005527f0 at 005527f9
;   sound_sndmain.cpp_readIni_FUN_00553680 at 00553803
;   sound_sndmain.cpp_writeIni_FUN_00553980 at 00553a1e
;
; Referenced Globals:
;   undefined4 DAT_0061bc98
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_0061bca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552790
        ;   Label: sound_sndmain.cpp_getAudioFormat_FUN_00552790
    MOV EBX,dword ptr [ESP + 0x8]       ; 00552791
    MOV ECX,dword ptr [ESP + 0xc]       ; 00552795
    MOV EDX,dword ptr [ESP + 0x10]      ; 00552799
    TEST EBX,EBX                        ; 0055279d
    JNZ 0x005527b2                      ; 0055279f
        ;   XREF to: 005527b2 (CONDITIONAL_JUMP)  ; LAB_005527b2
    TEST ECX,ECX                        ; 005527a1
        ;   Label: LAB_005527a1
    JZ 0x005527ac                       ; 005527a3
        ;   XREF to: 005527ac (CONDITIONAL_JUMP)  ; LAB_005527ac
    MOV EAX,[0x0061bc9c]                ; 005527a5 | DAT_0061bc9c
    MOV dword ptr [ECX],EAX             ; 005527aa
    TEST EDX,EDX                        ; 005527ac
        ;   Label: LAB_005527ac
    JNZ 0x005527bb                      ; 005527ae
        ;   XREF to: 005527bb (CONDITIONAL_JUMP)  ; LAB_005527bb
    POP EBX                             ; 005527b0
    RET                                 ; 005527b1
    MOV EAX,[0x0061bc98]                ; 005527b2 | DAT_0061bc98
        ;   Label: LAB_005527b2
    MOV dword ptr [EBX],EAX             ; 005527b7
    JMP 0x005527a1                      ; 005527b9
        ;   XREF to: 005527a1 (UNCONDITIONAL_JUMP)  ; LAB_005527a1
    MOV EAX,[0x0061bca0]                ; 005527bb | DAT_0061bca0
        ;   Label: LAB_005527bb
    MOV dword ptr [EDX],EAX             ; 005527c0
    POP EBX                             ; 005527c2
    RET                                 ; 005527c3

