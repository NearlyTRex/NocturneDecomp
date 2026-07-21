; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(undefined4 param_1)
;
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
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e2ddc
    RET                                 ; 004e2ddf

