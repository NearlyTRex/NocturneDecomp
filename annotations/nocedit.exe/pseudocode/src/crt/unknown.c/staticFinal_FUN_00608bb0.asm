; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_staticFinal_FUN_00608bb0(void)
;
;
; Referenced Globals:
;   SIOControlBlock* g_IOControlBlock = 00000000
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0068526c]      ; 00608bb0 | g_IOControlBlock
        ;   Label: crt_unknown.c_staticFinal_FUN_00608bb0
    TEST EDX,EDX                        ; 00608bb6
    JZ 0x00608bcb                       ; 00608bb8
        ;   XREF to: 00608bcb (CONDITIONAL_JUMP)  ; LAB_00608bcb
    PUSH EDX                            ; 00608bba
    CALL crt_memory.c_free_FUN_00601cd0 ; 00608bbb
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    XOR ECX,ECX                         ; 00608bc0
    ADD ESP,0x4                         ; 00608bc2
    MOV dword ptr [0x0068526c],ECX      ; 00608bc5 | g_IOControlBlock
    RET                                 ; 00608bcb
        ;   Label: LAB_00608bcb

