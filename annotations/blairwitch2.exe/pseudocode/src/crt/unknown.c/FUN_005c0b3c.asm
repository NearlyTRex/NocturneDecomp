; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c0b3c(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_fflush_FUN_005b9bbc at 005b9bd0
;
; Called Functions:
;   crt_unknown.c_FUN_005c4080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0b3c
        ;   Label: crt_unknown.c_FUN_005c0b3c
    PUSH ESI                            ; 005c0b3d
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c0b3e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c0b42
    CMP EAX,-0x1                        ; 005c0b45
    JNZ 0x005c0b4f                      ; 005c0b48
        ;   XREF to: 005c0b4f (CONDITIONAL_JUMP)  ; LAB_005c0b4f
    XOR EAX,EAX                         ; 005c0b4a
        ;   Label: LAB_005c0b4a
    POP ESI                             ; 005c0b4c
        ;   Label: LAB_005c0b4c
    POP EBX                             ; 005c0b4d
    RET                                 ; 005c0b4e
    PUSH EBX                            ; 005c0b4f
        ;   Label: LAB_005c0b4f
    MOV EAX,dword ptr [EBX + 0x28]      ; 005c0b50
    CALL dword ptr [EAX + 0x20]         ; 005c0b53
    MOV ESI,EAX                         ; 005c0b56
    MOV DL,byte ptr [EBX + 0x39]        ; 005c0b58
    ADD ESP,0x4                         ; 005c0b5b
    AND DL,0xfe                         ; 005c0b5e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c0b61
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 005c0b64
    PUSH EAX                            ; 005c0b6b
    MOV byte ptr [EBX + 0x39],DL        ; 005c0b6c
    CALL crt_unknown.c_FUN_005c4080     ; 005c0b6f
        ;   XREF to: 005c4080 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4080()
    ADD ESP,0x4                         ; 005c0b74
    TEST EAX,EAX                        ; 005c0b77
    JNZ 0x005c0b4a                      ; 005c0b79
        ;   XREF to: 005c0b4a (CONDITIONAL_JUMP)  ; LAB_005c0b4a
    CMP ESI,-0x1                        ; 005c0b7b
    JZ 0x005c0b4c                       ; 005c0b7e
        ;   XREF to: 005c0b4c (CONDITIONAL_JUMP)  ; LAB_005c0b4c
    MOV EAX,EBX                         ; 005c0b80
    POP ESI                             ; 005c0b82
    POP EBX                             ; 005c0b83
    RET                                 ; 005c0b84

