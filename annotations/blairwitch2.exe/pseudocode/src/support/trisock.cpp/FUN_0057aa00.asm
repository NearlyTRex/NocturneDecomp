; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * support_trisock_cpp_FUN_0057aa00(int param_1)
;
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   support_trisock.cpp_CSocket_ctor_FUN_00579000
;   support_trisock.cpp_FUN_0057a6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057aa00
        ;   Label: support_trisock.cpp_FUN_0057aa00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057aa01
    ADD EBX,0xd2c                       ; 0057aa05
    PUSH EBX                            ; 0057aa0b
    CALL support_trisock.cpp_CSocket_ctor_FUN_00579000 ; 0057aa0c
        ;   XREF to: 00579000 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_ctor_FUN_00579000(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057aa11
    ADD EAX,0x4                         ; 0057aa14
    PUSH EAX                            ; 0057aa17
    CALL support_trisock.cpp_FUN_0057a6d0 ; 0057aa18
        ;   XREF to: 0057a6d0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a6d0()
    ADD ESP,0x4                         ; 0057aa1d
    PUSH 0x200                          ; 0057aa20
    PUSH 0x0                            ; 0057aa25
    LEA EBX,[EAX + 0xfffff2d0]          ; 0057aa27
    PUSH EBX                            ; 0057aa2d
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057aa2e
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057aa33
    PUSH 0x200                          ; 0057aa36
    PUSH 0x0                            ; 0057aa3b
    LEA EAX,[EBX + 0x200]               ; 0057aa3d
    PUSH EAX                            ; 0057aa43
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057aa44
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057aa49
    PUSH 0x100                          ; 0057aa4c
    PUSH 0x0                            ; 0057aa51
    LEA EAX,[EBX + 0x400]               ; 0057aa53
    PUSH EAX                            ; 0057aa59
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057aa5a
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057aa5f
    PUSH 0x100                          ; 0057aa62
    PUSH 0x0                            ; 0057aa67
    LEA EAX,[EBX + 0x500]               ; 0057aa69
    PUSH EAX                            ; 0057aa6f
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057aa70
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057aa75
    PUSH 0x300                          ; 0057aa78
    PUSH 0x0                            ; 0057aa7d
    LEA EAX,[EBX + 0xa18]               ; 0057aa7f
    PUSH EAX                            ; 0057aa85
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0057aa86
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x608],0x0     ; 0057aa8b
    MOV dword ptr [EBX + 0x60c],0x0     ; 0057aa95
    MOV dword ptr [EBX + 0xa10],0x0     ; 0057aa9f
    MOV dword ptr [EBX + 0xa14],0x0     ; 0057aaa9
    MOV dword ptr [EBX + 0xd20],0x0     ; 0057aab3
    MOV dword ptr [EBX + 0xd18],0x0     ; 0057aabd
    ADD ESP,0xc                         ; 0057aac7
    MOV dword ptr [EBX + 0xd24],0x0     ; 0057aaca
    MOV EAX,EBX                         ; 0057aad4
    MOV dword ptr [EBX + 0xd28],0x0     ; 0057aad6
    POP EBX                             ; 0057aae0
    RET                                 ; 0057aae1

