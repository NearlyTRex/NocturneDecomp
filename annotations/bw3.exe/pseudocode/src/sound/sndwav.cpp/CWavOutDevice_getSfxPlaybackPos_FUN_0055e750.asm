; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndwav_cpp_CWavOutDevice_getSfxPlaybackPos_FUN_0055e750(CWavOutDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0055e750
        ;   Label: sound_sndwav.cpp_CWavOutDevice_getSfxPlaybackPos_FUN_0055e750
    XOR EDX,EDX                         ; 0055e753
    MOV ECX,0xbff00000                  ; 0055e755
    MOV EAX,EDX                         ; 0055e75a
    MOV dword ptr [ESP],EDX             ; 0055e75c
    MOV dword ptr [ESP + 0x4],ECX       ; 0055e75f
    MOV EDX,ECX                         ; 0055e763
    ADD ESP,0x8                         ; 0055e765
    RET                                 ; 0055e768

