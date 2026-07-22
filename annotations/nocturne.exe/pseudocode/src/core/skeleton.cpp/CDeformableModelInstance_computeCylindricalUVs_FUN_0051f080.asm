; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_FUN_004270e0 at 004271e1
;
; Referenced Globals:
;   string s_..\\core\\skeleton.cpp_00591d6f
;   string s_CDeformableModelInstance::comput_00591d84
;   undefined4 DAT_00591dcb
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   crt_math.c_atan2_FUN_00566c81
;   crt_math.c_round_FUN_00563a30
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f080
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080
    PUSH ESI                            ; 0051f081
    PUSH EDI                            ; 0051f082
    PUSH EBP                            ; 0051f083
    SUB ESP,0x8                         ; 0051f084
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051f087
    CMP dword ptr [EAX + 0x2230],0x0    ; 0051f08b
    JL 0x0051f164                       ; 0051f092
        ;   XREF to: 0051f164 (CONDITIONAL_JUMP)  ; LAB_0051f164
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051f098
        ;   Label: LAB_0051f098
    PUSH ESI                            ; 0051f09c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051f09d
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    MOV EDX,dword ptr [ESI + 0x2230]    ; 0051f0a2
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x2c] ; 0051f0a8
    MOV EDX,dword ptr [ESI + 0x2234]    ; 0051f0ac
    MOV EDI,0x1                         ; 0051f0b2
    ADD ESP,0x4                         ; 0051f0b7
    MOV ESI,dword ptr [EDX + 0x4]       ; 0051f0ba
    MOV EAX,ECX                         ; 0051f0bd
    MOV EBP,ESI                         ; 0051f0bf
    CMP ECX,EDI                         ; 0051f0c1
    JLE 0x0051f0dd                      ; 0051f0c3
        ;   XREF to: 0051f0dd (CONDITIONAL_JUMP)  ; LAB_0051f0dd
    LEA ECX,[EDX + 0xc]                 ; 0051f0c5
    MOV EDX,dword ptr [ECX + 0x4]       ; 0051f0c8
        ;   Label: LAB_0051f0c8
    CMP EDX,ESI                         ; 0051f0cb
    JGE 0x0051f18c                      ; 0051f0cd
        ;   XREF to: 0051f18c (CONDITIONAL_JUMP)  ; LAB_0051f18c
    MOV ESI,EDX                         ; 0051f0d3
    INC EDI                             ; 0051f0d5
        ;   Label: LAB_0051f0d5
    ADD ECX,0xc                         ; 0051f0d6
    CMP EDI,EAX                         ; 0051f0d9
    JL 0x0051f0c8                       ; 0051f0db
        ;   XREF to: 0051f0c8 (CONDITIONAL_JUMP)  ; LAB_0051f0c8
    SUB EBP,ESI                         ; 0051f0dd
        ;   Label: LAB_0051f0dd
    CMP EBP,0x1                         ; 0051f0df
    JGE 0x0051f0e9                      ; 0051f0e2
        ;   XREF to: 0051f0e9 (CONDITIONAL_JUMP)  ; LAB_0051f0e9
    MOV EBP,0x1                         ; 0051f0e4
    TEST EAX,EAX                        ; 0051f0e9
        ;   Label: LAB_0051f0e9
    JLE 0x0051f15c                      ; 0051f0eb
        ;   XREF to: 0051f15c (CONDITIONAL_JUMP)  ; LAB_0051f15c
    MOV EDX,EAX                         ; 0051f0ed
    SHL EAX,0x2                         ; 0051f0ef
    SUB EAX,EDX                         ; 0051f0f2
    XOR ECX,ECX                         ; 0051f0f4
    SHL EAX,0x4                         ; 0051f0f6
    XOR EDI,EDI                         ; 0051f0f9
    MOV dword ptr [ESP + 0x4],EAX       ; 0051f0fb
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051f0ff
        ;   Label: LAB_0051f0ff
    MOV EDX,dword ptr [EDX + 0x2234]    ; 0051f103
    ADD EDX,EDI                         ; 0051f109
    CMP dword ptr [EDX],0x0             ; 0051f10b
    JNZ 0x0051f19b                      ; 0051f10e
        ;   XREF to: 0051f19b (CONDITIONAL_JUMP)  ; LAB_0051f19b
    CMP dword ptr [EDX + 0x8],0x0       ; 0051f114
    JNZ 0x0051f19b                      ; 0051f118
        ;   XREF to: 0051f19b (CONDITIONAL_JUMP)  ; LAB_0051f19b
    MOV EAX,[0x005ae704]                ; 0051f11e | DAT_005ae704
    MOV EAX,dword ptr [EAX]             ; 0051f123 | DAT_01b4d738
    MOV EBX,dword ptr [ESP + 0x20]      ; 0051f125
    MOV dword ptr [ECX + EAX*0x1 + 0x18],EBX ; 0051f129
        ;   Label: LAB_0051f129
    MOV EBX,EBP                         ; 0051f12d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0051f12f
    MOV EDX,0x1000000                   ; 0051f132
    SUB EAX,ESI                         ; 0051f137
    IMUL EDX                            ; 0051f139
    IDIV EBX                            ; 0051f13b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0051f13d
    ADD EDX,EAX                         ; 0051f141
    MOV EAX,[0x005ae704]                ; 0051f143 | DAT_005ae704
    ADD ECX,0x30                        ; 0051f148
    MOV EAX,dword ptr [EAX]             ; 0051f14b | DAT_01b4d738
    MOV dword ptr [ECX + EAX*0x1 + -0x14],EDX ; 0051f14d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051f151
    ADD EDI,0xc                         ; 0051f155
    CMP ECX,EAX                         ; 0051f158
    JL 0x0051f0ff                       ; 0051f15a
        ;   XREF to: 0051f0ff (CONDITIONAL_JUMP)  ; LAB_0051f0ff
    ADD ESP,0x8                         ; 0051f15c
        ;   Label: LAB_0051f15c
    POP EBP                             ; 0051f15f
    POP EDI                             ; 0051f160
    POP ESI                             ; 0051f161
    POP EBX                             ; 0051f162
    RET                                 ; 0051f163
    MOV ECX,0x591d6f                    ; 0051f164 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0051f164
    MOV EBX,0xfa7                       ; 0051f169
    PUSH 0x591d84                       ; 0051f16e | = "CDeformableModelInstance::computeCyli..."
    MOV dword ptr [0x01cc4800],ECX      ; 0051f173 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0051f179 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0051f17f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0051f184
    JMP 0x0051f098                      ; 0051f187
        ;   XREF to: 0051f098 (UNCONDITIONAL_JUMP)  ; LAB_0051f098
    CMP EDX,EBP                         ; 0051f18c
        ;   Label: LAB_0051f18c
    JLE 0x0051f0d5                      ; 0051f18e
        ;   XREF to: 0051f0d5 (CONDITIONAL_JUMP)  ; LAB_0051f0d5
    MOV EBP,EDX                         ; 0051f194
    JMP 0x0051f0d5                      ; 0051f196
        ;   XREF to: 0051f0d5 (UNCONDITIONAL_JUMP)  ; LAB_0051f0d5
    FILD dword ptr [EDX + 0x8]          ; 0051f19b
        ;   Label: LAB_0051f19b
    FILD dword ptr [EDX]                ; 0051f19e
    CALL crt_math.c_atan2_FUN_00566c81  ; 0051f1a0
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    FMUL double ptr [0x00591dcb]        ; 0051f1a5 | DAT_00591dcb
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051f1ab
    CALL crt_math.c_round_FUN_00563a30  ; 0051f1af
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP]               ; 0051f1b4
    MOV EBX,dword ptr [ESP]             ; 0051f1b7
    ADD EAX,EBX                         ; 0051f1ba
    MOV dword ptr [ESP],EAX             ; 0051f1bc
    MOV EAX,[0x005ae704]                ; 0051f1bf | DAT_005ae704
    MOV EAX,dword ptr [EAX]             ; 0051f1c4 | DAT_01b4d738
    MOV EBX,dword ptr [ESP]             ; 0051f1c6
    JMP 0x0051f129                      ; 0051f1c9
        ;   XREF to: 0051f129 (UNCONDITIONAL_JUMP)  ; LAB_0051f129

