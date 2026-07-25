; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e1830(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x58b31d                    ; 004e1830
        ;   Label: FUN_004e1830
    MOV ECX,0x2ca                       ; 004e1835
    PUSH 0x58b330                       ; 004e183a
    MOV dword ptr [0x01cc4800],EDX      ; 004e183f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004e1845 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e184b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004e1850
    XOR EAX,EAX                         ; 004e1853
    RET                                 ; 004e1855

