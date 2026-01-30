; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_FUN_005894c0(void)
;
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 005894c0
        ;   Label: core_skeledit.cpp_FUN_005894c0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 005894c5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 005894ca
    PUSH ESI                            ; 005894cb
    MOV ESI,dword ptr [ESP + 0x10]      ; 005894cc
    MOV EBX,dword ptr [ESP + 0xc]       ; 005894d0
    TEST ESI,ESI                        ; 005894d4
    JLE 0x005894ef                      ; 005894d6
        ;   XREF to: 005894ef (CONDITIONAL_JUMP)  ; LAB_005894ef
    PUSH EBX                            ; 005894d8
        ;   Label: LAB_005894d8
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005894d9
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005894de
    TEST EAX,EAX                        ; 005894e1
    JL 0x005894ef                       ; 005894e3
        ;   XREF to: 005894ef (CONDITIONAL_JUMP)  ; LAB_005894ef
    CMP EAX,0xa                         ; 005894e5
    JNZ 0x005894d8                      ; 005894e8
        ;   XREF to: 005894d8 (CONDITIONAL_JUMP)  ; LAB_005894d8
    DEC ESI                             ; 005894ea
    TEST ESI,ESI                        ; 005894eb
    JG 0x005894d8                       ; 005894ed
        ;   XREF to: 005894d8 (CONDITIONAL_JUMP)  ; LAB_005894d8
    POP ESI                             ; 005894ef
        ;   Label: LAB_005894ef
    POP EBX                             ; 005894f0
    RET                                 ; 005894f1
        ;   Label: LAB_005894f1

