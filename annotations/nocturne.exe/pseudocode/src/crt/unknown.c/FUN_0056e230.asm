; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e230(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c1f54
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005c1f54]      ; 0056e230 | DAT_005c1f54
        ;   Label: crt_unknown.c_FUN_0056e230
    TEST EDX,EDX                        ; 0056e236
    JZ 0x0056e24b                       ; 0056e238
        ;   XREF to: 0056e24b (CONDITIONAL_JUMP)  ; LAB_0056e24b
    PUSH EDX                            ; 0056e23a
    CALL crt_memory.c_free_FUN_005638d0 ; 0056e23b
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    XOR ECX,ECX                         ; 0056e240
    ADD ESP,0x4                         ; 0056e242
    MOV dword ptr [0x005c1f54],ECX      ; 0056e245 | DAT_005c1f54
    RET                                 ; 0056e24b
        ;   Label: LAB_0056e24b

