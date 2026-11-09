; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_005a0e80(int param_1)
;
;
; XREF[2]:
;   support_trstream.cpp_FUN_005a0e10 at 005a0e16
;   unkaddr_0059f520.cpp_FUN_005a0dc0 at 005a0de2
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0e80
        ;   Label: support_trstream.cpp_FUN_005a0e80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0e81
    MOV EDX,dword ptr [EBX + 0x14]      ; 005a0e85
    TEST EDX,EDX                        ; 005a0e88
    JNZ 0x005a0eaa                      ; 005a0e8a
        ;   XREF to: 005a0eaa (CONDITIONAL_JUMP)  ; LAB_005a0eaa
    MOV dword ptr [EBX + 0x1c],0x0      ; 005a0e8c
        ;   Label: LAB_005a0e8c
    MOV dword ptr [EBX + 0x20],0x0      ; 005a0e93
    MOV dword ptr [EBX + 0x24],0x0      ; 005a0e9a
    MOV dword ptr [EBX + 0x18],0x0      ; 005a0ea1
    POP EBX                             ; 005a0ea8
    RET                                 ; 005a0ea9
    PUSH EDX                            ; 005a0eaa
        ;   Label: LAB_005a0eaa
    CALL crt_unknown.c_FUN_005c09f0     ; 005a0eab
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005a0eb0
    MOV dword ptr [EBX + 0x14],0x0      ; 005a0eb3
    JMP 0x005a0e8c                      ; 005a0eba
        ;   XREF to: 005a0e8c (UNCONDITIONAL_JUMP)  ; LAB_005a0e8c

