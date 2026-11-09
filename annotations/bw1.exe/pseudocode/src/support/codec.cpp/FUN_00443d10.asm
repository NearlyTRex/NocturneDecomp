; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00443d10(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443d10
        ;   Label: support_codec.cpp_FUN_00443d10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00443d11
    CMP dword ptr [EDX + 0x10],0x0      ; 00443d15
    JZ 0x00443d32                       ; 00443d19
        ;   XREF to: 00443d32 (CONDITIONAL_JUMP)  ; LAB_00443d32
    MOV EBX,dword ptr [EDX + 0x1c]      ; 00443d1b
    TEST EBX,EBX                        ; 00443d1e
    JLE 0x00443d32                      ; 00443d20
        ;   XREF to: 00443d32 (CONDITIONAL_JUMP)  ; LAB_00443d32
    PUSH ESI                            ; 00443d22
    MOV EAX,0x1                         ; 00443d23
    MOV ESI,EBX                         ; 00443d28
    SUB ESI,EAX                         ; 00443d2a
    MOV dword ptr [EDX + 0x1c],ESI      ; 00443d2c
    POP ESI                             ; 00443d2f
    POP EBX                             ; 00443d30
    RET                                 ; 00443d31
    XOR EAX,EAX                         ; 00443d32
        ;   Label: LAB_00443d32
    POP EBX                             ; 00443d34
    RET                                 ; 00443d35

