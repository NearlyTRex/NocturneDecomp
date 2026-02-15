; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 at 00534280
;   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 at 005acfa5
;   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 at 005aa598
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a4d1c
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 at 005a52dc
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a92a0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005344f0
        ;   Label: sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005344f1
    PUSH 0x2c                           ; 005344f5
    PUSH 0x0                            ; 005344f7
    LEA EAX,[EBX + 0x5320]              ; 005344f9
    MOV dword ptr [EBX + 0x108],0x0     ; 005344ff
    PUSH EAX                            ; 00534509
    MOV dword ptr [EBX + 0x10c],0x0     ; 0053450a
    CALL crt_memory.c_memset_FUN_005fde40 ; 00534514
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00534519
    MOV EAX,EBX                         ; 0053451c
    MOV byte ptr [EBX],0x0              ; 0053451e
    POP EBX                             ; 00534521
    RET                                 ; 00534522

