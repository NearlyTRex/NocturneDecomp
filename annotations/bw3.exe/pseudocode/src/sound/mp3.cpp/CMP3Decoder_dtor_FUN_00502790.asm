; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_dtor_FUN_00502790(CMP3Decoder *this_ptr,uint flags)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 at 005535cb
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502790
        ;   Label: sound_mp3.cpp_CMP3Decoder_dtor_FUN_00502790
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502791
    PUSH EBX                            ; 00502795
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10 ; 00502796
        ;   XREF to: 00502a10 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_00502a10(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0050279b
    MOV EAX,EBX                         ; 0050279e
    POP EBX                             ; 005027a0
    RET                                 ; 005027a1

