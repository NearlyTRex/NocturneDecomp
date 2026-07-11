; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005696e8(undefined4 param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00569928 at 00569e35
;
; Called Functions:
;   FUN_0056dc68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005696e8
        ;   Label: FUN_005696e8
    PUSH ESI                            ; 005696e9
    PUSH EDI                            ; 005696ea
    PUSH EBP                            ; 005696eb
    MOV EBP,dword ptr [ESP + 0x18]      ; 005696ec
    PUSH 0x10                           ; 005696f0
    PUSH EBP                            ; 005696f2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005696f3
    PUSH EDX                            ; 005696f7
    CALL FUN_0056dc68                   ; 005696f8
        ;   XREF to: 0056dc68 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dc68()
    ADD ESP,0xc                         ; 005696fd
    MOV EDI,EBP                         ; 00569700
    PUSH ES                             ; 00569702
    MOV AX,DS                           ; 00569703
    MOV ES,AX                           ; 00569705
    SUB ECX,ECX                         ; 00569707
    DEC ECX                             ; 00569709
    XOR EAX,EAX                         ; 0056970a
    SCASB.REPNE ES:EDI                  ; 0056970c
    NOT ECX                             ; 0056970e
    DEC ECX                             ; 00569710
    POP ES                              ; 00569711
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00569712
    DEC EAX                             ; 00569716
    TEST ECX,ECX                        ; 00569717
    JZ 0x00569730                       ; 00569719
        ;   XREF to: 00569730 (CONDITIONAL_JUMP)  ; LAB_00569730
    MOV ESI,EBP                         ; 0056971b
    LEA EBX,[EAX + EBP*0x1]             ; 0056971d
    LEA EDX,[ECX + EBP*0x1]             ; 00569720
    DEC EBX                             ; 00569723
        ;   Label: LAB_00569723
    MOV CL,byte ptr [EDX + -0x1]        ; 00569724
    DEC EDX                             ; 00569727
    DEC EAX                             ; 00569728
    MOV byte ptr [EBX + 0x1],CL         ; 00569729
    CMP EDX,ESI                         ; 0056972c
    JNZ 0x00569723                      ; 0056972e
        ;   XREF to: 00569723 (CONDITIONAL_JUMP)  ; LAB_00569723
    LEA EDX,[EAX + EBP*0x1]             ; 00569730
        ;   Label: LAB_00569730
    TEST EAX,EAX                        ; 00569733
        ;   Label: LAB_00569733
    JL 0x0056973e                       ; 00569735
        ;   XREF to: 0056973e (CONDITIONAL_JUMP)  ; LAB_0056973e
    DEC EAX                             ; 00569737
    MOV byte ptr [EDX],0x30             ; 00569738
    DEC EDX                             ; 0056973b
    JMP 0x00569733                      ; 0056973c
        ;   XREF to: 00569733 (UNCONDITIONAL_JUMP)  ; LAB_00569733
    ADD EBP,dword ptr [ESP + 0x1c]      ; 0056973e
        ;   Label: LAB_0056973e
    MOV byte ptr [EBP],0x0              ; 00569742
    POP EBP                             ; 00569746
    POP EDI                             ; 00569747
    POP ESI                             ; 00569748
    POP EBX                             ; 00569749
    RET                                 ; 0056974a

