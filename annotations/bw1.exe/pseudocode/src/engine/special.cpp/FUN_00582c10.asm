; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00582c10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c83430
;   undefined4 DAT_02c834d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582c10
        ;   Label: engine_special.cpp_FUN_00582c10
    PUSH ESI                            ; 00582c11
    PUSH EDI                            ; 00582c12
    PUSH EBP                            ; 00582c13
    XOR EDX,EDX                         ; 00582c14
    MOV ECX,dword ptr [0x02c83430]      ; 00582c16 | DAT_02c83430
    MOV dword ptr [0x02c834d4],EDX      ; 00582c1c | DAT_02c834d4
    TEST ECX,ECX                        ; 00582c22
    JNZ 0x00582c2d                      ; 00582c24
        ;   XREF to: 00582c2d (CONDITIONAL_JUMP)  ; LAB_00582c2d
    XOR EAX,EAX                         ; 00582c26
    POP EBP                             ; 00582c28
        ;   Label: LAB_00582c28
    POP EDI                             ; 00582c29
    POP ESI                             ; 00582c2a
    POP EBX                             ; 00582c2b
    RET                                 ; 00582c2c
    MOV EBX,dword ptr [ESP + 0x20]      ; 00582c2d
        ;   Label: LAB_00582c2d
    PUSH EBX                            ; 00582c31
    MOV ESI,dword ptr [ESP + 0x20]      ; 00582c32
    PUSH ESI                            ; 00582c36
    MOV EDI,dword ptr [ESP + 0x20]      ; 00582c37
    PUSH EDI                            ; 00582c3b
    MOV EBP,dword ptr [ESP + 0x20]      ; 00582c3c
    PUSH EBP                            ; 00582c40
    CALL dword ptr [0x02c83430]         ; 00582c41 | DAT_02c83430
    ADD ESP,0x10                        ; 00582c47
    TEST EAX,EAX                        ; 00582c4a
    JZ 0x00582c28                       ; 00582c4c
        ;   XREF to: 00582c28 (CONDITIONAL_JUMP)  ; LAB_00582c28
    MOV EAX,0x1                         ; 00582c4e
    MOV dword ptr [0x02c834d4],ESI      ; 00582c53 | DAT_02c834d4
    POP EBP                             ; 00582c59
    POP EDI                             ; 00582c5a
    POP ESI                             ; 00582c5b
    POP EBX                             ; 00582c5c
    RET                                 ; 00582c5d

