; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005aefa0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_005ab1d0 at 005ab23c
;
; Called Functions:
;   FUN_005a4f20
;   FUN_005b0910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aefa0
        ;   Label: FUN_005aefa0
    SUB ESP,0x24                        ; 005aefa1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005aefa4
    MOV EAX,ESP                         ; 005aefa8
    PUSH EAX                            ; 005aefaa
    CALL FUN_005b0910                   ; 005aefab
        ;   XREF to: 005b0910 (UNCONDITIONAL_CALL)  ; undefined FUN_005b0910()
    ADD ESP,0x4                         ; 005aefb0
    CMP EAX,0x1f4                       ; 005aefb3
    JL 0x005aefbd                       ; 005aefb8
        ;   XREF to: 005aefbd (CONDITIONAL_JUMP)  ; LAB_005aefbd
    INC dword ptr [ESP]                 ; 005aefba
    MOV EAX,ESP                         ; 005aefbd
        ;   Label: LAB_005aefbd
    PUSH EAX                            ; 005aefbf
    CALL FUN_005a4f20                   ; 005aefc0
        ;   XREF to: 005a4f20 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4f20()
    ADD ESP,0x4                         ; 005aefc5
    MOV EDX,EAX                         ; 005aefc8
    TEST EBX,EBX                        ; 005aefca
    JZ 0x005aefd0                       ; 005aefcc
        ;   XREF to: 005aefd0 (CONDITIONAL_JUMP)  ; LAB_005aefd0
    MOV dword ptr [EBX],EAX             ; 005aefce
    MOV EAX,EDX                         ; 005aefd0
        ;   Label: LAB_005aefd0
    ADD ESP,0x24                        ; 005aefd2
    POP EBX                             ; 005aefd5
    RET                                 ; 005aefd6

