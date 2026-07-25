; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005749d5(HDC param_1)
;
;
; Referenced Globals:
;   void* PTR_DeleteDC_005753a8 = 0017574a
;   void* PTR_GetTextExtentPoint32A_005753b4 = 00175778
;
; *****************************************************************************

section .text

    AND EAX,0x5753b4                    ; 005749d5 | PTR_GetTextExtentPoint32A_005753b4
        ;   Label: FUN_005749d5
    JMP dword ptr [0x005753a8]          ; 005749da | PTR_DeleteDC_005753a8

