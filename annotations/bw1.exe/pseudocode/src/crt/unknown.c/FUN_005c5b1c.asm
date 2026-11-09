; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005c5b1c(byte *param_1,void *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c5b64 at 005c5b98
;
; Referenced Globals:
;   undefined4 DAT_00626648
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5b1c
        ;   Label: crt_unknown.c_FUN_005c5b1c
    PUSH ESI                            ; 005c5b1d
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c5b1e
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c5b22
    PUSH 0x20                           ; 005c5b26
    PUSH 0x0                            ; 005c5b28
    PUSH ESI                            ; 005c5b2a
    INC EBX                             ; 005c5b2b
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005c5b2c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    XOR EAX,EAX                         ; 005c5b31
    MOV AL,byte ptr [EBX + -0x1]        ; 005c5b33
    ADD ESP,0xc                         ; 005c5b36
    TEST EAX,EAX                        ; 005c5b39
    JZ 0x005c5b5c                       ; 005c5b3b
        ;   XREF to: 005c5b5c (CONDITIONAL_JUMP)  ; LAB_005c5b5c
    MOV EDX,EAX                         ; 005c5b3d
        ;   Label: LAB_005c5b3d
    AND EAX,0x7                         ; 005c5b3f
    SAR EDX,0x3                         ; 005c5b42
    MOV AL,byte ptr [EAX + 0x626648]    ; 005c5b45 | DAT_00626648
    OR byte ptr [EDX + ESI*0x1],AL      ; 005c5b4b
    XOR EAX,EAX                         ; 005c5b4e
    MOV AL,byte ptr [EBX]               ; 005c5b50
    TEST EAX,EAX                        ; 005c5b52
    JZ 0x005c5b5c                       ; 005c5b54
        ;   XREF to: 005c5b5c (CONDITIONAL_JUMP)  ; LAB_005c5b5c
    INC EBX                             ; 005c5b56
    CMP EAX,0x5d                        ; 005c5b57
    JNZ 0x005c5b3d                      ; 005c5b5a
        ;   XREF to: 005c5b3d (CONDITIONAL_JUMP)  ; LAB_005c5b3d
    MOV EAX,EBX                         ; 005c5b5c
        ;   Label: LAB_005c5b5c
    POP ESI                             ; 005c5b5e
    POP EBX                             ; 005c5b5f
    RET                                 ; 005c5b60

