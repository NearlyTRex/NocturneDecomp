; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574acb(LPSTR param_1,DWORD param_2)
;
;
; Referenced Globals:
;   void* PTR_CharUpperBuffA_00575414 = 001758f2
;   void* PTR_SetEvent_00575598 = 00175fd2
;
; *****************************************************************************

section .text

    AND EAX,0x575598                    ; 00574acb | PTR_SetEvent_00575598
        ;   Label: FUN_00574acb
    JMP dword ptr [0x00575414]          ; 00574ad0 | PTR_CharUpperBuffA_00575414

