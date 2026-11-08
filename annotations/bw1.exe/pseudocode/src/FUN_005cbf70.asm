; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005cbf70(void)
;
; Local Variables:
; undefined1[12]   Stack[-0x30]:12  local_30
; undefined1[12]   Stack[-0x24]:12  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c7f44 at 005c7f57
;
; Referenced Globals:
;   undefined4 DAT_00628ccc
;   undefined1* PTR_FUN_00628cdc = 005cc0d0
;   undefined4 DAT_00628d10
;   undefined4 DAT_00628d14
;   undefined4 DAT_00628d18
;   undefined4 DAT_00628d22
;   undefined4 DAT_00628d2c
;   undefined4 DAT_00628d36
;   undefined4 DAT_00628d40
;   undefined4 DAT_00628d4a
;   undefined4 DAT_00628d54
;
; Called Functions:
;   FUN_005c77b3
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005cbf70
        ;   Label: FUN_005cbf70
    PUSH ECX                            ; 005cbf71
    PUSH EDX                            ; 005cbf72
    SUB ESP,0x24                        ; 005cbf73
    FSTP extended double ptr [ESP + 0xc] ; 005cbf76
    FSTP extended double ptr [ESP]      ; 005cbf7a
    MOV ECX,dword ptr [ESP + 0x4]       ; 005cbf7d
    ADD ECX,ECX                         ; 005cbf81
    JNC 0x005cc160                      ; 005cbf83
        ;   XREF to: 005cc160 (CONDITIONAL_JUMP)  ; LAB_005cc160
    MOV EAX,dword ptr [ESP + 0x10]      ; 005cbf89
    ADD EAX,EAX                         ; 005cbf8d
    JNC 0x005cc160                      ; 005cbf8f
        ;   XREF to: 005cc160 (CONDITIONAL_JUMP)  ; LAB_005cc160
    MOV ECX,dword ptr [ESP + 0x8]       ; 005cbf95
    MOV EAX,dword ptr [ESP + 0x14]      ; 005cbf99
    AND ECX,0x7fff                      ; 005cbf9d
    JZ 0x005cc160                       ; 005cbfa3
        ;   XREF to: 005cc160 (CONDITIONAL_JUMP)  ; LAB_005cc160
    AND EAX,0x7fff                      ; 005cbfa9
    JZ 0x005cc160                       ; 005cbfae
        ;   XREF to: 005cc160 (CONDITIONAL_JUMP)  ; LAB_005cc160
    CMP ECX,0x7fff                      ; 005cbfb4
    JZ 0x005cc160                       ; 005cbfba
        ;   XREF to: 005cc160 (CONDITIONAL_JUMP)  ; LAB_005cc160
    CMP EAX,0x7fff                      ; 005cbfc0
    JZ 0x005cc160                       ; 005cbfc5
        ;   XREF to: 005cc160 (CONDITIONAL_JUMP)  ; LAB_005cc160
    FLD extended double ptr [ESP + 0xc] ; 005cbfcb
    FABS                                ; 005cbfcf
    FLD extended double ptr [ESP]       ; 005cbfd1
    FABS                                ; 005cbfd4
    FNSTCW word ptr [ESP + 0x18]        ; 005cbfd6
    MOV EDX,dword ptr [ESP + 0x18]      ; 005cbfda
    OR EDX,0x33f                        ; 005cbfde
    AND EDX,0xf3ff                      ; 005cbfe4
    MOV dword ptr [ESP + 0x1c],EDX      ; 005cbfea
    FLDCW word ptr [ESP + 0x1c]         ; 005cbfee
    XOR EDX,EDX                         ; 005cbff2
    FCOM                                ; 005cbff4
    PUSH EAX                            ; 005cbff6
    FNSTSW AX                           ; 005cbff7
    SAHF                                ; 005cbff9
    POP EAX                             ; 005cbffa
    JC 0x005cc000                       ; 005cbffb
        ;   XREF to: 005cc000 (CONDITIONAL_JUMP)  ; LAB_005cc000
    FXCH                                ; 005cbffd
    INC EDX                             ; 005cbfff
    PUSH EAX                            ; 005cc000
        ;   Label: LAB_005cc000
    MOV EAX,0xf                         ; 005cc001
    CALL FUN_005c77b3                   ; 005cc006
        ;   XREF to: 005c77b3 (UNCONDITIONAL_CALL)  ; undefined FUN_005c77b3()
    POP EAX                             ; 005cc00b
    FLD float ptr [0x00628d10]          ; 005cc00c | DAT_00628d10
    FMUL ST1                            ; 005cc012
    FISTP dword ptr [ESP + 0x20]        ; 005cc014
    MOV ECX,dword ptr [ESP + 0x20]      ; 005cc018
    SHL ECX,0x4                         ; 005cc01c
    FILD dword ptr [ESP + 0x20]         ; 005cc01f
    FMUL float ptr [0x00628d14]         ; 005cc023 | DAT_00628d14
    FLD ST1                             ; 005cc029
    FSUB ST0,ST1                        ; 005cc02b
    FXCH                                ; 005cc02d
    FMULP ST2                           ; 005cc02f
    FLD double ptr [0x00628ccc]         ; 005cc031 | DAT_00628ccc
    FADDP ST2,ST0                       ; 005cc037
    PUSH EAX                            ; 005cc039
    MOV EAX,0xf                         ; 005cc03a
    CALL FUN_005c77b3                   ; 005cc03f
        ;   XREF to: 005c77b3 (UNCONDITIONAL_CALL)  ; undefined FUN_005c77b3()
    POP EAX                             ; 005cc044
    FLD ST0                             ; 005cc045
    FMUL ST1                            ; 005cc047
    FLD ST0                             ; 005cc049
    FMUL ST1                            ; 005cc04b
    FLD ST0                             ; 005cc04d
    FMUL ST1                            ; 005cc04f
    FLD extended double ptr [0x00628d4a] ; 005cc051 | DAT_00628d4a
    FLD extended double ptr [0x00628d40] ; 005cc057 | DAT_00628d40
    FXCH                                ; 005cc05d
    FMUL ST2                            ; 005cc05f
    FLD extended double ptr [0x00628d36] ; 005cc061 | DAT_00628d36
    FXCH ST2                            ; 005cc067
    FMUL ST3                            ; 005cc069
    FLD extended double ptr [0x00628d2c] ; 005cc06b | DAT_00628d2c
    FXCH ST2                            ; 005cc071
    FMUL ST5                            ; 005cc073
    FXCH ST3                            ; 005cc075
    FMULP ST4                           ; 005cc077
    FLD extended double ptr [0x00628d22] ; 005cc079 | DAT_00628d22
    FXCH ST3                            ; 005cc07f
    FADDP ST4,ST0                       ; 005cc081
    MOV EAX,dword ptr [ESP + 0x14]      ; 005cc083
    FLD extended double ptr [0x00628d18] ; 005cc087 | DAT_00628d18
    FXCH                                ; 005cc08d
    SHL EAX,0x10                        ; 005cc08f
    FMUL ST6                            ; 005cc092
    FXCH ST2                            ; 005cc094
    ADD EAX,EAX                         ; 005cc096
    FMUL ST5                            ; 005cc098
    FXCH ST3                            ; 005cc09a
    ADC EDX,EDX                         ; 005cc09c
    FMULP ST5                           ; 005cc09e
    FXCH ST2                            ; 005cc0a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cc0a2
    FMUL ST5                            ; 005cc0a6
    FXCH ST2                            ; 005cc0a8
    SHL EAX,0x10                        ; 005cc0aa
    FMULP ST5                           ; 005cc0ad
    FXCH ST2                            ; 005cc0af
    FADDP ST3,ST0                       ; 005cc0b1
    ADD EAX,EAX                         ; 005cc0b3
    FADDP                               ; 005cc0b5
    ADC EDX,EDX                         ; 005cc0b7
    FADDP ST2,ST0                       ; 005cc0b9
    FADDP                               ; 005cc0bb
    FMUL ST1                            ; 005cc0bd
    FADDP                               ; 005cc0bf
    FLD extended double ptr [ECX + 0x628d54] ; 005cc0c1 | DAT_00628d54
    FADDP                               ; 005cc0c7
    JMP dword ptr [EDX*0x4 + 0x628cdc]  ; 005cc0c9 | PTR_FUN_00628cdc
    FLD extended double ptr [ESP]       ; 005cc160
        ;   Label: LAB_005cc160
    FLD extended double ptr [ESP + 0xc] ; 005cc163
    FPATAN                              ; 005cc167
    ADD ESP,0x24                        ; 005cc169
    POP EDX                             ; 005cc16c
    POP ECX                             ; 005cc16d
    POP EAX                             ; 005cc16e
    RET                                 ; 005cc16f

