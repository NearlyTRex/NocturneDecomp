; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_prye_cpp_CPrye_canDoHeroAction_FUN_005260b0(CPrye *this_ptr,int action_type)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   action_type
;
; Referenced Globals:
;   undefined1* switchdataD_00526078 = 0052627a
;   undefined4 DAT_005cd95f
;   undefined4 DAT_005cd967
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
;   core_hero.cpp_FUN_004d4840
;   core_motion.cpp_FUN_004fc350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005260b0
        ;   Label: core_prye.cpp_CPrye_canDoHeroAction_FUN_005260b0
    PUSH ESI                            ; 005260b1
    PUSH EDI                            ; 005260b2
    PUSH EBP                            ; 005260b3
    SUB ESP,0x8                         ; 005260b4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005260b7
    MOV EBP,dword ptr [ESP + 0x20]      ; 005260bb
    MOV EDX,dword ptr [ESI + 0x20b64]   ; 005260bf
    TEST EDX,EDX                        ; 005260c5
    JZ 0x005260d3                       ; 005260c7
        ;   XREF to: 005260d3 (CONDITIONAL_JUMP)  ; LAB_005260d3
    XOR EAX,EAX                         ; 005260c9
        ;   Label: LAB_005260c9
    ADD ESP,0x8                         ; 005260cb
    POP EBP                             ; 005260ce
    POP EDI                             ; 005260cf
    POP ESI                             ; 005260d0
    POP EBX                             ; 005260d1
    RET                                 ; 005260d2
    PUSH EDX                            ; 005260d3
        ;   Label: LAB_005260d3
    LEA EBX,[ESI + 0x158]               ; 005260d4
    PUSH EBX                            ; 005260da
    CALL core_motion.cpp_FUN_004fc350   ; 005260db
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x8],EAX       ; 005260e0
    ADD ESP,0x8                         ; 005260e4
    PUSH 0x1                            ; 005260e7
    PUSH EBX                            ; 005260e9
    CALL core_motion.cpp_FUN_004fc350   ; 005260ea
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 005260ef
    FLD float ptr [ESP + 0xc]           ; 005260f3
    ADD ESP,0x8                         ; 005260f7
    PUSH 0x4                            ; 005260fa
    FADD float ptr [ESP + 0x4]          ; 005260fc
    PUSH EBX                            ; 00526100
    FSTP float ptr [ESP + 0x8]          ; 00526101
    CALL core_motion.cpp_FUN_004fc350   ; 00526105
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 0052610a
    FLD float ptr [ESP + 0xc]           ; 0052610e
    ADD ESP,0x8                         ; 00526112
    PUSH 0x7                            ; 00526115
    FADD float ptr [ESP + 0x4]          ; 00526117
    PUSH EBX                            ; 0052611b
    FSTP float ptr [ESP + 0x8]          ; 0052611c
    CALL core_motion.cpp_FUN_004fc350   ; 00526120
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 00526125
    FLD float ptr [ESP + 0xc]           ; 00526129
    ADD ESP,0x8                         ; 0052612d
    PUSH 0x8                            ; 00526130
    FADD float ptr [ESP + 0x4]          ; 00526132
    PUSH EBX                            ; 00526136
    FSTP float ptr [ESP + 0x8]          ; 00526137
    CALL core_motion.cpp_FUN_004fc350   ; 0052613b
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 00526140
    FLD float ptr [ESP + 0xc]           ; 00526144
    ADD ESP,0x8                         ; 00526148
    PUSH 0x9                            ; 0052614b
    FADD float ptr [ESP + 0x4]          ; 0052614d
    PUSH EBX                            ; 00526151
    FSTP float ptr [ESP + 0x8]          ; 00526152
    CALL core_motion.cpp_FUN_004fc350   ; 00526156
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 0052615b
    FLD float ptr [ESP + 0xc]           ; 0052615f
    ADD ESP,0x8                         ; 00526163
    PUSH 0xa                            ; 00526166
    FADD float ptr [ESP + 0x4]          ; 00526168
    PUSH EBX                            ; 0052616c
    FSTP float ptr [ESP + 0x8]          ; 0052616d
    CALL core_motion.cpp_FUN_004fc350   ; 00526171
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 00526176
    FLD float ptr [ESP + 0xc]           ; 0052617a
    ADD ESP,0x8                         ; 0052617e
    PUSH 0xb                            ; 00526181
    FADD float ptr [ESP + 0x4]          ; 00526183
    PUSH EBX                            ; 00526187
    FSTP float ptr [ESP + 0x8]          ; 00526188
    CALL core_motion.cpp_FUN_004fc350   ; 0052618c
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 00526191
    FLD float ptr [ESP + 0xc]           ; 00526195
    ADD ESP,0x8                         ; 00526199
    PUSH 0xc                            ; 0052619c
    FADD float ptr [ESP + 0x4]          ; 0052619e
    PUSH EBX                            ; 005261a2
    FSTP float ptr [ESP + 0x8]          ; 005261a3
    CALL core_motion.cpp_FUN_004fc350   ; 005261a7
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 005261ac
    FLD float ptr [ESP + 0xc]           ; 005261b0
    ADD ESP,0x8                         ; 005261b4
    PUSH 0xd                            ; 005261b7
    FADD float ptr [ESP + 0x4]          ; 005261b9
    PUSH EBX                            ; 005261bd
    FSTP float ptr [ESP + 0x8]          ; 005261be
    CALL core_motion.cpp_FUN_004fc350   ; 005261c2
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 005261c7
    FLD float ptr [ESP + 0xc]           ; 005261cb
    ADD ESP,0x8                         ; 005261cf
    PUSH 0xe                            ; 005261d2
    FADD float ptr [ESP + 0x4]          ; 005261d4
    PUSH EBX                            ; 005261d8
    FSTP float ptr [ESP + 0x8]          ; 005261d9
    CALL core_motion.cpp_FUN_004fc350   ; 005261dd
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 005261e2
    FLD float ptr [ESP + 0xc]           ; 005261e6
    ADD ESP,0x8                         ; 005261ea
    PUSH 0xf                            ; 005261ed
    FADD float ptr [ESP + 0x4]          ; 005261ef
    PUSH EBX                            ; 005261f3
    FSTP float ptr [ESP + 0x8]          ; 005261f4
    CALL core_motion.cpp_FUN_004fc350   ; 005261f8
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 005261fd
    FLD float ptr [ESP + 0xc]           ; 00526201
    ADD ESP,0x8                         ; 00526205
    PUSH 0x10                           ; 00526208
    FADD float ptr [ESP + 0x4]          ; 0052620a
    PUSH EBX                            ; 0052620e
    FSTP float ptr [ESP + 0x8]          ; 0052620f
    CALL core_motion.cpp_FUN_004fc350   ; 00526213
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 00526218
    FLD float ptr [ESP + 0xc]           ; 0052621c
    ADD ESP,0x8                         ; 00526220
    PUSH 0x5                            ; 00526223
    FADD float ptr [ESP + 0x4]          ; 00526225
    PUSH EBX                            ; 00526229
    FSTP float ptr [ESP + 0x8]          ; 0052622a
    CALL core_motion.cpp_FUN_004fc350   ; 0052622e
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 00526233
    FLD float ptr [ESP + 0xc]           ; 00526237
    ADD ESP,0x8                         ; 0052623b
    PUSH 0x6                            ; 0052623e
    FADD float ptr [ESP + 0x4]          ; 00526240
    PUSH EBX                            ; 00526244
    FSTP float ptr [ESP + 0x8]          ; 00526245
    CALL core_motion.cpp_FUN_004fc350   ; 00526249
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0xc],EAX       ; 0052624e
    FLD float ptr [ESP + 0xc]           ; 00526252
    ADD ESP,0x8                         ; 00526256
    FADD float ptr [ESP]                ; 00526259
    XOR EDI,EDI                         ; 0052625c
    FCOMP double ptr [0x005cd95f]       ; 0052625e | DAT_005cd95f
    FNSTSW AX                           ; 00526264
    SAHF                                ; 00526266
    JBE 0x0052626e                      ; 00526267
        ;   XREF to: 0052626e (CONDITIONAL_JUMP)  ; LAB_0052626e
    MOV EDI,0x1                         ; 00526269
    CMP EBP,0xc                         ; 0052626e
        ;   Label: LAB_0052626e
    JA 0x0052627a                       ; 00526271
        ;   XREF to: 0052627a (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EBP*0x4 + 0x526078]  ; 00526273 | caseD_7 | caseD_3 | caseD_4
        ;   Label: switchD
    PUSH EBP                            ; 0052627a
        ;   Label: caseD_0
    PUSH ESI                            ; 0052627b
    CALL core_hero.cpp_FUN_004d4840     ; 0052627c
        ;   XREF to: 004d4840 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d4840()
    ADD ESP,0x8                         ; 00526281
    ADD ESP,0x8                         ; 00526284
    POP EBP                             ; 00526287
    POP EDI                             ; 00526288
    POP ESI                             ; 00526289
    POP EBX                             ; 0052628a
    RET                                 ; 0052628b
    PUSH 0x0                            ; 0052628c
        ;   Label: caseD_6
    PUSH ESI                            ; 0052628e
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60 ; 0052628f
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 00526294
    FLD float ptr [ESP + 0xc]           ; 00526298
    ADD ESP,0x8                         ; 0052629c
    FCOMP double ptr [0x005cd967]       ; 0052629f | DAT_005cd967
    FNSTSW AX                           ; 005262a5
    SAHF                                ; 005262a7
    JNC 0x0052627a                      ; 005262a8
        ;   XREF to: 0052627a (CONDITIONAL_JUMP)  ; caseD_7
    XOR EAX,EAX                         ; 005262aa
    ADD ESP,0x8                         ; 005262ac
    POP EBP                             ; 005262af
    POP EDI                             ; 005262b0
    POP ESI                             ; 005262b1
    POP EBX                             ; 005262b2
    RET                                 ; 005262b3
    PUSH 0x0                            ; 005262b4
        ;   Label: caseD_4
    PUSH ESI                            ; 005262b6
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60 ; 005262b7
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 005262bc
    FLD float ptr [ESP + 0xc]           ; 005262c0
    ADD ESP,0x8                         ; 005262c4
    FCOMP double ptr [0x005cd967]       ; 005262c7 | DAT_005cd967
    FNSTSW AX                           ; 005262cd
    SAHF                                ; 005262cf
    JC 0x005260c9                       ; 005262d0
        ;   XREF to: 005260c9 (CONDITIONAL_JUMP)  ; LAB_005260c9
    TEST EDI,EDI                        ; 005262d6
        ;   Label: caseD_3
    JNZ 0x0052627a                      ; 005262d8
        ;   XREF to: 0052627a (CONDITIONAL_JUMP)  ; caseD_7
    XOR EAX,EAX                         ; 005262da
    ADD ESP,0x8                         ; 005262dc
    POP EBP                             ; 005262df
    POP EDI                             ; 005262e0
    POP ESI                             ; 005262e1
    POP EBX                             ; 005262e2
    RET                                 ; 005262e3

