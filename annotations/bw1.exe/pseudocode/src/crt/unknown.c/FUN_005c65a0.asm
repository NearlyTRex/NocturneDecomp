; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c65a0(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0630 at 005c068e
;
; Referenced Globals:
;   undefined4 DAT_006265c8
;
; Called Functions:
;   crt_unknown.c_FUN_005cb928
;   crt_unknown.c_FUN_005cb9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c65a0
        ;   Label: crt_unknown.c_FUN_005c65a0
    PUSH ESI                            ; 005c65a1
    MOV ESI,dword ptr [0x006265c8]      ; 005c65a2 | DAT_006265c8
    CALL crt_unknown.c_FUN_005cb928     ; 005c65a8
        ;   XREF to: 005cb928 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb928()
    MOV EBX,EAX                         ; 005c65ad
    CMP EAX,-0x1                        ; 005c65af
    JZ 0x005c65c1                       ; 005c65b2
        ;   XREF to: 005c65c1 (CONDITIONAL_JUMP)  ; LAB_005c65c1
    TEST ESI,ESI                        ; 005c65b4
    JNZ 0x005c65c1                      ; 005c65b6
        ;   XREF to: 005c65c1 (CONDITIONAL_JUMP)  ; LAB_005c65c1
    PUSH EAX                            ; 005c65b8
    CALL crt_unknown.c_FUN_005cb9c0     ; 005c65b9
        ;   XREF to: 005cb9c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb9c0()
    ADD ESP,0x4                         ; 005c65be
    MOV EAX,EBX                         ; 005c65c1
        ;   Label: LAB_005c65c1
    POP ESI                             ; 005c65c3
    POP EBX                             ; 005c65c4
    RET                                 ; 005c65c5

