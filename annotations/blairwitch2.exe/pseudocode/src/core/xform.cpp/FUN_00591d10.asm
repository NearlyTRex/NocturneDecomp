; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_xform_cpp_FUN_00591d10(float param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005eecde
;   undefined4 DAT_005eece2
;   undefined4 DAT_005eece6
;   undefined4 DAT_005eecea
;   undefined4 DAT_005eecee
;   undefined4 DAT_005eecf2
;   undefined4 DAT_005eecf6
;
; Called Functions:
;   crt_math.c_acos_FUN_005b9924
;   crt_math.c_asin_FUN_005b98f6
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00591d10
        ;   Label: core_xform.cpp_FUN_00591d10
    FLD float ptr [ESP + 0x8]           ; 00591d13
    FCOMP float ptr [0x005eecde]        ; 00591d17 | DAT_005eecde
    FNSTSW AX                           ; 00591d1d
    SAHF                                ; 00591d1f
    JNC 0x00591d85                      ; 00591d20
        ;   XREF to: 00591d85 (CONDITIONAL_JUMP)  ; LAB_00591d85
    FLD float ptr [ESP + 0x8]           ; 00591d22
    FCOMP float ptr [0x005eece2]        ; 00591d26 | DAT_005eece2
    FNSTSW AX                           ; 00591d2c
    SAHF                                ; 00591d2e
    JBE 0x00591d85                      ; 00591d2f
        ;   XREF to: 00591d85 (CONDITIONAL_JUMP)  ; LAB_00591d85
    FLD float ptr [ESP + 0x8]           ; 00591d31
    CALL crt_math.c_asin_FUN_005b98f6   ; 00591d35
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLDZ                                ; 00591d3a
    FXCH                                ; 00591d3c
    FSTP float ptr [ESP]                ; 00591d3e
    FCOMP float ptr [ESP + 0xc]         ; 00591d41
    FNSTSW AX                           ; 00591d45
    SAHF                                ; 00591d47
    JBE 0x00591d56                      ; 00591d48
        ;   XREF to: 00591d56 (CONDITIONAL_JUMP)  ; LAB_00591d56
    FLD float ptr [0x005eecea]          ; 00591d4a | DAT_005eecea
    FSUB float ptr [ESP]                ; 00591d50
    FSTP float ptr [ESP]                ; 00591d53
    FLD float ptr [ESP]                 ; 00591d56
        ;   Label: LAB_00591d56
    FCOMP float ptr [0x005eecee]        ; 00591d59 | DAT_005eecee
    FNSTSW AX                           ; 00591d5f
    SAHF                                ; 00591d61
    JNC 0x00591d70                      ; 00591d62
        ;   XREF to: 00591d70 (CONDITIONAL_JUMP)  ; LAB_00591d70
    FLD float ptr [ESP]                 ; 00591d64
    FADD float ptr [0x005eecf2]         ; 00591d67 | DAT_005eecf2
    FSTP float ptr [ESP]                ; 00591d6d
    FLD float ptr [ESP]                 ; 00591d70
        ;   Label: LAB_00591d70
    FCOMP float ptr [0x005eecea]        ; 00591d73 | DAT_005eecea
    FNSTSW AX                           ; 00591d79
    SAHF                                ; 00591d7b
    JA 0x00591dcc                       ; 00591d7c
        ;   XREF to: 00591dcc (CONDITIONAL_JUMP)  ; LAB_00591dcc
    MOV EAX,dword ptr [ESP]             ; 00591d7e
    ADD ESP,0x4                         ; 00591d81
    RET                                 ; 00591d84
    FLD float ptr [ESP + 0xc]           ; 00591d85
        ;   Label: LAB_00591d85
    FCOMP float ptr [0x005eece6]        ; 00591d89 | DAT_005eece6
    FNSTSW AX                           ; 00591d8f
    SAHF                                ; 00591d91
    JA 0x00591dad                       ; 00591d92
        ;   XREF to: 00591dad (CONDITIONAL_JUMP)  ; LAB_00591dad
    MOV dword ptr [ESP],0x40490fdb      ; 00591d94
    FLDZ                                ; 00591d9b
        ;   Label: LAB_00591d9b
    FCOMP float ptr [ESP + 0x8]         ; 00591d9d
    FNSTSW AX                           ; 00591da1
    SAHF                                ; 00591da3
    JBE 0x00591d56                      ; 00591da4
        ;   XREF to: 00591d56 (CONDITIONAL_JUMP)  ; LAB_00591d56
    XOR byte ptr [ESP + 0x3],0x80       ; 00591da6
    JMP 0x00591d56                      ; 00591dab
        ;   XREF to: 00591d56 (UNCONDITIONAL_JUMP)  ; LAB_00591d56
    CMP dword ptr [ESP + 0xc],0x3f800000 ; 00591dad
        ;   Label: LAB_00591dad
    JL 0x00591dbe                       ; 00591db5
        ;   XREF to: 00591dbe (CONDITIONAL_JUMP)  ; LAB_00591dbe
    XOR ECX,ECX                         ; 00591db7
    MOV dword ptr [ESP],ECX             ; 00591db9
    JMP 0x00591d9b                      ; 00591dbc
        ;   XREF to: 00591d9b (UNCONDITIONAL_JUMP)  ; LAB_00591d9b
    FLD float ptr [ESP + 0xc]           ; 00591dbe
        ;   Label: LAB_00591dbe
    CALL crt_math.c_acos_FUN_005b9924   ; 00591dc2
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP]                ; 00591dc7
    JMP 0x00591d9b                      ; 00591dca
        ;   XREF to: 00591d9b (UNCONDITIONAL_JUMP)  ; LAB_00591d9b
    FLD float ptr [ESP]                 ; 00591dcc
        ;   Label: LAB_00591dcc
    FADD float ptr [0x005eecf6]         ; 00591dcf | DAT_005eecf6
    FSTP float ptr [ESP]                ; 00591dd5
    MOV EAX,dword ptr [ESP]             ; 00591dd8
    ADD ESP,0x4                         ; 00591ddb
    RET                                 ; 00591dde

