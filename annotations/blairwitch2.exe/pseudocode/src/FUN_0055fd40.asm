; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055fd40(void)
;
;
; XREF[2]:
;   FUN_0043b7f0 at 0043ba28
;   FUN_0055b1f0 at 0055b1fb
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc18
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055fd40 | DAT_01c37788
        ;   Label: FUN_0055fd40
    JNZ 0x0055fd4c                      ; 0055fd47
        ;   XREF to: 0055fd4c (CONDITIONAL_JUMP)  ; LAB_0055fd4c
    XOR EAX,EAX                         ; 0055fd49
    RET                                 ; 0055fd4b
    CALL dword ptr [0x0264bc18]         ; 0055fd4c | DAT_0264bc18
        ;   Label: LAB_0055fd4c
    RET                                 ; 0055fd52

