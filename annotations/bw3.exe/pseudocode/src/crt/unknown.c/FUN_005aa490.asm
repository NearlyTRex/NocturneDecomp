; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005aa490(void)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_005a4764 at 005a4882
;
; Referenced Globals:
;   undefined4 DAT_00607b60
;   undefined4 DAT_00607b68
;
; Called Functions:
;   unkafter_asgaya.cpp_FUN_005aed4b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aa490
        ;   Label: crt_unknown.c_FUN_005aa490
    MOV EBP,ESP                         ; 005aa491
    SUB ESP,0x10                        ; 005aa493
    FCOM double ptr [0x00607b60]        ; 005aa496 | DAT_00607b60
    FSTSW word ptr [EBP + -0x10]        ; 005aa49c
    WAIT                                ; 005aa4a0
    MOV AH,byte ptr [EBP + -0xf]        ; 005aa4a1
    SAHF                                ; 005aa4a4
    JBE 0x005aa4c8                      ; 005aa4a5
        ;   XREF to: 005aa4c8 (CONDITIONAL_JUMP)  ; LAB_005aa4c8
    CMP AL,0x7                          ; 005aa4a7
    JZ 0x005aa4c2                       ; 005aa4a9
        ;   XREF to: 005aa4c2 (CONDITIONAL_JUMP)  ; LAB_005aa4c2
    FSTP double ptr [EBP + -0x10]       ; 005aa4ab
    MOV dword ptr [EBP + -0x8],EAX      ; 005aa4ae
    MOV dword ptr [EBP + -0x4],EDX      ; 005aa4b1
    CALL unkafter_asgaya.cpp_FUN_005aed4b ; 005aa4b4
        ;   XREF to: 005aed4b (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005aed4b()
    PUSH EDX                            ; 005aa4b9
    PUSH EAX                            ; 005aa4ba
    FLD double ptr [ESP]                ; 005aa4bb
    MOV EDX,dword ptr [EBP + -0x4]      ; 005aa4be
    WAIT                                ; 005aa4c1
    MOV AL,0x1                          ; 005aa4c2
        ;   Label: LAB_005aa4c2
    MOV ESP,EBP                         ; 005aa4c4
    POP EBP                             ; 005aa4c6
    RET                                 ; 005aa4c7
    FCOM double ptr [0x00607b68]        ; 005aa4c8 | DAT_00607b68
        ;   Label: LAB_005aa4c8
    FSTSW word ptr [EBP + -0x10]        ; 005aa4ce
    WAIT                                ; 005aa4d2
    MOV AH,byte ptr [EBP + -0xf]        ; 005aa4d3
    SAHF                                ; 005aa4d6
    JA 0x005aa4dd                       ; 005aa4d7
        ;   XREF to: 005aa4dd (CONDITIONAL_JUMP)  ; LAB_005aa4dd
    FLDZ                                ; 005aa4d9
    JMP 0x005aa4f1                      ; 005aa4db
        ;   XREF to: 005aa4f1 (UNCONDITIONAL_JUMP)  ; LAB_005aa4f1
    FLDL2E                              ; 005aa4dd
        ;   Label: LAB_005aa4dd
    FMULP                               ; 005aa4df
    FLD ST0                             ; 005aa4e1
    FRNDINT                             ; 005aa4e3
    FXCH                                ; 005aa4e5
    FSUB ST0,ST1                        ; 005aa4e7
    F2XM1                               ; 005aa4e9
    FLD1                                ; 005aa4eb
    FADDP                               ; 005aa4ed
    FSCALE                              ; 005aa4ef
    FSTP ST1                            ; 005aa4f1
        ;   Label: LAB_005aa4f1
    MOV AL,0x0                          ; 005aa4f3
    MOV ESP,EBP                         ; 005aa4f5
    POP EBP                             ; 005aa4f7
    RET                                 ; 005aa4f8

