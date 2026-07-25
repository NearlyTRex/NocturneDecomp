; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005262a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 005262a0 | DAT_02dc1b74
        ;   Label: FUN_005262a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005262a6
    SUB EAX,EDX                         ; 005262ad
    SHL EAX,0x2                         ; 005262af
    MOV EDX,EAX                         ; 005262b2
    SHL EAX,0x3                         ; 005262b4
    ADD EAX,EDX                         ; 005262b7
    MOV EDX,dword ptr [ESP + 0x4]       ; 005262b9
    MOV ECX,dword ptr [EAX + 0x2dc1bd4] ; 005262bd
    NOT EDX                             ; 005262c3
    AND ECX,EDX                         ; 005262c5
    MOV dword ptr [EAX + 0x2dc1bd4],ECX ; 005262c7
    RET                                 ; 005262cd

