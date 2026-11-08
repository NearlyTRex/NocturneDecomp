; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00566440(void)
;
;
; XREF[1]:
;   FUN_0044df60 at 0044dfa1
;
; Referenced Globals:
;   undefined4 DAT_02cf6078
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf6078],0x0      ; 00566440 | DAT_02cf6078
        ;   Label: FUN_00566440
    JNZ 0x0056644c                      ; 00566447
        ;   XREF to: 0056644c (CONDITIONAL_JUMP)  ; LAB_0056644c
    XOR EAX,EAX                         ; 00566449
    RET                                 ; 0056644b
    CALL dword ptr [0x02cf6078]         ; 0056644c | DAT_02cf6078
        ;   Label: LAB_0056644c
    RET                                 ; 00566452

