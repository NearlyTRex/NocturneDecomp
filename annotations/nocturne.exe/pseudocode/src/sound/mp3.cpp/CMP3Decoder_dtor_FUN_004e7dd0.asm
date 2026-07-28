; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_dtor_FUN_004e7dd0(CMP3Decoder *this_ptr,uint flags)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 at 00523a97
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7dd0
        ;   Label: sound_mp3.cpp_CMP3Decoder_dtor_FUN_004e7dd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7dd1
    PUSH EBX                            ; 004e7dd5
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260 ; 004e7dd6
        ;   XREF to: 004e8260 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 004e7ddb
    MOV EAX,EBX                         ; 004e7dde
    POP EBX                             ; 004e7de0
    RET                                 ; 004e7de1

