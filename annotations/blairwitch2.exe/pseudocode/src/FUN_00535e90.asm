; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00535e90(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00476300
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00535e90
        ;   Label: FUN_00535e90
    MOV EDX,dword ptr [ESP + 0x10]      ; 00535e93
    PUSH EDX                            ; 00535e97
    PUSH 0x1fc9c68                      ; 00535e98
    CALL FUN_00476300                   ; 00535e9d
        ;   XREF to: 00476300 (UNCONDITIONAL_CALL)  ; undefined FUN_00476300()
    MOV dword ptr [ESP + 0xc],EAX       ; 00535ea2
    FLD float ptr [ESP + 0xc]           ; 00535ea6
    ADD ESP,0x8                         ; 00535eaa
    FSTP float ptr [ESP]                ; 00535ead
    MOV EAX,dword ptr [ESP]             ; 00535eb0
    ADD ESP,0x8                         ; 00535eb3
    RET                                 ; 00535eb6

