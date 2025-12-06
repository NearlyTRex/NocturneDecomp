; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_mp3.cpp_CMP3Decoder_getTotalSamples_FUN_00534d10(CMP3Decoder * this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534d10
        ;   Label: sound_mp3.cpp_CMP3Decoder_getTotalSamples_FUN_00534d10
    PUSH ESI                            ; 00534d11
    MOV ESI,dword ptr [ESP + 0xc]       ; 00534d12
    PUSH 0x0                            ; 00534d16
    PUSH ESI                            ; 00534d18
    XOR EBX,EBX                         ; 00534d19
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0 ; 00534d1b | int sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder * this_ptr, int sample_offset)
        ;   XREF to: 00534ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00534d20
    PUSH 0x0                            ; 00534d23
        ;   Label: LAB_00534d23
    PUSH ESI                            ; 00534d25
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 ; 00534d26 | int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr)
        ;   XREF to: 00534d40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00534d2b
    TEST EAX,EAX                        ; 00534d2e
    JLE 0x00534d36                      ; 00534d30 | LAB_00534d36
        ;   XREF to: 00534d36 (CONDITIONAL_JUMP)
    ADD EBX,EAX                         ; 00534d32
    JMP 0x00534d23                      ; 00534d34 | LAB_00534d23
        ;   XREF to: 00534d23 (UNCONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00534d36
        ;   Label: LAB_00534d36
    POP ESI                             ; 00534d38
    POP EBX                             ; 00534d39
    RET                                 ; 00534d3a

