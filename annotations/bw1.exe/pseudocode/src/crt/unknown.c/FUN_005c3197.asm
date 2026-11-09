; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c3197(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3187 at 005c318b
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; Called Functions:
;   crt_unknown.c_FUN_005c31c3
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c3197
        ;   Label: crt_unknown.c_FUN_005c3197
    CMP EAX,ESP                         ; 005c3198
    JNC 0x005c31b6                      ; 005c319a
        ;   XREF to: 005c31b6 (CONDITIONAL_JUMP)
    SUB EAX,ESP                         ; 005c319c
    NEG EAX                             ; 005c319e
    PUSH ESI                            ; 005c31a0
    PUSH EAX                            ; 005c31a1
    CALL dword ptr [0x006265fc]         ; 005c31a2 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
    MOV ESI,EAX                         ; 005c31a8
    POP EAX                             ; 005c31aa
    CMP EAX,dword ptr [ESI]             ; 005c31ab
    POP ESI                             ; 005c31ad
    JBE 0x005c31b6                      ; 005c31ae
        ;   XREF to: 005c31b6 (CONDITIONAL_JUMP)
    CALL crt_unknown.c_FUN_005c31c3     ; 005c31b0
        ;   XREF to: 005c31c3 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c31c3()
    RET                                 ; 005c31b5

