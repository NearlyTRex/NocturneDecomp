; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b3a90(LPCSTR param_1)
;
;
; XREF[6]:
;   FUN_0056e830 at 0056ec08
;   FUN_005773f0 at 0057742f
;   FUN_0059eeb0 at 0059eebb
;   FUN_0059ef20 at 0059ef2e
;   FUN_005a1e90 at 005a1ea3
;   FUN_005a1ec0 at 005a1f20
;
; Referenced Globals:
;   void* PTR_OutputDebugStringA_005d0608 = 001d109a
;
; Called Functions:
;   OutputDebugStringA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b3a90
        ;   Label: FUN_005b3a90
    PUSH EDX                            ; 005b3a94
    CALL dword ptr CS:[0x5d0608]        ; 005b3a95 | PTR_OutputDebugStringA_005d0608
    RET                                 ; 005b3a9c

