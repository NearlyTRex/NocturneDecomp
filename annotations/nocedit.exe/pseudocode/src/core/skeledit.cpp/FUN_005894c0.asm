; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_005894c0()
;
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 005894c0
        ;   Label: core_skeledit.cpp_FUN_005894c0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 005894c5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 005894ca
    PUSH ESI                            ; 005894cb
    MOV ESI,dword ptr [ESP + 0x10]      ; 005894cc
    MOV EBX,dword ptr [ESP + 0xc]       ; 005894d0
    TEST ESI,ESI                        ; 005894d4
    JLE 0x005894ef                      ; 005894d6 | LAB_005894ef
        ;   XREF to: 005894ef (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005894d8
        ;   Label: LAB_005894d8
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005894d9 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005894de
    TEST EAX,EAX                        ; 005894e1
    JL 0x005894ef                       ; 005894e3 | LAB_005894ef
        ;   XREF to: 005894ef (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005894e5
    JNZ 0x005894d8                      ; 005894e8 | LAB_005894d8
        ;   XREF to: 005894d8 (CONDITIONAL_JUMP)
    DEC ESI                             ; 005894ea
    TEST ESI,ESI                        ; 005894eb
    JG 0x005894d8                       ; 005894ed | LAB_005894d8
        ;   XREF to: 005894d8 (CONDITIONAL_JUMP)
    POP ESI                             ; 005894ef
        ;   Label: LAB_005894ef
    POP EBX                             ; 005894f0
    RET                                 ; 005894f1
        ;   Label: LAB_005894f1

