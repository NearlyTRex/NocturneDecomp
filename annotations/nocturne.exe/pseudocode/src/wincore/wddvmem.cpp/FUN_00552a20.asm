; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_00552a20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005977c5
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_005977dc
;   TerminatedCString s_wincore_wddvmem_cpp_00597808
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_0059781f
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c5010
;   undefined4 DAT_006af62c
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02ddf560
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00552a20
        ;   Label: wincore_wddvmem.cpp_FUN_00552a20
    PUSH EBP                            ; 00552a21
    MOV ECX,dword ptr [0x005b761c]      ; 00552a22 | DAT_005b761c
    IMUL ECX,dword ptr [0x005b7620]     ; 00552a28 | DAT_005b7620
    MOV EAX,[0x005b7624]                ; 00552a2f | DAT_005b7624
    MOV EDX,EAX                         ; 00552a34
    SAR EDX,0x1f                        ; 00552a36
    SHL EDX,0x3                         ; 00552a39
    SBB EAX,EDX                         ; 00552a3c
    SAR EAX,0x3                         ; 00552a3e
    IMUL EAX,ECX                        ; 00552a41
    PUSH EAX                            ; 00552a44
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00552a45
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00552a4a
    MOV [0x005c5010],EAX                ; 00552a4d | DAT_005c5010
    TEST EAX,EAX                        ; 00552a52
    JNZ 0x00552a7b                      ; 00552a54
        ;   XREF to: 00552a7b (CONDITIONAL_JUMP)  ; LAB_00552a7b
    PUSH EBX                            ; 00552a56
    MOV ECX,0x5977c5                    ; 00552a57 | = "..\\wincore\\wddvmem.cpp"
    MOV EBX,0xea                        ; 00552a5c
    PUSH 0x5977dc                       ; 00552a61 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00552a66 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00552a6c | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00552a72
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00552a77
    POP EBX                             ; 00552a7a
    MOV EAX,[0x005b761c]                ; 00552a7b | DAT_005b761c
        ;   Label: LAB_00552a7b
    IMUL EAX,dword ptr [0x005b7620]     ; 00552a80 | DAT_005b7620
    SHL EAX,0x2                         ; 00552a87
    ADD EAX,0x40                        ; 00552a8a
    PUSH EAX                            ; 00552a8d
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00552a8e
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00552a93
    MOV [0x02ddf560],EAX                ; 00552a96 | DAT_02ddf560
    TEST EAX,EAX                        ; 00552a9b
    JZ 0x00552ab1                       ; 00552a9d
        ;   XREF to: 00552ab1 (CONDITIONAL_JUMP)  ; LAB_00552ab1
    MOV EAX,[0x02ddf560]                ; 00552a9f | DAT_02ddf560
    ADD EAX,0x10                        ; 00552aa4
    AND AL,0xf0                         ; 00552aa7
    MOV [0x006af62c],EAX                ; 00552aa9 | DAT_006af62c
    POP EBP                             ; 00552aae
    POP EDI                             ; 00552aaf
    RET                                 ; 00552ab0
    MOV EDI,0x597808                    ; 00552ab1 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_00552ab1
    MOV EBP,0xef                        ; 00552ab6
    PUSH 0x59781f                       ; 00552abb | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x01cc4800],EDI      ; 00552ac0 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00552ac6 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00552acc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00552ad1
    MOV EAX,[0x02ddf560]                ; 00552ad4 | DAT_02ddf560
    ADD EAX,0x10                        ; 00552ad9
    AND AL,0xf0                         ; 00552adc
    MOV [0x006af62c],EAX                ; 00552ade | DAT_006af62c
    POP EBP                             ; 00552ae3
    POP EDI                             ; 00552ae4
    RET                                 ; 00552ae5

