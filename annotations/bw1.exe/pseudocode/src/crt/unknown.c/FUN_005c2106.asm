; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c2106(void)
;
;
; XREF[1]:
;   engine_dosio.cpp_FUN_004794b0 at 0047953a
;
; Called Functions:
;   crt_unknown.c_FUN_005c215b
;
; *****************************************************************************

section .text

    OR EDX,EDX                          ; 005c2106
        ;   Label: crt_unknown.c_FUN_005c2106
    JS 0x005c2128                       ; 005c2108
        ;   XREF to: 005c2128 (CONDITIONAL_JUMP)  ; LAB_005c2128
    OR ECX,ECX                          ; 005c210a
    JS 0x005c2114                       ; 005c210c
        ;   XREF to: 005c2114 (CONDITIONAL_JUMP)  ; LAB_005c2114
    CALL crt_unknown.c_FUN_005c215b     ; 005c210e
        ;   XREF to: 005c215b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c215b()
    RET                                 ; 005c2113
    NEG ECX                             ; 005c2114
        ;   Label: LAB_005c2114
    NEG EBX                             ; 005c2116
    SBB ECX,0x0                         ; 005c2118
    CALL crt_unknown.c_FUN_005c215b     ; 005c211b
        ;   XREF to: 005c215b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c215b()
    NEG EDX                             ; 005c2120
    NEG EAX                             ; 005c2122
    SBB EDX,0x0                         ; 005c2124
    RET                                 ; 005c2127
    NEG EDX                             ; 005c2128
        ;   Label: LAB_005c2128
    NEG EAX                             ; 005c212a
    SBB EDX,0x0                         ; 005c212c
    OR ECX,ECX                          ; 005c212f
    JNS 0x005c2147                      ; 005c2131
        ;   XREF to: 005c2147 (CONDITIONAL_JUMP)  ; LAB_005c2147
    NEG ECX                             ; 005c2133
    NEG EBX                             ; 005c2135
    SBB ECX,0x0                         ; 005c2137
    CALL crt_unknown.c_FUN_005c215b     ; 005c213a
        ;   XREF to: 005c215b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c215b()
    NEG ECX                             ; 005c213f
    NEG EBX                             ; 005c2141
    SBB ECX,0x0                         ; 005c2143
    RET                                 ; 005c2146
    CALL crt_unknown.c_FUN_005c215b     ; 005c2147
        ;   XREF to: 005c215b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c215b()
        ;   Label: LAB_005c2147
    NEG ECX                             ; 005c214c
    NEG EBX                             ; 005c214e
    SBB ECX,0x0                         ; 005c2150
    NEG EDX                             ; 005c2153
    NEG EAX                             ; 005c2155
    SBB EDX,0x0                         ; 005c2157
    RET                                 ; 005c215a

