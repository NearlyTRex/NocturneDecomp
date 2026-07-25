; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042cde0(undefined4 *param_1,byte *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7638
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0042cde0
        ;   Label: FUN_0042cde0
    MOV EBP,ESP                         ; 0042cde1
    PUSH ESI                            ; 0042cde3
    PUSH EDI                            ; 0042cde4
    CMP dword ptr [0x005b7638],0x6      ; 0042cde5 | DAT_005b7638
    JNC 0x0042ce59                      ; 0042cdec
        ;   XREF to: 0042ce59 (CONDITIONAL_JUMP)  ; LAB_0042ce59
    PUSH EAX                            ; 0042cdee
    PUSH EBX                            ; 0042cdef
    PUSH ECX                            ; 0042cdf0
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042cdf1
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042cdf4
    MOV ECX,dword ptr [EBP + 0x10]      ; 0042cdf7
    MOV EAX,0x0                         ; 0042cdfa
    TEST EDI,0x2                        ; 0042cdff
    JZ 0x0042ce19                       ; 0042ce05
        ;   XREF to: 0042ce19 (CONDITIONAL_JUMP)  ; LAB_0042ce19
    MOV AL,byte ptr [ESI]               ; 0042ce07
    MOV BX,word ptr [EAX*0x2 + 0x1c00424] ; 0042ce09
    MOV word ptr [EDI],BX               ; 0042ce11
    ADD EDI,0x2                         ; 0042ce14
    INC ESI                             ; 0042ce17
    DEC ECX                             ; 0042ce18
    SUB ECX,0x2                         ; 0042ce19
        ;   Label: LAB_0042ce19
    JL 0x0042ce40                       ; 0042ce1c
        ;   XREF to: 0042ce40 (CONDITIONAL_JUMP)  ; LAB_0042ce40
    MOV AL,byte ptr [ESI + 0x1]         ; 0042ce1e
    MOV BX,word ptr [EAX*0x2 + 0x1c00424] ; 0042ce21
    SHL EBX,0x10                        ; 0042ce29
    MOV AL,byte ptr [ESI]               ; 0042ce2c
    MOV BX,word ptr [EAX*0x2 + 0x1c00424] ; 0042ce2e
    MOV dword ptr [EDI],EBX             ; 0042ce36
    ADD ESI,0x2                         ; 0042ce38
    ADD EDI,0x4                         ; 0042ce3b
    JMP 0x0042ce19                      ; 0042ce3e
        ;   XREF to: 0042ce19 (UNCONDITIONAL_JUMP)  ; LAB_0042ce19
    CMP ECX,-0x1                        ; 0042ce40
        ;   Label: LAB_0042ce40
    JNZ 0x0042ce52                      ; 0042ce43
        ;   XREF to: 0042ce52 (CONDITIONAL_JUMP)  ; LAB_0042ce52
    MOV AL,byte ptr [ESI]               ; 0042ce45
    MOV BX,word ptr [EAX*0x2 + 0x1c00424] ; 0042ce47
    MOV word ptr [EDI],BX               ; 0042ce4f
    POP ECX                             ; 0042ce52
        ;   Label: LAB_0042ce52
    POP EBX                             ; 0042ce53
    POP EAX                             ; 0042ce54
    POP EDI                             ; 0042ce55
    POP ESI                             ; 0042ce56
    LEAVE                               ; 0042ce57
    RET                                 ; 0042ce58
    PUSH EAX                            ; 0042ce59
        ;   Label: LAB_0042ce59
    PUSH EBX                            ; 0042ce5a
    PUSH ECX                            ; 0042ce5b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0042ce5c
    MOV ESI,dword ptr [EBP + 0xc]       ; 0042ce5f
    MOV ECX,dword ptr [EBP + 0x10]      ; 0042ce62
    MOV EAX,0x0                         ; 0042ce65
    TEST EDI,0x2                        ; 0042ce6a
    JZ 0x0042ce85                       ; 0042ce70
        ;   XREF to: 0042ce85 (CONDITIONAL_JUMP)  ; LAB_0042ce85
    MOVZX EAX,byte ptr [ESI]            ; 0042ce72
    MOV BX,word ptr [EAX*0x2 + 0x1c00424] ; 0042ce75
    MOV word ptr [EDI],BX               ; 0042ce7d
    ADD EDI,0x2                         ; 0042ce80
    INC ESI                             ; 0042ce83
    DEC ECX                             ; 0042ce84
    SUB ECX,0x2                         ; 0042ce85
        ;   Label: LAB_0042ce85
    JL 0x0042ceb0                       ; 0042ce88
        ;   XREF to: 0042ceb0 (CONDITIONAL_JUMP)  ; LAB_0042ceb0
    MOVZX EAX,byte ptr [ESI + 0x1]      ; 0042ce8a
    MOVZX EBX,word ptr [EAX*0x2 + 0x1c00424] ; 0042ce8e
    MOVZX EAX,byte ptr [ESI]            ; 0042ce96
    SHL EBX,0x10                        ; 0042ce99
    MOVZX EAX,word ptr [EAX*0x2 + 0x1c00424] ; 0042ce9c
    OR EBX,EAX                          ; 0042cea4
    ADD ESI,0x2                         ; 0042cea6
    MOV dword ptr [EDI],EBX             ; 0042cea9
    ADD EDI,0x4                         ; 0042ceab
    JMP 0x0042ce85                      ; 0042ceae
        ;   XREF to: 0042ce85 (UNCONDITIONAL_JUMP)  ; LAB_0042ce85
    CMP ECX,-0x1                        ; 0042ceb0
        ;   Label: LAB_0042ceb0
    JNZ 0x0042cec3                      ; 0042ceb3
        ;   XREF to: 0042cec3 (CONDITIONAL_JUMP)  ; LAB_0042cec3
    MOVZX EAX,byte ptr [ESI]            ; 0042ceb5
    MOV BX,word ptr [EAX*0x2 + 0x1c00424] ; 0042ceb8
    MOV word ptr [EDI],BX               ; 0042cec0
    POP ECX                             ; 0042cec3
        ;   Label: LAB_0042cec3
    POP EBX                             ; 0042cec4
    POP EAX                             ; 0042cec5
    POP EDI                             ; 0042cec6
    POP ESI                             ; 0042cec7
    LEAVE                               ; 0042cec8
    RET                                 ; 0042cec9

