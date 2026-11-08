; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8160(int param_1)
;
;
; XREF[2]:
;   FUN_005a80d0 at 005a80ec
;   FUN_005a8100 at 005a8121
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8160
        ;   Label: FUN_005a8160
    FLD float ptr [EAX + 0x2c]          ; 005a8164
    MOV EDX,dword ptr [EAX + 0x24]      ; 005a8167
    MOV dword ptr [EAX + 0xc],EDX       ; 005a816a
    FSTP float ptr [EAX + 0x30]         ; 005a816d
    RET                                 ; 005a8170

