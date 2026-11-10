; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_0053a090(int param_1,int param_2,float *param_3)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760 at 0053a77a
;   core_setdir.cpp_CDemonSet_isPointInVdirGroup_FUN_0053a150 at 0053a199
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a090
        ;   Label: core_setdir.cpp_FUN_0053a090
    PUSH ESI                            ; 0053a091
    PUSH EDI                            ; 0053a092
    PUSH EBP                            ; 0053a093
    MOV EBP,ESP                         ; 0053a094
    SUB ESP,0x30                        ; 0053a096
    AND ESP,0xfffffff8                  ; 0053a099
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0053a09c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0053a09f
    FLD float ptr [ESI + 0x4]           ; 0053a0a2
    MOV EAX,EBX                         ; 0053a0a5
    FLD float ptr [ESI + 0x8]           ; 0053a0a7
    SHL EAX,0x4                         ; 0053a0aa
    FLD float ptr [ESI]                 ; 0053a0ad
    ADD EAX,EBX                         ; 0053a0af
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053a0b1
    SHL EAX,0x2                         ; 0053a0b4
    ADD EBX,0x15b428                    ; 0053a0b7
    LEA EDI,[ESP + 0x24]                ; 0053a0bd
    ADD EBX,EAX                         ; 0053a0c1
    LEA ESI,[ESP + 0xc]                 ; 0053a0c3
    LEA EAX,[ESP + 0x24]                ; 0053a0c7
    FSUB float ptr [EBX]                ; 0053a0cb
    FXCH ST2                            ; 0053a0cd
    FSUB float ptr [EBX + 0x4]          ; 0053a0cf
    FXCH                                ; 0053a0d2
    FSUB float ptr [EBX + 0x8]          ; 0053a0d4
    FXCH ST2                            ; 0053a0d7
    FSTP float ptr [ESP + 0xc]          ; 0053a0d9
    FSTP float ptr [ESP + 0x10]         ; 0053a0dd
    FSTP float ptr [ESP + 0x14]         ; 0053a0e1
    PUSH EAX                            ; 0053a0e5
    LEA EAX,[EBX + 0x18]                ; 0053a0e6
    MOVSD ES:EDI,ESI                    ; 0053a0e9
    MOVSD ES:EDI,ESI                    ; 0053a0ea
    MOVSD ES:EDI,ESI                    ; 0053a0eb
    PUSH EAX                            ; 0053a0ec
    LEA ESI,[ESP + 0x8]                 ; 0053a0ed
    LEA EDI,[ESP + 0x20]                ; 0053a0f1
    CALL core_dirmat.cpp_FUN_004495a0   ; 0053a0f5
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x8]                 ; 0053a0fa
    ADD ESP,0x8                         ; 0053a0fe
    MOVSD ES:EDI,ESI                    ; 0053a101
    MOVSD ES:EDI,ESI                    ; 0053a102
    MOVSD ES:EDI,ESI                    ; 0053a103
    FLD float ptr [EBX + 0xc]           ; 0053a104
    FLD float ptr [ESP + 0x18]          ; 0053a107
    FABS                                ; 0053a10b
    FCOMPP                              ; 0053a10d
    FNSTSW AX                           ; 0053a10f
    SAHF                                ; 0053a111
    JA 0x0053a134                       ; 0053a112
        ;   XREF to: 0053a134 (CONDITIONAL_JUMP)  ; LAB_0053a134
    FLD float ptr [ESP + 0x1c]          ; 0053a114
    FABS                                ; 0053a118
    FLD float ptr [EBX + 0x10]          ; 0053a11a
    FCOMPP                              ; 0053a11d
    FNSTSW AX                           ; 0053a11f
    SAHF                                ; 0053a121
    JC 0x0053a134                       ; 0053a122
        ;   XREF to: 0053a134 (CONDITIONAL_JUMP)  ; LAB_0053a134
    FLD float ptr [ESP + 0x20]          ; 0053a124
    FABS                                ; 0053a128
    FLD float ptr [EBX + 0x14]          ; 0053a12a
    FCOMPP                              ; 0053a12d
    FNSTSW AX                           ; 0053a12f
    SAHF                                ; 0053a131
    JNC 0x0053a13d                      ; 0053a132
        ;   XREF to: 0053a13d (CONDITIONAL_JUMP)  ; LAB_0053a13d
    XOR EAX,EAX                         ; 0053a134
        ;   Label: LAB_0053a134
    MOV ESP,EBP                         ; 0053a136
    POP EBP                             ; 0053a138
    POP EDI                             ; 0053a139
    POP ESI                             ; 0053a13a
    POP EBX                             ; 0053a13b
    RET                                 ; 0053a13c
    MOV EAX,0x1                         ; 0053a13d
        ;   Label: LAB_0053a13d
    MOV ESP,EBP                         ; 0053a142
    POP EBP                             ; 0053a144
    POP EDI                             ; 0053a145
    POP ESI                             ; 0053a146
    POP EBX                             ; 0053a147
    RET                                 ; 0053a148

