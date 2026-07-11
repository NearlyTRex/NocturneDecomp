; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_0055bd00(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x98]:8  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   FUN_00427310 at 0042766e
;   FUN_00429010 at 004290f3
;   FUN_00429220 at 004293db
;   FUN_00436580 at 004365d0
;   FUN_004d6650 at 004d6a37
;
; Referenced Globals:
;   string s_..\\core\\xform.cpp_005982fa
;   string s_inverse()_-_Singular_matrix_0059830c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_0055bcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055bd00
        ;   Label: FUN_0055bd00
    PUSH EDI                            ; 0055bd01
    PUSH EBP                            ; 0055bd02
    MOV EBP,ESP                         ; 0055bd03
    SUB ESP,0x8c                        ; 0055bd05
    AND ESP,0xfffffff8                  ; 0055bd0b
    MOV EBX,dword ptr [EBP + 0x10]      ; 0055bd0e
    MOV dword ptr [ESP + 0x88],ESI      ; 0055bd11
    PUSH EBX                            ; 0055bd18
    CALL FUN_0055bcb0                   ; 0055bd19
        ;   XREF to: 0055bcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bcb0()
    MOV dword ptr [ESP + 0x7c],EAX      ; 0055bd1e
    MOV dword ptr [ESP + 0x80],EDX      ; 0055bd22
    FLD double ptr [ESP + 0x7c]         ; 0055bd29
    ADD ESP,0x4                         ; 0055bd2d
    FSTP double ptr [ESP]               ; 0055bd30
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055bd33
    MOV ECX,dword ptr [ESP]             ; 0055bd37
    TEST EDX,0x7fffffff                 ; 0055bd3a
    JNZ 0x0055bd4a                      ; 0055bd40
        ;   XREF to: 0055bd4a (CONDITIONAL_JUMP)  ; LAB_0055bd4a
    TEST ECX,ECX                        ; 0055bd42
    JZ 0x0055bf21                       ; 0055bd44
        ;   XREF to: 0055bf21 (CONDITIONAL_JUMP)  ; LAB_0055bf21
    FLD float ptr [EBX + 0x14]          ; 0055bd4a
        ;   Label: LAB_0055bd4a
    FMUL float ptr [EBX + 0x28]         ; 0055bd4d
    FLD float ptr [EBX + 0x10]          ; 0055bd50
    FMUL float ptr [EBX + 0x28]         ; 0055bd53
    FLD float ptr [EBX + 0x10]          ; 0055bd56
    FMUL float ptr [EBX + 0x24]         ; 0055bd59
    FLD float ptr [EBX + 0x4]           ; 0055bd5c
    FMUL float ptr [EBX + 0x28]         ; 0055bd5f
    FLD float ptr [EBX + 0x8]           ; 0055bd62
    FMUL float ptr [EBX + 0x20]         ; 0055bd65
    FLD float ptr [EBX + 0x18]          ; 0055bd68
    FMUL float ptr [EBX + 0x24]         ; 0055bd6b
    FLD float ptr [EBX + 0x18]          ; 0055bd6e
    FXCH                                ; 0055bd71
    FSUBP ST6,ST0                       ; 0055bd73
    FMUL float ptr [EBX + 0x20]         ; 0055bd75
    FXCH ST5                            ; 0055bd78
    FSTP double ptr [ESP + 0x38]        ; 0055bd7a
    FLD float ptr [EBX + 0x4]           ; 0055bd7e
    FMUL float ptr [EBX + 0x20]         ; 0055bd81
    FXCH ST5                            ; 0055bd84
    FSUBP ST4,ST0                       ; 0055bd86
    FLD1                                ; 0055bd88
    FXCH ST4                            ; 0055bd8a
    FCHS                                ; 0055bd8c
    FSTP double ptr [ESP + 0x70]        ; 0055bd8e
    FLD float ptr [EBX + 0x14]          ; 0055bd92
    FMUL float ptr [EBX + 0x20]         ; 0055bd95
    FXCH ST4                            ; 0055bd98
    FDIV double ptr [ESP]               ; 0055bd9a
    FLD float ptr [EBX + 0x4]           ; 0055bd9d
    FMUL float ptr [EBX + 0x18]         ; 0055bda0
    FXCH ST5                            ; 0055bda3
    FSUBP ST4,ST0                       ; 0055bda5
    FXCH ST3                            ; 0055bda7
    FSTP double ptr [ESP + 0x50]        ; 0055bda9
    FLD float ptr [EBX + 0x8]           ; 0055bdad
    FMUL float ptr [EBX + 0x24]         ; 0055bdb0
    FLD float ptr [EBX + 0x8]           ; 0055bdb3
    FXCH                                ; 0055bdb6
    FSUBP ST3,ST0                       ; 0055bdb8
    FMUL float ptr [EBX + 0x10]         ; 0055bdba
    FXCH ST2                            ; 0055bdbd
    FCHS                                ; 0055bdbf
    FSTP double ptr [ESP + 0x40]        ; 0055bdc1
    FLD float ptr [EBX]                 ; 0055bdc5
    FMUL float ptr [EBX + 0x28]         ; 0055bdc7
    FLD float ptr [EBX + 0x4]           ; 0055bdca
    FMUL float ptr [EBX + 0x10]         ; 0055bdcd
    FXCH                                ; 0055bdd0
    FSUBRP ST2,ST0                      ; 0055bdd2
    FXCH                                ; 0055bdd4
    FSTP double ptr [ESP + 0x48]        ; 0055bdd6
    FLD float ptr [EBX]                 ; 0055bdda
    FMUL float ptr [EBX + 0x24]         ; 0055bddc
    FLD float ptr [EBX + 0x8]           ; 0055bddf
    FXCH                                ; 0055bde2
    FSUBRP ST6,ST0                      ; 0055bde4
    FMUL float ptr [EBX + 0x14]         ; 0055bde6
    FXCH ST5                            ; 0055bde9
    FCHS                                ; 0055bdeb
    FSTP double ptr [ESP + 0x80]        ; 0055bded
    FLD float ptr [EBX]                 ; 0055bdf4
    FMUL float ptr [EBX + 0x18]         ; 0055bdf6
    FLD float ptr [EBX]                 ; 0055bdf9
    FMUL float ptr [EBX + 0x14]         ; 0055bdfb
    FXCH ST6                            ; 0055bdfe
    FSUBP ST5,ST0                       ; 0055be00
    FLD double ptr [ESP + 0x38]         ; 0055be02
    FXCH ST4                            ; 0055be06
    FSTP double ptr [ESP]               ; 0055be08
    FXCH ST3                            ; 0055be0b
    FMUL double ptr [ESP]               ; 0055be0d
    FXCH ST3                            ; 0055be10
    FSUBRP ST2,ST0                      ; 0055be12
    FLD double ptr [ESP + 0x40]         ; 0055be14
    FMUL double ptr [ESP]               ; 0055be18
    FXCH ST2                            ; 0055be1b
    FCHS                                ; 0055be1d
    FXCH ST4                            ; 0055be1f
    FMUL double ptr [ESP]               ; 0055be21
    FLD double ptr [ESP + 0x70]         ; 0055be24
    FMUL double ptr [ESP]               ; 0055be28
    FXCH ST6                            ; 0055be2b
    FSUBRP ST2,ST0                      ; 0055be2d
    FXCH                                ; 0055be2f
    FSTP double ptr [ESP + 0x68]        ; 0055be31
    FLD double ptr [ESP + 0x48]         ; 0055be35
    FMUL double ptr [ESP]               ; 0055be39
    FXCH ST4                            ; 0055be3c
    FMUL double ptr [ESP]               ; 0055be3e
    FLD double ptr [ESP + 0x50]         ; 0055be41
    FMUL double ptr [ESP]               ; 0055be45
    FXCH ST4                            ; 0055be48
    FSTP float ptr [ESP + 0x8]          ; 0055be4a
    FLD double ptr [ESP + 0x80]         ; 0055be4e
    FMUL double ptr [ESP]               ; 0055be55
    FXCH ST3                            ; 0055be58
    FSTP float ptr [ESP + 0xc]          ; 0055be5a
    FLD double ptr [ESP + 0x68]         ; 0055be5e
    FMUL double ptr [ESP]               ; 0055be62
    FXCH ST2                            ; 0055be65
    FSTP float ptr [ESP + 0x10]         ; 0055be67
    FLD float ptr [EBX + 0x1c]          ; 0055be6b
    FMUL float ptr [ESP + 0xc]          ; 0055be6e
    FXCH ST6                            ; 0055be72
    FSTP float ptr [ESP + 0x18]         ; 0055be74
    FLD float ptr [EBX + 0xc]           ; 0055be78
    FMUL float ptr [ESP + 0x18]         ; 0055be7b
    FXCH ST5                            ; 0055be7f
    FSTP float ptr [ESP + 0x1c]         ; 0055be81
    FLD float ptr [EBX + 0xc]           ; 0055be85
    FXCH ST4                            ; 0055be88
    FSTP float ptr [ESP + 0x28]         ; 0055be8a
    FXCH ST3                            ; 0055be8e
    FMUL float ptr [ESP + 0x28]         ; 0055be90
    FXCH ST3                            ; 0055be94
    FSTP float ptr [ESP + 0x20]         ; 0055be96
    FLD float ptr [EBX + 0xc]           ; 0055be9a
    FMUL float ptr [ESP + 0x8]          ; 0055be9d
    FLD float ptr [EBX + 0x1c]          ; 0055bea1
    FMUL float ptr [ESP + 0x1c]         ; 0055bea4
    FXCH ST3                            ; 0055bea8
    FSTP float ptr [ESP + 0x2c]         ; 0055beaa
    FLD float ptr [EBX + 0x1c]          ; 0055beae
    FMUL float ptr [ESP + 0x2c]         ; 0055beb1
    FXCH                                ; 0055beb5
    FADDP ST6,ST0                       ; 0055beb7
    FXCH ST2                            ; 0055beb9
    FADDP ST4,ST0                       ; 0055bebb
    FLD float ptr [EBX + 0x2c]          ; 0055bebd
    FMUL float ptr [ESP + 0x10]         ; 0055bec0
    FLD float ptr [EBX + 0x2c]          ; 0055bec4
    FMUL float ptr [ESP + 0x20]         ; 0055bec7
    FXCH ST3                            ; 0055becb
    FADDP ST4,ST0                       ; 0055becd
    FXCH                                ; 0055becf
    FSTP float ptr [ESP + 0x30]         ; 0055bed1
    FLD float ptr [EBX + 0x2c]          ; 0055bed5
    FMUL float ptr [ESP + 0x30]         ; 0055bed8
    FXCH                                ; 0055bedc
    FADDP ST5,ST0                       ; 0055bede
    FXCH                                ; 0055bee0
    FADDP ST3,ST0                       ; 0055bee2
    FADDP                               ; 0055bee4
    FXCH ST2                            ; 0055bee6
    FCHS                                ; 0055bee8
    FXCH                                ; 0055beea
    FCHS                                ; 0055beec
    FXCH ST2                            ; 0055beee
    FCHS                                ; 0055bef0
    FXCH                                ; 0055bef2
    FSTP float ptr [ESP + 0x14]         ; 0055bef4
    FXCH                                ; 0055bef8
    FSTP float ptr [ESP + 0x24]         ; 0055befa
    FSTP float ptr [ESP + 0x34]         ; 0055befe
    MOV ECX,0xc                         ; 0055bf02
    MOV EDI,dword ptr [ESP + 0x88]      ; 0055bf07
    LEA ESI,[ESP + 0x8]                 ; 0055bf0e
    MOVSD.REP ES:EDI,ESI                ; 0055bf12
    MOV EAX,dword ptr [ESP + 0x88]      ; 0055bf14
    MOV ESP,EBP                         ; 0055bf1b
    POP EBP                             ; 0055bf1d
    POP EDI                             ; 0055bf1e
    POP EBX                             ; 0055bf1f
    RET                                 ; 0055bf20
    MOV ESI,0x5982fa                    ; 0055bf21 | = "..\\core\\xform.cpp"
        ;   Label: LAB_0055bf21
    MOV EDI,0x23e                       ; 0055bf26
    PUSH 0x59830c                       ; 0055bf2b | = "inverse() - Singular matrix"
    MOV dword ptr [0x01cc4800],ESI      ; 0055bf30 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0055bf36 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0055bf3c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0055bf41
    JMP 0x0055bd4a                      ; 0055bf44
        ;   XREF to: 0055bd4a (UNCONDITIONAL_JUMP)  ; LAB_0055bd4a

