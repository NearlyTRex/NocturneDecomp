; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574969(LPCSTR param_1,LPCSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_FindWindowA_00575428 = 0017594e
;   void* PTR_GetLastActivePopup_00575438 = 00175992
;
; *****************************************************************************

section .text

    AND EAX,0x575438                    ; 00574969 | PTR_GetLastActivePopup_00575438
        ;   Label: crt_unknown.c_FUN_00574969
    JMP dword ptr [0x00575428]          ; 0057496e | PTR_FindWindowA_00575428

