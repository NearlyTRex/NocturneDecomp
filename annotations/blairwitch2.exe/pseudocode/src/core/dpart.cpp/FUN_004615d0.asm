; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_004615d0(int param_1)
;
;
; XREF[2]:
;   core_dpart.cpp_FUN_004614b0 at 004614b6
;   core_dpart.cpp_FUN_004614d0 at 004614e1
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004615d0
        ;   Label: core_dpart.cpp_FUN_004615d0
    PUSH ESI                            ; 004615d1
    PUSH EBP                            ; 004615d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004615d3
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004615d7
    TEST EDX,EDX                        ; 004615da
    JNZ 0x00461600                      ; 004615dc
        ;   XREF to: 00461600 (CONDITIONAL_JUMP)  ; LAB_00461600
    MOV ESI,dword ptr [EBX + 0x34]      ; 004615de
        ;   Label: LAB_004615de
    TEST ESI,ESI                        ; 004615e1
    JZ 0x004615f5                       ; 004615e3
        ;   XREF to: 004615f5 (CONDITIONAL_JUMP)  ; LAB_004615f5
    PUSH ESI                            ; 004615e5
    CALL crt_unknown.c_FUN_005b86a0     ; 004615e6
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004615eb
    MOV dword ptr [EBX + 0x34],0x0      ; 004615ee
    MOV EBP,dword ptr [EBX + 0x30]      ; 004615f5
        ;   Label: LAB_004615f5
    TEST EBP,EBP                        ; 004615f8
    JNZ 0x00461612                      ; 004615fa
        ;   XREF to: 00461612 (CONDITIONAL_JUMP)
    POP EBP                             ; 004615fc
    POP ESI                             ; 004615fd
    POP EBX                             ; 004615fe
    RET                                 ; 004615ff
    PUSH EDX                            ; 00461600
        ;   Label: LAB_00461600
    CALL crt_unknown.c_FUN_005b86a0     ; 00461601
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00461606
    MOV dword ptr [EBX + 0x2c],0x0      ; 00461609
    JMP 0x004615de                      ; 00461610
        ;   XREF to: 004615de (UNCONDITIONAL_JUMP)  ; LAB_004615de

