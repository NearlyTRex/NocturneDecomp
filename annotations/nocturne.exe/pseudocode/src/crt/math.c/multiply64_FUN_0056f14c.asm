; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulonglong __watcallRegister crt_math_c_multiply64_FUN_0056f14c(ulonglong a,ulonglong b)
;
;
; XREF[1]:
;   FUN_0056808c at 00568253
;
; *****************************************************************************

section .text

    TEST EDX,EDX                        ; 0056f14c
        ;   Label: crt_math.c_multiply64_FUN_0056f14c
    JNZ 0x0056f157                      ; 0056f14e
        ;   XREF to: 0056f157 (CONDITIONAL_JUMP)  ; LAB_0056f157
    TEST ECX,ECX                        ; 0056f150
    JNZ 0x0056f157                      ; 0056f152
        ;   XREF to: 0056f157 (CONDITIONAL_JUMP)  ; LAB_0056f157
    MUL EBX                             ; 0056f154
    RET                                 ; 0056f156
    PUSH EAX                            ; 0056f157
        ;   Label: LAB_0056f157
    PUSH EDX                            ; 0056f158
    MUL ECX                             ; 0056f159
    MOV ECX,EAX                         ; 0056f15b
    POP EAX                             ; 0056f15d
    MUL EBX                             ; 0056f15e
    ADD ECX,EAX                         ; 0056f160
    POP EAX                             ; 0056f162
    MUL EBX                             ; 0056f163
    ADD EDX,ECX                         ; 0056f165
    RET                                 ; 0056f167

