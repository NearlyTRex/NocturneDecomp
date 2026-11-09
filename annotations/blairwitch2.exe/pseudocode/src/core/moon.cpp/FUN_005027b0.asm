; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moon_cpp_FUN_005027b0(undefined4 *param_1)
;
;
; XREF[3]:
;   core_moon.cpp_FUN_00502790 at 00502796
;   core_motion.cpp_FUN_00502820 at 00502830
;   core_skeleton.cpp_FUN_00540980 at 005409f9
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005027b0
        ;   Label: core_moon.cpp_FUN_005027b0
    PUSH ESI                            ; 005027b1
    PUSH EDI                            ; 005027b2
    PUSH EBP                            ; 005027b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005027b4
    MOV EDX,dword ptr [EDI + 0x1c24]    ; 005027b8
    XOR ESI,ESI                         ; 005027be
    TEST EDX,EDX                        ; 005027c0
    JLE 0x005027ea                      ; 005027c2
        ;   XREF to: 005027ea (CONDITIONAL_JUMP)  ; LAB_005027ea
    MOV EBX,EDI                         ; 005027c4
    MOV EBP,dword ptr [EBX + 0x1c94]    ; 005027c6
        ;   Label: LAB_005027c6
    TEST EBP,EBP                        ; 005027cc
    JZ 0x005027d9                       ; 005027ce
        ;   XREF to: 005027d9 (CONDITIONAL_JUMP)  ; LAB_005027d9
    PUSH EBP                            ; 005027d0
    CALL crt_unknown.c_FUN_005b86a0     ; 005027d1
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005027d6
    INC ESI                             ; 005027d9
        ;   Label: LAB_005027d9
    MOV ECX,dword ptr [EDI + 0x1c24]    ; 005027da
    ADD EBX,0x118                       ; 005027e0
    CMP ESI,ECX                         ; 005027e6
    JL 0x005027c6                       ; 005027e8
        ;   XREF to: 005027c6 (CONDITIONAL_JUMP)  ; LAB_005027c6
    PUSH 0x1b580                        ; 005027ea
        ;   Label: LAB_005027ea
    PUSH 0x0                            ; 005027ef
    MOV dword ptr [EDI],0x0             ; 005027f1
    ADD EDI,0x1c28                      ; 005027f7
    PUSH EDI                            ; 005027fd
    MOV dword ptr [EDI + -0x4],0x0      ; 005027fe
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00502805
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050280a
    POP EBP                             ; 0050280d
    POP EDI                             ; 0050280e
    POP ESI                             ; 0050280f
    POP EBX                             ; 00502810
    RET                                 ; 00502811

