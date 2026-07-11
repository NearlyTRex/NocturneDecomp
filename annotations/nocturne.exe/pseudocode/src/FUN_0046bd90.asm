; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046bd90(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00511aa0 at 00511afa
;
; Referenced Globals:
;   undefined4 DAT_0057e3ce
;   undefined4 DAT_0057e3d6
;
; Called Functions:
;   FUN_0044d7a0
;   FUN_0044da40
;   FUN_0046c100
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bd90
        ;   Label: FUN_0046bd90
    PUSH ESI                            ; 0046bd91
    PUSH EDI                            ; 0046bd92
    PUSH EBP                            ; 0046bd93
    MOV EBP,ESP                         ; 0046bd94
    SUB ESP,0x88                        ; 0046bd96
    AND ESP,0xfffffff8                  ; 0046bd9c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0046bd9f
    MOV ESI,dword ptr [EBP + 0x20]      ; 0046bda2
    MOV EBX,dword ptr [EBP + 0x24]      ; 0046bda5
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0046bda8
    PUSH EDX                            ; 0046bdab
    LEA EAX,[ESP + 0x10]                ; 0046bdac
    PUSH EAX                            ; 0046bdb0
    CALL FUN_0044d7a0                   ; 0046bdb1
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d7a0()
    FLD float ptr [EBX]                 ; 0046bdb6
    FSUB float ptr [ESI]                ; 0046bdb8
    ADD ESP,0x8                         ; 0046bdba
    FSTP float ptr [ESP + 0x40]         ; 0046bdbd
    FLD float ptr [EBX + 0x4]           ; 0046bdc1
    FSUB float ptr [ESI + 0x4]          ; 0046bdc4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046bdc7
    FSTP float ptr [ESP + 0x44]         ; 0046bdca
    FLD float ptr [EBX + 0x8]           ; 0046bdce
    FSUB float ptr [ESI + 0x8]          ; 0046bdd1
    FLD float ptr [ESP + 0x40]          ; 0046bdd4
    FXCH                                ; 0046bdd8
    FSTP float ptr [ESP + 0x48]         ; 0046bdda
    FDIV float ptr [EAX + 0x34]         ; 0046bdde
    FLD float ptr [ESP + 0x44]          ; 0046bde1
    FDIV float ptr [EAX + 0x38]         ; 0046bde5
    FLD float ptr [ESP + 0x48]          ; 0046bde8
    FDIV float ptr [EAX + 0x3c]         ; 0046bdec
    FXCH ST2                            ; 0046bdef
    FLD double ptr [0x0057e3ce]         ; 0046bdf1 | DAT_0057e3ce
    FXCH                                ; 0046bdf7
    FMUL ST1                            ; 0046bdf9
    FLD1                                ; 0046bdfb
    FADDP                               ; 0046bdfd
    CALL FUN_00563a30                   ; 0046bdff
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x70]        ; 0046be04
    MOV EAX,dword ptr [ESP + 0x70]      ; 0046be08
    MOV dword ptr [ESP + 0x84],EAX      ; 0046be0c
    FILD dword ptr [ESP + 0x84]         ; 0046be13
    FDIVR float ptr [ESP + 0x40]        ; 0046be1a
    FXCH ST2                            ; 0046be1e
    FMUL ST1                            ; 0046be20
    FLD1                                ; 0046be22
    FADDP                               ; 0046be24
    CALL FUN_00563a30                   ; 0046be26
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x74]        ; 0046be2b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0046be2f
    MOV dword ptr [ESP + 0x84],EAX      ; 0046be33
    FILD dword ptr [ESP + 0x84]         ; 0046be3a
    FDIVR float ptr [ESP + 0x44]        ; 0046be41
    FXCH ST3                            ; 0046be45
    FMULP                               ; 0046be47
    FLD1                                ; 0046be49
    FADDP                               ; 0046be4b
    CALL FUN_00563a30                   ; 0046be4d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x7c]        ; 0046be52
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046be56
    MOV dword ptr [ESP + 0x84],EAX      ; 0046be5a
    FILD dword ptr [ESP + 0x84]         ; 0046be61
    FDIVR float ptr [ESP + 0x48]        ; 0046be68
    XOR ECX,ECX                         ; 0046be6c
    MOV dword ptr [ESP + 0x78],ECX      ; 0046be6e
    MOV EBX,dword ptr [ESP + 0x70]      ; 0046be72
    FXCH                                ; 0046be76
    FSTP float ptr [ESP]                ; 0046be78
    FXCH                                ; 0046be7b
    FSTP float ptr [ESP + 0x4]          ; 0046be7d
    FSTP float ptr [ESP + 0x8]          ; 0046be81
    TEST EBX,EBX                        ; 0046be85
    JLE 0x0046bfd9                      ; 0046be87
        ;   XREF to: 0046bfd9 (CONDITIONAL_JUMP)  ; LAB_0046bfd9
    XOR ECX,ECX                         ; 0046be8d
        ;   Label: LAB_0046be8d
    MOV EBX,dword ptr [ESP + 0x74]      ; 0046be8f
    MOV dword ptr [ESP + 0x80],ECX      ; 0046be93
    TEST EBX,EBX                        ; 0046be9a
    JLE 0x0046bfc4                      ; 0046be9c
        ;   XREF to: 0046bfc4 (CONDITIONAL_JUMP)  ; LAB_0046bfc4
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0046bea2
        ;   Label: LAB_0046bea2
    XOR EBX,EBX                         ; 0046bea6
    TEST ECX,ECX                        ; 0046bea8
    JLE 0x0046bfa9                      ; 0046beaa
        ;   XREF to: 0046bfa9 (CONDITIONAL_JUMP)  ; LAB_0046bfa9
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046beb0
        ;   Label: LAB_0046beb0
    MOV dword ptr [ESP + 0x84],EAX      ; 0046beb4
    FILD dword ptr [ESP + 0x84]         ; 0046bebb
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046bec2
    FLD float ptr [ESP]                 ; 0046bec9
    FXCH                                ; 0046becc
    FMUL ST1                            ; 0046bece
    MOV dword ptr [ESP + 0x84],EAX      ; 0046bed0
    FILD dword ptr [ESP + 0x84]         ; 0046bed7
    FXCH                                ; 0046bede
    FADD float ptr [ESI]                ; 0046bee0
    FXCH                                ; 0046bee2
    FLD float ptr [ESP + 0x4]           ; 0046bee4
    FXCH                                ; 0046bee8
    FMUL ST1                            ; 0046beea
    FXCH ST3                            ; 0046beec
    FLD double ptr [0x0057e3d6]         ; 0046beee | DAT_0057e3d6
    FXCH                                ; 0046bef4
    FMUL ST1                            ; 0046bef6
    MOV dword ptr [ESP + 0x84],EBX      ; 0046bef8
    FADDP ST3,ST0                       ; 0046beff
    FILD dword ptr [ESP + 0x84]         ; 0046bf01
    FXCH ST3                            ; 0046bf08
    FSTP float ptr [ESP + 0x58]         ; 0046bf0a
    FXCH ST3                            ; 0046bf0e
    FADD float ptr [ESI + 0x4]          ; 0046bf10
    FXCH ST2                            ; 0046bf13
    FLD float ptr [ESP + 0x8]           ; 0046bf15
    FXCH                                ; 0046bf19
    FMUL ST1                            ; 0046bf1b
    FXCH ST2                            ; 0046bf1d
    FMUL ST4                            ; 0046bf1f
    LEA EAX,[ESP + 0x58]                ; 0046bf21
    FADDP ST3,ST0                       ; 0046bf25
    PUSH EAX                            ; 0046bf27
    FXCH ST2                            ; 0046bf28
    FSTP float ptr [ESP + 0x60]         ; 0046bf2a
    FADD float ptr [ESI + 0x8]          ; 0046bf2e
    LEA EAX,[ESP + 0x68]                ; 0046bf31
    FXCH                                ; 0046bf35
    FMULP ST2                           ; 0046bf37
    PUSH EAX                            ; 0046bf39
    LEA EAX,[ESP + 0x14]                ; 0046bf3a
    FADDP                               ; 0046bf3e
    PUSH EAX                            ; 0046bf40
    FSTP float ptr [ESP + 0x6c]         ; 0046bf41
    CALL FUN_0044da40                   ; 0046bf45
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined FUN_0044da40()
    FLD float ptr [EAX]                 ; 0046bf4a
    FADD float ptr [EDI]                ; 0046bf4c
    ADD ESP,0xc                         ; 0046bf4e
    FSTP float ptr [ESP + 0x34]         ; 0046bf51
    FLD float ptr [EAX + 0x4]           ; 0046bf55
    FADD float ptr [EDI + 0x4]          ; 0046bf58
    LEA EDX,[ESP + 0x4c]                ; 0046bf5b
    FSTP float ptr [ESP + 0x38]         ; 0046bf5f
    FLD float ptr [EAX + 0x8]           ; 0046bf63
    FADD float ptr [EDI + 0x8]          ; 0046bf66
    LEA EAX,[ESP + 0x34]                ; 0046bf69
    FSTP float ptr [ESP + 0x3c]         ; 0046bf6d
    CMP EDX,EAX                         ; 0046bf71
    JZ 0x0046bf8d                       ; 0046bf73
        ;   XREF to: 0046bf8d (CONDITIONAL_JUMP)  ; LAB_0046bf8d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0046bf75
    MOV dword ptr [ESP + 0x4c],EAX      ; 0046bf79
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046bf7d
    MOV dword ptr [ESP + 0x50],EAX      ; 0046bf81
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046bf85
    MOV dword ptr [ESP + 0x54],EAX      ; 0046bf89
    LEA EAX,[ESP + 0x4c]                ; 0046bf8d
        ;   Label: LAB_0046bf8d
    PUSH EAX                            ; 0046bf91
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046bf92
    PUSH EAX                            ; 0046bf95
    CALL FUN_0046c100                   ; 0046bf96
        ;   XREF to: 0046c100 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c100()
    ADD ESP,0x8                         ; 0046bf9b
    INC EBX                             ; 0046bf9e
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0046bf9f
    JL 0x0046beb0                       ; 0046bfa3
        ;   XREF to: 0046beb0 (CONDITIONAL_JUMP)  ; LAB_0046beb0
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046bfa9
        ;   Label: LAB_0046bfa9
    INC EAX                             ; 0046bfb0
    MOV EDX,dword ptr [ESP + 0x74]      ; 0046bfb1
    MOV dword ptr [ESP + 0x80],EAX      ; 0046bfb5
    CMP EAX,EDX                         ; 0046bfbc
    JL 0x0046bea2                       ; 0046bfbe
        ;   XREF to: 0046bea2 (CONDITIONAL_JUMP)  ; LAB_0046bea2
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046bfc4
        ;   Label: LAB_0046bfc4
    INC EAX                             ; 0046bfc8
    MOV EDX,dword ptr [ESP + 0x70]      ; 0046bfc9
    MOV dword ptr [ESP + 0x78],EAX      ; 0046bfcd
    CMP EAX,EDX                         ; 0046bfd1
    JL 0x0046be8d                       ; 0046bfd3
        ;   XREF to: 0046be8d (CONDITIONAL_JUMP)  ; LAB_0046be8d
    MOV ESP,EBP                         ; 0046bfd9
        ;   Label: LAB_0046bfd9
    POP EBP                             ; 0046bfdb
    POP EDI                             ; 0046bfdc
    POP ESI                             ; 0046bfdd
    POP EBX                             ; 0046bfde
    RET                                 ; 0046bfdf

