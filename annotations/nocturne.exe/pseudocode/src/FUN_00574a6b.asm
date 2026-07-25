; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a6b(UINT param_1,HANDLE param_2)
;
;
; Referenced Globals:
;   void* PTR_SetClipboardData_00575464 = 00175a40
;   void* PTR_GlobalFree_00575548 = 00175e34
;
; *****************************************************************************

section .text

    AND EAX,0x575548                    ; 00574a6b | PTR_GlobalFree_00575548
        ;   Label: FUN_00574a6b
    JMP dword ptr [0x00575464]          ; 00574a70 | PTR_SetClipboardData_00575464

