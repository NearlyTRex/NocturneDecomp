; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005be2d0(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b8280 at 005b82de
;
; Referenced Globals:
;   undefined4 DAT_0061f270
;
; Called Functions:
;   crt_unknown.c_FUN_005c3628
;   crt_unknown.c_FUN_005c36c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be2d0
        ;   Label: crt_unknown.c_FUN_005be2d0
    PUSH ESI                            ; 005be2d1
    MOV ESI,dword ptr [0x0061f270]      ; 005be2d2 | DAT_0061f270
    CALL crt_unknown.c_FUN_005c3628     ; 005be2d8
        ;   XREF to: 005c3628 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3628()
    MOV EBX,EAX                         ; 005be2dd
    CMP EAX,-0x1                        ; 005be2df
    JZ 0x005be2f1                       ; 005be2e2
        ;   XREF to: 005be2f1 (CONDITIONAL_JUMP)  ; LAB_005be2f1
    TEST ESI,ESI                        ; 005be2e4
    JNZ 0x005be2f1                      ; 005be2e6
        ;   XREF to: 005be2f1 (CONDITIONAL_JUMP)  ; LAB_005be2f1
    PUSH EAX                            ; 005be2e8
    CALL crt_unknown.c_FUN_005c36c0     ; 005be2e9
        ;   XREF to: 005c36c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c36c0()
    ADD ESP,0x4                         ; 005be2ee
    MOV EAX,EBX                         ; 005be2f1
        ;   Label: LAB_005be2f1
    POP ESI                             ; 005be2f3
    POP EBX                             ; 005be2f4
    RET                                 ; 005be2f5

