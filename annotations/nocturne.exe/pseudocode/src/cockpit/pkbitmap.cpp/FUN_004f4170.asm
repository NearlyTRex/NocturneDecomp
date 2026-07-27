; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_004f4170(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7 )
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
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
;   cockpit_pkbitmap.cpp_FUN_004f4310 at 004f43e9
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4170
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f4170
    PUSH ESI                            ; 004f4171
    PUSH EDI                            ; 004f4172
    PUSH EBP                            ; 004f4173
    SUB ESP,0x24                        ; 004f4174
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f4177
    CMP dword ptr [EAX + 0x20],0x0      ; 004f417b
    JZ 0x004f4268                       ; 004f417f
        ;   XREF to: 004f4268 (CONDITIONAL_JUMP)  ; LAB_004f4268
    CMP dword ptr [EAX + 0x14],0x0      ; 004f4185
    JZ 0x004f4268                       ; 004f4189
        ;   XREF to: 004f4268 (CONDITIONAL_JUMP)  ; LAB_004f4268
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f418f
    MOV dword ptr [ESP + 0x8],EAX       ; 004f4193
    MOV EAX,dword ptr [ESP + 0x48]      ; 004f4197
    MOV EBX,dword ptr [ESP + 0x44]      ; 004f419b
    MOV dword ptr [ESP + 0xc],EAX       ; 004f419f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f41a3
    SUB EAX,EBX                         ; 004f41a7
    MOV ESI,dword ptr [0x005b7624]      ; 004f41a9 | DAT_005b7624
    MOV dword ptr [ESP + 0x4],EAX       ; 004f41af
    CMP ESI,0x10                        ; 004f41b3
    JNZ 0x004f41bf                      ; 004f41b6
        ;   XREF to: 004f41bf (CONDITIONAL_JUMP)  ; LAB_004f41bf
    LEA EDI,[EAX + EAX*0x1]             ; 004f41b8
    MOV dword ptr [ESP + 0x4],EDI       ; 004f41bb
    CALL cockpit_ckptutil.c_FUN_0042d130 ; 004f41bf
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042d130()
        ;   Label: LAB_004f41bf
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f41c4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f41c8
    SHL EAX,0x2                         ; 004f41cc
    MOV dword ptr [ESP + 0x10],EAX      ; 004f41cf
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f41d3
    SHL EAX,0x2                         ; 004f41d7
    MOV dword ptr [ESP + 0x14],EAX      ; 004f41da
    MOV EAX,dword ptr [ESP + 0x50]      ; 004f41de
    SHL EAX,0x2                         ; 004f41e2
    MOV dword ptr [ESP],EAX             ; 004f41e5
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f41e8
        ;   Label: LAB_004f41e8
    MOV EBP,dword ptr [ESP + 0x14]      ; 004f41ec
    MOV EAX,dword ptr [EAX + 0x20]      ; 004f41f0
    MOV EDX,dword ptr [ESP + 0x38]      ; 004f41f3
    ADD EAX,EBP                         ; 004f41f7
    MOV EDX,dword ptr [EDX + 0x14]      ; 004f41f9
    MOV EBX,dword ptr [EAX]             ; 004f41fc
    MOV EAX,dword ptr [EAX + 0x4]       ; 004f41fe
    ADD EAX,EDX                         ; 004f4201
    MOV dword ptr [ESP + 0x20],EAX      ; 004f4203
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f4207
    ADD EBX,EDX                         ; 004f420b
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f420d
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 004f4211 | DAT_01bd2fa0 | DAT_01bd2fa4
    ADD EDX,EAX                         ; 004f4217
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f4219
    MOV dword ptr [ESP + 0x18],EDX      ; 004f421d
    CMP EBX,EAX                         ; 004f4221
    JNC 0x004f4239                      ; 004f4223
        ;   XREF to: 004f4239 (CONDITIONAL_JUMP)  ; LAB_004f4239
    MOV EDI,dword ptr [ESP + 0x44]      ; 004f4225
    XOR EAX,EAX                         ; 004f4229
        ;   Label: LAB_004f4229
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004f422b
    MOV AX,word ptr [EBX]               ; 004f422f
    LEA ECX,[EBX + 0x4]                 ; 004f4232
    CMP EAX,ESI                         ; 004f4235
    JLE 0x004f4270                      ; 004f4237
        ;   XREF to: 004f4270 (CONDITIONAL_JUMP)  ; LAB_004f4270
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f4239
        ;   Label: LAB_004f4239
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f423d
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4241
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f4245
    MOV ESI,dword ptr [ESP]             ; 004f4249
    INC EDX                             ; 004f424c
    ADD ECX,0x4                         ; 004f424d
    INC EBX                             ; 004f4250
    ADD EAX,0x4                         ; 004f4251
    MOV dword ptr [ESP + 0xc],EDX       ; 004f4254
    MOV dword ptr [ESP + 0x10],ECX      ; 004f4258
    MOV dword ptr [ESP + 0x8],EBX       ; 004f425c
    MOV dword ptr [ESP + 0x14],EAX      ; 004f4260
    CMP EAX,ESI                         ; 004f4264
    JLE 0x004f41e8                      ; 004f4266
        ;   XREF to: 004f41e8 (CONDITIONAL_JUMP)  ; LAB_004f41e8
    ADD ESP,0x24                        ; 004f4268
        ;   Label: LAB_004f4268
    POP EBP                             ; 004f426b
    POP EDI                             ; 004f426c
    POP ESI                             ; 004f426d
    POP EBX                             ; 004f426e
    RET                                 ; 004f426f
    XOR EDX,EDX                         ; 004f4270
        ;   Label: LAB_004f4270
    MOV DX,word ptr [EBX + 0x2]         ; 004f4272
    LEA EBX,[EDX + 0x3]                 ; 004f4276
    LEA ESI,[EAX + EDX*0x1]             ; 004f4279
    AND BL,0xfc                         ; 004f427c
    DEC ESI                             ; 004f427f
    ADD EBX,ECX                         ; 004f4280
    CMP ESI,EDI                         ; 004f4282
    JGE 0x004f428e                      ; 004f4284
        ;   XREF to: 004f428e (CONDITIONAL_JUMP)  ; LAB_004f428e
    CMP EBX,dword ptr [ESP + 0x20]      ; 004f4286
    JNC 0x004f4239                      ; 004f428a
        ;   XREF to: 004f4239 (CONDITIONAL_JUMP)  ; LAB_004f4239
    JMP 0x004f4229                      ; 004f428c
        ;   XREF to: 004f4229 (UNCONDITIONAL_JUMP)  ; LAB_004f4229
    CMP EAX,EDI                         ; 004f428e
        ;   Label: LAB_004f428e
    JL 0x004f42c0                       ; 004f4290
        ;   XREF to: 004f42c0 (CONDITIONAL_JUMP)  ; LAB_004f42c0
    MOV EDI,dword ptr [ESP + 0x18]      ; 004f4292
        ;   Label: LAB_004f4292
    MOV EBP,dword ptr [0x005b7624]      ; 004f4296 | DAT_005b7624
    ADD EDI,EAX                         ; 004f429c
    CMP EBP,0x10                        ; 004f429e
    JNZ 0x004f42a5                      ; 004f42a1
        ;   XREF to: 004f42a5 (CONDITIONAL_JUMP)  ; LAB_004f42a5
    ADD EDI,EAX                         ; 004f42a3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004f42a5
        ;   Label: LAB_004f42a5
    CMP ESI,EAX                         ; 004f42a9
    JLE 0x004f42cc                      ; 004f42ab
        ;   XREF to: 004f42cc (CONDITIONAL_JUMP)  ; LAB_004f42cc
    SUB ESI,EAX                         ; 004f42ad
    SUB EDX,ESI                         ; 004f42af
    PUSH EDX                            ; 004f42b1
    PUSH ECX                            ; 004f42b2
    PUSH EDI                            ; 004f42b3
    CALL dword ptr [ESP + 0x28]         ; 004f42b4
    ADD ESP,0xc                         ; 004f42b8
    JMP 0x004f4239                      ; 004f42bb
        ;   XREF to: 004f4239 (UNCONDITIONAL_JUMP)  ; LAB_004f4239
    SUB EDI,EAX                         ; 004f42c0
        ;   Label: LAB_004f42c0
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f42c2
    ADD ECX,EDI                         ; 004f42c6
    SUB EDX,EDI                         ; 004f42c8
    JMP 0x004f4292                      ; 004f42ca
        ;   XREF to: 004f4292 (UNCONDITIONAL_JUMP)  ; LAB_004f4292
    PUSH EDX                            ; 004f42cc
        ;   Label: LAB_004f42cc
    PUSH ECX                            ; 004f42cd
    PUSH EDI                            ; 004f42ce
    CALL dword ptr [ESP + 0x28]         ; 004f42cf
    ADD ESP,0xc                         ; 004f42d3
    CMP EBX,dword ptr [ESP + 0x20]      ; 004f42d6
    JNC 0x004f4239                      ; 004f42da
        ;   XREF to: 004f4239 (CONDITIONAL_JUMP)  ; LAB_004f4239
    XOR EAX,EAX                         ; 004f42e0
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004f42e2
    MOV AX,word ptr [EBX]               ; 004f42e6
    LEA ECX,[EBX + 0x4]                 ; 004f42e9
    CMP EAX,ESI                         ; 004f42ec
    JG 0x004f4239                       ; 004f42ee
        ;   XREF to: 004f4239 (CONDITIONAL_JUMP)  ; LAB_004f4239
    XOR EDX,EDX                         ; 004f42f4
    MOV DX,word ptr [EBX + 0x2]         ; 004f42f6
    LEA EBX,[EDX + 0x3]                 ; 004f42fa
    LEA ESI,[EAX + EDX*0x1]             ; 004f42fd
    AND BL,0xfc                         ; 004f4300
    DEC ESI                             ; 004f4303
    ADD EBX,ECX                         ; 004f4304
    JMP 0x004f4292                      ; 004f4306
        ;   XREF to: 004f4292 (UNCONDITIONAL_JUMP)  ; LAB_004f4292

