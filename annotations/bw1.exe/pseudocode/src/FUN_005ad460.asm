; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad460(LPCSTR param_1)
;
;
; XREF[1]:
;   FUN_00581310 at 0058134e
;
; Referenced Globals:
;   void* PTR_LoadLibraryA_005d05f8 = 001d104e
;
; Called Functions:
;   LoadLibraryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ad460
        ;   Label: FUN_005ad460
    PUSH EDX                            ; 005ad464
    CALL dword ptr CS:[0x5d05f8]        ; 005ad465 | PTR_LoadLibraryA_005d05f8
    RET                                 ; 005ad46c

