; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059dfc0(int param_1)
;
;
; XREF[1]:
;   FUN_0059de90 at 0059de97
;
; Referenced Globals:
;   undefined4 DAT_02c8ae58
;   undefined4 DAT_02c8ae5c
;   undefined4 DAT_02c8ae60
;
; Called Functions:
;   FUN_005b3750
;   FUN_005b37b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dfc0
        ;   Label: FUN_0059dfc0
    PUSH EBP                            ; 0059dfc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059dfc2
    MOV EDX,dword ptr [0x02c8ae58]      ; 0059dfc6 | DAT_02c8ae58
    TEST EDX,EDX                        ; 0059dfcc
    JNZ 0x0059e016                      ; 0059dfce
        ;   XREF to: 0059e016 (CONDITIONAL_JUMP)  ; LAB_0059e016
    CMP EBX,dword ptr [0x02c8ae60]      ; 0059dfd0 | DAT_02c8ae60
        ;   Label: LAB_0059dfd0
    JNZ 0x0059dfe2                      ; 0059dfd6
        ;   XREF to: 0059dfe2 (CONDITIONAL_JUMP)  ; LAB_0059dfe2
    PUSH EDI                            ; 0059dfd8
    XOR EDI,EDI                         ; 0059dfd9
    MOV dword ptr [0x02c8ae60],EDI      ; 0059dfdb | DAT_02c8ae60
    POP EDI                             ; 0059dfe1
    MOV EBP,dword ptr [0x02c8ae5c]      ; 0059dfe2 | DAT_02c8ae5c
        ;   Label: LAB_0059dfe2
    MOV EAX,0x2c8ae5c                   ; 0059dfe8 | DAT_02c8ae5c
    TEST EBP,EBP                        ; 0059dfed
    JZ 0x0059dfff                       ; 0059dfef
        ;   XREF to: 0059dfff (CONDITIONAL_JUMP)  ; LAB_0059dfff
    MOV ECX,dword ptr [EAX]             ; 0059dff1 | DAT_02c8ae5c
        ;   Label: LAB_0059dff1
    CMP EBX,ECX                         ; 0059dff3
    JNZ 0x0059e021                      ; 0059dff5
        ;   XREF to: 0059e021 (CONDITIONAL_JUMP)  ; LAB_0059e021
    MOV EDX,dword ptr [ECX + 0x3c0]     ; 0059dff7
    MOV dword ptr [EAX],EDX             ; 0059dffd | DAT_02c8ae5c
    MOV dword ptr [EBX + 0x3c0],0x0     ; 0059dfff
        ;   Label: LAB_0059dfff
    MOV EBX,dword ptr [0x02c8ae58]      ; 0059e009 | DAT_02c8ae58
    TEST EBX,EBX                        ; 0059e00f
    JNZ 0x0059e034                      ; 0059e011
        ;   XREF to: 0059e034 (CONDITIONAL_JUMP)  ; LAB_0059e034
    POP EBP                             ; 0059e013
    POP EBX                             ; 0059e014
    RET                                 ; 0059e015
    PUSH EDX                            ; 0059e016
        ;   Label: LAB_0059e016
    CALL FUN_005b3750                   ; 0059e017
        ;   XREF to: 005b3750 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3750()
    ADD ESP,0x4                         ; 0059e01c
    JMP 0x0059dfd0                      ; 0059e01f
        ;   XREF to: 0059dfd0 (UNCONDITIONAL_JUMP)  ; LAB_0059dfd0
    MOV EAX,dword ptr [EAX]             ; 0059e021 | DAT_02c8ae5c
        ;   Label: LAB_0059e021
    MOV EDX,dword ptr [EAX + 0x3c0]     ; 0059e023
    ADD EAX,0x3c0                       ; 0059e029
    TEST EDX,EDX                        ; 0059e02e
    JNZ 0x0059dff1                      ; 0059e030
        ;   XREF to: 0059dff1 (CONDITIONAL_JUMP)  ; LAB_0059dff1
    JMP 0x0059dfff                      ; 0059e032
        ;   XREF to: 0059dfff (UNCONDITIONAL_JUMP)  ; LAB_0059dfff
    PUSH EBX                            ; 0059e034
        ;   Label: LAB_0059e034
    CALL FUN_005b37b0                   ; 0059e035
        ;   XREF to: 005b37b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b37b0()
    ADD ESP,0x4                         ; 0059e03a
    POP EBP                             ; 0059e03d
    POP EBX                             ; 0059e03e
    RET                                 ; 0059e03f

