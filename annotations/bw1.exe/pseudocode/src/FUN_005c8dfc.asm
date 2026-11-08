; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c8dfc(int param_1)
;
;
; Called Functions:
;   FUN_005cc380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8dfc
        ;   Label: FUN_005c8dfc
    PUSH ESI                            ; 005c8dfd
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c8dfe
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c8e02
    CMP EAX,-0x1                        ; 005c8e05
    JNZ 0x005c8e0f                      ; 005c8e08
        ;   XREF to: 005c8e0f (CONDITIONAL_JUMP)  ; LAB_005c8e0f
    XOR EAX,EAX                         ; 005c8e0a
        ;   Label: LAB_005c8e0a
    POP ESI                             ; 005c8e0c
        ;   Label: LAB_005c8e0c
    POP EBX                             ; 005c8e0d
    RET                                 ; 005c8e0e
    PUSH EBX                            ; 005c8e0f
        ;   Label: LAB_005c8e0f
    MOV EAX,dword ptr [EBX + 0x28]      ; 005c8e10
    CALL dword ptr [EAX + 0x20]         ; 005c8e13
    MOV ESI,EAX                         ; 005c8e16
    MOV DL,byte ptr [EBX + 0x39]        ; 005c8e18
    ADD ESP,0x4                         ; 005c8e1b
    AND DL,0xfe                         ; 005c8e1e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c8e21
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 005c8e24
    PUSH EAX                            ; 005c8e2b
    MOV byte ptr [EBX + 0x39],DL        ; 005c8e2c
    CALL FUN_005cc380                   ; 005c8e2f
        ;   XREF to: 005cc380 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc380()
    ADD ESP,0x4                         ; 005c8e34
    TEST EAX,EAX                        ; 005c8e37
    JNZ 0x005c8e0a                      ; 005c8e39
        ;   XREF to: 005c8e0a (CONDITIONAL_JUMP)  ; LAB_005c8e0a
    CMP ESI,-0x1                        ; 005c8e3b
    JZ 0x005c8e0c                       ; 005c8e3e
        ;   XREF to: 005c8e0c (CONDITIONAL_JUMP)  ; LAB_005c8e0c
    MOV EAX,EBX                         ; 005c8e40
    POP ESI                             ; 005c8e42
    POP EBX                             ; 005c8e43
    RET                                 ; 005c8e44

