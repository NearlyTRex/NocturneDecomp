; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2694(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0048aa40 at 0048aa76
;   FUN_00494690 at 00494729
;
; Called Functions:
;   FUN_005c2654
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2694
        ;   Label: FUN_005c2694
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c2695
    PUSH EDX                            ; 005c2699
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c269a
    PUSH ECX                            ; 005c269e
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c269f
    PUSH EBX                            ; 005c26a3
    CALL FUN_005c2654                   ; 005c26a4
        ;   XREF to: 005c2654 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2654()
    ADD ESP,0xc                         ; 005c26a9
    POP EBX                             ; 005c26ac
    RET                                 ; 005c26ad

