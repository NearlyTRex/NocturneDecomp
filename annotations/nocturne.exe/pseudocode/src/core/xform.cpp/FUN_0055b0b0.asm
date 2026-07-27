; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_xform_cpp_FUN_0055b0b0(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_0059825e
;   undefined4 DAT_00598266
;   undefined4 DAT_0059826e
;   undefined4 DAT_00598276
;   undefined4 DAT_0059827e
;   undefined4 DAT_00598286
;   undefined4 DAT_0059828a
;
; Called Functions:
;   crt_math.c_acos_FUN_00565ca4
;   crt_math.c_asin_FUN_00565c76
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055b0b0
        ;   Label: core_xform.cpp_FUN_0055b0b0
    MOV EBP,ESP                         ; 0055b0b1
    SUB ESP,0x4                         ; 0055b0b3
    AND ESP,0xfffffff8                  ; 0055b0b6
    FLD double ptr [EBP + 0x8]          ; 0055b0b9
    FCOMP double ptr [0x0059825e]       ; 0055b0bc | DAT_0059825e
    FNSTSW AX                           ; 0055b0c2
    SAHF                                ; 0055b0c4
    JNC 0x0055b127                      ; 0055b0c5
        ;   XREF to: 0055b127 (CONDITIONAL_JUMP)  ; LAB_0055b127
    FLD double ptr [EBP + 0x8]          ; 0055b0c7
    FCOMP double ptr [0x00598266]       ; 0055b0ca | DAT_00598266
    FNSTSW AX                           ; 0055b0d0
    SAHF                                ; 0055b0d2
    JBE 0x0055b127                      ; 0055b0d3
        ;   XREF to: 0055b127 (CONDITIONAL_JUMP)  ; LAB_0055b127
    FLD double ptr [EBP + 0x8]          ; 0055b0d5
    CALL crt_math.c_asin_FUN_00565c76   ; 0055b0d8
        ;   XREF to: 00565c76 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_00565c76()
    FLDZ                                ; 0055b0dd
    FXCH                                ; 0055b0df
    FSTP float ptr [ESP]                ; 0055b0e1
    FCOMP double ptr [EBP + 0x10]       ; 0055b0e4
    FNSTSW AX                           ; 0055b0e7
    SAHF                                ; 0055b0e9
    JBE 0x0055b0f8                      ; 0055b0ea
        ;   XREF to: 0055b0f8 (CONDITIONAL_JUMP)  ; LAB_0055b0f8
    FLD float ptr [ESP]                 ; 0055b0ec
    FSUBR double ptr [0x00598276]       ; 0055b0ef | DAT_00598276
    FSTP float ptr [ESP]                ; 0055b0f5
    FLD float ptr [ESP]                 ; 0055b0f8
        ;   Label: LAB_0055b0f8
    FCOMP double ptr [0x0059827e]       ; 0055b0fb | DAT_0059827e
    FNSTSW AX                           ; 0055b101
    SAHF                                ; 0055b103
    JNC 0x0055b112                      ; 0055b104
        ;   XREF to: 0055b112 (CONDITIONAL_JUMP)  ; LAB_0055b112
    FLD float ptr [ESP]                 ; 0055b106
    FADD float ptr [0x00598286]         ; 0055b109 | DAT_00598286
    FSTP float ptr [ESP]                ; 0055b10f
    FLD float ptr [ESP]                 ; 0055b112
        ;   Label: LAB_0055b112
    FCOMP double ptr [0x00598276]       ; 0055b115 | DAT_00598276
    FNSTSW AX                           ; 0055b11b
    SAHF                                ; 0055b11d
    JA 0x0055b16b                       ; 0055b11e
        ;   XREF to: 0055b16b (CONDITIONAL_JUMP)  ; LAB_0055b16b
    MOV EAX,dword ptr [ESP]             ; 0055b120
    MOV ESP,EBP                         ; 0055b123
    POP EBP                             ; 0055b125
    RET                                 ; 0055b126
    FLD double ptr [EBP + 0x10]         ; 0055b127
        ;   Label: LAB_0055b127
    FCOMP double ptr [0x0059826e]       ; 0055b12a | DAT_0059826e
    FNSTSW AX                           ; 0055b130
    SAHF                                ; 0055b132
    JA 0x0055b14d                       ; 0055b133
        ;   XREF to: 0055b14d (CONDITIONAL_JUMP)  ; LAB_0055b14d
    MOV dword ptr [ESP],0x40490fdb      ; 0055b135
    FLDZ                                ; 0055b13c
        ;   Label: LAB_0055b13c
    FCOMP double ptr [EBP + 0x8]        ; 0055b13e
    FNSTSW AX                           ; 0055b141
    SAHF                                ; 0055b143
    JBE 0x0055b0f8                      ; 0055b144
        ;   XREF to: 0055b0f8 (CONDITIONAL_JUMP)  ; LAB_0055b0f8
    XOR byte ptr [ESP + 0x3],0x80       ; 0055b146
    JMP 0x0055b0f8                      ; 0055b14b
        ;   XREF to: 0055b0f8 (UNCONDITIONAL_JUMP)  ; LAB_0055b0f8
    FLD1                                ; 0055b14d
        ;   Label: LAB_0055b14d
    FCOMP double ptr [EBP + 0x10]       ; 0055b14f
    FNSTSW AX                           ; 0055b152
    SAHF                                ; 0055b154
    JA 0x0055b15e                       ; 0055b155
        ;   XREF to: 0055b15e (CONDITIONAL_JUMP)  ; LAB_0055b15e
    XOR EDX,EDX                         ; 0055b157
    MOV dword ptr [ESP],EDX             ; 0055b159
    JMP 0x0055b13c                      ; 0055b15c
        ;   XREF to: 0055b13c (UNCONDITIONAL_JUMP)  ; LAB_0055b13c
    FLD double ptr [EBP + 0x10]         ; 0055b15e
        ;   Label: LAB_0055b15e
    CALL crt_math.c_acos_FUN_00565ca4   ; 0055b161
        ;   XREF to: 00565ca4 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_00565ca4()
    FSTP float ptr [ESP]                ; 0055b166
    JMP 0x0055b13c                      ; 0055b169
        ;   XREF to: 0055b13c (UNCONDITIONAL_JUMP)  ; LAB_0055b13c
    FLD float ptr [ESP]                 ; 0055b16b
        ;   Label: LAB_0055b16b
    FADD float ptr [0x0059828a]         ; 0055b16e | DAT_0059828a
    FSTP float ptr [ESP]                ; 0055b174
    MOV EAX,dword ptr [ESP]             ; 0055b177
    MOV ESP,EBP                         ; 0055b17a
    POP EBP                             ; 0055b17c
    RET                                 ; 0055b17d

