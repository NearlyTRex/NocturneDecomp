; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00589960(HMODULE param_1)
;
;
; XREF[1]:
;   FUN_0055dcf0 at 0055debf
;
; Referenced Globals:
;   void* PTR_FreeLibrary_005c8558 = 001c8d92
;
; Called Functions:
;   FreeLibrary
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00589960
        ;   Label: FUN_00589960
    PUSH EDX                            ; 00589964
    CALL dword ptr CS:[0x5c8558]        ; 00589965 | PTR_FreeLibrary_005c8558
    RET                                 ; 0058996c

