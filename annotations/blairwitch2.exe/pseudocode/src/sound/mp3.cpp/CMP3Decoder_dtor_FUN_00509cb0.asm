; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_dtor_FUN_00509cb0(CMP3Decoder *this_ptr,uint flags)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 at 0054da5b
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509cb0
        ;   Label: sound_mp3.cpp_CMP3Decoder_dtor_FUN_00509cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00509cb1
    PUSH EBX                            ; 00509cb5
    CALL sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30 ; 00509cb6
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_free_FUN_00509f30(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00509cbb
    MOV EAX,EBX                         ; 00509cbe
    POP EBX                             ; 00509cc0
    RET                                 ; 00509cc1

