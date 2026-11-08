; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00589970(LPCSTR param_1)
;
;
; XREF[1]:
;   FUN_0055e8c0 at 0055e8fe
;
; Referenced Globals:
;   void* PTR_LoadLibraryA_005c85e4 = 001c9012
;
; Called Functions:
;   LoadLibraryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00589970
        ;   Label: FUN_00589970
    PUSH EDX                            ; 00589974
    CALL dword ptr CS:[0x5c85e4]        ; 00589975 | PTR_LoadLibraryA_005c85e4
    RET                                 ; 0058997c

