; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_FUN_004fd8f0(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_mp3.cpp_FUN_004fd9f0 at 004fdab6
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004fd8f0
        ;   Label: sound_mp3.cpp_FUN_004fd8f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fd8f2
    PUSH EDX                            ; 004fd8f6
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 004fd8f7
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 004fd8fc
    RET                                 ; 004fd8ff

