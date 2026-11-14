; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b9d26(void)
;
;
; XREF[1]:
;   engine_dosio.cpp_CFileFinder_convertStruct_FUN_00460fa0 at 0046102a
;
; Called Functions:
;   crt_unknown.c_FUN_005b9d7b
;
; *****************************************************************************

section .text

    OR EDX,EDX                          ; 005b9d26
        ;   Label: crt_unknown.c_FUN_005b9d26
    JS 0x005b9d48                       ; 005b9d28
        ;   XREF to: 005b9d48 (CONDITIONAL_JUMP)  ; LAB_005b9d48
    OR ECX,ECX                          ; 005b9d2a
    JS 0x005b9d34                       ; 005b9d2c
        ;   XREF to: 005b9d34 (CONDITIONAL_JUMP)  ; LAB_005b9d34
    CALL crt_unknown.c_FUN_005b9d7b     ; 005b9d2e
        ;   XREF to: 005b9d7b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9d7b()
    RET                                 ; 005b9d33
    NEG ECX                             ; 005b9d34
        ;   Label: LAB_005b9d34
    NEG EBX                             ; 005b9d36
    SBB ECX,0x0                         ; 005b9d38
    CALL crt_unknown.c_FUN_005b9d7b     ; 005b9d3b
        ;   XREF to: 005b9d7b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9d7b()
    NEG EDX                             ; 005b9d40
    NEG EAX                             ; 005b9d42
    SBB EDX,0x0                         ; 005b9d44
    RET                                 ; 005b9d47
    NEG EDX                             ; 005b9d48
        ;   Label: LAB_005b9d48
    NEG EAX                             ; 005b9d4a
    SBB EDX,0x0                         ; 005b9d4c
    OR ECX,ECX                          ; 005b9d4f
    JNS 0x005b9d67                      ; 005b9d51
        ;   XREF to: 005b9d67 (CONDITIONAL_JUMP)  ; LAB_005b9d67
    NEG ECX                             ; 005b9d53
    NEG EBX                             ; 005b9d55
    SBB ECX,0x0                         ; 005b9d57
    CALL crt_unknown.c_FUN_005b9d7b     ; 005b9d5a
        ;   XREF to: 005b9d7b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9d7b()
    NEG ECX                             ; 005b9d5f
    NEG EBX                             ; 005b9d61
    SBB ECX,0x0                         ; 005b9d63
    RET                                 ; 005b9d66
    CALL crt_unknown.c_FUN_005b9d7b     ; 005b9d67
        ;   XREF to: 005b9d7b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b9d7b()
        ;   Label: LAB_005b9d67
    NEG ECX                             ; 005b9d6c
    NEG EBX                             ; 005b9d6e
    SBB ECX,0x0                         ; 005b9d70
    NEG EDX                             ; 005b9d73
    NEG EAX                             ; 005b9d75
    SBB EDX,0x0                         ; 005b9d77
    RET                                 ; 005b9d7a

