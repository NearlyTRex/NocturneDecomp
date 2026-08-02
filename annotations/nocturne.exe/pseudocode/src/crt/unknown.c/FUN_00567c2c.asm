; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_00567c2c(byte *param_1,void *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00567c74 at 00567ca8
;
; Referenced Globals:
;   undefined4 DAT_005c1b08
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567c2c
        ;   Label: crt_unknown.c_FUN_00567c2c
    PUSH ESI                            ; 00567c2d
    MOV EBX,dword ptr [ESP + 0xc]       ; 00567c2e
    MOV ESI,dword ptr [ESP + 0x10]      ; 00567c32
    PUSH 0x20                           ; 00567c36
    PUSH 0x0                            ; 00567c38
    PUSH ESI                            ; 00567c3a
    INC EBX                             ; 00567c3b
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00567c3c
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    XOR EAX,EAX                         ; 00567c41
    MOV AL,byte ptr [EBX + -0x1]        ; 00567c43
    ADD ESP,0xc                         ; 00567c46
    TEST EAX,EAX                        ; 00567c49
    JZ 0x00567c6c                       ; 00567c4b
        ;   XREF to: 00567c6c (CONDITIONAL_JUMP)  ; LAB_00567c6c
    MOV EDX,EAX                         ; 00567c4d
        ;   Label: LAB_00567c4d
    AND EAX,0x7                         ; 00567c4f
    SAR EDX,0x3                         ; 00567c52
    MOV AL,byte ptr [EAX + 0x5c1b08]    ; 00567c55 | DAT_005c1b08
    OR byte ptr [EDX + ESI*0x1],AL      ; 00567c5b
    XOR EAX,EAX                         ; 00567c5e
    MOV AL,byte ptr [EBX]               ; 00567c60
    TEST EAX,EAX                        ; 00567c62
    JZ 0x00567c6c                       ; 00567c64
        ;   XREF to: 00567c6c (CONDITIONAL_JUMP)  ; LAB_00567c6c
    INC EBX                             ; 00567c66
    CMP EAX,0x5d                        ; 00567c67
    JNZ 0x00567c4d                      ; 00567c6a
        ;   XREF to: 00567c4d (CONDITIONAL_JUMP)  ; LAB_00567c4d
    MOV EAX,EBX                         ; 00567c6c
        ;   Label: LAB_00567c6c
    POP ESI                             ; 00567c6e
    POP EBX                             ; 00567c6f
    RET                                 ; 00567c70

