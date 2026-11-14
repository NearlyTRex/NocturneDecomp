; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_004663b0(int param_1)
;
;
; XREF[2]:
;   core_dpart.cpp_CDemonPart_alloc_FUN_004662b0 at 004662c1
;   core_dpart.cpp_CDemonPart_dtor_FUN_00466290 at 00466296
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004663b0
        ;   Label: core_dpart.cpp_FUN_004663b0
    PUSH ESI                            ; 004663b1
    PUSH EBP                            ; 004663b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004663b3
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004663b7
    TEST EDX,EDX                        ; 004663ba
    JNZ 0x004663e0                      ; 004663bc
        ;   XREF to: 004663e0 (CONDITIONAL_JUMP)  ; LAB_004663e0
    MOV ESI,dword ptr [EBX + 0x34]      ; 004663be
        ;   Label: LAB_004663be
    TEST ESI,ESI                        ; 004663c1
    JZ 0x004663d5                       ; 004663c3
        ;   XREF to: 004663d5 (CONDITIONAL_JUMP)  ; LAB_004663d5
    PUSH ESI                            ; 004663c5
    CALL crt_unknown.c_FUN_005a3770     ; 004663c6
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004663cb
    MOV dword ptr [EBX + 0x34],0x0      ; 004663ce
    MOV EBP,dword ptr [EBX + 0x30]      ; 004663d5
        ;   Label: LAB_004663d5
    TEST EBP,EBP                        ; 004663d8
    JNZ 0x004663f2                      ; 004663da
        ;   XREF to: 004663f2 (CONDITIONAL_JUMP)
    POP EBP                             ; 004663dc
    POP ESI                             ; 004663dd
    POP EBX                             ; 004663de
    RET                                 ; 004663df
    PUSH EDX                            ; 004663e0
        ;   Label: LAB_004663e0
    CALL crt_unknown.c_FUN_005a3770     ; 004663e1
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004663e6
    MOV dword ptr [EBX + 0x2c],0x0      ; 004663e9
    JMP 0x004663be                      ; 004663f0
        ;   XREF to: 004663be (UNCONDITIONAL_JUMP)  ; LAB_004663be

