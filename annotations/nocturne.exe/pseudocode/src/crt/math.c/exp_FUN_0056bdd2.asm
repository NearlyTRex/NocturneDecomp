; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __fpureg_safe crt_math_c_exp_FUN_0056bdd2(float10 x)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_00565ad6 at 00565bf4
;
; Referenced Globals:
;   undefined4 DAT_005c1d9c
;   undefined4 DAT_005c1da4
;
; Called Functions:
;   crt_math.c_handle_math_error_FUN_005707db
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056bdd2
        ;   Label: crt_math.c_exp_FUN_0056bdd2
    MOV EBP,ESP                         ; 0056bdd3
    SUB ESP,0x10                        ; 0056bdd5
    FCOM double ptr [0x005c1d9c]        ; 0056bdd8 | DAT_005c1d9c
    FSTSW word ptr [EBP + -0x10]        ; 0056bdde
    WAIT                                ; 0056bde2
    MOV AH,byte ptr [EBP + -0xf]        ; 0056bde3
    SAHF                                ; 0056bde6
    JBE 0x0056be0a                      ; 0056bde7
        ;   XREF to: 0056be0a (CONDITIONAL_JUMP)  ; LAB_0056be0a
    CMP AL,0x7                          ; 0056bde9
    JZ 0x0056be04                       ; 0056bdeb
        ;   XREF to: 0056be04 (CONDITIONAL_JUMP)  ; LAB_0056be04
    FSTP double ptr [EBP + -0x10]       ; 0056bded
    MOV dword ptr [EBP + -0x8],EAX      ; 0056bdf0
    MOV dword ptr [EBP + -0x4],EDX      ; 0056bdf3
    CALL crt_math.c_handle_math_error_FUN_005707db ; 0056bdf6
        ;   XREF to: 005707db (UNCONDITIONAL_CALL)  ; double crt_math.c_handle_math_error_FUN_005707db()
    PUSH EDX                            ; 0056bdfb
    PUSH EAX                            ; 0056bdfc
    FLD double ptr [ESP]                ; 0056bdfd
    MOV EDX,dword ptr [EBP + -0x4]      ; 0056be00
    WAIT                                ; 0056be03
    MOV AL,0x1                          ; 0056be04
        ;   Label: LAB_0056be04
    MOV ESP,EBP                         ; 0056be06
    POP EBP                             ; 0056be08
    RET                                 ; 0056be09
    FCOM double ptr [0x005c1da4]        ; 0056be0a | DAT_005c1da4
        ;   Label: LAB_0056be0a
    FSTSW word ptr [EBP + -0x10]        ; 0056be10
    WAIT                                ; 0056be14
    MOV AH,byte ptr [EBP + -0xf]        ; 0056be15
    SAHF                                ; 0056be18
    JA 0x0056be1f                       ; 0056be19
        ;   XREF to: 0056be1f (CONDITIONAL_JUMP)  ; LAB_0056be1f
    FLDZ                                ; 0056be1b
    JMP 0x0056be33                      ; 0056be1d
        ;   XREF to: 0056be33 (UNCONDITIONAL_JUMP)  ; LAB_0056be33
    FLDL2E                              ; 0056be1f
        ;   Label: LAB_0056be1f
    FMULP                               ; 0056be21
    FLD ST0                             ; 0056be23
    FRNDINT                             ; 0056be25
    FXCH                                ; 0056be27
    FSUB ST0,ST1                        ; 0056be29
    F2XM1                               ; 0056be2b
    FLD1                                ; 0056be2d
    FADDP                               ; 0056be2f
    FSCALE                              ; 0056be31
    FSTP ST1                            ; 0056be33
        ;   Label: LAB_0056be33
    MOV AL,0x0                          ; 0056be35
    MOV ESP,EBP                         ; 0056be37
    POP EBP                             ; 0056be39
    RET                                 ; 0056be3a

