; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_FUN_00525fe0(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_mp3.cpp_FUN_005260e0 at 005261a6
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00525fe0
        ;   Label: sound_mp3.cpp_FUN_00525fe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00525fe2
    PUSH EDX                            ; 00525fe6
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00 ; 00525fe7
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00525fec
    RET                                 ; 00525fef

