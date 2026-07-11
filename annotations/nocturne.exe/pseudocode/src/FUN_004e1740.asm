; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1740(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00428ab0 at 00428b49
;   FUN_004b4c70 at 004b4d0f
;   FUN_004eea20 at 004eeb5c
;
; Called Functions:
;   FUN_004e10a0
;   FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1740
        ;   Label: FUN_004e1740
    PUSH ESI                            ; 004e1741
    PUSH 0x1                            ; 004e1742
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e1744
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e1748
    PUSH EDX                            ; 004e174c
    MOV ECX,dword ptr [EAX]             ; 004e174d
    PUSH ECX                            ; 004e174f
    CALL FUN_004e10a0                   ; 004e1750
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e10a0()
    ADD ESP,0xc                         ; 004e1755
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e1758
    PUSH EBX                            ; 004e175c
    PUSH EAX                            ; 004e175d
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e175e
    PUSH ESI                            ; 004e1762
    CALL FUN_004e16b0                   ; 004e1763
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004e1768
    POP ESI                             ; 004e176b
    POP EBX                             ; 004e176c
    RET                                 ; 004e176d

