; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_allocateHwSample_FUN_005a5620(int bits_per_sample, int channel_count, int sample_rate, int sample_count)
;
; Parameters:
; int              Stack[0x4]:4   bits_per_sample
; int              Stack[0x8]:4   channel_count
; int              Stack[0xc]:4   sample_rate
; int              Stack[0x10]:4   sample_count
;
; Referenced Globals:
;   TerminatedCString s_allocateHwSample_failed_0064fabf
;   int g_LastSampleAccessIndex
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f62980
;   undefined4 DAT_03f629ac
;   undefined4 DAT_03f62afc
;   undefined4 DAT_03f62b00
;   undefined4 DAT_03f62b04
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5620
        ;   Label: sound_sndmain.cpp_allocateHwSample_FUN_005a5620
    PUSH ESI                            ; 005a5621
    PUSH EDI                            ; 005a5622
    PUSH EBP                            ; 005a5623
    MOV EBP,dword ptr [ESP + 0x14]      ; 005a5624
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a5628
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a562c
    CMP dword ptr [0x03f69268],0x0      ; 005a5630 | g_CSoundDevicePtr
    JZ 0x005a5689                       ; 005a5637
        ;   XREF to: 005a5689 (CONDITIONAL_JUMP)  ; LAB_005a5689
    PUSH EDI                            ; 005a5639
        ;   Label: LAB_005a5639
    PUSH ESI                            ; 005a563a
    MOV ECX,dword ptr [ESP + 0x20]      ; 005a563b
    PUSH ECX                            ; 005a563f
    MOV EAX,[0x03f69268]                ; 005a5640 | g_CSoundDevicePtr
    PUSH EBP                            ; 005a5645
    MOV EDX,dword ptr [EAX]             ; 005a5646
    PUSH EAX                            ; 005a5648
    CALL dword ptr [EDX + 0x2c]         ; 005a5649
    ADD ESP,0x14                        ; 005a564c
    TEST EAX,EAX                        ; 005a564f
    JNZ 0x005a568b                      ; 005a5651
        ;   XREF to: 005a568b (CONDITIONAL_JUMP)  ; LAB_005a568b
    MOV EAX,[0x03f62828]                ; 005a5653 | g_LastSampleAccessIndex
    XOR EBX,EBX                         ; 005a5658
    INC EAX                             ; 005a565a
        ;   Label: LAB_005a565a
    CMP EAX,0x40                        ; 005a565b
    JL 0x005a5662                       ; 005a565e
        ;   XREF to: 005a5662 (CONDITIONAL_JUMP)  ; LAB_005a5662
    XOR EAX,EAX                         ; 005a5660
    IMUL EDX,EAX,0x180                  ; 005a5662
        ;   Label: LAB_005a5662
    CMP dword ptr [EDX + 0x3f62980],0x0 ; 005a5668 | DAT_03f62980 | DAT_03f62b00
    JZ 0x005a5690                       ; 005a566f
        ;   XREF to: 005a5690 (CONDITIONAL_JUMP)  ; LAB_005a5690
    INC EBX                             ; 005a5671
        ;   Label: LAB_005a5671
    CMP EBX,0x40                        ; 005a5672
    JL 0x005a565a                       ; 005a5675
        ;   XREF to: 005a565a (CONDITIONAL_JUMP)  ; LAB_005a565a
    CMP EBX,0x40                        ; 005a5677
        ;   Label: LAB_005a5677
    JL 0x005a5639                       ; 005a567a
        ;   XREF to: 005a5639 (CONDITIONAL_JUMP)  ; LAB_005a5639
    PUSH 0x64fabf                       ; 005a567c | = "allocateHwSample - failed\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a5681
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005a5686
    XOR EAX,EAX                         ; 005a5689
        ;   Label: LAB_005a5689
    POP EBP                             ; 005a568b
        ;   Label: LAB_005a568b
    POP EDI                             ; 005a568c
    POP ESI                             ; 005a568d
    POP EBX                             ; 005a568e
    RET                                 ; 005a568f
    CMP dword ptr [EDX + 0x3f62984],0x0 ; 005a5690 | DAT_03f62b04
        ;   Label: LAB_005a5690
    JZ 0x005a5671                       ; 005a5697
        ;   XREF to: 005a5671 (CONDITIONAL_JUMP)  ; LAB_005a5671
    CMP dword ptr [EDX + 0x3f6297c],0x0 ; 005a5699 | DAT_03f62afc
    JNZ 0x005a5671                      ; 005a56a0
        ;   XREF to: 005a5671 (CONDITIONAL_JUMP)  ; LAB_005a5671
    ADD EDX,0x3f6282c                   ; 005a56a2 | g_SfxSamples
    PUSH EDX                            ; 005a56a8 | DAT_03f629ac
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a56a9
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a56ae
    JMP 0x005a5677                      ; 005a56b1
        ;   XREF to: 005a5677 (UNCONDITIONAL_JUMP)  ; LAB_005a5677

