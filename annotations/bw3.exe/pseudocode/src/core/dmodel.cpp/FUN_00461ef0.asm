; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00461ef0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float *param_6)
;
;
; XREF[1]:
;   FUN_0053bc80 at 0053c8eb
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bb9ef
;   TerminatedCString s_Tried_to_call_CKeyFramed_005bba02
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004620c0
;   FUN_004795c0
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461ef0
        ;   Label: FUN_00461ef0
    PUSH ESI                            ; 00461ef1
    PUSH EDI                            ; 00461ef2
    PUSH EBP                            ; 00461ef3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00461ef4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00461ef8
    MOV EBP,dword ptr [ESP + 0x28]      ; 00461efc
    MOV EDX,dword ptr [EDI + 0x100]     ; 00461f00
    CMP ESI,EDX                         ; 00461f06
    JL 0x00461f0d                       ; 00461f08
        ;   XREF to: 00461f0d (CONDITIONAL_JUMP)  ; LAB_00461f0d
    LEA ESI,[EDX + -0x1]                ; 00461f0a
    TEST ESI,ESI                        ; 00461f0d
        ;   Label: LAB_00461f0d
    JL 0x00461fb9                       ; 00461f0f
        ;   XREF to: 00461fb9 (CONDITIONAL_JUMP)  ; LAB_00461fb9
    CMP dword ptr [EDI + 0x358],0x0     ; 00461f15
        ;   Label: LAB_00461f15
    JNZ 0x00461f41                      ; 00461f1c
        ;   XREF to: 00461f41 (CONDITIONAL_JUMP)  ; LAB_00461f41
    PUSH EDI                            ; 00461f1e
    MOV EBX,0x5bb9ef                    ; 00461f1f | = "..\\core\\dmodel.cpp"
    MOV EAX,0x43e                       ; 00461f24
    PUSH 0x5bba02                       ; 00461f29 | = "Tried to call CKeyFramedModel::getFlo..."
    MOV dword ptr [0x01d71de0],EBX      ; 00461f2e | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00461f34 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00461f39
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00461f3e
    LEA EBX,[EDI + 0x364]               ; 00461f41
        ;   Label: LAB_00461f41
    FLD float ptr [EBX]                 ; 00461f47
    FCOMP float ptr [EBP]               ; 00461f49
    FNSTSW AX                           ; 00461f4c
    SAHF                                ; 00461f4e
    JZ 0x00461fc0                       ; 00461f4f
        ;   XREF to: 00461fc0 (CONDITIONAL_JUMP)  ; LAB_00461fc0
    PUSH EBP                            ; 00461f51
        ;   Label: LAB_00461f51
    PUSH EDI                            ; 00461f52
    CALL FUN_004620c0                   ; 00461f53
        ;   XREF to: 004620c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004620c0()
    ADD ESP,0x8                         ; 00461f58
    MOV EAX,dword ptr [EDI + 0x354]     ; 00461f5b
        ;   Label: LAB_00461f5b
    IMUL EAX,ESI                        ; 00461f61
    SHL EAX,0x3                         ; 00461f64
    MOV EDX,dword ptr [EDI + 0x354]     ; 00461f67
    MOV EBX,EAX                         ; 00461f6d
    SHL EAX,0x3                         ; 00461f6f
    MOV ESI,dword ptr [EDI + 0x358]     ; 00461f72
    SUB EAX,EBX                         ; 00461f78
    XOR EBP,EBP                         ; 00461f7a
    ADD ESI,EAX                         ; 00461f7c
    XOR EBX,EBX                         ; 00461f7e
    TEST EDX,EDX                        ; 00461f80
    JLE 0x00461fb2                      ; 00461f82
        ;   XREF to: 00461fb2 (CONDITIONAL_JUMP)  ; LAB_00461fb2
    MOV EAX,dword ptr [ESP + 0x24]      ; 00461f84
        ;   Label: LAB_00461f84
    PUSH EAX                            ; 00461f88
    MOV EDX,dword ptr [ESP + 0x20]      ; 00461f89
    PUSH dword ptr [ESP + 0x24]         ; 00461f8d
    PUSH EDX                            ; 00461f91
    PUSH ESI                            ; 00461f92
    CALL FUN_004795c0                   ; 00461f93
        ;   XREF to: 004795c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795c0()
    ADD ESP,0x10                        ; 00461f98
    TEST EAX,EAX                        ; 00461f9b
    JZ 0x00461fa4                       ; 00461f9d
        ;   XREF to: 00461fa4 (CONDITIONAL_JUMP)  ; LAB_00461fa4
    MOV EBP,0x1                         ; 00461f9f
    INC EBX                             ; 00461fa4
        ;   Label: LAB_00461fa4
    MOV ECX,dword ptr [EDI + 0x354]     ; 00461fa5
    ADD ESI,0x38                        ; 00461fab
    CMP EBX,ECX                         ; 00461fae
    JL 0x00461f84                       ; 00461fb0
        ;   XREF to: 00461f84 (CONDITIONAL_JUMP)  ; LAB_00461f84
    MOV EAX,EBP                         ; 00461fb2
        ;   Label: LAB_00461fb2
    POP EBP                             ; 00461fb4
    POP EDI                             ; 00461fb5
    POP ESI                             ; 00461fb6
    POP EBX                             ; 00461fb7
    RET                                 ; 00461fb8
    XOR ESI,ESI                         ; 00461fb9
        ;   Label: LAB_00461fb9
    JMP 0x00461f15                      ; 00461fbb
        ;   XREF to: 00461f15 (UNCONDITIONAL_JUMP)  ; LAB_00461f15
    FLD float ptr [EBX + 0x4]           ; 00461fc0
        ;   Label: LAB_00461fc0
    FCOMP float ptr [EBP + 0x4]         ; 00461fc3
    FNSTSW AX                           ; 00461fc6
    SAHF                                ; 00461fc8
    JNZ 0x00461f51                      ; 00461fc9
        ;   XREF to: 00461f51 (CONDITIONAL_JUMP)  ; LAB_00461f51
    FLD float ptr [EBX + 0x8]           ; 00461fcb
    FCOMP float ptr [EBP + 0x8]         ; 00461fce
    FNSTSW AX                           ; 00461fd1
    SAHF                                ; 00461fd3
    JZ 0x00461f5b                       ; 00461fd4
        ;   XREF to: 00461f5b (CONDITIONAL_JUMP)  ; LAB_00461f5b
    JMP 0x00461f51                      ; 00461fd6
        ;   XREF to: 00461f51 (UNCONDITIONAL_JUMP)  ; LAB_00461f51

