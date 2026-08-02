; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005749f9(HDC param_1,HGDIOBJ param_2)
;
;
; Referenced Globals:
;   void* PTR_SelectObject_005753bc = 0017579c
;   void* PTR_SetBkMode_005753c4 = 001757ba
;
; *****************************************************************************

section .text

    AND EAX,0x5753c4                    ; 005749f9 | PTR_SetBkMode_005753c4
        ;   Label: crt_unknown.c_FUN_005749f9
    JMP dword ptr [0x005753bc]          ; 005749fe | PTR_SelectObject_005753bc

