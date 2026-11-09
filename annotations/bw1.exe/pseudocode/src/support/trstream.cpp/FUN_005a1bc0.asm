; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_005a1bc0(int param_1,undefined1 param_2)
;
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1bc0
        ;   Label: support_trstream.cpp_FUN_005a1bc0
    PUSH ESI                            ; 005a1bc1
    PUSH EDI                            ; 005a1bc2
    PUSH EBP                            ; 005a1bc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a1bc4
    MOV EDX,dword ptr [EBX + 0x8]       ; 005a1bc8
    MOV EAX,dword ptr [EBX + 0xc]       ; 005a1bcb
    CMP EAX,EDX                         ; 005a1bce
    JL 0x005a1bff                       ; 005a1bd0
        ;   XREF to: 005a1bff (CONDITIONAL_JUMP)  ; LAB_005a1bff
    CMP dword ptr [EBX + 0x14],0x0      ; 005a1bd2
    JNZ 0x005a1be2                      ; 005a1bd6
        ;   XREF to: 005a1be2 (CONDITIONAL_JUMP)  ; LAB_005a1be2
    MOV EAX,0xffffffff                  ; 005a1bd8
    POP EBP                             ; 005a1bdd
    POP EDI                             ; 005a1bde
    POP ESI                             ; 005a1bdf
    POP EBX                             ; 005a1be0
    RET                                 ; 005a1be1
    LEA ESI,[EAX + 0x4000]              ; 005a1be2
        ;   Label: LAB_005a1be2
    PUSH ESI                            ; 005a1be8
    MOV EDI,dword ptr [EBX + 0x4]       ; 005a1be9
    PUSH EDI                            ; 005a1bec
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 005a1bed
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005a1bf2
    TEST EAX,EAX                        ; 005a1bf5
    JZ 0x005a1c25                       ; 005a1bf7
        ;   XREF to: 005a1c25 (CONDITIONAL_JUMP)  ; LAB_005a1c25
    MOV dword ptr [EBX + 0x4],EAX       ; 005a1bf9
    MOV dword ptr [EBX + 0x8],ESI       ; 005a1bfc
    MOV EBP,dword ptr [EBX + 0xc]       ; 005a1bff
        ;   Label: LAB_005a1bff
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a1c02
    ADD EAX,EBP                         ; 005a1c05
    MOV DL,byte ptr [ESP + 0x18]        ; 005a1c07
    MOV byte ptr [EAX],DL               ; 005a1c0b
    MOV EAX,dword ptr [EBX + 0xc]       ; 005a1c0d
    INC EAX                             ; 005a1c10
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a1c11
    MOV dword ptr [EBX + 0xc],EAX       ; 005a1c14
    CMP EAX,EDX                         ; 005a1c17
    JL 0x005a1c1e                       ; 005a1c19
        ;   XREF to: 005a1c1e (CONDITIONAL_JUMP)  ; LAB_005a1c1e
    MOV dword ptr [EBX + 0x10],EAX      ; 005a1c1b
    XOR EAX,EAX                         ; 005a1c1e
        ;   Label: LAB_005a1c1e
    POP EBP                             ; 005a1c20
    POP EDI                             ; 005a1c21
    POP ESI                             ; 005a1c22
    POP EBX                             ; 005a1c23
    RET                                 ; 005a1c24
    MOV EAX,0xfffffffe                  ; 005a1c25
        ;   Label: LAB_005a1c25
    POP EBP                             ; 005a1c2a
    POP EDI                             ; 005a1c2b
    POP ESI                             ; 005a1c2c
    POP EBX                             ; 005a1c2d
    RET                                 ; 005a1c2e

