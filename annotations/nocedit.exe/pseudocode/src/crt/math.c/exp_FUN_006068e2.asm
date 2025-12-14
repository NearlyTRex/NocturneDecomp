; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __fpureg float10 crt_math.c_exp_FUN_006068e2(float10 x)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_005ffd76 at 005ffe94
;
; Referenced Globals:
;   double g_ExpUnderflowLimit = 709.782712893384
;   double DOUBLE_0068506c = -709.782712893384
;
; Called Functions:
;   crt_math.c_handle_math_error_FUN_0060c02b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 006068e2
        ;   Label: crt_math.c_exp_FUN_006068e2
    MOV EBP,ESP                         ; 006068e3
    SUB ESP,0x10                        ; 006068e5
    FCOM double ptr [0x00685064]        ; 006068e8 | g_ExpUnderflowLimit
    FSTSW word ptr [EBP + -0x10]        ; 006068ee
    WAIT                                ; 006068f2
    MOV AH,byte ptr [EBP + -0xf]        ; 006068f3
    SAHF                                ; 006068f6
    JBE 0x0060691a                      ; 006068f7
        ;   XREF to: 0060691a (CONDITIONAL_JUMP)  ; LAB_0060691a
    CMP AL,0x7                          ; 006068f9
    JZ 0x00606914                       ; 006068fb
        ;   XREF to: 00606914 (CONDITIONAL_JUMP)  ; LAB_00606914
    FSTP double ptr [EBP + -0x10]       ; 006068fd
    MOV dword ptr [EBP + -0x8],EAX      ; 00606900
    MOV dword ptr [EBP + -0x4],EDX      ; 00606903
    CALL crt_math.c_handle_math_error_FUN_0060c02b ; 00606906
        ;   XREF to: 0060c02b (UNCONDITIONAL_CALL)  ; double crt_math.c_handle_math_error_FUN_0060c02b()
    PUSH EDX                            ; 0060690b
    PUSH EAX                            ; 0060690c
    FLD double ptr [ESP]                ; 0060690d
    MOV EDX,dword ptr [EBP + -0x4]      ; 00606910
    WAIT                                ; 00606913
    MOV AL,0x1                          ; 00606914
        ;   Label: LAB_00606914
    MOV ESP,EBP                         ; 00606916
    POP EBP                             ; 00606918
    RET                                 ; 00606919
    FCOM double ptr [0x0068506c]        ; 0060691a | DOUBLE_0068506c
        ;   Label: LAB_0060691a
    FSTSW word ptr [EBP + -0x10]        ; 00606920
    WAIT                                ; 00606924
    MOV AH,byte ptr [EBP + -0xf]        ; 00606925
    SAHF                                ; 00606928
    JA 0x0060692f                       ; 00606929
        ;   XREF to: 0060692f (CONDITIONAL_JUMP)  ; LAB_0060692f
    FLDZ                                ; 0060692b
    JMP 0x00606943                      ; 0060692d
        ;   XREF to: 00606943 (UNCONDITIONAL_JUMP)  ; LAB_00606943
    FLDL2E                              ; 0060692f
        ;   Label: LAB_0060692f
    FMULP                               ; 00606931
    FLD ST0                             ; 00606933
    FRNDINT                             ; 00606935
    FXCH                                ; 00606937
    FSUB ST0,ST1                        ; 00606939
    F2XM1                               ; 0060693b
    FLD1                                ; 0060693d
    FADDP                               ; 0060693f
    FSCALE                              ; 00606941
    FSTP ST1                            ; 00606943
        ;   Label: LAB_00606943
    MOV AL,0x0                          ; 00606945
    MOV ESP,EBP                         ; 00606947
    POP EBP                             ; 00606949
    RET                                 ; 0060694a

