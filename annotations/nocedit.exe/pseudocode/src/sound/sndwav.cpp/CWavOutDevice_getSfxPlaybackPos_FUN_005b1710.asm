; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double sound_sndwav.cpp_CWavOutDevice_getSfxPlaybackPos_FUN_005b1710(CWavOutDevice * this_ptr, CSfxSlot * slot)
;
; Parameters:
; CWavOutDevice *  Stack[0x8]:4   this_ptr
; CSfxSlot *       Stack[0xc]:4   slot
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005b1710
        ;   Label: sound_sndwav.cpp_CWavOutDevice_getSfxPlaybackPos_FUN_005b1710
    XOR EDX,EDX                         ; 005b1713
    MOV ECX,0xbff00000                  ; 005b1715
    MOV EAX,EDX                         ; 005b171a
    MOV dword ptr [ESP],EDX             ; 005b171c
    MOV dword ptr [ESP + 0x4],ECX       ; 005b171f
    MOV EDX,ECX                         ; 005b1723
    ADD ESP,0x8                         ; 005b1725
    RET                                 ; 005b1728

