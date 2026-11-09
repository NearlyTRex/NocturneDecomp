; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c53e8(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9f064
;   undefined4 DAT_02c9f068
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c53e8
        ;   Label: crt_unknown.c_FUN_005c53e8
    PUSH EBP                            ; 005c53e9
    MOV EDX,dword ptr [0x02c9f064]      ; 005c53ea | DAT_02c9f064
    TEST EDX,EDX                        ; 005c53f0
    JZ 0x005c5405                       ; 005c53f2
        ;   XREF to: 005c5405 (CONDITIONAL_JUMP)  ; LAB_005c5405
    PUSH EDX                            ; 005c53f4
    CALL crt_unknown.c_FUN_005c09f0     ; 005c53f5
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR ECX,ECX                         ; 005c53fa
    ADD ESP,0x4                         ; 005c53fc
    MOV dword ptr [0x02c9f064],ECX      ; 005c53ff | DAT_02c9f064
    MOV ESI,dword ptr [0x02c9f068]      ; 005c5405 | DAT_02c9f068
        ;   Label: LAB_005c5405
    TEST ESI,ESI                        ; 005c540b
    JZ 0x005c5420                       ; 005c540d
        ;   XREF to: 005c5420 (CONDITIONAL_JUMP)  ; LAB_005c5420
    PUSH ESI                            ; 005c540f
    CALL crt_unknown.c_FUN_005c09f0     ; 005c5410
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR EBP,EBP                         ; 005c5415
    ADD ESP,0x4                         ; 005c5417
    MOV dword ptr [0x02c9f068],EBP      ; 005c541a | DAT_02c9f068
    POP EBP                             ; 005c5420
        ;   Label: LAB_005c5420
    POP ESI                             ; 005c5421
    RET                                 ; 005c5422

