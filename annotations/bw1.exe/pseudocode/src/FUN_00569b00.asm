; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569b00(int param_1)
;
;
; XREF[2]:
;   FUN_0040b960 at 0040ba15
;   FUN_00569f50 at 00569f8f
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00569b00
        ;   Label: FUN_00569b00
    MOV EAX,EDX                         ; 00569b04
    ADD EDX,0xf0                        ; 00569b06
    ADD EAX,0x4                         ; 00569b0c
        ;   Label: LAB_00569b0c
    MOV dword ptr [EAX + 0x222c],0x0    ; 00569b0f
    CMP EAX,EDX                         ; 00569b19
    JNZ 0x00569b0c                      ; 00569b1b
        ;   XREF to: 00569b0c (CONDITIONAL_JUMP)  ; LAB_00569b0c
    RET                                 ; 00569b1d

