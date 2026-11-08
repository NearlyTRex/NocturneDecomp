; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b830(void)
;
;
; XREF[1]:
;   FUN_0051b2b0 at 0051b2da
;
; Referenced Globals:
;   undefined4 DAT_027902bc
;   undefined4 DAT_02c5fc1c
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH 0xa0                           ; 0056b830
        ;   Label: FUN_0056b830
    PUSH 0x0                            ; 0056b835
    PUSH 0x2c5fc1c                      ; 0056b837 | DAT_02c5fc1c
    CALL FUN_005bfb70                   ; 0056b83c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0056b841
    PUSH 0x100                          ; 0056b844
    PUSH 0x0                            ; 0056b849
    PUSH 0x27902bc                      ; 0056b84b | DAT_027902bc
    CALL FUN_005bfb70                   ; 0056b850
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0056b855
    RET                                 ; 0056b858

