; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044ecb0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0044dcd0 at 0044ddd1
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005cf8c7
;   TerminatedCString s_CKeyFramedModel_calcNorm_005cf8da
;   undefined4 DAT_005cf91f
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004df5f0
;   FUN_004e4500
;   FUN_005b77c0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ecb0
        ;   Label: FUN_0044ecb0
    PUSH ESI                            ; 0044ecb1
    PUSH EDI                            ; 0044ecb2
    PUSH EBP                            ; 0044ecb3
    MOV EBP,ESP                         ; 0044ecb4
    SUB ESP,0x30                        ; 0044ecb6
    AND ESP,0xfffffff8                  ; 0044ecb9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044ecbc
    CMP dword ptr [EDI + 0x100],0x1     ; 0044ecbf
    JNZ 0x0044ede8                      ; 0044ecc6
        ;   XREF to: 0044ede8 (CONDITIONAL_JUMP)  ; LAB_0044ede8
    CMP dword ptr [EDI + 0x108],0x0     ; 0044eccc
    JZ 0x0044edef                       ; 0044ecd3
        ;   XREF to: 0044edef (CONDITIONAL_JUMP)  ; LAB_0044edef
    MOV EDX,dword ptr [EDI + 0x104]     ; 0044ecd9
        ;   Label: LAB_0044ecd9
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044ecdf
    SUB EAX,EDX                         ; 0044ece6
    SHL EAX,0x2                         ; 0044ece8
    PUSH EAX                            ; 0044eceb
    PUSH 0x0                            ; 0044ecec
    MOV EAX,dword ptr [EDI + 0x108]     ; 0044ecee
    PUSH EAX                            ; 0044ecf4
    CALL FUN_005b77c0                   ; 0044ecf5
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 0044ecfa
    XOR EDX,EDX                         ; 0044ecfd
    MOV ECX,dword ptr [EDI + 0x110]     ; 0044ecff
    MOV dword ptr [ESP + 0x2c],EDX      ; 0044ed05
    TEST ECX,ECX                        ; 0044ed09
    JLE 0x0044ed7e                      ; 0044ed0b
        ;   XREF to: 0044ed7e (CONDITIONAL_JUMP)  ; LAB_0044ed7e
    MOV dword ptr [ESP + 0x28],EDX      ; 0044ed0d
    MOV ESI,dword ptr [ESP + 0x28]      ; 0044ed11
        ;   Label: LAB_0044ed11
    MOV EBX,dword ptr [EDI + 0x114]     ; 0044ed15
    ADD EBX,ESI                         ; 0044ed1b
    PUSH EBX                            ; 0044ed1d
    MOV EAX,dword ptr [EDI + 0x10c]     ; 0044ed1e
    PUSH EAX                            ; 0044ed24
    CALL FUN_004df5f0                   ; 0044ed25
        ;   XREF to: 004df5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004df5f0()
    ADD ESP,0x8                         ; 0044ed2a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0044ed2d
    XOR EDX,EDX                         ; 0044ed30
    TEST ECX,ECX                        ; 0044ed32
    JLE 0x0044ed60                      ; 0044ed34
        ;   XREF to: 0044ed60 (CONDITIONAL_JUMP)  ; LAB_0044ed60
    MOV ECX,EBX                         ; 0044ed36
    IMUL ESI,dword ptr [ECX + 0x18],0xc ; 0044ed38
        ;   Label: LAB_0044ed38
    MOV EAX,dword ptr [EDI + 0x108]     ; 0044ed3c
    ADD EAX,ESI                         ; 0044ed42
    MOV ESI,dword ptr [EBX + 0x8]       ; 0044ed44
    ADD dword ptr [EAX],ESI             ; 0044ed47
    MOV ESI,dword ptr [EBX + 0xc]       ; 0044ed49
    ADD dword ptr [EAX + 0x4],ESI       ; 0044ed4c
    MOV ESI,dword ptr [EBX + 0x10]      ; 0044ed4f
    ADD dword ptr [EAX + 0x8],ESI       ; 0044ed52
    INC EDX                             ; 0044ed55
    MOV ESI,dword ptr [EBX + 0x4]       ; 0044ed56
    ADD ECX,0xc                         ; 0044ed59
    CMP EDX,ESI                         ; 0044ed5c
    JL 0x0044ed38                       ; 0044ed5e
        ;   XREF to: 0044ed38 (CONDITIONAL_JUMP)  ; LAB_0044ed38
    MOV EBX,dword ptr [ESP + 0x28]      ; 0044ed60
        ;   Label: LAB_0044ed60
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044ed64
    MOV EDX,dword ptr [EDI + 0x110]     ; 0044ed68
    ADD EBX,0x48                        ; 0044ed6e
    INC ESI                             ; 0044ed71
    MOV dword ptr [ESP + 0x28],EBX      ; 0044ed72
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044ed76
    CMP ESI,EDX                         ; 0044ed7a
    JL 0x0044ed11                       ; 0044ed7c
        ;   XREF to: 0044ed11 (CONDITIONAL_JUMP)  ; LAB_0044ed11
    MOV ECX,dword ptr [EDI + 0x104]     ; 0044ed7e
        ;   Label: LAB_0044ed7e
    XOR EBX,EBX                         ; 0044ed84
    TEST ECX,ECX                        ; 0044ed86
    JLE 0x0044ede8                      ; 0044ed88
        ;   XREF to: 0044ede8 (CONDITIONAL_JUMP)  ; LAB_0044ede8
    XOR ECX,ECX                         ; 0044ed8a
    MOV EDX,dword ptr [EDI + 0x108]     ; 0044ed8c
        ;   Label: LAB_0044ed8c
    ADD EDX,ECX                         ; 0044ed92
    FILD dword ptr [EDX]                ; 0044ed94
    FST double ptr [ESP + 0x8]          ; 0044ed96
    FMUL double ptr [ESP + 0x8]         ; 0044ed9a
    FILD dword ptr [EDX + 0x4]          ; 0044ed9e
    FST double ptr [ESP + 0x18]         ; 0044eda1
    FMUL double ptr [ESP + 0x18]        ; 0044eda5
    FILD dword ptr [EDX + 0x8]          ; 0044eda9
    FXCH                                ; 0044edac
    FADDP ST2,ST0                       ; 0044edae
    FST double ptr [ESP + 0x10]         ; 0044edb0
    FMUL double ptr [ESP + 0x10]        ; 0044edb4
    FADDP                               ; 0044edb8
    FSQRT                               ; 0044edba
    FLDZ                                ; 0044edbc
    FXCH                                ; 0044edbe
    FSTP double ptr [ESP]               ; 0044edc0
    FCOMP double ptr [ESP]              ; 0044edc3
    FNSTSW AX                           ; 0044edc6
    SAHF                                ; 0044edc8
    JC 0x0044ee17                       ; 0044edc9
        ;   XREF to: 0044ee17 (CONDITIONAL_JUMP)  ; LAB_0044ee17
    MOV dword ptr [EDX + 0x8],0x0       ; 0044edcb
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044edd2
    MOV dword ptr [EDX + 0x4],EAX       ; 0044edd5
    MOV dword ptr [EDX],EAX             ; 0044edd8
    INC EBX                             ; 0044edda
        ;   Label: LAB_0044edda
    MOV ESI,dword ptr [EDI + 0x104]     ; 0044eddb
    ADD ECX,0xc                         ; 0044ede1
    CMP EBX,ESI                         ; 0044ede4
    JL 0x0044ed8c                       ; 0044ede6
        ;   XREF to: 0044ed8c (CONDITIONAL_JUMP)  ; LAB_0044ed8c
    MOV ESP,EBP                         ; 0044ede8
        ;   Label: LAB_0044ede8
    POP EBP                             ; 0044edea
    POP EDI                             ; 0044edeb
    POP ESI                             ; 0044edec
    POP EBX                             ; 0044eded
    RET                                 ; 0044edee
    MOV EBX,0x5cf8c7                    ; 0044edef | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0044edef
    MOV ESI,0x2f1                       ; 0044edf4
    PUSH 0x5cf8da                       ; 0044edf9 | = "CKeyFramedModel::calcNormals() - vert..."
    MOV dword ptr [0x01d046a0],EBX      ; 0044edfe | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044ee04 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044ee0a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0044ee0f
    JMP 0x0044ecd9                      ; 0044ee12
        ;   XREF to: 0044ecd9 (UNCONDITIONAL_JUMP)  ; LAB_0044ecd9
    FLD double ptr [ESP + 0x8]          ; 0044ee17
        ;   Label: LAB_0044ee17
    FLD double ptr [0x005cf91f]         ; 0044ee1b | DAT_005cf91f
    FDIV double ptr [ESP]               ; 0044ee21
    FXCH                                ; 0044ee24
    FMUL ST1                            ; 0044ee26
    FLD double ptr [ESP + 0x18]         ; 0044ee28
    FMUL ST2                            ; 0044ee2c
    FLD double ptr [ESP + 0x10]         ; 0044ee2e
    FMULP ST3                           ; 0044ee32
    FXCH                                ; 0044ee34
    CALL FUN_005b7ff0                   ; 0044ee36
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0044ee3b
    CALL FUN_005b7ff0                   ; 0044ee3d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST2                            ; 0044ee42
    CALL FUN_005b7ff0                   ; 0044ee44
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0044ee49
    FISTP dword ptr [EDX]               ; 0044ee4b
    FXCH                                ; 0044ee4d
    FISTP dword ptr [EDX + 0x4]         ; 0044ee4f
    FISTP dword ptr [EDX + 0x8]         ; 0044ee52
    JMP 0x0044edda                      ; 0044ee55
        ;   XREF to: 0044edda (UNCONDITIONAL_JUMP)  ; LAB_0044edda

