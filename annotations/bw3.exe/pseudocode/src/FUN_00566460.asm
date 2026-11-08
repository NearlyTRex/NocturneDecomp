; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00566460(void)
;
;
; XREF[1]:
;   FUN_0044df60 at 0044df8e
;
; Referenced Globals:
;   undefined4 DAT_02cf607c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf607c],0x0      ; 00566460 | DAT_02cf607c
        ;   Label: FUN_00566460
    JNZ 0x0056646c                      ; 00566467
        ;   XREF to: 0056646c (CONDITIONAL_JUMP)  ; LAB_0056646c
    XOR EAX,EAX                         ; 00566469
    RET                                 ; 0056646b
    CALL dword ptr [0x02cf607c]         ; 0056646c | DAT_02cf607c
        ;   Label: LAB_0056646c
    RET                                 ; 00566472

