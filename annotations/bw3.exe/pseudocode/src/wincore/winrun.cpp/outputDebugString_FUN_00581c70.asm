; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_outputDebugString_FUN_00581c70(LPCSTR message)
;
; Parameters:
; LPCSTR           Stack[0x4]:4   message
;
; XREF[7]:
;   sound_sndmain.cpp_getSfxSample_FUN_00551d20 at 005520f8
;   sound_sndmain.cpp_logSoundError_FUN_0055a560 at 0055a59f
;   support_trisock.cpp_cleanupWinsock_FUN_00571f10 at 00571f1e
;   support_trisock.cpp_dnsLookupThreadProc_FUN_00570ae0 at 00570c70
;   support_trisock.cpp_startupWinsock_FUN_00571ea0 at 00571eab
;   support_trstream.cpp_COutStreamDebug_putChar_FUN_00574e80 at 00574e93
;   support_trstream.cpp_COutStreamDebug_write_FUN_00574eb0 at 00574f10
;
; Referenced Globals:
;   void* PTR_OutputDebugStringA_005b3608 = 001b40a0
;
; Called Functions:
;   OutputDebugStringA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00581c70
        ;   Label: wincore_winrun.cpp_outputDebugString_FUN_00581c70
    PUSH EDX                            ; 00581c74
    CALL dword ptr CS:[0x5b3608]        ; 00581c75 | PTR_OutputDebugStringA_005b3608
    RET                                 ; 00581c7c

