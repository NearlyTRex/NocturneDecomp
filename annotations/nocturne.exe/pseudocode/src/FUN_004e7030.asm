; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7030(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004e85b0 at 004e91e4
;
; Referenced Globals:
;   undefined4 DAT_005bbbfc
;   undefined8 DAT_005bbc00
;   undefined8 DAT_005bbc08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7030
        ;   Label: FUN_004e7030
    PUSH ESI                            ; 004e7031
    PUSH EDI                            ; 004e7032
    PUSH EBP                            ; 004e7033
    MOV EBP,ESP                         ; 004e7034
    SUB ESP,0x38                        ; 004e7036
    AND ESP,0xfffffff8                  ; 004e7039
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004e703c
    CMP dword ptr [0x005bbbfc],0x0      ; 004e703f | DAT_005bbbfc
    JZ 0x004e7093                       ; 004e7046
        ;   XREF to: 004e7093 (CONDITIONAL_JUMP)  ; LAB_004e7093
    XOR EDX,EDX                         ; 004e7048
    FLD double ptr [EDX + 0x5bbc00]     ; 004e704a | DAT_005bbc00 | DAT_005bbc08
        ;   Label: LAB_004e704a
    FMUL ST0                            ; 004e7050
    FLD1                                ; 004e7052
    FADDP                               ; 004e7054
    FSQRT                               ; 004e7056
    FLD1                                ; 004e7058
    FDIVRP                              ; 004e705a
    FLD double ptr [EDX + 0x5bbc00]     ; 004e705c | DAT_005bbc00 | DAT_005bbc08
    ADD EDX,0x8                         ; 004e7062
    FXCH                                ; 004e7065
    FSTP double ptr [ESP]               ; 004e7067
    MOV EAX,dword ptr [ESP]             ; 004e706a
    FMUL double ptr [ESP]               ; 004e706d
    MOV dword ptr [EDX + 0x1cd6fe0],EAX ; 004e7070
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7076
    FSTP double ptr [EDX + 0x1cd6fa0]   ; 004e707a
    MOV dword ptr [EDX + 0x1cd6fe4],EAX ; 004e7080
    CMP EDX,0x40                        ; 004e7086
    JNZ 0x004e704a                      ; 004e7089
        ;   XREF to: 004e704a (CONDITIONAL_JUMP)  ; LAB_004e704a
    XOR ECX,ECX                         ; 004e708b
    MOV dword ptr [0x005bbbfc],ECX      ; 004e708d | DAT_005bbbfc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e7093
        ;   Label: LAB_004e7093
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e7096
    XOR EBX,EBX                         ; 004e7099
    ADD ESI,0x48                        ; 004e709b
    MOV dword ptr [ESP + 0x24],EAX      ; 004e709e
    IMUL EAX,EBX,0x48                   ; 004e70a2
        ;   Label: LAB_004e70a2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e70a5
    MOV ECX,ESI                         ; 004e70a8
    ADD EAX,EDX                         ; 004e70aa
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e70ac
    ADD EDX,0x4                         ; 004e70b0
        ;   Label: LAB_004e70b0
    FLD float ptr [EAX]                 ; 004e70b3
    ADD EAX,0x4                         ; 004e70b5
    FSTP float ptr [EDX + -0x4]         ; 004e70b8
    CMP EAX,ECX                         ; 004e70bb
    JNZ 0x004e70b0                      ; 004e70bd
        ;   XREF to: 004e70b0 (CONDITIONAL_JUMP)  ; LAB_004e70b0
    MOV ECX,dword ptr [ESP + 0x24]      ; 004e70bf
    INC EBX                             ; 004e70c3
    ADD ECX,0x48                        ; 004e70c4
    ADD ESI,0x48                        ; 004e70c7
    MOV dword ptr [ESP + 0x24],ECX      ; 004e70ca
    CMP EBX,0x20                        ; 004e70ce
    JL 0x004e70a2                       ; 004e70d1
        ;   XREF to: 004e70a2 (CONDITIONAL_JUMP)  ; LAB_004e70a2
    CMP dword ptr [EDI + 0x10],0x0      ; 004e70d3
    JZ 0x004e70e9                       ; 004e70d7
        ;   XREF to: 004e70e9 (CONDITIONAL_JUMP)  ; LAB_004e70e9
    CMP dword ptr [EDI + 0x14],0x2      ; 004e70d9
    JNZ 0x004e70e9                      ; 004e70dd
        ;   XREF to: 004e70e9 (CONDITIONAL_JUMP)  ; LAB_004e70e9
    CMP dword ptr [EDI + 0x18],0x0      ; 004e70df
    JZ 0x004e71f1                       ; 004e70e3
        ;   XREF to: 004e71f1 (CONDITIONAL_JUMP)  ; LAB_004e71f1
    CMP dword ptr [EDI + 0x10],0x0      ; 004e70e9
        ;   Label: LAB_004e70e9
    JZ 0x004e71f8                       ; 004e70ed
        ;   XREF to: 004e71f8 (CONDITIONAL_JUMP)  ; LAB_004e71f8
    CMP dword ptr [EDI + 0x18],0x0      ; 004e70f3
    JZ 0x004e71f8                       ; 004e70f7
        ;   XREF to: 004e71f8 (CONDITIONAL_JUMP)  ; LAB_004e71f8
    CMP dword ptr [EDI + 0x14],0x2      ; 004e70fd
    JNZ 0x004e71f8                      ; 004e7101
        ;   XREF to: 004e71f8 (CONDITIONAL_JUMP)  ; LAB_004e71f8
    MOV dword ptr [ESP + 0x34],0x1      ; 004e7107
    XOR EDX,EDX                         ; 004e710f
        ;   Label: LAB_004e710f
    MOV ECX,dword ptr [ESP + 0x34]      ; 004e7111
    MOV dword ptr [ESP + 0x2c],EDX      ; 004e7115
    TEST ECX,ECX                        ; 004e7119
    JLE 0x004e71f1                      ; 004e711b
        ;   XREF to: 004e71f1 (CONDITIONAL_JUMP)  ; LAB_004e71f1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e7121
    ADD EAX,0x68                        ; 004e7124
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e7127
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e712b
    MOV dword ptr [ESP + 0x20],EAX      ; 004e712e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e7132
    ADD EAX,0x48                        ; 004e7135
    MOV dword ptr [ESP + 0x28],EAX      ; 004e7138
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e713c
    MOV dword ptr [ESP + 0x18],EAX      ; 004e713f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e7143
        ;   Label: LAB_004e7143
    INC EAX                             ; 004e7147
    IMUL EAX,EAX,0x48                   ; 004e7148
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e714b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e714e
    MOV ESI,dword ptr [ESP + 0x28]      ; 004e7152
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e7156
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004e715a
    ADD EBX,0x44                        ; 004e715e
    MOV dword ptr [ESP + 0x30],EDI      ; 004e7161
    ADD ECX,0x44                        ; 004e7165
    MOV EDI,dword ptr [ESP + 0x30]      ; 004e7168
    ADD EDX,EAX                         ; 004e716c
    XOR EAX,EAX                         ; 004e716e
    FLD float ptr [ECX]                 ; 004e7170
        ;   Label: LAB_004e7170
    FLD ST0                             ; 004e7172
    FMUL double ptr [EAX + 0x1cd6fe8]   ; 004e7174
    FLD float ptr [ESI]                 ; 004e717a
    FLD ST0                             ; 004e717c
    FMUL double ptr [EAX + 0x1cd6fa8]   ; 004e717e
    FSUBP ST2,ST0                       ; 004e7184
    FXCH                                ; 004e7186
    FSTP float ptr [EBX]                ; 004e7188
    FMUL double ptr [EAX + 0x1cd6fe8]   ; 004e718a
    FXCH                                ; 004e7190
    FMUL double ptr [EAX + 0x1cd6fa8]   ; 004e7192
    ADD EDX,0x4                         ; 004e7198
    SUB EBX,0x4                         ; 004e719b
    ADD EAX,0x8                         ; 004e719e
    ADD ESI,0x4                         ; 004e71a1
    FADDP                               ; 004e71a4
    SUB ECX,0x4                         ; 004e71a6
    FSTP float ptr [EDX + -0x4]         ; 004e71a9
    CMP EDX,EDI                         ; 004e71ac
    JNZ 0x004e7170                      ; 004e71ae
        ;   XREF to: 004e7170 (CONDITIONAL_JUMP)  ; LAB_004e7170
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e71b0
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e71b4
    MOV EDI,dword ptr [ESP + 0x28]      ; 004e71b8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e71bc
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e71c0
    MOV ECX,dword ptr [ESP + 0x34]      ; 004e71c4
    ADD EBX,0x48                        ; 004e71c8
    ADD ESI,0x48                        ; 004e71cb
    ADD EDI,0x48                        ; 004e71ce
    ADD EAX,0x48                        ; 004e71d1
    INC EDX                             ; 004e71d4
    MOV dword ptr [ESP + 0x1c],EBX      ; 004e71d5
    MOV dword ptr [ESP + 0x20],ESI      ; 004e71d9
    MOV dword ptr [ESP + 0x28],EDI      ; 004e71dd
    MOV dword ptr [ESP + 0x18],EAX      ; 004e71e1
    MOV dword ptr [ESP + 0x2c],EDX      ; 004e71e5
    CMP EDX,ECX                         ; 004e71e9
    JL 0x004e7143                       ; 004e71eb
        ;   XREF to: 004e7143 (CONDITIONAL_JUMP)  ; LAB_004e7143
    MOV ESP,EBP                         ; 004e71f1
        ;   Label: LAB_004e71f1
    POP EBP                             ; 004e71f3
    POP EDI                             ; 004e71f4
    POP ESI                             ; 004e71f5
    POP EBX                             ; 004e71f6
    RET                                 ; 004e71f7
    MOV dword ptr [ESP + 0x34],0x1f     ; 004e71f8
        ;   Label: LAB_004e71f8
    JMP 0x004e710f                      ; 004e7200
        ;   XREF to: 004e710f (UNCONDITIONAL_JUMP)  ; LAB_004e710f

