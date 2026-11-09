; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00479ae0(int param_1)
;
;
; XREF[2]:
;   core_dpart.cpp_FUN_004799c0 at 004799c6
;   core_dpart.cpp_FUN_004799e0 at 004799f1
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479ae0
        ;   Label: core_dpart.cpp_FUN_00479ae0
    PUSH ESI                            ; 00479ae1
    PUSH EBP                            ; 00479ae2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00479ae3
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00479ae7
    TEST EDX,EDX                        ; 00479aea
    JNZ 0x00479b10                      ; 00479aec
        ;   XREF to: 00479b10 (CONDITIONAL_JUMP)  ; LAB_00479b10
    MOV ESI,dword ptr [EBX + 0x34]      ; 00479aee
        ;   Label: LAB_00479aee
    TEST ESI,ESI                        ; 00479af1
    JZ 0x00479b05                       ; 00479af3
        ;   XREF to: 00479b05 (CONDITIONAL_JUMP)  ; LAB_00479b05
    PUSH ESI                            ; 00479af5
    CALL crt_unknown.c_FUN_005c09f0     ; 00479af6
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00479afb
    MOV dword ptr [EBX + 0x34],0x0      ; 00479afe
    MOV EBP,dword ptr [EBX + 0x30]      ; 00479b05
        ;   Label: LAB_00479b05
    TEST EBP,EBP                        ; 00479b08
    JNZ 0x00479b22                      ; 00479b0a
        ;   XREF to: 00479b22 (CONDITIONAL_JUMP)
    POP EBP                             ; 00479b0c
    POP ESI                             ; 00479b0d
    POP EBX                             ; 00479b0e
    RET                                 ; 00479b0f
    PUSH EDX                            ; 00479b10
        ;   Label: LAB_00479b10
    CALL crt_unknown.c_FUN_005c09f0     ; 00479b11
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00479b16
    MOV dword ptr [EBX + 0x2c],0x0      ; 00479b19
    JMP 0x00479aee                      ; 00479b20
        ;   XREF to: 00479aee (UNCONDITIONAL_JUMP)  ; LAB_00479aee

