; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_prye_cpp_FUN_0052294e(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005cd69f
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   crt_math.c_acos_FUN_005a4b74
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0052294e
        ;   Label: core_prye.cpp_FUN_0052294e
    PUSH EBX                            ; 00522950
    PUSH EDI                            ; 00522951
    PUSH EBP                            ; 00522952
    MOV EBP,ESP                         ; 00522953
    SUB ESP,0x58                        ; 00522955
    AND ESP,0xfffffff8                  ; 00522958
    MOV EBX,dword ptr [EBP + 0x10]      ; 0052295b
    MOV dword ptr [ESP + 0x40],ESI      ; 0052295e
    PUSH EBX                            ; 00522962
    LEA ESI,[ESP + 0x2c]                ; 00522963
    LEA EDI,[ESP + 0x38]                ; 00522967
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0052296b
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x2c]                ; 00522970
    ADD ESP,0x4                         ; 00522974
    MOVSD ES:EDI,ESI                    ; 00522977
    MOVSD ES:EDI,ESI                    ; 00522978
    MOVSD ES:EDI,ESI                    ; 00522979
    FLD float ptr [EBX + 0x4]           ; 0052297a
    FMUL ST0                            ; 0052297d
    FLD float ptr [EBX]                 ; 0052297f
    FMUL ST0                            ; 00522981
    FADDP                               ; 00522983
    FLD float ptr [EBX + 0x8]           ; 00522985
    FMUL ST0                            ; 00522988
    FADDP                               ; 0052298a
    FSQRT                               ; 0052298c
    FST float ptr [ESP + 0x24]          ; 0052298e
    MOV EBX,dword ptr [ESP + 0x24]      ; 00522992
    FST double ptr [ESP + 0x18]         ; 00522996
    MOV dword ptr [ESP + 0x20],EBX      ; 0052299a
    FCOMP double ptr [0x005cd69f]       ; 0052299e | DAT_005cd69f
    FNSTSW AX                           ; 005229a4
    SAHF                                ; 005229a6
    JBE 0x00522a4e                      ; 005229a7
        ;   XREF to: 00522a4e (CONDITIONAL_JUMP)  ; LAB_00522a4e
    MOV EBX,dword ptr [EBP + 0x14]      ; 005229ad
    FLD float ptr [EBX]                 ; 005229b0
    FCHS                                ; 005229b2
    FSTP float ptr [ESP + 0x4c]         ; 005229b4
    JNC 0x00522a63                      ; 005229b8
        ;   XREF to: 00522a63 (CONDITIONAL_JUMP)  ; LAB_00522a63
    FLD float ptr [ESP + 0x20]          ; 005229be
        ;   Label: LAB_005229be
    MOV EBX,dword ptr [EBP + 0x14]      ; 005229c2
    FSTP double ptr [ESP]               ; 005229c5
    MOV EBX,dword ptr [EBX + 0x4]       ; 005229c8
    FLD double ptr [ESP]                ; 005229cb
    MOV dword ptr [ESP + 0x48],EBX      ; 005229ce
    FCOMP double ptr [0x005cd69f]       ; 005229d2 | DAT_005cd69f
    FNSTSW AX                           ; 005229d8
    SAHF                                ; 005229da
    JC 0x00522a4e                       ; 005229db
        ;   XREF to: 00522a4e (CONDITIONAL_JUMP)  ; LAB_00522a4e
    FLD float ptr [ESP + 0x20]          ; 005229dd
    FMUL ST0                            ; 005229e1
    FLD float ptr [ESP + 0x48]          ; 005229e3
    FMUL ST0                            ; 005229e7
    FSUBP                               ; 005229e9
    FSQRT                               ; 005229eb
    FDIV double ptr [ESP]               ; 005229ed
    FLD1                                ; 005229f0
    FXCH                                ; 005229f2
    FSTP double ptr [ESP + 0x8]         ; 005229f4
    FCOMP double ptr [ESP + 0x8]        ; 005229f8
    FNSTSW AX                           ; 005229fc
    SAHF                                ; 005229fe
    JBE 0x00522a4e                      ; 005229ff
        ;   XREF to: 00522a4e (CONDITIONAL_JUMP)  ; LAB_00522a4e
    FLDZ                                ; 00522a01
    FCOMP double ptr [ESP + 0x8]        ; 00522a03
    FNSTSW AX                           ; 00522a07
    SAHF                                ; 00522a09
    JA 0x00522a4e                       ; 00522a0a
        ;   XREF to: 00522a4e (CONDITIONAL_JUMP)  ; LAB_00522a4e
    FLD double ptr [ESP + 0x8]          ; 00522a0c
    CALL crt_math.c_acos_FUN_005a4b74   ; 00522a10
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FLDZ                                ; 00522a15
    FXCH                                ; 00522a17
    FSTP float ptr [ESP + 0x50]         ; 00522a19
    FCOMP float ptr [ESP + 0x48]        ; 00522a1d
    FNSTSW AX                           ; 00522a21
    SAHF                                ; 00522a23
    JBE 0x00522ae8                      ; 00522a24
        ;   XREF to: 00522ae8 (CONDITIONAL_JUMP)  ; LAB_00522ae8
    FLD float ptr [ESP + 0x34]          ; 00522a2a
    FSUB float ptr [ESP + 0x50]         ; 00522a2e
    FSTP float ptr [ESP + 0x34]         ; 00522a32
        ;   Label: LAB_00522a32
    PUSH dword ptr [ESP + 0x34]         ; 00522a36
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00522a3a
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x58],EAX      ; 00522a3f
    FLD float ptr [ESP + 0x58]          ; 00522a43
    ADD ESP,0x4                         ; 00522a47
    FSTP float ptr [ESP + 0x34]         ; 00522a4a
    MOV EDI,dword ptr [ESP + 0x40]      ; 00522a4e
        ;   Label: LAB_00522a4e
    LEA ESI,[ESP + 0x34]                ; 00522a52
    MOVSD ES:EDI,ESI                    ; 00522a56
    MOVSD ES:EDI,ESI                    ; 00522a57
    MOVSD ES:EDI,ESI                    ; 00522a58
    MOV EAX,dword ptr [ESP + 0x40]      ; 00522a59
    MOV ESP,EBP                         ; 00522a5d
    POP EBP                             ; 00522a5f
    POP EDI                             ; 00522a60
    POP EBX                             ; 00522a61
    RET                                 ; 00522a62
    FLD float ptr [ESP + 0x24]          ; 00522a63
        ;   Label: LAB_00522a63
    FMUL ST0                            ; 00522a67
    FLD float ptr [ESP + 0x4c]          ; 00522a69
    FMUL ST0                            ; 00522a6d
    FSUBP                               ; 00522a6f
    FSQRT                               ; 00522a71
    FDIV double ptr [ESP + 0x18]        ; 00522a73
    FLD1                                ; 00522a77
    FXCH                                ; 00522a79
    FSTP double ptr [ESP + 0x10]        ; 00522a7b
    FCOMP double ptr [ESP + 0x10]       ; 00522a7f
    FNSTSW AX                           ; 00522a83
    SAHF                                ; 00522a85
    JBE 0x005229be                      ; 00522a86
        ;   XREF to: 005229be (CONDITIONAL_JUMP)  ; LAB_005229be
    FLDZ                                ; 00522a8c
    FCOMP double ptr [ESP + 0x10]       ; 00522a8e
    FNSTSW AX                           ; 00522a92
    SAHF                                ; 00522a94
    JA 0x005229be                       ; 00522a95
        ;   XREF to: 005229be (CONDITIONAL_JUMP)  ; LAB_005229be
    FLD double ptr [ESP + 0x10]         ; 00522a9b
    CALL crt_math.c_acos_FUN_005a4b74   ; 00522a9f
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FLDZ                                ; 00522aa4
    FXCH                                ; 00522aa6
    FSTP float ptr [ESP + 0x44]         ; 00522aa8
    FCOMP float ptr [ESP + 0x4c]        ; 00522aac
    FNSTSW AX                           ; 00522ab0
    SAHF                                ; 00522ab2
    JBE 0x00522ade                      ; 00522ab3
        ;   XREF to: 00522ade (CONDITIONAL_JUMP)  ; LAB_00522ade
    FLD float ptr [ESP + 0x38]          ; 00522ab5
    FSUB float ptr [ESP + 0x44]         ; 00522ab9
    FSTP float ptr [ESP + 0x38]         ; 00522abd
        ;   Label: LAB_00522abd
    PUSH dword ptr [ESP + 0x38]         ; 00522ac1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00522ac5
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x58],EAX      ; 00522aca
    FLD float ptr [ESP + 0x58]          ; 00522ace
    ADD ESP,0x4                         ; 00522ad2
    FSTP float ptr [ESP + 0x38]         ; 00522ad5
    JMP 0x005229be                      ; 00522ad9
        ;   XREF to: 005229be (UNCONDITIONAL_JUMP)  ; LAB_005229be
    FLD float ptr [ESP + 0x38]          ; 00522ade
        ;   Label: LAB_00522ade
    FADD float ptr [ESP + 0x44]         ; 00522ae2
    JMP 0x00522abd                      ; 00522ae6
        ;   XREF to: 00522abd (UNCONDITIONAL_JUMP)  ; LAB_00522abd
    FLD float ptr [ESP + 0x34]          ; 00522ae8
        ;   Label: LAB_00522ae8
    FADD float ptr [ESP + 0x50]         ; 00522aec
    JMP 0x00522a32                      ; 00522af0
        ;   XREF to: 00522a32 (UNCONDITIONAL_JUMP)  ; LAB_00522a32

