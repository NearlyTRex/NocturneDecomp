; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057ad10(LPCSTR param_1)
;
;
; XREF[1]:
;   FUN_00564be0 at 00564c1e
;
; Referenced Globals:
;   void* PTR_LoadLibraryA_005b35f8 = 001b4054
;
; Called Functions:
;   LoadLibraryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057ad10
        ;   Label: FUN_0057ad10
    PUSH EDX                            ; 0057ad14
    CALL dword ptr CS:[0x5b35f8]        ; 0057ad15 | PTR_LoadLibraryA_005b35f8
    RET                                 ; 0057ad1c

