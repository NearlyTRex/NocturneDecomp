; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503364
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004ffd20 at 004ffdc3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fd800
        ;   Label: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800
    MOV EAX,dword ptr [EAX + 0x1314]    ; 004fd804
    RET                                 ; 004fd80a

