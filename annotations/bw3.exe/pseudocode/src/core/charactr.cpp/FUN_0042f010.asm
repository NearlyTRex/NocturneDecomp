; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042f010(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042d8e0 at 0042d978
;
; Referenced Globals:
;   undefined4 DAT_005b836e
;   undefined4 DAT_005dd230
;   undefined4 DAT_005f0f5c
;   undefined4 DAT_005f2afc
;   undefined4 DAT_007e2cf4
;   undefined4 DAT_007e2cf8
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_0054e3a0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f010
        ;   Label: core_charactr.cpp_FUN_0042f010
    PUSH ESI                            ; 0042f011
    PUSH EDI                            ; 0042f012
    PUSH EBP                            ; 0042f013
    MOV EBP,ESP                         ; 0042f014
    SUB ESP,0x20                        ; 0042f016
    AND ESP,0xfffffff8                  ; 0042f019
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f01c
    CMP dword ptr [EAX + 0x33a0],0x0    ; 0042f01f
    JNZ 0x0042f02f                      ; 0042f026
        ;   XREF to: 0042f02f (CONDITIONAL_JUMP)  ; LAB_0042f02f
    MOV ESP,EBP                         ; 0042f028
    POP EBP                             ; 0042f02a
    POP EDI                             ; 0042f02b
    POP ESI                             ; 0042f02c
    POP EBX                             ; 0042f02d
    RET                                 ; 0042f02e
    PUSH 0x5f0f5c                       ; 0042f02f | DAT_005f0f5c
        ;   Label: LAB_0042f02f
    MOV ECX,dword ptr [0x005f2afc]      ; 0042f034 | DAT_005f2afc
    PUSH ECX                            ; 0042f03a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0042f03b
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0042f040
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f043
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042f046
    MOV EBX,dword ptr [EAX + 0xbc68]    ; 0042f049
    ADD EDI,0x158                       ; 0042f04f
    TEST EBX,EBX                        ; 0042f055
    JNZ 0x0042f1c4                      ; 0042f057
        ;   XREF to: 0042f1c4 (CONDITIONAL_JUMP)  ; LAB_0042f1c4
    PUSH EDI                            ; 0042f05d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0042f05e
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f063
    PUSH EDI                            ; 0042f066
    MOV ESI,EAX                         ; 0042f067
    MOV EBX,EAX                         ; 0042f069
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0042f06b
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f070
    MOV dword ptr [ESP + 0x10],EAX      ; 0042f073
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f077
    MOV EAX,dword ptr [EAX + 0x2478]    ; 0042f07a
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0042f080
    MOV dword ptr [ESP + 0x8],EAX       ; 0042f086
    XOR EAX,EAX                         ; 0042f08a
    TEST EDI,EDI                        ; 0042f08c
    JLE 0x0042f0b0                      ; 0042f08e
        ;   XREF to: 0042f0b0 (CONDITIONAL_JUMP)  ; LAB_0042f0b0
    XOR EDX,EDX                         ; 0042f090
    XOR ECX,ECX                         ; 0042f092
        ;   Label: LAB_0042f092
    MOV dword ptr [EDX + 0x7e2cf4],ECX  ; 0042f094 | DAT_007e2cf4 | DAT_007e2cf8
    INC EAX                             ; 0042f09a
    MOV ESI,dword ptr [EBX + 0x1de78]   ; 0042f09b
    ADD EDX,0x4                         ; 0042f0a1
    CMP EAX,ESI                         ; 0042f0a4
    JL 0x0042f092                       ; 0042f0a6
        ;   XREF to: 0042f092 (CONDITIONAL_JUMP)  ; LAB_0042f092
    LEA EAX,[EAX]                       ; 0042f0a8
    MOV EDX,EDX                         ; 0042f0ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f0b0
        ;   Label: LAB_0042f0b0
    MOV EDI,dword ptr [EAX + 0x33a0]    ; 0042f0b3
    XOR ECX,ECX                         ; 0042f0b9
    TEST EDI,EDI                        ; 0042f0bb
    JLE 0x0042f104                      ; 0042f0bd
        ;   XREF to: 0042f104 (CONDITIONAL_JUMP)  ; LAB_0042f104
    FLD float ptr [0x005dd230]          ; 0042f0bf | DAT_005dd230
    FLD double ptr [0x005b836e]         ; 0042f0c5 | DAT_005b836e
    MOV EDX,EAX                         ; 0042f0cb
    FLD float ptr [EDX + 0x33c0]        ; 0042f0cd
        ;   Label: LAB_0042f0cd
    MOV EAX,dword ptr [EDX + 0x33b0]    ; 0042f0d3
    FMUL ST1                            ; 0042f0d9
    FLD float ptr [EAX*0x4 + 0x7e2cf4]  ; 0042f0db | DAT_007e2cf4
    FLD ST3                             ; 0042f0e2
    FDIVP ST2,ST0                       ; 0042f0e4
    FADDP                               ; 0042f0e6
    FSTP float ptr [EAX*0x4 + 0x7e2cf4] ; 0042f0e8 | DAT_007e2cf4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f0ef
    INC ECX                             ; 0042f0f2
    MOV ESI,dword ptr [EAX + 0x33a0]    ; 0042f0f3
    ADD EDX,0x18                        ; 0042f0f9
    CMP ECX,ESI                         ; 0042f0fc
    JL 0x0042f0cd                       ; 0042f0fe
        ;   XREF to: 0042f0cd (CONDITIONAL_JUMP)  ; LAB_0042f0cd
    FSTP ST0                            ; 0042f100
    FSTP ST0                            ; 0042f102
    MOV EDI,dword ptr [EBX + 0x1de78]   ; 0042f104
        ;   Label: LAB_0042f104
    XOR ECX,ECX                         ; 0042f10a
    XOR EDX,EDX                         ; 0042f10c
    TEST EDI,EDI                        ; 0042f10e
    JLE 0x0042f141                      ; 0042f110
        ;   XREF to: 0042f141 (CONDITIONAL_JUMP)  ; LAB_0042f141
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042f112
    FLD float ptr [ECX*0x4 + 0x7e2cf4]  ; 0042f116 | DAT_007e2cf4 | DAT_007e2cf8
        ;   Label: LAB_0042f116
    FCOMP double ptr [0x005b836e]       ; 0042f11d | DAT_005b836e
    FNSTSW AX                           ; 0042f123
    SAHF                                ; 0042f125
    JC 0x0042f129                       ; 0042f126
        ;   XREF to: 0042f129 (CONDITIONAL_JUMP)  ; LAB_0042f129
    INC EDX                             ; 0042f128
    CMP dword ptr [EDI + 0x33cc],-0x1   ; 0042f129
        ;   Label: LAB_0042f129
    JNZ 0x0042f133                      ; 0042f130
        ;   XREF to: 0042f133 (CONDITIONAL_JUMP)  ; LAB_0042f133
    INC EDX                             ; 0042f132
    INC ECX                             ; 0042f133
        ;   Label: LAB_0042f133
    MOV EAX,dword ptr [EBX + 0x1de78]   ; 0042f134
    ADD EDI,0x4                         ; 0042f13a
    CMP ECX,EAX                         ; 0042f13d
    JL 0x0042f116                       ; 0042f13f
        ;   XREF to: 0042f116 (CONDITIONAL_JUMP)  ; LAB_0042f116
    CMP EDX,dword ptr [EBX + 0x1de78]   ; 0042f141
        ;   Label: LAB_0042f141
    JZ 0x0042f1df                       ; 0042f147
        ;   XREF to: 0042f1df (CONDITIONAL_JUMP)  ; LAB_0042f1df
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042f14d
        ;   Label: LAB_0042f14d
    XOR EDI,EDI                         ; 0042f151
    SHL EAX,0x2                         ; 0042f153
    MOV dword ptr [ESP + 0x14],EDI      ; 0042f156
    MOV dword ptr [ESP + 0x18],EDI      ; 0042f15a
    MOV dword ptr [ESP + 0xc],EAX       ; 0042f15e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042f162
        ;   Label: LAB_0042f162
    ADD EAX,dword ptr [ESP + 0xc]       ; 0042f166
    CMP EDI,dword ptr [EAX + 0x2c]      ; 0042f16a
    JGE 0x0042f258                      ; 0042f16d
        ;   XREF to: 0042f258 (CONDITIONAL_JUMP)  ; LAB_0042f258
    MOV ESI,dword ptr [EAX + 0x40]      ; 0042f173
    XOR EBX,EBX                         ; 0042f176
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042f178
    XOR EDX,EDX                         ; 0042f17c
    ADD ESI,EAX                         ; 0042f17e
    MOV dword ptr [ESP],EBX             ; 0042f180
    MOV ECX,ESI                         ; 0042f183
    MOV EBX,ESI                         ; 0042f185
    XOR EAX,EAX                         ; 0042f187
        ;   Label: LAB_0042f187
    MOV AL,byte ptr [ESI]               ; 0042f189
    CMP EDX,EAX                         ; 0042f18b
    JGE 0x0042f20b                      ; 0042f18d
        ;   XREF to: 0042f20b (CONDITIONAL_JUMP)  ; LAB_0042f20b
    XOR EAX,EAX                         ; 0042f193
    MOV AL,byte ptr [EBX + 0x1]         ; 0042f195
    FLD float ptr [ECX + 0x4]           ; 0042f198
    FMUL float ptr [EAX*0x4 + 0x7e2cf4] ; 0042f19b | DAT_007e2cf4
    CALL crt_math.c_round_FUN_005a3120  ; 0042f1a2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1c]        ; 0042f1a7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042f1ab
    ADD ECX,0x4                         ; 0042f1af
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042f1b2
    INC EBX                             ; 0042f1b6
    FILD dword ptr [ESP + 0x1c]         ; 0042f1b7
    FADD float ptr [ESP]                ; 0042f1bb
    INC EDX                             ; 0042f1be
    FSTP float ptr [ESP]                ; 0042f1bf
    JMP 0x0042f187                      ; 0042f1c2
        ;   XREF to: 0042f187 (UNCONDITIONAL_JUMP)  ; LAB_0042f187
    PUSH 0x1                            ; 0042f1c4
        ;   Label: LAB_0042f1c4
    PUSH 0x0                            ; 0042f1c6
    PUSH 0xc9                           ; 0042f1c8
    PUSH -0x1                           ; 0042f1cd
    PUSH EDI                            ; 0042f1cf
    CALL core_skeleton.cpp_FUN_0054e3a0 ; 0042f1d0
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0042f1d5
    MOV ESP,EBP                         ; 0042f1d8
    POP EBP                             ; 0042f1da
    POP EDI                             ; 0042f1db
    POP ESI                             ; 0042f1dc
    POP EBX                             ; 0042f1dd
    RET                                 ; 0042f1de
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f1df
        ;   Label: LAB_0042f1df
    CMP dword ptr [EAX + 0x2538],0x40a00000 ; 0042f1e2
    JGE 0x0042f14d                      ; 0042f1ec
        ;   XREF to: 0042f14d (CONDITIONAL_JUMP)  ; LAB_0042f14d
    MOV dword ptr [EAX + 0xbc6c],0x3f800000 ; 0042f1f2
    MOV dword ptr [EAX + 0xbc68],0x1    ; 0042f1fc
    JMP 0x0042f14d                      ; 0042f206
        ;   XREF to: 0042f14d (UNCONDITIONAL_JUMP)  ; LAB_0042f14d
    FLD float ptr [ESP]                 ; 0042f20b
        ;   Label: LAB_0042f20b
    FCOMP double ptr [0x005b836e]       ; 0042f20e | DAT_005b836e
    FNSTSW AX                           ; 0042f214
    SAHF                                ; 0042f216
    JBE 0x0042f220                      ; 0042f217
        ;   XREF to: 0042f220 (CONDITIONAL_JUMP)  ; LAB_0042f220
    MOV dword ptr [ESP],0x477fff00      ; 0042f219
    FLD float ptr [ESP]                 ; 0042f220
        ;   Label: LAB_0042f220
    MOV ECX,dword ptr [ESP + 0x18]      ; 0042f223
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042f227
    MOV EAX,[0x005f2afc]                ; 0042f22b | DAT_005f2afc
    CALL crt_math.c_round_FUN_005a3120  ; 0042f230
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    INC EDI                             ; 0042f235
    FISTP dword ptr [ESP + 0x1c]        ; 0042f236
    ADD EBX,0x34                        ; 0042f23a
    MOV EDX,dword ptr [EAX]             ; 0042f23d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042f23f
    ADD EDX,ECX                         ; 0042f243
    MOV dword ptr [ESP + 0x14],EBX      ; 0042f245
    LEA ESI,[ECX + 0x30]                ; 0042f249
    MOV dword ptr [EDX + 0x2c],EAX      ; 0042f24c
    MOV dword ptr [ESP + 0x18],ESI      ; 0042f24f
    JMP 0x0042f162                      ; 0042f253
        ;   XREF to: 0042f162 (UNCONDITIONAL_JUMP)  ; LAB_0042f162
    PUSH 0x1                            ; 0042f258
        ;   Label: LAB_0042f258
    PUSH 0x0                            ; 0042f25a
    PUSH 0x163                          ; 0042f25c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042f261
    PUSH -0x1                           ; 0042f264
    ADD EAX,0x158                       ; 0042f266
    PUSH EAX                            ; 0042f26b
    CALL core_skeleton.cpp_FUN_0054e3a0 ; 0042f26c
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0042f271
    MOV ESP,EBP                         ; 0042f274
    POP EBP                             ; 0042f276
    POP EDI                             ; 0042f277
    POP ESI                             ; 0042f278
    POP EBX                             ; 0042f279
    RET                                 ; 0042f27a

