; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537580(int param_1)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537580
        ;   Label: FUN_00537580
    MOV EBX,dword ptr [ESP + 0x8]       ; 00537581
    MOV EDX,dword ptr [EBX + 0x14]      ; 00537585
    TEST EDX,EDX                        ; 00537588
    JNZ 0x0053758e                      ; 0053758a
        ;   XREF to: 0053758e (CONDITIONAL_JUMP)  ; LAB_0053758e
    POP EBX                             ; 0053758c
    RET                                 ; 0053758d
    PUSH EDX                            ; 0053758e
        ;   Label: LAB_0053758e
    CALL crt_unknown.c_FUN_005c09f0     ; 0053758f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00537594
    MOV dword ptr [EBX + 0x14],0x0      ; 00537597
    POP EBX                             ; 0053759e
    RET                                 ; 0053759f

