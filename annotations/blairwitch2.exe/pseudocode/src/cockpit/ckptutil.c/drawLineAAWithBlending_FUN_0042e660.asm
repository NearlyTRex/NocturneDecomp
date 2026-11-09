; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_0042e660(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   base_color
; uchar            Stack[0x18]:1   blend_color
; int              Stack[0x1c]:4   blend_mode
;
; Referenced Globals:
;   undefined4 DAT_007bee2c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0
;   cockpit_ckptutil.c_putPixel_FUN_0042f260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e660
        ;   Label: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_0042e660
    PUSH ESI                            ; 0042e661
    PUSH EDI                            ; 0042e662
    PUSH EBP                            ; 0042e663
    MOV EBP,ESP                         ; 0042e664
    SUB ESP,0x3c                        ; 0042e666
    AND ESP,0xfffffff8                  ; 0042e669
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042e66c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042e66f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0042e672
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042e675
    MOV EDX,dword ptr [EBP + 0x24]      ; 0042e678
    MOV dword ptr [ESP],0x3b800000      ; 0042e67b
    CMP ESI,EAX                         ; 0042e682
    JG 0x0042e700                       ; 0042e684
        ;   XREF to: 0042e700 (CONDITIONAL_JUMP)  ; LAB_0042e700
    CMP dword ptr [0x007bee2c],0x0      ; 0042e68a | DAT_007bee2c
    JNZ 0x0042e6cf                      ; 0042e691
        ;   XREF to: 0042e6cf (CONDITIONAL_JUMP)  ; LAB_0042e6cf
    MOV ECX,dword ptr [0x01c35e48]      ; 0042e693 | DAT_01c35e48
    CMP EDI,ECX                         ; 0042e699
    JGE 0x0042e6a5                      ; 0042e69b
        ;   XREF to: 0042e6a5 (CONDITIONAL_JUMP)  ; LAB_0042e6a5
    CMP EBX,ECX                         ; 0042e69d
    JL 0x0042e700                       ; 0042e69f
        ;   XREF to: 0042e700 (CONDITIONAL_JUMP)  ; LAB_0042e700
    MOV ECX,dword ptr [0x01c35e50]      ; 0042e6a5 | DAT_01c35e50
        ;   Label: LAB_0042e6a5
    CMP EDI,ECX                         ; 0042e6ab
    JLE 0x0042e6b3                      ; 0042e6ad
        ;   XREF to: 0042e6b3 (CONDITIONAL_JUMP)  ; LAB_0042e6b3
    CMP EBX,ECX                         ; 0042e6af
    JG 0x0042e700                       ; 0042e6b1
        ;   XREF to: 0042e700 (CONDITIONAL_JUMP)  ; LAB_0042e700
    MOV ECX,dword ptr [0x01c35e4c]      ; 0042e6b3 | DAT_01c35e4c
        ;   Label: LAB_0042e6b3
    CMP ESI,ECX                         ; 0042e6b9
    JGE 0x0042e6c1                      ; 0042e6bb
        ;   XREF to: 0042e6c1 (CONDITIONAL_JUMP)  ; LAB_0042e6c1
    CMP EAX,ECX                         ; 0042e6bd
    JL 0x0042e700                       ; 0042e6bf
        ;   XREF to: 0042e700 (CONDITIONAL_JUMP)  ; LAB_0042e700
    MOV ECX,dword ptr [0x01c35e54]      ; 0042e6c1 | DAT_01c35e54
        ;   Label: LAB_0042e6c1
    CMP ESI,ECX                         ; 0042e6c7
    JLE 0x0042e6cf                      ; 0042e6c9
        ;   XREF to: 0042e6cf (CONDITIONAL_JUMP)  ; LAB_0042e6cf
    CMP EAX,ECX                         ; 0042e6cb
    JG 0x0042e700                       ; 0042e6cd
        ;   XREF to: 0042e700 (CONDITIONAL_JUMP)  ; LAB_0042e700
    SUB EBX,EDI                         ; 0042e6cf
        ;   Label: LAB_0042e6cf
    MOV dword ptr [ESP + 0x2c],EBX      ; 0042e6d1
    TEST EBX,EBX                        ; 0042e6d5
    JL 0x0042e707                       ; 0042e6d7
        ;   XREF to: 0042e707 (CONDITIONAL_JUMP)  ; LAB_0042e707
    MOV dword ptr [ESP + 0x24],0x1      ; 0042e6d9
    SUB EAX,ESI                         ; 0042e6e1
        ;   Label: LAB_0042e6e1
    MOV dword ptr [ESP + 0x28],EAX      ; 0042e6e3
    JNZ 0x0042e72d                      ; 0042e6e7
        ;   XREF to: 0042e72d (CONDITIONAL_JUMP)  ; LAB_0042e72d
    MOV BL,DL                           ; 0042e6e9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042e6eb
        ;   Label: LAB_0042e6eb
    DEC EDX                             ; 0042e6ef
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042e6f0
    JNZ 0x0042e718                      ; 0042e6f4
        ;   XREF to: 0042e718 (CONDITIONAL_JUMP)  ; LAB_0042e718
    LEA EAX,[EAX]                       ; 0042e6f6
    LEA EDX,[EDX]                       ; 0042e6fc
    MOV ESP,EBP                         ; 0042e700
        ;   Label: LAB_0042e700
    POP EBP                             ; 0042e702
    POP EDI                             ; 0042e703
    POP ESI                             ; 0042e704
    POP EBX                             ; 0042e705
    RET                                 ; 0042e706
    NEG EBX                             ; 0042e707
        ;   Label: LAB_0042e707
    MOV ECX,0xffffffff                  ; 0042e709
    MOV dword ptr [ESP + 0x2c],EBX      ; 0042e70e
    MOV dword ptr [ESP + 0x24],ECX      ; 0042e712
    JMP 0x0042e6e1                      ; 0042e716
        ;   XREF to: 0042e6e1 (UNCONDITIONAL_JUMP)  ; LAB_0042e6e1
    ADD EDI,dword ptr [ESP + 0x24]      ; 0042e718
        ;   Label: LAB_0042e718
    XOR EAX,EAX                         ; 0042e71c
    MOV AL,BL                           ; 0042e71e
    PUSH EAX                            ; 0042e720
    PUSH ESI                            ; 0042e721
    PUSH EDI                            ; 0042e722
    CALL cockpit_ckptutil.c_putPixel_FUN_0042f260 ; 0042e723
        ;   XREF to: 0042f260 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_0042f260(int x, int y, int color)
    ADD ESP,0xc                         ; 0042e728
    JMP 0x0042e6eb                      ; 0042e72b
        ;   XREF to: 0042e6eb (UNCONDITIONAL_JUMP)  ; LAB_0042e6eb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e72d
        ;   Label: LAB_0042e72d
    TEST EAX,EAX                        ; 0042e731
    JNZ 0x0042e75c                      ; 0042e733
        ;   XREF to: 0042e75c (CONDITIONAL_JUMP)  ; LAB_0042e75c
    MOV BL,DL                           ; 0042e735
    XOR EAX,EAX                         ; 0042e737
        ;   Label: LAB_0042e737
    MOV AL,BL                           ; 0042e739
    PUSH EAX                            ; 0042e73b
    INC ESI                             ; 0042e73c
    PUSH ESI                            ; 0042e73d
    PUSH EDI                            ; 0042e73e
    CALL cockpit_ckptutil.c_putPixel_FUN_0042f260 ; 0042e73f
        ;   XREF to: 0042f260 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_0042f260(int x, int y, int color)
    ADD ESP,0xc                         ; 0042e744
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042e747
    DEC ECX                             ; 0042e74b
    MOV dword ptr [ESP + 0x28],ECX      ; 0042e74c
    CMP ECX,0x1                         ; 0042e750
    JNZ 0x0042e737                      ; 0042e753
        ;   XREF to: 0042e737 (CONDITIONAL_JUMP)  ; LAB_0042e737
    MOV ESP,EBP                         ; 0042e755
    POP EBP                             ; 0042e757
    POP EDI                             ; 0042e758
    POP ESI                             ; 0042e759
    POP EBX                             ; 0042e75a
    RET                                 ; 0042e75b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042e75c
        ;   Label: LAB_0042e75c
    XOR EBX,EBX                         ; 0042e760
    CMP EAX,ECX                         ; 0042e762
    JLE 0x0042e82a                      ; 0042e764
        ;   XREF to: 0042e82a (CONDITIONAL_JUMP)  ; LAB_0042e82a
    CMP dword ptr [EBP + 0x2c],0x0      ; 0042e76a
    JNZ 0x0042e7ed                      ; 0042e76e
        ;   XREF to: 0042e7ed (CONDITIONAL_JUMP)  ; LAB_0042e7ed
    MOV byte ptr [ESP + 0x38],DL        ; 0042e774
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042e778
        ;   Label: LAB_0042e778
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042e77c
    XOR EDX,EDX                         ; 0042e780
    SHL EAX,0x10                        ; 0042e782
    DIV ECX                             ; 0042e785
    MOV dword ptr [ESP + 0x20],EAX      ; 0042e787
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042e78b
        ;   Label: LAB_0042e78b
    DEC ECX                             ; 0042e78f
    MOV dword ptr [ESP + 0x2c],ECX      ; 0042e790
    JZ 0x0042e700                       ; 0042e794
        ;   XREF to: 0042e700 (CONDITIONAL_JUMP)  ; LAB_0042e700
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042e79a
    MOV EAX,EBX                         ; 0042e79e
    ADD EBX,EDX                         ; 0042e7a0
    AND EBX,0xffff                      ; 0042e7a2
    CMP EBX,EAX                         ; 0042e7a8
    JA 0x0042e7ad                       ; 0042e7aa
        ;   XREF to: 0042e7ad (CONDITIONAL_JUMP)  ; LAB_0042e7ad
    INC ESI                             ; 0042e7ac
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042e7ad
        ;   Label: LAB_0042e7ad
    MOV EAX,EBX                         ; 0042e7b1
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0042e7b3
    SHR EAX,0x8                         ; 0042e7b6
    ADD EDI,ECX                         ; 0042e7b9
    TEST EDX,EDX                        ; 0042e7bb
    JNZ 0x0042e7f6                      ; 0042e7bd
        ;   XREF to: 0042e7f6 (CONDITIONAL_JUMP)  ; LAB_0042e7f6
    MOV dword ptr [ESP + 0x8],EDX       ; 0042e7bf
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e7c3
    FILD qword ptr [ESP + 0x4]          ; 0042e7c7
    FLD1                                ; 0042e7cb
    XOR EAX,EAX                         ; 0042e7cd
    FADDP                               ; 0042e7cf
    MOV AL,byte ptr [ESP + 0x38]        ; 0042e7d1
    FMUL float ptr [ESP]                ; 0042e7d5
    PUSH EAX                            ; 0042e7d8
    FSTP float ptr [ESP + 0x10]         ; 0042e7d9
    PUSH dword ptr [ESP + 0x10]         ; 0042e7dd
    PUSH ESI                            ; 0042e7e1
    PUSH EDI                            ; 0042e7e2
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0 ; 0042e7e3
        ;   XREF to: 0042ebf0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 0042e7e8
    JMP 0x0042e78b                      ; 0042e7eb
        ;   XREF to: 0042e78b (UNCONDITIONAL_JUMP)  ; LAB_0042e78b
    MOV AL,byte ptr [EBP + 0x28]        ; 0042e7ed
        ;   Label: LAB_0042e7ed
    MOV byte ptr [ESP + 0x38],AL        ; 0042e7f0
    JMP 0x0042e778                      ; 0042e7f4
        ;   XREF to: 0042e778 (UNCONDITIONAL_JUMP)  ; LAB_0042e778
    XOR ECX,ECX                         ; 0042e7f6
        ;   Label: LAB_0042e7f6
    XOR AL,0xff                         ; 0042e7f8
    MOV dword ptr [ESP + 0x8],ECX       ; 0042e7fa
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e7fe
    XOR EAX,EAX                         ; 0042e802
    FILD qword ptr [ESP + 0x4]          ; 0042e804
    MOV AL,byte ptr [ESP + 0x38]        ; 0042e808
    FMUL float ptr [ESP]                ; 0042e80c
    PUSH EAX                            ; 0042e80f
    FSTP float ptr [ESP + 0x34]         ; 0042e810
    LEA EAX,[ESI + 0x1]                 ; 0042e814
    PUSH dword ptr [ESP + 0x34]         ; 0042e817
    PUSH EAX                            ; 0042e81b
    PUSH EDI                            ; 0042e81c
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0 ; 0042e81d
        ;   XREF to: 0042ebf0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 0042e822
    JMP 0x0042e78b                      ; 0042e825
        ;   XREF to: 0042e78b (UNCONDITIONAL_JUMP)  ; LAB_0042e78b
    CMP dword ptr [EBP + 0x2c],0x0      ; 0042e82a
        ;   Label: LAB_0042e82a
    JNZ 0x0042e8ca                      ; 0042e82e
        ;   XREF to: 0042e8ca (CONDITIONAL_JUMP)  ; LAB_0042e8ca
    CMP dword ptr [ESP + 0x24],0x1      ; 0042e834
    JNZ 0x0042e8ca                      ; 0042e839
        ;   XREF to: 0042e8ca (CONDITIONAL_JUMP)  ; LAB_0042e8ca
    MOV EAX,0x1                         ; 0042e83f
        ;   Label: LAB_0042e83f
    MOV dword ptr [ESP + 0x18],EAX      ; 0042e844
        ;   Label: LAB_0042e844
    TEST EAX,EAX                        ; 0042e848
    JZ 0x0042e8e2                       ; 0042e84a
        ;   XREF to: 0042e8e2 (CONDITIONAL_JUMP)  ; LAB_0042e8e2
    MOV byte ptr [ESP + 0x34],DL        ; 0042e850
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e854
        ;   Label: LAB_0042e854
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042e858
    XOR EDX,EDX                         ; 0042e85c
    SHL EAX,0x10                        ; 0042e85e
    DIV ECX                             ; 0042e861
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042e863
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042e867
        ;   Label: LAB_0042e867
    DEC EAX                             ; 0042e86b
    MOV dword ptr [ESP + 0x28],EAX      ; 0042e86c
    JZ 0x0042e700                       ; 0042e870
        ;   XREF to: 0042e700 (CONDITIONAL_JUMP)  ; LAB_0042e700
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042e876
    MOV EAX,EBX                         ; 0042e87a
    ADD EBX,ECX                         ; 0042e87c
    AND EBX,0xffff                      ; 0042e87e
    CMP EBX,EAX                         ; 0042e884
    JA 0x0042e88c                       ; 0042e886
        ;   XREF to: 0042e88c (CONDITIONAL_JUMP)  ; LAB_0042e88c
    ADD EDI,dword ptr [ESP + 0x24]      ; 0042e888
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042e88c
        ;   Label: LAB_0042e88c
    MOV EAX,EBX                         ; 0042e890
    INC ESI                             ; 0042e892
    SHR EAX,0x8                         ; 0042e893
    TEST EDX,EDX                        ; 0042e896
    JZ 0x0042e8ee                       ; 0042e898
        ;   XREF to: 0042e8ee (CONDITIONAL_JUMP)  ; LAB_0042e8ee
    XOR EDX,EDX                         ; 0042e89a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e89c
    MOV dword ptr [ESP + 0x8],EDX       ; 0042e8a0
    XOR EAX,EAX                         ; 0042e8a4
    FILD qword ptr [ESP + 0x4]          ; 0042e8a6
    FLD1                                ; 0042e8aa
    FADDP                               ; 0042e8ac
    MOV AL,byte ptr [ESP + 0x34]        ; 0042e8ae
    FMUL float ptr [ESP]                ; 0042e8b2
    PUSH EAX                            ; 0042e8b5
    FSTP float ptr [ESP + 0x14]         ; 0042e8b6
    PUSH dword ptr [ESP + 0x14]         ; 0042e8ba
    PUSH ESI                            ; 0042e8be
    PUSH EDI                            ; 0042e8bf
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0 ; 0042e8c0
        ;   XREF to: 0042ebf0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 0042e8c5
    JMP 0x0042e867                      ; 0042e8c8
        ;   XREF to: 0042e867 (UNCONDITIONAL_JUMP)  ; LAB_0042e867
    CMP dword ptr [EBP + 0x2c],0x1      ; 0042e8ca
        ;   Label: LAB_0042e8ca
    JNZ 0x0042e8db                      ; 0042e8ce
        ;   XREF to: 0042e8db (CONDITIONAL_JUMP)  ; LAB_0042e8db
    CMP dword ptr [ESP + 0x24],-0x1     ; 0042e8d0
    JZ 0x0042e83f                       ; 0042e8d5
        ;   XREF to: 0042e83f (CONDITIONAL_JUMP)  ; LAB_0042e83f
    XOR EAX,EAX                         ; 0042e8db
        ;   Label: LAB_0042e8db
    JMP 0x0042e844                      ; 0042e8dd
        ;   XREF to: 0042e844 (UNCONDITIONAL_JUMP)  ; LAB_0042e844
    MOV AL,byte ptr [EBP + 0x28]        ; 0042e8e2
        ;   Label: LAB_0042e8e2
    MOV byte ptr [ESP + 0x34],AL        ; 0042e8e5
    JMP 0x0042e854                      ; 0042e8e9
        ;   XREF to: 0042e854 (UNCONDITIONAL_JUMP)  ; LAB_0042e854
    XOR AL,0xff                         ; 0042e8ee
        ;   Label: LAB_0042e8ee
    MOV dword ptr [ESP + 0x8],EDX       ; 0042e8f0
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e8f4
    XOR EAX,EAX                         ; 0042e8f8
    FILD qword ptr [ESP + 0x4]          ; 0042e8fa
    MOV AL,byte ptr [ESP + 0x34]        ; 0042e8fe
    FMUL float ptr [ESP]                ; 0042e902
    PUSH EAX                            ; 0042e905
    FSTP float ptr [ESP + 0x18]         ; 0042e906
    PUSH dword ptr [ESP + 0x18]         ; 0042e90a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042e90e
    PUSH ESI                            ; 0042e912
    ADD EAX,EDI                         ; 0042e913
    PUSH EAX                            ; 0042e915
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0 ; 0042e916
        ;   XREF to: 0042ebf0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042ebf0(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 0042e91b
    JMP 0x0042e867                      ; 0042e91e
        ;   XREF to: 0042e867 (UNCONDITIONAL_JUMP)  ; LAB_0042e867

