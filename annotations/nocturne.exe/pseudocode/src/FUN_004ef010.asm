; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ef010(int param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a1034 = 004ef040
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef010
        ;   Label: FUN_004ef010
    MOV dword ptr [EAX + 0x18],0x0      ; 004ef014
    MOV dword ptr [EAX + 0x34],0x5a1034 ; 004ef01b | PTR_FUN_005a1034
    RET                                 ; 004ef022

