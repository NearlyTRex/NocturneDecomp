; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndwav_cpp_CWavOutDevice_getSfxPlaybackPos_FUN_0057b620(CWavOutDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0057b620
        ;   Label: sound_sndwav.cpp_CWavOutDevice_getSfxPlaybackPos_FUN_0057b620
    XOR EDX,EDX                         ; 0057b623
    MOV ECX,0xbff00000                  ; 0057b625
    MOV EAX,EDX                         ; 0057b62a
    MOV dword ptr [ESP],EDX             ; 0057b62c
    MOV dword ptr [ESP + 0x4],ECX       ; 0057b62f
    MOV EDX,ECX                         ; 0057b633
    ADD ESP,0x8                         ; 0057b635
    RET                                 ; 0057b638

