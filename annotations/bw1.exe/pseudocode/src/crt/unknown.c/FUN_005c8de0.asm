; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c8de0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00626838
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00626838]      ; 005c8de0 | DAT_00626838
        ;   Label: crt_unknown.c_FUN_005c8de0
    TEST EDX,EDX                        ; 005c8de6
    JZ 0x005c8dfb                       ; 005c8de8
        ;   XREF to: 005c8dfb (CONDITIONAL_JUMP)  ; LAB_005c8dfb
    PUSH EDX                            ; 005c8dea
    CALL crt_unknown.c_FUN_005c09f0     ; 005c8deb
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR ECX,ECX                         ; 005c8df0
    ADD ESP,0x4                         ; 005c8df2
    MOV dword ptr [0x00626838],ECX      ; 005c8df5 | DAT_00626838
    RET                                 ; 005c8dfb
        ;   Label: LAB_005c8dfb

