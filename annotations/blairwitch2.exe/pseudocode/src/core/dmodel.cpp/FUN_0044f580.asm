; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0044f580(int param_1,int param_2,undefined4 param_3,float *param_4)
;
;
; XREF[1]:
;   FUN_00537030 at 00537459
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005cf92f
;   TerminatedCString s_Tried_to_call_CKeyFramed_005cf942
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0044f840
;   FUN_00477fe0
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f580
        ;   Label: FUN_0044f580
    PUSH ESI                            ; 0044f581
    PUSH EDI                            ; 0044f582
    PUSH EBP                            ; 0044f583
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044f584
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044f588
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0044f58c
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044f590
    MOV ECX,dword ptr [EDI + 0x100]     ; 0044f594
    CMP EBX,ECX                         ; 0044f59a
    JL 0x0044f5a1                       ; 0044f59c
        ;   XREF to: 0044f5a1 (CONDITIONAL_JUMP)  ; LAB_0044f5a1
    LEA EBX,[ECX + -0x1]                ; 0044f59e
    TEST EBX,EBX                        ; 0044f5a1
        ;   Label: LAB_0044f5a1
    JL 0x0044f645                       ; 0044f5a3
        ;   XREF to: 0044f645 (CONDITIONAL_JUMP)  ; LAB_0044f645
    LEA ESI,[EDI + 0x364]               ; 0044f5a9
        ;   Label: LAB_0044f5a9
    FLD float ptr [ESI]                 ; 0044f5af
    FCOMP float ptr [EDX]               ; 0044f5b1
    FNSTSW AX                           ; 0044f5b3
    SAHF                                ; 0044f5b5
    JZ 0x0044f64c                       ; 0044f5b6
        ;   XREF to: 0044f64c (CONDITIONAL_JUMP)  ; LAB_0044f64c
    PUSH EDX                            ; 0044f5bc
        ;   Label: LAB_0044f5bc
    PUSH EDI                            ; 0044f5bd
    CALL FUN_0044f840                   ; 0044f5be
        ;   XREF to: 0044f840 (UNCONDITIONAL_CALL)  ; undefined FUN_0044f840()
    ADD ESP,0x8                         ; 0044f5c3
    CMP dword ptr [EDI + 0x358],0x0     ; 0044f5c6
        ;   Label: LAB_0044f5c6
    JNZ 0x0044f5f2                      ; 0044f5cd
        ;   XREF to: 0044f5f2 (CONDITIONAL_JUMP)  ; LAB_0044f5f2
    PUSH EDI                            ; 0044f5cf
    MOV EAX,0x5cf92f                    ; 0044f5d0 | = "..\\core\\dmodel.cpp"
    MOV EDX,0x40e                       ; 0044f5d5
    PUSH 0x5cf942                       ; 0044f5da | = "Tried to call CKeyFramedModel::inters..."
    MOV [0x01d046a0],EAX                ; 0044f5df | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0044f5e4 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044f5ea
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0044f5ef
    MOV ESI,dword ptr [EDI + 0x354]     ; 0044f5f2
        ;   Label: LAB_0044f5f2
    IMUL EBX,ESI                        ; 0044f5f8
    SHL EBX,0x3                         ; 0044f5fb
    MOV ESI,EBX                         ; 0044f5fe
    SHL EBX,0x3                         ; 0044f600
    SUB EBX,ESI                         ; 0044f603
    MOV ESI,dword ptr [EDI + 0x358]     ; 0044f605
    MOV ECX,dword ptr [EDI + 0x354]     ; 0044f60b
    ADD ESI,EBX                         ; 0044f611
    XOR EBX,EBX                         ; 0044f613
    TEST ECX,ECX                        ; 0044f615
    JLE 0x0044f640                      ; 0044f617
        ;   XREF to: 0044f640 (CONDITIONAL_JUMP)  ; LAB_0044f640
    PUSH EBP                            ; 0044f619
        ;   Label: LAB_0044f619
    PUSH ESI                            ; 0044f61a
    INC EBX                             ; 0044f61b
    CALL FUN_00477fe0                   ; 0044f61c
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00477fe0()
    ADD ESP,0x8                         ; 0044f621
    MOV EAX,dword ptr [EDI + 0x354]     ; 0044f624
    ADD ESI,0x38                        ; 0044f62a
    CMP EBX,EAX                         ; 0044f62d
    JL 0x0044f619                       ; 0044f62f
        ;   XREF to: 0044f619 (CONDITIONAL_JUMP)  ; LAB_0044f619
    LEA EAX,[EAX]                       ; 0044f631
    LEA EDX,[EDX]                       ; 0044f637
    LEA EAX,[EAX]                       ; 0044f63d
    POP EBP                             ; 0044f640
        ;   Label: LAB_0044f640
    POP EDI                             ; 0044f641
    POP ESI                             ; 0044f642
    POP EBX                             ; 0044f643
    RET                                 ; 0044f644
    XOR EBX,EBX                         ; 0044f645
        ;   Label: LAB_0044f645
    JMP 0x0044f5a9                      ; 0044f647
        ;   XREF to: 0044f5a9 (UNCONDITIONAL_JUMP)  ; LAB_0044f5a9
    FLD float ptr [ESI + 0x4]           ; 0044f64c
        ;   Label: LAB_0044f64c
    FCOMP float ptr [EDX + 0x4]         ; 0044f64f
    FNSTSW AX                           ; 0044f652
    SAHF                                ; 0044f654
    JNZ 0x0044f5bc                      ; 0044f655
        ;   XREF to: 0044f5bc (CONDITIONAL_JUMP)  ; LAB_0044f5bc
    FLD float ptr [ESI + 0x8]           ; 0044f65b
    FCOMP float ptr [EDX + 0x8]         ; 0044f65e
    FNSTSW AX                           ; 0044f661
    SAHF                                ; 0044f663
    JZ 0x0044f5c6                       ; 0044f664
        ;   XREF to: 0044f5c6 (CONDITIONAL_JUMP)  ; LAB_0044f5c6
    JMP 0x0044f5bc                      ; 0044f66a
        ;   XREF to: 0044f5bc (UNCONDITIONAL_JUMP)  ; LAB_0044f5bc

