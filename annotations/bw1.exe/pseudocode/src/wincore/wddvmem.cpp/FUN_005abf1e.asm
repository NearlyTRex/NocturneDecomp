; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_005abf1e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00629010
;   undefined4 DAT_0071362c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c99310
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005abf1e
        ;   Label: wincore_wddvmem.cpp_FUN_005abf1e
    PUSH EDI                            ; 005abf20
    PUSH EBP                            ; 005abf21
    MOV ECX,dword ptr [0x0061b498]      ; 005abf22 | DAT_0061b498
    IMUL ECX,dword ptr [0x0061b49c]     ; 005abf28 | DAT_0061b49c
    MOV EAX,[0x0061b4a0]                ; 005abf2f | DAT_0061b4a0
    MOV EDX,EAX                         ; 005abf34
    SAR EDX,0x1f                        ; 005abf36
    SHL EDX,0x3                         ; 005abf39
    SBB EAX,EDX                         ; 005abf3c
    SAR EAX,0x3                         ; 005abf3e
    IMUL EAX,ECX                        ; 005abf41
    PUSH EAX                            ; 005abf44
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005abf45
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005abf4a
    MOV [0x00629010],EAX                ; 005abf4d | DAT_00629010
    TEST EAX,EAX                        ; 005abf52
    JNZ 0x005abf7b                      ; 005abf54
        ;   XREF to: 005abf7b (CONDITIONAL_JUMP)  ; LAB_005abf7b
    PUSH EBX                            ; 005abf56
    MOV ECX,0x5f9478                    ; 005abf57
    MOV EBX,0xed                        ; 005abf5c
    PUSH 0x5f948f                       ; 005abf61
    MOV dword ptr [0x01d1d400],ECX      ; 005abf66 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005abf6c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005abf72
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005abf77
    POP EBX                             ; 005abf7a
    MOV EAX,[0x0061b498]                ; 005abf7b | DAT_0061b498
        ;   Label: LAB_005abf7b
    IMUL EAX,dword ptr [0x0061b49c]     ; 005abf80 | DAT_0061b49c
    SHL EAX,0x2                         ; 005abf87
    ADD EAX,0x40                        ; 005abf8a
    PUSH EAX                            ; 005abf8d
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005abf8e
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005abf93
    MOV [0x02c99310],EAX                ; 005abf96 | DAT_02c99310
    TEST EAX,EAX                        ; 005abf9b
    JZ 0x005abfb1                       ; 005abf9d
        ;   XREF to: 005abfb1 (CONDITIONAL_JUMP)  ; LAB_005abfb1
    MOV EAX,[0x02c99310]                ; 005abf9f | DAT_02c99310
    ADD EAX,0x10                        ; 005abfa4
    AND AL,0xf0                         ; 005abfa7
    MOV [0x0071362c],EAX                ; 005abfa9 | DAT_0071362c
    POP EBP                             ; 005abfae
    POP EDI                             ; 005abfaf
    RET                                 ; 005abfb0
    MOV EDI,0x5f94bb                    ; 005abfb1
        ;   Label: LAB_005abfb1
    MOV EBP,0xf2                        ; 005abfb6
    PUSH 0x5f94d2                       ; 005abfbb
    MOV dword ptr [0x01d1d400],EDI      ; 005abfc0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005abfc6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005abfcc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005abfd1
    MOV EAX,[0x02c99310]                ; 005abfd4 | DAT_02c99310
    ADD EAX,0x10                        ; 005abfd9
    AND AL,0xf0                         ; 005abfdc
    MOV [0x0071362c],EAX                ; 005abfde | DAT_0071362c
    POP EBP                             ; 005abfe3
    POP EDI                             ; 005abfe4
    RET                                 ; 005abfe5

