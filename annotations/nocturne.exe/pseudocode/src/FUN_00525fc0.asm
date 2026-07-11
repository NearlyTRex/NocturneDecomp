; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525fc0(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_0045ab40 at 0045afb3
;   FUN_00494e30 at 00494e62
;   FUN_004cb5a0 at 004cb6f7
;   FUN_004cb740 at 004cb7ad
;   FUN_0052d120 at 0052d316
;   FUN_0054f7a0 at 0054f7af
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00525fc0 | DAT_02dc1b74
        ;   Label: FUN_00525fc0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00525fc6
    SUB EAX,EDX                         ; 00525fcd
    SHL EAX,0x2                         ; 00525fcf
    MOV EDX,EAX                         ; 00525fd2
    SHL EAX,0x3                         ; 00525fd4
    ADD EAX,EDX                         ; 00525fd7
    MOV dword ptr [EAX + 0x2dc1b98],0x1 ; 00525fd9
    MOV EDX,dword ptr [ESP + 0x4]       ; 00525fe3
    MOV dword ptr [EAX + 0x2dc1b94],EDX ; 00525fe7
    RET                                 ; 00525fed

