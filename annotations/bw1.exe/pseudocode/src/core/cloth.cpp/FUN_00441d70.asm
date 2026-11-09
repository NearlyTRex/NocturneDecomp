; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_FUN_00441d70(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_cloth.cpp_FUN_00441ca0 at 00441ca6
;   core_doc.cpp_FUN_00471af0 at 00472095
;   core_stranger.cpp_FUN_0058e3c0 at 0058e7e7
;
; Called Functions:
;   core_cloth.cpp_FUN_0043e620
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441d70
        ;   Label: core_cloth.cpp_FUN_00441d70
    PUSH ESI                            ; 00441d71
    PUSH EDI                            ; 00441d72
    MOV EDI,dword ptr [ESP + 0x10]      ; 00441d73
    MOV EDX,dword ptr [EDI]             ; 00441d77
    XOR EBX,EBX                         ; 00441d79
    TEST EDX,EDX                        ; 00441d7b
    JLE 0x00441da9                      ; 00441d7d
        ;   XREF to: 00441da9 (CONDITIONAL_JUMP)  ; LAB_00441da9
    MOV ESI,EDI                         ; 00441d7f
    MOV EAX,dword ptr [ESI + 0x194]     ; 00441d81
        ;   Label: LAB_00441d81
    TEST EAX,EAX                        ; 00441d87
    JZ 0x00441d9f                       ; 00441d89
        ;   XREF to: 00441d9f (CONDITIONAL_JUMP)  ; LAB_00441d9f
    PUSH 0x0                            ; 00441d8b
    PUSH EAX                            ; 00441d8d
    CALL core_cloth.cpp_FUN_0043e620    ; 00441d8e
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043e620()
    ADD ESP,0x8                         ; 00441d93
    PUSH EAX                            ; 00441d96
    CALL crt_unknown.c_FUN_005c0344     ; 00441d97
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00441d9c
    INC EBX                             ; 00441d9f
        ;   Label: LAB_00441d9f
    MOV ECX,dword ptr [EDI]             ; 00441da0
    ADD ESI,0x4                         ; 00441da2
    CMP EBX,ECX                         ; 00441da5
    JL 0x00441d81                       ; 00441da7
        ;   XREF to: 00441d81 (CONDITIONAL_JUMP)  ; LAB_00441d81
    PUSH 0x190                          ; 00441da9
        ;   Label: LAB_00441da9
    PUSH 0x0                            ; 00441dae
    LEA EAX,[EDI + 0x4]                 ; 00441db0
    PUSH EAX                            ; 00441db3
    MOV dword ptr [EDI],0x0             ; 00441db4
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00441dba
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00441dbf
    PUSH 0x28                           ; 00441dc2
    PUSH 0x0                            ; 00441dc4
    ADD EDI,0x194                       ; 00441dc6
    PUSH EDI                            ; 00441dcc
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00441dcd
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00441dd2
    POP EDI                             ; 00441dd5
    POP ESI                             ; 00441dd6
    POP EBX                             ; 00441dd7
    RET                                 ; 00441dd8

