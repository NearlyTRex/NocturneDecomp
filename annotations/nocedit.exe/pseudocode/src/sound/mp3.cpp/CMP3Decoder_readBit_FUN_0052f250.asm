; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250(CMP3Decoder * this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350 at 0052f563
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0052f250
        ;   Label: sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052f252
    PUSH EDX                            ; 0052f256
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 0052f257 | uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052f25c
    RET                                 ; 0052f25f

