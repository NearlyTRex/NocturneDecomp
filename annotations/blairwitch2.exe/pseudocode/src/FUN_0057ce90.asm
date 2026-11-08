; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057ce90(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0057b9c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057ce90
        ;   Label: FUN_0057ce90
    PUSH EDX                            ; 0057ce94
    CALL FUN_0057b9c0                   ; 0057ce95
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b9c0()
    ADD ESP,0x4                         ; 0057ce9a
    MOV dword ptr [EAX],0x5fd3e4        ; 0057ce9d
    RET                                 ; 0057cea3

