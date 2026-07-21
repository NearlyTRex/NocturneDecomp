; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569f8c(char *param_1)
;
;
; XREF[1]:
;   FUN_00569928 at 00569d69
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569f8c
        ;   Label: FUN_00569f8c
    MOV EBX,dword ptr [ESP + 0x8]       ; 00569f8d
    CMP byte ptr [EBX],0x0              ; 00569f91
    JZ 0x00569fad                       ; 00569f94
        ;   XREF to: 00569fad (CONDITIONAL_JUMP)  ; LAB_00569fad
    XOR EAX,EAX                         ; 00569f96
        ;   Label: LAB_00569f96
    MOV AL,byte ptr [EBX]               ; 00569f98
    PUSH EAX                            ; 00569f9a
    INC EBX                             ; 00569f9b
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 00569f9c
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    MOV byte ptr [EBX + -0x1],AL        ; 00569fa1
    MOV DL,byte ptr [EBX]               ; 00569fa4
    ADD ESP,0x4                         ; 00569fa6
    TEST DL,DL                          ; 00569fa9
    JNZ 0x00569f96                      ; 00569fab
        ;   XREF to: 00569f96 (CONDITIONAL_JUMP)  ; LAB_00569f96
    POP EBX                             ; 00569fad
        ;   Label: LAB_00569fad
    RET                                 ; 00569fae

