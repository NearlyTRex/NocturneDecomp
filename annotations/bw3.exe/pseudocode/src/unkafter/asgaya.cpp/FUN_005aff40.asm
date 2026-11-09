; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_asgaya_cpp_FUN_005aff40(int param_1)
;
;
; XREF[1]:
;   unkafter_asgaya.cpp_FUN_005b0004 at 005b000f
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005b0148
;   unkafter_asgaya.cpp_FUN_005afed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aff40
        ;   Label: unkafter_asgaya.cpp_FUN_005aff40
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aff41
    TEST EAX,EAX                        ; 005aff45
    JBE 0x005aff50                      ; 005aff47
        ;   XREF to: 005aff50 (CONDITIONAL_JUMP)  ; LAB_005aff50
    CMP EAX,0x1                         ; 005aff49
    JZ 0x005aff6c                       ; 005aff4c
        ;   XREF to: 005aff6c (CONDITIONAL_JUMP)  ; LAB_005aff6c
    JMP 0x005aff90                      ; 005aff4e
        ;   XREF to: 005aff90 (UNCONDITIONAL_JUMP)  ; LAB_005aff90
    PUSH 0x4                            ; 005aff50
        ;   Label: LAB_005aff50
    CALL unkafter_asgaya.cpp_FUN_005afed4 ; 005aff52
        ;   XREF to: 005afed4 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afed4()
    ADD ESP,0x4                         ; 005aff57
    MOV EBX,EAX                         ; 005aff5a
    TEST EAX,EAX                        ; 005aff5c
    JZ 0x005aff9b                       ; 005aff5e
        ;   XREF to: 005aff9b (CONDITIONAL_JUMP)  ; LAB_005aff9b
    PUSH 0x4                            ; 005aff60
    CALL unkafter_2d.cpp_FUN_005b0148   ; 005aff62
        ;   XREF to: 005b0148 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b0148()
    ADD ESP,0x4                         ; 005aff67
    JMP 0x005aff86                      ; 005aff6a
        ;   XREF to: 005aff86 (UNCONDITIONAL_JUMP)  ; LAB_005aff86
    PUSH 0x7                            ; 005aff6c
        ;   Label: LAB_005aff6c
    CALL unkafter_asgaya.cpp_FUN_005afed4 ; 005aff6e
        ;   XREF to: 005afed4 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005afed4()
    ADD ESP,0x4                         ; 005aff73
    MOV EBX,EAX                         ; 005aff76
    TEST EAX,EAX                        ; 005aff78
    JZ 0x005aff9b                       ; 005aff7a
        ;   XREF to: 005aff9b (CONDITIONAL_JUMP)  ; LAB_005aff9b
    PUSH 0x7                            ; 005aff7c
    CALL unkafter_2d.cpp_FUN_005b0148   ; 005aff7e
        ;   XREF to: 005b0148 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b0148()
    ADD ESP,0x4                         ; 005aff83
    CMP EBX,0x2                         ; 005aff86
        ;   Label: LAB_005aff86
    JZ 0x005aff90                       ; 005aff89
        ;   XREF to: 005aff90 (CONDITIONAL_JUMP)  ; LAB_005aff90
    CMP EBX,0x3                         ; 005aff8b
    JNZ 0x005aff96                      ; 005aff8e
        ;   XREF to: 005aff96 (CONDITIONAL_JUMP)  ; LAB_005aff96
    XOR EAX,EAX                         ; 005aff90
        ;   Label: LAB_005aff90
    POP EBX                             ; 005aff92
    RET 0x4                             ; 005aff93
    MOV EAX,0x1                         ; 005aff96
        ;   Label: LAB_005aff96
    POP EBX                             ; 005aff9b
        ;   Label: LAB_005aff9b
    RET 0x4                             ; 005aff9c

