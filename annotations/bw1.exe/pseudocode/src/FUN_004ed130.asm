; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ed130(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d8136c                      ; 004ed130
        ;   Label: FUN_004ed130
    PUSH 0x1                            ; 004ed135
    PUSH 0x61ef6c                       ; 004ed137
    PUSH 0x4ed160                       ; 004ed13c
    PUSH 0x5e4c39                       ; 004ed141
    PUSH 0x1d06b50                      ; 004ed146
    CALL FUN_0040c160                   ; 004ed14b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 004ed150
    RET                                 ; 004ed153

