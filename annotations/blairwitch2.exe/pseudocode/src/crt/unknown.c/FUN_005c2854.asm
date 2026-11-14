; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2854(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2ac7
;
; Called Functions:
;   crt_unknown.c_FUN_005c0a64
;   crt_unknown.c_FUN_005c274c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c2854
        ;   Label: crt_unknown.c_FUN_005c2854
    AND EAX,0xf                         ; 005c2858
    SHL EAX,0x4                         ; 005c285b
    ADD EAX,0x2680930                   ; 005c285e
    PUSH EAX                            ; 005c2863
    CALL crt_unknown.c_FUN_005c274c     ; 005c2864
        ;   XREF to: 005c274c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c274c()
    ADD ESP,0x4                         ; 005c2869
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c286c
    PUSH EDX                            ; 005c2870
    CALL crt_unknown.c_FUN_005c0a64     ; 005c2871
        ;   XREF to: 005c0a64 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0a64()
    ADD ESP,0x4                         ; 005c2876
    RET                                 ; 005c2879

