; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005c3c70(void)
;
; Local Variables:
; undefined1[12]   Stack[-0x30]:12  local_30
; undefined1[12]   Stack[-0x24]:12  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005bfc84 at 005bfc97
;
; Referenced Globals:
;   undefined4 DAT_006217dc
;   undefined1* PTR_FUN_006217ec = 005c3dd0
;   undefined4 DAT_00621820
;   undefined4 DAT_00621824
;   undefined4 DAT_00621828
;   undefined4 DAT_00621832
;   undefined4 DAT_0062183c
;   undefined4 DAT_00621846
;   undefined4 DAT_00621850
;   undefined4 DAT_0062185a
;   undefined4 DAT_00621864
;
; Called Functions:
;   FUN_005bf4f3
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c3c70
        ;   Label: FUN_005c3c70
    PUSH ECX                            ; 005c3c71
    PUSH EDX                            ; 005c3c72
    SUB ESP,0x24                        ; 005c3c73
    FSTP extended double ptr [ESP + 0xc] ; 005c3c76
    FSTP extended double ptr [ESP]      ; 005c3c7a
    MOV ECX,dword ptr [ESP + 0x4]       ; 005c3c7d
    ADD ECX,ECX                         ; 005c3c81
    JNC 0x005c3e60                      ; 005c3c83
        ;   XREF to: 005c3e60 (CONDITIONAL_JUMP)  ; LAB_005c3e60
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c3c89
    ADD EAX,EAX                         ; 005c3c8d
    JNC 0x005c3e60                      ; 005c3c8f
        ;   XREF to: 005c3e60 (CONDITIONAL_JUMP)  ; LAB_005c3e60
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c3c95
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c3c99
    AND ECX,0x7fff                      ; 005c3c9d
    JZ 0x005c3e60                       ; 005c3ca3
        ;   XREF to: 005c3e60 (CONDITIONAL_JUMP)  ; LAB_005c3e60
    AND EAX,0x7fff                      ; 005c3ca9
    JZ 0x005c3e60                       ; 005c3cae
        ;   XREF to: 005c3e60 (CONDITIONAL_JUMP)  ; LAB_005c3e60
    CMP ECX,0x7fff                      ; 005c3cb4
    JZ 0x005c3e60                       ; 005c3cba
        ;   XREF to: 005c3e60 (CONDITIONAL_JUMP)  ; LAB_005c3e60
    CMP EAX,0x7fff                      ; 005c3cc0
    JZ 0x005c3e60                       ; 005c3cc5
        ;   XREF to: 005c3e60 (CONDITIONAL_JUMP)  ; LAB_005c3e60
    FLD extended double ptr [ESP + 0xc] ; 005c3ccb
    FABS                                ; 005c3ccf
    FLD extended double ptr [ESP]       ; 005c3cd1
    FABS                                ; 005c3cd4
    FNSTCW word ptr [ESP + 0x18]        ; 005c3cd6
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c3cda
    OR EDX,0x33f                        ; 005c3cde
    AND EDX,0xf3ff                      ; 005c3ce4
    MOV dword ptr [ESP + 0x1c],EDX      ; 005c3cea
    FLDCW word ptr [ESP + 0x1c]         ; 005c3cee
    XOR EDX,EDX                         ; 005c3cf2
    FCOM                                ; 005c3cf4
    PUSH EAX                            ; 005c3cf6
    FNSTSW AX                           ; 005c3cf7
    SAHF                                ; 005c3cf9
    POP EAX                             ; 005c3cfa
    JC 0x005c3d00                       ; 005c3cfb
        ;   XREF to: 005c3d00 (CONDITIONAL_JUMP)  ; LAB_005c3d00
    FXCH                                ; 005c3cfd
    INC EDX                             ; 005c3cff
    PUSH EAX                            ; 005c3d00
        ;   Label: LAB_005c3d00
    MOV EAX,0xf                         ; 005c3d01
    CALL FUN_005bf4f3                   ; 005c3d06
        ;   XREF to: 005bf4f3 (UNCONDITIONAL_CALL)  ; undefined FUN_005bf4f3()
    POP EAX                             ; 005c3d0b
    FLD float ptr [0x00621820]          ; 005c3d0c | DAT_00621820
    FMUL ST1                            ; 005c3d12
    FISTP dword ptr [ESP + 0x20]        ; 005c3d14
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c3d18
    SHL ECX,0x4                         ; 005c3d1c
    FILD dword ptr [ESP + 0x20]         ; 005c3d1f
    FMUL float ptr [0x00621824]         ; 005c3d23 | DAT_00621824
    FLD ST1                             ; 005c3d29
    FSUB ST0,ST1                        ; 005c3d2b
    FXCH                                ; 005c3d2d
    FMULP ST2                           ; 005c3d2f
    FLD double ptr [0x006217dc]         ; 005c3d31 | DAT_006217dc
    FADDP ST2,ST0                       ; 005c3d37
    PUSH EAX                            ; 005c3d39
    MOV EAX,0xf                         ; 005c3d3a
    CALL FUN_005bf4f3                   ; 005c3d3f
        ;   XREF to: 005bf4f3 (UNCONDITIONAL_CALL)  ; undefined FUN_005bf4f3()
    POP EAX                             ; 005c3d44
    FLD ST0                             ; 005c3d45
    FMUL ST1                            ; 005c3d47
    FLD ST0                             ; 005c3d49
    FMUL ST1                            ; 005c3d4b
    FLD ST0                             ; 005c3d4d
    FMUL ST1                            ; 005c3d4f
    FLD extended double ptr [0x0062185a] ; 005c3d51 | DAT_0062185a
    FLD extended double ptr [0x00621850] ; 005c3d57 | DAT_00621850
    FXCH                                ; 005c3d5d
    FMUL ST2                            ; 005c3d5f
    FLD extended double ptr [0x00621846] ; 005c3d61 | DAT_00621846
    FXCH ST2                            ; 005c3d67
    FMUL ST3                            ; 005c3d69
    FLD extended double ptr [0x0062183c] ; 005c3d6b | DAT_0062183c
    FXCH ST2                            ; 005c3d71
    FMUL ST5                            ; 005c3d73
    FXCH ST3                            ; 005c3d75
    FMULP ST4                           ; 005c3d77
    FLD extended double ptr [0x00621832] ; 005c3d79 | DAT_00621832
    FXCH ST3                            ; 005c3d7f
    FADDP ST4,ST0                       ; 005c3d81
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c3d83
    FLD extended double ptr [0x00621828] ; 005c3d87 | DAT_00621828
    FXCH                                ; 005c3d8d
    SHL EAX,0x10                        ; 005c3d8f
    FMUL ST6                            ; 005c3d92
    FXCH ST2                            ; 005c3d94
    ADD EAX,EAX                         ; 005c3d96
    FMUL ST5                            ; 005c3d98
    FXCH ST3                            ; 005c3d9a
    ADC EDX,EDX                         ; 005c3d9c
    FMULP ST5                           ; 005c3d9e
    FXCH ST2                            ; 005c3da0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c3da2
    FMUL ST5                            ; 005c3da6
    FXCH ST2                            ; 005c3da8
    SHL EAX,0x10                        ; 005c3daa
    FMULP ST5                           ; 005c3dad
    FXCH ST2                            ; 005c3daf
    FADDP ST3,ST0                       ; 005c3db1
    ADD EAX,EAX                         ; 005c3db3
    FADDP                               ; 005c3db5
    ADC EDX,EDX                         ; 005c3db7
    FADDP ST2,ST0                       ; 005c3db9
    FADDP                               ; 005c3dbb
    FMUL ST1                            ; 005c3dbd
    FADDP                               ; 005c3dbf
    FLD extended double ptr [ECX + 0x621864] ; 005c3dc1 | DAT_00621864
    FADDP                               ; 005c3dc7
    JMP dword ptr [EDX*0x4 + 0x6217ec]  ; 005c3dc9 | PTR_FUN_006217ec
    FLD extended double ptr [ESP]       ; 005c3e60
        ;   Label: LAB_005c3e60
    FLD extended double ptr [ESP + 0xc] ; 005c3e63
    FPATAN                              ; 005c3e67
    ADD ESP,0x24                        ; 005c3e69
    POP EDX                             ; 005c3e6c
    POP ECX                             ; 005c3e6d
    POP EAX                             ; 005c3e6e
    RET                                 ; 005c3e6f

