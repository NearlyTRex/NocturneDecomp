; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532340(void)
;
;
; XREF[2]:
;   FUN_00440290 at 004404d7
;   FUN_00445020 at 004450a2
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9d8c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532340 | DAT_01c02594
        ;   Label: FUN_00532340
    JNZ 0x0053234c                      ; 00532347
        ;   XREF to: 0053234c (CONDITIONAL_JUMP)  ; LAB_0053234c
    XOR EAX,EAX                         ; 00532349
    RET                                 ; 0053234b
    CALL dword ptr [0x02dc9d8c]         ; 0053234c | DAT_02dc9d8c
        ;   Label: LAB_0053234c
    RET                                 ; 00532352

