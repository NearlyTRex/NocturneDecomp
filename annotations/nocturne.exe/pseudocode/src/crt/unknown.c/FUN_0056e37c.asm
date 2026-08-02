; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e37c(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_0056e484 at 0056e494
;   crt_unknown.c_FUN_0056e6e4 at 0056e743
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056e37c
        ;   Label: crt_unknown.c_FUN_0056e37c
    MOV dword ptr [EAX + 0x8],0x0       ; 0056e380
    MOV dword ptr [EAX + 0xc],0x0       ; 0056e387
    RET                                 ; 0056e38e

