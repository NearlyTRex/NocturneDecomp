; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bb6f8(undefined4 param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005bb938 at 005bbe45
;
; Called Functions:
;   FUN_005bafd8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb6f8
        ;   Label: FUN_005bb6f8
    PUSH ESI                            ; 005bb6f9
    PUSH EDI                            ; 005bb6fa
    PUSH EBP                            ; 005bb6fb
    MOV EBP,dword ptr [ESP + 0x18]      ; 005bb6fc
    PUSH 0x10                           ; 005bb700
    PUSH EBP                            ; 005bb702
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005bb703
    PUSH EDX                            ; 005bb707
    CALL FUN_005bafd8                   ; 005bb708
        ;   XREF to: 005bafd8 (UNCONDITIONAL_CALL)  ; undefined FUN_005bafd8()
    ADD ESP,0xc                         ; 005bb70d
    MOV EDI,EBP                         ; 005bb710
    PUSH ES                             ; 005bb712
    MOV AX,DS                           ; 005bb713
    MOV ES,AX                           ; 005bb715
    SUB ECX,ECX                         ; 005bb717
    DEC ECX                             ; 005bb719
    XOR EAX,EAX                         ; 005bb71a
    SCASB.REPNE ES:EDI                  ; 005bb71c
    NOT ECX                             ; 005bb71e
    DEC ECX                             ; 005bb720
    POP ES                              ; 005bb721
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005bb722
    DEC EAX                             ; 005bb726
    TEST ECX,ECX                        ; 005bb727
    JZ 0x005bb740                       ; 005bb729
        ;   XREF to: 005bb740 (CONDITIONAL_JUMP)  ; LAB_005bb740
    MOV ESI,EBP                         ; 005bb72b
    LEA EBX,[EAX + EBP*0x1]             ; 005bb72d
    LEA EDX,[ECX + EBP*0x1]             ; 005bb730
    DEC EBX                             ; 005bb733
        ;   Label: LAB_005bb733
    MOV CL,byte ptr [EDX + -0x1]        ; 005bb734
    DEC EDX                             ; 005bb737
    DEC EAX                             ; 005bb738
    MOV byte ptr [EBX + 0x1],CL         ; 005bb739
    CMP EDX,ESI                         ; 005bb73c
    JNZ 0x005bb733                      ; 005bb73e
        ;   XREF to: 005bb733 (CONDITIONAL_JUMP)  ; LAB_005bb733
    LEA EDX,[EAX + EBP*0x1]             ; 005bb740
        ;   Label: LAB_005bb740
    TEST EAX,EAX                        ; 005bb743
        ;   Label: LAB_005bb743
    JL 0x005bb74e                       ; 005bb745
        ;   XREF to: 005bb74e (CONDITIONAL_JUMP)  ; LAB_005bb74e
    DEC EAX                             ; 005bb747
    MOV byte ptr [EDX],0x30             ; 005bb748
    DEC EDX                             ; 005bb74b
    JMP 0x005bb743                      ; 005bb74c
        ;   XREF to: 005bb743 (UNCONDITIONAL_JUMP)  ; LAB_005bb743
    ADD EBP,dword ptr [ESP + 0x1c]      ; 005bb74e
        ;   Label: LAB_005bb74e
    MOV byte ptr [EBP],0x0              ; 005bb752
    POP EBP                             ; 005bb756
    POP EDI                             ; 005bb757
    POP ESI                             ; 005bb758
    POP EBX                             ; 005bb759
    RET                                 ; 005bb75a

