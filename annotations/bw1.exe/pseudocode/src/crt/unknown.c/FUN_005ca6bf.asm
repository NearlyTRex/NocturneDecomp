; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005ca6bf(int param_1,int *param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c4558
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ca6bf
        ;   Label: crt_unknown.c_FUN_005ca6bf
    MOV EBP,ESP                         ; 005ca6c0
    PUSH EBX                            ; 005ca6c2
    PUSH ESI                            ; 005ca6c3
    PUSH EDI                            ; 005ca6c4
    SUB ESP,0x40                        ; 005ca6c5
    MOV EDI,dword ptr [EBP + 0x8]       ; 005ca6c8
    MOV EDX,dword ptr [EBP + 0xc]       ; 005ca6cb
    MOV EBX,dword ptr [EBP + 0x10]      ; 005ca6ce
    XOR EAX,EAX                         ; 005ca6d1
    MOV AL,byte ptr [EBX + 0x15]        ; 005ca6d3
    MOV dword ptr [EBP + -0x40],EAX     ; 005ca6d6
    AND AL,0x5f                         ; 005ca6d9
    MOV ESI,dword ptr [EBX + 0x8]       ; 005ca6db
    AND EAX,0xff                        ; 005ca6de
    CMP EAX,0x47                        ; 005ca6e3
    JNZ 0x005ca70b                      ; 005ca6e6
        ;   XREF to: 005ca70b (CONDITIONAL_JUMP)  ; LAB_005ca70b
    TEST ESI,ESI                        ; 005ca6e8
    JNZ 0x005ca6f1                      ; 005ca6ea
        ;   XREF to: 005ca6f1 (CONDITIONAL_JUMP)  ; LAB_005ca6f1
    MOV ESI,0x1                         ; 005ca6ec
    MOV dword ptr [EBP + -0x44],0x4     ; 005ca6f1
        ;   Label: LAB_005ca6f1
    MOV ECX,dword ptr [EBP + -0x40]     ; 005ca6f8
    MOV EAX,0x1                         ; 005ca6fb
    SUB ECX,0x2                         ; 005ca700
    MOV dword ptr [EBP + -0x48],EAX     ; 005ca703
    MOV dword ptr [EBP + -0x40],ECX     ; 005ca706
    JMP 0x005ca72a                      ; 005ca709
        ;   XREF to: 005ca72a (UNCONDITIONAL_JUMP)  ; LAB_005ca72a
    CMP EAX,0x45                        ; 005ca70b
        ;   Label: LAB_005ca70b
    JNZ 0x005ca71d                      ; 005ca70e
        ;   XREF to: 005ca71d (CONDITIONAL_JUMP)  ; LAB_005ca71d
    MOV ECX,0x1                         ; 005ca710
    MOV dword ptr [EBP + -0x44],ECX     ; 005ca715
    MOV dword ptr [EBP + -0x48],ECX     ; 005ca718
    JMP 0x005ca72a                      ; 005ca71b
        ;   XREF to: 005ca72a (UNCONDITIONAL_JUMP)  ; LAB_005ca72a
    MOV ECX,0x2                         ; 005ca71d
        ;   Label: LAB_005ca71d
    XOR EAX,EAX                         ; 005ca722
    MOV dword ptr [EBP + -0x44],ECX     ; 005ca724
    MOV dword ptr [EBP + -0x48],EAX     ; 005ca727
    TEST byte ptr [EBX + 0x1e],0x1      ; 005ca72a
        ;   Label: LAB_005ca72a
    JZ 0x005ca734                       ; 005ca72e
        ;   XREF to: 005ca734 (CONDITIONAL_JUMP)  ; LAB_005ca734
    OR byte ptr [EBP + -0x44],0x10      ; 005ca730
    MOV EAX,dword ptr [EDX]             ; 005ca734
        ;   Label: LAB_005ca734
    ADD EAX,0x8                         ; 005ca736
    MOV dword ptr [EDX],EAX             ; 005ca739
    MOV EDX,EAX                         ; 005ca73b
    MOV EAX,dword ptr [EAX + -0x8]      ; 005ca73d
    MOV dword ptr [EBP + -0x14],EAX     ; 005ca740
    MOV EAX,dword ptr [EDX + -0x4]      ; 005ca743
    LEA EDX,[EBP + -0x20]               ; 005ca746
    MOV dword ptr [EBP + -0x10],EAX     ; 005ca749
    LEA EAX,[EBP + -0x14]               ; 005ca74c
    FLD double ptr [EAX]                ; 005ca74f
    FSTP extended double ptr [EDX]      ; 005ca751
    CMP ESI,-0x1                        ; 005ca753
    JNZ 0x005ca75d                      ; 005ca756
        ;   XREF to: 005ca75d (CONDITIONAL_JUMP)  ; LAB_005ca75d
    MOV ESI,0x6                         ; 005ca758
    LEA EAX,[EDI + 0x1]                 ; 005ca75d
        ;   Label: LAB_005ca75d
    PUSH EAX                            ; 005ca760
    LEA EAX,[EBP + -0x4c]               ; 005ca761
    PUSH EAX                            ; 005ca764
    LEA EAX,[EBP + -0x20]               ; 005ca765
    XOR EDX,EDX                         ; 005ca768
    PUSH EAX                            ; 005ca76a
    MOV dword ptr [EBP + -0x4c],ESI     ; 005ca76b
    MOV dword ptr [EBP + -0x3c],EDX     ; 005ca76e
    CALL crt_unknown.c_FUN_005c4558     ; 005ca771
        ;   XREF to: 005c4558 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4558()
    MOV EAX,dword ptr [EBP + -0x30]     ; 005ca776
    MOV dword ptr [EBX + 0x28],EAX      ; 005ca779
    MOV EAX,dword ptr [EBP + -0x2c]     ; 005ca77c
    MOV dword ptr [EBX + 0x2c],EAX      ; 005ca77f
    MOV EAX,dword ptr [EBP + -0x28]     ; 005ca782
    MOV dword ptr [EBX + 0x30],EAX      ; 005ca785
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ca788
    MOV dword ptr [EBX + 0x34],EAX      ; 005ca78b
    MOV ECX,dword ptr [EBP + -0x38]     ; 005ca78e
    ADD ESP,0xc                         ; 005ca791
    TEST ECX,ECX                        ; 005ca794
    JGE 0x005ca7a7                      ; 005ca796
        ;   XREF to: 005ca7a7 (CONDITIONAL_JUMP)  ; LAB_005ca7a7
    MOV EAX,dword ptr [EBX + 0x20]      ; 005ca798
    LEA EDX,[EAX + 0x1]                 ; 005ca79b
    MOV dword ptr [EBX + 0x20],EDX      ; 005ca79e
    MOV byte ptr [EDI + EAX*0x1],0x2d   ; 005ca7a1
    JMP 0x005ca7d0                      ; 005ca7a5
        ;   XREF to: 005ca7d0 (UNCONDITIONAL_JUMP)  ; LAB_005ca7d0
    MOV CH,byte ptr [EBX + 0x1e]        ; 005ca7a7
        ;   Label: LAB_005ca7a7
    TEST CH,0x4                         ; 005ca7aa
    JZ 0x005ca7be                       ; 005ca7ad
        ;   XREF to: 005ca7be (CONDITIONAL_JUMP)  ; LAB_005ca7be
    MOV EAX,dword ptr [EBX + 0x20]      ; 005ca7af
    LEA EDX,[EAX + 0x1]                 ; 005ca7b2
    MOV dword ptr [EBX + 0x20],EDX      ; 005ca7b5
    MOV byte ptr [EDI + EAX*0x1],0x2b   ; 005ca7b8
    JMP 0x005ca7d0                      ; 005ca7bc
        ;   XREF to: 005ca7d0 (UNCONDITIONAL_JUMP)  ; LAB_005ca7d0
    TEST CH,0x2                         ; 005ca7be
        ;   Label: LAB_005ca7be
    JZ 0x005ca7d0                       ; 005ca7c1
        ;   XREF to: 005ca7d0 (CONDITIONAL_JUMP)  ; LAB_005ca7d0
    MOV EAX,dword ptr [EBX + 0x20]      ; 005ca7c3
    LEA EDX,[EAX + 0x1]                 ; 005ca7c6
    MOV dword ptr [EBX + 0x20],EDX      ; 005ca7c9
    MOV byte ptr [EDI + EAX*0x1],0x20   ; 005ca7cc
    MOV DX,DS                           ; 005ca7d0
        ;   Label: LAB_005ca7d0
    MOV EAX,EDI                         ; 005ca7d2
    LEA ESP,[EBP + -0xc]                ; 005ca7d4
    POP EDI                             ; 005ca7d7
    POP ESI                             ; 005ca7d8
    POP EBX                             ; 005ca7d9
    POP EBP                             ; 005ca7da
    RET                                 ; 005ca7db

