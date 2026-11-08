; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00504080(int *param_1,int param_2,float param_3,int *param_4,int *param_5,float *param_6)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00544f80 at 00544fbd
;   FUN_00545a60 at 00545aa2
;   FUN_00547b80 at 00547bb6
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504080
        ;   Label: FUN_00504080
    PUSH ESI                            ; 00504081
    PUSH EDI                            ; 00504082
    PUSH EBP                            ; 00504083
    SUB ESP,0x8                         ; 00504084
    MOV ECX,dword ptr [ESP + 0x28]      ; 00504087
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0050408b
    MOV EBX,dword ptr [ESP + 0x30]      ; 0050408f
    MOV EDX,dword ptr [ESP + 0x20]      ; 00504093
    LEA EAX,[EDX*0x8 + 0x0]             ; 00504097
    ADD EAX,EDX                         ; 0050409e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005040a0
    SHL EAX,0x2                         ; 005040a4
    FLD float ptr [ESP + 0x24]          ; 005040a7
    SUB EAX,EDX                         ; 005040ab
    MOV ESI,dword ptr [ESI]             ; 005040ad
    SHL EAX,0x3                         ; 005040af
    LEA EDX,[ESI + 0x1c28]              ; 005040b2
    FLDZ                                ; 005040b8
    ADD EDX,EAX                         ; 005040ba
    FCOMPP                              ; 005040bc
    FNSTSW AX                           ; 005040be
    SAHF                                ; 005040c0
    JNC 0x00504151                      ; 005040c1
        ;   XREF to: 00504151 (CONDITIONAL_JUMP)  ; LAB_00504151
    MOV EAX,dword ptr [EDX + 0x64]      ; 005040c7
    DEC EAX                             ; 005040ca
    MOV dword ptr [ESP + 0x4],EAX       ; 005040cb
    FILD dword ptr [ESP + 0x4]          ; 005040cf
    FCOMP float ptr [ESP + 0x24]        ; 005040d3
    FNSTSW AX                           ; 005040d7
    SAHF                                ; 005040d9
    JA 0x00504184                       ; 005040da
        ;   XREF to: 00504184 (CONDITIONAL_JUMP)  ; LAB_00504184
    MOV ESI,dword ptr [EDX + 0x64]      ; 005040e0
    MOV EAX,dword ptr [EDX + 0x60]      ; 005040e3
    ADD EAX,ESI                         ; 005040e6
    DEC EAX                             ; 005040e8
    MOV dword ptr [ECX],EAX             ; 005040e9
    MOV EAX,dword ptr [EDX + 0x64]      ; 005040eb
    MOV EBP,dword ptr [EDX + 0x28]      ; 005040ee
    DEC EAX                             ; 005040f1
    CMP EAX,EBP                         ; 005040f2
    JG 0x00504172                       ; 005040f4
        ;   XREF to: 00504172 (CONDITIONAL_JUMP)  ; LAB_00504172
    CMP dword ptr [EDX + 0x30],0x1      ; 005040fa
    JNZ 0x00504172                      ; 005040fe
        ;   XREF to: 00504172 (CONDITIONAL_JUMP)  ; LAB_00504172
    MOV ESI,dword ptr [EDX + 0x34]      ; 00504104
    LEA EAX,[ESI*0x8 + 0x0]             ; 00504107
    ADD EAX,ESI                         ; 0050410e
    SHL EAX,0x2                         ; 00504110
    SUB EAX,ESI                         ; 00504113
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00504115
    MOV ESI,dword ptr [ESI]             ; 00504119
    FILD dword ptr [ESI + EAX*0x8 + 0x1c88] ; 0050411b
    FADD float ptr [EDX + 0x38]         ; 00504122
    CALL FUN_005b7ff0                   ; 00504125
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EDI]               ; 0050412a
    MOV EAX,dword ptr [EDX + 0x64]      ; 0050412c
    DEC EAX                             ; 0050412f
    MOV dword ptr [ESP + 0x4],EAX       ; 00504130
    FILD dword ptr [ESP + 0x4]          ; 00504134
    FSUBR float ptr [ESP + 0x24]        ; 00504138
    FST float ptr [EBX]                 ; 0050413c
    FLD1                                ; 0050413e
    FCOMPP                              ; 00504140
    FNSTSW AX                           ; 00504142
    SAHF                                ; 00504144
    JBE 0x00504160                      ; 00504145
        ;   XREF to: 00504160 (CONDITIONAL_JUMP)  ; LAB_00504160
    ADD ESP,0x8                         ; 00504147
        ;   Label: LAB_00504147
    POP EBP                             ; 0050414a
    POP EDI                             ; 0050414b
    POP ESI                             ; 0050414c
    POP EBX                             ; 0050414d
    MOV EAX,EAX                         ; 0050414e
    RET                                 ; 00504150
    MOV EAX,dword ptr [EDX + 0x60]      ; 00504151
        ;   Label: LAB_00504151
    MOV dword ptr [ECX],EAX             ; 00504154
    MOV dword ptr [EDI],EAX             ; 00504156
    MOV dword ptr [EBX],0x0             ; 00504158
    JMP 0x00504147                      ; 0050415e
        ;   XREF to: 00504147 (UNCONDITIONAL_JUMP)  ; LAB_00504147
    MOV EAX,dword ptr [EDI]             ; 00504160
        ;   Label: LAB_00504160
    MOV dword ptr [ECX],EAX             ; 00504162
    MOV dword ptr [EBX],0x0             ; 00504164
    ADD ESP,0x8                         ; 0050416a
    POP EBP                             ; 0050416d
    POP EDI                             ; 0050416e
    POP ESI                             ; 0050416f
    POP EBX                             ; 00504170
    RET                                 ; 00504171
    MOV EAX,dword ptr [ECX]             ; 00504172
        ;   Label: LAB_00504172
    MOV dword ptr [EDI],EAX             ; 00504174
    MOV dword ptr [EBX],0x0             ; 00504176
    ADD ESP,0x8                         ; 0050417c
    POP EBP                             ; 0050417f
    POP EDI                             ; 00504180
    POP ESI                             ; 00504181
    POP EBX                             ; 00504182
    RET                                 ; 00504183
    FILD dword ptr [EDX + 0x60]         ; 00504184
        ;   Label: LAB_00504184
    FADD float ptr [ESP + 0x24]         ; 00504187
    FLD ST0                             ; 0050418b
    CALL FUN_005b7ff0                   ; 0050418d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ECX]               ; 00504192
    MOV EAX,dword ptr [ECX]             ; 00504194
    INC EAX                             ; 00504196
    MOV dword ptr [EDI],EAX             ; 00504197
    FILD dword ptr [ECX]                ; 00504199
    FSUBP                               ; 0050419b
    FSTP float ptr [EBX]                ; 0050419d
    ADD ESP,0x8                         ; 0050419f
    POP EBP                             ; 005041a2
    POP EDI                             ; 005041a3
    POP ESI                             ; 005041a4
    POP EBX                             ; 005041a5
    RET                                 ; 005041a6

