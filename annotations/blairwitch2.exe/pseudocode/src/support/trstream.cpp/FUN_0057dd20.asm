; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_0057dd20(int param_1)
;
;
; Called Functions:
;   crt_stdio.c_ftell_FUN_005baab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057dd20
        ;   Label: support_trstream.cpp_FUN_0057dd20
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057dd24
    TEST EDX,EDX                        ; 0057dd27
    JNZ 0x0057dd31                      ; 0057dd29
        ;   XREF to: 0057dd31 (CONDITIONAL_JUMP)  ; LAB_0057dd31
    MOV EAX,0xffffffff                  ; 0057dd2b
    RET                                 ; 0057dd30
    PUSH EDX                            ; 0057dd31
        ;   Label: LAB_0057dd31
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 0057dd32
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005baab0()
    ADD ESP,0x4                         ; 0057dd37
    RET                                 ; 0057dd3a

