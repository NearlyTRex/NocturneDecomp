; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058ffc0(LPCSTR param_1)
;
;
; XREF[4]:
;   FUN_0054c1c0 at 0054c598
;   FUN_005549c0 at 005549ff
;   FUN_0057e240 at 0057e253
;   FUN_0057e270 at 0057e2d0
;
; Referenced Globals:
;   void* PTR_OutputDebugStringA_005c85f4 = 001c905e
;
; Called Functions:
;   OutputDebugStringA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0058ffc0
        ;   Label: FUN_0058ffc0
    PUSH EDX                            ; 0058ffc4
    CALL dword ptr CS:[0x5c85f4]        ; 0058ffc5 | PTR_OutputDebugStringA_005c85f4
    RET                                 ; 0058ffcc

