; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574a9b(FILETIME *param_1,LPFILETIME param_2)
;
;
; Referenced Globals:
;   void* PTR_FileTimeToLocalFileTime_005754c0 = 00175bbe
;   void* PTR_FileTimeToSystemTime_005754c4 = 00175bd8
;
; *****************************************************************************

section .text

    AND EAX,0x5754c4                    ; 00574a9b | PTR_FileTimeToSystemTime_005754c4
        ;   Label: crt_unknown.c_FUN_00574a9b
    JMP dword ptr [0x005754c0]          ; 00574aa0 | PTR_FileTimeToLocalFileTime_005754c0

