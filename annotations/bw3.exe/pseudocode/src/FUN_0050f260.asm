; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050f260(int param_1)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f260
        ;   Label: FUN_0050f260
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f261
    MOV EDX,dword ptr [EBX + 0x14]      ; 0050f265
    TEST EDX,EDX                        ; 0050f268
    JNZ 0x0050f26e                      ; 0050f26a
        ;   XREF to: 0050f26e (CONDITIONAL_JUMP)  ; LAB_0050f26e
    POP EBX                             ; 0050f26c
    RET                                 ; 0050f26d
    PUSH EDX                            ; 0050f26e
        ;   Label: LAB_0050f26e
    CALL crt_unknown.c_FUN_005a3770     ; 0050f26f
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0050f274
    MOV dword ptr [EBX + 0x14],0x0      ; 0050f277
    POP EBX                             ; 0050f27e
    RET                                 ; 0050f27f

