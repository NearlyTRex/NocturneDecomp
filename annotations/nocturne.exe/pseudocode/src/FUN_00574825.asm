; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574825(SYSTEMTIME *param_1,LPFILETIME param_2)
;
;
; Referenced Globals:
;   void* PTR_LocalFileTimeToFileTime_00575564 = 00175eba
;   void* PTR_SystemTimeToFileTime_005755bc = 0017606e
;
; *****************************************************************************

section .text

    AND EAX,0x575564                    ; 00574825 | PTR_LocalFileTimeToFileTime_00575564
        ;   Label: FUN_00574825
    JMP dword ptr [0x005755bc]          ; 0057482a | PTR_SystemTimeToFileTime_005755bc

