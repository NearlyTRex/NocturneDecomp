; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__positive_FUN_10006fc0(double *value)
;
; Parameters:
; double *         Stack[0x4]:4   value
;
; XREF[1]:
;   crt_fpu.c__install_fp_handlers_FUN_100055b0 at 100055ce
;
; *****************************************************************************

section .text

    FLDZ                                ; 10006fc0
        ;   Label: crt_stdio.c__positive_FUN_10006fc0
    MOV EAX,dword ptr [ESP + 0x4]       ; 10006fc2
    FCOMP double ptr [EAX]              ; 10006fc6
    FNSTSW AX                           ; 10006fc8
    TEST AH,0x41                        ; 10006fca
    MOV EAX,0x1                         ; 10006fcd
    JNZ 0x10006fd6                      ; 10006fd2
        ;   XREF to: 10006fd6 (CONDITIONAL_JUMP)  ; LAB_10006fd6
    XOR EAX,EAX                         ; 10006fd4
    RET                                 ; 10006fd6
        ;   Label: LAB_10006fd6

