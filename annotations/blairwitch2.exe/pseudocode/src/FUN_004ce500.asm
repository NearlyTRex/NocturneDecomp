; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ce500(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6aec
;
; Called Functions:
;   FUN_00408f00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ce500
        ;   Label: FUN_004ce500
    MOV EAX,[0x00616494]                ; 004ce504 | DAT_00616494
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004ce509 | DAT_01cb6aec
    JNZ 0x004ce51e                      ; 004ce510
        ;   XREF to: 004ce51e (CONDITIONAL_JUMP)  ; LAB_004ce51e
    TEST dword ptr [EDX + 0x10a60],0x7fffffff ; 004ce512
    JZ 0x004ce521                       ; 004ce51c
        ;   XREF to: 004ce521 (CONDITIONAL_JUMP)  ; LAB_004ce521
    XOR EAX,EAX                         ; 004ce51e
        ;   Label: LAB_004ce51e
    RET                                 ; 004ce520
    PUSH ESI                            ; 004ce521
        ;   Label: LAB_004ce521
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ce522
    PUSH dword ptr [ESP + 0x10]         ; 004ce526
    PUSH ESI                            ; 004ce52a
    PUSH EDX                            ; 004ce52b
    CALL FUN_00408f00                   ; 004ce52c
        ;   XREF to: 00408f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408f00()
    ADD ESP,0xc                         ; 004ce531
    POP ESI                             ; 004ce534
    RET                                 ; 004ce535

