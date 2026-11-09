; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_dtor_FUN_0052ae80(CMP3Decoder *this_ptr,uint flags)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 at 005700cb
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ae80
        ;   Label: sound_mp3.cpp_CMP3Decoder_dtor_FUN_0052ae80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052ae81
    PUSH EBX                            ; 0052ae85
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100 ; 0052ae86
        ;   XREF to: 0052b100 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052ae8b
    MOV EAX,EBX                         ; 0052ae8e
    POP EBX                             ; 0052ae90
    RET                                 ; 0052ae91

