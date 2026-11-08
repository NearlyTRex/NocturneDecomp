; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00557840(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)
;
;
; XREF[1]:
;   FUN_004b6f30 at 004b7625
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   undefined4 DAT_0060424c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557840
        ;   Label: FUN_00557840
    PUSH ESI                            ; 00557841
    PUSH EDI                            ; 00557842
    PUSH EBP                            ; 00557843
    MOV EDI,dword ptr [ESP + 0x28]      ; 00557844
    XOR EBX,EBX                         ; 00557848
    XOR ECX,ECX                         ; 0055784a
    XOR ESI,ESI                         ; 0055784c
    XOR EAX,EAX                         ; 0055784e
    XOR EDX,EDX                         ; 00557850
    CMP dword ptr [EAX + 0x2cebd88],0x1 ; 00557852
        ;   Label: LAB_00557852
    JGE 0x005578c3                      ; 00557859
        ;   XREF to: 005578c3 (CONDITIONAL_JUMP)  ; LAB_005578c3
    ADD EAX,0x1b0                       ; 0055785f
        ;   Label: LAB_0055785f
    CMP EAX,0x6c00                      ; 00557864
    JNZ 0x00557852                      ; 00557869
        ;   XREF to: 00557852 (CONDITIONAL_JUMP)  ; LAB_00557852
    MOV EAX,dword ptr [ESP + 0x14]      ; 0055786b
    TEST EAX,EAX                        ; 0055786f
    JZ 0x00557875                       ; 00557871
        ;   XREF to: 00557875 (CONDITIONAL_JUMP)  ; LAB_00557875
    MOV dword ptr [EAX],EDX             ; 00557873
    MOV EBP,dword ptr [ESP + 0x18]      ; 00557875
        ;   Label: LAB_00557875
    TEST EBP,EBP                        ; 00557879
    JZ 0x00557880                       ; 0055787b
        ;   XREF to: 00557880 (CONDITIONAL_JUMP)  ; LAB_00557880
    MOV dword ptr [EBP],EBX             ; 0055787d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00557880
        ;   Label: LAB_00557880
    TEST EAX,EAX                        ; 00557884
    JZ 0x0055788a                       ; 00557886
        ;   XREF to: 0055788a (CONDITIONAL_JUMP)  ; LAB_0055788a
    MOV dword ptr [EAX],ECX             ; 00557888
    MOV EBP,dword ptr [ESP + 0x20]      ; 0055788a
        ;   Label: LAB_0055788a
    TEST EBP,EBP                        ; 0055788e
    JZ 0x00557895                       ; 00557890
        ;   XREF to: 00557895 (CONDITIONAL_JUMP)  ; LAB_00557895
    MOV dword ptr [EBP],ESI             ; 00557892
    CMP dword ptr [ESP + 0x24],0x0      ; 00557895
        ;   Label: LAB_00557895
    JZ 0x005578ab                       ; 0055789a
        ;   XREF to: 005578ab (CONDITIONAL_JUMP)  ; LAB_005578ab
    MOV EAX,0x40                        ; 0055789c
    ADD EDX,ECX                         ; 005578a1
    SUB EAX,EDX                         ; 005578a3
    MOV EDX,dword ptr [ESP + 0x24]      ; 005578a5
    MOV dword ptr [EDX],EAX             ; 005578a9
    TEST EDI,EDI                        ; 005578ab
        ;   Label: LAB_005578ab
    JZ 0x005578be                       ; 005578ad
        ;   XREF to: 005578be (CONDITIONAL_JUMP)  ; LAB_005578be
    MOV EAX,[0x0060424c]                ; 005578af | DAT_0060424c
    ADD EBX,ESI                         ; 005578b4
    SUB EAX,EBX                         ; 005578b6 | IMAGE_DOS_HEADER_00400000
    MOV dword ptr [EDI],EAX             ; 005578b8 | IMAGE_DOS_HEADER_00400000
    TEST EAX,EAX                        ; 005578ba
    JL 0x005578f7                       ; 005578bc
        ;   XREF to: 005578f7 (CONDITIONAL_JUMP)  ; LAB_005578f7
    POP EBP                             ; 005578be
        ;   Label: LAB_005578be
    POP EDI                             ; 005578bf
    POP ESI                             ; 005578c0
    POP EBX                             ; 005578c1
    RET                                 ; 005578c2
    CMP dword ptr [EAX + 0x2cebd78],0x0 ; 005578c3
        ;   Label: LAB_005578c3
    JZ 0x005578d7                       ; 005578ca
        ;   XREF to: 005578d7 (CONDITIONAL_JUMP)  ; LAB_005578d7
    MOV EBP,dword ptr [EAX + 0x2cebd8c] ; 005578cc
        ;   Label: LAB_005578cc
    INC EDX                             ; 005578d2
    ADD EBX,EBP                         ; 005578d3
    JMP 0x0055785f                      ; 005578d5
        ;   XREF to: 0055785f (UNCONDITIONAL_JUMP)  ; LAB_0055785f
    CMP dword ptr [EAX + 0x2cebd74],0x0 ; 005578d7
        ;   Label: LAB_005578d7
    JNZ 0x005578cc                      ; 005578de
        ;   XREF to: 005578cc (CONDITIONAL_JUMP)  ; LAB_005578cc
    CMP dword ptr [EAX + 0x2cebd80],0x0 ; 005578e0
    JNZ 0x005578cc                      ; 005578e7
        ;   XREF to: 005578cc (CONDITIONAL_JUMP)  ; LAB_005578cc
    MOV EBP,dword ptr [EAX + 0x2cebd8c] ; 005578e9
    INC ECX                             ; 005578ef
    ADD ESI,EBP                         ; 005578f0
    JMP 0x0055785f                      ; 005578f2
        ;   XREF to: 0055785f (UNCONDITIONAL_JUMP)  ; LAB_0055785f
    MOV dword ptr [EDI],0x0             ; 005578f7
        ;   Label: LAB_005578f7
    POP EBP                             ; 005578fd
    POP EDI                             ; 005578fe
    POP ESI                             ; 005578ff
    POP EBX                             ; 00557900
    RET                                 ; 00557901

