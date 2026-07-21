; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0(int param_1,float *param_2)
;
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_0050fab0 at 0050fabd
;
; Referenced Globals:
;   undefined4 DAT_0057e3ae
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046aff0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0
    PUSH ESI                            ; 0046aff1
    PUSH EDI                            ; 0046aff2
    PUSH EBP                            ; 0046aff3
    SUB ESP,0x20                        ; 0046aff4
    MOV EBX,dword ptr [ESP + 0x34]      ; 0046aff7
    MOV EDX,dword ptr [ESP + 0x38]      ; 0046affb
    FLD float ptr [EDX]                 ; 0046afff
    FSUB float ptr [EBX + 0x10]         ; 0046b001
    FDIV float ptr [EBX + 0x28]         ; 0046b004
    FLD float ptr [EDX + 0x4]           ; 0046b007
    FSUB float ptr [EBX + 0x14]         ; 0046b00a
    FDIV float ptr [EBX + 0x2c]         ; 0046b00d
    FLD float ptr [EDX + 0x8]           ; 0046b010
    FSUB float ptr [EBX + 0x18]         ; 0046b013
    FDIV float ptr [EBX + 0x30]         ; 0046b016
    FXCH ST2                            ; 0046b019
    CALL crt_math.c_round_FUN_00563a30  ; 0046b01b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc]         ; 0046b020
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046b024
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046b028
    FILD dword ptr [ESP + 0x1c]         ; 0046b02c
    FMUL float ptr [EBX + 0x28]         ; 0046b030
    FADD float ptr [EBX + 0x10]         ; 0046b033
    FSUBR float ptr [EDX]               ; 0046b036
    FLD float ptr [0x0057e3ae]          ; 0046b038 | DAT_0057e3ae
    FLD float ptr [EBX + 0x28]          ; 0046b03e
    FMUL ST1                            ; 0046b041
    FDIVP ST2,ST0                       ; 0046b043
    FXCH ST2                            ; 0046b045
    CALL crt_math.c_round_FUN_00563a30  ; 0046b047
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x14]        ; 0046b04c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046b050
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046b054
    FILD dword ptr [ESP + 0x1c]         ; 0046b058
    FMUL float ptr [EBX + 0x2c]         ; 0046b05c
    FADD float ptr [EBX + 0x14]         ; 0046b05f
    FSUBR float ptr [EDX + 0x4]         ; 0046b062
    FLD float ptr [EBX + 0x2c]          ; 0046b065
    FMUL ST3                            ; 0046b068
    FDIVP                               ; 0046b06a
    FXCH ST3                            ; 0046b06c
    CALL crt_math.c_round_FUN_00563a30  ; 0046b06e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 0046b073
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b077
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046b07b
    FILD dword ptr [ESP + 0x1c]         ; 0046b07f
    FMUL float ptr [EBX + 0x30]         ; 0046b083
    FADD float ptr [EBX + 0x18]         ; 0046b086
    FSUBR float ptr [EDX + 0x8]         ; 0046b089
    FLD float ptr [EBX + 0x30]          ; 0046b08c
    FMULP ST3                           ; 0046b08f
    FDIVRP ST2,ST0                      ; 0046b091
    CALL crt_math.c_round_FUN_00563a30  ; 0046b093
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x10]        ; 0046b098
    MOV EDX,dword ptr [ESP + 0x10]      ; 0046b09c
    FXCH                                ; 0046b0a0
    CALL crt_math.c_round_FUN_00563a30  ; 0046b0a2
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x18]        ; 0046b0a7
    CALL crt_math.c_round_FUN_00563a30  ; 0046b0ab
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP]               ; 0046b0b0
    TEST EDX,EDX                        ; 0046b0b3
    JL 0x0046b153                       ; 0046b0b5
        ;   XREF to: 0046b153 (CONDITIONAL_JUMP)  ; LAB_0046b153
    MOV ECX,dword ptr [ESP + 0x18]      ; 0046b0bb
    TEST ECX,ECX                        ; 0046b0bf
    JL 0x0046b153                       ; 0046b0c1
        ;   XREF to: 0046b153 (CONDITIONAL_JUMP)  ; LAB_0046b153
    MOV ESI,dword ptr [ESP]             ; 0046b0c7
    TEST ESI,ESI                        ; 0046b0ca
    JL 0x0046b153                       ; 0046b0cc
        ;   XREF to: 0046b153 (CONDITIONAL_JUMP)  ; LAB_0046b153
    CMP EDX,0x8                         ; 0046b0d2
    JGE 0x0046b153                      ; 0046b0d5
        ;   XREF to: 0046b153 (CONDITIONAL_JUMP)  ; LAB_0046b153
    CMP ECX,0x8                         ; 0046b0db
    JGE 0x0046b153                      ; 0046b0de
        ;   XREF to: 0046b153 (CONDITIONAL_JUMP)  ; LAB_0046b153
    CMP ESI,0x8                         ; 0046b0e4
    JGE 0x0046b153                      ; 0046b0e7
        ;   XREF to: 0046b153 (CONDITIONAL_JUMP)  ; LAB_0046b153
    SHL ESI,0x3                         ; 0046b0e9
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b0ec
        ;   Label: LAB_0046b0ec
    PUSH EAX                            ; 0046b0f0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046b0f1
    PUSH EDX                            ; 0046b0f5
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046b0f6
    PUSH ECX                            ; 0046b0fa
    PUSH EBX                            ; 0046b0fb
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0 ; 0046b0fc
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004678d0()
    ADD ESP,0x10                        ; 0046b101
    TEST EAX,EAX                        ; 0046b104
    JZ 0x0046b167                       ; 0046b106
        ;   XREF to: 0046b167 (CONDITIONAL_JUMP)  ; LAB_0046b167
    MOV EDI,dword ptr [EAX]             ; 0046b108
    TEST EDI,EDI                        ; 0046b10a
    JZ 0x0046b132                       ; 0046b10c
        ;   XREF to: 0046b132 (CONDITIONAL_JUMP)  ; LAB_0046b132
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046b10e
    MOV EAX,EDI                         ; 0046b112
    ADD EDX,ESI                         ; 0046b114
    MOV DL,byte ptr [EDX + EAX*0x1]     ; 0046b116
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046b119
    AND EDX,0xff                        ; 0046b11d
    MOV AL,byte ptr [EAX + 0x5b6d08]    ; 0046b123
    AND EAX,0xff                        ; 0046b129
    TEST EDX,EAX                        ; 0046b12e
    JNZ 0x0046b171                      ; 0046b130
        ;   XREF to: 0046b171 (CONDITIONAL_JUMP)  ; LAB_0046b171
    MOV EBP,dword ptr [ESP + 0x18]      ; 0046b132
        ;   Label: LAB_0046b132
    DEC EBP                             ; 0046b136
    MOV dword ptr [ESP + 0x18],EBP      ; 0046b137
    TEST EBP,EBP                        ; 0046b13b
    JGE 0x0046b0ec                      ; 0046b13d
        ;   XREF to: 0046b0ec (CONDITIONAL_JUMP)  ; LAB_0046b0ec
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046b13f
    MOV EDX,0x7                         ; 0046b143
    DEC ECX                             ; 0046b148
    MOV dword ptr [ESP + 0x18],EDX      ; 0046b149
    MOV dword ptr [ESP + 0x14],ECX      ; 0046b14d
    JMP 0x0046b0ec                      ; 0046b151
        ;   XREF to: 0046b0ec (UNCONDITIONAL_JUMP)  ; LAB_0046b0ec
    MOV dword ptr [ESP + 0x4],0xc479c000 ; 0046b153
        ;   Label: LAB_0046b153
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046b15b
        ;   Label: LAB_0046b15b
    ADD ESP,0x20                        ; 0046b15f
    POP EBP                             ; 0046b162
    POP EDI                             ; 0046b163
    POP ESI                             ; 0046b164
    POP EBX                             ; 0046b165
    RET                                 ; 0046b166
    MOV dword ptr [ESP + 0x4],0xc479f99a ; 0046b167
        ;   Label: LAB_0046b167
    JMP 0x0046b15b                      ; 0046b16f
        ;   XREF to: 0046b15b (UNCONDITIONAL_JUMP)  ; LAB_0046b15b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046b171
        ;   Label: LAB_0046b171
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046b175
    FILD dword ptr [ESP + 0x1c]         ; 0046b179
    FMUL float ptr [EBX + 0x2c]         ; 0046b17d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046b180
    FADD float ptr [EBX + 0x14]         ; 0046b184
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046b187
    FILD dword ptr [ESP + 0x1c]         ; 0046b18b
    FMUL float ptr [EBX + 0x2c]         ; 0046b18f
    FMUL float ptr [0x0057e3ae]         ; 0046b192 | DAT_0057e3ae
    FADDP                               ; 0046b198
    FSTP float ptr [ESP + 0x4]          ; 0046b19a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046b19e
    ADD ESP,0x20                        ; 0046b1a2
    POP EBP                             ; 0046b1a5
    POP EDI                             ; 0046b1a6
    POP ESI                             ; 0046b1a7
    POP EBX                             ; 0046b1a8
    RET                                 ; 0046b1a9

