; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0 (CKeyFramedModel *this_ptr,CVector3f *scale_factors)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   scale_factors
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0 at 0047c4ba
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e18e
;
; Referenced Globals:
;   double DOUBLE_0062057b = 0.5
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c4d0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
    PUSH ESI                            ; 0047c4d1
    PUSH EDI                            ; 0047c4d2
    PUSH EBP                            ; 0047c4d3
    MOV EBP,ESP                         ; 0047c4d4
    SUB ESP,0xc                         ; 0047c4d6
    AND ESP,0xfffffff8                  ; 0047c4d9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047c4dc
    XOR EDI,EDI                         ; 0047c4df
    XOR EBX,EBX                         ; 0047c4e1
    MOV EDX,dword ptr [ESI + 0x104]     ; 0047c4e3
        ;   Label: LAB_0047c4e3
    MOV EAX,dword ptr [ESI + 0x100]     ; 0047c4e9
    IMUL EAX,EDX                        ; 0047c4ef
    CMP EDI,EAX                         ; 0047c4f2
    JL 0x0047c506                       ; 0047c4f4
        ;   XREF to: 0047c506 (CONDITIONAL_JUMP)  ; LAB_0047c506
    PUSH ESI                            ; 0047c4f6
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 0047c4f7
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
    ADD ESP,0x4                         ; 0047c4fc
    MOV ESP,EBP                         ; 0047c4ff
    POP EBP                             ; 0047c501
    POP EDI                             ; 0047c502
    POP ESI                             ; 0047c503
    POP EBX                             ; 0047c504
    RET                                 ; 0047c505
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0047c506
        ;   Label: LAB_0047c506
    FILD dword ptr [EBX + EAX*0x1]      ; 0047c50c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047c50f
    FMUL float ptr [EAX]                ; 0047c512
    FADD double ptr [0x0062057b]        ; 0047c514 | DOUBLE_0062057b
    SUB ESP,0x8                         ; 0047c51a
    FSTP double ptr [ESP]               ; 0047c51d
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c520
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0047c525
    MOV dword ptr [ESP + 0xc],EDX       ; 0047c529
    FLD double ptr [ESP + 0x8]          ; 0047c52d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c531
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    ADD ESP,0x8                         ; 0047c536
    MOV EDX,dword ptr [ESI + 0x10c]     ; 0047c539
    FISTP dword ptr [ESP + 0x8]         ; 0047c53f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047c543
    MOV dword ptr [EDX + EBX*0x1],EAX   ; 0047c547
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0047c54a
    FILD dword ptr [EBX + EAX*0x1 + 0x4] ; 0047c550
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047c554
    FMUL float ptr [EAX + 0x4]          ; 0047c557
    FADD double ptr [0x0062057b]        ; 0047c55a | DOUBLE_0062057b
    SUB ESP,0x8                         ; 0047c560
    FSTP double ptr [ESP]               ; 0047c563
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c566
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0047c56b
    MOV dword ptr [ESP + 0xc],EDX       ; 0047c56f
    FLD double ptr [ESP + 0x8]          ; 0047c573
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c577
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0047c57c
    ADD ESP,0x8                         ; 0047c582
    LEA EDX,[EAX + EBX*0x1]             ; 0047c585
    FISTP dword ptr [ESP + 0x8]         ; 0047c588
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047c58c
    MOV dword ptr [EDX + 0x4],EAX       ; 0047c590
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0047c593
    FILD dword ptr [EBX + EAX*0x1 + 0x8] ; 0047c599
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047c59d
    FMUL float ptr [EAX + 0x8]          ; 0047c5a0
    FADD double ptr [0x0062057b]        ; 0047c5a3 | DOUBLE_0062057b
    SUB ESP,0x8                         ; 0047c5a9
    FSTP double ptr [ESP]               ; 0047c5ac
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c5af
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0047c5b4
    MOV dword ptr [ESP + 0xc],EDX       ; 0047c5b8
    INC EDI                             ; 0047c5bc
    FLD double ptr [ESP + 0x8]          ; 0047c5bd
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c5c1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [ESI + 0x10c]     ; 0047c5c6
    ADD ESP,0x8                         ; 0047c5cc
    LEA EDX,[EAX + EBX*0x1]             ; 0047c5cf
    FISTP dword ptr [ESP + 0x8]         ; 0047c5d2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047c5d6
    ADD EBX,0xc                         ; 0047c5da
    MOV dword ptr [EDX + 0x8],EAX       ; 0047c5dd
    JMP 0x0047c4e3                      ; 0047c5e0
        ;   XREF to: 0047c4e3 (UNCONDITIONAL_JUMP)  ; LAB_0047c4e3

