; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c8bc0(int param_1)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005c50d8 at 005c50dd
;   crt_unknown.c_FUN_005c8d50 at 005c8d6a
;   crt_unknown.c_FUN_005cab44 at 005cab49
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626630 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626634 = 005c50d4
;   undefined4 DAT_00626838
;   undefined4 DAT_0062683c
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005c10d0
;   crt_unknown.c_FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8bc0
        ;   Label: crt_unknown.c_FUN_005c8bc0
    CALL dword ptr [0x00626630]         ; 005c8bc1 | PTR_crt_unknown.c_FUN_005c50d4_00626630
    MOV EDX,dword ptr [0x0062683c]      ; 005c8bc7 | DAT_0062683c
    XOR EBX,EBX                         ; 005c8bcd
    TEST EDX,EDX                        ; 005c8bcf
    JLE 0x005c8c01                      ; 005c8bd1
        ;   XREF to: 005c8c01 (CONDITIONAL_JUMP)  ; LAB_005c8c01
    LEA ECX,[EDX*0x4 + 0x0]             ; 005c8bd3
    XOR EAX,EAX                         ; 005c8bda
    MOV EDX,dword ptr [0x00626838]      ; 005c8bdc | DAT_00626838
        ;   Label: LAB_005c8bdc
    ADD EDX,EAX                         ; 005c8be2
    CMP dword ptr [EDX],0x0             ; 005c8be4
    JNZ 0x005c8bf9                      ; 005c8be7
        ;   XREF to: 005c8bf9 (CONDITIONAL_JUMP)  ; LAB_005c8bf9
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c8be9
    MOV dword ptr [EDX],EAX             ; 005c8bed
    CALL dword ptr [0x00626634]         ; 005c8bef | PTR_crt_unknown.c_FUN_005c50d4_00626634
    MOV EAX,EBX                         ; 005c8bf5
    POP EBX                             ; 005c8bf7
    RET                                 ; 005c8bf8
    ADD EAX,0x4                         ; 005c8bf9
        ;   Label: LAB_005c8bf9
    INC EBX                             ; 005c8bfc
    CMP EAX,ECX                         ; 005c8bfd
    JL 0x005c8bdc                       ; 005c8bff
        ;   XREF to: 005c8bdc (CONDITIONAL_JUMP)  ; LAB_005c8bdc
    MOV EAX,[0x0062683c]                ; 005c8c01 | DAT_0062683c
        ;   Label: LAB_005c8c01
    INC EAX                             ; 005c8c06
    SHL EAX,0x2                         ; 005c8c07
    PUSH EAX                            ; 005c8c0a
    MOV EBX,dword ptr [0x00626838]      ; 005c8c0b | DAT_00626838
    PUSH EBX                            ; 005c8c11
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 005c8c12
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    MOV EDX,dword ptr [0x0062683c]      ; 005c8c17 | DAT_0062683c
    MOV ECX,dword ptr [0x0062683c]      ; 005c8c1d | DAT_0062683c
    ADD ESP,0x8                         ; 005c8c23
    MOV [0x00626838],EAX                ; 005c8c26 | DAT_00626838
    SHL EDX,0x2                         ; 005c8c2b
    INC ECX                             ; 005c8c2e
    ADD EAX,EDX                         ; 005c8c2f
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c8c31
    MOV dword ptr [0x0062683c],ECX      ; 005c8c35 | DAT_0062683c
    MOV dword ptr [EAX],EDX             ; 005c8c3b
    CALL dword ptr [0x00626634]         ; 005c8c3d | PTR_crt_unknown.c_FUN_005c50d4_00626634
    MOV EAX,[0x0062683c]                ; 005c8c43 | DAT_0062683c
    DEC EAX                             ; 005c8c48
    POP EBX                             ; 005c8c49
    RET                                 ; 005c8c4a

