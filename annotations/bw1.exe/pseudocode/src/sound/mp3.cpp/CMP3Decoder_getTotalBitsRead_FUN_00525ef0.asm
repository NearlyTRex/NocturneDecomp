; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052ba54
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410 at 005284b3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00525ef0
        ;   Label: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0
    MOV EAX,dword ptr [EAX + 0x1314]    ; 00525ef4
    RET                                 ; 00525efa

