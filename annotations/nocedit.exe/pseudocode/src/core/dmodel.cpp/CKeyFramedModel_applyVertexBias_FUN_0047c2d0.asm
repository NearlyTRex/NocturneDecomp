; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0 (CKeyFramedModel *this_ptr,int frame_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047deb3
;
; Referenced Globals:
;   double g_BiasMultiplier = 256
;   double g_BiasOffset = 0.5
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c2d0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
    PUSH ESI                            ; 0047c2d1
    PUSH EDI                            ; 0047c2d2
    SUB ESP,0xc                         ; 0047c2d3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0047c2d6
    PUSH EBX                            ; 0047c2da
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 0047c2db
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
    ADD ESP,0x4                         ; 0047c2e0
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047c2e3
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047c2e7
    SUB EAX,EDX                         ; 0047c2ee
    MOV EDX,dword ptr [EBX + 0x5690]    ; 0047c2f0
    FLD float ptr [EDX + EAX*0x8 + 0x4] ; 0047c2f6
    FMUL double ptr [0x0062055b]        ; 0047c2fa | g_BiasMultiplier
    FADD double ptr [0x00620563]        ; 0047c300 | g_BiasOffset
    SUB ESP,0x8                         ; 0047c306
    FSTP double ptr [ESP]               ; 0047c309
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c30c
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0047c311
    MOV dword ptr [ESP + 0xc],EDX       ; 0047c315
    XOR ECX,ECX                         ; 0047c319
    FLD double ptr [ESP + 0x8]          ; 0047c31b
    FCHS                                ; 0047c31f
    XOR EDX,EDX                         ; 0047c321
    ADD ESP,0x8                         ; 0047c323
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c326
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0047c32b
    MOV ESI,dword ptr [EBX + 0x104]     ; 0047c32f
        ;   Label: LAB_0047c32f
    MOV EAX,dword ptr [EBX + 0x100]     ; 0047c335
    IMUL EAX,ESI                        ; 0047c33b
    CMP ECX,EAX                         ; 0047c33e
    JGE 0x0047c35c                      ; 0047c340
        ;   XREF to: 0047c35c (CONDITIONAL_JUMP)  ; LAB_0047c35c
    MOV ESI,dword ptr [EBX + 0x10c]     ; 0047c342
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047c348
    MOV EDI,dword ptr [EDX + ESI*0x1 + 0x4] ; 0047c34c
    ADD EDX,0xc                         ; 0047c350
    ADD EDI,EAX                         ; 0047c353
    INC ECX                             ; 0047c355
    MOV dword ptr [EDX + ESI*0x1 + -0x8],EDI ; 0047c356
    JMP 0x0047c32f                      ; 0047c35a
        ;   XREF to: 0047c32f (UNCONDITIONAL_JUMP)  ; LAB_0047c32f
    PUSH EBX                            ; 0047c35c
        ;   Label: LAB_0047c35c
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 0047c35d
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
    ADD ESP,0x4                         ; 0047c362
    ADD ESP,0xc                         ; 0047c365
    POP EDI                             ; 0047c368
    POP ESI                             ; 0047c369
    POP EBX                             ; 0047c36a
    RET                                 ; 0047c36b

