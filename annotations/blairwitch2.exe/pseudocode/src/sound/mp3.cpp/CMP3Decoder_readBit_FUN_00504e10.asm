; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CMP3Decoder_readBit_FUN_00504e10(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_00504f10 at 00504fd6
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00504e10
        ;   Label: sound_mp3.cpp_CMP3Decoder_readBit_FUN_00504e10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00504e12
    PUSH EDX                            ; 00504e16
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 00504e17
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00504e1c
    RET                                 ; 00504e1f

