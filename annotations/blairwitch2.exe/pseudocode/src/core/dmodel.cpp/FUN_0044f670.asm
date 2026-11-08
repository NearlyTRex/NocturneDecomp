; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044f670(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float *param_6)
;
;
; XREF[1]:
;   FUN_00534ea0 at 00535b0b
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005cf9ba
;   TerminatedCString s_Tried_to_call_CKeyFramed_005cf9cd
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0044f840
;   FUN_00478550
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f670
        ;   Label: FUN_0044f670
    PUSH ESI                            ; 0044f671
    PUSH EDI                            ; 0044f672
    PUSH EBP                            ; 0044f673
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044f674
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044f678
    MOV EBP,dword ptr [ESP + 0x28]      ; 0044f67c
    MOV EDX,dword ptr [EDI + 0x100]     ; 0044f680
    CMP ESI,EDX                         ; 0044f686
    JL 0x0044f68d                       ; 0044f688
        ;   XREF to: 0044f68d (CONDITIONAL_JUMP)  ; LAB_0044f68d
    LEA ESI,[EDX + -0x1]                ; 0044f68a
    TEST ESI,ESI                        ; 0044f68d
        ;   Label: LAB_0044f68d
    JL 0x0044f739                       ; 0044f68f
        ;   XREF to: 0044f739 (CONDITIONAL_JUMP)  ; LAB_0044f739
    CMP dword ptr [EDI + 0x358],0x0     ; 0044f695
        ;   Label: LAB_0044f695
    JNZ 0x0044f6c1                      ; 0044f69c
        ;   XREF to: 0044f6c1 (CONDITIONAL_JUMP)  ; LAB_0044f6c1
    PUSH EDI                            ; 0044f69e
    MOV EBX,0x5cf9ba                    ; 0044f69f | = "..\\core\\dmodel.cpp"
    MOV EAX,0x43e                       ; 0044f6a4
    PUSH 0x5cf9cd                       ; 0044f6a9 | = "Tried to call CKeyFramedModel::getFlo..."
    MOV dword ptr [0x01d046a0],EBX      ; 0044f6ae | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0044f6b4 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044f6b9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0044f6be
    LEA EBX,[EDI + 0x364]               ; 0044f6c1
        ;   Label: LAB_0044f6c1
    FLD float ptr [EBX]                 ; 0044f6c7
    FCOMP float ptr [EBP]               ; 0044f6c9
    FNSTSW AX                           ; 0044f6cc
    SAHF                                ; 0044f6ce
    JZ 0x0044f740                       ; 0044f6cf
        ;   XREF to: 0044f740 (CONDITIONAL_JUMP)  ; LAB_0044f740
    PUSH EBP                            ; 0044f6d1
        ;   Label: LAB_0044f6d1
    PUSH EDI                            ; 0044f6d2
    CALL FUN_0044f840                   ; 0044f6d3
        ;   XREF to: 0044f840 (UNCONDITIONAL_CALL)  ; undefined FUN_0044f840()
    ADD ESP,0x8                         ; 0044f6d8
    MOV EAX,dword ptr [EDI + 0x354]     ; 0044f6db
        ;   Label: LAB_0044f6db
    IMUL EAX,ESI                        ; 0044f6e1
    SHL EAX,0x3                         ; 0044f6e4
    MOV EDX,dword ptr [EDI + 0x354]     ; 0044f6e7
    MOV EBX,EAX                         ; 0044f6ed
    SHL EAX,0x3                         ; 0044f6ef
    MOV ESI,dword ptr [EDI + 0x358]     ; 0044f6f2
    SUB EAX,EBX                         ; 0044f6f8
    XOR EBP,EBP                         ; 0044f6fa
    ADD ESI,EAX                         ; 0044f6fc
    XOR EBX,EBX                         ; 0044f6fe
    TEST EDX,EDX                        ; 0044f700
    JLE 0x0044f732                      ; 0044f702
        ;   XREF to: 0044f732 (CONDITIONAL_JUMP)  ; LAB_0044f732
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044f704
        ;   Label: LAB_0044f704
    PUSH EAX                            ; 0044f708
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044f709
    PUSH dword ptr [ESP + 0x24]         ; 0044f70d
    PUSH EDX                            ; 0044f711
    PUSH ESI                            ; 0044f712
    CALL FUN_00478550                   ; 0044f713
        ;   XREF to: 00478550 (UNCONDITIONAL_CALL)  ; undefined FUN_00478550()
    ADD ESP,0x10                        ; 0044f718
    TEST EAX,EAX                        ; 0044f71b
    JZ 0x0044f724                       ; 0044f71d
        ;   XREF to: 0044f724 (CONDITIONAL_JUMP)  ; LAB_0044f724
    MOV EBP,0x1                         ; 0044f71f
    INC EBX                             ; 0044f724
        ;   Label: LAB_0044f724
    MOV ECX,dword ptr [EDI + 0x354]     ; 0044f725
    ADD ESI,0x38                        ; 0044f72b
    CMP EBX,ECX                         ; 0044f72e
    JL 0x0044f704                       ; 0044f730
        ;   XREF to: 0044f704 (CONDITIONAL_JUMP)  ; LAB_0044f704
    MOV EAX,EBP                         ; 0044f732
        ;   Label: LAB_0044f732
    POP EBP                             ; 0044f734
    POP EDI                             ; 0044f735
    POP ESI                             ; 0044f736
    POP EBX                             ; 0044f737
    RET                                 ; 0044f738
    XOR ESI,ESI                         ; 0044f739
        ;   Label: LAB_0044f739
    JMP 0x0044f695                      ; 0044f73b
        ;   XREF to: 0044f695 (UNCONDITIONAL_JUMP)  ; LAB_0044f695
    FLD float ptr [EBX + 0x4]           ; 0044f740
        ;   Label: LAB_0044f740
    FCOMP float ptr [EBP + 0x4]         ; 0044f743
    FNSTSW AX                           ; 0044f746
    SAHF                                ; 0044f748
    JNZ 0x0044f6d1                      ; 0044f749
        ;   XREF to: 0044f6d1 (CONDITIONAL_JUMP)  ; LAB_0044f6d1
    FLD float ptr [EBX + 0x8]           ; 0044f74b
    FCOMP float ptr [EBP + 0x8]         ; 0044f74e
    FNSTSW AX                           ; 0044f751
    SAHF                                ; 0044f753
    JZ 0x0044f6db                       ; 0044f754
        ;   XREF to: 0044f6db (CONDITIONAL_JUMP)  ; LAB_0044f6db
    JMP 0x0044f6d1                      ; 0044f756
        ;   XREF to: 0044f6d1 (UNCONDITIONAL_JUMP)  ; LAB_0044f6d1

