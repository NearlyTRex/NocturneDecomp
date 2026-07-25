; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517140(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x5a1f20                       ; 00517140
        ;   Label: FUN_00517140
    PUSH 0x40                           ; 00517145
    PUSH 0x268cef4                      ; 00517147
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0051714c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00517151
    PUSH 0x5be980                       ; 00517154
    CALL FUN_00564bb0                   ; 00517159
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 0051715e
    PUSH 0x5a1f40                       ; 00517161
    PUSH 0x28                           ; 00517166
    PUSH 0x2737ef8                      ; 00517168
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0051716d
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00517172
    PUSH 0x5be990                       ; 00517175
    CALL FUN_00564bb0                   ; 0051717a
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 0051717f
    RET                                 ; 00517182

