; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_alloc_FUN_004799e0(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dpart.cpp_FUN_00479c70 at 00479cb0
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dpart.cpp_FUN_00479ae0
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c1cb0
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004799e0
        ;   Label: core_dpart.cpp_CDemonPart_alloc_FUN_004799e0
    PUSH EDI                            ; 004799e1
    PUSH EBP                            ; 004799e2
    SUB ESP,0x100                       ; 004799e3
    MOV EBX,dword ptr [ESP + 0x110]     ; 004799e9
    PUSH EBX                            ; 004799f0
    CALL core_dpart.cpp_FUN_00479ae0    ; 004799f1
        ;   XREF to: 00479ae0 (UNCONDITIONAL_CALL)  ; undefined core_dpart.cpp_FUN_00479ae0()
    MOV EDX,dword ptr [EBX + 0x20]      ; 004799f6
    ADD ESP,0x4                         ; 004799f9
    TEST EDX,EDX                        ; 004799fc
    JNZ 0x00479a15                      ; 004799fe
        ;   XREF to: 00479a15 (CONDITIONAL_JUMP)  ; LAB_00479a15
    MOV EBP,dword ptr [EBX + 0x24]      ; 00479a00
        ;   Label: LAB_00479a00
    TEST EBP,EBP                        ; 00479a03
    JNZ 0x00479a9c                      ; 00479a05
        ;   XREF to: 00479a9c (CONDITIONAL_JUMP)  ; LAB_00479a9c
    ADD ESP,0x100                       ; 00479a0b
        ;   Label: LAB_00479a0b
    POP EBP                             ; 00479a11
    POP EDI                             ; 00479a12
    POP EBX                             ; 00479a13
    RET                                 ; 00479a14
    PUSH 0xc                            ; 00479a15
        ;   Label: LAB_00479a15
    PUSH EDX                            ; 00479a17
    CALL crt_unknown.c_FUN_005c1cb0     ; 00479a18
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1cb0()
    ADD ESP,0x8                         ; 00479a1d
    MOV dword ptr [EBX + 0x2c],EAX      ; 00479a20
    TEST EAX,EAX                        ; 00479a23
    JNZ 0x00479a5d                      ; 00479a25
        ;   XREF to: 00479a5d (CONDITIONAL_JUMP)  ; LAB_00479a5d
    MOV EDI,dword ptr [EBX + 0x20]      ; 00479a27
    PUSH EDI                            ; 00479a2a
    PUSH 0x5daacd                       ; 00479a2b
    LEA EAX,[ESP + 0x8]                 ; 00479a30
    PUSH EAX                            ; 00479a34
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00479a35
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x8b                        ; 00479a3a
    ADD ESP,0xc                         ; 00479a3f
    MOV [0x01d1d404],EAX                ; 00479a42 | DAT_01d1d404
    MOV EAX,ESP                         ; 00479a47
    MOV EBP,0x5daafa                    ; 00479a49
    PUSH EAX                            ; 00479a4e
    MOV dword ptr [0x01d1d400],EBP      ; 00479a4f | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00479a55
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00479a5a
    PUSH 0xc                            ; 00479a5d
        ;   Label: LAB_00479a5d
    MOV EDX,dword ptr [EBX + 0x20]      ; 00479a5f
    PUSH EDX                            ; 00479a62
    CALL crt_unknown.c_FUN_005c1cb0     ; 00479a63
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1cb0()
    ADD ESP,0x8                         ; 00479a68
    MOV dword ptr [EBX + 0x30],EAX      ; 00479a6b
    TEST EAX,EAX                        ; 00479a6e
    JNZ 0x00479a00                      ; 00479a70
        ;   XREF to: 00479a00 (CONDITIONAL_JUMP)  ; LAB_00479a00
    PUSH ESI                            ; 00479a72
    MOV ESI,0x5dab0c                    ; 00479a73
    MOV EDI,0x91                        ; 00479a78
    PUSH 0x5dab1e                       ; 00479a7d
    MOV dword ptr [0x01d1d400],ESI      ; 00479a82 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00479a88 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00479a8e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00479a93
    POP ESI                             ; 00479a96
    JMP 0x00479a00                      ; 00479a97
        ;   XREF to: 00479a00 (UNCONDITIONAL_JUMP)  ; LAB_00479a00
    PUSH 0x20                           ; 00479a9c
        ;   Label: LAB_00479a9c
    PUSH EBP                            ; 00479a9e
    CALL crt_unknown.c_FUN_005c1cb0     ; 00479a9f
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1cb0()
    ADD ESP,0x8                         ; 00479aa4
    MOV dword ptr [EBX + 0x34],EAX      ; 00479aa7
    TEST EAX,EAX                        ; 00479aaa
    JNZ 0x00479a0b                      ; 00479aac
        ;   XREF to: 00479a0b (CONDITIONAL_JUMP)  ; LAB_00479a0b
    MOV ECX,0x5dab48                    ; 00479ab2
    MOV EBX,0x99                        ; 00479ab7
    PUSH 0x5dab5a                       ; 00479abc
    MOV dword ptr [0x01d1d400],ECX      ; 00479ac1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00479ac7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00479acd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00479ad2
    ADD ESP,0x100                       ; 00479ad5
    POP EBP                             ; 00479adb
    POP EDI                             ; 00479adc
    POP EBX                             ; 00479add
    RET                                 ; 00479ade

