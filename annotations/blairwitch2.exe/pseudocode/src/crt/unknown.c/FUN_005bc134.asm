; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc134(float10 *param_1,uint param_2)
;
; Local Variables:
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   crt_unknown.c_FUN_005bc18c at 005bc1de
;
; Referenced Globals:
;   undefined4 DAT_0061f1a0
;   undefined4 DAT_0061f1a4
;   undefined2 DAT_0061f1a8
;
; Called Functions:
;   crt_unknown.c_FUN_005bc91e
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bc134
        ;   Label: crt_unknown.c_FUN_005bc134
    MOV EBP,ESP                         ; 005bc135
    PUSH EBX                            ; 005bc137
    PUSH ESI                            ; 005bc138
    PUSH EDI                            ; 005bc139
    SUB ESP,0xc                         ; 005bc13a
    MOV EDI,dword ptr [EBP + 0xc]       ; 005bc13d
    CMP EDI,0x2000                      ; 005bc140
    JL 0x005bc14d                       ; 005bc146
        ;   XREF to: 005bc14d (CONDITIONAL_JUMP)  ; LAB_005bc14d
    MOV EDI,0x2000                      ; 005bc148
    MOV ESI,0x61f1a0                    ; 005bc14d | DAT_0061f1a0
        ;   Label: LAB_005bc14d
    JMP 0x005bc183                      ; 005bc152
        ;   XREF to: 005bc183 (UNCONDITIONAL_JUMP)  ; LAB_005bc183
    TEST DI,0x1                         ; 005bc154
        ;   Label: LAB_005bc154
    JZ 0x005bc17e                       ; 005bc159
        ;   XREF to: 005bc17e (CONDITIONAL_JUMP)  ; LAB_005bc17e
    MOV AX,word ptr [ESI + 0x8]         ; 005bc15b | DAT_0061f1a8
    MOV word ptr [EBP + -0x10],AX       ; 005bc15f
    MOV EAX,dword ptr [ESI + 0x4]       ; 005bc163 | DAT_0061f1a4
    MOV dword ptr [EBP + -0x14],EAX     ; 005bc166
    MOV EBX,dword ptr [EBP + 0x8]       ; 005bc169
    MOV EAX,dword ptr [ESI]             ; 005bc16c | DAT_0061f1a0
    LEA EDX,[EBP + -0x18]               ; 005bc16e
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc171
    MOV EAX,EBX                         ; 005bc174
    FLD extended double ptr [EAX]       ; 005bc176
    FLD extended double ptr [EDX]       ; 005bc178
    FMULP                               ; 005bc17a
    FSTP extended double ptr [EBX]      ; 005bc17c
    SAR EDI,0x1                         ; 005bc17e
        ;   Label: LAB_005bc17e
    ADD ESI,0xa                         ; 005bc180
    TEST EDI,EDI                        ; 005bc183
        ;   Label: LAB_005bc183
    JG 0x005bc154                       ; 005bc185
        ;   XREF to: 005bc154 (CONDITIONAL_JUMP)  ; LAB_005bc154
    JMP 0x005bc91e                      ; 005bc187
        ;   XREF to: 005bc91e (UNCONDITIONAL_CALL)

