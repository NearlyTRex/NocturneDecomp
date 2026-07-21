; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(int param_1)
;
;
; XREF[2]:
;   FUN_004e5200 at 004e52a3
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e8ed4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e2ce0
        ;   Label: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
    MOV EAX,dword ptr [EAX + 0x1314]    ; 004e2ce4
    RET                                 ; 004e2cea

