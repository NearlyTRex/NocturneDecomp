; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005748b5(HWND param_1,LPRECT param_2)
;
;
; Referenced Globals:
;   void* PTR_mciSendStringA_005753e0 = 00175816
;   void* PTR_GetClientRect_0057542c = 0017595c
;
; *****************************************************************************

section .text

    AND EAX,0x5753e0                    ; 005748b5 | PTR_mciSendStringA_005753e0
        ;   Label: FUN_005748b5
    JMP dword ptr [0x0057542c]          ; 005748ba | PTR_GetClientRect_0057542c

