; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e4730(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4035
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_004e5ff0
;   FUN_004e6020
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004e4730
        ;   Label: FUN_004e4730
    PUSH EBP                            ; 004e4731
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e4732
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e4736
    FLD float ptr [ECX + 0x4]           ; 004e473a
    FCOMP double ptr [0x005e4035]       ; 004e473d | DAT_005e4035
    FNSTSW AX                           ; 004e4743
    SAHF                                ; 004e4745
    JBE 0x004e4764                      ; 004e4746
        ;   XREF to: 004e4764 (CONDITIONAL_JUMP)  ; LAB_004e4764
    MOV EDI,dword ptr [EDX + 0x40]      ; 004e4748
    PUSH EDI                            ; 004e474b
    PUSH EDX                            ; 004e474c
    MOV EBP,dword ptr [0x0061dca4]      ; 004e474d | DAT_0061dca4
    PUSH EBP                            ; 004e4753
    CALL FUN_004e5ff0                   ; 004e4754
        ;   XREF to: 004e5ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5ff0()
    ADD ESP,0xc                         ; 004e4759
    MOV EAX,0x1                         ; 004e475c
    POP EBP                             ; 004e4761
    POP EDI                             ; 004e4762
    RET                                 ; 004e4763
    PUSH ESI                            ; 004e4764
        ;   Label: LAB_004e4764
    PUSH EBX                            ; 004e4765
    MOV EBX,dword ptr [EDX + 0x40]      ; 004e4766
    PUSH EBX                            ; 004e4769
    PUSH ECX                            ; 004e476a
    PUSH EDX                            ; 004e476b
    MOV ESI,dword ptr [0x0061dca4]      ; 004e476c | DAT_0061dca4
    PUSH ESI                            ; 004e4772
    CALL FUN_004e6020                   ; 004e4773
        ;   XREF to: 004e6020 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6020()
    ADD ESP,0x10                        ; 004e4778
    POP EBX                             ; 004e477b
    POP ESI                             ; 004e477c
    MOV EAX,0x1                         ; 004e477d
    POP EBP                             ; 004e4782
    POP EDI                             ; 004e4783
    RET                                 ; 004e4784

