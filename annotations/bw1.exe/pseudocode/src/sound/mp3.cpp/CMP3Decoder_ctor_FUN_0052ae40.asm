; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_sndmain.cpp_getSampleInfo_FUN_00574410 at 005745e6
;   sound_sndmain.cpp_getSfxSample_FUN_0056e830 at 0056e8ca
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 0057317e
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ae40
        ;   Label: sound_mp3.cpp_CMP3Decoder_ctor_FUN_0052ae40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052ae41
    PUSH 0x2c                           ; 0052ae45
    PUSH 0x0                            ; 0052ae47
    LEA EAX,[EBX + 0x5320]              ; 0052ae49
    MOV dword ptr [EBX + 0x108],0x0     ; 0052ae4f
    PUSH EAX                            ; 0052ae59
    MOV dword ptr [EBX + 0x10c],0x0     ; 0052ae5a
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0052ae64
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052ae69
    MOV EAX,EBX                         ; 0052ae6c
    MOV byte ptr [EBX],0x0              ; 0052ae6e
    POP EBX                             ; 0052ae71
    RET                                 ; 0052ae72

