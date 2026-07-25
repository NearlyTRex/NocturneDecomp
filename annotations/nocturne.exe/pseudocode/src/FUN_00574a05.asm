; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574a05(HDC param_1)
;
;
; Referenced Globals:
;   void* PTR_CreateCompatibleDC_0057539c = 00175712
;   void* PTR_CreateDIBSection_005753a0 = 00175728
;
; *****************************************************************************

section .text

    AND EAX,0x5753a0                    ; 00574a05 | PTR_CreateDIBSection_005753a0
        ;   Label: FUN_00574a05
    JMP dword ptr [0x0057539c]          ; 00574a0a | PTR_CreateCompatibleDC_0057539c

