; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_sndmain.cpp_getSampleInfo_FUN_005279e0 at 00527b70
;   sound_sndmain.cpp_getSfxSample_FUN_00522480 at 0052251c
;   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005229f0 at 00522ac2
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 005269ab
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7d90
        ;   Label: sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7d91
    PUSH 0x2c                           ; 004e7d95
    PUSH 0x0                            ; 004e7d97
    LEA EAX,[EBX + 0x5320]              ; 004e7d99
    MOV dword ptr [EBX + 0x108],0x0     ; 004e7d9f
    PUSH EAX                            ; 004e7da9
    MOV dword ptr [EBX + 0x10c],0x0     ; 004e7daa
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004e7db4
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004e7db9
    MOV EAX,EBX                         ; 004e7dbc
    MOV byte ptr [EBX],0x0              ; 004e7dbe
    POP EBX                             ; 004e7dc1
    RET                                 ; 004e7dc2

