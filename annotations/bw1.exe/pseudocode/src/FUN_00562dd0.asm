; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562dd0(void)
;
;
; Called Functions:
;   FUN_005238c0
;   FUN_005c3187
;
; *****************************************************************************

section .text

    PUSH 0x8                            ; 00562dd0
        ;   Label: FUN_00562dd0
    CALL FUN_005c3187                   ; 00562dd5
        ;   XREF to: 005c3187 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3187()
    MOV EDX,dword ptr [ESP + 0x4]       ; 00562dda
    PUSH EDX                            ; 00562dde
    CALL FUN_005238c0                   ; 00562ddf
        ;   XREF to: 005238c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005238c0()
    MOV dword ptr [EAX + 0x1de78],0x0   ; 00562de4
    MOV dword ptr [EAX + 0x1ec8c],0x0   ; 00562dee
    MOV dword ptr [EAX + 0x1ec90],0x0   ; 00562df8
    MOV dword ptr [EAX + 0x1ec94],0x0   ; 00562e02
    MOV dword ptr [EAX + 0x1ec98],0x0   ; 00562e0c
    ADD ESP,0x4                         ; 00562e16
    MOV byte ptr [EAX + 0x1de28],0x0    ; 00562e19
    RET                                 ; 00562e20

