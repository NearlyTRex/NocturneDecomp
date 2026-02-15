; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_allocateSample_FUN_005b16b0(CWavOutDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,int sample_count)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   channel_count
; int              Stack[0x10]:4   sample_rate
; int              Stack[0x14]:4   sample_count
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 005b16b0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_allocateSample_FUN_005b16b0
    RET                                 ; 005b16b2

