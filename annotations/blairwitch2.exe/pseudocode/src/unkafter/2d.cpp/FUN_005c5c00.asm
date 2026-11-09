; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005c5c00(undefined4 param_1)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c46f0 at 005c4743
;
; Called Functions:
;   crt_unknown.c_FUN_005c0dc0
;   crt_unknown.c_FUN_005c0e00
;   crt_unknown.c_FUN_005c0e30
;   crt_unknown.c_FUN_005c0e50
;   unkafter_2d.cpp_FUN_005c5bc0
;   unkafter_2d.cpp_FUN_005c6690
;   unkafter_morph.cpp_FUN_005c4260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5c00
        ;   Label: unkafter_2d.cpp_FUN_005c5c00
    PUSH ESI                            ; 005c5c01
    SUB ESP,0x4                         ; 005c5c02
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c5c05
    MOV EBX,ESI                         ; 005c5c09
    PUSH EBX                            ; 005c5c0b
        ;   Label: LAB_005c5c0b
    CALL unkafter_morph.cpp_FUN_005c4260 ; 005c5c0c
        ;   XREF to: 005c4260 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c4260()
    ADD ESP,0x4                         ; 005c5c11
    TEST EAX,EAX                        ; 005c5c14
    JNZ 0x005c5c5f                      ; 005c5c16
        ;   XREF to: 005c5c5f (CONDITIONAL_JUMP)  ; LAB_005c5c5f
    PUSH EBX                            ; 005c5c18
    CALL crt_unknown.c_FUN_005c0dc0     ; 005c5c19
        ;   XREF to: 005c0dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0dc0()
    ADD ESP,0x4                         ; 005c5c1e
    PUSH EAX                            ; 005c5c21
    CALL unkafter_2d.cpp_FUN_005c6690   ; 005c5c22
        ;   XREF to: 005c6690 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c6690()
    ADD ESP,0x4                         ; 005c5c27
    MOV EDX,ESP                         ; 005c5c2a
    PUSH EDX                            ; 005c5c2c
    PUSH EAX                            ; 005c5c2d
    CALL crt_unknown.c_FUN_005c0e30     ; 005c5c2e
        ;   XREF to: 005c0e30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e30()
    ADD ESP,0x8                         ; 005c5c33
    MOV EAX,ESP                         ; 005c5c36
    PUSH EAX                            ; 005c5c38
    CALL crt_unknown.c_FUN_005c0e50     ; 005c5c39
        ;   XREF to: 005c0e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e50()
    ADD ESP,0x4                         ; 005c5c3e
    XOR DL,DL                           ; 005c5c41
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005c5c43
    MOV EAX,ESP                         ; 005c5c46
    PUSH EAX                            ; 005c5c48
    PUSH EBX                            ; 005c5c49
    CALL unkafter_2d.cpp_FUN_005c5bc0   ; 005c5c4a
        ;   XREF to: 005c5bc0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c5bc0()
    ADD ESP,0x8                         ; 005c5c4f
    PUSH EBX                            ; 005c5c52
    CALL crt_unknown.c_FUN_005c0e00     ; 005c5c53
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    MOV EBX,EAX                         ; 005c5c58
    ADD ESP,0x4                         ; 005c5c5a
    JMP 0x005c5c0b                      ; 005c5c5d
        ;   XREF to: 005c5c0b (UNCONDITIONAL_JUMP)  ; LAB_005c5c0b
    MOV EAX,ESI                         ; 005c5c5f
        ;   Label: LAB_005c5c5f
    ADD ESP,0x4                         ; 005c5c61
    POP ESI                             ; 005c5c64
    POP EBX                             ; 005c5c65
    RET                                 ; 005c5c66

