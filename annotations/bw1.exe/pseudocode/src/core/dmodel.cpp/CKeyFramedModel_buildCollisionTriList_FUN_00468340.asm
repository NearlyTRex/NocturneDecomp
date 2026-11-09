; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dmodel.cpp_FUN_004669f0 at 00466bca
;   core_dmodel.cpp_FUN_00466be0 at 00467142
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005d975d
;   TerminatedCString s_CKeyFramedModel_buildCol_005d9770
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_dmodel.cpp_FUN_00468420
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468340
        ;   Label: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340
    PUSH EBP                            ; 00468341
    MOV EBX,dword ptr [ESP + 0xc]       ; 00468342
    MOV EDX,dword ptr [EBX + 0x358]     ; 00468346
    PUSH EDX                            ; 0046834c
    CALL crt_unknown.c_FUN_005c0336     ; 0046834d
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    MOV dword ptr [EBX + 0x358],0x0     ; 00468352
    ADD ESP,0x4                         ; 0046835c
    MOV ECX,dword ptr [EBX + 0x110]     ; 0046835f
    MOV dword ptr [EBX + 0x354],0x0     ; 00468365
    CMP ECX,0x1                         ; 0046836f
    JL 0x0046841a                       ; 00468372
        ;   XREF to: 0046841a (CONDITIONAL_JUMP)  ; LAB_0046841a
    CMP dword ptr [EBX + 0x100],0x1     ; 00468378
    JL 0x0046841a                       ; 0046837f
        ;   XREF to: 0046841a (CONDITIONAL_JUMP)  ; LAB_0046841a
    XOR EAX,EAX                         ; 00468385
    TEST ECX,ECX                        ; 00468387
    JLE 0x004683c0                      ; 00468389
        ;   XREF to: 004683c0 (CONDITIONAL_JUMP)  ; LAB_004683c0
    XOR EDX,EDX                         ; 0046838b
    ADD EDX,0x48                        ; 0046838d
        ;   Label: LAB_0046838d
    MOV ECX,dword ptr [EBX + 0x114]     ; 00468390
    MOV ECX,dword ptr [ECX + EDX*0x1 + -0x44] ; 00468396
    MOV EBP,dword ptr [EBX + 0x354]     ; 0046839a
    SUB ECX,0x2                         ; 004683a0
    INC EAX                             ; 004683a3
    ADD EBP,ECX                         ; 004683a4
    MOV ECX,dword ptr [EBX + 0x110]     ; 004683a6
    MOV dword ptr [EBX + 0x354],EBP     ; 004683ac
    CMP EAX,ECX                         ; 004683b2
    JL 0x0046838d                       ; 004683b4
        ;   XREF to: 0046838d (CONDITIONAL_JUMP)  ; LAB_0046838d
    LEA EAX,[EAX]                       ; 004683b6
    LEA EDX,[EDX]                       ; 004683bc
    MOV EAX,dword ptr [EBX + 0x100]     ; 004683c0
        ;   Label: LAB_004683c0
    IMUL EAX,dword ptr [EBX + 0x354]    ; 004683c6
    SHL EAX,0x3                         ; 004683cd
    MOV EDX,EAX                         ; 004683d0
    SHL EAX,0x3                         ; 004683d2
    SUB EAX,EDX                         ; 004683d5
    PUSH EAX                            ; 004683d7
    CALL crt_unknown.c_FUN_005c1268     ; 004683d8
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 004683dd
    MOV dword ptr [EBX + 0x358],EAX     ; 004683e0
    TEST EAX,EAX                        ; 004683e6
    JNZ 0x0046840c                      ; 004683e8
        ;   XREF to: 0046840c (CONDITIONAL_JUMP)  ; LAB_0046840c
    MOV EBP,0x5d975d                    ; 004683ea | = "..\\core\\dmodel.cpp"
    MOV EAX,0x470                       ; 004683ef
    PUSH 0x5d9770                       ; 004683f4 | = "CKeyFramedModel::buildCollisionTriLis..."
    MOV dword ptr [0x01d1d400],EBP      ; 004683f9 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004683ff | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00468404
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00468409
    PUSH 0x2c8af28                      ; 0046840c | DAT_02c8af28
        ;   Label: LAB_0046840c
    PUSH EBX                            ; 00468411
    CALL core_dmodel.cpp_FUN_00468420   ; 00468412
        ;   XREF to: 00468420 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00468420()
    ADD ESP,0x8                         ; 00468417
    POP EBP                             ; 0046841a
        ;   Label: LAB_0046841a
    POP EBX                             ; 0046841b
    RET                                 ; 0046841c

