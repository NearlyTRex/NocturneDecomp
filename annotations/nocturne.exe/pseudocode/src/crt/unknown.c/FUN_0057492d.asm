; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0057492d(HINSTANCE param_1,LPCSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_GetStockObject_005753b0 = 00175766
;   void* PTR_LoadCursorA_00575444 = 001759c6
;
; *****************************************************************************

section .text

    AND EAX,0x5753b0                    ; 0057492d | PTR_GetStockObject_005753b0
        ;   Label: crt_unknown.c_FUN_0057492d
    JMP dword ptr [0x00575444]          ; 00574932 | PTR_LoadCursorA_00575444

