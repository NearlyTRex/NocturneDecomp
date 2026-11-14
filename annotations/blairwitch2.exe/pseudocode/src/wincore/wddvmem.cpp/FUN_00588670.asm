; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_00588670(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_00622010
;   undefined4 DAT_0070c62c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02661af0
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00588670
        ;   Label: wincore_wddvmem.cpp_FUN_00588670
    PUSH EBP                            ; 00588671
    MOV ECX,dword ptr [0x006141b8]      ; 00588672 | DAT_006141b8
    IMUL ECX,dword ptr [0x006141bc]     ; 00588678 | DAT_006141bc
    MOV EAX,[0x006141c0]                ; 0058867f | DAT_006141c0
    MOV EDX,EAX                         ; 00588684
    SAR EDX,0x1f                        ; 00588686
    SHL EDX,0x3                         ; 00588689
    SBB EAX,EDX                         ; 0058868c
    SAR EAX,0x3                         ; 0058868e
    IMUL EAX,ECX                        ; 00588691
    PUSH EAX                            ; 00588694
    CALL crt_memory.c_malloc_FUN_005b8580 ; 00588695
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0058869a
    MOV [0x00622010],EAX                ; 0058869d | DAT_00622010
    TEST EAX,EAX                        ; 005886a2
    JNZ 0x005886cb                      ; 005886a4
        ;   XREF to: 005886cb (CONDITIONAL_JUMP)  ; LAB_005886cb
    PUSH EBX                            ; 005886a6
    MOV ECX,0x5ee121                    ; 005886a7
    MOV EBX,0xea                        ; 005886ac
    PUSH 0x5ee138                       ; 005886b1
    MOV dword ptr [0x01d046a0],ECX      ; 005886b6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005886bc | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005886c2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005886c7
    POP EBX                             ; 005886ca
    MOV EAX,[0x006141b8]                ; 005886cb | DAT_006141b8
        ;   Label: LAB_005886cb
    IMUL EAX,dword ptr [0x006141bc]     ; 005886d0 | DAT_006141bc
    SHL EAX,0x2                         ; 005886d7
    ADD EAX,0x40                        ; 005886da
    PUSH EAX                            ; 005886dd
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005886de
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005886e3
    MOV [0x02661af0],EAX                ; 005886e6 | DAT_02661af0
    TEST EAX,EAX                        ; 005886eb
    JZ 0x00588701                       ; 005886ed
        ;   XREF to: 00588701 (CONDITIONAL_JUMP)  ; LAB_00588701
    MOV EAX,[0x02661af0]                ; 005886ef | DAT_02661af0
    ADD EAX,0x10                        ; 005886f4
    AND AL,0xf0                         ; 005886f7
    MOV [0x0070c62c],EAX                ; 005886f9 | DAT_0070c62c
    POP EBP                             ; 005886fe
    POP EDI                             ; 005886ff
    RET                                 ; 00588700
    MOV EDI,0x5ee164                    ; 00588701
        ;   Label: LAB_00588701
    MOV EBP,0xef                        ; 00588706
    PUSH 0x5ee17b                       ; 0058870b
    MOV dword ptr [0x01d046a0],EDI      ; 00588710 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00588716 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0058871c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00588721
    MOV EAX,[0x02661af0]                ; 00588724 | DAT_02661af0
    ADD EAX,0x10                        ; 00588729
    AND AL,0xf0                         ; 0058872c
    MOV [0x0070c62c],EAX                ; 0058872e | DAT_0070c62c
    POP EBP                             ; 00588733
    POP EDI                             ; 00588734
    RET                                 ; 00588735

