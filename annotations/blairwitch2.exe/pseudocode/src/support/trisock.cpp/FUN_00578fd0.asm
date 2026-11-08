; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00578fd0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ed081                    ; 00578fd0
        ;   Label: FUN_00578fd0
    MOV ECX,0x102                       ; 00578fd5
    PUSH 0x5ed098                       ; 00578fda
    MOV dword ptr [0x01d046a0],EDX      ; 00578fdf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00578fe5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00578feb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00578ff0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00578ff3
    RET                                 ; 00578ff7

