; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052ea90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[3]:
;   FUN_004f3430 at 004f3942
;   FUN_0052dff0 at 0052e782
;   FUN_0054f7a0 at 0054f7d4
;
; Called Functions:
;   FUN_0052d120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ea90
        ;   Label: FUN_0052ea90
    PUSH 0x0                            ; 0052ea91
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052ea93
    PUSH EDX                            ; 0052ea97
    PUSH 0x0                            ; 0052ea98
    PUSH 0x0                            ; 0052ea9a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052ea9c
    PUSH 0x0                            ; 0052eaa0
    PUSH ECX                            ; 0052eaa2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0052eaa3
    PUSH EBX                            ; 0052eaa7
    CALL FUN_0052d120                   ; 0052eaa8
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d120()
    ADD ESP,0x1c                        ; 0052eaad
    POP EBX                             ; 0052eab0
    RET                                 ; 0052eab1

