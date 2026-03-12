; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel *this_ptr,CVector3f *bias_offset)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   bias_offset
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220 at 0047c2b5
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e11c
;
; Referenced Globals:
;   double DOUBLE_0062056b = 256
;   double DOUBLE_00620573 = 0.5
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c370
        ;   Label: core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
    PUSH ESI                            ; 0047c371
    PUSH EDI                            ; 0047c372
    SUB ESP,0x14                        ; 0047c373
    MOV EBX,dword ptr [ESP + 0x24]      ; 0047c376
    MOV ESI,dword ptr [ESP + 0x28]      ; 0047c37a
    FLD float ptr [ESI]                 ; 0047c37e
    FMUL double ptr [0x0062056b]        ; 0047c380 | DOUBLE_0062056b
    FADD double ptr [0x00620573]        ; 0047c386 | DOUBLE_00620573
    SUB ESP,0x8                         ; 0047c38c
    FSTP double ptr [ESP]               ; 0047c38f
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c392
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    FLD float ptr [ESI + 0x4]           ; 0047c397
    MOV dword ptr [ESP + 0x8],EAX       ; 0047c39a
    MOV dword ptr [ESP + 0xc],EDX       ; 0047c39e
    FMUL double ptr [0x0062056b]        ; 0047c3a2 | DOUBLE_0062056b
    FLD double ptr [ESP + 0x8]          ; 0047c3a8
    ADD ESP,0x8                         ; 0047c3ac
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c3af
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 0047c3b4
    FADD double ptr [0x00620573]        ; 0047c3b8 | DOUBLE_00620573
    SUB ESP,0x8                         ; 0047c3be
    FSTP double ptr [ESP]               ; 0047c3c1
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c3c4
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    FLD float ptr [ESI + 0x8]           ; 0047c3c9
    MOV dword ptr [ESP + 0x8],EAX       ; 0047c3cc
    MOV dword ptr [ESP + 0xc],EDX       ; 0047c3d0
    FMUL double ptr [0x0062056b]        ; 0047c3d4 | DOUBLE_0062056b
    FLD double ptr [ESP + 0x8]          ; 0047c3da
    ADD ESP,0x8                         ; 0047c3de
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c3e1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0047c3e6
    FADD double ptr [0x00620573]        ; 0047c3ea | DOUBLE_00620573
    SUB ESP,0x8                         ; 0047c3f0
    FSTP double ptr [ESP]               ; 0047c3f3
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c3f6
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0047c3fb
    MOV dword ptr [ESP + 0xc],EDX       ; 0047c3ff
    XOR ECX,ECX                         ; 0047c403
    FLD double ptr [ESP + 0x8]          ; 0047c405
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c409
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    ADD ESP,0x8                         ; 0047c40e
    XOR EDX,EDX                         ; 0047c411
    FISTP dword ptr [ESP + 0x10]        ; 0047c413
    MOV ESI,dword ptr [EBX + 0x104]     ; 0047c417
        ;   Label: LAB_0047c417
    MOV EAX,dword ptr [EBX + 0x100]     ; 0047c41d
    IMUL EAX,ESI                        ; 0047c423
    CMP ECX,EAX                         ; 0047c426
    JGE 0x0047c45f                      ; 0047c428
        ;   XREF to: 0047c45f (CONDITIONAL_JUMP)  ; LAB_0047c45f
    MOV ESI,dword ptr [EBX + 0x10c]     ; 0047c42a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047c430
    ADD dword ptr [EDX + ESI*0x1],EAX   ; 0047c434
    MOV ESI,dword ptr [EBX + 0x10c]     ; 0047c437
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047c43d
    ADD dword ptr [EDX + ESI*0x1 + 0x4],EAX ; 0047c441
    MOV ESI,dword ptr [EBX + 0x10c]     ; 0047c445
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047c44b
    MOV EDI,dword ptr [EDX + ESI*0x1 + 0x8] ; 0047c44f
    ADD EDX,0xc                         ; 0047c453
    ADD EDI,EAX                         ; 0047c456
    INC ECX                             ; 0047c458
    MOV dword ptr [EDX + ESI*0x1 + -0x4],EDI ; 0047c459
    JMP 0x0047c417                      ; 0047c45d
        ;   XREF to: 0047c417 (UNCONDITIONAL_JUMP)  ; LAB_0047c417
    PUSH EBX                            ; 0047c45f
        ;   Label: LAB_0047c45f
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 0047c460
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
    ADD ESP,0x4                         ; 0047c465
    ADD ESP,0x14                        ; 0047c468
    POP EDI                             ; 0047c46b
    POP ESI                             ; 0047c46c
    POP EBX                             ; 0047c46d
    RET                                 ; 0047c46e

