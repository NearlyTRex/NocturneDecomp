; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574831(HANDLE param_1)
;
;
; Referenced Globals:
;   void* PTR_GetFileTime_00575510 = 00175d40
;   void* PTR_GetFileType_00575514 = 00175d4e
;
; *****************************************************************************

section .text

    AND EAX,0x575510                    ; 00574831 | PTR_GetFileTime_00575510
        ;   Label: crt_unknown.c_FUN_00574831
    JMP dword ptr [0x00575514]          ; 00574836 | PTR_GetFileType_00575514

