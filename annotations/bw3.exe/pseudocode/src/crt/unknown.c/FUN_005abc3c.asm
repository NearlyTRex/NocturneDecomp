; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005abc3c(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a4dac at 005a4dc0
;
; Called Functions:
;   unkafter_asgaya.cpp_FUN_005aeff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abc3c
        ;   Label: crt_unknown.c_FUN_005abc3c
    PUSH ESI                            ; 005abc3d
    MOV EBX,dword ptr [ESP + 0xc]       ; 005abc3e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005abc42
    CMP EAX,-0x1                        ; 005abc45
    JNZ 0x005abc4f                      ; 005abc48
        ;   XREF to: 005abc4f (CONDITIONAL_JUMP)  ; LAB_005abc4f
    XOR EAX,EAX                         ; 005abc4a
        ;   Label: LAB_005abc4a
    POP ESI                             ; 005abc4c
        ;   Label: LAB_005abc4c
    POP EBX                             ; 005abc4d
    RET                                 ; 005abc4e
    PUSH EBX                            ; 005abc4f
        ;   Label: LAB_005abc4f
    MOV EAX,dword ptr [EBX + 0x28]      ; 005abc50
    CALL dword ptr [EAX + 0x20]         ; 005abc53
    MOV ESI,EAX                         ; 005abc56
    MOV DL,byte ptr [EBX + 0x39]        ; 005abc58
    ADD ESP,0x4                         ; 005abc5b
    AND DL,0xfe                         ; 005abc5e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005abc61
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 005abc64
    PUSH EAX                            ; 005abc6b
    MOV byte ptr [EBX + 0x39],DL        ; 005abc6c
    CALL unkafter_asgaya.cpp_FUN_005aeff0 ; 005abc6f
        ;   XREF to: 005aeff0 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005aeff0()
    ADD ESP,0x4                         ; 005abc74
    TEST EAX,EAX                        ; 005abc77
    JNZ 0x005abc4a                      ; 005abc79
        ;   XREF to: 005abc4a (CONDITIONAL_JUMP)  ; LAB_005abc4a
    CMP ESI,-0x1                        ; 005abc7b
    JZ 0x005abc4c                       ; 005abc7e
        ;   XREF to: 005abc4c (CONDITIONAL_JUMP)  ; LAB_005abc4c
    MOV EAX,EBX                         ; 005abc80
    POP ESI                             ; 005abc82
    POP EBX                             ; 005abc83
    RET                                 ; 005abc84

