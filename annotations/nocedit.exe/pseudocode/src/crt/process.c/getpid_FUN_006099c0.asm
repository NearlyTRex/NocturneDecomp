; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl undefined crt_process.c_getpid_FUN_006099c0(void)
;
;
; XREF[1]:
;   crt_io.c_generateTempFilename_FUN_00601f1c at 00601f24
;
; Referenced Globals:
;   GetCurrentProcessId* g_GetCurrentProcessIdFunc = 00211e6e
;
; Called Functions:
;   GetCurrentProcessId
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x611580]        ; 006099c0 | g_GetCurrentProcessIdFunc
        ;   Label: crt_process.c_getpid_FUN_006099c0
    RET                                 ; 006099c7

