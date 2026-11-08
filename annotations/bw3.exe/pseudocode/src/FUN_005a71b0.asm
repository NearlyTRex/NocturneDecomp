; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a71b0(void)
;
;
; Referenced Globals:
;   void* PTR_FUN_00607d80 = 005ad360
;   void* PTR_FUN_00607d84 = 005ad360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a71b0
        ;   Label: FUN_005a71b0
    MOV EDX,0x5ad52f                    ; 005a71b1
    MOV EBX,0x5a71c9                    ; 005a71b6
    MOV dword ptr [0x00607d80],EDX      ; 005a71bb | PTR_FUN_00607d80
    MOV dword ptr [0x00607d84],EBX      ; 005a71c1 | PTR_FUN_00607d84
    POP EBX                             ; 005a71c7
    RET                                 ; 005a71c8

