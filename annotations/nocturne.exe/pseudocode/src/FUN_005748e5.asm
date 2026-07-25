; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005748e5(HKEY param_1,LPCSTR param_2,DWORD param_3,REGSAM param_4,PHKEY param_5)
;
;
; Referenced Globals:
;   void* PTR_RegOpenKeyExA_00575388 = 001756c6
;   void* PTR_RegQueryValueExA_0057538c = 001756d6
;
; *****************************************************************************

section .text

    AND EAX,0x57538c                    ; 005748e5 | PTR_RegQueryValueExA_0057538c
        ;   Label: FUN_005748e5
    JMP dword ptr [0x00575388]          ; 005748ea | PTR_RegOpenKeyExA_00575388

