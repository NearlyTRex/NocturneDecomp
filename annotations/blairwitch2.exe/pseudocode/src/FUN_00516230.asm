; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516230(int param_1)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516230
        ;   Label: FUN_00516230
    MOV EBX,dword ptr [ESP + 0x8]       ; 00516231
    MOV EDX,dword ptr [EBX + 0x14]      ; 00516235
    TEST EDX,EDX                        ; 00516238
    JNZ 0x0051623e                      ; 0051623a
        ;   XREF to: 0051623e (CONDITIONAL_JUMP)  ; LAB_0051623e
    POP EBX                             ; 0051623c
    RET                                 ; 0051623d
    PUSH EDX                            ; 0051623e
        ;   Label: LAB_0051623e
    CALL crt_unknown.c_FUN_005b86a0     ; 0051623f
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00516244
    MOV dword ptr [EBX + 0x14],0x0      ; 00516247
    POP EBX                             ; 0051624e
    RET                                 ; 0051624f

