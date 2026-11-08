; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4090(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_007c6120
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01e82168
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_00467270
;   FUN_004837b0
;   FUN_00483850
;   FUN_00483e60
;   FUN_00484fd0
;   FUN_00551c30
;   FUN_0058043c
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4090
        ;   Label: FUN_004b4090
    PUSH ESI                            ; 004b4091
    PUSH EDI                            ; 004b4092
    PUSH EBP                            ; 004b4093
    SUB ESP,0xc                         ; 004b4094
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b4097
    FLD float ptr [ESI + 0x24]          ; 004b409b
    FLDZ                                ; 004b409e
    FCOMPP                              ; 004b40a0
    FNSTSW AX                           ; 004b40a2
    SAHF                                ; 004b40a4
    JC 0x004b40af                       ; 004b40a5
        ;   XREF to: 004b40af (CONDITIONAL_JUMP)  ; LAB_004b40af
    ADD ESP,0xc                         ; 004b40a7
        ;   Label: LAB_004b40a7
    POP EBP                             ; 004b40aa
    POP EDI                             ; 004b40ab
    POP ESI                             ; 004b40ac
    POP EBX                             ; 004b40ad
    RET                                 ; 004b40ae
    MOV EDI,dword ptr [0x00612560]      ; 004b40af | DAT_00612560
        ;   Label: LAB_004b40af
    MOV EBX,ESP                         ; 004b40b5
    MOV EAX,ESI                         ; 004b40b7
    MOV EDI,dword ptr [EDI]             ; 004b40b9 | DAT_01bc120c
    FLD float ptr [EAX]                 ; 004b40bb
    FMUL float ptr [0x005fff94]         ; 004b40bd | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b40c3
    FLD float ptr [EAX + 0x4]           ; 004b40c5
    FMUL float ptr [0x005fff94]         ; 004b40c8 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b40ce
    FLD float ptr [EAX + 0x8]           ; 004b40d1
    FMUL float ptr [0x005fff94]         ; 004b40d4 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b40da
    MOV EAX,ESP                         ; 004b40dd
    PUSH EAX                            ; 004b40df
    PUSH EDI                            ; 004b40e0
    CALL FUN_0058043c                   ; 004b40e1
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; undefined FUN_0058043c()
    ADD ESP,0x8                         ; 004b40e6
    PUSH EDI                            ; 004b40e9
    MOV EDX,dword ptr [0x00612560]      ; 004b40ea | DAT_00612560
    PUSH EDX                            ; 004b40f0 | DAT_01bc120c
    CALL FUN_00484fd0                   ; 004b40f1
        ;   XREF to: 00484fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484fd0()
    ADD ESP,0x8                         ; 004b40f6
    TEST EAX,EAX                        ; 004b40f9
    JZ 0x004b40a7                       ; 004b40fb
        ;   XREF to: 004b40a7 (CONDITIONAL_JUMP)  ; LAB_004b40a7
    MOV ECX,dword ptr [0x00612560]      ; 004b40fd | DAT_00612560
    PUSH ECX                            ; 004b4103 | DAT_01bc120c
    CALL FUN_00483e60                   ; 004b4104
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 004b4109
    TEST EAX,EAX                        ; 004b410c
    JNZ 0x004b4122                      ; 004b410e
        ;   XREF to: 004b4122 (CONDITIONAL_JUMP)  ; LAB_004b4122
    PUSH 0x0                            ; 004b4110
    MOV EAX,[0x007c6120]                ; 004b4112 | DAT_007c6120
    PUSH ESI                            ; 004b4117
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004b4118
    PUSH EAX                            ; 004b411b
    CALL dword ptr [EBX + 0x4]          ; 004b411c
    ADD ESP,0xc                         ; 004b411f
    PUSH 0x0                            ; 004b4122
        ;   Label: LAB_004b4122
    PUSH 0x2c8af28                      ; 004b4124 | DAT_02c8af28
    PUSH 0x2c8af28                      ; 004b4129 | DAT_02c8af28
    LEA EBX,[ESI + 0x40]                ; 004b412e
    PUSH EBX                            ; 004b4131
    PUSH ESI                            ; 004b4132
    MOV EDI,dword ptr [0x00622c18]      ; 004b4133 | DAT_00622c18
    PUSH EDI                            ; 004b4139 | DAT_01e82168
    CALL FUN_00551c30                   ; 004b413a
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    ADD ESP,0x18                        ; 004b413f
    PUSH ESI                            ; 004b4142
    MOV EBP,dword ptr [0x00612560]      ; 004b4143 | DAT_00612560
    PUSH EBP                            ; 004b4149 | DAT_01bc120c
    CALL FUN_004837b0                   ; 004b414a
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 004b414f
    PUSH 0x0                            ; 004b4152
    PUSH EBX                            ; 004b4154
    MOV EAX,[0x00612560]                ; 004b4155 | DAT_00612560
    PUSH EAX                            ; 004b415a | DAT_01bc120c
    CALL FUN_00483850                   ; 004b415b
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 004b4160
    PUSH -0x1                           ; 004b4163
    PUSH 0x0                            ; 004b4165
    PUSH 0x0                            ; 004b4167
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004b4169
    PUSH EDX                            ; 004b416c
    CALL FUN_00467270                   ; 004b416d
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; undefined FUN_00467270()
    ADD ESP,0x10                        ; 004b4172
    MOV ECX,dword ptr [0x00612560]      ; 004b4175 | DAT_00612560
    PUSH ECX                            ; 004b417b | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 004b417c
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004b4181
    ADD ESP,0xc                         ; 004b4184
    POP EBP                             ; 004b4187
    POP EDI                             ; 004b4188
    POP ESI                             ; 004b4189
    POP EBX                             ; 004b418a
    RET                                 ; 004b418b

