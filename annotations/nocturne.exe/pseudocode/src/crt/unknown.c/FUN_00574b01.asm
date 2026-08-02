; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574b01(FILETIME *param_1,LPWORD param_2,LPWORD param_3)
;
;
; Referenced Globals:
;   void* PTR_DosDateTimeToFileTime_005754ac = 00175b5a
;   void* PTR_FileTimeToDosDateTime_005754bc = 00175ba6
;
; *****************************************************************************

section .text

    AND EAX,0x5754ac                    ; 00574b01 | PTR_DosDateTimeToFileTime_005754ac
        ;   Label: crt_unknown.c_FUN_00574b01
    JMP dword ptr [0x005754bc]          ; 00574b06 | PTR_FileTimeToDosDateTime_005754bc

