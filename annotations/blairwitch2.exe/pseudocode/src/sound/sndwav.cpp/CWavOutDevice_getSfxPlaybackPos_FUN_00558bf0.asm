; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndwav_cpp_CWavOutDevice_getSfxPlaybackPos_FUN_00558bf0(CWavOutDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00558bf0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_getSfxPlaybackPos_FUN_00558bf0
    XOR EDX,EDX                         ; 00558bf3
    MOV ECX,0xbff00000                  ; 00558bf5
    MOV EAX,EDX                         ; 00558bfa
    MOV dword ptr [ESP],EDX             ; 00558bfc
    MOV dword ptr [ESP + 0x4],ECX       ; 00558bff
    MOV EDX,ECX                         ; 00558c03
    ADD ESP,0x8                         ; 00558c05
    RET                                 ; 00558c08

