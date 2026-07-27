; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_00519ec0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0 at 0051e948
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005918f8
;   TerminatedCString s_CDeformableModel_dismemb_0059190d
;   TerminatedCString s_core_skeleton_cpp_00591947
;   TerminatedCString s_CDeformableModel_dismemb_0059195c
;   TerminatedCString s_core_skeleton_cpp_0059198d
;   TerminatedCString s_CDeformableModel_dismemb_005919a2
;   TerminatedCString s_core_skeleton_cpp_005919ce
;   TerminatedCString s_CDeformableModel_dismemb_005919e3
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519ec0
        ;   Label: core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0
    PUSH ESI                            ; 00519ec1
    PUSH EDI                            ; 00519ec2
    PUSH EBP                            ; 00519ec3
    SUB ESP,0x44                        ; 00519ec4
    MOV EBP,dword ptr [ESP + 0x60]      ; 00519ec7
    TEST EBP,EBP                        ; 00519ecb
    JZ 0x0051a429                       ; 00519ecd
        ;   XREF to: 0051a429 (CONDITIONAL_JUMP)  ; LAB_0051a429
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00519ed3
    MOV EDX,dword ptr [ESP + 0x58]      ; 00519ed7
    SHL EAX,0x3                         ; 00519edb
    ADD EAX,EDX                         ; 00519ede
    CMP dword ptr [EAX + 0x8],0x0       ; 00519ee0
    JNZ 0x0051a0c6                      ; 00519ee4
        ;   XREF to: 0051a0c6 (CONDITIONAL_JUMP)  ; LAB_0051a0c6
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00519eea
        ;   Label: LAB_00519eea
    MOV EAX,dword ptr [ESP + 0x58]      ; 00519eee
    SHL ECX,0x2                         ; 00519ef2
    ADD EAX,ECX                         ; 00519ef5
    MOV EBX,dword ptr [ESP + 0x64]      ; 00519ef7
    XOR EDI,EDI                         ; 00519efb
    MOV EDX,dword ptr [EAX + 0x54]      ; 00519efd
    MOV dword ptr [ESP + 0x28],EDI      ; 00519f00
    MOV dword ptr [ESP + 0x24],EDX      ; 00519f04
    XOR EDX,EDX                         ; 00519f08
    TEST EBX,EBX                        ; 00519f0a
    JLE 0x00519f40                      ; 00519f0c
        ;   XREF to: 00519f40 (CONDITIONAL_JUMP)  ; LAB_00519f40
    MOV ESI,dword ptr [ESP + 0x28]      ; 00519f0e
        ;   Label: LAB_00519f0e
    MOV EDI,dword ptr [ESP + 0x24]      ; 00519f12
    MOV EBX,dword ptr [EAX + 0xc24]     ; 00519f16
    ADD EAX,0x60                        ; 00519f1c
    INC EDX                             ; 00519f1f
    ADD ESI,EBX                         ; 00519f20
    MOV EBX,dword ptr [EAX + 0xbd8]     ; 00519f22
    MOV dword ptr [ESP + 0x28],ESI      ; 00519f28
    ADD EDI,EBX                         ; 00519f2c
    MOV EBX,dword ptr [ESP + 0x64]      ; 00519f2e
    MOV dword ptr [ESP + 0x24],EDI      ; 00519f32
    CMP EDX,EBX                         ; 00519f36
    JL 0x00519f0e                       ; 00519f38
        ;   XREF to: 00519f0e (CONDITIONAL_JUMP)  ; LAB_00519f0e
    LEA EAX,[EAX]                       ; 00519f3a
    MOV EDX,dword ptr [ESP + 0x64]      ; 00519f40
        ;   Label: LAB_00519f40
    LEA EAX,[EDX*0x4 + 0x0]             ; 00519f44
    SUB EAX,EDX                         ; 00519f4b
    MOV ESI,dword ptr [ESP + 0x58]      ; 00519f4d
    SHL EAX,0x5                         ; 00519f51
    ADD EAX,ESI                         ; 00519f54
    MOV EDX,dword ptr [ESP + 0x28]      ; 00519f56
    ADD EDX,dword ptr [ECX + EAX*0x1 + 0xc24] ; 00519f5a
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc38] ; 00519f61
    MOV dword ptr [ESP],EDX             ; 00519f68
    MOV EDX,dword ptr [ESP + 0x24]      ; 00519f6b
    ADD ECX,ESI                         ; 00519f6f
    ADD EDX,EBX                         ; 00519f71
    MOV EDI,dword ptr [ECX + 0x2c]      ; 00519f73
    MOV dword ptr [ESP + 0x4],EDX       ; 00519f76
    CMP EDI,0xfa0                       ; 00519f7a
    JLE 0x00519fa4                      ; 00519f80
        ;   XREF to: 00519fa4 (CONDITIONAL_JUMP)  ; LAB_00519fa4
    MOV EAX,0x591947                    ; 00519f82 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x652                       ; 00519f87
    PUSH 0x59195c                       ; 00519f8c | = "CDeformableModel::dismember - too man..."
    MOV [0x01cc4800],EAX                ; 00519f91 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00519f96 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00519f9c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00519fa1
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00519fa4
        ;   Label: LAB_00519fa4
    MOV ECX,dword ptr [ESP + 0x58]      ; 00519fa8
    SHL ESI,0x2                         ; 00519fac
    ADD ESI,ECX                         ; 00519faf
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00519fb1
    SHL EAX,0x2                         ; 00519fb4
    PUSH EAX                            ; 00519fb7
    PUSH 0x0                            ; 00519fb8
    PUSH 0x2671950                      ; 00519fba
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00519fbf
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 00519fc4
    MOV EAX,dword ptr [ESP + 0x28]      ; 00519fc7
    MOV EBX,dword ptr [ESP]             ; 00519fcb
    CMP EAX,EBX                         ; 00519fce
    JGE 0x0051a020                      ; 00519fd0
        ;   XREF to: 0051a020 (CONDITIONAL_JUMP)  ; LAB_0051a020
    MOV EDX,EAX                         ; 00519fd2
    SHL EAX,0x3                         ; 00519fd4
    ADD EAX,EDX                         ; 00519fd7
    MOV EDX,EBX                         ; 00519fd9
    SHL EBX,0x3                         ; 00519fdb
    MOV EDI,0x1                         ; 00519fde
    ADD EBX,EDX                         ; 00519fe3
    ADD EAX,EAX                         ; 00519fe5
    ADD EBX,EBX                         ; 00519fe7
    MOV EDX,dword ptr [ESI + 0x7c]      ; 00519fe9
        ;   Label: LAB_00519fe9
    XOR ECX,ECX                         ; 00519fec
    MOV CX,word ptr [EDX + EAX*0x1]     ; 00519fee
    MOV dword ptr [ECX*0x4 + 0x2671950],EDI ; 00519ff2
    XOR ECX,ECX                         ; 00519ff9
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 00519ffb
    MOV dword ptr [ECX*0x4 + 0x2671950],EDI ; 0051a000
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 0051a007
    AND EDX,0xffff                      ; 0051a00c
    ADD EAX,0x12                        ; 0051a012
    MOV dword ptr [EDX*0x4 + 0x2671950],EDI ; 0051a015
    CMP EAX,EBX                         ; 0051a01c
    JL 0x00519fe9                       ; 0051a01e
        ;   XREF to: 00519fe9 (CONDITIONAL_JUMP)  ; LAB_00519fe9
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051a020
        ;   Label: LAB_0051a020
    CMP EAX,dword ptr [ESP + 0x4]       ; 0051a024
    JGE 0x0051a090                      ; 0051a028
        ;   XREF to: 0051a090 (CONDITIONAL_JUMP)  ; LAB_0051a090
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0051a02a
    MOV EBX,dword ptr [ESP + 0x58]      ; 0051a02e
    MOV EDX,EAX                         ; 0051a032
    SHL EAX,0x3                         ; 0051a034
    SHL EDI,0x2                         ; 0051a037
    ADD EAX,EDX                         ; 0051a03a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a03c
    ADD EDI,EBX                         ; 0051a040
    LEA EBX,[EDX*0x8 + 0x0]             ; 0051a042
    MOV ESI,0x1                         ; 0051a049
    ADD EBX,EDX                         ; 0051a04e
    ADD EAX,EAX                         ; 0051a050
    ADD EBX,EBX                         ; 0051a052
    MOV EDX,dword ptr [EDI + 0x7c]      ; 0051a054
        ;   Label: LAB_0051a054
    XOR ECX,ECX                         ; 0051a057
    MOV CX,word ptr [EDX + EAX*0x1]     ; 0051a059
    MOV dword ptr [ECX*0x4 + 0x2671950],ESI ; 0051a05d
    XOR ECX,ECX                         ; 0051a064
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 0051a066
    MOV dword ptr [ECX*0x4 + 0x2671950],ESI ; 0051a06b
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 0051a072
    AND EDX,0xffff                      ; 0051a077
    ADD EAX,0x12                        ; 0051a07d
    MOV dword ptr [EDX*0x4 + 0x2671950],ESI ; 0051a080
    CMP EAX,EBX                         ; 0051a087
    JL 0x0051a054                       ; 0051a089
        ;   XREF to: 0051a054 (CONDITIONAL_JUMP)  ; LAB_0051a054
    LEA EAX,[EAX]                       ; 0051a08b
    MOV ECX,ECX                         ; 0051a08e
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0051a090
        ;   Label: LAB_0051a090
    MOV EAX,dword ptr [EBP + 0x178]     ; 0051a094
    MOV EBX,dword ptr [EBP + 0x16c]     ; 0051a09a
    XOR EDX,EDX                         ; 0051a0a0
    MOV dword ptr [ESP + 0x40],EAX      ; 0051a0a2
    MOV ECX,EBX                         ; 0051a0a6
    SHL EDI,0x2                         ; 0051a0a8
    XOR EAX,EAX                         ; 0051a0ab
    MOV ESI,dword ptr [ESP + 0x58]      ; 0051a0ad
        ;   Label: LAB_0051a0ad
    CMP EAX,dword ptr [EDI + ESI*0x1 + 0x2c] ; 0051a0b1
    JGE 0x0051a0f1                      ; 0051a0b5
        ;   XREF to: 0051a0f1 (CONDITIONAL_JUMP)  ; LAB_0051a0f1
    CMP dword ptr [EDX + 0x2671950],0x0 ; 0051a0b7
    JNZ 0x0051a0ee                      ; 0051a0be
        ;   XREF to: 0051a0ee (CONDITIONAL_JUMP)  ; LAB_0051a0ee
    INC EAX                             ; 0051a0c0
        ;   Label: LAB_0051a0c0
    ADD EDX,0x4                         ; 0051a0c1
    JMP 0x0051a0ad                      ; 0051a0c4
        ;   XREF to: 0051a0ad (UNCONDITIONAL_JUMP)  ; LAB_0051a0ad
    MOV EBX,0x5918f8                    ; 0051a0c6 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0051a0c6
    MOV ESI,0x63d                       ; 0051a0cb
    PUSH 0x59190d                       ; 0051a0d0 | = "CDeformableModel::dismember - can't d..."
    MOV dword ptr [0x01cc4800],EBX      ; 0051a0d5 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0051a0db | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051a0e1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051a0e6
    JMP 0x00519eea                      ; 0051a0e9
        ;   XREF to: 00519eea (UNCONDITIONAL_JUMP)  ; LAB_00519eea
    INC ECX                             ; 0051a0ee
        ;   Label: LAB_0051a0ee
    JMP 0x0051a0c0                      ; 0051a0ef
        ;   XREF to: 0051a0c0 (UNCONDITIONAL_JUMP)  ; LAB_0051a0c0
    MOV EDX,dword ptr [ESP + 0x64]      ; 0051a0f1
        ;   Label: LAB_0051a0f1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051a0f5
    SUB EAX,EDX                         ; 0051a0fc
    SHL EAX,0x5                         ; 0051a0fe
    ADD EAX,ESI                         ; 0051a101
    ADD EDI,EAX                         ; 0051a103
    MOV EAX,dword ptr [EBP + 0x178]     ; 0051a105
    MOV EDX,dword ptr [EDI + 0xc24]     ; 0051a10b
    MOV ESI,dword ptr [EDI + 0xc38]     ; 0051a111
    ADD EAX,EDX                         ; 0051a117
    ADD EAX,ESI                         ; 0051a119
    PUSH EAX                            ; 0051a11b
    PUSH ECX                            ; 0051a11c
    PUSH EBP                            ; 0051a11d
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0 ; 0051a11e
        ;   XREF to: 00415ee0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0()
    ADD ESP,0xc                         ; 0051a123
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0051a126
    MOV EDX,dword ptr [ESP + 0x58]      ; 0051a12a
    SHL EAX,0x2                         ; 0051a12e
    XOR EDI,EDI                         ; 0051a131
    ADD EDX,EAX                         ; 0051a133
    MOV dword ptr [ESP + 0x3c],EDI      ; 0051a135
    MOV dword ptr [ESP + 0x10],EDX      ; 0051a139
    LEA EDX,[EBX*0x4 + 0x0]             ; 0051a13d
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051a144
    SUB EDX,EBX                         ; 0051a148
    XOR EAX,EAX                         ; 0051a14a
    LEA ECX,[EDX*0x4 + 0x0]             ; 0051a14c
    MOV EDI,dword ptr [ESI + 0x2c]      ; 0051a153
    MOV EDX,dword ptr [ESP + 0x68]      ; 0051a156
    TEST EDI,EDI                        ; 0051a15a
    JLE 0x0051a19c                      ; 0051a15c
        ;   XREF to: 0051a19c (CONDITIONAL_JUMP)  ; LAB_0051a19c
    CMP dword ptr [EAX + 0x2671950],0x0 ; 0051a15e
        ;   Label: LAB_0051a15e
    JZ 0x0051a431                       ; 0051a165
        ;   XREF to: 0051a431 (CONDITIONAL_JUMP)  ; LAB_0051a431
    MOV dword ptr [EAX + 0x2671950],EBX ; 0051a16b
    MOV EDI,dword ptr [EBP + 0x170]     ; 0051a171
    MOV ESI,EDX                         ; 0051a177
    ADD EDI,ECX                         ; 0051a179
    INC EBX                             ; 0051a17b
    ADD ECX,0xc                         ; 0051a17c
    MOVSD ES:EDI,ESI                    ; 0051a17f
    MOVSD ES:EDI,ESI                    ; 0051a180
    MOVSD ES:EDI,ESI                    ; 0051a181
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0051a182
        ;   Label: LAB_0051a182
    INC EDI                             ; 0051a186
    MOV dword ptr [ESP + 0x3c],EDI      ; 0051a187
    MOV ESI,EDI                         ; 0051a18b
    MOV EDI,dword ptr [ESP + 0x10]      ; 0051a18d
    ADD EAX,0x4                         ; 0051a191
    ADD EDX,0xc                         ; 0051a194
    CMP ESI,dword ptr [EDI + 0x2c]      ; 0051a197
    JL 0x0051a15e                       ; 0051a19a
        ;   XREF to: 0051a15e (CONDITIONAL_JUMP)  ; LAB_0051a15e
    CMP EBX,dword ptr [EBP + 0x16c]     ; 0051a19c
        ;   Label: LAB_0051a19c
    JZ 0x0051a1c7                       ; 0051a1a2
        ;   XREF to: 0051a1c7 (CONDITIONAL_JUMP)  ; LAB_0051a1c7
    MOV EDX,0x59198d                    ; 0051a1a4 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x688                       ; 0051a1a9
    PUSH 0x5919a2                       ; 0051a1ae | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x01cc4800],EDX      ; 0051a1b3 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0051a1b9 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051a1bf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051a1c4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051a1c7
        ;   Label: LAB_0051a1c7
    MOV EBX,dword ptr [ESP]             ; 0051a1cb
    CMP EAX,EBX                         ; 0051a1ce
    JGE 0x0051a2f0                      ; 0051a1d0
        ;   XREF to: 0051a2f0 (CONDITIONAL_JUMP)  ; LAB_0051a2f0
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0051a1d6
    MOV EDX,dword ptr [ESP + 0x58]      ; 0051a1da
    SHL EAX,0x2                         ; 0051a1de
    ADD EDX,EAX                         ; 0051a1e1
    MOV dword ptr [ESP + 0x20],EDX      ; 0051a1e3
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051a1e7
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051a1eb
    ADD EDX,EAX                         ; 0051a1f2
    MOV EAX,dword ptr [ESP + 0x58]      ; 0051a1f4
    SHL EDX,0x6                         ; 0051a1f8
    ADD EAX,0xc0                        ; 0051a1fb
    ADD EAX,EDX                         ; 0051a200
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051a202
    MOV dword ptr [ESP + 0x8],EAX       ; 0051a206
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051a20a
    ADD EAX,EDX                         ; 0051a211
    ADD EAX,EAX                         ; 0051a213
    MOV dword ptr [ESP + 0x34],EAX      ; 0051a215
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051a219
    SHL EAX,0x2                         ; 0051a21d
    MOV EDI,EAX                         ; 0051a220
    SHL EDI,0x4                         ; 0051a222
    SUB EDI,EAX                         ; 0051a225
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051a227
    SHL EAX,0x2                         ; 0051a22b
    MOV dword ptr [ESP + 0x2c],EAX      ; 0051a22e
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051a232
    LEA ESI,[EDX*0x4 + 0x0]             ; 0051a239
    MOV dword ptr [ESP + 0x18],EAX      ; 0051a240
    MOV EBX,dword ptr [ESP + 0x20]      ; 0051a244
        ;   Label: LAB_0051a244
    MOV EAX,dword ptr [ESP + 0x34]      ; 0051a248
    MOV EDX,dword ptr [EBP + 0x17c]     ; 0051a24c
    MOV EBX,dword ptr [EBX + 0x7c]      ; 0051a252
    ADD EDX,EDI                         ; 0051a255
    ADD EBX,EAX                         ; 0051a257
    MOV dword ptr [EDX + 0x4],0x3       ; 0051a259
    MOV EAX,EBX                         ; 0051a260
    ADD EBX,0x6                         ; 0051a262
    XOR ECX,ECX                         ; 0051a265
        ;   Label: LAB_0051a265
    MOV CX,word ptr [EAX]               ; 0051a267
    MOV ECX,dword ptr [ECX*0x4 + 0x2671950] ; 0051a26a
    MOV dword ptr [EDX + 0x18],ECX      ; 0051a271
    XOR ECX,ECX                         ; 0051a274
    MOV CX,word ptr [EAX + 0x6]         ; 0051a276
    SHL ECX,0x8                         ; 0051a27a
    MOV dword ptr [EDX + 0x1c],ECX      ; 0051a27d
    XOR ECX,ECX                         ; 0051a280
    MOV CX,word ptr [EAX + 0xc]         ; 0051a282
    ADD EDX,0xc                         ; 0051a286
    SHL ECX,0x8                         ; 0051a289
    ADD EAX,0x2                         ; 0051a28c
    MOV dword ptr [EDX + 0x14],ECX      ; 0051a28f
    CMP EAX,EBX                         ; 0051a292
    JNZ 0x0051a265                      ; 0051a294
        ;   XREF to: 0051a265 (CONDITIONAL_JUMP)  ; LAB_0051a265
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051a296
    MOV EAX,dword ptr [EAX + 0x90]      ; 0051a29a
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0051a2a0
    ADD EAX,dword ptr [ESP + 0x8]       ; 0051a2a4
    ADD EAX,0x8                         ; 0051a2a8
    PUSH EAX                            ; 0051a2ab
    PUSH EBP                            ; 0051a2ac
    ADD EDI,0x3c                        ; 0051a2ad
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90 ; 0051a2b0
        ;   XREF to: 00417c90 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90()
    ADD ESP,0x8                         ; 0051a2b5
    MOV EDX,dword ptr [EBP + 0x180]     ; 0051a2b8
    MOV ECX,dword ptr [ESP + 0x34]      ; 0051a2be
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051a2c2
    ADD ECX,0x12                        ; 0051a2c6
    ADD EDX,EBX                         ; 0051a2c9
    ADD ESI,0x4                         ; 0051a2cb
    MOV dword ptr [ESP + 0x34],ECX      ; 0051a2ce
    MOV dword ptr [EDX],EAX             ; 0051a2d2
    LEA EAX,[EBX + 0x4]                 ; 0051a2d4
    MOV EDX,dword ptr [ESP + 0x40]      ; 0051a2d7
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051a2db
    INC EDX                             ; 0051a2df
    MOV dword ptr [ESP + 0x2c],EAX      ; 0051a2e0
    MOV dword ptr [ESP + 0x40],EDX      ; 0051a2e4
    CMP ESI,EBX                         ; 0051a2e8
    JL 0x0051a244                       ; 0051a2ea
        ;   XREF to: 0051a244 (CONDITIONAL_JUMP)  ; LAB_0051a244
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051a2f0
        ;   Label: LAB_0051a2f0
    CMP EAX,dword ptr [ESP + 0x4]       ; 0051a2f4
    JGE 0x0051a41d                      ; 0051a2f8
        ;   XREF to: 0051a41d (CONDITIONAL_JUMP)  ; LAB_0051a41d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0051a2fe
    MOV EDX,dword ptr [ESP + 0x58]      ; 0051a302
    SHL EAX,0x2                         ; 0051a306
    ADD EDX,EAX                         ; 0051a309
    MOV dword ptr [ESP + 0x1c],EDX      ; 0051a30b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051a30f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051a313
    ADD EAX,EDX                         ; 0051a31a
    MOV EDX,dword ptr [ESP + 0x58]      ; 0051a31c
    SHL EAX,0x6                         ; 0051a320
    ADD EDX,0xc0                        ; 0051a323
    ADD EDX,EAX                         ; 0051a329
    MOV dword ptr [ESP + 0xc],EDX       ; 0051a32b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0051a32f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051a333
    ADD EAX,EDX                         ; 0051a33a
    ADD EAX,EAX                         ; 0051a33c
    MOV dword ptr [ESP + 0x30],EAX      ; 0051a33e
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051a342
    SHL EAX,0x2                         ; 0051a346
    MOV EDX,EAX                         ; 0051a349
    SHL EAX,0x4                         ; 0051a34b
    MOV EDI,dword ptr [ESP + 0x40]      ; 0051a34e
    SUB EAX,EDX                         ; 0051a352
    MOV ESI,dword ptr [ESP + 0x24]      ; 0051a354
    MOV dword ptr [ESP + 0x38],EAX      ; 0051a358
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051a35c
    SHL EDI,0x2                         ; 0051a360
    SHL EAX,0x2                         ; 0051a363
    SHL ESI,0x2                         ; 0051a366
    MOV dword ptr [ESP + 0x14],EAX      ; 0051a369
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051a36d
        ;   Label: LAB_0051a36d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0051a371
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051a375
    MOV EDX,dword ptr [EBP + 0x17c]     ; 0051a379
    MOV EBX,dword ptr [EBX + 0x7c]      ; 0051a37f
    ADD EDX,EAX                         ; 0051a382
    ADD EBX,ECX                         ; 0051a384
    MOV dword ptr [EDX + 0x4],0x3       ; 0051a386
    MOV EAX,EBX                         ; 0051a38d
    ADD EBX,0x6                         ; 0051a38f
    XOR ECX,ECX                         ; 0051a392
        ;   Label: LAB_0051a392
    MOV CX,word ptr [EAX]               ; 0051a394
    MOV ECX,dword ptr [ECX*0x4 + 0x2671950] ; 0051a397
    MOV dword ptr [EDX + 0x18],ECX      ; 0051a39e
    XOR ECX,ECX                         ; 0051a3a1
    MOV CX,word ptr [EAX + 0x6]         ; 0051a3a3
    SHL ECX,0x8                         ; 0051a3a7
    MOV dword ptr [EDX + 0x1c],ECX      ; 0051a3aa
    XOR ECX,ECX                         ; 0051a3ad
    MOV CX,word ptr [EAX + 0xc]         ; 0051a3af
    ADD EDX,0xc                         ; 0051a3b3
    SHL ECX,0x8                         ; 0051a3b6
    ADD EAX,0x2                         ; 0051a3b9
    MOV dword ptr [EDX + 0x14],ECX      ; 0051a3bc
    CMP EAX,EBX                         ; 0051a3bf
    JNZ 0x0051a392                      ; 0051a3c1
        ;   XREF to: 0051a392 (CONDITIONAL_JUMP)  ; LAB_0051a392
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051a3c3
    MOV EAX,dword ptr [EAX + 0x90]      ; 0051a3c7
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0051a3cd
    ADD EAX,dword ptr [ESP + 0xc]       ; 0051a3d1
    ADD EAX,0x8                         ; 0051a3d5
    PUSH EAX                            ; 0051a3d8
    PUSH EBP                            ; 0051a3d9
    ADD EDI,0x4                         ; 0051a3da
    ADD ESI,0x4                         ; 0051a3dd
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90 ; 0051a3e0
        ;   XREF to: 00417c90 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90()
    ADD ESP,0x8                         ; 0051a3e5
    MOV EDX,dword ptr [EBP + 0x180]     ; 0051a3e8
    MOV EBX,dword ptr [ESP + 0x38]      ; 0051a3ee
    MOV ECX,dword ptr [ESP + 0x14]      ; 0051a3f2
    MOV dword ptr [EDX + EDI*0x1 + -0x4],EAX ; 0051a3f6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051a3fa
    ADD EBX,0x3c                        ; 0051a3fe
    MOV EDX,dword ptr [ESP + 0x30]      ; 0051a401
    MOV dword ptr [ESP + 0x38],EBX      ; 0051a405
    INC EAX                             ; 0051a409
    ADD EDX,0x12                        ; 0051a40a
    MOV dword ptr [ESP + 0x40],EAX      ; 0051a40d
    MOV dword ptr [ESP + 0x30],EDX      ; 0051a411
    CMP ESI,ECX                         ; 0051a415
    JL 0x0051a36d                       ; 0051a417
        ;   XREF to: 0051a36d (CONDITIONAL_JUMP)  ; LAB_0051a36d
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051a41d
        ;   Label: LAB_0051a41d
    CMP EAX,dword ptr [EBP + 0x178]     ; 0051a421
    JNZ 0x0051a440                      ; 0051a427
        ;   XREF to: 0051a440 (CONDITIONAL_JUMP)  ; LAB_0051a440
    ADD ESP,0x44                        ; 0051a429
        ;   Label: LAB_0051a429
    POP EBP                             ; 0051a42c
    POP EDI                             ; 0051a42d
    POP ESI                             ; 0051a42e
    POP EBX                             ; 0051a42f
    RET                                 ; 0051a430
    MOV dword ptr [EAX + 0x2671950],0xffffffff ; 0051a431
        ;   Label: LAB_0051a431
    JMP 0x0051a182                      ; 0051a43b
        ;   XREF to: 0051a182 (UNCONDITIONAL_JUMP)  ; LAB_0051a182
    MOV ESI,0x5919ce                    ; 0051a440 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0051a440
    MOV EDI,0x6bf                       ; 0051a445
    PUSH 0x5919e3                       ; 0051a44a | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x01cc4800],ESI      ; 0051a44f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0051a455 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051a45b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051a460
    ADD ESP,0x44                        ; 0051a463
    POP EBP                             ; 0051a466
    POP EDI                             ; 0051a467
    POP ESI                             ; 0051a468
    POP EBX                             ; 0051a469
    RET                                 ; 0051a46a

