; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525ff0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00525ff0 | DAT_02dc1b74
        ;   Label: FUN_00525ff0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00525ff6
    SUB EAX,EDX                         ; 00525ffd
    SHL EAX,0x2                         ; 00525fff
    MOV EDX,EAX                         ; 00526002
    SHL EAX,0x3                         ; 00526004
    ADD EAX,EDX                         ; 00526007
    MOV dword ptr [EAX + 0x2dc1b98],0x2 ; 00526009
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526013
    MOV dword ptr [EAX + 0x2dc1b94],EDX ; 00526017
    RET                                 ; 0052601d

