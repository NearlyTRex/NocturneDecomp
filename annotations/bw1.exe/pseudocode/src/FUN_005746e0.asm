; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005746e0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)
;
;
; XREF[1]:
;   FUN_004ce580 at 004cec75
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   undefined4 DAT_00623310
;   undefined4 DAT_02c792f4
;   undefined4 DAT_02c792f8
;   undefined4 DAT_02c79300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005746e0
        ;   Label: FUN_005746e0
    PUSH ESI                            ; 005746e1
    PUSH EDI                            ; 005746e2
    PUSH EBP                            ; 005746e3
    MOV EDI,dword ptr [ESP + 0x28]      ; 005746e4
    XOR EBX,EBX                         ; 005746e8
    XOR ECX,ECX                         ; 005746ea
    XOR ESI,ESI                         ; 005746ec
    XOR EAX,EAX                         ; 005746ee
    XOR EDX,EDX                         ; 005746f0
    CMP dword ptr [EAX + 0x2c79158],0x1 ; 005746f2
        ;   Label: LAB_005746f2
    JGE 0x00574763                      ; 005746f9
        ;   XREF to: 00574763 (CONDITIONAL_JUMP)  ; LAB_00574763
    ADD EAX,0x1b0                       ; 005746ff
        ;   Label: LAB_005746ff
    CMP EAX,0x6c00                      ; 00574704
    JNZ 0x005746f2                      ; 00574709
        ;   XREF to: 005746f2 (CONDITIONAL_JUMP)  ; LAB_005746f2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057470b
    TEST EAX,EAX                        ; 0057470f
    JZ 0x00574715                       ; 00574711
        ;   XREF to: 00574715 (CONDITIONAL_JUMP)  ; LAB_00574715
    MOV dword ptr [EAX],EDX             ; 00574713
    MOV EBP,dword ptr [ESP + 0x18]      ; 00574715
        ;   Label: LAB_00574715
    TEST EBP,EBP                        ; 00574719
    JZ 0x00574720                       ; 0057471b
        ;   XREF to: 00574720 (CONDITIONAL_JUMP)  ; LAB_00574720
    MOV dword ptr [EBP],EBX             ; 0057471d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00574720
        ;   Label: LAB_00574720
    TEST EAX,EAX                        ; 00574724
    JZ 0x0057472a                       ; 00574726
        ;   XREF to: 0057472a (CONDITIONAL_JUMP)  ; LAB_0057472a
    MOV dword ptr [EAX],ECX             ; 00574728
    MOV EBP,dword ptr [ESP + 0x20]      ; 0057472a
        ;   Label: LAB_0057472a
    TEST EBP,EBP                        ; 0057472e
    JZ 0x00574735                       ; 00574730
        ;   XREF to: 00574735 (CONDITIONAL_JUMP)  ; LAB_00574735
    MOV dword ptr [EBP],ESI             ; 00574732
    CMP dword ptr [ESP + 0x24],0x0      ; 00574735
        ;   Label: LAB_00574735
    JZ 0x0057474b                       ; 0057473a
        ;   XREF to: 0057474b (CONDITIONAL_JUMP)  ; LAB_0057474b
    MOV EAX,0x40                        ; 0057473c
    ADD EDX,ECX                         ; 00574741
    SUB EAX,EDX                         ; 00574743
    MOV EDX,dword ptr [ESP + 0x24]      ; 00574745
    MOV dword ptr [EDX],EAX             ; 00574749
    TEST EDI,EDI                        ; 0057474b
        ;   Label: LAB_0057474b
    JZ 0x0057475e                       ; 0057474d
        ;   XREF to: 0057475e (CONDITIONAL_JUMP)  ; LAB_0057475e
    MOV EAX,[0x00623310]                ; 0057474f | DAT_00623310
    ADD EBX,ESI                         ; 00574754
    SUB EAX,EBX                         ; 00574756 | IMAGE_DOS_HEADER_00400000
    MOV dword ptr [EDI],EAX             ; 00574758 | IMAGE_DOS_HEADER_00400000
    TEST EAX,EAX                        ; 0057475a
    JL 0x00574797                       ; 0057475c
        ;   XREF to: 00574797 (CONDITIONAL_JUMP)  ; LAB_00574797
    POP EBP                             ; 0057475e
        ;   Label: LAB_0057475e
    POP EDI                             ; 0057475f
    POP ESI                             ; 00574760
    POP EBX                             ; 00574761
    RET                                 ; 00574762
    CMP dword ptr [EAX + 0x2c79148],0x0 ; 00574763 | DAT_02c792f8
        ;   Label: LAB_00574763
    JZ 0x00574777                       ; 0057476a
        ;   XREF to: 00574777 (CONDITIONAL_JUMP)  ; LAB_00574777
    MOV EBP,dword ptr [EAX + 0x2c7915c] ; 0057476c
        ;   Label: LAB_0057476c
    INC EDX                             ; 00574772
    ADD EBX,EBP                         ; 00574773
    JMP 0x005746ff                      ; 00574775
        ;   XREF to: 005746ff (UNCONDITIONAL_JUMP)  ; LAB_005746ff
    CMP dword ptr [EAX + 0x2c79144],0x0 ; 00574777 | DAT_02c792f4
        ;   Label: LAB_00574777
    JNZ 0x0057476c                      ; 0057477e
        ;   XREF to: 0057476c (CONDITIONAL_JUMP)  ; LAB_0057476c
    CMP dword ptr [EAX + 0x2c79150],0x0 ; 00574780 | DAT_02c79300
    JNZ 0x0057476c                      ; 00574787
        ;   XREF to: 0057476c (CONDITIONAL_JUMP)  ; LAB_0057476c
    MOV EBP,dword ptr [EAX + 0x2c7915c] ; 00574789
    INC ECX                             ; 0057478f
    ADD ESI,EBP                         ; 00574790
    JMP 0x005746ff                      ; 00574792
        ;   XREF to: 005746ff (UNCONDITIONAL_JUMP)  ; LAB_005746ff
    MOV dword ptr [EDI],0x0             ; 00574797
        ;   Label: LAB_00574797
    POP EBP                             ; 0057479d
    POP EDI                             ; 0057479e
    POP ESI                             ; 0057479f
    POP EBX                             ; 005747a0
    RET                                 ; 005747a1

