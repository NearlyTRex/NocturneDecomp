; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_FUN_00509b00(undefined4 param_1)
;
;
; Called Functions:
;   crt_heap.c__heapwalk_FUN_005c2ce0
;   support_trstream.cpp_FUN_005a14c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509b00
        ;   Label: core_melee.cpp_FUN_00509b00
    PUSH ESI                            ; 00509b01
    PUSH EDI                            ; 00509b02
    PUSH EBP                            ; 00509b03
    MOV EBP,ESP                         ; 00509b04
    SUB ESP,0x10                        ; 00509b06
    MOV EBX,dword ptr [EBP + 0x14]      ; 00509b09
    XOR EDX,EDX                         ; 00509b0c
    MOV word ptr [EBP + -0xc],DX        ; 00509b0e
    XOR EDX,EDX                         ; 00509b12
    MOV dword ptr [EBP + -0x10],EDX     ; 00509b14
    LEA EAX,[EBP + -0x10]               ; 00509b17
        ;   Label: LAB_00509b17
    PUSH EAX                            ; 00509b1a
    CALL crt_heap.c__heapwalk_FUN_005c2ce0 ; 00509b1b
        ;   XREF to: 005c2ce0 (UNCONDITIONAL_CALL)  ; int crt_heap.c__heapwalk_FUN_005c2ce0(WatcomHeapInfo * heap_info)
    ADD ESP,0x4                         ; 00509b20
    TEST EAX,EAX                        ; 00509b23
    JZ 0x00509b49                       ; 00509b25
        ;   XREF to: 00509b49 (CONDITIONAL_JUMP)  ; LAB_00509b49
    DEC EAX                             ; 00509b27
    CMP EAX,0x4                         ; 00509b28
    JA 0x00509b42                       ; 00509b2b
        ;   XREF to: 00509b42 (CONDITIONAL_JUMP)  ; LAB_00509b42
    JMP dword ptr [EAX*0x4 + 0x509ae0]  ; 00509b2d
    MOV ESP,EBP                         ; 00509b42
        ;   Label: LAB_00509b42
    POP EBP                             ; 00509b44
    POP EDI                             ; 00509b45
    POP ESI                             ; 00509b46
    POP EBX                             ; 00509b47
    RET                                 ; 00509b48
    MOV ECX,dword ptr [EBP + -0xa]      ; 00509b49
        ;   Label: LAB_00509b49
    MOV ESI,dword ptr [EBP + -0x6]      ; 00509b4c
    PUSH ECX                            ; 00509b4f
    TEST ESI,ESI                        ; 00509b50
    JZ 0x00509b75                       ; 00509b52
        ;   XREF to: 00509b75 (CONDITIONAL_JUMP)  ; LAB_00509b75
    MOV EAX,0x5e797e                    ; 00509b54
    PUSH EAX                            ; 00509b59
        ;   Label: LAB_00509b59
    XOR EAX,EAX                         ; 00509b5a
    MOV AX,word ptr [EBP + -0xc]        ; 00509b5c
    PUSH EAX                            ; 00509b60
    MOV EDI,dword ptr [EBP + -0x10]     ; 00509b61
    PUSH EDI                            ; 00509b64
    PUSH 0x5e7988                       ; 00509b65
    PUSH EBX                            ; 00509b6a
    CALL support_trstream.cpp_FUN_005a14c0 ; 00509b6b
        ;   XREF to: 005a14c0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a14c0()
    ADD ESP,0x18                        ; 00509b70
    JMP 0x00509b17                      ; 00509b73
        ;   XREF to: 00509b17 (UNCONDITIONAL_JUMP)  ; LAB_00509b17
    MOV EAX,0x5e7983                    ; 00509b75
        ;   Label: LAB_00509b75
    JMP 0x00509b59                      ; 00509b7a
        ;   XREF to: 00509b59 (UNCONDITIONAL_JUMP)  ; LAB_00509b59

