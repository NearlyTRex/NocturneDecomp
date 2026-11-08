; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00560120(void)
;
;
; XREF[1]:
;   FUN_00440760 at 004407a1
;
; Referenced Globals:
;   undefined4 DAT_0264bc4c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bc4c],0x0      ; 00560120 | DAT_0264bc4c
        ;   Label: FUN_00560120
    JNZ 0x0056012c                      ; 00560127
        ;   XREF to: 0056012c (CONDITIONAL_JUMP)  ; LAB_0056012c
    XOR EAX,EAX                         ; 00560129
    RET                                 ; 0056012b
    CALL dword ptr [0x0264bc4c]         ; 0056012c | DAT_0264bc4c
        ;   Label: LAB_0056012c
    RET                                 ; 00560132

