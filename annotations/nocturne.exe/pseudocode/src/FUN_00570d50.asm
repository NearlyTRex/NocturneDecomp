; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00570d50(void)
;
; Local Variables:
; undefined1[12]   Stack[-0x30]:12  local_30
; undefined1[12]   Stack[-0x24]:12  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_math.c_atan2_FUN_0056dc98 at 0056dcab
;
; Referenced Globals:
;   undefined4 DAT_005c4084
;   undefined1* PTR_FUN_005c4094 = 00570eb0
;   undefined4 DAT_005c40c8
;   undefined4 DAT_005c40cc
;   undefined4 DAT_005c40d0
;   undefined4 DAT_005c40da
;   undefined4 DAT_005c40e4
;   undefined4 DAT_005c40ee
;   undefined4 DAT_005c40f8
;   undefined4 DAT_005c4102
;   undefined4 DAT_005c410c
;
; Called Functions:
;   crt_math.c_function_dispatch_FUN_0056bf67
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 00570d50
        ;   Label: FUN_00570d50
    PUSH ECX                            ; 00570d51
    PUSH EDX                            ; 00570d52
    SUB ESP,0x24                        ; 00570d53
    FSTP extended double ptr [ESP + 0xc] ; 00570d56
    FSTP extended double ptr [ESP]      ; 00570d5a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00570d5d
    ADD ECX,ECX                         ; 00570d61
    JNC 0x00570f40                      ; 00570d63
        ;   XREF to: 00570f40 (CONDITIONAL_JUMP)  ; LAB_00570f40
    MOV EAX,dword ptr [ESP + 0x10]      ; 00570d69
    ADD EAX,EAX                         ; 00570d6d
    JNC 0x00570f40                      ; 00570d6f
        ;   XREF to: 00570f40 (CONDITIONAL_JUMP)  ; LAB_00570f40
    MOV ECX,dword ptr [ESP + 0x8]       ; 00570d75
    MOV EAX,dword ptr [ESP + 0x14]      ; 00570d79
    AND ECX,0x7fff                      ; 00570d7d
    JZ 0x00570f40                       ; 00570d83
        ;   XREF to: 00570f40 (CONDITIONAL_JUMP)  ; LAB_00570f40
    AND EAX,0x7fff                      ; 00570d89
    JZ 0x00570f40                       ; 00570d8e
        ;   XREF to: 00570f40 (CONDITIONAL_JUMP)  ; LAB_00570f40
    CMP ECX,0x7fff                      ; 00570d94
    JZ 0x00570f40                       ; 00570d9a
        ;   XREF to: 00570f40 (CONDITIONAL_JUMP)  ; LAB_00570f40
    CMP EAX,0x7fff                      ; 00570da0
    JZ 0x00570f40                       ; 00570da5
        ;   XREF to: 00570f40 (CONDITIONAL_JUMP)  ; LAB_00570f40
    FLD extended double ptr [ESP + 0xc] ; 00570dab
    FABS                                ; 00570daf
    FLD extended double ptr [ESP]       ; 00570db1
    FABS                                ; 00570db4
    FNSTCW word ptr [ESP + 0x18]        ; 00570db6
    MOV EDX,dword ptr [ESP + 0x18]      ; 00570dba
    OR EDX,0x33f                        ; 00570dbe
    AND EDX,0xf3ff                      ; 00570dc4
    MOV dword ptr [ESP + 0x1c],EDX      ; 00570dca
    FLDCW word ptr [ESP + 0x1c]         ; 00570dce
    XOR EDX,EDX                         ; 00570dd2
    FCOM                                ; 00570dd4
    PUSH EAX                            ; 00570dd6
    FNSTSW AX                           ; 00570dd7
    SAHF                                ; 00570dd9
    POP EAX                             ; 00570dda
    JC 0x00570de0                       ; 00570ddb
        ;   XREF to: 00570de0 (CONDITIONAL_JUMP)  ; LAB_00570de0
    FXCH                                ; 00570ddd
    INC EDX                             ; 00570ddf
    PUSH EAX                            ; 00570de0
        ;   Label: LAB_00570de0
    MOV EAX,0xf                         ; 00570de1
    CALL crt_math.c_function_dispatch_FUN_0056bf67 ; 00570de6
        ;   XREF to: 0056bf67 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_function_dispatch_FUN_0056bf67(int function_index)
    POP EAX                             ; 00570deb
    FLD float ptr [0x005c40c8]          ; 00570dec | DAT_005c40c8
    FMUL ST1                            ; 00570df2
    FISTP dword ptr [ESP + 0x20]        ; 00570df4
    MOV ECX,dword ptr [ESP + 0x20]      ; 00570df8
    SHL ECX,0x4                         ; 00570dfc
    FILD dword ptr [ESP + 0x20]         ; 00570dff
    FMUL float ptr [0x005c40cc]         ; 00570e03 | DAT_005c40cc
    FLD ST1                             ; 00570e09
    FSUB ST0,ST1                        ; 00570e0b
    FXCH                                ; 00570e0d
    FMULP ST2                           ; 00570e0f
    FLD double ptr [0x005c4084]         ; 00570e11 | DAT_005c4084
    FADDP ST2,ST0                       ; 00570e17
    PUSH EAX                            ; 00570e19
    MOV EAX,0xf                         ; 00570e1a
    CALL crt_math.c_function_dispatch_FUN_0056bf67 ; 00570e1f
        ;   XREF to: 0056bf67 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_function_dispatch_FUN_0056bf67(int function_index)
    POP EAX                             ; 00570e24
    FLD ST0                             ; 00570e25
    FMUL ST1                            ; 00570e27
    FLD ST0                             ; 00570e29
    FMUL ST1                            ; 00570e2b
    FLD ST0                             ; 00570e2d
    FMUL ST1                            ; 00570e2f
    FLD extended double ptr [0x005c4102] ; 00570e31 | DAT_005c4102
    FLD extended double ptr [0x005c40f8] ; 00570e37 | DAT_005c40f8
    FXCH                                ; 00570e3d
    FMUL ST2                            ; 00570e3f
    FLD extended double ptr [0x005c40ee] ; 00570e41 | DAT_005c40ee
    FXCH ST2                            ; 00570e47
    FMUL ST3                            ; 00570e49
    FLD extended double ptr [0x005c40e4] ; 00570e4b | DAT_005c40e4
    FXCH ST2                            ; 00570e51
    FMUL ST5                            ; 00570e53
    FXCH ST3                            ; 00570e55
    FMULP ST4                           ; 00570e57
    FLD extended double ptr [0x005c40da] ; 00570e59 | DAT_005c40da
    FXCH ST3                            ; 00570e5f
    FADDP ST4,ST0                       ; 00570e61
    MOV EAX,dword ptr [ESP + 0x14]      ; 00570e63
    FLD extended double ptr [0x005c40d0] ; 00570e67 | DAT_005c40d0
    FXCH                                ; 00570e6d
    SHL EAX,0x10                        ; 00570e6f
    FMUL ST6                            ; 00570e72
    FXCH ST2                            ; 00570e74
    ADD EAX,EAX                         ; 00570e76
    FMUL ST5                            ; 00570e78
    FXCH ST3                            ; 00570e7a
    ADC EDX,EDX                         ; 00570e7c
    FMULP ST5                           ; 00570e7e
    FXCH ST2                            ; 00570e80
    MOV EAX,dword ptr [ESP + 0x8]       ; 00570e82
    FMUL ST5                            ; 00570e86
    FXCH ST2                            ; 00570e88
    SHL EAX,0x10                        ; 00570e8a
    FMULP ST5                           ; 00570e8d
    FXCH ST2                            ; 00570e8f
    FADDP ST3,ST0                       ; 00570e91
    ADD EAX,EAX                         ; 00570e93
    FADDP                               ; 00570e95
    ADC EDX,EDX                         ; 00570e97
    FADDP ST2,ST0                       ; 00570e99
    FADDP                               ; 00570e9b
    FMUL ST1                            ; 00570e9d
    FADDP                               ; 00570e9f
    FLD extended double ptr [ECX + 0x5c410c] ; 00570ea1 | DAT_005c410c
    FADDP                               ; 00570ea7
    JMP dword ptr [EDX*0x4 + 0x5c4094]  ; 00570ea9 | PTR_FUN_005c4094
    FLD extended double ptr [ESP]       ; 00570f40
        ;   Label: LAB_00570f40
    FLD extended double ptr [ESP + 0xc] ; 00570f43
    FPATAN                              ; 00570f47
    ADD ESP,0x24                        ; 00570f49
    POP EDX                             ; 00570f4c
    POP ECX                             ; 00570f4d
    POP EAX                             ; 00570f4e
    RET                                 ; 00570f4f

