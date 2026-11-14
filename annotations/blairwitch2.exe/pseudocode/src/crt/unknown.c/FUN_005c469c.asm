; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c469c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f281
;   undefined4 DAT_026807e4
;   undefined4 DAT_026810a0
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;   crt_unknown.c_FUN_005c5b20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c469c
        ;   Label: crt_unknown.c_FUN_005c469c
    PUSH EBP                            ; 005c469d
    CALL crt_unknown.c_FUN_005c5b20     ; 005c469e
        ;   XREF to: 005c5b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5b20()
    MOV EDX,dword ptr [0x026807e4]      ; 005c46a3 | DAT_026807e4
    TEST EDX,EDX                        ; 005c46a9
    JZ 0x005c46be                       ; 005c46ab
        ;   XREF to: 005c46be (CONDITIONAL_JUMP)  ; LAB_005c46be
    PUSH EDX                            ; 005c46ad
    CALL crt_unknown.c_FUN_005b86a0     ; 005c46ae
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR ECX,ECX                         ; 005c46b3
    ADD ESP,0x4                         ; 005c46b5
    MOV dword ptr [0x026807e4],ECX      ; 005c46b8 | DAT_026807e4
    MOV ESI,dword ptr [0x026810a0]      ; 005c46be | DAT_026810a0
        ;   Label: LAB_005c46be
    TEST ESI,ESI                        ; 005c46c4
    JZ 0x005c46d9                       ; 005c46c6
        ;   XREF to: 005c46d9 (CONDITIONAL_JUMP)  ; LAB_005c46d9
    PUSH ESI                            ; 005c46c8
    CALL crt_unknown.c_FUN_005b86a0     ; 005c46c9
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR EBP,EBP                         ; 005c46ce
    ADD ESP,0x4                         ; 005c46d0
    MOV dword ptr [0x026810a0],EBP      ; 005c46d3 | DAT_026810a0
    MOV EAX,[0x0061f281]                ; 005c46d9 | DAT_0061f281
        ;   Label: LAB_005c46d9
    TEST EAX,EAX                        ; 005c46de
    JZ 0x005c46ea                       ; 005c46e0
        ;   XREF to: 005c46ea (CONDITIONAL_JUMP)  ; LAB_005c46ea
    PUSH EAX                            ; 005c46e2
    CALL dword ptr CS:[0x5c8554]        ; 005c46e3
    POP EBP                             ; 005c46ea
        ;   Label: LAB_005c46ea
    POP ESI                             ; 005c46eb
    RET                                 ; 005c46ec

