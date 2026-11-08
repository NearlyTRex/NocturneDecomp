; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057ad00(HMODULE param_1)
;
;
; XREF[1]:
;   FUN_00564010 at 005641df
;
; Referenced Globals:
;   void* PTR_FreeLibrary_005b3568 = 001b3dc0
;
; Called Functions:
;   FreeLibrary
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057ad00
        ;   Label: FUN_0057ad00
    PUSH EDX                            ; 0057ad04
    CALL dword ptr CS:[0x5b3568]        ; 0057ad05 | PTR_FreeLibrary_005b3568
    RET                                 ; 0057ad0c

