; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005abc20(void)
;
;
; Referenced Globals:
;   SIOControlBlock* g_SIOControlBlock_PTR_00607bdc = 00000000
;
; Called Functions:
;   crt_unknown.c_debugFree_FUN_005a3770
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00607bdc]      ; 005abc20 | g_SIOControlBlock_PTR_00607bdc
        ;   Label: crt_unknown.c_FUN_005abc20
    TEST EDX,EDX                        ; 005abc26
    JZ 0x005abc3b                       ; 005abc28
        ;   XREF to: 005abc3b (CONDITIONAL_JUMP)  ; LAB_005abc3b
    PUSH EDX                            ; 005abc2a
    CALL crt_unknown.c_debugFree_FUN_005a3770 ; 005abc2b
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_debugFree_FUN_005a3770(void * ptr)
    XOR ECX,ECX                         ; 005abc30
    ADD ESP,0x4                         ; 005abc32
    MOV dword ptr [0x00607bdc],ECX      ; 005abc35 | g_SIOControlBlock_PTR_00607bdc
    RET                                 ; 005abc3b
        ;   Label: LAB_005abc3b

