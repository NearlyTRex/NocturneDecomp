; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trstream_cpp_COutStreamMemory_write_FUN_005a1c30(COutStreamMemory *this_ptr,undefined4 *param_2,uint param_3)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; undefined4 *     Stack[0x8]:4   param_2
; uint             Stack[0xc]:4   param_3
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1c30
        ;   Label: support_trstream.cpp_COutStreamMemory_write_FUN_005a1c30
    PUSH ESI                            ; 005a1c31
    PUSH EDI                            ; 005a1c32
    PUSH EBP                            ; 005a1c33
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a1c34
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005a1c38
    MOV EDX,dword ptr [EBX + 0xc]       ; 005a1c3c
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a1c3f
    SUB EAX,EDX                         ; 005a1c42
    CMP EBP,EAX                         ; 005a1c44
    JLE 0x005a1c54                      ; 005a1c46
        ;   XREF to: 005a1c54 (CONDITIONAL_JUMP)  ; LAB_005a1c54
    CMP dword ptr [EBX + 0x14],0x0      ; 005a1c48
    JNZ 0x005a1c8b                      ; 005a1c4c
        ;   XREF to: 005a1c8b (CONDITIONAL_JUMP)  ; LAB_005a1c8b
    TEST EAX,EAX                        ; 005a1c4e
    JZ 0x005a1cb5                       ; 005a1c50
        ;   XREF to: 005a1cb5 (CONDITIONAL_JUMP)  ; LAB_005a1cb5
    MOV EBP,EAX                         ; 005a1c52
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a1c54
        ;   Label: LAB_005a1c54
    MOV EDI,dword ptr [EBX + 0x4]       ; 005a1c58
    MOV EAX,dword ptr [EBX + 0xc]       ; 005a1c5b
    MOV ECX,EBP                         ; 005a1c5e
    ADD EDI,EAX                         ; 005a1c60
    PUSH EDI                            ; 005a1c62
    MOV EAX,ECX                         ; 005a1c63
    SHR ECX,0x2                         ; 005a1c65
    MOVSD.REP ES:EDI,ESI                ; 005a1c68
    MOV CL,AL                           ; 005a1c6a
    AND CL,0x3                          ; 005a1c6c
    MOVSB.REP ES:EDI,ESI                ; 005a1c6f
    POP EDI                             ; 005a1c71
    MOV EDX,dword ptr [EBX + 0xc]       ; 005a1c72
    ADD EDX,EBP                         ; 005a1c75
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a1c77
    MOV dword ptr [EBX + 0xc],EDX       ; 005a1c7a
    CMP EDX,ECX                         ; 005a1c7d
    JL 0x005a1c84                       ; 005a1c7f
        ;   XREF to: 005a1c84 (CONDITIONAL_JUMP)  ; LAB_005a1c84
    MOV dword ptr [EBX + 0x10],EDX      ; 005a1c81
    MOV EAX,EBP                         ; 005a1c84
        ;   Label: LAB_005a1c84
    POP EBP                             ; 005a1c86
    POP EDI                             ; 005a1c87
    POP ESI                             ; 005a1c88
    POP EBX                             ; 005a1c89
    RET                                 ; 005a1c8a
    LEA EDI,[EDX + EBP*0x1 + 0x4000]    ; 005a1c8b
        ;   Label: LAB_005a1c8b
    PUSH EDI                            ; 005a1c92
    MOV ESI,dword ptr [EBX + 0x4]       ; 005a1c93
    PUSH ESI                            ; 005a1c96
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 005a1c97
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005a1c9c
    TEST EAX,EAX                        ; 005a1c9f
    JZ 0x005a1cab                       ; 005a1ca1
        ;   XREF to: 005a1cab (CONDITIONAL_JUMP)  ; LAB_005a1cab
    MOV dword ptr [EBX + 0x4],EAX       ; 005a1ca3
    MOV dword ptr [EBX + 0x8],EDI       ; 005a1ca6
    JMP 0x005a1c54                      ; 005a1ca9
        ;   XREF to: 005a1c54 (UNCONDITIONAL_JUMP)  ; LAB_005a1c54
    MOV EAX,0xfffffffe                  ; 005a1cab
        ;   Label: LAB_005a1cab
    POP EBP                             ; 005a1cb0
    POP EDI                             ; 005a1cb1
    POP ESI                             ; 005a1cb2
    POP EBX                             ; 005a1cb3
    RET                                 ; 005a1cb4
    MOV EAX,0xffffffff                  ; 005a1cb5
        ;   Label: LAB_005a1cb5
    POP EBP                             ; 005a1cba
    POP EDI                             ; 005a1cbb
    POP ESI                             ; 005a1cbc
    POP EBX                             ; 005a1cbd
    RET                                 ; 005a1cbe

