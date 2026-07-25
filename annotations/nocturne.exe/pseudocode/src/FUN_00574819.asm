; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574819(HANDLE param_1,FILETIME *param_2,FILETIME *param_3,FILETIME *param_4)
;
;
; Referenced Globals:
;   void* PTR_GetTimeZoneInformation_0057553c = 00175dfe
;   void* PTR_SetFileTime_005755a4 = 00176006
;
; *****************************************************************************

section .text

    AND EAX,0x57553c                    ; 00574819 | PTR_GetTimeZoneInformation_0057553c
        ;   Label: FUN_00574819
    JMP dword ptr [0x005755a4]          ; 0057481e | PTR_SetFileTime_005755a4

