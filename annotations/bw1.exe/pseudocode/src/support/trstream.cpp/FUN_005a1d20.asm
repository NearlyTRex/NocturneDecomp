; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_005a1d20(int param_1)
;
;
; XREF[1]:
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60 at 005a1b73
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1d20
        ;   Label: support_trstream.cpp_FUN_005a1d20
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1d21
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a1d25
    TEST EDX,EDX                        ; 005a1d28
    JZ 0x005a1d39                       ; 005a1d2a
        ;   XREF to: 005a1d39 (CONDITIONAL_JUMP)  ; LAB_005a1d39
    CMP dword ptr [EBX + 0x14],0x0      ; 005a1d2c
    JNZ 0x005a1d50                      ; 005a1d30
        ;   XREF to: 005a1d50 (CONDITIONAL_JUMP)  ; LAB_005a1d50
    MOV dword ptr [EBX + 0x4],0x0       ; 005a1d32
        ;   Label: LAB_005a1d32
    MOV dword ptr [EBX + 0xc],0x0       ; 005a1d39
        ;   Label: LAB_005a1d39
    MOV dword ptr [EBX + 0x14],0x1      ; 005a1d40
    MOV dword ptr [EBX + 0x8],0x0       ; 005a1d47
    POP EBX                             ; 005a1d4e
    RET                                 ; 005a1d4f
    PUSH EDX                            ; 005a1d50
        ;   Label: LAB_005a1d50
    CALL crt_unknown.c_FUN_005c09f0     ; 005a1d51
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005a1d56
    JMP 0x005a1d32                      ; 005a1d59
        ;   XREF to: 005a1d32 (UNCONDITIONAL_JUMP)  ; LAB_005a1d32

