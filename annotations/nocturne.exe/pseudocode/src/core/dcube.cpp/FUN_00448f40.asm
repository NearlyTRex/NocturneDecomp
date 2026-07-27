; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00448f40(int *param_1,undefined4 param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_014b8a0c
;   undefined4 DAT_014b8a10
;   undefined4 DAT_014b8a14
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_00563a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448f40
        ;   Label: core_dcube.cpp_FUN_00448f40
    PUSH ESI                            ; 00448f41
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448f42
    MOV ESI,dword ptr [ESP + 0x14]      ; 00448f46
    MOV ECX,0xc                         ; 00448f4a
    MOV EAX,dword ptr [EBX]             ; 00448f4f
    XOR EDX,EDX                         ; 00448f51
    SUB EAX,ESI                         ; 00448f53
    DIV ECX                             ; 00448f55
    MOV [0x014b8a0c],EAX                ; 00448f57 | DAT_014b8a0c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00448f5c
    XOR EDX,EDX                         ; 00448f5f
    SUB EAX,ESI                         ; 00448f61
    DIV ECX                             ; 00448f63
    MOV [0x014b8a10],EAX                ; 00448f65 | DAT_014b8a10
    MOV EAX,dword ptr [EBX + 0x8]       ; 00448f6a
    XOR EDX,EDX                         ; 00448f6d
    SUB EAX,ESI                         ; 00448f6f
    DIV ECX                             ; 00448f71
    MOV EDX,dword ptr [ESP + 0x10]      ; 00448f73
    PUSH EDX                            ; 00448f77
    PUSH 0x4                            ; 00448f78
    PUSH 0x3                            ; 00448f7a
    PUSH 0x14b8a0c                      ; 00448f7c | DAT_014b8a0c
    MOV [0x014b8a14],EAX                ; 00448f81 | DAT_014b8a14
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 00448f86
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_00563a50()
    ADD ESP,0x10                        ; 00448f8b
    MOV ECX,dword ptr [ESP + 0x10]      ; 00448f8e
    PUSH ECX                            ; 00448f92
    PUSH 0x1                            ; 00448f93
    PUSH 0x14                           ; 00448f95
    ADD EBX,0xc                         ; 00448f97
    PUSH EBX                            ; 00448f9a
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 00448f9b
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_00563a50()
    ADD ESP,0x10                        ; 00448fa0
    POP ESI                             ; 00448fa3
    POP EBX                             ; 00448fa4
    RET                                 ; 00448fa5

