; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d9f59(void)
;
;
; XREF[1]:
;   FUN_004d9e70 at 004d9e76
;
; Referenced Globals:
;   undefined4 DAT_005bb11d
;   undefined1 DAT_005bb121
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004d9f59
        ;   Label: FUN_004d9f59
    MOV EAX,[0x005bb11d]                ; 004d9f5a | DAT_005bb11d
    TEST EAX,0x800000                   ; 004d9f5f
    JZ 0x004d9f6d                       ; 004d9f64
        ;   XREF to: 004d9f6d (CONDITIONAL_JUMP)  ; LAB_004d9f6d
    MOV byte ptr [0x005bb121],0x1       ; 004d9f66 | DAT_005bb121
    POP EAX                             ; 004d9f6d
        ;   Label: LAB_004d9f6d
    RET                                 ; 004d9f6e

