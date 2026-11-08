; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00543c00 at 00543d43
;
; Called Functions:
;   FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480750
        ;   Label: FUN_00480750
    PUSH ESI                            ; 00480751
    PUSH 0x0                            ; 00480752
    PUSH 0x0                            ; 00480754
    MOV EDX,dword ptr [ESP + 0x20]      ; 00480756
    PUSH EDX                            ; 0048075a
    PUSH 0x0                            ; 0048075b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048075d
    PUSH ECX                            ; 00480761
    MOV EBX,dword ptr [ESP + 0x24]      ; 00480762
    PUSH EBX                            ; 00480766
    MOV ESI,dword ptr [ESP + 0x24]      ; 00480767
    PUSH ESI                            ; 0048076b
    CALL FUN_00480480                   ; 0048076c
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; undefined FUN_00480480()
    ADD ESP,0x1c                        ; 00480771
    POP ESI                             ; 00480774
    POP EBX                             ; 00480775
    RET                                 ; 00480776

