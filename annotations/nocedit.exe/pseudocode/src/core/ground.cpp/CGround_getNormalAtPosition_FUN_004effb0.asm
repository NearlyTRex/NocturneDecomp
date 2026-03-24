; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack3_esi core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   world_x
; int              Stack[0xc]:4   world_z
; Local Variables:
; undefined4[1008] Stack[-0x1024]:4032  auStackY_1024
; CVector3i        Stack[-0x60]:12  local_60
; CVector3i        Stack[-0x54]:12  local_54
; CVector3i        Stack[-0x48]:12  local_48
; CVector3i        Stack[-0x3c]:12  local_3c
; CVector3i        Stack[-0x30]:12  local_30
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; void *           Stack[-0x1c]:4  local_1c
; void *           Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; Called Functions:
;   engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004effb0
        ;   Label: core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0
    PUSH EDI                            ; 004effb1
    PUSH EBP                            ; 004effb2
    SUB ESP,0x54                        ; 004effb3
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004effb6
    MOV EBP,ESI                         ; 004effba
    MOV ESI,dword ptr [ESP + 0x64]      ; 004effbc
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004effc0
    SHL EBX,0x8                         ; 004effc3
    LEA EAX,[EBX + -0x1]                ; 004effc6
    MOV EDX,0x10000                     ; 004effc9
    AND EAX,EDI                         ; 004effce
    IMUL EDX                            ; 004effd0
    IDIV EBX                            ; 004effd2
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004effd4
    MOV EDX,dword ptr [ESP + 0x68]      ; 004effd7
    SHL EBX,0x8                         ; 004effdb
    MOV dword ptr [ESP + 0x4c],EAX      ; 004effde
    LEA EAX,[EBX + -0x1]                ; 004effe2
    AND EAX,EDX                         ; 004effe5
    MOV EDX,0x10000                     ; 004effe7
    IMUL EDX                            ; 004effec
    IDIV EBX                            ; 004effee
    MOV dword ptr [ESP + 0x50],EAX      ; 004efff0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004efff4
    XOR EDX,EDX                         ; 004efff7
    SHL ECX,0x8                         ; 004efff9
    MOV EAX,EDI                         ; 004efffc
    DIV ECX                             ; 004efffe
    MOV EDI,dword ptr [ESI + 0x8]       ; 004f0000
    AND EDI,EAX                         ; 004f0003
    XOR EDX,EDX                         ; 004f0005
    MOV EAX,dword ptr [ESP + 0x68]      ; 004f0007
    DIV ECX                             ; 004f000b
    MOV EDX,EDI                         ; 004f000d
    MOV ECX,dword ptr [ESI + 0xc]       ; 004f000f
    AND EDX,0x1                         ; 004f0012
    AND EAX,ECX                         ; 004f0015
    MOV dword ptr [ESP + 0x44],EDX      ; 004f0017
    MOV EDX,EAX                         ; 004f001b
    MOV EBX,dword ptr [ESP + 0x44]      ; 004f001d
    AND EDX,0x1                         ; 004f0021
    LEA ECX,[EAX + 0x1]                 ; 004f0024
    MOV dword ptr [ESP + 0x44],EDX      ; 004f0027
    LEA EDX,[EDI + 0x1]                 ; 004f002b
    CMP EBX,dword ptr [ESP + 0x44]      ; 004f002e
    JNZ 0x004f015a                      ; 004f0032
        ;   XREF to: 004f015a (CONDITIONAL_JUMP)  ; LAB_004f015a
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004f0038
    CMP EBX,dword ptr [ESP + 0x50]      ; 004f003c
    JLE 0x004f00d2                      ; 004f0040
        ;   XREF to: 004f00d2 (CONDITIONAL_JUMP)  ; LAB_004f00d2
    MOV EBX,dword ptr [ESI]             ; 004f0046
    IMUL EBX,EAX                        ; 004f0048
    MOV EAX,dword ptr [ESI + 0x24]      ; 004f004b
    MOV dword ptr [ESP + 0x44],EBX      ; 004f004e
    ADD EBX,EDI                         ; 004f0052
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004f0054
    MOV EDI,dword ptr [ESI + 0x20]      ; 004f0058
    IMUL EBX,EDI                        ; 004f005b
    MOV dword ptr [ESP + 0x3c],EBX      ; 004f005e
    MOV EBX,dword ptr [ESI + 0x8]       ; 004f0062
    MOV EDI,dword ptr [ESP + 0x44]      ; 004f0065
    AND EBX,EDX                         ; 004f0069
    ADD EBX,EDI                         ; 004f006b
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004f006d
    IMUL EBX,dword ptr [ESI + 0x20]     ; 004f0071
    AND ECX,dword ptr [ESI + 0xc]       ; 004f0075
    IMUL ECX,dword ptr [ESI]            ; 004f0078
    AND EDX,dword ptr [ESI + 0xc]       ; 004f007b
    ADD EDX,ECX                         ; 004f007e
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004f0080
    MOV EDX,dword ptr [ESI + 0x20]      ; 004f0084
    IMUL EDX,EAX                        ; 004f0087
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f008a
    SUB EAX,EBX                         ; 004f008e
    MOV dword ptr [ESP + 0x24],EAX      ; 004f0090
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004f0094
    SHL EAX,0x8                         ; 004f0097
    LEA EDI,[ESP + 0x24]                ; 004f009a
    MOV dword ptr [ESP + 0x28],EAX      ; 004f009e
    LEA EAX,[ESP + 0x24]                ; 004f00a2
    SUB EBX,EDX                         ; 004f00a6
    PUSH EAX                            ; 004f00a8
    LEA ESI,[ESP + 0x10]                ; 004f00a9
    MOV dword ptr [ESP + 0x30],EBX      ; 004f00ad
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0 ; 004f00b1
        ;   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x10]                ; 004f00b6
    ADD ESP,0x4                         ; 004f00ba
        ;   Label: LAB_004f00ba
    JMP 0x0060c5dd                      ; 004f00bd
        ;   XREF to: 0060c5dd (UNCONDITIONAL_JUMP)  ; LAB_0060c5dd
    MOV EDI,EBP                         ; 004f00c4
        ;   Label: LAB_004f00c4
    JMP 0x0060c5fc                      ; 004f00c6
        ;   XREF to: 0060c5fc (UNCONDITIONAL_JUMP)  ; LAB_0060c5fc
    ADD ESP,0x54                        ; 004f00cb
        ;   Label: LAB_004f00cb
    POP EBP                             ; 004f00ce
    POP EDI                             ; 004f00cf
    POP EBX                             ; 004f00d0
    RET                                 ; 004f00d1
    IMUL EAX,dword ptr [ESI]            ; 004f00d2
        ;   Label: LAB_004f00d2
    ADD EAX,EDI                         ; 004f00d5
    MOV EBX,dword ptr [ESI + 0x24]      ; 004f00d7
    SHL EAX,0x2                         ; 004f00da
    ADD EAX,EBX                         ; 004f00dd
    MOV dword ptr [ESP + 0x44],EBX      ; 004f00df
    MOVSX EAX,word ptr [EAX]            ; 004f00e3
    MOV EBX,dword ptr [ESI + 0x20]      ; 004f00e6
    IMUL EAX,EBX                        ; 004f00e9
    MOV dword ptr [ESP + 0x3c],EAX      ; 004f00ec
    MOV EAX,dword ptr [ESI + 0xc]       ; 004f00f0
    AND EAX,ECX                         ; 004f00f3
    IMUL EAX,dword ptr [ESI]            ; 004f00f5
    AND EDX,dword ptr [ESI + 0x8]       ; 004f00f8
    ADD EDX,EAX                         ; 004f00fb
    MOV ECX,dword ptr [ESP + 0x44]      ; 004f00fd
    SHL EDX,0x2                         ; 004f0101
    ADD EDX,ECX                         ; 004f0104
    MOVSX EDX,word ptr [EDX]            ; 004f0106
    MOV ECX,dword ptr [ESI + 0x20]      ; 004f0109
    IMUL ECX,EDX                        ; 004f010c
    ADD EAX,EDI                         ; 004f010f
    MOV EBX,dword ptr [ESP + 0x44]      ; 004f0111
    SHL EAX,0x2                         ; 004f0115
    ADD EAX,EBX                         ; 004f0118
    MOV EDI,dword ptr [ESI + 0x20]      ; 004f011a
    MOVSX EDX,word ptr [EAX]            ; 004f011d
    IMUL EDX,EDI                        ; 004f0120
    MOV EAX,EDX                         ; 004f0123
    SUB EAX,ECX                         ; 004f0125
    MOV dword ptr [ESP + 0x24],EAX      ; 004f0127
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004f012b
    SHL EAX,0x8                         ; 004f012e
    MOV dword ptr [ESP + 0x28],EAX      ; 004f0131
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f0135
    SUB EAX,EDX                         ; 004f0139
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f013b
    LEA EAX,[ESP + 0x24]                ; 004f013f
    PUSH EAX                            ; 004f0143
    LEA ESI,[ESP + 0x34]                ; 004f0144
    LEA EDI,[ESP + 0x28]                ; 004f0148
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0 ; 004f014c
        ;   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x34]                ; 004f0151
    JMP 0x004f00ba                      ; 004f0155
        ;   XREF to: 004f00ba (UNCONDITIONAL_JUMP)  ; LAB_004f00ba
    MOV EBX,0x10000                     ; 004f015a
        ;   Label: LAB_004f015a
    SUB EBX,dword ptr [ESP + 0x4c]      ; 004f015f
    CMP EBX,dword ptr [ESP + 0x50]      ; 004f0163
    JLE 0x004f0200                      ; 004f0167
        ;   XREF to: 004f0200 (CONDITIONAL_JUMP)  ; LAB_004f0200
    MOV EBX,dword ptr [ESI]             ; 004f016d
    IMUL EBX,EAX                        ; 004f016f
    MOV dword ptr [ESP + 0x44],EBX      ; 004f0172
    LEA EAX,[EBX + EDI*0x1]             ; 004f0176
    SHL EAX,0x2                         ; 004f0179
    MOV EBX,dword ptr [ESI + 0x24]      ; 004f017c
    ADD EAX,EBX                         ; 004f017f
    MOV dword ptr [ESP + 0x48],EBX      ; 004f0181
    MOVSX EAX,word ptr [EAX]            ; 004f0185
    MOV EBX,dword ptr [ESI + 0x20]      ; 004f0188
    IMUL EBX,EAX                        ; 004f018b
    AND EDX,dword ptr [ESI + 0x8]       ; 004f018e
    ADD EDX,dword ptr [ESP + 0x44]      ; 004f0191
    MOV EAX,dword ptr [ESP + 0x48]      ; 004f0195
    SHL EDX,0x2                         ; 004f0199
    ADD EDX,EAX                         ; 004f019c
    MOVSX EAX,word ptr [EDX]            ; 004f019e
    MOV EDX,dword ptr [ESI + 0x20]      ; 004f01a1
    IMUL EAX,EDX                        ; 004f01a4
    MOV dword ptr [ESP + 0x40],EAX      ; 004f01a7
    MOV EAX,dword ptr [ESI + 0xc]       ; 004f01ab
    MOV EDX,dword ptr [ESI]             ; 004f01ae
    AND ECX,EAX                         ; 004f01b0
    IMUL ECX,EDX                        ; 004f01b2
    ADD EDI,ECX                         ; 004f01b5
    MOV ECX,dword ptr [ESP + 0x48]      ; 004f01b7
    SHL EDI,0x2                         ; 004f01bb
    ADD EDI,ECX                         ; 004f01be
    MOV EDX,dword ptr [ESI + 0x20]      ; 004f01c0
    MOVSX EAX,word ptr [EDI]            ; 004f01c3
    IMUL EDX,EAX                        ; 004f01c6
    MOV EDI,dword ptr [ESP + 0x40]      ; 004f01c9
    MOV EAX,EBX                         ; 004f01cd
    SUB EAX,EDI                         ; 004f01cf
    MOV dword ptr [ESP + 0x24],EAX      ; 004f01d1
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004f01d5
    SHL EAX,0x8                         ; 004f01d8
    SUB EBX,EDX                         ; 004f01db
    MOV dword ptr [ESP + 0x28],EAX      ; 004f01dd
    LEA EAX,[ESP + 0x24]                ; 004f01e1
    LEA EDI,[ESP + 0x24]                ; 004f01e5
    PUSH EAX                            ; 004f01e9
    LEA ESI,[ESP + 0x4]                 ; 004f01ea
    MOV dword ptr [ESP + 0x30],EBX      ; 004f01ee
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0 ; 004f01f2
        ;   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x4]                 ; 004f01f7
    JMP 0x004f00ba                      ; 004f01fb
        ;   XREF to: 004f00ba (UNCONDITIONAL_JUMP)  ; LAB_004f00ba
    MOV EBX,dword ptr [ESI + 0x8]       ; 004f0200
        ;   Label: LAB_004f0200
    AND EBX,EDX                         ; 004f0203
    MOV dword ptr [ESP + 0x48],EBX      ; 004f0205
    IMUL EAX,dword ptr [ESI]            ; 004f0209
    ADD EAX,dword ptr [ESP + 0x48]      ; 004f020c
    LEA EDX,[EAX*0x4 + 0x0]             ; 004f0210
    MOV EAX,dword ptr [ESI + 0x24]      ; 004f0217
    MOV EBX,dword ptr [ESI + 0x20]      ; 004f021a
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004f021d
    IMUL EBX,EDX                        ; 004f0221
    MOV dword ptr [ESP + 0x40],EBX      ; 004f0224
    MOV EBX,dword ptr [ESI + 0xc]       ; 004f0228
    MOV EDX,dword ptr [ESI]             ; 004f022b
    AND ECX,EBX                         ; 004f022d
    IMUL ECX,EDX                        ; 004f022f
    MOV EDX,dword ptr [ESP + 0x48]      ; 004f0232
    ADD EDX,ECX                         ; 004f0236
    MOV EBX,dword ptr [ESI + 0x20]      ; 004f0238
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004f023b
    IMUL EDX,EBX                        ; 004f023f
    ADD ECX,EDI                         ; 004f0242
    MOVSX EAX,word ptr [EAX + ECX*0x4]  ; 004f0244
    IMUL EAX,EBX                        ; 004f0248
    SUB EAX,EDX                         ; 004f024b
    MOV dword ptr [ESP + 0x24],EAX      ; 004f024d
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004f0251
    SHL EAX,0x8                         ; 004f0254
    MOV dword ptr [ESP + 0x28],EAX      ; 004f0257
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f025b
    SUB EAX,EDX                         ; 004f025f
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f0261
    LEA EAX,[ESP + 0x24]                ; 004f0265
    PUSH EAX                            ; 004f0269
    LEA ESI,[ESP + 0x1c]                ; 004f026a
    LEA EDI,[ESP + 0x28]                ; 004f026e
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0 ; 004f0272
        ;   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x1c]                ; 004f0277
    JMP 0x004f00ba                      ; 004f027b
        ;   XREF to: 004f00ba (UNCONDITIONAL_JUMP)  ; LAB_004f00ba
    MOV ECX,dword ptr [ESI]             ; 0060c5dd
        ;   Label: LAB_0060c5dd
    MOV dword ptr [EDI],ECX             ; 0060c5df
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c5e1
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c5e4
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c5e7
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c5ea
    ADD ESI,0xc                         ; 0060c5ed
    ADD EDI,0xc                         ; 0060c5f0
    LEA ESI,[ESP + 0x24]                ; 0060c5f3
        ;   Label: LAB_0060c5f3
    JMP 0x004f00c4                      ; 0060c5f7
        ;   XREF to: 004f00c4 (UNCONDITIONAL_JUMP)  ; LAB_004f00c4
    MOV ECX,dword ptr [ESI]             ; 0060c5fc
        ;   Label: LAB_0060c5fc
    MOV dword ptr [EDI],ECX             ; 0060c5fe
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c600
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c603
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c606
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c609
    ADD ESI,0xc                         ; 0060c60c
    ADD EDI,0xc                         ; 0060c60f
    MOV EAX,EBP                         ; 0060c612
    JMP 0x004f00cb                      ; 0060c614
        ;   XREF to: 004f00cb (UNCONDITIONAL_JUMP)  ; LAB_004f00cb

