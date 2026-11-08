; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004927fc(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004927fc
        ;   Label: FUN_004927fc
    MOV AL,byte ptr [EDX]               ; 004927fd
    TEST ECX,0x7                        ; 004927ff
    JZ 0x0049281f                       ; 00492805
        ;   XREF to: 0049281f (CONDITIONAL_JUMP)  ; LAB_0049281f
    TEST AL,AL                          ; 00492807
        ;   Label: LAB_00492807
    MOV byte ptr [ECX],AL               ; 00492809
    JZ 0x0049286b                       ; 0049280b
        ;   XREF to: 0049286b (CONDITIONAL_JUMP)  ; LAB_0049286b
    MOV AL,byte ptr [EDX + 0x1]         ; 0049280d
    INC ECX                             ; 00492810
    INC EDX                             ; 00492811
    TEST ECX,0x7                        ; 00492812
    JNZ 0x00492807                      ; 00492818
        ;   XREF to: 00492807 (CONDITIONAL_JUMP)  ; LAB_00492807
    JMP 0x0049281f                      ; 0049281a
        ;   XREF to: 0049281f (UNCONDITIONAL_JUMP)  ; LAB_0049281f
    FISTP qword ptr [ECX + -0x8]        ; 0049281c
        ;   Label: LAB_0049281c
    FILD qword ptr [EDX]                ; 0049281f
        ;   Label: LAB_0049281f
    MOV EAX,dword ptr [EDX]             ; 00492821
    ADD ECX,0x8                         ; 00492823
    TEST EAX,0xff                       ; 00492826
    JZ 0x00492898                       ; 0049282b
        ;   XREF to: 00492898 (CONDITIONAL_JUMP)  ; LAB_00492898
    TEST EAX,0xff00                     ; 0049282d
    JZ 0x00492890                       ; 00492832
        ;   XREF to: 00492890 (CONDITIONAL_JUMP)  ; LAB_00492890
    TEST EAX,0xff0000                   ; 00492834
    JZ 0x0049288c                       ; 00492839
        ;   XREF to: 0049288c (CONDITIONAL_JUMP)  ; LAB_0049288c
    TEST EAX,0xff000000                 ; 0049283b
    JZ 0x00492883                       ; 00492840
        ;   XREF to: 00492883 (CONDITIONAL_JUMP)  ; LAB_00492883
    MOV EBX,dword ptr [EDX + 0x4]       ; 00492842
    ADD EDX,0x8                         ; 00492845
    TEST EBX,0xff                       ; 00492848
    JZ 0x00492880                       ; 0049284e
        ;   XREF to: 00492880 (CONDITIONAL_JUMP)  ; LAB_00492880
    TEST EBX,0xff00                     ; 00492850
    JZ 0x00492874                       ; 00492856
        ;   XREF to: 00492874 (CONDITIONAL_JUMP)  ; LAB_00492874
    TEST EBX,0xff0000                   ; 00492858
    JZ 0x00492870                       ; 0049285e
        ;   XREF to: 00492870 (CONDITIONAL_JUMP)  ; LAB_00492870
    TEST EBX,0xff000000                 ; 00492860
    JNZ 0x0049281c                      ; 00492866
        ;   XREF to: 0049281c (CONDITIONAL_JUMP)  ; LAB_0049281c
    FISTP qword ptr [ECX + -0x8]        ; 00492868
    POP EBX                             ; 0049286b
        ;   Label: LAB_0049286b
    RET                                 ; 0049286c
    MOV byte ptr [ECX + -0x2],0x0       ; 00492870
        ;   Label: LAB_00492870
    MOV word ptr [ECX + -0x4],BX        ; 00492874
        ;   Label: LAB_00492874
    MOV dword ptr [ECX + -0x8],EAX      ; 00492878
    FMULP ST0                           ; 0049287b
    POP EBX                             ; 0049287d
    RET                                 ; 0049287e
    MOV byte ptr [ECX + -0x4],BL        ; 00492880
        ;   Label: LAB_00492880
    MOV dword ptr [ECX + -0x8],EAX      ; 00492883
        ;   Label: LAB_00492883
    POP EBX                             ; 00492886
    FMULP ST0                           ; 00492887
    RET                                 ; 00492889
    MOV byte ptr [ECX + -0x6],0x0       ; 0049288c
        ;   Label: LAB_0049288c
    MOV word ptr [ECX + -0x8],AX        ; 00492890
        ;   Label: LAB_00492890
    POP EBX                             ; 00492894
    FMULP ST0                           ; 00492895
    RET                                 ; 00492897
    MOV byte ptr [ECX + -0x8],AL        ; 00492898
        ;   Label: LAB_00492898
    POP EBX                             ; 0049289b
    FMULP ST0                           ; 0049289c
    RET                                 ; 0049289e

