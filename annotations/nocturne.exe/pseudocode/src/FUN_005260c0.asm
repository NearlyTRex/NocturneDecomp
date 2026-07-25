; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005260c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 005260c0 | DAT_02dc1b74
        ;   Label: FUN_005260c0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005260c6
    SUB EAX,EDX                         ; 005260cd
    SHL EAX,0x2                         ; 005260cf
    MOV EDX,EAX                         ; 005260d2
    SHL EAX,0x3                         ; 005260d4
    ADD EAX,EDX                         ; 005260d7
    MOV dword ptr [EAX + 0x2dc1bb8],0x2 ; 005260d9
    MOV EDX,dword ptr [ESP + 0x4]       ; 005260e3
    MOV dword ptr [EAX + 0x2dc1bb4],EDX ; 005260e7
    RET                                 ; 005260ed

