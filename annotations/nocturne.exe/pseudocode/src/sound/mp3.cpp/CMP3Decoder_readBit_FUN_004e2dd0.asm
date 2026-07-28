; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0 at 004e2f96
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004e2dd0
        ;   Label: sound_mp3.cpp_CMP3Decoder_readBit_FUN_004e2dd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e2dd2
    PUSH EDX                            ; 004e2dd6
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e2dd7
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 004e2ddc
    RET                                 ; 004e2ddf

