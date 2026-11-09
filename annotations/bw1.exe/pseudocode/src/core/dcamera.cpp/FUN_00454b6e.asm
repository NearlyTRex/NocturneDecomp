; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00454b6e(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00454b6e
        ;   Label: core_dcamera.cpp_FUN_00454b6e
    PUSH EBX                            ; 00454b70
    PUSH ESI                            ; 00454b71
    PUSH EDI                            ; 00454b72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00454b73
    MOV ESI,dword ptr [ESP + 0x14]      ; 00454b77
    PUSH 0x5d7a46                       ; 00454b7b
    PUSH ESI                            ; 00454b80
    CALL crt_unknown.c_FUN_005c03c0     ; 00454b81
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 00454b86
    MOV EDX,dword ptr [EBX + 0x8]       ; 00454b89
    PUSH EDX                            ; 00454b8c
    MOV ECX,dword ptr [EBX + 0x4]       ; 00454b8d
    PUSH ECX                            ; 00454b90
    MOV EDI,dword ptr [EBX]             ; 00454b91
    PUSH EDI                            ; 00454b93
    PUSH 0x5d7a56                       ; 00454b94
    PUSH ESI                            ; 00454b99
    CALL crt_unknown.c_FUN_005c03c0     ; 00454b9a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 00454b9f
    PUSH 0x5d7a60                       ; 00454ba2
    PUSH ESI                            ; 00454ba7
    CALL crt_unknown.c_FUN_005c03c0     ; 00454ba8
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 00454bad
    SUB ESP,0x8                         ; 00454bb0
    FLD float ptr [EBX + 0x14]          ; 00454bb3
    FSTP double ptr [ESP]               ; 00454bb6
    SUB ESP,0x8                         ; 00454bb9
    FLD float ptr [EBX + 0x10]          ; 00454bbc
    FSTP double ptr [ESP]               ; 00454bbf
    SUB ESP,0x8                         ; 00454bc2
    FLD float ptr [EBX + 0xc]           ; 00454bc5
    FSTP double ptr [ESP]               ; 00454bc8
    PUSH 0x5d7a68                       ; 00454bcb
    PUSH ESI                            ; 00454bd0
    CALL crt_unknown.c_FUN_005c03c0     ; 00454bd1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 00454bd6
    SUB ESP,0x8                         ; 00454bd9
    FLD float ptr [EBX + 0x1c]          ; 00454bdc
    FSTP double ptr [ESP]               ; 00454bdf
    SUB ESP,0x8                         ; 00454be2
    FLD float ptr [EBX + 0x18]          ; 00454be5
    FSTP double ptr [ESP]               ; 00454be8
    PUSH 0x5d7a72                       ; 00454beb
    PUSH ESI                            ; 00454bf0
    CALL crt_unknown.c_FUN_005c03c0     ; 00454bf1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x18                        ; 00454bf6
    SUB ESP,0x8                         ; 00454bf9
    FLD float ptr [EBX + 0x20]          ; 00454bfc
    FSTP double ptr [ESP]               ; 00454bff
    PUSH 0x5d7a79                       ; 00454c02
    PUSH ESI                            ; 00454c07
    CALL crt_unknown.c_FUN_005c03c0     ; 00454c08
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 00454c0d
    POP EDI                             ; 00454c10
    POP ESI                             ; 00454c11
    POP EBX                             ; 00454c12
    RET                                 ; 00454c13

