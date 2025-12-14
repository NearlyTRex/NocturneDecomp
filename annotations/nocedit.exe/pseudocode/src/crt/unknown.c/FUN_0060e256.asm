; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060e256()
;
;
; XREF[1]:
;   crt_fpemu.c_staticInit_FUN_0060be80 at 0060bee7
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060e256
        ;   Label: crt_unknown.c_FUN_0060e256
    TEST EDX,0x7ff00000                 ; 0060e257
    JNZ 0x0060e261                      ; 0060e25d
        ;   XREF to: 0060e261 (CONDITIONAL_JUMP)  ; LAB_0060e261
    SUB EDX,EDX                         ; 0060e25f
    TEST ECX,0x7ff00000                 ; 0060e261
        ;   Label: LAB_0060e261
    JNZ 0x0060e26b                      ; 0060e267
        ;   XREF to: 0060e26b (CONDITIONAL_JUMP)  ; LAB_0060e26b
    SUB ECX,ECX                         ; 0060e269
    MOV EBP,ECX                         ; 0060e26b
        ;   Label: LAB_0060e26b
    XOR EBP,EDX                         ; 0060e26d
    MOV EBP,0x0                         ; 0060e26f
    JS 0x0060e282                       ; 0060e274
        ;   XREF to: 0060e282 (CONDITIONAL_JUMP)  ; LAB_0060e282
    CMP EDX,ECX                         ; 0060e276
    JNZ 0x0060e27c                      ; 0060e278
        ;   XREF to: 0060e27c (CONDITIONAL_JUMP)  ; LAB_0060e27c
    CMP EAX,EBX                         ; 0060e27a
    JZ 0x0060e28a                       ; 0060e27c
        ;   XREF to: 0060e28a (CONDITIONAL_JUMP)  ; LAB_0060e28a
        ;   Label: LAB_0060e27c
    RCR ECX,0x1                         ; 0060e27e
    XOR EDX,ECX                         ; 0060e280
    ADD EDX,EDX                         ; 0060e282
        ;   Label: LAB_0060e282
    SBB EBP,0x0                         ; 0060e284
    ADD EBP,EBP                         ; 0060e287
    INC EBP                             ; 0060e289
    MOV EAX,EBP                         ; 0060e28a
        ;   Label: LAB_0060e28a
    POP EBP                             ; 0060e28c
    RET                                 ; 0060e28d

