; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00566060(void)
;
;
; XREF[2]:
;   FUN_00448ff0 at 00449228
;   FUN_00560d70 at 00560d7b
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6044
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00566060 | DAT_01c6cee8
        ;   Label: FUN_00566060
    JNZ 0x0056606c                      ; 00566067
        ;   XREF to: 0056606c (CONDITIONAL_JUMP)  ; LAB_0056606c
    XOR EAX,EAX                         ; 00566069
    RET                                 ; 0056606b
    CALL dword ptr [0x02cf6044]         ; 0056606c | DAT_02cf6044
        ;   Label: LAB_0056606c
    RET                                 ; 00566072

