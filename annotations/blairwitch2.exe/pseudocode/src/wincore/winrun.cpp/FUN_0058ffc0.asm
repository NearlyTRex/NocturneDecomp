; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_0058ffc0(LPCSTR param_1)
;
;
; XREF[6]:
;   sound_snddx.cpp_directSoundEnumerationCallback_FUN_00557540 at 0055777d
;   sound_sndmain.cpp_getSfxSample_FUN_0054c1c0 at 0054c598
;   sound_sndmain.cpp_logSoundError_FUN_005549c0 at 005549ff
;   support_trisock.cpp_FUN_0057a480 at 0057a610
;   support_trstream.cpp_COutStreamDebug_putChar_FUN_0057e240 at 0057e253
;   support_trstream.cpp_COutStreamDebug_write_FUN_0057e270 at 0057e2d0
;
; Referenced Globals:
;   void* PTR_OutputDebugStringA_005c85f4 = 001c905e
;
; Called Functions:
;   OutputDebugStringA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0058ffc0
        ;   Label: wincore_winrun.cpp_FUN_0058ffc0
    PUSH EDX                            ; 0058ffc4
    CALL dword ptr CS:[0x5c85f4]        ; 0058ffc5 | PTR_OutputDebugStringA_005c85f4
    RET                                 ; 0058ffcc

