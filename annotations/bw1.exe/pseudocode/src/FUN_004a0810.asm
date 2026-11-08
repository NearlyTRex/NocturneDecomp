; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a0810(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   FUN_0041bb40 at 0041c4d6
;
; Referenced Globals:
;   undefined4 DAT_005dcb52
;   undefined4 DAT_005dcb5a
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_004e6060
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0810
        ;   Label: FUN_004a0810
    PUSH ESI                            ; 004a0811
    PUSH EDI                            ; 004a0812
    PUSH EBP                            ; 004a0813
    MOV EBP,ESP                         ; 004a0814
    SUB ESP,0x18                        ; 004a0816
    AND ESP,0xfffffff8                  ; 004a0819
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a081c
    MOV EDX,dword ptr [EAX + 0xc1e8]    ; 004a081f
    TEST EDX,EDX                        ; 004a0825
    JNZ 0x004a0832                      ; 004a0827
        ;   XREF to: 004a0832 (CONDITIONAL_JUMP)  ; LAB_004a0832
    XOR EAX,EAX                         ; 004a0829
        ;   Label: LAB_004a0829
    MOV ESP,EBP                         ; 004a082b
    POP EBP                             ; 004a082d
    POP EDI                             ; 004a082e
    POP ESI                             ; 004a082f
    POP EBX                             ; 004a0830
    RET                                 ; 004a0831
    LEA ECX,[ESP + 0x8]                 ; 004a0832
        ;   Label: LAB_004a0832
    PUSH ECX                            ; 004a0836
    MOV ECX,dword ptr [EBP + 0x20]      ; 004a0837
    PUSH ECX                            ; 004a083a
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004a083b
    PUSH EBX                            ; 004a083e
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a083f
    PUSH ESI                            ; 004a0842
    MOV EAX,EDX                         ; 004a0843
    MOV EDX,dword ptr [EDX + 0x154]     ; 004a0845
    PUSH EAX                            ; 004a084b
    CALL dword ptr [EDX + 0x104]        ; 004a084c
    ADD ESP,0x14                        ; 004a0852
    MOV EAX,dword ptr [EBP + 0x20]      ; 004a0855
    FLDZ                                ; 004a0858
    FLD float ptr [EAX + 0x4]           ; 004a085a
    FSTP double ptr [ESP]               ; 004a085d
    FCOMP double ptr [ESP]              ; 004a0860
    FNSTSW AX                           ; 004a0863
    SAHF                                ; 004a0865
    JNC 0x004a0829                      ; 004a0866
        ;   XREF to: 004a0829 (CONDITIONAL_JUMP)  ; LAB_004a0829
    FLD double ptr [ESP]                ; 004a0868
    FMUL double ptr [0x005dcb52]        ; 004a086b | DAT_005dcb52
    FMUL double ptr [0x005dcb5a]        ; 004a0871 | DAT_005dcb5a
    PUSH 0x0                            ; 004a0877
    CALL FUN_005c03a0                   ; 004a0879
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x18]        ; 004a087e
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a0882
    PUSH EDI                            ; 004a0886
    PUSH 0x0                            ; 004a0887
    LEA EAX,[ESP + 0x14]                ; 004a0889
    PUSH EAX                            ; 004a088d
    MOV EAX,[0x0061dca4]                ; 004a088e | DAT_0061dca4
    PUSH EAX                            ; 004a0893
    CALL FUN_004e6060                   ; 004a0894
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6060()
    MOV EAX,0x1                         ; 004a0899
    ADD ESP,0x14                        ; 004a089e
    MOV ESP,EBP                         ; 004a08a1
    POP EBP                             ; 004a08a3
    POP EDI                             ; 004a08a4
    POP ESI                             ; 004a08a5
    POP EBX                             ; 004a08a6
    RET                                 ; 004a08a7

