; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f4090(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d06cf8
;   undefined4 DAT_01d06d0c
;   undefined4 DAT_01d06d10
;   undefined4 DAT_01d06d1c
;   undefined4 DAT_01d06d24
;
; Called Functions:
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4090
        ;   Label: FUN_004f4090
    PUSH ESI                            ; 004f4091
    PUSH EDI                            ; 004f4092
    PUSH EBP                            ; 004f4093
    SUB ESP,0x78                        ; 004f4094
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004f4097
    MOV EAX,dword ptr [EBP + 0xc29c]    ; 004f409e
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x2298] ; 004f40a4
    XOR EBX,EBX                         ; 004f40ab
    TEST EDX,EDX                        ; 004f40ad
    JNZ 0x004f4200                      ; 004f40af
        ;   XREF to: 004f4200 (CONDITIONAL_JUMP)  ; LAB_004f4200
    MOV EAX,dword ptr [EBP + 0xc274]    ; 004f40b5
        ;   Label: LAB_004f40b5
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004f40bb
    JZ 0x004f4118                       ; 004f40c3
        ;   XREF to: 004f4118 (CONDITIONAL_JUMP)  ; LAB_004f4118
    MOV EAX,[0x01d06d0c]                ; 004f40c5 | DAT_01d06d0c
    PUSH EAX                            ; 004f40ca
    LEA EAX,[EBP + 0x158]               ; 004f40cb
    PUSH EAX                            ; 004f40d1
    LEA ESI,[ESP + 0x5c]                ; 004f40d2
    LEA EDI,[ESP + 0x8]                 ; 004f40d6
    CALL FUN_00569130                   ; 004f40da
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004f40df
    ADD ESP,0x8                         ; 004f40e6
    SUB EAX,EBX                         ; 004f40e9
    MOV EDX,dword ptr [ESP + 0x90]      ; 004f40eb
    SHL EAX,0x2                         ; 004f40f2
    LEA ESI,[ESP + 0x54]                ; 004f40f5
    ADD EDX,EAX                         ; 004f40f9
    MOV EAX,ESP                         ; 004f40fb
    MOVSD ES:EDI,ESI                    ; 004f40fd
    MOVSD ES:EDI,ESI                    ; 004f40fe
    MOVSD ES:EDI,ESI                    ; 004f40ff
    CMP EDX,EAX                         ; 004f4100
    JZ 0x004f4117                       ; 004f4102
        ;   XREF to: 004f4117 (CONDITIONAL_JUMP)  ; LAB_004f4117
    MOV EAX,dword ptr [ESP]             ; 004f4104
    MOV dword ptr [EDX],EAX             ; 004f4107
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4109
    MOV dword ptr [EDX + 0x4],EAX       ; 004f410d
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f4110
    MOV dword ptr [EDX + 0x8],EAX       ; 004f4114
    INC EBX                             ; 004f4117
        ;   Label: LAB_004f4117
    MOV EAX,dword ptr [EBP + 0xc27c]    ; 004f4118
        ;   Label: LAB_004f4118
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004f411e
    JZ 0x004f417f                       ; 004f4126
        ;   XREF to: 004f417f (CONDITIONAL_JUMP)  ; LAB_004f417f
    MOV ECX,dword ptr [0x01d06d10]      ; 004f4128 | DAT_01d06d10
    PUSH ECX                            ; 004f412e
    LEA EAX,[EBP + 0x158]               ; 004f412f
    PUSH EAX                            ; 004f4135
    LEA ESI,[ESP + 0x14]                ; 004f4136
    LEA EDI,[ESP + 0x74]                ; 004f413a
    CALL FUN_00569130                   ; 004f413e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004f4143
    ADD ESP,0x8                         ; 004f414a
    SUB EAX,EBX                         ; 004f414d
    MOV EDX,dword ptr [ESP + 0x90]      ; 004f414f
    SHL EAX,0x2                         ; 004f4156
    LEA ESI,[ESP + 0xc]                 ; 004f4159
    ADD EDX,EAX                         ; 004f415d
    LEA EAX,[ESP + 0x6c]                ; 004f415f
    MOVSD ES:EDI,ESI                    ; 004f4163
    MOVSD ES:EDI,ESI                    ; 004f4164
    MOVSD ES:EDI,ESI                    ; 004f4165
    CMP EDX,EAX                         ; 004f4166
    JZ 0x004f417e                       ; 004f4168
        ;   XREF to: 004f417e (CONDITIONAL_JUMP)  ; LAB_004f417e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004f416a
    MOV dword ptr [EDX],EAX             ; 004f416e
    MOV EAX,dword ptr [ESP + 0x70]      ; 004f4170
    MOV dword ptr [EDX + 0x4],EAX       ; 004f4174
    MOV EAX,dword ptr [ESP + 0x74]      ; 004f4177
    MOV dword ptr [EDX + 0x8],EAX       ; 004f417b
    INC EBX                             ; 004f417e
        ;   Label: LAB_004f417e
    MOV EAX,dword ptr [EBP + 0xc294]    ; 004f417f
        ;   Label: LAB_004f417f
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004f4185
    JZ 0x004f41e6                       ; 004f418d
        ;   XREF to: 004f41e6 (CONDITIONAL_JUMP)  ; LAB_004f41e6
    MOV EDI,dword ptr [0x01d06d1c]      ; 004f418f | DAT_01d06d1c
    PUSH EDI                            ; 004f4195
    LEA EAX,[EBP + 0x158]               ; 004f4196
    PUSH EAX                            ; 004f419c
    LEA ESI,[ESP + 0x2c]                ; 004f419d
    LEA EDI,[ESP + 0x68]                ; 004f41a1
    CALL FUN_00569130                   ; 004f41a5
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004f41aa
    ADD ESP,0x8                         ; 004f41b1
    SUB EAX,EBX                         ; 004f41b4
    MOV EDX,dword ptr [ESP + 0x90]      ; 004f41b6
    SHL EAX,0x2                         ; 004f41bd
    LEA ESI,[ESP + 0x24]                ; 004f41c0
    ADD EDX,EAX                         ; 004f41c4
    LEA EAX,[ESP + 0x60]                ; 004f41c6
    MOVSD ES:EDI,ESI                    ; 004f41ca
    MOVSD ES:EDI,ESI                    ; 004f41cb
    MOVSD ES:EDI,ESI                    ; 004f41cc
    CMP EDX,EAX                         ; 004f41cd
    JZ 0x004f41e5                       ; 004f41cf
        ;   XREF to: 004f41e5 (CONDITIONAL_JUMP)  ; LAB_004f41e5
    MOV EAX,dword ptr [ESP + 0x60]      ; 004f41d1
    MOV dword ptr [EDX],EAX             ; 004f41d5
    MOV EAX,dword ptr [ESP + 0x64]      ; 004f41d7
    MOV dword ptr [EDX + 0x4],EAX       ; 004f41db
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f41de
    MOV dword ptr [EDX + 0x8],EAX       ; 004f41e2
    INC EBX                             ; 004f41e5
        ;   Label: LAB_004f41e5
    MOV EAX,dword ptr [EBP + 0xc298]    ; 004f41e6
        ;   Label: LAB_004f41e6
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004f41ec
    JNZ 0x004f424e                      ; 004f41f4
        ;   XREF to: 004f424e (CONDITIONAL_JUMP)  ; LAB_004f424e
    MOV EAX,EBX                         ; 004f41f6
    ADD ESP,0x78                        ; 004f41f8
    POP EBP                             ; 004f41fb
    POP EDI                             ; 004f41fc
    POP ESI                             ; 004f41fd
    POP EBX                             ; 004f41fe
    RET                                 ; 004f41ff
    MOV ECX,dword ptr [0x01d06cf8]      ; 004f4200 | DAT_01d06cf8
        ;   Label: LAB_004f4200
    PUSH ECX                            ; 004f4206
    LEA EAX,[EBP + 0x158]               ; 004f4207
    PUSH EAX                            ; 004f420d
    LEA ESI,[ESP + 0x20]                ; 004f420e
    LEA EDI,[ESP + 0x44]                ; 004f4212
    CALL FUN_00569130                   ; 004f4216
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x20]                ; 004f421b
    ADD ESP,0x8                         ; 004f421f
    MOVSD ES:EDI,ESI                    ; 004f4222
    MOVSD ES:EDI,ESI                    ; 004f4223
    MOVSD ES:EDI,ESI                    ; 004f4224
    LEA EAX,[ESP + 0x3c]                ; 004f4225
    MOV ESI,dword ptr [ESP + 0x90]      ; 004f4229
    CMP EAX,ESI                         ; 004f4230
    JZ 0x004f4248                       ; 004f4232
        ;   XREF to: 004f4248 (CONDITIONAL_JUMP)  ; LAB_004f4248
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f4234
    MOV dword ptr [ESI],EAX             ; 004f4238
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f423a
    MOV dword ptr [ESI + 0x4],EAX       ; 004f423e
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f4241
    MOV dword ptr [ESI + 0x8],EAX       ; 004f4245
    INC EBX                             ; 004f4248
        ;   Label: LAB_004f4248
    JMP 0x004f40b5                      ; 004f4249
        ;   XREF to: 004f40b5 (UNCONDITIONAL_JUMP)  ; LAB_004f40b5
    MOV ECX,dword ptr [0x01d06d24]      ; 004f424e | DAT_01d06d24
        ;   Label: LAB_004f424e
    PUSH ECX                            ; 004f4254
    ADD EBP,0x158                       ; 004f4255
    PUSH EBP                            ; 004f425b
    LEA ESI,[ESP + 0x38]                ; 004f425c
    LEA EDI,[ESP + 0x50]                ; 004f4260
    CALL FUN_00569130                   ; 004f4264
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004f4269
    ADD ESP,0x8                         ; 004f4270
    SUB EAX,EBX                         ; 004f4273
    MOV EDX,dword ptr [ESP + 0x90]      ; 004f4275
    SHL EAX,0x2                         ; 004f427c
    LEA ESI,[ESP + 0x30]                ; 004f427f
    ADD EDX,EAX                         ; 004f4283
    LEA EAX,[ESP + 0x48]                ; 004f4285
    MOVSD ES:EDI,ESI                    ; 004f4289
    MOVSD ES:EDI,ESI                    ; 004f428a
    MOVSD ES:EDI,ESI                    ; 004f428b
    CMP EDX,EAX                         ; 004f428c
    JZ 0x004f42a4                       ; 004f428e
        ;   XREF to: 004f42a4 (CONDITIONAL_JUMP)  ; LAB_004f42a4
    MOV EAX,dword ptr [ESP + 0x48]      ; 004f4290
    MOV dword ptr [EDX],EAX             ; 004f4294
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004f4296
    MOV dword ptr [EDX + 0x4],EAX       ; 004f429a
    MOV EAX,dword ptr [ESP + 0x50]      ; 004f429d
    MOV dword ptr [EDX + 0x8],EAX       ; 004f42a1
    INC EBX                             ; 004f42a4
        ;   Label: LAB_004f42a4
    MOV EAX,EBX                         ; 004f42a5
    ADD ESP,0x78                        ; 004f42a7
    POP EBP                             ; 004f42aa
    POP EDI                             ; 004f42ab
    POP ESI                             ; 004f42ac
    POP EBX                             ; 004f42ad
    RET                                 ; 004f42ae

