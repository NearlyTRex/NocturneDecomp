; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b3a90(LPCSTR param_1)
;
;
; XREF[8]:
;   sound_snddx.cpp_directSoundEnumerationCallback_FUN_00579f70 at 0057a1ad
;   sound_sndmain.cpp_getSfxSample_FUN_0056e830 at 0056ec08
;   sound_sndmain.cpp_logSoundError_FUN_005773f0 at 0057742f
;   support_trisock.cpp_FUN_0059daf0 at 0059dc80
;   support_trisock.cpp_FUN_0059eeb0 at 0059eebb
;   support_trisock.cpp_FUN_0059ef20 at 0059ef2e
;   support_trstream.cpp_COutStreamDebug_putChar_FUN_005a1e90 at 005a1ea3
;   support_trstream.cpp_COutStreamDebug_write_FUN_005a1ec0 at 005a1f20
;
; Referenced Globals:
;   void* PTR_OutputDebugStringA_005d0608 = 001d109a
;
; Called Functions:
;   OutputDebugStringA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b3a90
        ;   Label: wincore_winrun.cpp_FUN_005b3a90
    PUSH EDX                            ; 005b3a94
    CALL dword ptr CS:[0x5d0608]        ; 005b3a95 | PTR_OutputDebugStringA_005d0608
    RET                                 ; 005b3a9c

