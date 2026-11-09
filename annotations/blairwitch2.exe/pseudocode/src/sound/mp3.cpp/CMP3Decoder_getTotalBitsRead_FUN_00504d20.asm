; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a884
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240 at 005072e3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00504d20
        ;   Label: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20
    MOV EAX,dword ptr [EAX + 0x1314]    ; 00504d24
    RET                                 ; 00504d2a

