; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00589980(HMODULE param_1,LPCSTR param_2)
;
;
; XREF[1]:
;   FUN_0055e8c0 at 0055e927
;
; Referenced Globals:
;   void* PTR_GetProcAddress_005c85b8 = 001c8f44
;
; Called Functions:
;   GetProcAddress
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00589980
        ;   Label: FUN_00589980
    PUSH EDX                            ; 00589984
    MOV ECX,dword ptr [ESP + 0x8]       ; 00589985
    PUSH ECX                            ; 00589989
    CALL dword ptr CS:[0x5c85b8]        ; 0058998a | PTR_GetProcAddress_005c85b8
    RET                                 ; 00589991

