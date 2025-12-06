; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535664
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 at 00531ca0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052f160
        ;   Label: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
    MOV EAX,dword ptr [EAX + 0x1314]    ; 0052f164
    RET                                 ; 0052f16a

