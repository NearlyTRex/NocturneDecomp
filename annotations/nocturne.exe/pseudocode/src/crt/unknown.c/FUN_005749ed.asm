; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005749ed(HDC param_1,COLORREF param_2)
;
;
; Referenced Globals:
;   void* PTR_CreateBrushIndirect_00575398 = 001756fc
;   void* PTR_SetBkColor_005753c0 = 001757ac
;
; *****************************************************************************

section .text

    AND EAX,0x575398                    ; 005749ed | PTR_CreateBrushIndirect_00575398
        ;   Label: crt_unknown.c_FUN_005749ed
    JMP dword ptr [0x005753c0]          ; 005749f2 | PTR_SetBkColor_005753c0

