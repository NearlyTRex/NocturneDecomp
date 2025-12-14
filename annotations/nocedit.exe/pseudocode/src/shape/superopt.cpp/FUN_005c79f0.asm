; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_FUN_005c79f0()
;
;
; XREF[3]:
;   shape_superopt.cpp_COptimize_FUN_005d7000 at 005d7023
;   shape_superopt.cpp_FUN_005c79d0 at 005c79d6
;   shape_superopt.cpp_FUN_005c9500 at 005c984b
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_free_FUN_00601cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c79f0
        ;   Label: shape_superopt.cpp_FUN_005c79f0
    PUSH ESI                            ; 005c79f1
    PUSH EDI                            ; 005c79f2
    PUSH EBP                            ; 005c79f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c79f4
    MOV EDX,dword ptr [EDI + 0x4]       ; 005c79f8
    MOV dword ptr [EDI],0x0             ; 005c79fb
    TEST EDX,EDX                        ; 005c7a01
    JNZ 0x005c7a74                      ; 005c7a03
        ;   XREF to: 005c7a74 (CONDITIONAL_JUMP)  ; LAB_005c7a74
    MOV ESI,dword ptr [EDI + 0x8]       ; 005c7a05
        ;   Label: LAB_005c7a05
    MOV dword ptr [EDI + 0x4],0x0       ; 005c7a08
    XOR EBX,EBX                         ; 005c7a0f
    TEST ESI,ESI                        ; 005c7a11
    JBE 0x005c7a40                      ; 005c7a13
        ;   XREF to: 005c7a40 (CONDITIONAL_JUMP)  ; LAB_005c7a40
    XOR ESI,ESI                         ; 005c7a15
    MOV EAX,dword ptr [EDI + 0xc]       ; 005c7a17
        ;   Label: LAB_005c7a17
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x4] ; 005c7a1a
    PUSH EBP                            ; 005c7a1e
    ADD ESI,0x8                         ; 005c7a1f
    INC EBX                             ; 005c7a22
    CALL crt_memory.c_free_FUN_005fe659 ; 005c7a23
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV EAX,dword ptr [EDI + 0x8]       ; 005c7a28
    ADD ESP,0x4                         ; 005c7a2b
    CMP EBX,EAX                         ; 005c7a2e
    JC 0x005c7a17                       ; 005c7a30
        ;   XREF to: 005c7a17 (CONDITIONAL_JUMP)  ; LAB_005c7a17
    LEA EAX,[EAX]                       ; 005c7a32
    LEA EDX,[EDX]                       ; 005c7a38
    MOV EAX,EAX                         ; 005c7a3e
    MOV EDX,dword ptr [EDI + 0xc]       ; 005c7a40
        ;   Label: LAB_005c7a40
    MOV dword ptr [EDI + 0x8],0x0       ; 005c7a43
    TEST EDX,EDX                        ; 005c7a4a
    JNZ 0x005c7a7f                      ; 005c7a4c
        ;   XREF to: 005c7a7f (CONDITIONAL_JUMP)  ; LAB_005c7a7f
    MOV EBX,dword ptr [EDI + 0x30]      ; 005c7a4e
        ;   Label: LAB_005c7a4e
    MOV dword ptr [EDI + 0xc],0x0       ; 005c7a51
    PUSH EBX                            ; 005c7a58
    MOV dword ptr [EDI + 0x2c],0x0      ; 005c7a59
    CALL crt_memory.c_free_FUN_005fe659 ; 005c7a60
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c7a65
    MOV dword ptr [EDI + 0x30],0x0      ; 005c7a68
    POP EBP                             ; 005c7a6f
    POP EDI                             ; 005c7a70
    POP ESI                             ; 005c7a71
    POP EBX                             ; 005c7a72
    RET                                 ; 005c7a73
    PUSH EDX                            ; 005c7a74
        ;   Label: LAB_005c7a74
    CALL crt_memory.c_free_FUN_00601cd0 ; 005c7a75
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 005c7a7a
    JMP 0x005c7a05                      ; 005c7a7d
        ;   XREF to: 005c7a05 (UNCONDITIONAL_JUMP)  ; LAB_005c7a05
    PUSH EDX                            ; 005c7a7f
        ;   Label: LAB_005c7a7f
    CALL crt_memory.c_free_FUN_00601cd0 ; 005c7a80
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 005c7a85
    JMP 0x005c7a4e                      ; 005c7a88
        ;   XREF to: 005c7a4e (UNCONDITIONAL_JUMP)  ; LAB_005c7a4e

