; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b1ee(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c1f50
;
; *****************************************************************************

section .text

    MOV EAX,[0x005c1f50]                ; 0056b1ee | DAT_005c1f50
        ;   Label: FUN_0056b1ee
    TEST EAX,EAX                        ; 0056b1f3
    JNZ 0x0056b1fa                      ; 0056b1f5
        ;   XREF to: 0056b1fa (CONDITIONAL_JUMP)  ; LAB_0056b1fa
    JNZ 0x0056b204                      ; 0056b1f7
        ;   XREF to: 0056b204 (CONDITIONAL_JUMP)  ; LAB_0056b204
        ;   Label: LAB_0056b1f7
    RET                                 ; 0056b1f9
    MOV EDX,dword ptr [EAX]             ; 0056b1fa
        ;   Label: LAB_0056b1fa
    MOV dword ptr [0x005c1f50],EDX      ; 0056b1fc | DAT_005c1f50
    JMP 0x0056b1f7                      ; 0056b202
        ;   XREF to: 0056b1f7 (UNCONDITIONAL_JUMP)  ; LAB_0056b1f7
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b204
        ;   Label: LAB_0056b204
    PUSH 0x0                            ; 0056b207
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056b209
    PUSH EDX                            ; 0056b20c
    CALL dword ptr [EAX + 0x4]          ; 0056b20d
    ADD ESP,0x8                         ; 0056b210
    JMP 0x0056b1ee                      ; 0056b213
        ;   XREF to: 0056b1ee (UNCONDITIONAL_JUMP)

