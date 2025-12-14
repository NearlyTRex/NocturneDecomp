; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMP3Decoder * sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530(CMP3Decoder * this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 at 0053440b
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 at 005a6312
;   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 at 005ad00e
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534530
        ;   Label: sound_mp3.cpp_CMP3Decoder_dtor_FUN_00534530
    MOV EBX,dword ptr [ESP + 0x8]       ; 00534531
    PUSH EBX                            ; 00534535
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0 ; 00534536
        ;   XREF to: 005349e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0053453b
    MOV EAX,EBX                         ; 0053453e
    POP EBX                             ; 00534540
    RET                                 ; 00534541

