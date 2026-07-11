; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00438ab0(byte *param_1,int param_2,int *param_3,int *param_4)
;
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_00439590 at 004395c9
;
; Called Functions:
;   FUN_00564c53
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438ab0
        ;   Label: FUN_00438ab0
    PUSH ESI                            ; 00438ab1
    PUSH EDI                            ; 00438ab2
    PUSH EBP                            ; 00438ab3
    SUB ESP,0x8                         ; 00438ab4
    MOV EDI,dword ptr [ESP + 0x24]      ; 00438ab7
    MOV ESI,dword ptr [ESP + 0x28]      ; 00438abb
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00438abf
    MOV EAX,dword ptr [ESP + 0x20]      ; 00438ac3
    MOV EDX,dword ptr [ECX]             ; 00438ac7
    CMP EAX,EDX                         ; 00438ac9
    JL 0x00438b24                       ; 00438acb
        ;   XREF to: 00438b24 (CONDITIONAL_JUMP)  ; LAB_00438b24
    JZ 0x00438b51                       ; 00438acd
        ;   XREF to: 00438b51 (CONDITIONAL_JUMP)  ; LAB_00438b51
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00438ad3
    MOV EBP,0xffffffff                  ; 00438ad7
    MOV CL,byte ptr [ECX]               ; 00438adc
    MOV EDX,dword ptr [EAX + 0x4]       ; 00438ade
    MOV EBX,dword ptr [EAX]             ; 00438ae1
    SHL EBP,CL                          ; 00438ae3
    MOV ECX,dword ptr [ESP + 0x20]      ; 00438ae5
    MOV dword ptr [EAX],0x0             ; 00438ae9
    NOT EBP                             ; 00438aef
    MOV dword ptr [EAX + 0x4],0x0       ; 00438af1
    SUB ECX,EBX                         ; 00438af8
    AND EBP,EDX                         ; 00438afa
    MOV dword ptr [ESP + 0x20],ECX      ; 00438afc
    CMP ECX,0x8                         ; 00438b00
    JL 0x00438baa                       ; 00438b03
        ;   XREF to: 00438baa (CONDITIONAL_JUMP)  ; LAB_00438baa
    CMP dword ptr [ESI],0x1             ; 00438b09
        ;   Label: LAB_00438b09
    JGE 0x00438b63                      ; 00438b0c
        ;   XREF to: 00438b63 (CONDITIONAL_JUMP)  ; LAB_00438b63
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00438b0e
        ;   Label: LAB_00438b0e
    MOV dword ptr [EAX + 0x4],EBP       ; 00438b12
    MOV dword ptr [EAX],EBX             ; 00438b15
    MOV EAX,0xffffffff                  ; 00438b17
    ADD ESP,0x8                         ; 00438b1c
        ;   Label: LAB_00438b1c
    POP EBP                             ; 00438b1f
    POP EDI                             ; 00438b20
    POP ESI                             ; 00438b21
    POP EBX                             ; 00438b22
    RET                                 ; 00438b23
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00438b24
        ;   Label: LAB_00438b24
    MOV EDX,dword ptr [EBX + 0x4]       ; 00438b28
    MOV CL,byte ptr [ESP + 0x20]        ; 00438b2b
    MOV ESI,EDX                         ; 00438b2f
    SHR ESI,CL                          ; 00438b31
    MOV EAX,0xffffffff                  ; 00438b33
    MOV dword ptr [EBX + 0x4],ESI       ; 00438b38
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00438b3b
    SHL EAX,CL                          ; 00438b3f
    MOV EBX,dword ptr [ESP + 0x20]      ; 00438b41
    MOV EDI,dword ptr [ESI]             ; 00438b45
    NOT EAX                             ; 00438b47
    SUB EDI,EBX                         ; 00438b49
    AND EAX,EDX                         ; 00438b4b
    MOV dword ptr [ESI],EDI             ; 00438b4d
    JMP 0x00438b1c                      ; 00438b4f
        ;   XREF to: 00438b1c (UNCONDITIONAL_JUMP)  ; LAB_00438b1c
    MOV dword ptr [ECX],0x0             ; 00438b51
        ;   Label: LAB_00438b51
    MOV EAX,dword ptr [ECX + 0x4]       ; 00438b57
    MOV dword ptr [ECX + 0x4],0x0       ; 00438b5a
    JMP 0x00438b1c                      ; 00438b61
        ;   XREF to: 00438b1c (UNCONDITIONAL_JUMP)  ; LAB_00438b1c
    LEA EAX,[ESP + 0x4]                 ; 00438b63
        ;   Label: LAB_00438b63
    PUSH EAX                            ; 00438b67
    PUSH EDI                            ; 00438b68
    CALL FUN_00564c53                   ; 00438b69
        ;   XREF to: 00564c53 (UNCONDITIONAL_CALL)  ; undefined FUN_00564c53()
    MOV EAX,dword ptr [EDI]             ; 00438b6e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00438b70
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x10] ; 00438b73
    ADD ESP,0x8                         ; 00438b77
    TEST EDX,EDX                        ; 00438b7a
    JNZ 0x00438b0e                      ; 00438b7c
        ;   XREF to: 00438b0e (CONDITIONAL_JUMP)  ; LAB_00438b0e
    MOV ECX,dword ptr [ESI]             ; 00438b7e
    DEC ECX                             ; 00438b80
    XOR EAX,EAX                         ; 00438b81
    MOV dword ptr [ESI],ECX             ; 00438b83
    MOV AL,byte ptr [ESP + 0x4]         ; 00438b85
    TEST EAX,EAX                        ; 00438b89
    JL 0x00438b0e                       ; 00438b8b
        ;   XREF to: 00438b0e (CONDITIONAL_JUMP)  ; LAB_00438b0e
    MOV CL,BL                           ; 00438b8d
    SHL EAX,CL                          ; 00438b8f
    OR EBP,EAX                          ; 00438b91
    MOV EAX,dword ptr [ESP + 0x20]      ; 00438b93
    SUB EAX,0x8                         ; 00438b97
    ADD EBX,0x8                         ; 00438b9a
    MOV dword ptr [ESP + 0x20],EAX      ; 00438b9d
    CMP EAX,0x8                         ; 00438ba1
    JGE 0x00438b09                      ; 00438ba4
        ;   XREF to: 00438b09 (CONDITIONAL_JUMP)  ; LAB_00438b09
    CMP dword ptr [ESP + 0x20],0x0      ; 00438baa
        ;   Label: LAB_00438baa
    JLE 0x00438bf9                      ; 00438baf
        ;   XREF to: 00438bf9 (CONDITIONAL_JUMP)  ; LAB_00438bf9
    CMP dword ptr [ESI],0x1             ; 00438bb1
    JGE 0x00438c03                      ; 00438bb4
        ;   XREF to: 00438c03 (CONDITIONAL_JUMP)  ; LAB_00438c03
    MOV EAX,0xffffffff                  ; 00438bb6
        ;   Label: LAB_00438bb6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00438bbb
        ;   Label: LAB_00438bbb
    MOV dword ptr [ESI + 0x4],EAX       ; 00438bbf
    TEST EAX,EAX                        ; 00438bc2
    JL 0x00438c27                       ; 00438bc4
        ;   XREF to: 00438c27 (CONDITIONAL_JUMP)  ; LAB_00438c27
    MOV CL,byte ptr [ESP + 0x20]        ; 00438bc6
    MOV EAX,0xffffffff                  ; 00438bca
    SHL EAX,CL                          ; 00438bcf
    NOT EAX                             ; 00438bd1
    AND EAX,dword ptr [ESI + 0x4]       ; 00438bd3
    MOV CL,BL                           ; 00438bd6
    MOV EBX,dword ptr [ESI + 0x4]       ; 00438bd8
    SHL EAX,CL                          ; 00438bdb
    MOV CL,byte ptr [ESP + 0x20]        ; 00438bdd
    OR EBP,EAX                          ; 00438be1
    SHR EBX,CL                          ; 00438be3
    MOV EAX,0x8                         ; 00438be5
    MOV dword ptr [ESI + 0x4],EBX       ; 00438bea
    MOV ESI,dword ptr [ESP + 0x20]      ; 00438bed
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00438bf1
    SUB EAX,ESI                         ; 00438bf5
    MOV dword ptr [EBX],EAX             ; 00438bf7
    MOV EAX,EBP                         ; 00438bf9
        ;   Label: LAB_00438bf9
    ADD ESP,0x8                         ; 00438bfb
    POP EBP                             ; 00438bfe
    POP EDI                             ; 00438bff
    POP ESI                             ; 00438c00
    POP EBX                             ; 00438c01
    RET                                 ; 00438c02
    MOV EAX,ESP                         ; 00438c03
        ;   Label: LAB_00438c03
    PUSH EAX                            ; 00438c05
    PUSH EDI                            ; 00438c06
    CALL FUN_00564c53                   ; 00438c07
        ;   XREF to: 00564c53 (UNCONDITIONAL_CALL)  ; undefined FUN_00564c53()
    MOV EAX,dword ptr [EDI]             ; 00438c0c
    ADD EDI,dword ptr [EAX + 0x4]       ; 00438c0e
    MOV ECX,dword ptr [EDI + 0x10]      ; 00438c11
    ADD ESP,0x8                         ; 00438c14
    TEST ECX,ECX                        ; 00438c17
    JNZ 0x00438bb6                      ; 00438c19
        ;   XREF to: 00438bb6 (CONDITIONAL_JUMP)  ; LAB_00438bb6
    MOV EDI,dword ptr [ESI]             ; 00438c1b
    DEC EDI                             ; 00438c1d
    XOR EAX,EAX                         ; 00438c1e
    MOV dword ptr [ESI],EDI             ; 00438c20
    MOV AL,byte ptr [ESP]               ; 00438c22
    JMP 0x00438bbb                      ; 00438c25
        ;   XREF to: 00438bbb (UNCONDITIONAL_JUMP)  ; LAB_00438bbb
    MOV dword ptr [ESI + 0x4],EBP       ; 00438c27
        ;   Label: LAB_00438c27
    MOV EAX,0xffffffff                  ; 00438c2a
    MOV dword ptr [ESI],EBX             ; 00438c2f
    ADD ESP,0x8                         ; 00438c31
    POP EBP                             ; 00438c34
    POP EDI                             ; 00438c35
    POP ESI                             ; 00438c36
    POP EBX                             ; 00438c37
    RET                                 ; 00438c38

